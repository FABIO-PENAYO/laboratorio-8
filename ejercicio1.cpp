#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <c.string>
using namespace std;
/* ¿como se declara un vector de 10 elementos de tipo product y se asignan valores al primer elemento?*/
 struct product{
        int id;
        string name;
        char description[100];
        float price;
        int quantity;
        };
        int main(){
            //declaramos una variable p como prodyucto
            string product p[10];
            //le asignamos valores
            p[0].id=1;
            p[0].name="thiago";
            p[0].description= "guerrero negro";
            p[0].price = 100;
            p[0].quantity = 1;

        }
