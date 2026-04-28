#include <iostream>
#include "include/Hanoi.h"

using namespace std;

int main(){

    int n;

    cout<<"Digite numero de discos (1 a 10): ";
    cin>>n;

    if(n<1 || n>10){
        cout<<"Valor invalido.\n";
        return 1;
    }

    Hanoi jogo(n);

    jogo.resolver();

    return 0;
}
