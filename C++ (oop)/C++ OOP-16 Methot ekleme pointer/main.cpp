
#include<iostream>
using namespace std;
  
class Nokta
{
private:
  int x;
  int y;
public:

  Nokta(int x = 0, int y = 0) { this->x = x; this->y = y; }

  void yaz(){

    cout<<"("<<x<<","<<y<<")"<<endl;

  }

  void DegerAta(int x,int y ){
    this->x=x;
    this->y=y;
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
  point2=&point;


  Nokta *point4;
  point4=new Nokta();
  
  point4->DegerAta(4,6);
  point4->yaz();



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

  return 0;
}