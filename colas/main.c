#include <stdio.h>
#include "cola.h"


int main(){
    int i;
    Cola colita;
    inicializarCola(&colita);

    for(i=1; i<=TAM; i++){
        agregar(&colita,i);
    }
    mostrarCola(colita);

    return 0;

}