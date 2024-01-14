// Create the toSeconds() function, which takes the days as its parameter, calculates and returns the number of seconds.

#include <iostream>
using namespace std;

int toSeconds(int x){

    return x * 86400;

}

int main() {
    
    int days;
    cin >> days;

    int seconds = toSeconds(days);
    cout << seconds;

}