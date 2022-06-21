#include <iostream>
#include <string>
using namespace std;


int main(){
    int *ptr;
    int size;

    cout<<"Kaç Değer Saklanacak:";
    cin>>size;

    ptr = new int[size]; 
    cout<<ptr;
    for(int i=0; i<size;i++){

        cout<<"Deger:";
        cin>>ptr[i];
    } 
    
     for(int i=0; i<size;i++){

        cout<<ptr[i]<<",";
 
    } 
    delete [] ptr;

    cout<<ptr;

    return 0;

}


