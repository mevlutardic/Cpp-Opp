
#include<iostream>

using namespace std;

class Math{

    public:
        static void cude(int x){
            cout<<x*x*x<<endl;
        }
        static void add2(int x){
            cout<<x+2<<endl;
        }
};

int main(){

    Math::cude(3);
    Math::add2(123);
    
    
return 0;
}


