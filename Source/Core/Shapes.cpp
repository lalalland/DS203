#include "Shapes.h"
#include "Source/HWLayer/Types.h"

#define SHAPE(id) LINKERSECTION(".extra") const char CShapes::id[]

SHAPE(corner_right) = 
  "\x10"
  "................"
  "................"
  " ..............."
  "  .............."
  "     ..........."
  "           ....."
  "             ..."
  "              .."
  "               .";

SHAPE(corner_left) = 
  "\x10"
  "               ."
  "              .."
  "             ..."
  "           ....."
  "     ..........."
  "  .............."
  " ..............."
  "................"
  "................";

SHAPE(more_left) =
  "\x0e"
  "      .       "
  "     ...      "
  "    .....     "
  "   .......    "
  "  .........   "
  " ...........  "
  "              "
  "              ";


SHAPE(more_right) =
  "\x0e"
  "              "
  " ...........  "
  "  .........   "
  "   .......    "
  "    .....     "
  "     ...      "
  "      .       "
  "              ";

SHAPE(updown) =
  "\x0e"
  "   .      .   "
  "  ..      ..  "
  " ............ "
  "  ..      ..  "
  "   .      .   ";

SHAPE(leftright) =
  "\x0e"
  "      .       "
  "     ...      "
  "    .....     "
  "      .       "
  "      .       "
  "      .       "
  "    .....     "
  "     ...      "
  "      .       ";


SHAPE(cha_base) =
  "\x09"
  "........."
  "........."
  ".. .... ."
  ".       ."
  "....... ."
  "........."
  "........."
  " ....... "
  "  .....  "
  "   ...   "
  "    .    ";

SHAPE(trig_base) =
  "\x09"
  "........."
  ". ......."
  ". ......."
  ".       ."
  ". ......."
  ". ......."
  "........."
  " ....... "
  "  .....  "
  "   ...   "
  "    .    ";

SHAPE(trig_time) =
  "\x05"
  ".    "
  "..   "
  "...  "
  ".... "
  "....."
  ".... "
  "...  "
  "..   "
  ".    ";


SHAPE(chb_base) =
  "\x09"
  "........."
  ".. ...  ."
  ". ... . ."
  ". .. .. ."
  ". .. .. ."
  "..  ... ."
  "........."
  " ....... "
  "  .....  "
  "   ...   "
  "    .    ";

SHAPE(sel_left) =
  "\x0e"
  "              "
  "              "
  "              "
  "              "
  "  ..........  "
  " ............ "
  ".............."
  "..............";

SHAPE(sel_right) =
  "\x0e"
  ".............."
  ".............."
  " ............ "
  "  ..........  "
  "              "
  "              "
  "              "
  "              ";

SHAPE(sig_dc) =
  "\x0e"
  "              "
  "     .  .     "
  "     .  .     "
  "     .  .     "
  "     .  .     "
  "        .     "
  "     .  .     "
  "     .  .     "
  "     .  .     "
  "     .  .     ";

SHAPE(sig_ac) =
  "\x0e"
  "              "
  "     .    .   "
  "    .     .   "
  "   .      .   "
  "   .      .   "
  "    .     .   "
  "     .    .   "
  "      .   .   "
  "       .  .   "
  "       .  .   "
  "      .   .   ";

SHAPE(sig_gnd) =
  "\x0e"
  "              "
  "      .       "
  "      . .     "
  "      . . .   "
  "      . . .   "
  " ...... . .   "
  "      . . .   "
  "      . . .   "
  "      . .     "
  "      .       "
  "              ";

SHAPE(sig_dig) =
  "\x0e"
  "              "
  "         .    "
  "         .    "
  "         .    "
  "    ......    "
  "    .         "
  "    .         "
  "    .         "
  "    ......    "
  "         .    "
  "         .    "
  "         .    ";

SHAPE(sig_dign) =
  "\x0e"
  "              "
  "    .         "
  "    .         "
  "    .         "
  "    ......    "
  "         .    "
  "         .    "
  "         .    "
  "    ......    "
  "    .         "
  "    .         "
  "    .         ";

SHAPE(per_div) =
  "\x0e"
  "           .. "
  "         ..   "
  "       ..     "
  "              "
  "          ..  "
  "         .  . "
  "       ...... "
  "              "
  "       . .... "
  "              "
  "         ...  "
  "            . "
  "         ...  ";

SHAPE(trig_pos) =
  "\x0e"
  "              "
  "            . "
  "        .   . "
  "       .    . "
  "  ........... "
  "  .    .      "
  "  .     .     "
  "  .           ";

SHAPE(trig_pos_) =
  "\x0e"
  "            . "
  "        .. .x."
  "       .x. .x."
  "  .....x....x."
  " .xxxxxxxxxxx."
  " .x....x..... "
  " .x.   .x.    "
  " .x.    ..    "
  "  .           ";

SHAPE(trig_neg) =
  "\x0e"
  "              "
  "            . "
  "      .     . "
  "       .    . "
  "  ........... "
  "  .    .      "
  "  .   .       "
  "  .           "
  "              ";

SHAPE(trig_neg_) =
  "\x0e"
  "            . "
  "     ..    .x."
  "     .x.   .x."
  "  .....x....x."
  " .xxxxxxxxxxx."
  " .x....x..... "
  " .x. .x.      "
  " .x. ..       "
  "  .           ";

SHAPE(prog_left) =
  "\x07"
  "......."
  ".     .";

SHAPE(prog_right) =
  "\x07"
  ".     ."
  ".......";

SHAPE(prog_in) =
  "\x07"
  ".     .";

SHAPE(prog_pat) =
  "\x07"
  "   .   "
  "    .  "
  "     . "
  "    .  "
  "   .   "
  "  .    "
  " .     "
  "  .    ";

SHAPE(prog_sld) =
  "\x07"
  " ..... "
  " ..... "
  " ..... "
  " ..... "
  " ..... "
  " ..... "
  " ..... "
  " ..... ";


SHAPE(time_base) =
  "\x05"
  "..   "
  "...  "
  ".... "
  "....."
  ".... "
  "...  "
  "..   ";


SHAPE(trig_run) =
  "\x0e"
  "  .........   "
  "   .......    "
  "    .....     "
  "     ...      "
  "      .       "
  "              "
  "  .........   "
  "  .........   ";

SHAPE(trig_stop) =
  "\x0e"
  "    .....     "
  "   .......    "
  "  .........   "
  "  .........   "
  "  .........   "
  "   .......    "
  "    .....     "
  "              ";

SHAPE(curx1) =
  "\x0e"
  ".. ..    .    "
  "...     .     "
  "  ...  ...... "
  ".. ..         ";

SHAPE(cury1) =
  "\x0e"
  "..       .    "
  ".....   .     "
  "  ...  ...... "
  "..            ";

SHAPE(curx2) =
  "\x0e"
  ".. ..  .    . "
  "...   .    .. "
  "  ... .   . . "
  ".. ..  ...  . ";

SHAPE(cury2) =
  "\x0e"
  "..      .    ."
  ".....  .    .."
  "  ...  .   . ."
  "..      ...  .";

SHAPE(minus) =
  "\x0e"
  "              "
  "      .       "
  "      .       "
  "      .       "
  "      .       "
  "              ";

SHAPE(markerX) =
  "\x04" 
  ".   "
  "..  "
  "... "
  "...."
  "... "
  "..  "
  ".   ";

SHAPE(triangle) =
  "\x04" 
  "   ."
  "  .."
  " ..."
  "...."
  " ..."
  "  .."
  "   .";

SHAPE(check) = "check";

//char CShapes::RamTest[1024*8];