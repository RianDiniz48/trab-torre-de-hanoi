# trab-torre-de-hanoi
# Torre de Hanói com Pilhas em C++

## Descrição

Projeto desenvolvido para demonstrar a resolução do problema da Torre de Hanói utilizando a estrutura de dados Pilha e recursão.

Cada haste (A, B e C) é representada por uma pilha, respeitando as regras clássicas do problema:

- mover apenas um disco por vez
- mover somente o disco do topo
- nunca colocar um disco maior sobre um menor

O programa recebe a quantidade de discos, executa a solução recursiva, mostra cada movimento e exibe o total de movimentos.

---

## Requisitos

- GCC/G++ 11 ou superior

Verificar:

```bash
g++ --version
```

Pode ser executado em:

- Visual Studio Code
- CodeBlocks
- Dev-C++
- CLion

---

## Compilação e Execução

Compilar:

```bash
g++ main.cpp src/Hanoi.cpp -o hanoi
```

Executar:

```bash
./hanoi
```

Fluxo:

1. Informar quantidade de discos
2. Programa inicializa a pilha A
3. Executa a solução recursiva
4. Mostra cada movimento
5. Exibe total de movimentos

---

## Testes

Compilar teste:

```bash
g++ test/test.cpp src/Hanoi.cpp -o teste
```

Executar:

```bash
./teste
```

---

## Pontos de Análise e Justificativa

### 1) Por que Pilha é adequada?

A Pilha é naturalmente apropriada pois segue o modelo LIFO (Last In First Out), exatamente como uma haste da Torre de Hanói, onde apenas o disco do topo pode ser removido ou inserido.

---

### 2) É possível sem recursão?

Sim.

Pode-se resolver de forma iterativa usando pilhas e um algoritmo baseado em movimentos mínimos (2^n -1), alternando movimentos válidos entre as hastes.

Entretanto, a solução recursiva é mais elegante e representa diretamente a definição matemática do problema.
