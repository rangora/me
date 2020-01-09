#ifndef NESTEDGROUPS_H
#define NESTEDGROUPS_H

#include "Mainboard.h"

using namespace nana;

class NestedGroups : public Mainboard {
    public:
        NestedGroups();
        virtual ~NestedGroups();

    protected:
        group nested1 {rightgrp.handle()};
        group nested2 {rightgrp.handle()};
        group nested3 {rightgrp.handle()};


    private:
        // returns the handle of window... (from parent widget class)
        label* lab1;
        label* lab2;
        label* lab3;
        button* b1;
        button* b2;
        button* b3;
};

#endif // NESTEDGROUPS_H
