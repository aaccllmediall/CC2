#include <iostream>

using namespace std;

//void printNum(int );

int main(){
    printNum(35);       // Esta funci�n no fue declarada en el �mbito
    return 0;
}

void printNum(int number) { cout << number;}
