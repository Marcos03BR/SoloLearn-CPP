// Complete the given methods to get the horsepower of the car.

#include <iostream>
using namespace std;

class Car{
    
    private:
        int horsepowers;

    public:
        void setHorsepowers(int x) {

            horsepowers = x;

            if(x > 800){

                cout << "Too much" << endl;

            }
            
        }
    
        int getHorsepowers() {
            
            return horsepowers;

        }
        
};

int main() {

    int horsepowers;
    cin >> horsepowers;

    Car car;

    car.setHorsepowers(horsepowers);

    cout << car.getHorsepowers();

    return 0;

}