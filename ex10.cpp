#include <iostream>

using namespace std;

float pot(float a, float b){
    float k=1;
    while (b!=0){
        if (b<0) { k=(double)k/a; ++b;}
        else { k*=a; --b;}
    }
    return k;               // Este si esta chido
}

int tam(char cad[]){
    int i=0;
    while (cad[i]!='\0'){ ++i;}
    return i;
}

float ret(char exam[]){
    int m=0; float sup=0;
    for ( ; exam[m]!='.'; m++) { ;} m=m-1;
    for (int i=0; i<tam(exam); i++) {
        if (exam[i]=='.') { i=i+1;}
        cout << exam[i] << " ";
        int y=exam[i];
        sup=sup+(y-48)*pot(10, m);
        m=m-1;
    }
    cout << endl;
    return sup;
}

int main()
{
    char num[]="6337.989";
    cout << ret(num) << endl;
    return 0;
}