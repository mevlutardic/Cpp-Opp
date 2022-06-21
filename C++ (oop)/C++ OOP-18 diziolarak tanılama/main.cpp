
#include<iostream>
using namespace std;
  
class Nokta
{
private:
  int x;
  int y;
public:

  Nokta(int x = 0, int y = 0) { this->x = x; this->y = y; }

  Nokta setX(int a){
    x=a;
    return *this;

  }

  Nokta setY(int b){
    y=b;
    return *this;
  }

  void yaz(){

    cout<<"("<<x<<","<<y<<")"<<endl;

  }

  bool bak(){
    // if (x==0 && y==0){
    //   return true;

    // }
    // else{
    //   return false;
    // }
    return x==0 && y==0;
  }
  
};
  
int main()
{
  Nokta point(0,0);
  Nokta *point2;
  Nokta *point3;

  point3 =new Nokta(30,52);

  point2 =new Nokta();

  point2->setX(10);
  point2->setY(20);




  if (point.bak()==true){
    cout<<"Baslangic \n";
  }
  else{
    cout<<"Baslangic degil \n";
  }

  point.yaz();

  if (point2->bak()==true){
    cout<<"Baslangic \n";
  }
  else{
    cout<<"Baslangic degil \n";
  }
    point2->yaz();



  if (point3->bak()==true){
    cout<<"Baslangic \n";
  }
  else{
    cout<<"Baslangic degil \n";
  }
    point3->yaz();






  return 0;
}