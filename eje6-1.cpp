#include <iostream>

using namespace std;

void printArray(int v[], int a){
    int i=0; cout << v[i]; i++;
    for ( ; i<a; i++){
        cout << ", " << v[i];
    }
    cout << endl;
}

int main()
{
    int a=15;
    int x[a]={1,2,3,4,5,6,7,8,9};
    printArray(x, a);
    return 0;
}
