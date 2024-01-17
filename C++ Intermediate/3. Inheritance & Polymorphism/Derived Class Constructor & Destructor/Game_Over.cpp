// Create destructors for each class of your Quizz game.

#include <iostream>
using namespace std;

class Game
{
    public:
    Game() {
        cout <<"Game Started"<<endl;
    }
    ~Game() {

        cout << "Game Over" << endl;

    }
    
};

class Quiz: public Game
{
    public:
    Quiz() {
        cout <<"Quiz Started"<<endl;
    }
    ~Quiz(){

        cout << "Quiz Over" << endl;

    }
    
};

int main() {
    Quiz q;
}