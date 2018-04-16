#include <iostream>

using namespace std;

long sum(int x[], int a){
    if (a==0) { return 0;}
    return x[a-1]+sum(x , a-1);
}

int main()
{
    int a=10;
    int x[a]={1,2,3,4,5,6,7,8,9};
    cout << sum(x, a) << endl;
    return 0;
}
