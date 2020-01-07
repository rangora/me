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
    group nested(rightgrp.handle());
    label lab {rightgrp, "A simple right "};
    button b1 {rightgrp, "button1"};
    button b2 {rightgrp, "button2"};
    button b3 {rightgrp, "button3"};

    b1.events().click([] {
        printf("yes\n");
    });

    rightgrp.div("<vertical margin=2 gap=2 <vert lab> | 40% < <left_field> | 70% <right_field>> >");
    rightgrp["lab"] << lab.text_align(align::right) << nested;
    rightgrp["left_field"] << b1;
    rightgrp["right_field"] << b2 << b3;

    label lab1{nested, "A very simple group:"};
    nested.div("margin=3 min=30 gap=2 all");
    nested["all"] << lab1;
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
