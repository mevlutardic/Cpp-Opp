#include <iostream>
#include <string>
using namespace std;

struct  Employee
{
    int id;
    string name;
    string department;
};

void showEmp(Employee employee){

    cout<<"\nID        :"<<employee.id<<endl;
    cout<<"Ad        :"<<employee.name<<endl;
    cout<<"Departman :"<<employee.department<<endl;

}

void showEmpPtr(Employee* employee){

    cout<<"\nID        :"<<employee->id<<endl;
    cout<<"Ad        :"<<employee->name<<endl;
    cout<<"Departman :"<<employee->department<<endl;

}

void showEmployeArray(Employee* employee,int size){

    for (int i=0; i<=size;i++){
        
        cout<<"\nID        :"<<employee->id<<endl;
        cout<<"Ad        :"<<employee->name<<endl;
        cout<<"Departman :"<<employee->department<<endl;

    }
}



int main(){

    Employee emp1={12,"Mevlut","Ar-Ge"};
    Employee *ptr=&emp1;

    Employee emp[2];
    int size= sizeof(emp)/sizeof(emp[0]);
    
    // cout<<"\nID        :"<<ptr->id<<endl;
    // cout<<"Ad        :"<<ptr->name<<endl;
    // cout<<"Departman :"<<ptr->department<<endl;

    //showEmp(emp1);

    emp[0]={121,"65","ljknl"};
    emp[1]={121,"65","ljknl"};
    emp[2].id=12354;
    emp[2].name="nnıkmdfg";
    emp[2].department="132sdasd";

    showEmpPtr(ptr);

    showEmployeArray(emp,size);
    
    // for (int i= 0; i<3 ;i++){
    //      //showEmp1(*(emp+i));
    //     //showEmp1(emp[i]);
    //     showEmp2(&emp[i]);
    // }
   

    return 0;

}


