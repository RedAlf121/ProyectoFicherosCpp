#include "school.h"
#include <string.h>
#include <algorithm>

School* School::instance = 0;

School::School() {}

School* School::getInstance() {
    if (instance == 0) {
        instance = new School();
    }
    return instance;
}

bool School::createStudent(char firstName[25], char lastName[25], char identityCardNumber[11], char group[2] , unsigned short firstBloodDonationYear, unsigned short incorporationYear){
    // ...
    // Crear un nuevo estudiante
    Student st(firstName, lastName,identityCardNumber,group,firstBloodDonationYear,incorporationYear);
    students.push_back(st);
    return true;
}


Student& School::deleteSunset(std::string identityCardNumber) {
    auto it = std::remove_if(students.begin(), students.end(),
                             [identityCardNumber](Student& student) {
                                 return student.getIdentityCardNumber() == identityCardNumber;
                             });

    if (it != students.end()) {
        // Guardar el estudiante eliminado
        Student& deletedStudent = *it;

        // Eliminar el estudiante del vector
        students.erase(it, students.end());

        // Devolver una referencia al estudiante eliminado
        return deletedStudent;
    } else {
        // Si no se encontró el estudiante, lanzar una excepción
        throw std::runtime_error("Estudiante no encontrado con el número de carnet especificado.");
    }
}

Student& School::findSunset(std::string identityCardNumber) {
    auto it = std::find_if(students.begin(), students.end(),
                           [identityCardNumber](Student& student) {
                               return student.getIdentityCardNumber() == identityCardNumber;
                           });

    if (it != students.end()) {
        // Devolver una referencia al estudiante encontrado
        return *it;
    } else {
        // Si no se encontró el estudiante, lanzar una excepción
        throw std::runtime_error("Estudiante no encontrado con el número de carnet especificado.");
    }
}

MilitancyAux School::updateMilitancy(std::vector<std::string> studentCarnets, unsigned short year) {
    MilitancyAux result;

    // Iterar sobre los carnets y actualizar la militancia según el año especificado
    for (const std::string& carnet : studentCarnets) {
        auto it = std::find_if(students.begin(), students.end(),
                               [carnet](Student& student) {
                                   return (student.getIdentityCardNumber() == carnet);
                               });

        if (it != students.end()) {
            // Encontrar al estudiante por su carnet

            // Actualizar el año de militancia
            if (it->getIncorporationYear() != year) {
                it->setIncorporationYear(0);

                result.getDistinctIncorporationYears().push_back(*it);
            } else {
                result.getEqualIncorporationYears().push_back(*it);
            }
        }
    }

    return result;
}

DonationYearAux School::updateDonationYear(const std::vector<std::string>& studentCarnets, unsigned short year) {
    DonationYearAux result;

    // Iterar sobre los carnets y actualizar la donación según el año especificado
    for (const std::string& carnet : studentCarnets) {
        auto it = std::find_if(students.begin(), students.end(),
                               [carnet](Student& student) {
                                   return student.getIdentityCardNumber() == carnet;
                               });

        if (it != students.end()) {
            // Encontrar al estudiante por su carnet

            // Actualizar el año de donación
            if (it->getFirstBloodDonationYear() == year) {
                it->setFirstBloodDonationYear(0);

                result.getAmountPreviousDonationYear().push_back(*it);
            } else {
                it->setFirstBloodDonationYear(year);

                result.getAmountNextDonationYear().push_back(*it);
            }
        }
    }

    return result;
}

std::vector<Student> School::getStudents(){
    return this->students;
}


