// Complete the code to call the getCharge() method using the correct selection operator.

#include <iostream>
using namespace std;

class Phone {
    public:

        int charge;

        Phone() {
            charge = 100;
        }

        void use() {
            charge -=10;
        }

        void getCharge() {
            cout << charge;
        }
};

int main() {
    Phone p;
    p.use();
    Phone *ptr = &p;
    
    ptr->getCharge();
    
} 