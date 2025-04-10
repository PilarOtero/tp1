#pragma once

#include "../itemsYarmas/amuleto.h"
#include "../itemsYarmas/baston.h"
#include "../itemsYarmas/pocion.h"
#include "../itemsYarmas/libroDeHechizos.h"
#include "../itemsYarmas/espada.h"
#include "../itemsYarmas/garrote.h"
#include "../itemsYarmas/hachaDoble.h"
#include "../itemsYarmas/hachaSimple.h"
#include "../itemsYarmas/lanza.h"

#include "brujo.h"
#include "conjurador.h"
#include "hechicero.h"
#include "nigromante.h"
#include "gladiador.h"
#include "paladin.h"
#include "caballero.h"
#include "barbaro.h"
#include "mercenario.h"

#include "utils2.h"

void test_mostrarInfo_magos(Brujo& brujo, Conjurador& conjurador, Hechicero& hechicero, Nigromante& nigromante);
void test_mostrarInfo_guerreros(Gladiador& gladiador, Paladin& paladin, Caballero& caballero, Barbaro& barbaro, Mercenario& mercenario);
void test_barbaro_furioso(Barbaro& barbaro, int furia);
void test_usar_fuerzaSecreta_caballero(Caballero& caballero);
void test_mostrar_tipoDeCaballero(Caballero& caballero);
void test_aumentoPrecision_mercenario(Mercenario& mercenario, int aumento);
void test_absorberEnergia_nigromante(Nigromante& nigromante);
void test_usarComodinPaladin(Paladin& paladin);



