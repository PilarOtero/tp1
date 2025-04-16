#include "utils2.h"

class Paladin: public Guerrero {
    private:
        int comodines;
    public:
        //Constructor
        Paladin(const string& nombre, int nivel, int vida, int fuerza, bool experiencia, pair<unique_ptr<Util>, unique_ptr<Util>> armas, const string& habilidad, int comodines);

        //Getter
        int getComodines();

        //Métodos
        void mostrarInfo() override;
        void usarComodin();
           
};