#ifndef KING_H
#define KING_H

#include <string>
#include <iostream>

using std::string;
using std::ostream;

class King
{
public:
    //Constructores
    King();
    King(const King &king);

    //Destructor
    ~King();

    //Asignación
    King& operator=(const King &king);

    //Acciones
    void kill();
    void incrementAge();

    //Consultores
    int getAge() const;
    string getName() const;
    string getTitle() const;
    bool isAlive() const;

    //Modificadores
    void setName(string);
    void setTitle(string);
    void setAge(int);
    void setAlive(bool);

    //Imprimidores
    string toString() const;
    void print(ostream &os) const;


private:
    //Atributos de la classe
    int _age;               //Edad
    string _name, _title;   //Nombre, Título Noble
    bool _alive;            //Vivo?

    /* Ideas
     * : Rey anterior -> King *_antecesor
     * : Rey posterior -> King *_sucesor
     * : Causa de la muerte
     * /
};

#endif // KING_H
