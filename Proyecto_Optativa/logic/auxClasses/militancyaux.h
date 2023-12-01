#ifndef MILITANCYAUX_H
#define MILITANCYAUX_H

#include <vector>

class MilitancyAux {

private:

    std::vector<unsigned short> equalIncorporationYears;
    std::vector<unsigned short> disntinctIncorporationYears;

public:

    MilitancyAux(std::vector<unsigned short> equalIncorporationYears, std::vector<unsigned short> disntinctIncorporationYears);
    int amountEqualYears();
    int amountDistinctYears();
    std::vector<unsigned short> getEqualIncorporationYears();
    std::vector<unsigned short> getDistinctIncorporationYears();
};

#endif // MILITANCYAUX_H
