
#include<iostream>

using namespace std;

class employee{
    
public:

    employee(){
        cout<<"\nConstructor Cagirildi ..."<<endl;
    }
    ~employee(){
        cout<<"\nDestructorlar Cagirildi ..."<<endl;
    }

};

int main(){

    employee *emp = new employee();//pointer tanımlandı.

    delete emp;// bellekten obje silindi

    return 0;

}


