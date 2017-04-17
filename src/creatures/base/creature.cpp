#include "creature.h"

void Creature::takeDamage(int dt, std::string e) {
    health = health - dt;
    if(effect != "NULL"){
	if(effects.empty()){
            effects[e] = 0;
	} else{
        effects[e] = effects.size() + 1;
	}
    }
}

void Creature::attack(int id, int damageGiven) {
    ////TODO: finish code and concept for creatureID
    // maybe a dictionary?
}

bool Creature::eachTurn(){
   // insert creature logic here idk?
   return true;
   // something that affects each turn.
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
