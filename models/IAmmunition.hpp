#ifndef IAMMUNITION_H
# define IAMMUNITION_H


class IAmmunition : public IObject
{
    public:
        IAmmunition(int life_delta);
        IAmmunition();

        int     getLifeDelta() const;
    private:
        int     life_delta; // number of times the ammunition can be fired to kill the player
};

#endif