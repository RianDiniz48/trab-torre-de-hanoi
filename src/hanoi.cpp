#include "../include/Hanoi.h"
#include <iostream>
#include <vector>

using namespace std;

void imprimirPilha(stack<int> p){

    vector<int> v;

    while(!p.empty()){
        v.push_back(p.top());
        p.pop();
    }

    cout<<"[";

    for(int i=v.size()-1; i>=0; i--){
        cout<<v[i];

        if(i!=0)
            cout<<", ";
    }

    cout<<"]";
}

Hanoi::Hanoi(int discos){

    movimentos=0;

    for(int i=discos;i>=1;i--){
        A.push(i);
    }
}

void Hanoi::exibirEstado(){

    cout<<"A: ";
    imprimirPilha(A);

    cout<<"  B: ";
    imprimirPilha(B);

    cout<<"  C: ";
    imprimirPilha(C);

    cout<<"\n\n";
}

void Hanoi::moverRecursivo(
        int n,
        stack<int>& origem,
        stack<int>& destino,
        stack<int>& auxiliar,
        string nomeOrigem,
        string nomeDestino,
        string nomeAux){

    if(n==1){

        int disco=origem.top();
        origem.pop();

        destino.push(disco);

        movimentos++;

        cout<<"Mover disco "
            <<disco
            <<" de "
            <<nomeOrigem
            <<" para "
            <<nomeDestino
            <<endl;

        exibirEstado();

        return;
    }

    moverRecursivo(
        n-1,
        origem,
        auxiliar,
        destino,
        nomeOrigem,
        nomeAux,
        nomeDestino
    );

    int disco=origem.top();

    origem.pop();

    destino.push(disco);

    movimentos++;

    cout<<"Mover disco "
        <<disco
        <<" de "
        <<nomeOrigem
        <<" para "
        <<nomeDestino
        <<endl;

    exibirEstado();

    moverRecursivo(
        n-1,
        auxiliar,
        destino,
        origem,
        nomeAux,
        nomeDestino,
        nomeOrigem
    );
}

void Hanoi::resolver(){

    moverRecursivo(
        A.size(),
        A,
        C,
        B,
        "A",
        "C",
        "B"
    );

    cout<<"Total de movimentos: "
        <<movimentos
        <<endl;
}

int Hanoi::getMovimentos(){
    return movimentos;
}
