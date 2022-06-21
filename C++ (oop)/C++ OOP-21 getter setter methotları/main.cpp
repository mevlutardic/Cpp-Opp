
#include<iostream>
using namespace std;
  
class Nokta
{
private:
  int x;
  int y;
public:

  void setX(int);

  void setY(int);

  int getX();

  int getY();


  void yaz();

  bool bak();
  
};

void Nokta::setX(int _x){x=_x;}
void Nokta::setY(int _y){y=_y;}

int Nokta :: getX(){return x;}

int Nokta::getY(){return y;}

void Nokta :: yaz(){cout<<"\n("<<x<<","<<y<<")";}

bool Nokta :: bak(){return x%2==0 && y%2==0;}

  
int main()

{

  Nokta point;
  
  point.setX(12);
  point.setY(45);

  cout<<point.getX()<<endl;
  cout<<point.getY()<<endl;
  return 0;
}