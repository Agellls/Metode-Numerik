#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<cmath>
using namespace std;

int main(){
	double a,b,c,FA,FB,FC,FAFC,hitung,galat,er;
	int s;
	string kata;
	
	cout<<"Metode Bagi Dua"<<endl; //menampilkan judul
	cout<<"Rumus = x^3 - x^2 - x + 1 = 0"<<endl<<endl; //menampilkan rumus
	cout<<"Masukkan Batas Atas (b) : ";
	cin>>b; //mendapatkan b
	cout<<"Masukkan Batas Bawah (a) : ";
	cin>>a; //mendapatkan a
	cout<<"Masukkan Jumlah Iterasi (i) : ";
	cin>>s; //mendapatkan angka untuk batas iterasi
	cout<<endl<<"------------------------------------------------------------------"<<endl;
	cout<<"|No|  a  |  b  |  c  | F(a)| F(b)| F(c)| F(a)F(c)|selang| galat! |"<<endl; //menampilkan Header
	cout<<"------------------------------------------------------------------"<<endl;
	
	for (int i=1; i<=s; i++){
		c=(a+b)/2; //menghitung c
		FA=(a*a*a)-(a*a)-a+1; //menghitung F(a)
		FB=(b*b*b)-(b*b)-b+1; //menghitung F(b)
		FC=(c*c*c)-(c*c)-c+1; //menghitung F(c)
		FAFC = FA*FC; //mehitung F(a)*F(c)
		
		if (i<10){ //digunakan agar nomer awal iterasi 1 - 9 mempunyai space
				if (FAFC < 0){
				kata = " [ac] ";
				er = abs(a-c);
				cout<<fixed;
				cout<<setprecision(3)<<"|"<<i<<" |"<<a<<"|"<<b<<"|"<<c<<"|"<<FA<<"|"<<FB<<"|"<<FC<<"|";
				cout<<setprecision(6)<<FAFC<<"|"<<kata<<"|"<<er<<"|"<<endl;					
				b = c;
				} else if (FAFC > 0) {
				kata = " [cb] ";
				er = abs(c-b);
				cout<<fixed;
				cout<<setprecision(3)<<"|"<<i<<" |"<<a<<"|"<<b<<"|"<<c<<"|"<<FA<<"|"<<FB<<"|"<<FC<<"|";
				cout<<setprecision(6)<<FAFC<<"|"<<kata<<"|"<<er<<"|"<<endl;					
				a = c;}
		} else { //digunakan agar nomer awal iterasi 10 - 99 tidak mempunyai space 
				if (FAFC < 0){
				kata = " [ac] ";
				er = abs(a-c);
				cout<<fixed;
				cout<<setprecision(3)<<"|"<<i<<"|"<<a<<"|"<<b<<"|"<<c<<"|"<<FA<<"|"<<FB<<"|"<<FC<<"|";
				cout<<setprecision(6)<<FAFC<<"|"<<kata<<"|"<<er<<"|"<<endl;				
				b = c;
				} else if (FAFC > 0) {
				kata = " [cb] ";
				er = abs(c-b);
				cout<<fixed;
				cout<<setprecision(3)<<"|"<<i<<"|"<<a<<"|"<<b<<"|"<<c<<"|"<<FA<<"|"<<FB<<"|"<<FC<<"|";
				cout<<setprecision(6)<<FAFC<<"|"<<kata<<"|"<<er<<"|"<<endl;					
				a = c;}						
		}
	}
	cout<<"------------------------------------------------------------------"<<endl<<endl;	
	cout<<"Script By Agilz"<<endl;
	cout<<"NAMA  : Agil Fajar Dwi Prasetyo"<<endl;
	cout<<"NIM   : 201080200062"<<endl;
	cout<<"Prodi : Informatika 4A1"<<endl;
	
	system("pause");
}
