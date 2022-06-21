#include <iostream>
#include <string>
using namespace std;


int main(){

int a=5;
int *p=&a;

cout<<a<<endl;
cout<<&a<<endl;
cout<<*p<<endl;

*p=12;

cout<<a<<"--"<<&a<<"--"<<*p<<endl;

}


