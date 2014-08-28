#include <iostream>
#include "unit.h"
#include "world/map.h"
#include "command/moveunitcommand.h"

using namespace std;

void updateMap(Map* m, Unit* u, MoveUnitCommand* moveUnitCommand) {
	m->getTileAt(u->getX(), u->getY())->unsetUnit();
	moveUnitCommand->execute();
	m->getTileAt(u->getX(), u->getY())->setUnit(u);
}

int main()
{
	Map* m = new Map(20,8);
	m->generateMap();

	Unit* u = new Unit(6,4);

	bool exit = false;
	string choice;
	MoveUnitCommand* moveUnitCommand;

	m->getTileAt(u->getX(), u->getY())->setUnit(u);
	m->printMap();

	while(!exit) {
		cout << "Enter Command: ";
		getline(cin, choice);
		if(choice == "up") {
			if(u->getY() != 1) {
				moveUnitCommand = new MoveUnitCommand(u, 0, -1);
				updateMap(m, u, moveUnitCommand);
				delete moveUnitCommand;
			}
		}
		else if(choice == "down") {
			if(u->getY() != m->getHeight() - 2) {
				moveUnitCommand = new MoveUnitCommand(u, 0, 1);
				updateMap(m, u, moveUnitCommand);
				delete moveUnitCommand;
			}
		}
		else if (choice == "left") {
			if(u->getX() != 1){
				moveUnitCommand = new MoveUnitCommand(u, -1, 0);
				updateMap(m, u, moveUnitCommand);
				delete moveUnitCommand;
			}
		}
		else if (choice == "right") {
			if(u->getX() != m->getWidth() - 2){
				moveUnitCommand = new MoveUnitCommand(u, 1, 0);
				updateMap(m, u, moveUnitCommand);
				delete moveUnitCommand;
			}
		}
		else if(choice == "exit" || choice == "quit") {
			exit = true;
			break;
		}
		m->printMap();
	}

	cout << "Program Ending....!" << endl;

	/*
    m->getTileAt(u->getX(), u->getY())->setUnit(u);

    m->printMap();

    m->getTileAt(u->getX(), u->getY())->unsetUnit();

    cout << "Original Unit Position : (" << u->getX() << "," << u->getY() << ")" << endl;

    MoveUnitCommand* moveUnitCommand = new MoveUnitCommand(u, 7, 1);
    moveUnitCommand->execute();

    m->getTileAt(u->getX(), u->getY())->setUnit(u);

    m->printMap();

    cout << "After Move Unit Position : (" << u->getX() << "," << u->getY() << ")" << endl;
	 */
	return 0;
}
