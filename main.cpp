#include <iostream> 
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


// 1st line of code printing values
 /*int main() {
    int file_size = 0;
    int counter = 0; // int is only one diget or letters(i think)
    double sales = 9.99; // double is a float varible meaning it can have multiple digets
    std::cout << file_size;
    return 0;
}   */

//constants
/* int main() {

    const double pi = 3.14;
    pi = 0;

    return 0;
} */

// naming conventions
/* int main() {

    int file_size; //snake case
    int File_Size; // pascal case
    int Filesize; // Camel case
    int iFileSize; // hungarian notation


    return 0;
} */

/* int main() {
    double x = 10;
    int y = 3;
    int a = x + y; 
    double z = x / y; // to see decimals gotta use a float, one of the varibles have to be a float too (double)
    std::cout << z;


    return 0;
} */

/*int main() {
    int x = 10;
    int y = x++;   // x = 11, y = 10 , increments x by 1 
    int z = ++x;   // x = 11, z = 11
    std::cout << z;
    return 0;
}*/

/*int main () {
    double x = 1 + 2 * 3;
    std::cout << x;
    return 0;
}*/


/*int main () {
    int x = 10;
    int y = 20;
    cout << "x = " << x << endl 
         << "y = " << y;

    return 0;
} */

/*int main() {
    cout << "Enter values for x and y: ";
    double x;
    double y;
    cin >> x >> y;
    cout << x + y;

    return 0;
} */

/* int main (){
    double result =pow(2,3);
    cout << result;

    return 0;
} */

/*int main() {
    double price = 99.99;
    float interestRate = 3.67f;
    long fileSize = 90000l;
    char letter = 'a';
    bool isValid = false;
    auto hi = 300;
    char hello[] = "hello world"; // made a list or an array to type out hello world
    string thingo = "hello world!";
    cout << thingo;
    
    return 0;
}*/

/*int main() {
    int number {};
    cout << number;

    return 0;
}*/

/*int main() {
    int number = -0;
    cout << number;
    return 0;
}*/

/*int main() {
    short number = 100;
    int another = number;
    cout << another;

    return 0;
}*/

int main() {
    srand(time(nullptr));
    int number = rand() % 10;
    cout << number;
    return 0;
}