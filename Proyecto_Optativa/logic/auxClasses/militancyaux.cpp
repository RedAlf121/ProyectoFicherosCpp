#include "militancyaux.h"

MilitancyAux::MilitancyAux(std::vector<Student> equalIncorporationYears, std::vector<Student> disntinctIncorporationYears) {

    this->equalIncorporationYears = equalIncorporationYears;
    this->disntinctIncorporationYears = disntinctIncorporationYears;
}

int MilitancyAux::amountEqualYears() {
    return this->equalIncorporationYears.size();
}

int MilitancyAux::amountDistinctYears() {
    return this->disntinctIncorporationYears.size();
}

std::vector<Student> MilitancyAux::getEqualIncorporationYears() {
    return this->equalIncorporationYears;
}

std::vector<Student> MilitancyAux::getDistinctIncorporationYears() {
    return this->disntinctIncorporationYears;
}
