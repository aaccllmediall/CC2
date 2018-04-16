#include <iostream>

using namespace std;

int length(char *g){
    int i=0;
    while(*g!='\0'){
        g++; i++;
    }
    return i+1;
}

int main()
{
    char e1[]="teclado";
    cout << length(e1) << endl;
    return 0;
}
