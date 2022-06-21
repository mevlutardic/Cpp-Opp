
#include<iostream>

using namespace std;


class Gamer{
    private:

        string name;

    public:
        static int gamers; /* sayesinde  objeye her
         yerden ulaşım sağlanır.*/
    Gamer(){
        gamers++;
        cout<<gamers<<". Oyuncu Olusturuldu. "<<endl; 
    }

    void Set(string name){
        this->name=name;
    }

    string Get(){return this->name;}
};


int Gamer::gamers=0;

int main(){

    Gamer gamer1;
    Gamer gamer2;
    Gamer gamer3;


    Gamer gamer[10];

    gamer[1].Set("mevlut");
    cout<<gamer[1].Get()<<endl;
    cout<<Gamer::gamers<<endl;

return 0;
}


