#include <iostream>
#include <string>
using namespace std;

void degerDegistir(int &ref){

ref=10;
}


int main(){

int a=2;
cout<<a<<endl;
degerDegistir(a);
cout<<a<<endl;


}


