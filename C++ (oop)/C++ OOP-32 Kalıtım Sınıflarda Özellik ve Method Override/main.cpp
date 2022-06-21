#include <iostream>
#include <string>
using namespace std;
//#include "Kolon.cpp"
class insan{
    protected:
        string tc;
        string isim;
        string soyisim;
    public:

        insan(string tc="",string isim="",string soyisim=""):tc(tc),isim(isim),soyisim(soyisim){}

        string getTc(){return tc;}
        string getIsin(){return isim;}
        string getSoyisim(){return soyisim;}

        void setTc(string tc){this->tc=tc;}
        void setIsim(string isim){this->isim=isim;}
        void setSoyisim(string soyisim){this->soyisim=soyisim;}

        void ShowAll(){
            cout<<"Ad    : "<<this->isim<<endl;
            cout<<"Soyad : "<<this->soyisim<<endl;
            cout<<"Tc    : "<<this->tc<<endl;
        }

};


class ogrenci:public insan{
    
    private:
        string orgenciNo;
    public:
        ogrenci(string orgenciNo ="",string tc="",string isim="",string soyisim="" ): orgenciNo(orgenciNo),insan(tc,isim,soyisim){

        }

        void shofInf(){
            cout<<"Öğrenci Bilgileri :"<<endl;
            cout<<"Ad    : "<<this->isim<<endl;
            cout<<"Soyad : "<<this->soyisim<<endl;
            cout<<"No    : "<<this->orgenciNo<<endl;
            cout<<"Tc    : "<<this->tc<<endl;

        }


        void setOgrNo(){this->orgenciNo=orgenciNo;}
        string getOgrNo(){return orgenciNo;}
};




int main(){

    insan ali("1324656544","Ali","Arsnoy");
    ogrenci ogr1("1031120300","36760851668","Mevlut","Ardic");
    
    
    ogr1.shofInf();
    
    
}


