// Fix the constructor and the getting method to get the correct painting name.

#include <iostream>
#include <string>
using namespace std;

class Painting {
    public:
        Painting(string x){

            cout << x;

        }
        
};

int main() {

    string name;
    cin >> name;

    Painting painting(name);

    return 0;
    
}