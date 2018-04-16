#include <iostream>

using namespace std;

int sum(int x, int y, int z=0, int a=0){
    return x+y+z+a;
}

int main(){
    cout << sum(8, 7) << endl;
    return 0;
}
