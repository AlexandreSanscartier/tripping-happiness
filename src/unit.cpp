#include "unit.h"

Unit::Unit()
{
	x_ = 0;
	y_ = 0;
	symbol_ = 'A';
}

Unit::Unit(int x, int y) {
	x_ = x;
    y_ = y;
    symbol_ = 'A';
}

Unit::~Unit() {

}

void Unit::moveTo(int x, int y) {
    x_ += x;
    y_ += y;
}
