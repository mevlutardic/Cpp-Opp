
#include<iostream>
using namespace std;
  
#include "Nokta.h"
#include "math.h"
  
class cizgi
{
private:
  Nokta baslangıc;
  Nokta bitis;
public:
  cizgi(Nokta, Nokta);
  // cizgi(Nokta baslangıc,Nokta bitis):baslangıc(baslangıc),bitis(bitis){

  // }

  double uzunluk();

  void yazdir();

};

cizgi ::cizgi(Nokta baslangıc,Nokta bitis): baslangıc(baslangıc),bitis(bitis){

}

double cizgi::uzunluk(){

return baslangıc.uzaklikHesapla(bitis);
}

void cizgi::yazdir(){
   baslangıc.yaz();
   bitis.yaz();
  cout<<"çizginin uzunluğu: "<<uzunluk();
}


int main()

{

  Nokta L(Nokta(21,65),Nokta(12,6)); 

  
  return 0;
}