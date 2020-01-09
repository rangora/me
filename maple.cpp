#include <memory>
#include <vector>
#include <map>

#include <nana/deploy.hpp>
#include <nana/gui.hpp>
#include <nana/gui/place.hpp>

#include <nana/gui/widgets/button.hpp>
#include <nana/gui/widgets/combox.hpp>
#include <nana/gui/widgets/label.hpp>
#include <nana/gui/widgets/progress.hpp>
#include <nana/gui/widgets/tabbar.hpp>
#include <nana/gui/widgets/panel.hpp>
#include <nana/gui/widgets/listbox.hpp>
#include <nana/gui/widgets/treebox.hpp>
#include <nana/gui/widgets/checkbox.hpp>
#include <nana/gui/widgets/date_chooser.hpp>
#include <nana/gui/widgets/textbox.hpp>
#include <nana/gui/widgets/categorize.hpp>
#include <nana/gui/timer.hpp>
#include <nana/gui/tooltip.hpp>
#include <nana/filesystem/filesystem_ext.hpp>

//#include "include/Mainboard.h"
#include "include/MapleGUI.h"

using namespace std;
using namespace nana;

void init() {
//    Mainboard mb;
//    mb.leftGroup_config();
//    mb.rightGroup_config();
//    mb.run();
    MapleGUI gui;
    gui.go();
}


int main() {
    init();

    return 0;
}
