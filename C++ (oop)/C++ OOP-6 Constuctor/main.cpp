
#include<iostream>

using namespace std;

class employee{
    
private:
    string name;
    int salary;
    int id;
public:
 
    //Constructtor oluşturma.İnit ile aynı kullanılır:bunun görevi değişkenlere doğrudan erişme.

    employee(string ad,int maas,int kimlik){

        name=ad;
        maas=salary;
        id=kimlik;

    }

    void showInfo(){

        cout<<" Isim   : "<<name<<endl;
        cout<<" Maas   : "<<salary<<endl;
        cout<<" Kimlik : "<<id<<endl;

    }
};

int main(){

    employee emp("Mevlut Ardic", 10000,3676);

    emp.showInfo();

    return 0;

}


