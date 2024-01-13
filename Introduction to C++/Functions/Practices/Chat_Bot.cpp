/* Define the bot() function, so that it takes a string as input and outputs the above mentioned message.
For example, for the input "James", the output should be "Welcome, James!". */

#include <iostream>
using namespace std;

void bot(){

   string name;
   cin >> name;

   cout << "Welcome, " << name << "!";

}

int main() {
   bot();
}