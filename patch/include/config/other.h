/* bg opacity */
float alpha = 0.8, alphaUnfocused = 0.6;

/*
 * 1: render most of the lines/blocks characters without using the font for
 *    perfect alignment between cells (U2500 - U259F except dashes/diagonals).
 *    Bold affects lines thickness if boxdraw_bold is not 0. Italic is ignored.
 * 0: disable (render all U25XX glyphs normally from the font).
 */
const int boxdraw = 1;
const int boxdraw_bold = 1;

/* braille (U28XX):  1: render as adjacent "pixels",  0: use font */
const int boxdraw_braille = 1;

/*
 * vim-browse (333 -> transparent bg)
 */
unsigned int const currentBg = 0, buffSize = 2048;
/// Enable double / triple click yanking / selection of word / line.
int const mouseYank = 1, mouseSelect = 0;
/// [Vim Browse] Colors for search results currently on screen.
unsigned int const highlightBg = 110, highlightFg = 0;
char const wDelS[] = "!\"#$%&'()*+,-./:;<=>?@[\\]^`{|}~", wDelL[] = " \t";
char *nmKeys [] = {              ///< Shortcusts executed in normal mode
  "R/Building\nN", "r/Building\n", "X/juli@machine\nN", "x/juli@machine\n",
  "Q?[Leaving vim, starting execution]\n","F/: error:\nN", "f/: error:\n", "DQf"
};
unsigned int const amountNmKeys = sizeof(nmKeys) / sizeof(*nmKeys);
/// Style of the {command, search} string shown in the right corner (y,v,V,/)
Glyph styleSearch = {' ', ATTR_ITALIC | ATTR_BOLD_FAINT, 7, 16};
Glyph style[] = {{' ',ATTR_ITALIC|ATTR_FAINT,15,16}, {' ',ATTR_ITALIC,232,11},
                 {' ', ATTR_ITALIC, 232, 4}, {' ', ATTR_ITALIC, 232, 12}};
