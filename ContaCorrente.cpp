#include "ContaCorrente.h"
#include <iostream>

ContaCorrente::ContaCorrente(const std::string& titular, double saldoInicial)
    : Conta(titular, saldoInicial) {}

void ContaCorrente::sacar(double valor) {
    saldo -= valor;
    std::cout << "Saque de R$" << valor << " realizado da Conta Corrente de " << titular << std::endl;
}
