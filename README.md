<h1 align="center">📘 Estudos em Linguagem C</h1>

<p align="center">
  Repositório com atividades práticas de lógica de programação e algoritmos utilizando a linguagem C<br>
  Foco em fundamentos essenciais para desenvolvimento de software e raciocínio computacional
</p>

---

### 🎯 Objetivo

Este repositório reúne exercícios simples, porém importantes, que estou resolvendo como parte da minha jornada de aprendizado em **linguagem C e algoritmos**.

---

### 🧠 Atividades Desenvolvidas

#### ✅ Atividade 1 – Vetores e Comparação de Posições
> Criar dois vetores, armazenar valores e comparar as posições diferentes entre eles.

#### ✅ Atividade 2 – Ordenação de Vetor
> Ler um vetor e apresentar os elementos em ordem **decrescente**.

#### ✅ Atividade 3 – Potência e Raiz Quadrada
> Ler um número inteiro e mostrar:
- O quadrado (x²)
- A raiz quadrada

#### ✅ Atividade 4 – Média Aritmética
> Ler **4 números inteiros** e mostrar a média aritmética entre eles.

#### ✅ Atividade 5 – Análise de String
> Criar uma string e:
- Contar a quantidade de caracteres
- Se a quantidade for **ímpar**, imprimir todas as vogais da string

#### ✅ Atividade MAPA – ALgoritimos e Logica de Programação C
Este programa deve ser capaz de cadastrar as informações de aplicação de vacina, que em resumo são:
    - Código (você fará o controle, não será digitado pelo usuário)
    - Nome
    - CPF
    - Vacina
    - Data (pode ser tratada como String)
    - Numero Lote

Logo após o cadastro o programa deverá disponibilizar outros dois recursos, um deles é um relatório geral de aplicação, que trará todas as informações das aplicações em tela no seguinte modelo:
    Código: 0
    Nome: Rogerio Napoleao Júnior
    CPF: 111.111.111-11
    Vacina: Pfizer
    Data: 01/05/2022
    Numero do Lote: 123123123
    ==================================
    Código: 1
    Nome: Joao da Silva
    CPF: 111.111.111-11
    Vacina: Coronavac
    Data: 10/05/2022
    Numero do Lote: 333222333
    ==================================

O outro recurso necessário é busca por CPF, ao usuário digitar o CPF o programa deve fazer uma buscar e mostrar em tela apenas o CPF consultado, caso não exista uma informação “CPF não encontrado” deve ser mostrado na tela.

Para controlar este programa deverá ter um menu de opções como abaixo:
    1 - Cadastrar Vacina
    2 - Listar Aplicações
    3 - Consultar por CPF
    4 - Sair
Utilize os mais variados recursos aprendidos na disciplina. Seja criativo, não se prenda a uma unica forma de resolver este problema.
---

### ⚙️ Tecnologias e Ambiente

- Linguagem: C
- Editor: VS Code ou DevC++
- Compilador: GCC (MinGW ou Linux nativo)

---

### 📁 Estrutura do Projeto

```bash
estudosC/
├── atividadeMapa.c
├── atividade1_vetores.c
├── atividade2_ordem_decrescente.c
├── atividade3_potencia_raiz.c
├── atividade4_media.c
├── atividade5_string_vogais.c
└── README.md
