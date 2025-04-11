#include "functions.h"
#include <cstdlib>
#include <ctime>


int main(){
    //Inicializo la "semilla" con la hora actual -> permite que se generen diferentes numeros a partir de una semilla (que cambia a cada segundo)
    srand(time(0));

    //RANDOM -> Cantidad de Personajes
    //Tipo Mago
    int cantidad_magos = generar_numero(3, 7);
    cout << "La cantidad de Magos a crear es -> " << cantidad_magos << endl;
    //Tipo Guerrero
    int cantidad_guerreros = generar_numero(3, 7);
    cout << "La cantidad de Guerreros a crear es -> " << cantidad_guerreros << endl;

    //Genero los personajes
    vector<shared_ptr<Personaje>> magos;
    vector<shared_ptr<Personaje>> guerreros;

    cout << "Creando..." << endl;
    cout << "------- ARMAS PERSONAJES -------" << endl;
    //Guerreros
    generadorPersonajes(cantidad_guerreros, true, guerreros);
    mostrarArmasPersonajes(guerreros);

    //Magos
    generadorPersonajes(cantidad_magos, false, magos);
    mostrarArmasPersonajes(magos);

}

