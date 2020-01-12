#ifndef MAINBOARD_H
#define MAINBOARD_H

#include <nana/gui.hpp>
#include <nana/gui/place.hpp>
#include <nana/gui/widgets/button.hpp>
#include <nana/gui/widgets/panel.hpp>
#include <nana/gui/widgets/form.hpp>
#include <nana/gui/widgets/label.hpp>
#include <nana/gui/widgets/group.hpp>
#include <nana/gui/drawing.hpp>
#include <nana/gui/widgets/picture.hpp>

#include "ExternalGroup.h"

using namespace nana;

class Mainboard : public ExternalGroup {
    public:
        Mainboard();
        virtual ~Mainboard();
        void run();


    protected:
        group rightgrp {extgrp, ("A right <bold=true, color=0xff0000,"
                             "font=\"Consolas\">Group</>"), true};
        group leftgrp  {extgrp, ("A new <bold=true, color=0xff0000,"
                             "font=\"Consolas\">Group</>"), true};

    private:
        // field
        label* lab;
        button* b1;
        button* b2;
        button* b3;

        // func
        void leftGroup_config();
        void rightGroup_config();

};

#endif // MAINBOARD_H
