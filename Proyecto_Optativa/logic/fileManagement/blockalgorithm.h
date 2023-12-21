#ifndef BLOCKALGORITHM_H
#define BLOCKALGORITHM_H
#include "filealgorithm.h"
#include<string>

using namespace std;

class BlockAlgorithm : FileAlgorithm
{
public:
    BlockAlgorithm();
    bool buscar(int key, string filename, int& index) override;
};

#endif // BLOCKALGORITHM_H
