#ifndef OVERFLOWALGORITHM_H
#define OVERFLOWALGORITHM_H

#include "filealgorithm.h"
#include<string>

using namespace std;

class overflowAlgorithm : public FileAlgorithm
{
public:
    overflowAlgorithm(): FileAlgorithm(){}
    bool buscar(int key, string filename, int& index) override;
};

#endif // OVERFLOWALGORITHM_H
