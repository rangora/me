#include "../include/NestedGroups.h"

NestedGroups::NestedGroups() {

    symbolGroups();
    bossGroups();
    showAll();

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
        bosses.back()->load(paint::image(boss_be_path[i]));
        bossGrp["symbol"] << (*bosses.back());      
    }

    // click events.. //
    bosses[0]->events().click([&]() {
        if (!bossClear[0]) {
            bosses[0]->load(paint::image(boss_af_path[0]));
            bossClear[0] = 1;
        }
        else {
            bosses[0]->load(paint::image(boss_be_path[0]));
            bossClear[0] = 0;
        }
        caculation();
        rightgrp.collocate();
        });
    /******************/

    // all clear.. //
    allBoss->events().click([&]() {
        for (auto i = 0; i < SYMBOL_SIZE; i++)
            bosses[i]->load(paint::image(boss_af_path[i]));
        memset(bossClear, BOSSES_SIZE, sizeof(int));
        caculation();
        rightgrp.collocate();
        });
    /***************/

    bossGrp["box"] << *allBoss;
    rightgrp["nested2"] << bossGrp;
}

void NestedGroups::caculation() {
    int will{};
    string willString;

    for (int i = 0; i < BOSSES_SIZE; i++) {
        if (bossClear[i])
            will += bossResult[i];
    }
    willString = "paid : " + to_string(will);
    amount->caption(willString);
}

void NestedGroups::showAll() {
    caculated.div("horizontal margin=10 gap=3 <value>");
    amount = new label{ caculated, "paid : 0"};
    //caculation();
    caculated["value"] << amount->text_align(align::center, align_v::top);
    rightgrp["nested3"] << caculated;
    rightgrp.collocate();
}

NestedGroups::~NestedGroups() {
    delete amount;
    delete allSym;
    delete allBoss;
}
