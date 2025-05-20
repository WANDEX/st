/* Requires vim-browse patch! */
void historyQuit(const Arg *a) { historyModeToggle(0); }

void historyShiftY(const Arg *y) {
	if (!histMode) historyModeToggle(1);
	historyMove(0, 0, y->i);
	if (insertOff == histOff) historyModeToggle(0);
}

void historyPageY(const Arg *y) {
	int n = y->i;
	n = term.row * n;
	if (!histMode) historyModeToggle(1);
	historyMove(0, 0, n);
	if (insertOff == histOff) historyModeToggle(0);
}
