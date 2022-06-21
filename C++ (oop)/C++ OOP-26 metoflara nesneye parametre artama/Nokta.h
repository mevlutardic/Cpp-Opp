#ifndef _NOKTA_H_
#define _NOKTA_H_

class Nokta
{
private:
  int x;
  int y;
  int *z;
public:

  Nokta();

  Nokta(int, int);

  ~Nokta();

  double uzaklıkHesapla(const Nokta&);// methotta kopyalandı.

  void setX(int);

  void setY(int);

  int getX()const;

  int getY()const;

  void yaz();

  bool bak();
  
};
#include "Nokta.cpp"
#endif