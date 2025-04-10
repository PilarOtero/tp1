#pragma once

#include "amuleto.h"
#include "baston.h"
#include "pocion.h"
#include "libroDeHechizos.h"
#include "lanza.h"
#include "hachaDoble.h"
#include "hachaSimple.h"
#include "espada.h"
#include "garrote.h"
#include "utils.h"

void handle_mostrar_items(Baston baston, LibroDeHechizos libro, Pocion pocion, Amuleto amuleto);
void handle_mostrar_armas(HachaSimple hacha_simple, HachaDoble hacha_doble, Lanza lanza, Espada espada, Garrote garrote);
void test_evolucionar_item(Baston& baston);
void test_involucionar_item(LibroDeHechizos& libro);
void test_romper_item(Pocion& pocion);
void test_ver_ma_pocion(Pocion& pocion);
void test_evolucionar_arma(HachaSimple& hacha_simple);
void test_ver_peso_arma(Espada& espada);
void test_involucionar_garrote(Garrote& garrote);
void test_reparar_garrote(Garrote& garrote);
void test_espada_cortante(Espada& espada);
void test_pocion_magica(Pocion& pocion);