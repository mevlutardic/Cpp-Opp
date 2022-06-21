
#include<iostream>
using namespace std;
  
#include "Nokta.h"
  


int main()

{

  Nokta n1(2,5);
  Nokta n2(15,45);
  Nokta n3 = n1.Topla(n2);
  int x =n3.getX();

  cout<<x;
  n3.yaz();

  return 0;
}