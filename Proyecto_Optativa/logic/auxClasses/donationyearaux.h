#ifndef DONATIONYEARAUX_H
#define DONATIONYEARAUX_H

class DonationYearAux {

private:
    int amountPreviousDonationYear;
    int amountNextDonationYear;

public:

    DonationYearAux(int amountPreviousDonationYear, int amountNextDonationYear);
    int getAmountPreviousDonationYear();
    int getAmountNextDonationYear();
};

#endif // DONATIONYEARAUX_H
