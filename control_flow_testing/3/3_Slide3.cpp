#include <iostream>
#include <string>

using namespace std;

string foo(int x) {
    string res;
    switch (x) {
        case 65:
            res = "A";
            break;
        case 66:
            res = "B";
            break;
        case 67:
            res = "C";
            break;
        default:
            res = "haven't check";
    }
    return res;
}

int main() {
    int x;
    cout << "Enter an integer value: ";
    cin >> x;
    cout << "Result: " << foo(x) << endl;
    return 0;
}
