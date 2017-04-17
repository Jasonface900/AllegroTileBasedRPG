#include "magicCreature.h"

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