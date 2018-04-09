#include <iostream>

using namespace std;

int val(int c){
	int d;
	c=c+c;
	d=c;
	return d;
}

int ref(int *c){
	int d;	
	*c=*c+*c;
	d=*c;
	return d;
}

int main(){
	int num, a2;
	num=3;
	cout << "Este es tu número: " << num << endl;
	a2=val(num);
	cout << "Resultado de la funcion duplicadora: " << a2 << endl;
	cout << "No cambia cuando pasa por valor: " << num << endl;
	a2=ref(&num);
	cout << "Resultado de la funcion duplicadora: " << a2 << endl;
	cout << "Cambia cuando pasa por referencia: " << num << endl;
}
