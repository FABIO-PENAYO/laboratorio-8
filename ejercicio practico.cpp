#include <iostream>

using namespace std;
	void b_libro1();
	void b_libro2();
	
struct biblioteca{
	char titulo[30];
	char autor[30];
	char SBN[17];
	char prestado[30];
}libro1,libro2;

int main(){
	b_libro1();
	b_libro2();
	

}
 void b_libro1(){
 	
 	cout<<"nombre del libro1 : "<<endl;
	cin.getline(libro1.titulo,30,'\n');
	cout<< "autor: "<<endl;
	cin.getline(libro1.autor,30,'\n');
	cout<<"identificador del libro"<<endl;
	cin.getline(libro1.SBN,17,'\n');
	cout<<"esta prestado el libro?"<<endl;
	cin.getline(libro1.prestado,30,'\n');
 }
 void b_libro2(){
 	cout<<"nombre del libro2 : "<<endl;
	cin.getline(libro2.titulo,30,'\n');
	cout<< "autor: "<<endl;
	cin.getline(libro2.autor,30,'\n');
	cout<<"identificador del libro"<<endl;
	cin.getline(libro2.SBN,17,'\n');
	cout<<"esta prestado el libro?"<<endl;
	cin.getline(libro2.prestado,30,'\n');
 }

