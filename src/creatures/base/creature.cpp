#include "creature.h"

int Creature::takeDamage(int damageTaken) {
    health = health - damageTaken;
}

int Creature::attack(int id, int damageGiven) {
    ////TODO: finish code and concept for creatureID
    // maybe a dictionary?
}

void Creature::setHealth(int h) {
    health = h;
}

int Creature::getHealth() const {
    return health;
}

void Creature::setEnergy(int e) {
    energy = e;
}

int Creature::getEnergy() const {
    return energy;
}

void Creature::setX(int x) {
    xAxis = x;
}

int Creature::getX() const {
    return xAxis;
}

void Creature::setY(int y) {
    yAxis = y;
}

int Creature::getY() const {
    return yAxis;
}

int Creature::getID() const {
    return idNum;
}
