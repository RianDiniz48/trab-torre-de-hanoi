#include "../include/Hanoi.h"
#include <cassert>
#include <iostream>

using namespace std;

int main(){

    Hanoi teste(3);

    teste.resolver();

    assert(teste.getMovimentos()==7);

    cout<<"Teste aprovado.\n";

    return 0;
}
