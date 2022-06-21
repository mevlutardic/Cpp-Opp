
#include<iostream>

using namespace std;

class employee{
    
private:
    string name;
    int salary;
    int id;
public:

    //Constructtor oluşturma.
    employee (){
        this->name="Bilgi Yok !";
        this->id=0;
        this->salary=0;
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
    void setName(string name){
        this->name=name;
    }  
    string getName(){
        return name;
    }  

    void setSalary(int salary){
        this->salary=salary;
    }  
    int getSalary(){
        return salary;
    } 

    void setId(int id){
        this->id=id;
    }  
    int getId(){
        return id;
    } 



    void showInfo(){

        cout<<"\n Isim   : "<<name<<endl;
        cout<<" Maas   : "<<salary<<endl;
        cout<<" Kimlik : "<<id<<endl;

    }
};


void deneme(employee emp){

    emp.showInfo();

}

void deneme(employee* PtrEmp){

    PtrEmp->showInfo();

}

int main(){

    employee* emp= new employee();
    employee emp2;
    employee emp3("mlj",154,649);
    
    //emp2.showInfo();
    //emp3.showInfo();
    
    deneme(&emp3);
    deneme(&emp2);

    return 0;
}


