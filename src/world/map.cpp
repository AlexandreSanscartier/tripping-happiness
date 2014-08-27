#include "map.h"

Map::Map(int width, int height) {
	this->_width = width;
	this->_height = height;
}

void Map::generateMap() {

	int vectorSize = _width * _height;

	for(int i = 0; i < vectorSize; i++) {
		Tile* t = new Tile();
		t->setSymbol('#');
		//Draw the map borders
		if(i % _width == 0 || i % _width == _width-1 ||
				i < _width ||	i > _height * _width - _width)
			t->setSymbol('@');
		this->_tiles.push_back(t);
	}

}

void Map::printMap() {
	int pos = 0;
	for(int i = 0; i < _height; i++) {
		for(int j = 0; j < _width; j++) {
			pos = (i * _width) + j;
			if(_tiles[pos]->getUnit())
				std::cout << 'A';
			else
				std::cout << _tiles[pos]->getSymbol();
		}
		std::cout << std::endl;
	}
}

