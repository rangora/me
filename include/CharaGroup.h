#ifndef CHARAGROUP_H
#define CHARAGROUP_H


#include <nana/gui.hpp>
#include <nana/gui/place.hpp>
#include <nana/gui/widgets/button.hpp>
#include <nana/gui/widgets/panel.hpp>
#include <nana/gui/widgets/form.hpp>
#include <nana/gui/widgets/label.hpp>
#include <nana/gui/drawing.hpp>
#include <vector>


using namespace std;
using namespace nana;

class CharaGroup : public panel<true> {
    public:
        CharaGroup();
        virtual ~CharaGroup();

    protected:

    private:
        place plc;
        vector<unique_ptr<widget>> chara;

};

#endif // CHARAGROUP_H
