#include <iostream>

using namespace std;

double suma(int x, double y){
    return x+y;
}

double suma(double x, int y){
    return x+y;
}

int main()
{
    cout << suma(1.1,5) << endl;
    return 0;
}

