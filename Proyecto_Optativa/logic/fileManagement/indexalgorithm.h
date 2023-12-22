#ifndef INDEXALGORITHM_H
#define INDEXALGORITHM_H
#include "filealgorithm.h"
#include<string>

using namespace std;
class IndexAlgorithm: public FileAlgorithm
{
public:
    IndexAlgorithm(): FileAlgorithm(){}
    bool buscar(int key, string filename, int& index) override; // Método sobrescrito
};

#endif // INDEXALGORITHM_H
