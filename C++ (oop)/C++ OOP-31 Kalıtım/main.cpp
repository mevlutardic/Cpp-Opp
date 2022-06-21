#include <iostream>
#include <string>
using namespace std;

class Base
{

public:
    int data[100];
    int size ;

    Base():size(0){}
    
    void add(float value){
        
        data[size]=value;
        size++;    
        
    }

    void print()const{
        cout<<"Base print() \n[";
        for (int i=0;i<size;i++){
            cout<<data[i]<<" "; 
            }  
            cout<<"]";
    }  
   
};


class Deliver: public Base
/* Kalıtım alınan sınıfın özellikleri ile ulalışan sınıfın özellikleri aynı ise
 kalıtım alınan sınıfı ezmiş ve kendi özelliklerini basar. */
{

public:
    int data[100];
    int size ;

    Deliver():size(0){}
    
    void add(float value){
        
        data[size]=value;
        size++;    
        
    }

    void print()const{
        Base::print(); //Ezme ancak böyle engellenir.
        cout<<"Deliver print() \n[";
        for (int i=0;i<size;i++){
            cout<<data[i]<<" "; 
            }  
            cout<<"]";
    }  

    void x(){
        cout<<"özellik ezme."<<endl;
    }
   
};




int main(){

  Base b;
  Deliver d;
  float i;
  int c;
 
  while (true){

    cout<<i<<". indis : "; 
    cin>>i;
    b.add(i);
    d.add(i);
    if (c>=2){break;}
    c++;
  }
    b.print();
    cout<<endl;
    d.print();
    d.x();

    Base *p=&d;
    cout<<p->x;
    return 0;
}


