
#include<iostream>

using namespace std;

class Employee
{
    
private:
    string name;
    int id;
    int salary;

public:

    void SetName(string isim){name=isim;}
    void SetID(int num){id=num;}
    void SetSalary(int maas){maas=salary;}
    void showInfos(){

        cout<<"ID   : "<<id<<endl;
        cout<<"Isim : "<<name<<endl;
        cout<<"Maas : "<<salary<<endl;

    }
};

int main(){

    Employee Emp1;

    Emp1.SetID(12);
    Emp1.SetName("Mevlut");
    Emp1.SetSalary(15000);

    Emp1.showInfos();
    
    return 0;

}


