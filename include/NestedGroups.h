#ifndef NESTEDGROUPS_H
#define NESTEDGROUPS_H

#include <memory>
#include <iostream>
#include <array>
#include <string>
#include <typeinfo>
#include <cstdio>
#include "Mainboard.h"

#define SYMBOL_SIZE 6
#define BOSSES_SIZE 6

using namespace nana;
using namespace std;

class NestedGroups : public Mainboard {
    public:
        NestedGroups();
        virtual ~NestedGroups();
        void symbolGroups();
        void bossGroups();
        void caculation();
        void showAll();

    protected:
        group symbolGrp {rightgrp.handle()};
        group bossGrp {rightgrp.handle()};
        group caculated{ rightgrp.handle() };
        //group nested3 {rightgrp.handle()};

        vector<picture*> symbols;
        vector<picture*> bosses;

    private:
        int bossClear[BOSSES_SIZE] {};
        int bossResult[BOSSES_SIZE]{1000, 2000, 3000, 4000, 5000, 6000};

        label* amount;
        button* allSym;
        button* allBoss;
        array<string, SYMBOL_SIZE> symbol_be_path { "..\\resource\\symbol\\road_be.png",
                                                    "..\\resource\\symbol\\chew_be.png",
                                                    "..\\resource\\symbol\\lacheln.png",
                                                    "..\\resource\\symbol\\arcana.png",
                                                    "..\\resource\\symbol\\esfera.png",
                                                    "..\\resource\\symbol\\morass.png"};

        array<string, SYMBOL_SIZE> symbol_af_path { "..\\resource\\symbol\\road_af.png",
                                                    "..\\resource\\symbol\\chew_af.png",
                                                    "..\\resource\\symbol\\lacheln.png",
                                                    "..\\resource\\symbol\\arcana.png",
                                                    "..\\resource\\symbol\\esfera.png",
                                                    "..\\resource\\symbol\\morass.png" };

        array<string, BOSSES_SIZE> boss_be_path{ "..\\resource\\boss\\hilla.png",
                                                    "..\\resource\\boss\\horntail.png",
                                                    "..\\resource\\boss\\kaung.png",
                                                    "..\\resource\\boss\\magnus.png",
                                                    "..\\resource\\boss\\zaqqum.png",
                                                    "..\\resource\\boss\\zaqqum.png" };

        array<string, BOSSES_SIZE> boss_af_path{ "..\\resource\\boss\\hilla.png",
                                                    "..\\resource\\boss\\horntail.png",
                                                    "..\\resource\\boss\\kaung.png",
                                                    "..\\resource\\boss\\magnus.png",
                                                    "..\\resource\\boss\\zaqqum.png",
                                                    "..\\resource\\boss\\zaqqum.png" };
        
};

#endif // NESTEDGROUPS_H
