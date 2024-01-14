// Write a program to take the selected number as input and output the topic name that has the corresponding index.

#include <iostream>
using namespace std;

int main() {

    string topics[] = {"Sports", "Politics", "Business", "Technology", "Art"};

    int num;
    cin >> num;
    
    cout << topics[num];
    
}