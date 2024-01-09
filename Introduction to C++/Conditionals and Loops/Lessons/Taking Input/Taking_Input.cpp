/*
Now that we know how to take input from the user, we can make more interactive programs!

Let's change one of our previous examples, where we calculated the area of a wall, and use the length and height values as input.

Task
Complete the code to take the length and height values as input, then calculate and output the area by multiplying them.*/

#include <iostream>
using namespace std;

int main() {
    double length;
    double height;

    cin >> length >> height;
    double area = length * height;

    cout << area;

    
}