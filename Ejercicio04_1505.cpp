#include <iostream>
using namespace std;

int main() {
    
   float corto1,corto2,parcial1,parcial2,laboratorio,proyecto;
   float promedio;
   
   cout<<"Bienvenido, esta es la calculadora de su ciclo universitario, aqui se calculara si sus notas son suficientes para pasar o no "<<endl;
   
   cout<<"Ingrese la nota de su corto 1: "<<endl;
   cin>>corto1; 
   
    cout<<"Ingrese la nota de su corto 2: "<<endl;
   cin>>corto2; 
   
    cout<<"Ingrese la nota de su parcial 1: "<<endl;
   cin>>parcial1; 
   
    cout<<"Ingrese la nota de su parcial 2: "<<endl;
   cin>>parcial2; 
   
    cout<<"Ingrese la nota de su laboratorio: "<<endl;
   cin>>laboratorio; 
   
    cout<<"Ingrese la nota de su proyecto: "<<endl;
   cin>>proyecto; 
 
 promedio=corto1*0.10+corto2*0.10+parcial1*0.15+parcial2*0.20+laboratorio*0.20+proyecto*0.25;
 
if(promedio>=6.0 && promedio<=10.0){
cout<<"FELICIDADES, paso su ciclo 01, ya puede llamarse ingeniero :) "<<endl; 
cout<<"Su nota es de: "<<promedio<<endl;
}

    else if(promedio<=5.99 && promedio>=0) {
        cout<<"Lastima, repita ciclo " <<endl; 
cout<<"Su nota es de: "<<promedio<<endl;
        
    }
    
    else
    cout<<"Sus datos no son congruentes con las notas posibles "<<endl;
    
    return 0;
}