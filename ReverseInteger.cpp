#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;//takes in an integer.

    bool neg = false;//boolean for checking if the number is negative
    if(num < 0) {
        neg = true;
        num = num * -1;
    }
    //changing integer to string
    string rev = to_string(num);
    string rev1 = "";
    //for loop which reverses the string
    for(int i = rev.length() - 1; i >= 0; i--) {
        rev1 = rev1 + rev[i]; 
    }
    //prints out the results of the reversed number
    if(neg== true) {
        cout << "Reversed: -" << rev1 << endl;
    } else {
        cout << "Reversed: " << rev1 << endl;
    }

    return 0;
}
