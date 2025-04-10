#pragma once
#include "utils.h"

class Baston: public ItemMagico {
    private:
        bool contrincantePierdeTurno;
    
        public:
        //Constructor
        Baston(const string& nombre, const string& poder, int daño, int nivel_de_uso, int duracion, bool magiaActiva);
        
        //Getter
        bool getContrincantePierdeTurno();

        //Metodos
        void mostrarInfo() override;
        void mostrarContrincanteTurno();
};