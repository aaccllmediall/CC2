#include <iostream>

using namespace std;

//void printNum(int );

int main(){
    printNum(35);       // Esta función no fue declarada en el ámbito
    return 0;
}

void printNum(int number) { cout << number;}
