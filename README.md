# Selection Sort

Trabalho desenvolvido para a disciplina de **Estratégias de Programação**, **Professor:** Clayton Kossoski do curso de **Análise e Desenvolvimento de Sistemas (ADS)** da UTFPR – Campus Cornélio Procópio.

## Sobre o trabalho

Este projeto apresenta o funcionamento do **Selection Sort**, um algoritmo de ordenação baseado na seleção do menor elemento da parte ainda não ordenada.

A atividade tem como objetivo compreender a lógica do algoritmo, sua implementação em **C++**, sua complexidade e suas principais características.

## Integrantes

* Ana Beatriz Barreto Teixeira
* Felipe Yamadaw
* João Vitor do Prado
* Lívia Pontes
* Raissa Albuquerque

## Como funciona

O Selection Sort divide o vetor em duas partes:

* **Parte ordenada:** elementos que já estão em suas posições corretas.
* **Parte não ordenada:** elementos que ainda precisam ser organizados.

A cada etapa, o algoritmo:

1. Procura o menor elemento da parte não ordenada.
2. Seleciona esse elemento.
3. Troca sua posição com o primeiro elemento da parte não ordenada.
4. Repete o processo até que todo o vetor esteja ordenado.

### Exemplo

Vetor inicial:

```text
[64, 25, 12, 22, 11]
```

Após as etapas de ordenação:

```text
[11, 25, 12, 22, 64]
[11, 12, 25, 22, 64]
[11, 12, 22, 25, 64]
[11, 12, 22, 25, 64]
```

Resultado final:

```text
[11, 12, 22, 25, 64]
```

## Implementação

O algoritmo foi desenvolvido utilizando a linguagem **C++**.

A implementação utiliza variáveis para controlar:

* `i` → posição que será preenchida;
* `j` → percorre os elementos da parte ainda não ordenada;
* `menor` → armazena a posição do menor elemento encontrado.

## Complexidade

### Complexidade de tempo

* **Melhor caso:** `O(n²)`
* **Caso médio:** `O(n²)`
* **Pior caso:** `O(n²)`

O Selection Sort continua realizando as comparações mesmo quando os elementos já estão ordenados.

### Complexidade de espaço

* **O(1)**

O algoritmo utiliza apenas algumas variáveis auxiliares e não precisa criar outro vetor para realizar a ordenação.

## Vantagens

* Fácil de entender e implementar.
* Utiliza pouca memória.
* Realiza poucas trocas em comparação com alguns algoritmos simples de ordenação.
* É útil para compreender conceitos básicos de algoritmos de ordenação.

## Desvantagens

* Possui complexidade `O(n²)`.
* Não é indicado para grandes quantidades de dados.
* Existem algoritmos de ordenação mais eficientes para conjuntos maiores.

## Como executar

### Pré-requisito

É necessário possuir um compilador C++ instalado.

### Compilação

No terminal, dentro da pasta do projeto, execute:

```bash
g++ selection_sort.cpp -o selection_sort
```

### Execução

No Windows:

```bash
selection_sort.exe
```

No Linux/macOS:

```bash
./selection_sort
```

## Apresentação

A apresentação utilizada no seminário está disponível neste repositório.

Durante a apresentação são abordados:

* O que é um algoritmo de ordenação;
* Funcionamento do Selection Sort;
* Exemplo prático;
* Comparações e trocas;
* Implementação em C++;
* Complexidade e desempenho;
* Vantagens e desvantagens;
* Demonstração visual do algoritmo.
  
## Link dos slides no canva:
https://canva.link/9eu5ogdy2d6x6tg
