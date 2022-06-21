
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
  Nokta point(5,0);
  point.yaz();
  cout<<point.bak()<<endl;
  if (point.bak()==true){
    cout<<"Baslangic \n";
  }
  else{
    cout<<"Baslangic degil \n";
  }

  return 0;
}