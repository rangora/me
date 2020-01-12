#ifndef NESTEDGROUPS_H
#define NESTEDGROUPS_H

#include <memory>
#include <iostream>
#include "Mainboard.h"

using namespace nana;
using namespace std;

class NestedGroups : public Mainboard {
    public:
        NestedGroups();
        virtual ~NestedGroups();
        void symbolGroups();

    protected:
        group nested1 {rightgrp.handle()};
        group nested2 {rightgrp.handle()};
        group nested3 {rightgrp.handle()};

        place symbol{ mainform };
        vector<shared_ptr<button>> btns;

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
