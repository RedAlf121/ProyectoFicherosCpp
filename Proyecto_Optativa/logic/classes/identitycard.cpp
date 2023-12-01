#include "identitycard.h"
#include <cstring>

void IdentityCard::setIdentityCardNumber(char identityCardNumber[11]) {
    std::memcpy(this->identityCardNumber, identityCardNumber, 11);
}

void IdentityCard::HashIdentityCard(char identityCardNumber[11]) {
    setIdentityCardNumber(identityCardNumber);
    // ...
    // ...
    // ...
}

char* IdentityCard::getIdentityCardNumber() {
    return this->identityCardNumber;
}


