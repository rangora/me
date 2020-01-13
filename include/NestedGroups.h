#ifndef NESTEDGROUPS_H
#define NESTEDGROUPS_H

#include <memory>
#include <iostream>
#include <array>
#include <string>
#include <typeinfo>
#include "Mainboard.h"

#define SYMBOL_SIZE 6

using namespace nana;
using namespace std;

class NestedGroups : public Mainboard {
    public:
        NestedGroups();
        virtual ~NestedGroups();
        void symbolGroups();

    protected:
        group symbolGrp {rightgrp.handle()};
        group nested2 {rightgrp.handle()};
        group nested3 {rightgrp.handle()};

        //vector<shared_ptr<picture>> symbols;
        vector<picture*> symbols;

    private:
        // returns the handle of window... (from parent widget class)
        label* lab1;
        label* lab2;
        label* lab3;
        button* b1;
        button* b2;
        button* b3;

        button* allSym;
        array<string, SYMBOL_SIZE> symbol_be_path { "..\\..\\resource\\symbol\\road_be.png",
                                                    "..\\..\\resource\\symbol\\chew_be.png",
                                                    "..\\..\\resource\\symbol\\lacheln.png",
                                                    "..\\..\\resource\\symbol\\arcana.png",
                                                    "..\\..\\resource\\symbol\\esfera.png",
                                                    "..\\..\\resource\\symbol\\morass.png"};

        array<string, SYMBOL_SIZE> symbol_af_path{ "..\\..\\resource\\symbol\\road_af.png",
                                                    "..\\..\\resource\\symbol\\chew_af.png",
                                                    "..\\..\\resource\\symbol\\lacheln.png",
                                                    "..\\..\\resource\\symbol\\arcana.png",
                                                    "..\\..\\resource\\symbol\\esfera.png",
                                                    "..\\..\\resource\\symbol\\morass.png" };
        
};

#endif // NESTEDGROUPS_H
