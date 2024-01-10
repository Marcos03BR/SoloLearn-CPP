#include <iostream>
using namespace std;

int main() {

    string password, attempt;
    cin >> password >> attempt;

    if (password == attempt){

        cout << "Welcome";

    } else {

        cout << "Try again";

    }
    
}