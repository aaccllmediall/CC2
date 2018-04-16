#include <iostream>

const int ARRAY_LEN = 10;

using namespace std;

int main(){
    int arr[ARRAY_LEN]={10};    // Note implicit initialization of
                                // other elements
    int *xPtr=arr, yPtr=arr+ARRAY_LEN-1;    // yPtr no es un puntero por lo
    //int *yPtr=arr+ARRAY_LEN-1;            // tanto no se le asigna valor
    cout << *xPtr << ' ' << *yPtr;  // Should output 10 0
    return 0;
}

