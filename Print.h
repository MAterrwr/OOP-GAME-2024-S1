#ifndef PRINT_H
#define PRINT_H

#include "Action.h"

class Print {
    public:
    virtual void print_action(Action& action) = 0;
};

#endif