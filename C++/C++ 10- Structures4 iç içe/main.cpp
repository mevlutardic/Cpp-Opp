#include <iostream>
#include <string>
using namespace std;

struct  Adress
{   
    int No;
    string cityName;
};


struct  Employee
{
    int id;
    string name;
    string department;
    Adress adr;
    Adress *P_adr;
};

int main(){

    Employee emp1={12,"Mevlut","Ar-Ge"};
    Employee *ptr=&emp1;
    
    emp1.adr={25,"usak"};


    cout<<"\nID        :"<<ptr->id<<endl;
    cout<<"Ad        :"<<ptr->name<<endl;
    cout<<"Departman :"<<ptr->department<<endl;
    cout<<"Sehir     :"<<ptr->adr.cityName<<endl;
    cout<<"No        :"<<ptr->adr.No<<endl;
    
    return 0;

}


