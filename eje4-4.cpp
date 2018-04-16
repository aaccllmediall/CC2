#include <iostream>

using namespace std;

/*int sum(int x, int y, int z=0, int a=0){
    return x+y+z+a;
}*/

int sum(int x, int y){
    return x+y;
}

int sum(int x, int y, int z){
    return x+y+z;
}

int sum(int x, int y, int z, int a){
    return x+y+z+a;
}

int main(){
    cout << sum(3, 5, 7) << endl;
    return 0;
}


// MISMOS PROBLEMAS DE AMBIGUEDAD QUE EN EL PROB. 4.2
// ADEMAS, NO SE PUEDE REDEFINIR FUNCIONES Y ESO OCURRE
// AQUI YA QUE EXISTON DOS FUNCIONES IGUALES QUE PASAN 4
// ARGUMENTOS IGUALES
