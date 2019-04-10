#include <iostream>

using namespace std;

int suma(int *x, int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=x[i];
    }
    return sum;
}

int main()
{
    int a[]={1,2,3,4,5};
    cout << suma(a,5) << endl;
    return 0;
}

