#ifndef UNIT_H
#define UNIT_H

class Unit
{
public:
    Unit();
    Unit(int x, int y);
    ~Unit();

    int getX() { return x_; }
    void setX( int x ) { x_ = x; }

    int getY() { return y_; }
    void setY( int y ) { y_ = y; }

    void moveTo( int x, int y );


private:
    int x_, y_;
};


#endif // UNIT_H
