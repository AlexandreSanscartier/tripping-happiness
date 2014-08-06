#ifndef MOVEUNITCOMMAND_H
#define MOVEUNITCOMMAND_H

#include "command.h"
#include "unit.h"

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
