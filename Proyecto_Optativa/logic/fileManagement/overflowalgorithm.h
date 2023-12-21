#ifndef OVERFLOWALGORITHM_H
#define OVERFLOWALGORITHM_H

#include "filealgorithm.h"
#include<string>

using namespace std;

class overflowAlgorithm : FileAlgorithm
{
public:
    overflowAlgorithm();
    bool buscar(int key, string filename, int& index) override;
};

#endif // OVERFLOWALGORITHM_H
