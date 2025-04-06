#include "Conta.h"

Conta::Conta(const std::string& titular, double saldoInicial)
    : titular(titular), saldo(saldoInicial) {}

double Conta::getSaldo() const {
    return saldo;
}

std::string Conta::getTitular() const {
    return titular;
}
