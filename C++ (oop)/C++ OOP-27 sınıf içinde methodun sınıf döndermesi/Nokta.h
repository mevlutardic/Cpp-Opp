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

  int getX();

  int getY();

  void yaz();

  bool bak();

  Nokta Topla(const Nokta&)const; //protatip oluşturulur.
  
};
#include "Nokta.cpp"
#endif