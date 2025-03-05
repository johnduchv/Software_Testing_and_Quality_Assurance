#include <stdio.h>

int Sum(int a[], int n) {
    int i, total = 0;
    for (i = 0; i < n; i++)
        total = total + a[i];
    return total;
}

int main() {
    int n, i; 
    int k; //the number of elenments of array a
    
    printf("Enter the number of elements of array a: ");
	    scanf("%d", &k);
	    
    int a[k];
    printf("Enter k elements of array a: ");
    for (i = 0; i < k; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Enter the value of n: ");
	    scanf("%d", &n);
    
    printf("Sum of array elements: %d\n", Sum(a, n));
    return 0;
}
