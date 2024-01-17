// Create a Number class to handle different math operations.

#include <iostream>
using namespace std;

class Number
{
    private:
        int num;
    public:
        Number(int n) {
            num = n;
        }
       
        const int square() const {
            
            return num * num;
           
        };
};

int main() {
    
    int x;
    cin >> x;
    const Number myNum(x);
    cout << myNum.square();

}