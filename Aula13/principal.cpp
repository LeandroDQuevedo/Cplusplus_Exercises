/**
 * Código exemplo para uso das estruturas:
 * StaticList, StaticQueue e StaticStack
 */

#include <iostream>
#include "staticList.h"
#include "staticQueue.h"
#include "staticStack.h"

using namespace std;

int main() {
    StaticList<int> sl(5);  // Cria uma lista estática de tipo int com 5 posições
    StaticQueue<int> sq(5); // Cria uma fila estátia de tipo int com 5 posições
    StaticStack<int> ss(5); // Cria uma pilha estática de tipo int com 5 posições

    /**
     * Tenta inserir o elemento 5 na posição 0 (zero) da lista.
     * Verifica se o elemento foi inserido por meio do código de retorno 
     * da função.
     */
    if(sl.insert(1, 0) == 0)
        cout << "Elemento inserido com sucesso na lista!" << endl;
    cout << "\n";
    if(sl.insert(2, 1) == 0)
        cout << "Elemento inserido com sucesso na lista!" << endl;
    cout << "\n";
    if(sl.insert(3, 2) == 0)
        cout << "Elemento inserido com sucesso na lista!" << endl;
    cout << "\n";
    if(sl.insert(4, 3) == 0)
        cout << "Elemento inserido com sucesso na lista!" << endl;
    cout << "\n";
    if(sl.insert(5, 4) == 0)
        cout << "Elemento inserido com sucesso na lista!" << endl;
    cout << "\n";

    for (int i = 0; i < sl.numElements(); i++)
    {
        int result = 0;
        if (sl.get(i,result) == 0)
        {
            cout << result;
        }
    }

    sl.flip();
    cout << endl;
    for (int i = 0; i < sl.numElements(); i++)
    {
        int result = 0;
        if (sl.get(i,result) == 0)
        {
            cout << result;
        }
    }
    int result = 0;
    sl.remove(4, result);
    if (sl.enqueueWithPriority(6) == 0)
    {
        cout << endl << "Sucesso" << endl;
    }
    else
        cout << endl << "Lista cheia" << endl;
    
    cout << endl;
    for (int i = 0; i < sl.numElements(); i++)
    {
        int result = 0;
        if (sl.get(i,result) == 0)
        {
            cout << result;
        }
    }

    return 0;
}
