#include <iostream>

using namespace std;

int sum(const int x, const int y/*, const int z*/){
    return x+y/*+z*/;
}
/* faltaba un tercer valor en la funcion */

int main(){
    cout << sum(1, 2, 3);   // Should print 6
    return 0;
}
