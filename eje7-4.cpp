#include <iostream>

using namespace std;

void swap(int **e1, int **e2){
    **e1=**e1+**e2;
    **e2=**e1-**e2;
    **e1=**e1-**e2;
}

int main()
{
    int x=5, y=6;
    int *ptr1=&x, *ptr2=&y;
    swap(&ptr1, &ptr2);
    cout << *ptr1 << ' ' << *ptr2 << endl;
    return 0;
}
