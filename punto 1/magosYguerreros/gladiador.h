#include "utils2.h"

class Gladiador: public Guerrero {
    private:
        //El honor influye en la forma en que reaccionara frente a un ataque
        int honor;
        bool escudo;
        int velocidad;

    public:
        //Constructor
        Gladiador(const string& nombre, int nivel, int vida, int fuerza, bool experiencia, pair<shared_ptr<Util>, shared_ptr<Util>> armas, const string& habilidad, int honor, bool escudo, int velocidad);
        
        //Getters
        int getHonor();
        bool getEscudo();
        int getVelocidad();

        //Métodos
        void mostrarInfo() override;
        void usarEscudo();
};