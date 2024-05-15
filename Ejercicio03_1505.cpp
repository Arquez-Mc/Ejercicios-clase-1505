#include <iostream>
using namespace std;

int main() {
double angulo;

cout<<"Por favor ingrese el angulo del que quiera saber si es Agudo, Obtuso o Recto "<<endl;
cin>>angulo;


if(angulo<90 && angulo>0)
{
    cout<<"Su angulo "<<angulo<< " es Agudo"<<endl;
}

    else if(angulo>90 && angulo <=360)
    {
          cout<<"Su angulo "<<angulo<< " es Obtuso"<<endl;
    }
    
    else if(angulo==90)
    {
          cout<<"Su angulo "<<angulo<< " es Recto"<<endl;
    }
    
    
    else
        cout<<"No es un dato valido ";
    

    return 0;
}