/* Requires vim-browse patch! */
void historyQuit() { historyModeToggle(0); }

void historyShiftY(Arg const *y) {
	if (!histMode) historyModeToggle(1);
	historyMove(0, 0, y->i);
	if (insertOff == histOff) historyModeToggle(0);
}

void historyPageY(Arg const *y) {
	int n = y->i;
	n = term.row * n;
	if (!histMode) historyModeToggle(1);
	historyMove(0, 0, n);
	if (insertOff == histOff) historyModeToggle(0);
}
