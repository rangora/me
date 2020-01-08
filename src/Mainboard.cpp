#include "Mainboard.h"

Mainboard::Mainboard() {
    // external group init..
    extgrp.div("horizontal gap=3 margin=20 < <left_field> | 70% <right_field>>");
    extgrp["left_field"] << leftgrp;
    extgrp["right_field"] << rightgrp;
}

void Mainboard::leftGroup_config() {
    leftgrp.div("buttons vert gap=5 margin=3");
}

void Mainboard::rightGroup_config() {
    rightgrp.div("<vertical margin=2 gap=2 <vert lab> | 40% < <left_field> | 70% <right_field>> >");
};

void Mainboard::run() {
    this->plc.collocate();
    leftgrp.collocate();
    rightgrp.collocate();
    this->mainform.show();
    exec();
}

Mainboard::~Mainboard() {

}
