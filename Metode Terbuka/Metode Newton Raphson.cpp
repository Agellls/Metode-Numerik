#include<iostream>
#include<iomanip>
#include<cmath>
#include<stdio.h>
using namespace std;

int main(){
	double temp, Xr, Xr2, er;
	int s;
	
	cout<<"Metode Newton Rapshon"<<endl; //menampilkan judul
	cout<<"Rumus = x^3 - x^2 - x + 1 = 0"<<endl<<endl; //menampilkan rumus
	cout<<"Masukkan Angka Iterasi Pertama (Xr) : ";
	cin>>Xr;
	cout<<"Masukkan Jumlah Iterasi (i) : ";
	cin>>s; //mendapatkan angka untuk batas iterasi
	cout<<"----------------------"<<endl;
	cout<<"|No|   Xr   | galat! |"<<endl; //menampilkan Header
	cout<<"----------------------"<<endl;
	cout<<fixed;
	cout<<setprecision(6)<<"|"<<"1"<<" |"<<Xr<<"|"<<"        "<<"|"<<endl;
	temp = 0;
	for (int i=2; i<=s; i++){
		Xr2 = Xr - ((Xr*Xr*Xr) - (Xr*Xr) - Xr + 1)/((3*(Xr*Xr)) - (2*Xr) - 1 + 0);
		er = abs(Xr - Xr2);
		Xr = Xr2;
		temp = Xr;
		if (i<10){ //digunakan agar nomer awal iterasi 1 - 9 mempunyai space
			cout<<fixed;
			cout<<setprecision(6)<<"|"<<i<<" |"<<Xr2<<"|"<<er<<"|"<<endl; 					
		} else if (i<1000){
			cout<<fixed;
			cout<<setprecision(6)<<"|"<<i<<"|"<<Xr2<<"|"<<er<<"|"<<endl;			
		}
	}
	
	cout<<"----------------------"<<endl;
	cout<<"Script By Agilz"<<endl;
	cout<<"NAMA  : Agil Fajar Dwi Prasetyo"<<endl;
	cout<<"NIM   : 201080200062"<<endl;
	cout<<"Prodi : Informatika 4A1"<<endl;
	
	system("pause");
}
