#include <iostream >

void printNum(/*int number*/) { std::cout << number; }
/* para imprimir el numero, se tiene que pasar el parametro */

int main() {
    int number=35;
    printNum(number);
    return 0;
}
