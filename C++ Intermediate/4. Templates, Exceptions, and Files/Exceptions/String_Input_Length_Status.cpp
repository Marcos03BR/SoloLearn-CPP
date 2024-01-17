// Create a program to take a string as input, check its length and output the status.

#include <iostream>
using namespace std;

int main() {
    string name;
    cin >> name;

    try {
        if (name.size() < 4 || name.size() > 20) {
            throw 1;
        }
        cout << "Valid" << endl;
    } catch (int x) {
        cout << "Invalid" << endl;
    }

    return 0;
}