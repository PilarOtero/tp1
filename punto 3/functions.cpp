#include "functions.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int generar_numero(int min, int max){
    //Inicializo la "semilla" con la hora actual -> permite que se generen diferentes numeros a partir de una semilla (que cambia a cada segundo)
    srand(time(0));

    //Genero un numero aleatorio entre min y max -> int numero = min + rand() % (max - min + 1)
    int numero = min + rand() % (max - min + 1);
    
    cout << "El numero generado es: " << numero << endl;
    return numero;
}



