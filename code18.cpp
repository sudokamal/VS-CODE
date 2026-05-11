#include <iostream>
using namespace std;

int main() {
    int a = 5, b;
    b= a++ * ++a * a++;
    cout << a << "\n" << b << "\n";
    return 0;       
}