#include <iostream>

using namespace std;

int suma(int *x, int n){
    if (n==0){ return 0;}
    return x[n-1]+suma(x, n-1);
}

int main()
{
    int a[]={1,2,3,4,5};
    cout << suma(a,5) << endl;
    return 0;
}

