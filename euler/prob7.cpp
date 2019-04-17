#include <iostream>
#include <cmath>

using namespace std;

long long prime(long gg){
    int n, c, a;
    n=11; c=5;
    while(c<gg){
        n+=2;
        int b=sqrt(n); a=1;
        for(int i=3; i<=b; i=i+2){
            if(n%i==0){
                a=0;
                break;
            }
        }
        if (a==1){
            c=c+1;
        }
    }
    return n;
}

int main()
{
    cout << prime(10001) << endl;
    return 0;
}
