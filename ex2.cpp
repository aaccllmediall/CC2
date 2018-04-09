#include <iostream>

using namespace std;

int sumrec(int v[], int a){
    if (a<=0) return v[a];
    return v[a]+sumrec(v, a-1);
}

int sumite(int v[], int a){
    int sum=0;
    for (int t=0; t<=a; t++){
        sum+=v[t];
    }
    return sum;
}

int main()
{
    cout << "De que tamaño desea su arreglo: "; int g; cin >> g;
    int vec[g];
    for (int i=0; i<g; i++) {
        cout << "Inserte valor: "; int b; cin >> b; vec[i]=b;
    }
    cout << "La suma de los valores es: " << sumite(vec, g-1) << endl;
    return 0;
}