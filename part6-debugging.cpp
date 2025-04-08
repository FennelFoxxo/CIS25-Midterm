/*
Original code:

#include<iostream>
using namespace std;

int main() {
    int number = 10;
    if(number = 20) {
        cout << "Number is 20" << endl;
    } else {
        cout << "Number is not 20" << endl;
    }

    for(int i = 0; i <= 5; i++);
        cout << i << endl;

    return 0;
}

*/

#include<iostream>
using namespace std;

int main() {
    int number = 10;
    if(number == 20) {  // Changed = to == to test equality
        cout << "Number is 20" << endl;
    } else {
        cout << "Number is not 20" << endl;
    }

    for(int i = 0; i <= 5; i++) { // Changed semicolon to opening brace so that next line will be inside for loop body
        cout << i << endl;
    } // Added closing brace to end for loop body

    return 0;
}
