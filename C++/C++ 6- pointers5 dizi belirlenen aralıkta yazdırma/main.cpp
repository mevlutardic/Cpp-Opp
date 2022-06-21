#include <iostream>
#include <string>
using namespace std;



void PrintArry( int *p1, int *p2)
{   
    cout<<"\n[";
    for(;*p1 != *p2 ; p1++){
        cout<<*p1<<",";
    }
     cout<<"]";
}
int main(){

int arry[]={1,2,3,4,5,6,7,8,9};

for (int A : arry){
    cout<<A;
}

PrintArry(arry+2,arry+6);

}


