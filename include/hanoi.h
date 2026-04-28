#ifndef HANOI_H
#define HANOI_H

#include <stack>
#include <string>

class Hanoi {

private:

    std::stack<int> A;
    std::stack<int> B;
    std::stack<int> C;

    int movimentos;

    void moverRecursivo(
        int n,
        std::stack<int>& origem,
        std::stack<int>& destino,
        std::stack<int>& auxiliar,
        std::string nomeOrigem,
        std::string nomeDestino,
        std::string nomeAux
    );

    void exibirEstado();

public:

    Hanoi(int discos);

    void resolver();

    int getMovimentos();
};

#endif
