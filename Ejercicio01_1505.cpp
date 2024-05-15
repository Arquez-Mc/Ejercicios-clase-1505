#include <iostream>
using namespace std;

int main() {
  
  float n1,n2,n3;
  double resultado;
  
  cout<<"Esta es tu calculadora angulos internos de un triangulo, por favor ingrese el angulo A y el angulo B "<<endl;
  
  cout<<"Ingrese el valor de A"<<endl; 
  cin>>n1;
  cout<<endl<<"Ingrese el valor de B"<<endl; 
  cin>>n2;
  
  
  
  if (n1+n2<180)
  {
      n3=n1+n2;
      resultado=180-n3;
      
      cout<<endl<<"El angulo de C es: "<<resultado<<endl;
  }
  
  
  
  else if(n1+n2>=180)
  {
     cout<<endl<<"La suma de sus angulo internos es mayor o igual a 180 grados por ende no se puede resolver "<<endl;
      
      
  }
  
  
    return 0;
}