#include "magicCreature.h"
/*
void MagicCreature::attack(int id = -413, int d = 612){
    
}*/

void MagicCreature::restoreHPwithMP(int h) {
    health += h;
    mana -= (h/10);
    if(mana > manaMax){
        mana = manaMax;
    }
}

void MagicCreature::setMana(int m){
    mana += m;
}

int MagicCreature::getMana() const{
    return mana;
}