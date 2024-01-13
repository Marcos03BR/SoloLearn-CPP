// Complete the method to take them as parameters, then calculate and return the average score

#include <iostream>
using namespace std;

double average(double x, double y, double z){
    
    return (x + y + z) / 3;

}

int main() {

    double score1, score2, score3;
    cin >> score1 >> score2 >> score3;

    double result = average(score1, score2, score3);

    cout << result;

}