#include "Mainboard.h"

Mainboard::Mainboard() : form(API::make_center(700, 500)) {
    caption("Me");
    this->bgcolor(colors::mint_cream);

    label out     {*this, "this is main"};
    group ext_gr  {*this, "An external <bold=true, color=blue>Group:</>", true};


    plc.div("vert gap=10 margin=5 <lab weight=30><all>");
    plc["lab"] << out;
    plc["all"] << ext_gr;


    group grp_left  {ext_gr, ("A new <bold=true, color=0xff0000,"
                             "font=\"Consolas\">Group</>"), true};
    group grp_right {ext_gr, ("A right <bold=true, color=0xff0000,"
                             "font=\"Consolas\">Group</>"), true};

    ext_gr.div("horizontal gap=3 margin=20 < <left_field> | 70% <right_field>>");
    ext_gr["left_field"] << grp_left;
    ext_gr["right_field"] << grp_right;

    // left
    grp_left.div("buttons vert gap=5 margin=3");

    // right
    group nested(grp_right.handle());
    label lab {grp_right, "A simple right "};
    button b1 {grp_right, "button1"};
    button b2 {grp_right, "button2"};
    button b3 {grp_right, "button3"};

    // button event
    b1.events().click([] {
        printf("yes\n");
    });

    grp_right.div("<vertical margin=2 gap=2 <vert lab> | 40% < <left_field> | 70% <right_field>> >");
    grp_right["lab"] << lab.text_align(align::right) << nested;
    grp_right["left_field"] << b1;
    grp_right["right_field"] << b2 << b3;

    label lab1{nested, "A very simple group:"};
    nested.div("margin=3 min=30 gap=2 all");
    nested["all"] << lab1;

    plc.collocate();
    grp_left.collocate();
    this->show();
    exec();
}

Mainboard::~Mainboard()
{
    //dtor
}
