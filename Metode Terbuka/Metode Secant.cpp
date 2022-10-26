#include<iostream>
#include<iomanip>
#include<cmath>
#include<stdio.h>
using namespace std;

int main(){
	double temp, Xr, Xr2, Xrtotal, Xrtotal1, Xrtotal2, er;
	int s;
	
	cout<<"Metode Secant"<<endl; //menampilkan judul
	cout<<"Rumus = x^3 - x^2 - x + 1 = 0"<<endl<<endl; //menampilkan rumus
	cout<<"Masukkan angka pertama (Xr) : ";
	cin>>Xr;
	cout<<"Masukkan angka kedua (Xr2) : ";
	cin>>Xr2;
	cout<<"Masukkan Jumlah Iterasi (i) : ";
	cin>>s; //mendapatkan angka untuk batas iterasi
	er = abs(Xr - Xr2);
	cout<<"----------------------"<<endl;
	cout<<"|No|   Xr   | galat! |"<<endl; //menampilkan Header
	cout<<"----------------------"<<endl;
	cout<<fixed<<setprecision(6)<<"|1 |"<<Xr<<"|        |"<<endl;
	cout<<fixed<<setprecision(6)<<"|2 |"<<Xr2<<"|"<<er<<"|"<<endl;
	
	for (int i=3; i<=s; i++){
		Xrtotal1 = (((Xr2*Xr2*Xr2) - (Xr2*Xr2) - Xr2 + 1) * (Xr2 - Xr));
		Xrtotal2 = (((Xr2*Xr2*Xr2) - (Xr2*Xr2) - Xr2 + 1) - ((Xr*Xr*Xr) - (Xr*Xr) - Xr + 1));
		Xrtotal = (Xr2 - (Xrtotal1 / Xrtotal2));
		Xr = Xr2;
		Xr2 = Xrtotal;
		er = abs (Xr - Xr2);
		
		if (i<10){ //digunakan agar nomer awal iterasi 1 - 9 mempunyai space
			cout<<fixed;
			cout<<setprecision(6)<<"|"<<i<<" |"<<Xrtotal<<"|"<<er<<"|"<<endl; 					
		} else if (i<1000){
			cout<<fixed;
			cout<<setprecision(6)<<"|"<<i<<"|"<<Xrtotal<<"|"<<er<<"|"<<endl;			
		}
	}
	cout<<"----------------------"<<endl;
	cout<<"Script By Agilz"<<endl;
	cout<<"NAMA  : Agil Fajar Dwi Prasetyo"<<endl;
	cout<<"NIM   : 201080200062"<<endl;
	cout<<"Prodi : Informatika 4A1"<<endl;
	
	system("pause");
}
