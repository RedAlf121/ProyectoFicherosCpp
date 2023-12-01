#include "student.h"
#include <cstring>


Student::Student(char firstName[25], char familyName[25], char identityCardNumber[11], char group[2], unsigned short firstBloodDonationYear, unsigned short incorporationYear) {

    strncpy(this->firstName, firstName, sizeof(this->firstName));
    strncpy(this->familyName, familyName, sizeof(this->familyName));
    strncpy(this->identityCardNumber, identityCardNumber, sizeof(this->identityCardNumber));
    strncpy(this->group, group, sizeof(this->group));
    this->firstBloodDonationYear = firstBloodDonationYear;
    this->incorporationYear = incorporationYear;
}


char* Student::getFirstName() {
    return firstName;
}

void Student::setFirstName(char firstName[25]) {
    strncpy(this->firstName, firstName, sizeof(this->firstName));
}

char* Student::getFamilyName() {
    return familyName;
}

void Student::setFamilyName(char familyName[25]) {
    strncpy(this->familyName, familyName, sizeof(this->familyName));
}

char* Student::getIdentityCardNumber() {
    return identityCardNumber;
}

void Student::setIdentityCardNumber(char identityCardNumber[11]) {
    strncpy(this->identityCardNumber, identityCardNumber, sizeof(this->identityCardNumber));
}

char* Student::getGroup() {
    return group;
}

void Student::setGroup(char group[2]) {
    strncpy(this->group, group, sizeof(this->group));
}

unsigned short Student::getFirstBloodDonationYear() {
    return firstBloodDonationYear;
}

void Student::setFirstBloodDonationYear(unsigned short firstBloodDonationYear) {
    this->firstBloodDonationYear = firstBloodDonationYear;
}

unsigned short Student::getIncorporationYear() {
    return incorporationYear;
}

void Student::setIncorporationYear(unsigned short incorporationYear) {
    this->incorporationYear = incorporationYear;
}

unsigned int Student::hash() {
    // Implementación
}


