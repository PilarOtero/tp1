#include "functions.h"

int main(){
    //RANDOM -> Cantidad de Personajes:
    //Tipo Mago
    int cantidad_magos = generar_numero(3, 7);
    //Tipo Guerrero
    int cantidad_guerreros = generar_numero(3, 7);

    //RANDOM -> Cantidad de Armas:
    //Para Mago
    int cantidad_armas_mago = generar_numero(0, 2);
    //Para Guerrero
    int cantidad_armas_guerrero = generar_numero(0, 2);
}