
#include<iostream>
using namespace std;

// aynı anda aynı değişkenleri kullanacaksak isim uzayı kullanılır.Böylece değişkenler çakışmaz.
namespace prg1{

  int x=10;
  
  void Boo(){
    int x=7;
    cout<<x<<endl;

  }
}
namespace prg2{

  int x=6;

  void Foo(){
    int x=9;
    cout<<x<<endl;

  }
}


  
int main()
{
  
  prg1::Boo();
  cout<<prg1::x<<endl;
  prg2::Foo();
  cout<<prg2::x<<endl;
  return 0;
}