#ifndef OPTION_H
#define OPTION_H

#include <string>
#include <iostream>
#include "reignpowers.h"

using std::string;
using std::ostream;

class Option
{
public:
    //Constructores
    Option();
    Option(const Option &option);

    //Destructor
    ~Option();

    //Asignación
    Option& operator =(const Option &option);

    //Acciones

    //Consultores
    string getText() const;
    ReignPowers getReignPowers() const;
    bool operator==(const Option &optionB) const;
    bool operator!=(const Option &optionB) const;

    //Modificadores
    void setText(string);
    void setReignPowers(ReignPowers);

    //Imprimidores
    string toString() const;
    void print(ostream &os) const;

private:
    //Atributos de la classe
    string _text;
    ReignPowers _rpower;

};

#endif // OPTION_H
