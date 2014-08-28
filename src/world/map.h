#ifndef MAP_H
#include "tile.h"
#include <iostream>
#include <vector>
#define MAP_H


typedef std::vector<Tile*> tile_vec;

class Map
{
public:
	Map();
	Map(int width, int height);
    ~Map();

    void generateMap(); //For now let the map generate itself
    void printMap(); //For now let the map print itself as a String

    void setHeight(int h) { _height = h; }
    void setWidth(int w) { _width = w; }

    int getHeight() { return _height; }
    int getWidth() { return _width; }

    Tile* getTileAt(int x, int y);
    tile_vec getTiles() { return _tiles; }


private:
    int _height, _width;
    tile_vec _tiles;
};




#endif // MAP_H
