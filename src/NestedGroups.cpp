#include "../include/NestedGroups.h"

NestedGroups::NestedGroups() {
    lab3 = new label{nested3, "A simple nested group_03:"};
    b3 = new button{nested3, "button6"};

    symbolGroups();
    bossGroups();
    
    // symbol   
    nested3.div( " margin=3 min=30 gap= 2 all");
      
    
    nested3["all"] << *lab3 << *b3;
    
    
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

    // change all..
    allSym->events().click([&]() {
        for (auto i = 0; i < SYMBOL_SIZE; i++) 
            symbols[i]->load(paint::image(symbol_af_path[i]));
        rightgrp.collocate();
        });

    symbolGrp["box"] << *allSym;
    rightgrp["nested1"] << symbolGrp;
}

void NestedGroups::bossGroups() {
    allBoss = new button{ bossGrp, "all done" };

    bossGrp.div("< horizontal margin=10 gap=3 arrange=[34,34,34,34,34,34] <symbol> |"
        " horizontal margin=10 gap=3 arrange=[34,34,34,34,34,34] <box> >");

    for (auto i = 0; i < SYMBOL_SIZE; i++) {
        bosses.emplace_back(new picture{ bossGrp });
        bosses.back()->load(paint::image(symbol_be_path[i]));
        bossGrp["symbol"] << (*bosses.back());      
    }

    // click events.. //
    bosses[0]->events().click([&]() {
        if (!bossClear[0]) {
            bosses[0]->load(paint::image(symbol_af_path[0]));
            bossClear[0] = 1;
        }
        else {
            bosses[0]->load(paint::image(symbol_be_path[0]));
            bossClear[0] = 0;
        }
        rightgrp.collocate();
        });
    /******************/

    // all clear.. //
    allBoss->events().click([&]() {
        for (auto i = 0; i < SYMBOL_SIZE; i++)
            bosses[i]->load(paint::image(symbol_af_path[i]));
        memset(bossClear, BOSSES_SIZE, sizeof(int));
        rightgrp.collocate();
        });
    /***************/

    bossGrp["box"] << *allBoss;
    rightgrp["nested2"] << bossGrp;
}

void NestedGroups::caculation() {

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
    delete allBoss;
}
