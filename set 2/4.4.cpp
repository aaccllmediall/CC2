#include <iostream>

using namespace std;

double suma(double x, double y){
    return x+y;
}

double suma(double x, double y, double z){
    return x+y+z;
}

double suma(double x, double y, double z, double a){
    return x+y+z+a;
}

int main()
{
    cout << suma(3,6,7) << endl;
    return 0;
}

