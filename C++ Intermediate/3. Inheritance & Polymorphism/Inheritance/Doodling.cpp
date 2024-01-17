// Inherit the Rectangle class from the Shape class and call its draw() method for your drawing application.

#include <iostream>
using namespace std;

class Shape
{
    public:
        void draw() {
            cout << "Drawing...";
        }
};

class Rectangle : public Shape
{
    private:
        int width;
        int height;
    public:
        Rectangle(int w, int h): width(w), height(h) {
            cout <<w<<"x"<<h<<endl;
        };
};

int main() {

    int x, y;
    cin>>x>>y;
    Rectangle d(x, y);
    d.draw();
    
}