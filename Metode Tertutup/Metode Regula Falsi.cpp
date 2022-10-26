#include<iostream>
#include<iomanip>
#include<cmath>
#include<stdio.h>
using namespace std;

int main(){
	double a,b,c,FA,FB,FC,FAFC,temp,hitung,er;
	int s;
	string kata;
	
	cout<<"Metode Regulasi Falsi"<<endl; //menampilkan judul
	cout<<"Rumus = x^3 - x^2 - x + 1 = 0"<<endl<<endl; //menampilkan rumus
	cout<<"Masukkan Batas Atas (b) : ";
	cin>>b; //mendapatkan b
	cout<<"Masukkan Batas Bawah (a) : ";
	cin>>a; //mendapatkan a
	cout<<"Masukkan Jumlah Iterasi (i) : ";
	cin>>s; //mendapatkan angka untuk batas iterasi
	cout<<endl<<"-------------------------------------------------------------------"<<endl;
	cout<<"|No |  a  |  b  | F(a)| F(b)|  c  | F(c)|F(a)*F(c)|selang| galat! |"<<endl; //menampilkan Header
	cout<<"-------------------------------------------------------------------"<<endl;

	for (int i=1; i<=s; i++){ //memulai loopping
	
		FA=(a*a*a)-(a*a)-a+1; //menghitung F(a)
		FB=(b*b*b)-(b*b)-b+1; //menghitung F(b)
		c=b-((FB*(b-a))/(FB-FA)); //menghitung c
		
		hitung=((c-temp)/c); //menghitung nilai er
		er = abs(hitung); //membuat nilai er menjadi absolut
		temp = c; //berisi nilai c setelah di lopping
		
		FC=(c*c*c)-(c*c)-c+1; //menghitung F(c)
		FAFC = FA*FC; //menghitung F(a)*F(c)
		
		if (er==1){ //digunakan untuk mendapatkan nilai awal er agar kosong/nol
			er = 0;
				if (FAFC < 0){
				kata = " [ac] ";
				cout<<fixed;
				cout<<setprecision(3)<<"| "<<i<<" |"<<a<<"|"<<b<<"|"<<FA<<"|"<<FB<<"|"<<c<<"|"<<FC<<"|";
				cout<<setprecision(6)<<FAFC<<"|"<<kata<<"|"<<er<<"|"<<endl;					
				b = c;
				} else if (FAFC > 0) {
				kata = " [cb] ";
				cout<<fixed;
				cout<<setprecision(3)<<"| "<<i<<" |"<<a<<"|"<<b<<"|"<<FA<<"|"<<FB<<"|"<<c<<"|"<<FC<<"|";
				cout<<setprecision(6)<<FAFC<<"|"<<kata<<"|"<<er<<"|"<<endl;					
				a = c;}
		} else if (i<10){ //digunakan agar nomer awal iterasi 1 - 9 mempunyai space
				if (FAFC < 0){
				kata = " [ac] ";
				cout<<fixed;
				cout<<setprecision(3)<<"| "<<i<<" |"<<a<<"|"<<b<<"|"<<FA<<"|"<<FB<<"|"<<c<<"|"<<FC<<"|";
				cout<<setprecision(6)<<FAFC<<" |"<<kata<<"|"<<er<<"|"<<endl;					
				b = c;
				} else if (FAFC > 0) {
				kata = " [cb] ";
				cout<<fixed;
				cout<<setprecision(3)<<"| "<<i<<" |"<<a<<"|"<<b<<"|"<<FA<<"|"<<FB<<"|"<<c<<"|"<<FC<<"|";
				cout<<setprecision(6)<<FAFC<<" |"<<kata<<"|"<<er<<"|"<<endl;					
				a = c;}
		} else if (i<100) { //digunakan agar nomer awal iterasi 10 - 99 tidak mempunyai space 
				if (FAFC < 0){
				kata = " [ac] ";
				cout<<fixed;
				cout<<setprecision(3)<<"|"<<i<<" |"<<a<<"|"<<b<<"|"<<FA<<"|"<<FB<<"|"<<c<<"|"<<FC<<"|";
				cout<<setprecision(6)<<FAFC<<" |"<<kata<<"|"<<er<<"|"<<endl;	
				b = c;
				} else if (FAFC > 0) {
				kata = " [cb] ";
				cout<<fixed;
				cout<<setprecision(3)<<"|"<<i<<" |"<<a<<"|"<<b<<"|"<<FA<<"|"<<FB<<"|"<<c<<"|"<<FC<<"|";
				cout<<setprecision(6)<<FAFC<<" |"<<kata<<"|"<<er<<"|"<<endl;	
				a = c;}						
		} else { //digunakan agar nomer awal iterasi 100 - 999 tidak mempunyai space
				if (FAFC < 0){
				kata = " [ac] ";
				cout<<fixed;
				cout<<setprecision(3)<<"|"<<i<<"|"<<a<<"|"<<b<<"|"<<FA<<"|"<<FB<<"|"<<c<<"|"<<FC<<"|";
				cout<<setprecision(6)<<FAFC<<" |"<<kata<<"|"<<er<<"|"<<endl;	
				b = c;
				} else if (FAFC > 0) {
				kata = " [cb] ";
				cout<<fixed;
				cout<<setprecision(3)<<"|"<<i<<"|"<<a<<"|"<<b<<"|"<<FA<<"|"<<FB<<"|"<<c<<"|"<<FC<<"|";
				cout<<setprecision(6)<<FAFC<<" |"<<kata<<"|"<<er<<"|"<<endl;	
				a = c;}	
		}
	}
	cout<<"-------------------------------------------------------------------"<<endl;
	cout<<"Script By Agilz"<<endl;
	cout<<"NAMA  : Agil Fajar Dwi Prasetyo"<<endl;
	cout<<"NIM   : 201080200062"<<endl;
	cout<<"Prodi : Informatika 4A1"<<endl;
	
	system("pause");
}
