#include <iostream>

using namespace std;

int main()
{
    int size;
    cin >> size;
    int *nums=new int[size];
    for (int i=0; i<size; ++i){
        cin >> nums[i];
    }
    // Calculations with nums omitted
    delete nums;        // no liberará toda la memoria usada; solo
    //delete[] nums;    // eliminará un número, no todo el arreglo
    return 0;
}
