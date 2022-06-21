#include <iostream>
#include <string>
using namespace std;



void printArray(int *array,int arraySize){
cout<<*(array+6)<<endl;
for (int i = 0; i < arraySize; i++)
{
   cout<<*(array+i)<<endl;
}

}

int main(){

int arry[]={1,2,3,4,5,6,156};
int size=sizeof(arry)/sizeof(arry[0]);
cout<<sizeof(arry)<<endl;
//printArray(arry,size);

}


