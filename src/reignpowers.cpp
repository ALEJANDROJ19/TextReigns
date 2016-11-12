#include "../include/reignpowers.h"

ReignPowers::ReignPowers()
{
    _values = new[]
}

ReignPowers::ReignPowers(int, int, int, int) {

}

ReignPowers::ReignPowers(const ReignPowers &reignpowers) {

}

ReignPowers::~ReignPowers() {

}

ReignPowers &ReignPowers::operator=(const ReignPowers &reignpowers) {
    return <#initializer#>;
}

void ReignPowers::incrementPower(ReignPowers::power_t, int) {

}

void ReignPowers::decrementPower(ReignPowers::power_t, int) {

}

void ReignPowers::setPower(ReignPowers::power_t, int) {

}

int ReignPowers::getPower(ReignPowers::power_t) const {
    return 0;
}

bool ReignPowers::isLoseCondition() const {
    return false;
}

bool ReignPowers::operator==(const ReignPowers &reignpowersB) const {
    return false;
}

bool ReignPowers::operator!=(const ReignPowers &reignpowersB) const {
    return false;
}

ReignPowers ReignPowers::operator+(const ReignPowers &reignpowersB) const {
    return ReignPowers();
}

ReignPowers ReignPowers::operator-(const ReignPowers &reignpowersB) const {
    return ReignPowers();
}

string ReignPowers::toString() const {
    return std::string();
}

void ReignPowers::print(ostream &os) const {

}
