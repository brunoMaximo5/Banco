#ifndef VERIFICADORSALDO_H
#define VERIFICADORSALDO_H

#include "Conta.h"

class VerificadorSaldo {
public:
    static bool verificar(Conta* conta, double valor);
};

#endif
