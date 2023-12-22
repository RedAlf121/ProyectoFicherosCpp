#ifndef MILITANCYAUX_H
#define MILITANCYAUX_H

#include "logic/classes/student.h"
#include <vector>

class MilitancyAux {

private:

    std::vector<Student> equalIncorporationYears;
    std::vector<Student> disntinctIncorporationYears;

public:
    MilitancyAux(){}
    MilitancyAux(std::vector<Student> equalIncorporationYears, std::vector<Student> disntinctIncorporationYears);
    int amountEqualYears();
    int amountDistinctYears();
    std::vector<Student> getEqualIncorporationYears();
    std::vector<Student> getDistinctIncorporationYears();
};

#endif // MILITANCYAUX_H
