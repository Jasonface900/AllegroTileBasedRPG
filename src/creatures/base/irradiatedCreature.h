#ifndef IRRADIATEDCREATURE_H
#define IRRADIATEDCREATURE_H

class IrradiatedCreature: public Creature{
public:
    

    //SETTERS AND GETTERS
    void setExposure(int e);
    int getExposure() const;
    void setTSLE(int t);
    int getTSLE() const;

protected:
    int radiationExposure;
    int timeSinceLastExposure;
};
#endif /* IRRADIATEDCREATURE_H */
