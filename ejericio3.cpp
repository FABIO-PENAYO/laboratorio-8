#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
struct product{
        int id;
        string name;
        char description[100];
        float price;
        int quantity;
    };	
int main(){
		cout<<"enter product"<<endl;
	 	struct product p1;
	 	cout<< "enter id"<<endl;
	 	cin>> p1.id;
	 	cin.ignore();
	 	cout<< "enter name";
	 	getline(cin,p1.name);
	 	cout << "enter price" << endl;
	 	cin >> p1.price;
	 	cout << "enter quantily" << endl;
	 	cin >>p1.quantity;
	 	cout << p1.id <<endl;
	 	cout << p1.name <<endl;
	 	cout <<  p1.description <<endl;
	 	cout << p1.price <<endl;
	 	cout << p1.quantity <<endl;
	
}

