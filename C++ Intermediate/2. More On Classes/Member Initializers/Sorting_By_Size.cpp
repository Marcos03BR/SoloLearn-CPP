// Create a program to store TVs according to their dimensions.

#include <iostream>
using namespace std;

class TV {
    public:
        TV(int h, int w): height(h), width(w) {};

        void area() {

            cout << height*width;

        }
    private:
        int height;
        int width;
};

int main() {
    
    int height, width;
    cin >> height >> width;

    TV tv(height, width);
    tv.area();
   
}