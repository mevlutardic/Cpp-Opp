#include <iostream>
#include <string>
using namespace std;
#include "Kolon.cpp"


// class Kolon
// {
// private:
//    int *data;
//    int boyut;
// public:
//     Kolon(int boyut=1):boyut(boyut){

//         data=new int[boyut];
//         cout<<boyut<<" elemanli dizi olusturuldu. "<<endl;
//     }

//     Kolon(const Kolon& k){//Kopya kurucu oluşturulur.aslında dizi kopyalanmış oldu.
//         this->boyut=k.boyut;
//         data=new int[boyut];
//         for (int i=0;i<boyut;i++){
//             data[i]=k.data[i];
//         }
//         cout<<"kopyalama calisti."<<endl;
//     }


//     ~Kolon(){delete[] data; //cout<<"Yikici silindi"<<endl;
    
//     }

//     void set(int indis , int value){

//         if (indis<boyut){

//             data[indis]=value;
//         }
//     }

//     const int* getData()const{return data;}
//     int getBoyut(){return boyut;}
//     void setBoyut(int boyut){this->boyut=boyut;}
//     void print()const{

//         for (int i=0;i<data[i];i++){
//                 cout<<data[i]<<" ";

//         }
//         cout<<endl;
//     }

//     Kolon topla(const Kolon& k)const{
//         Kolon temp;
//         if (boyut == k.boyut){
//             
//             temp.boyut=boyut;
//             for(int i=0;i<boyut;i++){

//                 temp.data[i]=data[i]+k.data[i];
//             }

//        
//         }
//          return temp;
//     }


//     Kolon carpma(const Kolon& k)const{
//          Kolon temp(boyut);
//         if (boyut==k.boyut){

//             
//             for(int i=0;i<boyut;i++){

//                 temp.data[i]=data[i]*k.data[i];
//             }
//            
//         }
//           return temp;
//     }

//     double ortHesapla()const{

//         int ara=0;

//         for(int i=0;i<boyut;i++){
//             ara+=data[i];
//         }
//         return (double)ara/boyut;
//     }


// };


int main(){

    Kolon k(4);


    k.set(0,1);
    k.set(1,2);
    k.set(2,6);
    k.set(3,6);

    Kolon k2(4);

    k2.set(0,3);
    k2.set(1,4);
    k2.set(2,6);
    k2.set(3,7);


    (k.topla(k2)).print();
    (k.carpma(k2)).print();


    cout<<"\n1. dizi:"<<k.ortHesapla();
    cout<<"\n2. dizi:"<<k2.ortHesapla();

    return 0;
}


