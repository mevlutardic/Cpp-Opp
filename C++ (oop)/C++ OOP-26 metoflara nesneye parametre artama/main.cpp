
#include<iostream>
using namespace std;
  
#include "Nokta.h"
  
int main()

{

  Nokta n1(0,0);
  Nokta n2(3,4);
  
  //cout<< n1.uzaklikHesapla(n2);
  int a=n1.uzaklıkHesapla(n2);

  cout<<a;
  return 0;
}