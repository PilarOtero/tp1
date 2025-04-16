#include "utils2.h"

class Mercenario: public Guerrero {
    private:
        int precision;

    public:
        //Constructor
        Mercenario(const string& nombre, int nivel, int vida, int fuerza, bool experiencia, pair<unique_ptr<Util>, unique_ptr<Util>> armas, const string& habilidad, int precision);

        //Getters
        int getPrecision();

        //Métodos
        void mostrarInfo() override;
        void usarPrecision();
        void aumentarPrecision(int aumento);  
};