
#include<iostream>
using namespace std;
  
class Math
{

public:
  static int cross(int x, int y){
    int Eq=x*y;
    
    return Eq;
    }
  static int add(int x, int y ){
    int Eq=x+y;
    return Eq;
    }

};
  
int main()
{
  
  Math a;

  Math::add(3,5);
  Math::cross(46,54);
  cout<<a.cross(3,5)<<"---"<<a.add(12,65)<<endl;


  return 0;
}