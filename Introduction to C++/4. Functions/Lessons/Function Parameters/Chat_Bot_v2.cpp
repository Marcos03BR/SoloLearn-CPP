/* Let's make our chat bot a bit more advanced using parameters!

The bot() function has to take 2 parameters: one integer called mode, and a string called name.

The given code takes the values for the arguments as input and passes them to the bot() function. 

Modify the bot() function to take the given 2 parameters and generate the output using the following logic:
In case mode is 1, the output should be "Welcome, name!", where name is the parameter’s value.
In case mode is 2, the output should be "Goodbye, name!".
If mode has any other value, the output should be "Try again". */

#include <iostream>
using namespace std;

void bot(int mode, string name) {

    switch(mode){

        case 1:
        cout << "Welcome, " << name << "!";
        break;
        case 2:
        cout << "Goodbye, " << name << "!";
        break;
        default:
        cout << "Try again";

    }
    
}

int main() {
    
    int mode;
    cin >> mode;

    string name;
    cin >> name;

    bot(mode, name);

}