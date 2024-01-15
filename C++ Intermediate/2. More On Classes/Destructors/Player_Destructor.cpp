// Add the destructor to the Player class for the game you have created.

#include <iostream>
using namespace std;

class Player {
  public:
    int points;
    Player(int x) {
        points = x;
        points %= 5;
    }

  ~Player() {

    cout << points;

  }
    
};

int main() {

  int points;
  cin >> points;
  Player obj(points);
  
}