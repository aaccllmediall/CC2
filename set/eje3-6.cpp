#include <iostream>

using namespace std;

int sum(const int x, const int y){      // Esta funcion solo pasa 2 argumentos
    return x+y;
}

/*int sum(const int x, const int y, const int z){
    return x+y+z;
}*/

int main(){
    cout << sum(1, 2, 3);
    return 0;
}