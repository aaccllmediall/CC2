#include <iostream>

using namespace std;

template <typename T>
class Nodo{
	private:
		T val;
		Nodo *sig;
	public:
		Nodo(T val=0) {
			this->val=val;
			this->sig=NULL;
		}
		void colsig(Nodo *h){ this->sig=h;}
		T darval(){ return val;}
		Nodo<T> *darsig(){ return sig;}
};

template <typename T>
class LisEnl{
	private:
		Nodo<T> *inicio;
	public:
		LisEnl(){ this->inicio=NULL;}
		void insertar(T num){ 		
			if (inicio==NULL) { 
				Nodo<T> *nue=new Nodo<T>(num); 
				this->inicio=nue; return;}
			Nodo<T> *aux=inicio, *aux1=aux->darsig();
			if (num<inicio->darval()) { 
				Nodo<T> *nue=new Nodo<T>(num); 
				nue->colsig(aux); 
				this->inicio=nue; return;}
			while(aux1!=NULL){ 
				if (num<aux1->darval()) { break;} 
				aux=aux->darsig(); 
				aux1=aux1->darsig();}
			if (aux->darval()==num){ 
				cout << "Valor existente!!!" << endl; return;} 
			Nodo<T> *nue=new Nodo<T>(num); 
			nue->colsig(aux1); 
			aux->colsig(nue);
		}
		void printar(){
			if (inicio==NULL) { 
				cout << "VACÍO!!!" << endl; return;} 
			Nodo<T> *aux=inicio; cout << "In"; 
			while(aux!=NULL){ 
				cout << "-->" << aux->darval(); 
				aux=aux->darsig();}
			cout << "-->Fn" << endl;
		}
		void quitar(T num){
			if(inicio==NULL) { 
				cout << "Ya no hay valores dentro!!!" << endl; return;}
			Nodo<T> *aux=inicio->darsig(), *aux1=inicio;
			if(inicio->darval()==num) { 
				delete inicio; 
				inicio=aux; return;}
			while (aux!=NULL){
				if(aux->darval()==num){ 
					Nodo<T> *aux2=aux->darsig(); 
					delete aux; 
					aux=aux2; 
					aux1->colsig(aux); return;}
				aux=aux->darsig(); 
				aux1=aux1->darsig(); 
				if (num<aux1->darval()) { break;}
			}
			cout << "Valor no Encontrado!!!" << endl;
		}
		int tamanho(){
			Nodo<T> *aux=inicio; int tam=0;
			while(aux!=NULL){ 
				aux=aux->darsig(); 
				++tam;}
			return tam;
		}
		Nodo<T> *darnodo(int num){
			if (num<1) { 
				cout << "Valor no válido." << endl; return NULL;}
			Nodo<T> *aux=inicio;
			for (int j=1; j<num; j++){
				aux=aux->darsig();
				if (aux==NULL) { 
					cout << "Sobrepasó el límite de tamaño!!!" << endl; return NULL;}
			}
			return aux;
		}
		~LisEnl(){
			cout << "Destruyendo Lista...\n" << endl;
			Nodo<T> *aux=inicio;
			while(inicio!=NULL){
				aux=aux->darsig();
				cout << "borrando: " << inicio->darval() << endl;
				delete inicio;
				inicio=aux;
			}		
		};
};

template <typename T>
LisEnl<T> operator+(LisEnl<T> &a, LisEnl<T> &b){
	LisEnl<T> c; Nodo<T> *aux;
	aux=a.darnodo(1);
	while(aux!=NULL){ T num=aux->darval(); c.insertar(num); aux=aux->darsig();}
	aux=b.darnodo(1);
	while(aux!=NULL){ T num=aux->darval(); c.insertar(num); aux=aux->darsig();}
	return c;
}

template <typename T>
LisEnl<T> operator-(LisEnl<T> &a, LisEnl<T> &b){
	LisEnl<T> c; Nodo<T> *aux;
	aux=a.darnodo(1);
	while(aux!=NULL){ T num=aux->darval(); c.insertar(num); aux=aux->darsig();}
	aux=b.darnodo(1);
	while(aux!=NULL){ T num=aux->darval(); c.quitar(num); aux=aux->darsig();}
	return c;
}

int main(){
	LisEnl<int> g;
	g.insertar(5); g.printar();
	g.insertar(55); g.printar();
	g.insertar(11); g.printar();
	g.insertar(91); g.printar();
	g.insertar(11); //g.printar();
	g.insertar(6); g.printar();
	cout << "El tamaño es: " << g.tamanho() << endl;
	Nodo<int> *yeah=g.darnodo(9);
	if (yeah!=NULL) cout << "VALOR DEL NODO: " << yeah->darval() << endl;
	else cout << "NO SE IMPRIMEN NULL'S" << endl;
	LisEnl<int> m;
	m.insertar(55); m.printar();
	m.insertar(19); m.printar();
	m.insertar(71); m.printar();
	m.insertar(-5); m.printar();
	m.insertar(144); m.printar();
	m.insertar(3); m.printar();
	//LisEnl h=g+m; h.printar(); 
	bool mec=true;
	while(mec){ 
		LisEnl<int> z;
		for (int i=0; i<10; i++) { z.insertar(i);}
		mec=false;
	}
	//LisEnl i=m-g; i.printar();
	return 0;
}
