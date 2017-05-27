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
        std::string     getGraphicalCharacter();
        void            setGraphicalCharacter(std::string graf);

    private:
        std::string graphical_charactor;
};

#endif