#include <iostream>

using namespace std;

int main() {

    int a = 1; // 1st bucket
    int b = 2; // 2nd bucket
    int temp = a; // 3rd bucket, moving 'a' into our 3rd bucket we can give it the same value as a
    a = b; // we set a = b turning a to b
    b = temp; // now setting b to temp which earlier was sent to 'a' initial value

    std::cout << a;

    return 0;
}