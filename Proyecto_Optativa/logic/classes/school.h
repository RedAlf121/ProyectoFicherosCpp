#ifndef SCHOOL_H
#define SCHOOL_H

#include "Student.h"
#include "logic\auxClasses\militancyaux.h"
#include "logic\auxClasses\donationyearaux.h"
#include <string>
class School {
private:

    static School* instance;
    std::vector<Student> students;
    School();

public:
    std::vector<Student> getStudents();
    static School* getInstance();
    bool createStudent(char firstName[25], char lastName[25], char identityCardNumber[11], char group[2] , unsigned short firstBloodDonationYear, unsigned short incorporationYear);

    Student& deleteSunset(std::string);
    Student& findSunset(std::string);
    MilitancyAux updateMilitancy(std::vector<std::string>, unsigned short);
    DonationYearAux updateDonationYear(const std::vector<std::string> &StudentCarnets, unsigned short year);
};
#endif // SCHOOL_H
