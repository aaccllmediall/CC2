#include <iostream>

using namespace std;

void reverse(int v[], int a){
    for (int i=0 ; i<a-1; i++){
        int b=v[i];
        v[i]=v[a-1];
        v[a-1]=b;
        a--;
    }
}

int main()
{
    int a=15;
    int x[a]={1,2,3,4,5,6,7,8,9};
    reverse(x, a);
    return 0;
}
