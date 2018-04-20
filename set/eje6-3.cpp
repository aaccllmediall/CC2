#include <iostream>

using namespace std;

const int LENGTH=3;
const int WIDTH=4;

void transpose(const int input[][LENGTH], int output[][WIDTH]){
    for(int i=0; i<WIDTH; i++)
        for (int j=0; j<LENGTH; j++)
            output[j][i]=input[i][j];
}

int main()
{
    int vec1[WIDTH][LENGTH]={{1,2,3},{4,5,6},{7,8,9},{0,1,2}};
    int vec2[LENGTH][WIDTH];
    transpose(vec1, vec2);
    for (int i=0; i<LENGTH; i++){
        for (int j=0; j<WIDTH; j++)
            cout << vec2[i][j] << " ";
        cout << endl;
    }
    return 0;
}