
#include<iostream>

using namespace std;


void Test(){

    static int i=3; 
    /* statik olarak oluşturulursa. 
    atama bir kere yapılmış olur fonk 
    her çağrıldığında yeniden atama yapmaz*/
    i++;
    cout<<"i nin degeri : "<<i<<endl;

}

int main(){

    for (int i =0 ;i<3;i++){
         Test();
    }
   

return 0;
}


