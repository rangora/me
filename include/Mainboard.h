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

using namespace nana;

class Mainboard : public form {
    public:
        Mainboard();
        virtual ~Mainboard();

    protected:

    private:
        place plc {*this};
};

#endif // MAINBOARD_H
