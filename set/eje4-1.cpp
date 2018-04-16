#include <iostream>

using namespace std;

int sum(const int x, const int y){
    return x+y;
}

double sum(const double x, const double y){
    return x+y;
}

int main(){
    cout << sum(1, 2) << endl;
    cout << sum(4.789, 3.1) << endl;
    return 0;
}

