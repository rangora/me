#include "NestedGroups.h"

NestedGroups::NestedGroups() {
    b1.events().click([] {
        printf("yes\n");
    });



    rightgrp["left_field"] << b1;
    rightgrp["right_field"] << b2 << b3;
    rightgrp["lab"] << lab.text_align(align::right) << nested;


    label lab1{nested, "A simple nested group:"};
    button b4{nested, "button4"};
    nested.div( " margin=3 min=30 gap= 2 all");
    nested["all"] << lab1 << b4;




}

NestedGroups::~NestedGroups() {
    //dtor
}
