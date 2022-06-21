#include <iostream>
#include <string>
using namespace std;

struct  Employee
{
    int id;
    string name;
    string department;
};

int main(){

    Employee emp1={12,"Mevlut","Ar-Ge"};
    Employee *ptr=&emp1;
    

    cout<<"\nID        :"<<ptr->id<<endl;
    cout<<"Ad        :"<<ptr->name<<endl;
    cout<<"Departman :"<<ptr->department<<endl;

    

    
    return 0;

}


