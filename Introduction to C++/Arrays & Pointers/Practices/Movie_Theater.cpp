// Write a program that replaces all 0 values in the given array by 1 and outputs the resulting matrix.

#include <iostream>
using namespace std;

int main() {
    
    int rows = 6;
    int cols = 6;
    
    float matrix[rows][cols] = {
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
    };
    
    for(int x = 0; x <= 5; x++){
        for(int y = 0; y <= 5; y++){

            matrix[x][y] = 1;

        }

    }
    
    for(int x = 0; x <=5; x++){
        for(int y = 0; y <= 5; y++){

            cout << matrix[x][y];

        }

    cout << endl;

    }

}