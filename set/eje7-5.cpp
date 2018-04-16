#include <iostream>

using namespace std;

int main()
{
    char *oddOrEven="Never odd or even";
    char *nthCharPtr=&oddOrEven[5];             // 1
    nthCharPtr=nthCharPtr-2;                    // 2
    cout << *nthCharPtr << endl;                // 3
    char **pointerPtr=&nthCharPtr;              // 4
    cout << *pointerPtr << endl;                // 5
    cout << **pointerPtr << endl;               // 6
    nthCharPtr++;                               // 7
    cout << nthCharPtr-oddOrEven << endl;       // 8
    return 0;
}
