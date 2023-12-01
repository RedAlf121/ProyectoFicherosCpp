#include "militancyaux.h"

MilitancyAux::MilitancyAux(std::vector<unsigned short> equalIncorporationYears, std::vector<unsigned short> disntinctIncorporationYears) {

    this->equalIncorporationYears = equalIncorporationYears;
    this->disntinctIncorporationYears = disntinctIncorporationYears;
}

int MilitancyAux::amountEqualYears() {
    return this->equalIncorporationYears.size();
}

int MilitancyAux::amountDistinctYears() {
    return this->disntinctIncorporationYears.size();
}

std::vector<unsigned short> MilitancyAux::getEqualIncorporationYears() {
    return this->equalIncorporationYears;
}

std::vector<unsigned short> MilitancyAux::getDistinctIncorporationYears() {
    return this->disntinctIncorporationYears;
}
