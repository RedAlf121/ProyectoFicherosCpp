#include "blockalgorithm.h"

blockAlgorithm::blockAlgorithm()
{
    public:
           // Método buscar que busca en el fichero de bloques
           bool buscar(int key, string filename, int& index) {
               // Abrir el fichero de bloques
               FILE* file = fopen(filename.c_str(), "rb");
               if (file == NULL) {
                   cout << "No se pudo abrir el fichero de bloques" << endl;
                   return false;
               }
               // Leer la capacidad de entradas por bloque
               int blockCapacity;
               fread(&blockCapacity, sizeof(int), 1, file);
               // Buscar el bloque que tenga el número igual al índice que se recibe como parámetro
               fseek(file, index * (sizeof(int) + sizeof(int) + blockCapacity * (sizeof(int) + sizeof(int))), SEEK_SET);
               // Leer el número de registro del primer desborde, la cantidad de entradas y las entradas del bloque
               int overrunRecordNumber, entriesAmount;
               fread(&overrunRecordNumber, sizeof(int), 1, file);
               fread(&entriesAmount, sizeof(int), 1, file);
               // Inicializar un contador de registros visitados
               int visitedRecords = 0;
               // Mientras no se supere el límite de registros por bloque
               while (visitedRecords < blockCapacity) {
                   // Leer la llave del registro y el número del registro en el fichero principal
                   int recordKey, recordNumber;
                   fread(&recordKey, sizeof(int), 1, file);
                   fread(&recordNumber, sizeof(int), 1, file);
                   // Si se encuentra la llave, devolver el número del registro como índice
                   if (recordKey == key) {
                       index = recordNumber;
                       fclose(file);
                       return true;
                   }
                   // Incrementar el contador de registros visitados
                   visitedRecords++;
               }
               // Si se supera el límite de registros por bloque, devolver el número de registro del primer desborde como índice
               index = overrunRecordNumber;
               fclose(file);
               return false;
           }
}
