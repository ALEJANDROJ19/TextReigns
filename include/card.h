#ifndef CARD_H
#define CARD_H

#include <string>
#include <iostream>
#include "option.h"

using std::string;
using std::ostream;

class Card
{
public:
    //Constructores
    Card();
    Card(const Card &card);

    //Destructor
    ~Card();

    //Asignación
    Card& operator =(const Card &card);

    //Acciones
    void addOption(const Option &option, int index);
    void delOption(int index);
    Option getOption(int index);
    int getIndexOption(const Option &option);

    //Consultores
    int getId() const;
    string getName() const;
    Option& getOptions() const;
    bool operator==(const Card &cardB) const;
    bool operator!=(const Card &cardB) const;

    //Modificadores
    void setName(string);
    void setId(int);
    void setOptions(Option[]);

    //Imprimidores
    string toString() const;
    void print(ostream &os) const;

    //Constantes Públicas
    static const int MAX_CARD_OPTIONS = 3;
    static const int MIN_CARD_OPTIONS = 3;

private:
    //Atributos de la classe
    int _id;
    string _name;
    Option _options[];

};

#endif // CARD_H
