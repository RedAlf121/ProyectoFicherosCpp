#include "identitycard.h"
#include <cstring>
#include <stdexcept>
void IdentityCard::setIdentityCardNumber(char identityCardNumber[11]) {
    std::memcpy(this->identityCardNumber, identityCardNumber, 11);
}

void IdentityCard::HashIdentityCard(char identityCardNumber[11]) {
    if (identityCardNumber[0] == '\0') {
               // Manejar el caso en que el número de identificación no ha sido establecido
               throw std::logic_error("El número de identificación no ha sido establecido.");
           }

           // Calcular el hash sumando los valores ASCII de los caracteres
           unsigned int hash = 0;
           for (int i = 0; i < 11; ++i) {
               hash += static_cast<unsigned int>(identityCardNumber[i]);
           }

       }

char* IdentityCard::getIdentityCardNumber() {
    return this->identityCardNumber;
}


