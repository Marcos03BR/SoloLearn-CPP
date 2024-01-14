/* You are writing a program for a customer support vendor. When calling the service, users can select from among these features using the corresponding numbers:
1 => Choose language
2 => Contact the operator
3 => Leave feedback
The given program takes the selected number as input.

Task
Complete the program to output the corresponding message based on the input number.
In case the user enters an unsupported number, the program should output Unknown.

Input Example: 2
Output Example: Contact the operator */

#include <iostream>
using namespace std;

int main() {

    int number;
    cin >> number;

    /*
    1 => Choose language
    2 => Contact the operator
    3 => Leave feedback
    */

    switch (number){
        case 1:
        cout << "Choose language";
        break;
        case 2:
        cout << "Contact the operator";
        break;
        case 3:
        cout << "Leave feedback";
        break;
        default:
        cout << "Unknown";
        break;

    }
    
}