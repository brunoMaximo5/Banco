#include "ContaPoupanca.h"
#include <iostream>

ContaPoupanca::ContaPoupanca(const std::string& titular, double saldoInicial)
    : Conta(titular, saldoInicial) {}

void ContaPoupanca::sacar(double valor) {
    saldo -= valor;
    std::cout << "Saque de R$" << valor << " realizado da Conta Poupança de " << titular << std::endl;
}
