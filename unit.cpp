#include "unit.h"

Unit::Unit()
{
}

Unit::Unit(int x, int y) {
    x_ = x;
    y_ = y;
}

Unit::~Unit() {

}

void Unit::moveTo(int x, int y) {
    x_ += x;
    y_ += y;
}
