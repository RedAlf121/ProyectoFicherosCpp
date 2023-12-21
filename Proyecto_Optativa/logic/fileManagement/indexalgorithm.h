#ifndef INDEXALGORITHM_H
#define INDEXALGORITHM_H
#include "filealgorithm.h"
#include<string>

using namespace std;
class IndexAlgorithm: FileAlgorithm
{
public:
    IndexAlgorithm();
    bool buscar(int key, string filename, int& index) override; // Método sobrescrito
};

#endif // INDEXALGORITHM_H
