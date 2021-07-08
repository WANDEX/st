/* Internal keyboard shortcuts. */
#define MODKEY Mod1Mask
#define TERMMOD (Mod1Mask|ShiftMask)
#define TERMMODC (Mod1Mask|ShiftMask|ControlMask)

/*
 * Internal mouse shortcuts.
 * Beware that overloading Button1 will disable the selection.
 */
static MouseShortcut mshortcuts[] = {
	/* mask                 button   function        argument       release */
	{ XK_ANY_MOD,           Button2, selpaste,       {.i = 0},      1 },
	{ ShiftMask,            Button4, ttysend,        {.s = "\033[5;2~"} },
	// { XK_ANY_MOD,           Button4, ttysend,        {.s = "\031"} },
	{ ShiftMask,            Button5, ttysend,        {.s = "\033[6;2~"} },
	// { XK_ANY_MOD,           Button5, ttysend,        {.s = "\005"} },
};

static Shortcut shortcuts[] = {
	/* mask                 keysym          function        argument */
	{ XK_ANY_MOD,           XK_Break,       sendbreak,      {.i =  0} },
	{ ControlMask,          XK_Print,       toggleprinter,  {.i =  0} },
	{ ShiftMask,            XK_Print,       printscreen,    {.i =  0} },
	{ XK_ANY_MOD,           XK_Print,       printsel,       {.i =  0} },
	{ TERMMOD,              XK_Prior,       zoom,           {.f = +1} },
	{ TERMMOD,              XK_Next,        zoom,           {.f = -1} },
	{ MODKEY,               XK_Home,        zoomreset,      {.f =  0} },
	{ MODKEY,               XK_c,           clipcopy,       {.i =  0} },
	{ MODKEY,               XK_v,           clippaste,      {.i =  0} },
	{ TERMMOD,              XK_V,           selpaste,       {.i =  0} },
	{ ShiftMask,            XK_Insert,      selpaste,       {.i =  0} },
	{ TERMMOD,              XK_Num_Lock,    numlock,        {.i =  0} },
	{ TERMMOD,              XK_Up,          zoom,           {.f = +1} },
	{ TERMMOD,              XK_Down,        zoom,           {.f = -1} },
	{ MODKEY,               XK_u,           zoom,           {.f = +1} },
	{ MODKEY,               XK_l,           zoom,           {.f = -1} },
	{ TERMMOD,              XK_U,           zoom,           {.f = +2} },
	{ TERMMOD,              XK_L,           zoom,           {.f = -2} },
	{ TERMMODC,             XK_U,           zoom,           {.f = +4} },
	{ TERMMODC,             XK_L,           zoom,           {.f = -4} },
	{ TERMMODC,             XK_H,           zoomreset,      {.f =  0} },
	{ MODKEY,               XK_Return,      newterm,        {.i =  0} },
	{ TERMMOD,              XK_Return,      newtermr,       {.i =  0} },
	{ MODKEY,               XK_n,           historyShiftY,  {.i =  1} },
	{ MODKEY,               XK_e,           historyShiftY,  {.i = -1} },
	{ TERMMOD,              XK_N,           historyPageY,   {.i =  1} },
	{ TERMMOD,              XK_E,           historyPageY,   {.i = -1} },
	{ MODKEY,               XK_k,           historyQuit,    {.i =  0} },
	{ MODKEY,               XK_a,           normalMode,     {.i =  0} },
};
