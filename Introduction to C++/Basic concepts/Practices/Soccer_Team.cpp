/*A soccer team won 3 games and ended 1 games with a draw.  

A win scores 3 points, while a draw scores 1.

Task

Calculate and output the total points earned by the team.*/

#include <iostream>
using namespace std;

int main() {
    
    int wins = 3;
    int draws = 1;

    int score = (3 * wins) + (1 * draws);
    cout << score;

}