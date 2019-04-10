#include <iostream>

using namespace std;

double suma(double x, double y, double z=0, double a=0){
    return x+y+z+a;
}

int main()
{
    cout << suma(3,6,7) << endl;
    return 0;
}

