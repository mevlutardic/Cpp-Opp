#include <iostream>
#include <string>
using namespace std;


class Student{

    public:
        string name;

        void tellName(){
            cout<<"benim adim :"<<name<<endl;
        }
};

int main(){

Student st1;
Student st2;

st1.name=" mevlut ";
st1.tellName();

    return 0;
}


