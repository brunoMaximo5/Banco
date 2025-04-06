# 💻 Sistema Bancário com Programação Orientada a Aspectos (POA) em C++

Este projeto simula um sistema bancário básico utilizando o paradigma de **Programação Orientada a Aspectos (POA)** com a linguagem C++. O foco principal é aplicar o conceito de **funções transversais** separando a verificação de saldo da lógica principal de saque.

---

## 🎯 Objetivo

Demonstrar como a POA pode ser aplicada em C++ de maneira modular, mesmo sem suporte nativo ao paradigma. Neste projeto, a **verificação de saldo antes de saques** foi isolada em um módulo separado, que atua como um *aspecto*, interceptando e validando a operação antes que ela seja realizada.

---

## 🧠 Conceitos Aplicados

- **Programação Orientada a Objetos (POO):** Utilização de herança, encapsulamento e polimorfismo para modelar contas bancárias (corrente e poupança).
- **Programação Orientada a Aspectos (POA):** Implementação de uma verificação de saldo separada, representando uma *função transversal* típica de POA.
- **Separação de responsabilidades:** Cada classe tem uma função clara, promovendo coesão e facilidade de manutenção.

---

## 🧩 Estrutura do Projeto

- `Conta.h / Conta.cpp`: Classe abstrata base para contas.
- `ContaCorrente` e `ContaPoupanca`: Classes derivadas especializadas.
- `VerificadorSaldo`: Módulo que simula o aspecto, verificando se o saldo é suficiente antes do saque.
- `main.cpp`: Função principal que instancia e testa as contas.

---

## 🚀 Como executar

### ✅ Requisitos

- Compilador C++ (como o `g++`)

### 🔧 Compilação

```bash
g++ -o banco main.cpp Conta.cpp ContaCorrente.cpp ContaPoupanca.cpp VerificadorSaldo.cpp
