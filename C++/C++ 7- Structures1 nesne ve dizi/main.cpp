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
    Employee emp2;
    Employee emp3[2];

    cout<<"\nID        :"<<emp1.id<<endl;
    cout<<"Ad        :"<<emp1.name<<endl;
    cout<<"Departman :"<<emp1.department<<endl;

    emp2.id=1254;
    emp2.department="mknbk";
    emp2.name="mşlm";

    cout<<"\nID        :"<<emp2.id<<endl;
    cout<<"Ad        :"<<emp2.name<<endl;
    cout<<"Departman :"<<emp2.department<<endl;

    emp3[0]={1,"1ddfgdfg","1ghjghj"};
    emp3[1]={2,"2dfgdfgf","2ghjghj"};
    
    emp3[2].id=354;
    emp3[2].department="dsfsfsoıuhkj";
    emp3[2].name="şlmndjfg";

    for (int i=0; i<3;i++){

        cout<<"\nID        :"<<emp3[i].id<<endl;
        cout<<"Ad        :"<<emp3[i].name<<endl;
        cout<<"Departman :"<<emp3[i].department<<endl;
    }

}


