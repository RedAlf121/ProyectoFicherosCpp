#include "filelocator.h"
#include "indexalgorithm.h"
#include "blockalgorithm.h"
#include "overflowalgorithm.h"

FileLocator::FileLocator()
{
    // Instanciar los algoritmos en el orden especificado
    algorithms.push_back(new IndexAlgorithm());
    algorithms.push_back(new BlockAlgorithm());
    algorithms.push_back(new overflowAlgorithm());

    // Crear la lista de listas de nombres de archivos
    files.push_back({"Donante_indices.idx", "Donante_bloqes.blk", "Donante_desborde.ovr"});
    files.push_back({"Militante_indices.idx", "Militante_bloqes.blk", "Militante_desborde.ovr"});
}
int FileLocator::buscar(int key, int row)
{
    int index = -1;
    bool found = false;
    // Recorrer cada algoritmo
    for (int i = 0; i < algorithms.size() && !found; i++) {
        // Usar el mismo algoritmo para el mismo archivo en la fila especificada
        if (algorithms[i]->buscar(key, files[row][i], index)) {
            // Si se encontró la clave, terminar la búsqueda
            found = true;
        }
    }
    // Retornar el índice encontrado, o -1 si no se encontró la clave
    return index;
}
