#include <iostream> 
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


/*int main() {
    srand(time(nullptr));
    int number = rand() % 10;
    cout << number;
    return 0;
}*/

int main() {
    srand(time(nullptr));
    const int minValue = 1;
    const int maxValue = 6;
    short dice1 = (rand() % (maxValue - minValue + 1));
    short dice2 = (rand() % (maxValue - minValue + 1));
    string intro = "Hello! here is our two dice rolls!";

    cout << intro << endl 
         << dice1 << endl
         << dice2;
    return 0;
}




// exercise to roll a dice every time we run program we get 2 random values between 1 - 6