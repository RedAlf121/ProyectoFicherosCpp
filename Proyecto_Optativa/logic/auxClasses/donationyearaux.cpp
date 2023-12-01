#include "donationyearaux.h"

DonationYearAux::DonationYearAux(int amountPreviousDonationYear, int amountNextDonationYear) {
    this->amountPreviousDonationYear = amountPreviousDonationYear;
    this->amountNextDonationYear = amountNextDonationYear;
}

int DonationYearAux::getAmountPreviousDonationYear() {
    return this->amountPreviousDonationYear;
}

int DonationYearAux::getAmountNextDonationYear() {
    return this->amountNextDonationYear;
}

