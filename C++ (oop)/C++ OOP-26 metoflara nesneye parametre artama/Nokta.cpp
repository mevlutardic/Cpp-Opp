#ifndef _NOKTA_
#define _NOKTA_
#include "Nokta.h"

#include<math.h>

Nokta::Nokta(){
  cout<<"Parametresiz Cagrildi .\n";
  x=0;
  y=0;
  z=new int(5);
  };

Nokta::Nokta(int x,int y){
  cout<<"Parametreli Cagrildi .";
  this->x=x;
  this->y=y;
  z= new int(5);
  yaz();
}

double Nokta :: uzaklıkHesapla(const Nokta& n){

  int xU= pow((n.getX()-x),2);
  int yU= pow((n.getY()-y),2);

  return sqrt(xU+yU);
}


Nokta::~Nokta(){
  cout<<"\nyikici:";
  delete z;
  yaz();
} 
void Nokta::setX(int x){this->x=x;}
void Nokta::setY(int y){this->y=y;}

int Nokta :: getX()const{return x;}

int Nokta::getY()const{return y;}

void Nokta :: yaz(){cout<<"\n("<<x<<","<<y<<")";}

bool Nokta :: bak(){return x%2==0 && y%2==0;}
#endif