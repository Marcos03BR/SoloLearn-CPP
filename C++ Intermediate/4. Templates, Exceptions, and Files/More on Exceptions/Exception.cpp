// Handle wrong user input, by throwing an exception with code 404.

#include <iostream>
using namespace std;

int main() {
    string menu[] = {"fruits", "chicken", "fish", "cake"};
    try {
        int x;
        cin >> x;
        if (x >= 0 && x < 4){

            cout << menu[x];

        } else {

            throw 404;

        }
        
    }
    catch(...) {
        cout << "404 - not found";
        
    }
}