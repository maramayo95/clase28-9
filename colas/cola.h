#include <stdio.h>
// FIFO  -> First in First out
#ifndef QUEUE
#define TAM 10
#define QUEUE

typedef struct 
{
    int vec[TAM];
    int frente; // Necesito saber donde es el principio de la cola
    int fondo; // Necesito saber donde es el fin del a cola
    int cantidad;
}Cola;

void inicializarCola(Cola *c){
    c->cantidad = 0;
    c->frente = 0;
    c ->fondo = TAM -1;
}

int esVaciaCola(Cola c){
    return c.cantidad == 0;
}

int verFrente(Cola c){
    return c.vec[c.frente]; // Solamente retorno lo marcado por frente. No muevo el frente
}

void agregar(Cola *c, int e){
    if(c->cantidad < TAM){
        if(c->fondo == TAM -1){
            c->fondo = 0;
            
        } else 
          (c->fondo)++;
        c->vec[c->fondo] = e;   
        (c->cantidad)++;
    }
}

void remover(Cola *c){
    if(c->cantidad > 0){
        if(c->frente == TAM-1){
            c->frente = 0;
        } else{
        (c->frente)++;
        }
        (c->cantidad)--;
    }
}

void mostrarCola(Cola c){
    while(!esVaciaCola(c)){
        printf("%d\n",verFrente(c));
        remover(&c);
    }
}

#endif // !QUEUE

