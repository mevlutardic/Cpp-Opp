
#include<iostream>

using namespace std;

class employee{
    
private:
    string name;
    int salary;
    int id;
public:
 
    //this kullanımı self ile aynı mantıktır.

    employee(string name,int salary,int id){

        this->name=name;
        this->salary=salary;
        this->id=id;

    }

    void showInfo(){

        cout<<" Isim   : "<<this->name<<endl;
        cout<<" Maas   : "<<this->salary<<endl;
        cout<<" Kimlik : "<<this->id<<endl;

    }
};

int main(){

    employee emp("Mevlut Ardic", 10000,3676);

    emp.showInfo();

    return 0;

}


