#ifndef NESTEDGROUPS_H
#define NESTEDGROUPS_H

#include "Mainboard.h"

using namespace nana;

class NestedGroups : public Mainboard {
    public:
        NestedGroups();
        virtual ~NestedGroups();

    protected:

    private:
        // returns the handle of window... (from parent widget class)
        label lab    {rightgrp, "A simple right group"};
        group nested {rightgrp.handle()};

        button b1    {rightgrp, "button1"};
        button b2    {rightgrp, "button2"};
        button b3    {rightgrp, "button3"};
};

#endif // NESTEDGROUPS_H
