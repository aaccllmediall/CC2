#include <iostream>

using namespace std;

void reverse(int v[], int a){
    for (int i=0; i<a/2; i++){
        int *punt=v+i;
        int *punt2=v+a-i-1;
        *punt=*punt2+*punt;
        *punt2=*punt-*punt2;
        *punt=*punt-*punt2;

    }
}

int main()
{
    int a=15;
    int vec1[a]={1,2,33,4,5,6,72,8,9,99,1,2,3};
    reverse(vec1, a);
    return 0;
}
