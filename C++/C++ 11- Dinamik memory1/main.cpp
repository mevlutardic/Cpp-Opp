#include <iostream>
#include <string>
using namespace std;


int main(){

    int *ptr = new int ; /*bir tane int tutacak bir
                          yer ayrılır ve bu pointer orayı göstersin*/
    *ptr = 5;
    delete ptr;

    return 0;

}


