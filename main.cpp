
#include <iostream>
#include "triangulo.h"
using namespace std;


int main (int argc, char* argv[]) {
  Triangulo N;
  Triangulo A(9,9,3,12);
  Triangulo B(6,6,4,6);

  cout<<"Triangulo N \n";
  cout<<"Lado 1="<<N.getlado1()<< "\n";
  cout<<"Lado 2="<<N.getlado2()<< "\n";
  cout<<"Lado 3="<<N.getlado3()<< "\n";  
  cout<<"Altura="<<N.getaltura()<< "\n";
  cout<<"Perimetro="<<N.getperimetro()<< "\n";
  cout<<"Área="<<N.getarea()<< "\n\n";

  cout<<"Triangulo A \n";
  cout<<"Lado 1="<<A.getlado1()<< "\n";
  cout<<"Lado 2="<<A.getlado2()<< "\n";
  cout<<"Lado 3="<<A.getlado3()<< "\n";  
  cout<<"Altura="<<A.getaltura()<< "\n";
  cout<<"Perimetro="<<A.getperimetro()<< "\n";
  cout<<"Área="<<A.getarea()<< "\n\n";

  cout<<"Triangulo B \n";
  cout<<"Lado 1="<<B.getlado1()<< "\n";
  cout<<"Lado 2="<<B.getlado2()<< "\n";
  cout<<"Lado 3="<<B.getlado3()<< "\n";  
  cout<<"Altura="<<B.getaltura()<< "\n";
  cout<<"Perimetro="<<B.getperimetro()<< "\n";
  cout<<"Área="<<B.getarea()<< "\n\n";



  return 0;
}
