#include <iostream>

using namespace std;

void printArray(int *a, int n){
    int i=0;
    while(i<n){
        cout << a[i];
        if(i==n-1) { break;}
        cout << ",";
        i++;
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,0};
    printArray(arr,10);
    return 0;
}
