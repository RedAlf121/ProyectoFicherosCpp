#include "logic/classes/student.h"
#include "logic/classes/school.h"
#include <cstdlib> // para rand y srand
#include <ctime>   // para time
#include <string>  // para std::string y std::to_string
#include <vector>  // para std::vector
#include <string.h>
#include "AuxiliarData.h"

std::string generar_nombre() {
    std::string nombres[] = {"Juan", "Miguel", "Carlos", "Pedro", "Jose"};
    return nombres[rand() % 5];
}

std::string generar_apellidos() {
    std::string apellidos[] = {"Perez", "Gonzalez", "Rodriguez", "Martinez", "Garcia"};
    return apellidos[rand() % 5];
}

std::string generar_carnet_identidad() {
    return std::to_string(rand() % 100000000);
}

std::string generar_grupo() {
    return "Grupo " + std::to_string(rand() % 10 + 1);
}

void data() {
    srand(time(0));
    School& school = *School::getInstance();

    // Aquí puedes llenar el array con los datos de los estudiantes
    for(int i = 0; i < 30; i++) {
        std::string nombre = generar_nombre();
        std::string apellidos = generar_apellidos();
        std::string carnet_identidad = generar_carnet_identidad();
        std::string grupo = generar_grupo();
        int year1 = 2020 + rand() % 4;
        int year2 = 2020 + rand() % 4;

        char nombre_char[25];
        strncpy(nombre_char, nombre.c_str(), sizeof(nombre_char));
        nombre_char[sizeof(nombre_char) - 1] = 0;

        char apellidos_char[25];
        strncpy(apellidos_char, apellidos.c_str(), sizeof(apellidos_char));
        apellidos_char[sizeof(apellidos_char) - 1] = 0;

        char carnet_identidad_char[11];
        strncpy(carnet_identidad_char, carnet_identidad.c_str(), sizeof(carnet_identidad_char));
        carnet_identidad_char[sizeof(carnet_identidad_char) - 1] = 0;

        char grupo_char[2];
        strncpy(grupo_char, grupo.c_str(), sizeof(grupo_char));
        grupo_char[sizeof(grupo_char) - 1] = 0;

        school.createStudent(nombre_char, apellidos_char, carnet_identidad_char, grupo_char, year1, year2);
    }
}
