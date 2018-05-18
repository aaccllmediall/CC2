#include <iostream>

using namespace std;


class Nodo{
	private:
		int val;
		Nodo *sig;
	public:
		Nodo(int val=0) {
			this->val=val;
			this->sig=NULL;
		}
		void colsig(Nodo *h){ this->sig=h;}
		int darval(){ return val;}
		Nodo *darsig(){ return sig;}
};

class LisEnl{
	private:
		Nodo *inicio;
	public:
		LisEnl(){ this->inicio=NULL;}
		void insertar(int num){ 		
			if (inicio==NULL) { Nodo *nue=new Nodo(num); this->inicio=nue; return;}
			Nodo *aux=inicio, *aux1=aux->darsig();
			if (num<inicio->darval()) { Nodo *nue=new Nodo(num); nue->colsig(aux); this->inicio=nue; return;}
			while(aux1!=NULL){ if (num<aux1->darval()) { break;} aux=aux->darsig(); aux1=aux1->darsig();}
			if (aux->darval()==num){ cout << "Valor existente!!!" << endl; return;} 
			Nodo *nue=new Nodo(num); nue->colsig(aux1); aux->colsig(nue);
		}
		void printar(){
			if (inicio==NULL) { cout << "VACÍO!!!" << endl; return;} 
			Nodo *aux=inicio; cout << "In"; 
			while(aux!=NULL){ cout << "-->" << aux->darval(); aux=aux->darsig();}
			cout << "-->Fn" << endl;
		}
		void quitar(int num){
			if(inicio==NULL) { cout << "Ya no hay valores dentro!!!" << endl; return;}
			Nodo *aux=inicio->darsig(), *aux1=inicio;
			if(inicio->darval()==num) { delete inicio; inicio=aux; return;}
			while (aux!=NULL){
				if(aux->darval()==num){ Nodo *aux2=aux->darsig(); delete aux; aux=aux2; aux1->colsig(aux); return;}
				aux=aux->darsig(); aux1=aux1->darsig(); if (num<aux1->darval()) { break;}
			}
			cout << "Valor no Encontrado!!!" << endl;
		}
		int tamanho(){
			Nodo *aux=inicio; int tam=0;
			while(aux!=NULL){ aux=aux->darsig(); ++tam;}
			return tam;
		}
		Nodo *darnodo(int num){
			if (num<1) { cout << "Valor no válido." << endl; return NULL;}
			Nodo *aux=inicio;
			for (int j=1; j<num; j++){
				aux=aux->darsig();
				if (aux==NULL) { cout << "Sobrepasó el límite de tamaño!!!" << endl; return NULL;}
			}
			return aux;
		}
		~LisEnl()
};

LisEnl operator+(LisEnl &a, LisEnl &b){
	LisEnl c; Nodo *aux;
	aux=a.darnodo(1);
	while(aux!=NULL){ int num=aux->darval(); c.insertar(num); aux=aux->darsig();}
	return c;
}

int main(){
	LisEnl g;
	g.insertar(5); g.printar();
	g.insertar(1); g.printar();
	g.insertar(7); g.printar();
	g.insertar(91); g.printar();
	g.insertar(11); g.printar();
	g.insertar(6); g.printar();
	cout << "El tamaño es: " << g.tamanho() << endl;
	Nodo *yeah=g.darnodo(1);
	if (yeah!=NULL) cout << yeah->darval() << endl;
	return 0;
}
