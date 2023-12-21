#include "indexalgorithm.h"

 IndexAlgorithm::IndexAlgorithm()
{
    public:
          // Método buscar que busca en el fichero de índices
          bool buscar(int key, string filename, int& index) {
              // Abrir el fichero de índices
              FILE* file = fopen(filename.c_str(), "rb");
              if (file == NULL) {
                  cout << "No se pudo abrir el fichero de índices" << endl;
                  return false;
              }
              // Leer la cantidad de entradas del índice
              int entriesAmount;
              fread(&entriesAmount, sizeof(int), 1, file);
              // Buscar la entrada que tenga el valor de la llave de indización igual a key
              for (int i = 0; i < entriesAmount; i++) {
                  // Leer el valor de la llave de indización y el número del bloque
                  int indexKey, blockNumber;
                  fread(&indexKey, sizeof(int), 1, file);
                  fread(&blockNumber, sizeof(int), 1, file);
                  // Si se encuentra el valor de la llave, devolver el número del bloque como índice
                  if (indexKey == key) {
                      index = blockNumber;
                      fclose(file);
                      return true;
                  }
              }
              // Si no se encuentra el valor de la llave, devolver -1 como índice
              index = -1;
              fclose(file);
              return false;
          }

}
