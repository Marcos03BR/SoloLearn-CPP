// Define a class Bird which has one public method called makeSound(). That prints "chirp-chirp" when called.

#include <iostream>
using namespace std;


class Bird {
    public:
        void makeSound(){

            cout << "chirp-chirp" << endl;

        }
    
};

int main() {
    
    Bird bird;

    bird.makeSound();
    
    return 0;
    
}