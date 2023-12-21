#include "overflowalgorithm.h"

overflowAlgorithm::overflowAlgorithm()
{
    public:
           // Método buscar que busca en el fichero de desbordes
           bool buscar(int key, string filename, int& index) {
               // Abrir el fichero de desbordes
               FILE* file = fopen(filename.c_str(), "rb");
               if (file == NULL) {
                   cout << "No se pudo abrir el fichero de desbordes" << endl;
                   return false;
               }
               // Leer la cantidad de entradas y el número del primer registro libre
               int entriesAmount, firstFreeRecord;
               fread(&entriesAmount, sizeof(int), 1, file);
               fread(&firstFreeRecord, sizeof(int), 1, file);
               // Buscar la entrada que tenga el número igual al índice que se recibe como parámetro
               fseek(file, index * (sizeof(int) + sizeof(int) + sizeof(int)), SEEK_SET);
               // Leer la llave del registro, el número del próximo registro de desborde y el número del registro en el fichero principal
               int key, nextRecord, recordNumber;
               fread(&key, sizeof(int), 1, file);
               fread(&nextRecord, sizeof(int), 1, file);
               fread(&recordNumber, sizeof(int), 1, file);
               // Si se encuentra la llave, devolver el número del registro como índice
               if (key == key) {
                   index = recordNumber;
                   fclose(file);
                   return true;
               }
               // Si no se encuentra la llave, devolver el número del próximo registro de desborde como índice
               index = nextRecord;
               fclose(file);
               return false;
           }
   }

