#include "MapleGUI.h"

MapleGUI::MapleGUI() {

    //ctor
}

void MapleGUI::go() {
    // Mianborad ..
    this->leftGroup_config();
    this->rightGroup_config();
    this->run();
    // nested

}

MapleGUI::~MapleGUI()
{
    //dtor
}
