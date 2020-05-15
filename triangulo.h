---------------------------------------------------
//Autor: Valeria Solis López A01351646
//Fecha:  15-05-20
//Laboratorio: POO y C++
---------------------------------------------------

#define TRIANGULO_H

#include <string>

using namespace std;


class Triangulo {

protected:
  int lado1;
  int lado2;
  int lado3;
  int altura;
  float perimetro;
  float area;
public:
  Triangulo();
  Triangulo (int l1,int l2,int l3, int h);
  int getlado1() const;
  int getlado2() const;
  int getlado3() const;
  int getaltura() const;
  float getperimetro() const;
  float getarea() const;

}; // NO OLVIDES PONER ESTE PUNTO Y COMA, ESO GENERA MUCHOS ERRORES SIN SENTIDO. 

Triangulo::Triangulo() {
lado1=0;
lado2=0;
lado3=0;
altura=0;
perimetro=lado1+lado2+lado3;
area=lado3*altura;
}

Triangulo::Triangulo(int l1,int l2,int l3, int h){
lado1=l1;
lado2=l2;
lado3=l3;
altura=h;
perimetro=lado1+lado2+lado3;
area=lado3*altura;
}

int Triangulo::getlado1() const {
	return lado1;
}
int Triangulo::getlado2() const {
	return lado2;
}
int Triangulo::getlado3() const {
	return lado3;
}
int Triangulo::getaltura() const {
	return altura;
}
float Triangulo::getperimetro() const{
  return perimetro;
}
float Triangulo::getarea() const{
  return area;
}