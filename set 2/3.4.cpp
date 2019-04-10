#include <iostream >
#include <cstdlib > // contains some math functions

int difference(int x, int y) {
    int diff = abs(x-y);    // abs(n) returns absolute value of n
    return diff;    // faltaba retornar el valor
}

int main() {
    std::cout << difference(24, 1238);
    return 0;
}
