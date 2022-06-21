
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

void Nokta :: yaz(){cout<<"\n("<<x<<","<<y<<")";}

bool Nokta :: bak(){return x%2==0 && y%2==0;}

  
int main()

{

  Nokta point;

  Nokta p2(124,654);
  

  cout<<"("<<point.getX()<<","<<point.getY()<<")"<<endl;
  cout<<"("<<p2.getX()<<","<<p2.getY()<<")"<<endl;
  
  return 0;
}