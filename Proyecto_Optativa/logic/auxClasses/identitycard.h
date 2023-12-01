#ifndef IDENTITYCARD_H
#define IDENTITYCARD_H

class IdentityCard {
private:

    char identityCardNumber[11];

    void setIdentityCardNumber(char identityCardNumber[11]);

public:

    void HashIdentityCard(char identityCardNumber[11]);
    char* getIdentityCardNumber();
};

#endif // IDENTITYCARD_H

