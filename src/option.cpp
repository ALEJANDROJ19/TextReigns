#include "../include/option.h"

Option::Option()
{

}

Option::Option(const Option &option) {

}

Option::~Option() {

}

Option &Option::operator=(const Option &option) {
    return <#initializer#>;
}

string Option::getText() const {
    return std::string();
}

ReignPowers Option::getReignPowers() const {
    return ReignPowers();
}

bool Option::operator==(const Option &optionB) const {
    return false;
}

bool Option::operator!=(const Option &optionB) const {
    return false;
}

void Option::setText(string) {

}

void Option::setReignPowers(ReignPowers) {

}

string Option::toString() const {
    return std::string();
}

void Option::print(ostream &os) const {

}
