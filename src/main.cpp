#include <iostream>
#include "unit.h"
#include "world/map.h"
#include "command/moveunitcommand.h"

using namespace std;

int main()
{
	Map* m = new Map(20,8);
	m->generateMap();

    Unit* u = new Unit(8,8);

    m->getTiles()[u->getX() * u->getY()]->setUnit(u);

    m->printMap();

    cout << "Original Unit Position : (" << u->getX() << "," << u->getY() << ")" << endl;

    MoveUnitCommand* moveUnitCommand = new MoveUnitCommand(u, 2, 5);
    moveUnitCommand->execute();

    cout << "After Move Unit Position : (" << u->getX() << "," << u->getY() << ")" << endl;

    return 0;
}
