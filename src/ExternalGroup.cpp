#include "ExternalGroup.h"

ExternalGroup::ExternalGroup() {
    mainform.caption("Me");
    mainform.bgcolor(colors::mint_cream);

    plc.div("vert gap=10 margin=5 <lab weight=30><all>");
    plc["lab"] << out;
    plc["all"] << extgrp;
}

ExternalGroup::~ExternalGroup() {
    //dtor
}
