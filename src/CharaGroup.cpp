#include "CharaGroup.h"




CharaGroup::CharaGroup() {
    //ctor
    plc.div("horizontal gap=3 margin=30 < <left_field> | 70% <right_field>>");
    plc.collocate();
}

CharaGroup::~CharaGroup() {
    //dtor
}
