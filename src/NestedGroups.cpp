#include "../include/NestedGroups.h"

NestedGroups::NestedGroups() {
    lab2 = new label{nested2, "A simple nested group_02:"};
    lab3 = new label{nested3, "A simple nested group_03:"};
    b2 = new button{nested2, "button2"};
    b3 = new button{nested3, "button6"};

    symbolGroups();
    
    // symbol
     
    nested2.div( " margin=3 min=30 gap= 2 all");
    nested3.div( " margin=3 min=30 gap= 2 all");
      
    
    nested2["all"] << *lab2 << *b2;
    nested3["all"] << *lab3 << *b3;
    
    
    rightgrp["nested2"] << nested2;
    rightgrp["nested3"] << nested3;
}

void NestedGroups::symbolGroups() {
    allSym = new button{ symbolGrp, "all done" };
    
    symbolGrp.div("< horizontal margin=10 gap=3 arrange=[34,34,34,34,34,34] <symbol> |"
                " horizontal margin=10 gap=3 arrange=[34,34,34,34,34,34] <box> >");

    for(auto i = 0; i < SYMBOL_SIZE; i++) {
        symbols.emplace_back(new picture{ symbolGrp });
        symbols.back()->load(paint::image(symbol_be_path[i]));
        symbolGrp["symbol"] << (*symbols.back());
    }

    /*
    for (auto iter : symbols) {
        symbolGrp["symbol"] << *iter;
    }
    */

    // change all..
    allSym->events().click([&]() {

        for (auto iter : symbols)
            delete iter;

        symbols.clear();
        symbols.shrink_to_fit();

        for (auto i = 0; i < SYMBOL_SIZE; i++) {
            symbols.emplace_back(new picture{ symbolGrp });
            symbols.back()->load(paint::image(symbol_af_path[i])); 
            symbolGrp["symbol"] << (*symbols.back());
        }
        cout << symbols.size() << endl;
        /*
        for(auto iter : symbols) {
            symbolGrp["symbol"] << *iter;
         //    iter-> = new picture{symbolGrp};
           }
        */
        rightgrp["nested1"] << symbolGrp;
        });
    cout << symbols.size() << endl;
    //


    symbolGrp["box"] << *allSym;
    rightgrp["nested1"] << symbolGrp;
}

NestedGroups::~NestedGroups() {
    //dtor
    delete lab1;
    delete lab2;
    delete lab3;
    delete b1;
    delete b2;
    delete b3;
    delete allSym;
}
