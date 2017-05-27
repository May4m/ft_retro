#ifndef IOBJECT_H
# define IOBJECT_H

# include <iostream>
# include "Vector.hpp"

class IObject
{
    public:
        Vector          pos;
        bool            exists;

        IObject();
        ~IObject();
        IObject(IObject const & src);

        IObject& operator=(IObject const &rhs);

        std::string     getGraphicalCharacter();
        void            setGraphicalCharacter(std::string graf);

        void            move(Vector delta);
        void            moveX(int x);
        void            moveY(int y);

    private:
        std::string graphical_charactor;
};

#endif