#include <iostream>

using namespace std;

void doubleNumber(int num) { num=num*2;}    // El valor no sera pasado a menos que
//void doubleNumber(int &num) { num=num*2;}         // lo pases por referencia
                                                            // o usando punteros
int main(){
    int num=35;
    doubleNumber(num);
    cout << num;
    return 0;
}


