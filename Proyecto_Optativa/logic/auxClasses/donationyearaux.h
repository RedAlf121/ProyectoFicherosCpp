#ifndef DONATIONYEARAUX_H
#define DONATIONYEARAUX_H
#include "logic/classes/student.h"
#include <vector>

class DonationYearAux {

private:
    std::vector<Student> amountPreviousDonationYear;
    std::vector<Student> amountNextDonationYear;

public:
    DonationYearAux(){}
    DonationYearAux(std::vector<Student> amountPreviousDonationYear, std::vector<Student> amountNextDonationYear);
    std::vector<Student> getAmountPreviousDonationYear();
    std::vector<Student> getAmountNextDonationYear();
};

#endif // DONATIONYEARAUX_H
