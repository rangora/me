#include "NestedGroups.h"

NestedGroups::NestedGroups() {
    lab1 = new label{nested1, "A simple nested group_01:"};
    lab2 = new label{nested2, "A simple nested group_02:"};
    lab3 = new label{nested3, "A simple nested group_03:"};
    b1 = new button{nested1, "button4"};
    b2 = new button{nested2, "button2"};
    b3 = new button{nested3, "button6"};

    nested1.div( " margin=3 min=30 gap= 2 all");
    nested2.div( " margin=3 min=30 gap= 2 all");
    nested3.div( " margin=3 min=30 gap= 2 all");
    nested1["all"] << *lab1 << *b1;
    nested2["all"] << *lab2 << *b2;
    nested3["all"] << *lab3 << *b3;

    rightgrp["nested1"] << nested1;
    rightgrp["nested2"] << nested2;
    rightgrp["nested3"] << nested3;
}

NestedGroups::~NestedGroups() {
    //dtor
    delete lab1;
    delete lab2;
    delete lab3;
    delete b1;
    delete b2;
    delete b3;
}
