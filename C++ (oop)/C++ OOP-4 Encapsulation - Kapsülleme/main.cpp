


#include<iostream>

using namespace std;

class Employee
{
private:
    string name;
    int id;
    int salary;
public:

    void SetName(string ad){name=ad;}
    void SetId(int numara){id=numara;}
    void SetSalary(int maas){salary=maas;}

    void ShowInf(){
        cout<<"name   : "<<name<<endl;
        cout<<"Id     : "<<id<<endl;
        cout<<"Salary : "<<salary<<endl;
    }
    
};

int main(){

    Employee emp;

    emp.SetId(12);
    emp.SetName("mevlut");
    emp.SetSalary(7000);

    emp.ShowInf();



    return 0;
    
}


