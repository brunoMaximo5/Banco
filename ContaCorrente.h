#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include "Conta.h"

class ContaCorrente : public Conta {
public:
    ContaCorrente(const std::string& titular, double saldoInicial);
    void sacar(double valor) override;
};

#endif
