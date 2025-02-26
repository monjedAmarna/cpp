#include <iostream>
using namespace std;

bool isEven(int num) {
    return num % 2 == 0;
}
bool isOdd(int num) {
    return num % 2 != 0;
}


int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}



int main() {
    int x = 10;
    if (isEven(x)) {
        cout << x << " is even." << endl;
    } else {
        cout << x << " is odd." << endl;
    }

    cout << "Factorial of 5: " << factorial(5) << endl;
    return 0;
}
