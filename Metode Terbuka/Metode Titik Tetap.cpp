#include<iostream>
#include<iomanip>
#include<cmath>
#include<stdio.h>
using namespace std;

int main(){
	double Xr, Xrtemp, er, hitung;
	int s;
	
	cout<<"Metode Fixed Point"<<endl; //menampilkan judul
	cout<<"Rumus = x^3 - x^2 - x + 1 = 0"<<endl<<endl; //menampilkan rumus
	cout<<"Masukkan Angka Awal (Xr) : ";
	cin>>Xr;
	cout<<"Masukkan Jumlah Iterasi (i) : ";
	cin>>s; //mendapatkan angka untuk batas iterasi
	cout<<"----------------------"<<endl;
	cout<<"|No|   Xr   | galat! |"<<endl; //menampilkan Header
	cout<<"----------------------"<<endl;
	cout<<fixed;
	cout<<setprecision(6)<<"|"<<"1"<<" |"<<Xr<<"|"<<"        "<<"|"<<endl; 		

	for (int i=2; i<=s; i++){
		Xrtemp = Xr;
		hitung = abs(Xr * Xr + Xr - 1);
		Xr = sqrt(hitung)*1/3;
		er = abs(Xrtemp - Xr);
		
			
		if (i>1 && i<10){ //digunakan agar nomer awal iterasi 1 - 9 mempunyai space
			cout<<fixed;
			cout<<setprecision(6)<<"|"<<i<<" |"<<Xr<<"|"<<er<<"|"<<endl; 					
		} else if (i<100){
			cout<<fixed;
			cout<<setprecision(6)<<"|"<<i<<"|"<<Xr<<"|"<<er<<"|"<<endl;			
		}
	}
	                                       
	cout<<"----------------------"<<endl;
	cout<<"Script By Agilz"<<endl;
	cout<<"NAMA  : Agil Fajar Dwi Prasetyo"<<endl;
	cout<<"NIM   : 201080200062"<<endl;
	cout<<"Prodi : Informatika 4A1"<<endl;
	
	system("pause");
}
