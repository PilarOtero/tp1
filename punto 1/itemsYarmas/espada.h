#pragma once
#include "utils.h"

class Espada: public ArmaCombate {
    private:
        bool cortante;
        int filo;
    
        public:
        //Constructor
        Espada(const string& nombre, int daño, int duracion, int nivel_de_uso, float peso, bool cortante, int filo);
        
        //Getters
        int getFilo();
        bool getCortante();
    
        //Metodos
        void usar() override;
        void mostrarInfo() override;
        void reparar(int daño_agregado, int duracion_agregada) override;
        void desafilar();
};