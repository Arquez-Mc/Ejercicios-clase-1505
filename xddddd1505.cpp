#include <iostream>
using namespace std;

int main() {
int edad;

cout<<"Por favor ingrese su edad ";
cin>>edad;


if(edad<18)
{
    cout<<endl<<"Usted es menor de edad "<<endl;
}
else if(edad>=18)

{
cout<<endl<<"Usted es mayor de edad "<<endl;
    
}

    return 0;
}