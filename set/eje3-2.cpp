#include <iostream>

using namespace std;

//int number=35;

void printNum(/*int number*/) { cout << number;}
                                    // "number" no esta declarado
int main(){                                 // en el ámbito
    int number=35;
    printNum(number);
    return 0;
}
