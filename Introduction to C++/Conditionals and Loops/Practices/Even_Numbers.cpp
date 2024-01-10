/* You are given a program that outputs all of the numbers from 0 to 10 separated by spaces.

Change the code to make it output only the even numbers. */

#include <iostream>
using namespace std;

int main() {

    int x = 0;

    while(x<=10){
        if (( x % 2 ) == 0){

        cout << x << " ";

        }
        x++;    
    }
}