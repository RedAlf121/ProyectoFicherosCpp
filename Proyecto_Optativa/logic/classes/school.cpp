#include "school.h"

School* School::instance = 0;

School::School() {}

School* School::getInstance() {
    if (instance == 0) {
        instance = new School();
    }
    return instance;
}

bool School::createStudent(std::string, std::string, char[], char[], unsigned short, unsigned short) {
    // Implementación
    return true;
}

bool School::storeStudent(Student& student) {
    // Implementación
    return true;
}

Student& School::deleteSunset(std::string) {
    // Implementación
}

Student& School::findSunset(std::string) {
    // Implementación
}

MilitancyAux School::updateMilitancy(std::string[], unsigned short) {
    // Implementación
}

DonationYearAux School::updateDonationYear(std::string[], unsigned short) {
    // Implementación
}


