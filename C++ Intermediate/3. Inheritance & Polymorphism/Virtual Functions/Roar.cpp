// Complete the code by adding the speak() method to the Animal class for your Zoo program.

#include <iostream>
using namespace std;

class Animal {
    public:
        string name;
    virtual void speak() = 0;
};

class Dog: public Animal {
    public:
        void speak() {
            cout <<"Woof!"<<endl;
        }
};
class Cat: public Animal {
    public:
        void speak() {
            cout <<"Meaw!"<<endl;
        }
};

int main() {
    Cat c1;
    c1.name = "Fluffy";
    Dog d1;
    d1.name = "Bingo";
    
    Animal *a1 = &c1;
    Animal *a2 = &d1;
    
    Animal* arr[] = {a1, a2}; 
    for(int i=0;i<2;i++){
        arr[i]->speak();
    }
}