// Define the run() function that will take the number as a parameter and output the corresponding game.

#include <iostream>
using namespace std;

/*
1. Shooter
2. Puzzle
3. Snake
*/

void run(int number){

    switch(number){

        case 1:
        cout << "Shooter";
        break;
        case 2:
        cout << "Puzzle";
        break;
        case 3:
        cout << "Snake";
        break;
        default:
        cout << "Try again";

    }
    
}

int main() {

    int number;
    cin >> number;
    run(number);
    
}