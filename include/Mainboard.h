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

#include "ExternalGroup.h"

using namespace nana;

class Mainboard : public ExternalGroup {
    public:
        Mainboard();
        void leftGroup_config();
        void rightGroup_config();
        void run();
        virtual ~Mainboard();


    protected:
        group rightgrp {this->extgrp, ("A right <bold=true, color=0xff0000,"
                             "font=\"Consolas\">Group</>"), true};
        group leftgrp  {this->extgrp, ("A new <bold=true, color=0xff0000,"
                             "font=\"Consolas\">Group</>"), true};

    private:


};

#endif // MAINBOARD_H
