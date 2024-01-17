// Create a function template called myMax(), so that the code in main works as expected.

#include <iostream>
using namespace std;

template <class T>
T myMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    double x, y;
    cin >> x >> y;

    int a, b;
    cin >> a >> b;

    cout << myMax(x, y) << endl;

    cout << myMax(a, b) << endl;

    return 0;
}