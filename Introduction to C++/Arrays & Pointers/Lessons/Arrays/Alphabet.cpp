// Take a number as input and output the letter from the array that corresponds to that index.

#include <iostream>
using namespace std;

int main() {
    char letters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    int num;
    cin >> num;

    cout << letters[num];
    
}