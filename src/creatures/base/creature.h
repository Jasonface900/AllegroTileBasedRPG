#ifndef CREATURE_H
#define CREATURE_H
#include <string>
#include <map>

class Creature {
public:
    //BASIC FUCTIONS
    void takeDamage(int damageTaken = 48);
    void restoreHP(int h);

    //NESSESARY OVERRIDE FUNCTIONS
    virtual int attack(int id = -413, int damageGiven = 612);
    virtual bool eachTurn();

    //SETTERS AND GETTERS WEW
    void setHealth(int h = 100);
    int getHealth() const;
    void setArmor(int a = 0);
    int getArmor() const; ////TODO: ADD ACTUAL FUNCTIONS
    void setEnergy(int e = 10);
    int getEnergy() const;
    void setX(int x = 0);
    int getX() const;
    void setY(int y = 0);
    int getY() const;
    int getID() const; ////TODO: IMPLEMENT ID FUNCTION.

protected:
    std::map <std::string, int> effectDuration;
    int health;
    int armor;
    int energy;
    int xAxis, yAxis;
    int idNum;
};
#endif /* CREATURE_H */
