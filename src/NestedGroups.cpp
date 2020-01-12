#include "../include/NestedGroups.h"

NestedGroups::NestedGroups() {
    //lab1 = new label{nested1, "A simple nested group_01:"};
    lab2 = new label{nested2, "A simple nested group_02:"};
    lab3 = new label{nested3, "A simple nested group_03:"};
    //b1 = new button{nested1, "button4"};
    b2 = new button{nested2, "button2"};
    b3 = new button{nested3, "button6"};
    
    // symbol
    //vector<shared_ptr<button>> btns;
    for (auto i = 0; i < 6; i++) {
        btns.emplace_back(new button{ nested1, rectangle(3,3,34,34) });
        btns.back()->caption(L"Button");
        btns.back()->size(nana::size(10,10));
    }

    //nested1.div( " margin=3 min=30 gap= 2 all");
    nested1.div("<abc grid=[3,2]>");
    nested2.div( " margin=3 min=30 gap= 2 all");
    nested3.div( " margin=3 min=30 gap= 2 all");
    //nested1["all"] << *lab1 << *b1;

    for (auto iter : btns) {
        const type_info& t1 = typeid(*iter);
        const type_info& t2 = typeid(*b2);
        cout << t1.name() << endl;
        cout << t2.name() << endl;
        cout << btns.size() << endl;
        // getchar();
        nested1["abc"] << *iter;
        //nested1["abc"] << btns.back()->handle();
    }
    
    nested2["all"] << *lab2 << *b2;
    nested3["all"] << *lab3 << *b3;
    
    rightgrp["nested1"] << nested1;
    rightgrp["nested2"] << nested2;
    rightgrp["nested3"] << nested3;
}

void NestedGroups::symbolGroups() {
    
    

    
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
