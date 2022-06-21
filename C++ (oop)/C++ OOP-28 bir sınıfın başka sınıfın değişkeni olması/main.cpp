
#include<iostream>
using namespace std;
  
#include "Nokta.h"
#include "math.h"
  



int main()

{

  Nokta n1(0,0);

  Nokta n2(3,4);

  cout<<n2.uzaklikHesapla(n1);
  return 0;
}