/*
A local electronics shop has a great deal for notebooks.

You want to buy as many notebooks as you can afford. For that, you need to calculate how many notebooks you can buy with the amount in your bank account and how much money will be left over.

The given code includes comments as instructions for two tasks you need to complete.

Follow the instructions to solve this code coach!*/

#include <iostream>
using namespace std;

int main() {
    
    // Your account balance
    auto balance = 2452.4;
    // Price for each notebook
    auto price = 259.99;

    // Task: Calculate the number of notebooks you can afford and output it.
    // Hint: Use an integer to store the result.
    int total = balance / price;
    cout << total << endl;

    // Task: Calculate the remaining amount in your account after the purchase and output it on a new line.
    // Hint: Calculate the total cost of the purchase and then subtract it from the balance.
    cout << balance - (total*price);

}