#ifndef CONTA_H
#define CONTA_H

#include <string>

class Conta {
protected:
    std::string titular;
    double saldo;

public:
    Conta(const std::string& titular, double saldoInicial);
    virtual ~Conta() {}
    
    virtual void sacar(double valor) = 0;

    double getSaldo() const;
    std::string getTitular() const;
};

#endif
