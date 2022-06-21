#ifndef _NOKTA_
#define _NOKTA_
#include "Nokta.h"



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


Nokta::~Nokta(){
  cout<<"\nyikici:";
  delete z;
  yaz();
} 
void Nokta::setX(int x){this->x=x;}
void Nokta::setY(int y){this->y=y;}

int Nokta :: getX(){return x;}

int Nokta::getY(){return y;}

void Nokta :: yaz(){cout<<"\n("<<x<<","<<y<<")";}

bool Nokta :: bak(){return x%2==0 && y%2==0;}
#endif