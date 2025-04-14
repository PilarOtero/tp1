#pragma once
#include "utils.h"

class Baston: public ItemMagico {
    private:
        bool traeSuerte;
    
        public:
        //Constructor
        Baston(const string& nombre, const string& poder, int daño, int nivel_de_uso, int duracion, bool magiaActiva, bool traeSuerte);

        //Métodos
        void mostrarInfo() override;
        void mostrarSuerte();
};