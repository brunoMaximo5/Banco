#include "VerificadorSaldo.h"
#include <iostream>
#include <typeinfo>

bool VerificadorSaldo::verificar(Conta* conta, double valor) {
    if (conta->getSaldo() < valor) {
        std::cout << "ERRO: Saldo insuficiente para " << conta->getTitular()
                  << " na conta " << typeid(*conta).name() << std::endl;
        return false;
    }
    return true;
}
