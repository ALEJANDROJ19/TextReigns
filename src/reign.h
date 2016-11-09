#ifndef REIGN_H
#define REIGN_H

#include <string>
#include <iostream>
using std::string;
using std::ostream;
#include "king.h"
#include "reignpowers.h"


class Reign
{
public:
    //Constructores
    Reign();
    Reign(const Reign &reign);

    //Destructor
    ~Reign();

    //Asignación
    Reign& operator =(const Reign &reign);

    //Acciones
    void nextTurn();
    void killKing();
    void spawnKing();

    //Consultores
    King getKing() const;
    ReignPowers getReingPowers() const;
    int getYear() const;

    //Modificadores
    void setKing(King);
    void setReingPowers(ReignPowers);
    void setYear(int);

    //Imprimidores
    string toString() const;
    void print(ostream &os) const;

private:
    //Atributos de la class
    King _king;
    ReignPowers _reignpower;
    int _year;

    //Metodos Privados - Acciones;
    void incrementYear();
    void loseGame();    //??
    void winGame();     //??

};

#endif // REIGN_H
