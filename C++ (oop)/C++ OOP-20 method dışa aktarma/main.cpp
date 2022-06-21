
#include<iostream>
using namespace std;
  
class Nokta
{
private:
  int x;
  int y;
public:

  void Set(int, int ) ;


  void yaz();

  bool bak();
  
};

void Nokta :: Set(int _x , int _y ) { x = _x; y = _y; }

void Nokta :: yaz(){cout<<"\n("<<x<<","<<y<<")";}

bool Nokta :: bak(){return x%2==0 && y%2==0;}

  
int main()

{

  Nokta point;
  Nokta *point2;
  Nokta array[10];

  Nokta* pArray;
  pArray = new Nokta[10];

  point2 = new Nokta();
  point.Set(0,0);

  point2->Set(32,65);

  // if (point.bak()==true){
  //   cout<<"Baslangic \n";
  // }
  // else{
  //   cout<<"Baslangic degil \n";
  // }
  
  for (int i = 0; i<10 ; i++ ){

      //array[i].Set(i,i+1);
      (pArray+sizeof(Nokta)*i)->Set(i+1,i+3);
     
  }

    for (int i = 0; i<10 ; i++ ){

      //array[i].yaz();
     (pArray+sizeof(Nokta)*i)->yaz();
     cout<<" --> "<<(pArray+sizeof(Nokta)*i)<<"-"<< (pArray+sizeof(Nokta)*i)->bak()<<endl;


  }

  point.yaz();
  
  point2->yaz();

  return 0;
}