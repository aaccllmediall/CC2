#include <iostream>

using namespace std;

long sum(int x[], int a){
    long sum1=0;
    for (int i=0; i<a; i++)
        sum1+=x[i];
    return sum1;
}

int main()
{
    int a=10;
    int x[a]={1,2,3,4,5,6,7,8,9};
    cout << sum(x, a) << endl;
    return 0;
}