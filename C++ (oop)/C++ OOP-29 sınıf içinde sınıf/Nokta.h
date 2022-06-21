#ifndef _NOKTA_H_
#define _NOKTA_H_

class Nokta
{
private:
  int x;
  int y;

public:

  Nokta();

  Nokta(int, int);

  ~Nokta();

  void setX(int);

  void setY(int);

  int getX()const;

  int getY()const;

  void yaz()const;

  bool bak();


  double uzaklikHesapla(const Nokta&);

  Nokta Topla(const Nokta&)const; //protatip oluşturulur.
  
};
#include "Nokta.cpp"
#endif