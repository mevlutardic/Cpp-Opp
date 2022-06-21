
#include "employee.h"
#include"employee.cpp"
#include<iostream>

using namespace std;

int main(){

    employee emp;

    emp.id=12;
    emp.names="Mevlut Ardic";
    emp.salary=10000;

    emp.showInf();

    return 0;
    
}


