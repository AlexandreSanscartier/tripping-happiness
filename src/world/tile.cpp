#include "tile.h"

void Tile::setUnit(Unit* u) {
	this->_unit = u;
	std::cout << "Setting Unit to current tile" << std::endl;
}
