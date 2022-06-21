#include "Kolon.h"

Kolon::Kolon(int boyut):boyut(boyut)
{
data = new int[boyut];
//cout<<boyut<<" elemanlı dizi olusturuldu."<<endl;
}

Kolon::Kolon(const Kolon& k){//Kopya kurucu oluşturulur.aslında dizi kopyalanmış oldu.
        this->boyut=k.boyut;
        data=new int[boyut];
        for (int i=0;i<boyut;i++){
            data[i]=k.data[i];
        }
        cout<<"kopyalama calisti."<<endl;
    }


void Kolon:: set(int indis , int value){

        if (indis<boyut){

            data[indis]=value;
        }
    }


const int* Kolon::getData()const{return data;}

int Kolon::getBoyut(){return boyut;}

void Kolon::setBoyut(int boyut){this->boyut=boyut;}
void Kolon::print()const{
      for (int i=0;i<data[i];i++){
                cout<<data[i]<<" ";

        }
        cout<<endl;
}

Kolon Kolon::topla(const Kolon& k)const{
     Kolon temp;
    if (boyut == k.boyut){
           
            temp.boyut=boyut;
            for(int i=0;i<boyut;i++)

                temp.data[i]=data[i]+k.data[i];
            

        
        }
        return temp;
       
}



Kolon Kolon::carpma(const Kolon& k)const{
    Kolon temp(boyut);
     if (boyut==k.boyut){

            
            for(int i=0;i<boyut;i++){

                temp.data[i]=data[i]*k.data[i];
            }
           
        }
         return temp;
}


double Kolon::ortHesapla()const{

   int ara=0;

        for(int i=0;i<boyut;i++){
            ara+=data[i];
        }
        return (double)ara/boyut;

}

Kolon::~Kolon()
{
delete[] data;
}