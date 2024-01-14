// Create a timer program that will take the number of seconds as input, and countdown to 0.

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    while (number >= 0){

        cout << number << endl;
        number--;

    }

}