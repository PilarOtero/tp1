#pragma once

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "../punto 2/personajeFactory.h"
#include "../punto 2/functions.h"

bool generarEsGuerrero();

void displayPersonajes();
int elegirPersonaje();

void displayArmas();
shared_ptr<Util> elegirArma();


string toStringAtaque(Ataque ataque);
void displayAtaque();
Ataque elegirAtaque();

//Ataque ataqueRival;
Ataque ataqueRival();
shared_ptr<Util> armarival(bool esGuerrero);
shared_ptr<Personaje> personajeRival(shared_ptr<Util> armaj2, bool esGuerrero);

//SIMULACION
void simularBatalla();

enum class Ataque {
    golpefuerte = 1,
    golperapido,
    defensaygolpe,
};

