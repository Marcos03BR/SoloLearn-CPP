// Write a program to calculate the number of all possible combinations with n number of colors.

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int result = 1;

    for(int i = 1; i <= n; i++){

        result = result * i;

    }

    cout << result;
    
}