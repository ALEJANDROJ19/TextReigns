#ifndef REIGNPOWERS_H
#define REIGNPOWERS_H

#include <string>
#include <iostream>
using std::string;
using std::ostream;

class ReignPowers
{
public:
    //Constructores
    ReignPowers();
    ReignPowers(int,int,int,int); //<- Discutible y estático :/
    ReignPowers(const ReignPowers &reignpowers);

    //Destructor
    ~ReignPowers();

    //Asignación
    ReignPowers& operator =(const ReignPowers &reignpowers);

    //Acciones
    void incrementPower(power_t, int);
    void decrementPower(power_t, int);
    void setPower(power_t, int);

    //Consultores
    int getPower(power_t) const;
    bool isLoseCondition() const;
    bool operator==(const ReignPowers &reignpowersB) const;
    bool operator!=(const ReignPowers &reignpowersB) const;
    ReignPowers operator+(const ReignPowers &reignpowersB) const;
    ReignPowers operator-(const ReignPowers &reignpowersB) const;

    //Modificadores

    //Imprimidores
    string toString() const;
    void print(ostream &os) const;

    //Variables y constantes públicas
    enum power_t { Religion, Pueblo, Ejercito, Economia };
    static const int MAX_POWER = 100;
    static const int MIN_POWER = 0;

private:
    //Atributos de la classe
    int _values[];

};

#endif // REIGNPOWERS_H
