
#include<iostream>
using namespace std;
  
class Nokta
{
private:
  int x;
  int y;
public:

  void Set(int _x , int _y ) { x = _x; y = _y; }


  void yaz(){

    cout<<"\n("<<x<<","<<y<<")";

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

  Nokta array[10];

  Nokta* pArray;
  pArray = new Nokta[10];




  
  for (int i = 0; i<10 ; i++ ){

      array[i].Set(i,i+1);
      (pArray+sizeof(Nokta)*i)->Set(i+1,i+3);
      /*dizi olarak oluşturulmuş nesne içinde gezmek için;
      diziadı+sizeof(Nokta)*i nesnedin kapladığı alan kadae ileri gitmiş olur.
      */ 
      //cout<<sizeof(pArray)<<"+"<<sizeof(Nokta)*i<<endl;
  }

    for (int i = 0; i<10 ; i++ ){

      //array[i].yaz();
     (pArray+sizeof(Nokta)*i)->yaz();
     cout<<" --> "<<(pArray+sizeof(Nokta)*i)<<endl;

  }



  return 0;
}