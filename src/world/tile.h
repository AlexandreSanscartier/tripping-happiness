#ifndef TILE_H
#include "../unit.h"
#include <iostream>
#define TILE_H

class Tile {
public:

	void setSymbol( char s ) { _symbol = s; }
	char getSymbol() { return _symbol; }

	Unit* getUnit() { return _unit; }
	void setUnit(Unit* u);
	void unsetUnit();

private:
	char _symbol;
	Unit* _unit;
};


#endif // TILE_H
