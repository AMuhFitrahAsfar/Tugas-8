#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int Nilai[20];
	int i,N,angka,bilangan;
	cout<<endl;
	cout<< "----------------------" << endl;
	cout<< " PROGRAM MENCARI DATA " << endl;
	cout<< "----------------------" << endl;
	cout<< endl;
	
	cout<<"  Masukan Banyaknya Bilangan = ";cin>>N;
	
	for(i=0;i<N;i++){
	cout<<"  Masukan Elemen Ke -"<<i<<" = ";cin>>Nilai[i]; }
	
	cout<<"  Deretan Bilangan       = ";
	for(i=0;i<N;i++)
		cout<<Nilai[i]<<" ";
	cout<<endl<<endl;
	cout<<"  Masukan Bilangan Yang Dicari  = ";
	cin>>bilangan;
	cout<<endl;
	
	i=0;
	do{
		if(Nilai[i]==bilangan)
		angka=Nilai[i];
		i++;
	}
	while(i<N);
	if(angka==bilangan){
		cout<<"  Bilangan "<<bilangan<<" Ditemukan";
	}else{
		cout<<"  Bilangan "<<bilangan<<" Tidak Ditemukan";
	}
}
