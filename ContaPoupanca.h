#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H

#include "Conta.h"

class ContaPoupanca : public Conta {
public:
    ContaPoupanca(const std::string& titular, double saldoInicial);
    void sacar(double valor) override;
};

#endif
