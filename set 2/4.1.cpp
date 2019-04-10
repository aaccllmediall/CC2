#include <iostream>

using namespace std;

int sum(int x, int y){
    return x+y;
}

double sum(double x, double y){
    return x+y;
}

int main() {
    cout << sum(65, 11) << endl;
    cout << sum(13.56, 546.5) << endl;
    return 0;
}
