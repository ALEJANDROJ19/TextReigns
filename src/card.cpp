#include "card.h"

//Constructores
Card::Card(int id,string text){
    _id = id;
    _name = text;
    _options = new Option[MAX_CARD_OPTIONS];
    _oactive = new int[MAX_CARD_OPTIONS];
    initialize();
}

Card::Card(const Card &card){
    _id = card._id;
    _name = card._name;
    _options = new Option[MAX_CARD_OPTIONS];
    _oactive = new int[MAX_CARD_OPTIONS];
    //Copiamos la array de opciones activas
    for (int i=0; i<MAX_CARD_OPTIONS; i++)
        _oactive[i] = card._oactive[i];

    //Copiamos las opciones.
    for (int i=0; i<MAX_CARD_OPTIONS; i++)
        _options[i] = card._options[i];
}

//Destructor
Card::~Card(){
    delete[] _options;
}

//Asignación
Card& Card::operator=(const Card &card){
//     * operator=
//     * 	- Guardar la ref a la array Opciones actual.
//     * 	- Copiar la carta que pasamos com parametro
//     * 	- Borrar la array anterior
//     * 	- Return dir memoria
    if(this != &card){
        Option *aux = _options;
        int *aux2 = _oactive;
        Card copia = Card(card);
        _id = copia._id;
        _name = copia._name;
        _options = copia._options;
        _oactive = copia._oactive;
        //Eliminar la estructura
        copia._options = aux;
        copia._oactive = aux2;
    }

    return *this;
}

//Acciones
void Card::addOption(const Option &option, int index){
    if(index > -1 && index < MAX_CARD_OPTIONS)
        _options[index] = option;
        _oactive[index] = 1;
}

void Card::delOption(int index){
    if(index > -1 && index < MAX_CARD_OPTIONS)
        _oactive[index] = 0;

}

Option Card::getOption(int index){
    //Puede devolver opciones no válidas!!
    return _options(index);

}

int Card::getIndexOption(const Option &option){
    bool encontrado = false;
    int ret;
    for(int i=0;i<MAX_CARD_OPTIONS && !encontrado;i++){
        encontrado = _options == option;
        ret = i;
    }

    return ret;
}

//Consultores
int Card::getId() const{
    return _id;
}
string Card::getName() const{
    return _name;
}
Option& Card::getOptions() const{
    return _options;
}
int& Card::getOActive() const{
    return _oactive;
}
bool Card::operator==(const Card &cardB) const{
    if(_id == cardB._id)
        if(_name == cardB._name)
            if(equalOActive(cardB._oactive))
                if(equalOptions(cardB._options))
                    return true;
    return false;
}
bool Card::operator!=(const Card &cardB) const{
    return !(*this==cardB);
}

//Modificadores
void Card::setName(string name){
    _name = name;
}

void Card::setId(int id){
    _id = id;
}

void Card::setOptions(Option options[]){
    _options = options;
}

void Card::setOActive(int oactive[]){
    _oactive = oactive;
}

//Imprimidores
string Card::toString() const{

}
void Card::print(ostream &os) const{

}

//Metodos Privados
void Card::initialize(){
    for(int i=0;i<MAX_CARD_OPTIONS;i++)
        _oactive[i] = 0;
}

bool Card::equalOActive(int b[]){
    bool desigual = true;
    for(int i=0;i<MAX_CARD_OPTIONS && !desigual;i++)
        desigual = _oactive[i] != b[i];
    return !desigual;
}

bool Card::equalOptions(Option b[]){
    bool desigual = true;
    for(int i=0;i<MAX_CARD_OPTIONS && !desigual;i++)
        desigual = _options[i] != b[i];
    return !desigual;
}
