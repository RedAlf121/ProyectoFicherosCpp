#ifndef SCHOOL_H
#define SCHOOL_H

#include <vector>
#include <string>
#include "student.h"
#include "logic\auxClasses\militancyaux.h"
#include "logic\auxClasses\donationyearaux.h"

class School {
private:

    static School* instance;
    std::vector<Student> students;
    School();
    static School* getInstance();

public:

    bool createStudent(std::string, std::string, char[], char[], unsigned short, unsigned short);
    bool storeStudent(Student& student);
    Student& deleteSunset(std::string);
    Student& findSunset(std::string);
    MilitancyAux updateMilitancy(std::string[], unsigned short);
    DonationYearAux updateDonationYear(std::string[], unsigned short);
};

#endif // SCHOOL_H
