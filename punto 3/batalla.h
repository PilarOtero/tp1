#pragma once

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "../punto 2/personajeFactory.h"
#include "../punto 2/functions.h"

enum class Ataque {
    golpefuerte = 1,
    golperapido,
    defensaygolpe,
};

bool generarEsGuerrero();

void displayPersonajes();
int elegirPersonaje();

void displayArmas();
unique_ptr<Util> elegirArma();


void displayAtaque();
string toStringAtaque(Ataque ataque);
Ataque elegirAtaque();

//RIVAL
Ataque ataqueRival();
unique_ptr<Util> armarival(bool esGuerrero);
shared_ptr<Personaje> personajeRival(unique_ptr<Util> armaj2, bool esGuerrero);

//SIMULACIÓN
void simularBatalla(shared_ptr<Personaje> jugador1, unique_ptr<Util> armaj1, shared_ptr<Personaje> jugador2, unique_ptr<Util> armaj2);


