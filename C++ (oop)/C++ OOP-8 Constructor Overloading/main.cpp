
#include<iostream>

using namespace std;

class employee{
    
private:
    string name;
    int salary;
    int id;
public:
 
    //this kullanımı self ile aynı mantıktır.

    employee(){

        this->name="Bilgi Yok !";
        this->salary=0;
        this->id=0;

    }

    employee(string name,int salary){

        this->name=name;
        this->salary=salary;
        this->id=0;
    }

    employee(string name,int salary,int id){

        this->name=name;
        this->salary=salary;
        this->id=id;

    }

    void showInfo(){

        cout<<"\n Isim   : "<<this->name<<endl;
        cout<<" Maas   : "<<this->salary<<endl;
        cout<<" Kimlik : "<<this->id<<endl;

    }
};

int main(){

    employee emp1("Mevlut Ardic", 10000,3676);
    employee emp2("Mevlut Ardic", 10000);
    employee emp3;


    emp1.showInfo();
    emp2.showInfo();
    emp3.showInfo();

    return 0;

}


