#include <iostream>
#include "ContaCorrente.h"
#include "ContaPoupanca.h"
#include "VerificadorSaldo.h"

int main() {
    Conta* c1 = new ContaCorrente("Bruno", 100.0);
    Conta* c2 = new ContaPoupanca("Bruno", 50.0);

    if (VerificadorSaldo::verificar(c1, 30.0)) c1->sacar(30.0);
    if (VerificadorSaldo::verificar(c2, 100.0)) c2->sacar(100.0);

    delete c1;
    delete c2;
    return 0;
}
