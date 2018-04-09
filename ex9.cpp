#include <iostream>

using namespace std;

int tam(char cad[]){
    int i=0;
    while (cad[i]!='\0'){
        ++i;
    }
    return i;
}

bool palin(char pal[]){
    int i=tam(pal);
    for (int j=0; j<i; j++){
        if (pal[j]!=pal[i-j-1]) {
            return false;
        }
    }
    return true;
}

int main()
{
    char ex[]="avecesedeva";
    if (!palin(ex))
        cout << "No es un palíndromo." << endl;
    else
        cout << "Si es un palíndromo." << endl;
    return 0;
}
