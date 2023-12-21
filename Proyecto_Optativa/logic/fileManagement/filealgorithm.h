#ifndef FILEALGORITHM_H
#define FILEALGORITHM_H
#include<string>

using namespace std;

class FileAlgorithm
{
public:
    FileAlgorithm();
    // Método virtual buscar
    virtual bool buscar(int key, string filename, int& index)=0;
};

#endif // FILEALGORITHM_H
