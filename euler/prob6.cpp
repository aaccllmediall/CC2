#include <iostream>

using namespace std;

long long superDiff(int n){
    long long a=((n*(n+1))/2)*((n*(n+1))/2);
    long long b=(n*(n+1)*(2*n+1))/6;
    return a-b;
}

int main()
{
    cout << superDiff(100) << endl;
    return 0;
}

