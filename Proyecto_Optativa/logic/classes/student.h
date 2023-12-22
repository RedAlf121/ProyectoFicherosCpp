#ifndef STUDENT_H
#define STUDENT_H


// Archivo Student.h

class Student {

private:

    char firstName[25];
    char familyName[25];
    char identityCardNumber[11];
    char group[2];
    unsigned short firstBloodDonationYear;
    unsigned short incorporationYear;

public:

    Student(char firstName[25], char familyName[25], char identityCardNumber[11], char group[2], unsigned short firstBloodDonationYear, unsigned short incorporationYear);


    void setFirstName(char firstName[25]);
    char* getFirstName();

    void setFamilyName(char familyName[25]);
    char* getFamilyName();

    void setIdentityCardNumber(char identityCardNumber[11]);
    char* getIdentityCardNumber();

    void setGroup(char group[2]);
    char* getGroup();

    void setFirstBloodDonationYear(unsigned short firstBloodDonationYear);
    unsigned short getFirstBloodDonationYear();

    void setIncorporationYear(unsigned short incorporationYear);
    unsigned short getIncorporationYear();

};


#endif // STUDENT_H
