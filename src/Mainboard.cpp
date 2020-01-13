#include "../include/Mainboard.h"

Mainboard::Mainboard() {
    // external group init..
    lab = new label{rightgrp, "A simple right group"};

    b1 = new button{rightgrp, ("Button with An Image")};
//    b1 = new button{rightgrp, "button1"};
    b2 = new button{rightgrp, "button2"};
    b3 = new button{rightgrp, "button3"};

    // Nana does not support ICON under Linux now
    b1->icon(paint::image("..\\..\\resource\\symbol\\arcana.png"));

    extgrp.div("horizontal gap=3 margin=20 < <left_field> | 70% <right_field>>");
    extgrp["left_field"] << leftgrp;
    extgrp["right_field"] << rightgrp;
}

void Mainboard::leftGroup_config() {
    leftgrp.div("buttons vert gap=5 margin=3");
}

void Mainboard::rightGroup_config() {
    rightgrp.div("<vertical margin=2 gap=2  <vert nested1> |"
                   "vertical margin=2 gap=2 <vert nested2> |"
                   "vertical margin=2 gap=2 <vert nested3> |"
                   "horizontal margin=2 gap=2 <button_field> >");

    //rightgrp["nested1"] << lab->text_align(align::center, align_v::top); // 텍스트 출력 예제..
    rightgrp["button_field"] << *b1 << *b2 << *b3;

    b1->events().click([] {
        printf("yes\n");
    });
};

void Mainboard::run() {
    leftGroup_config();
    rightGroup_config();

    this->plc.collocate(); // parent
    leftgrp.collocate();
    rightgrp.collocate();
    this->mainform.show(); // parent
    exec();
}

Mainboard::~Mainboard() {
    delete lab;
    delete b1;
    delete b2;
    delete b3;
}
