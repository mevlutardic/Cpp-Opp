#ifndef _NOKTA_
#define _NOKTA_
#include "Nokta.h"



Nokta::Nokta(){
  //cout<<"Parametresiz Cagrildi .\n";
  x=0;
  y=0;

  };

Nokta::Nokta(int x,int y){
  //cout<<"Parametreli Cagrildi .\n";
  this->x=x;
  this->y=y;
  //yaz();
}


Nokta::~Nokta(){
 // cout<<"\nyikici:";

  //yaz();
} 


Nokta Nokta::Topla(const Nokta& n)const{

  int x =this->x+n.x;
  int y =this->y+n.y;

  return Nokta (x,y);
}


void Nokta::setX(int x){this->x=x;}
void Nokta::setY(int y){this->y=y;}

int Nokta :: getX(){return x;}

int Nokta::getY(){return y;}

void Nokta :: yaz(){cout<<"\n("<<x<<","<<y<<")";}

bool Nokta :: bak(){return x%2==0 && y%2==0;}
#endif