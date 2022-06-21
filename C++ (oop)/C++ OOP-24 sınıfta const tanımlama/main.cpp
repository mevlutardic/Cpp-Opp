
#include<iostream>
using namespace std;
  
class Nokta
{
private:
  int x;
  int y;
  int *z;
public:

  const int t;

  Nokta();

  Nokta(int, int,int);

  ~Nokta();

  void setX(int);

  void setY(int);

  int getX();

  int getY();

  void yaz();

  bool bak();
  
};


Nokta::Nokta() : t(0){
  cout<<"Parametresiz Cagrildi .\n";
  x=0;
  y=0;
  z=new int(5);
  //t=0;
  };

Nokta::Nokta(int x,int y,int t=0) : t(t){
  cout<<"Parametreli Cagrildi .";
  this->x=x;
  this->y=y;
  //this->t=t;
  z= new int(5);
  yaz();
}


Nokta::~Nokta(){
  cout<<"\nyikici:";
  delete z;
} 
void Nokta::setX(int x){this->x=x;}
void Nokta::setY(int y){this->y=y;}

int Nokta :: getX(){return x;}

int Nokta::getY(){return y;}

void Nokta :: yaz(){cout<<"\n("<<x<<","<<y<<","<<t<<")";}

bool Nokta :: bak(){return x%2==0 && y%2==0;}

  
int main()

{
  
  Nokta n1(1,10);

  return 0;
}