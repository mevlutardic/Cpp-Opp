
#include<iostream>
using namespace std;
  
class Nokta
{
private:
  int x;
  int y;
public:

  Nokta();

  Nokta(int, int);

  void setX(int);

  void setY(int);

  int getX();

  int getY();


  void yaz();

  bool bak();
  
};


Nokta::Nokta(){
  cout<<"Parametresiz Cagrildi .\n";
  x=0;
  y=0;
  };

Nokta::Nokta(int x,int y){
  cout<<"Parametreli Cagrildi .\n";
  this->x=x;
  this->y=y;
}

void Nokta::setX(int x){this->x=x;}
void Nokta::setY(int y){this->y=y;}

int Nokta :: getX(){return x;}

int Nokta::getY(){return y;}

void Nokta :: yaz(){cout<<"("<<x<<","<<y<<")"<<endl;}

bool Nokta :: bak(){return x%2==0 && y%2==0;}

  
int main()

{

  Nokta point[3]={{1,2},{21,5}};

  for (int i=0;i<3;i++){
    point[i].yaz();
  }

  Nokta *ptr = new Nokta(12,54);

  ptr->yaz();


  return 0;
}