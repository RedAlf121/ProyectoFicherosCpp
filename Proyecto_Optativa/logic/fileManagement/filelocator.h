#ifndef FILELOCATOR_H
#define FILELOCATOR_H

#include "indexalgorithm.h"
#include "blockalgorithm.h"
#include "overflowalgorithm.h"
#include <vector>
#include <string>

class FileLocator {
public:
    FileLocator();

    int buscar(int key, int row);

private:
    std::vector<FileAlgorithm*> algorithms;
    std::vector<std::vector<std::string>> files;
};

#endif // FILELOCATOR_H
