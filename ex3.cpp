#include <iostream>

using namespace std;

void insertionsort(int vec[], int tam){
	for(int i=1; i<tam; i++){
		for(int j=0; (i-j)>0; j++){
			if(vec[i-j]<vec[i-j-1]){
				int s=vec[i-j];
				vec[i-j]=vec[i-j-1];
				vec[i-j-1]=s;
			}
		}
	}
}

void mergesort(int v[], int up, int down){
    int g=(down-up)/2;
    if (down-up>2){
        mergesort(v, up, g);
        mergesort(v, g+1, down);
    }
    for (int i=up; i<=g-up; i++){
        for (int j=0; j<=down-g-1; j++){
            if (v[up+i]>v[g+1+j]){
                int a=v[up+i];
                v[up+i]=v[g+1+j];
                v[g+1+j]=a;
            }
        }
    }
    return ;
}

void quicksort(int v[], int up, int down){
	int b=down;
	for (int a=0; a<b; a++){
		if (v[a]>v[b]){
			int c=v[a]; v[a]=v[b]; 
			v[b]=c;
		}
		--b;
	}
	cout << down << " " << up << endl;
	if (down-up>2){
		quicksort(v, up, b);
		quicksort(v, b+1, down);
	}
	else { return ;}
}

int main(){
	int tr[5]={5,6,2,7,1};
	quicksort(tr, 0, 4);
	for(int i=0; i<5; i++){
		cout << tr[i] << endl;
	}
	return 0;
}
