// Complete the code to replace the element with that index with "Fluffy Pancakes", and output the new menu.

#include <iostream>
using namespace std;

int main() {

    string breakfasts[] = {"Cinnamon Doughnuts", "Waffles", "Granola", 
            "Chorizo Burrito", "French Toast"};

    string newItem = "Fluffy Pancakes";

    int index;
    cin >> index;

    breakfasts[index] = newItem;

    for(string menu: breakfasts){

        cout << menu << endl;

    }
    
}