
#include<iostream>

using namespace std;

class employee{
    
public:

string *s;
int *i;


employee(string str,int ivalue){
    s= new string;
    i= new int;

    *s=str;
    *i=ivalue;
    
}
~employee(){
    cout<<"Destructor cagrildi ! "<<endl;

}

void show(){

    cout<<"string: "<<*s<<"---int: "<<*i<<endl;

    delete i;
    /* bunları sırayla silinir hem objeler 
    hem de gösterdiği yerler silinmiş olacak 
    ve bellek sızıntısı ortadan kalkmış olacaktır*/
    delete s;
}


};




int main(){

    employee *emp = new employee("jknk",454);//pointer tanımlandı.
    /*objelerimizi pointerlarla yapacak olrsak destructorlar yazmak 
    zorundayız aksi halde programlarımız çok büyüyecek ve ramde
     şişme gerçekleştirecektir*/
    emp->show();
    

    delete emp;/* sadece sınıfınadresini silmemiz yeterli olmayacaktır.
    s i nin adreslerinin de silinmesi lazım*/

    return 0;

}


