#ifndef BLOCKALGORITHM_H
#define BLOCKALGORITHM_H
#include "filealgorithm.h"
#include<string>

using namespace std;

class BlockAlgorithm : public FileAlgorithm
{
public:
    BlockAlgorithm(): FileAlgorithm(){}
    bool buscar(int key, string filename, int& index) override;
};

#endif // BLOCKALGORITHM_H
