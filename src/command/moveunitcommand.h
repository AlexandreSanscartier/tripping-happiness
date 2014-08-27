#ifndef MOVEUNITCOMMAND_H
#include "command.h"
#include "../unit.h"
#define MOVEUNITCOMMAND_H


class MoveUnitCommand : public Command
{
public:
    MoveUnitCommand(Unit* unit, int x, int y)
        : unit_(unit),
          x_(x),
          y_(y)
    {}

    virtual void execute() {
        unit_->moveTo(x_, y_);
    }

private:
    Unit* unit_;
    int x_, y_;
};

#endif // MOVEUNITCOMMAND_H
