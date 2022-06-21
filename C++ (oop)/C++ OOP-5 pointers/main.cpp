
#include<iostream>

using namespace std;

class employee{
    
private:
    string name;
    int salary;
    int id;

public:
    void setName(string isim){name=isim;}  
    string getName(){return name;}  

    void setSalary(int Maas){salary=Maas;}  
    int getSalary(){return salary;} 



    void showInfo(){

        cout<<" Isim   : "<<name<<endl;
        cout<<" Maas   : "<<salary<<endl;
        cout<<" Kimlik : "<<id<<endl;

    }
};

int main(){

    employee* emp=new employee(); //yer ayrılır adreste 

    emp->setSalary(123);
    emp->setName("knmlkf");
    
    emp->showInfo();

    return 0;

}


