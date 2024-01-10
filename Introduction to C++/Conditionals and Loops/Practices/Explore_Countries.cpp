/* You're a tour manager and need a program that will identify small countries. A country is considered small if its population is under 10000 and its area is under 10000 hectares.
The given code takes population and area from user input.
Task:
Complete the code to output "Small country" if both conditions are met. Don't output anything otherwise.
Input Example:
9955
7522
Output Example:
Small country */

#include <iostream>
using namespace std;

int main() {

    int population, area;
    cin >> population >> area;

    if (population < 10000 && area < 10000){

        cout << "Small country";

    }
    
}