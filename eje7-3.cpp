#include <iostream>

using namespace std;

void swap(int *e1, int *e2){
    *e1=*e1+*e2;
    *e2=*e1-*e2;
    *e1=*e1-*e2;
}

int main()
{
    int a=2, b=9;
    swap(&a, &b);
    cout << a << endl;
    cout << b << endl;
    return 0;
}