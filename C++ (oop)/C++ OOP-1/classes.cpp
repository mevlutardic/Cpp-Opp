#include <iostream>
#include <string>
using namespace std;

class Student{

    public:
        int num;
        string name;

        int GetNum(){
            return num;
        }

        string GetName(){
            return name;
        }
};

int main(){

    Student st1;

    st1.name=  "mevlut";
    st1.num=1234;

    cout<<"Num  :"<<st1.GetNum()<<endl;
    cout<<"Name :"<<st1.GetName()<<endl;


    return 0;
}


