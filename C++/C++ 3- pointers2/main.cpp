#include <iostream>
#include <string>
using namespace std;



void deger(int *af){

    cout<<"deger:"<<*af<<endl;
}
int main(){
int a=12;
cout<<a;
int *p=&a;
deger(p);
cout<<a;
}


