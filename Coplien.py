

header = \
"""
#ifndef %s
# define %s


class %s
{
    public:
        %s();
        ~%s();
        %s& operator=(%s const &rhs);
};

#endif
"""

imp = \
"""
#include "%s"

%s::%s(%s const &src) {
    *this = src;
}


%s::~%s() {
    return ;
}

%s& %s::operator=(%s const &rhs)
{
    return *this;
}
"""


def make_file(class_name):
    header_protector = class_name.uppercase();

    name_tuple = [header_protector, header_protector] + [class_name]  * 5
    header_ = header % name_tuple


    name_tuple = [class_name + ".hpp"] + [class_name] * 8
    impl_ = imp % name_tuple

    with file(class_name + ".hpp", "w") as hf,
        file(class_name + ".cpp", "w") as mf:
        hf.write(header_)
        mf.write(impl_)

