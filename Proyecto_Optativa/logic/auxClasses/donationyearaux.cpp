#include "donationyearaux.h"

DonationYearAux::DonationYearAux(std::vector<Student> amountPreviousDonationYear, std::vector<Student> amountNextDonationYear) {
    this->amountPreviousDonationYear = amountPreviousDonationYear;
    this->amountNextDonationYear = amountNextDonationYear;
}

std::vector<Student> DonationYearAux::getAmountPreviousDonationYear() {
    return this->amountPreviousDonationYear;
}

std::vector<Student> DonationYearAux::getAmountNextDonationYear() {
    return this->amountNextDonationYear;
}

