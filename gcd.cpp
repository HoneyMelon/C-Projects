#include <iostream>

int gcd(int a, int b) {
    while(a != b) {
        if (a > b) {
            a -= b;
        }
        else {
            b -= a;
        }
    }
    return a;
}

int main(){
    int result = gcd(30, 6);
    std::cout << result <<std::endl;
    return 0;
}
