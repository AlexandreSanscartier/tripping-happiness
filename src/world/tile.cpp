#include "tile.h"

void Tile::setUnit(Unit* u) {
	this->_unit = u;
}
void Tile::unsetUnit() {
	this->_unit = 0;
}
