/* You are making an app to control the entrance of a playground and output the ticket category based on the age of the customer.
There are 3 categories of tickets:
Free: Ages 0-3 get free tickets
Discounted: Ages 4-6 get discounted tickets.
Normal: Ages 7+ get a normal ticket.
Task
Take the age of the customer as input, then output the ticket category corresponding to that age.
For example, if the user enters 5 as the age, the output should be "Discounted". */

#include <iostream>
using namespace std;

int main() {

    int age;
    cin >> age;

    if (age >= 0 && age <=3){

        cout << "Free";

    } else if (age >= 4 && age <=6){

        cout << "Discounted";

    } else if (age >= 7){

        cout << "Normal";

    }
    
}