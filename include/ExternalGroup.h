#ifndef EXTERNALGROUP_H
#define EXTERNALGROUP_H


#include <nana/gui.hpp>
#include <nana/gui/place.hpp>
#include <nana/gui/widgets/button.hpp>
#include <nana/gui/widgets/panel.hpp>
#include <nana/gui/widgets/form.hpp>
#include <nana/gui/widgets/label.hpp>
#include <nana/gui/widgets/group.hpp>
#include <nana/gui/drawing.hpp>


using namespace nana;


class ExternalGroup {
    public:
        // field
        form mainform{API::make_center(700,500)};

        // func
        ExternalGroup();
        virtual ~ExternalGroup();

    protected:
        label out    {mainform, "this is main"};
        group extgrp {mainform, "<bold=true, color=blue>Bad game</>", true};
        place plc    {mainform};

    private:

};

#endif // EXTERNALGROUP_H
