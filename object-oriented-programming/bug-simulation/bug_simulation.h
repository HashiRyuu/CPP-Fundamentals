/**
    @file bug_simulation.h
    @author Stephen Gilbert
*/
#ifndef BUG_SIMULATION_H
#define BUG_SIMULATION_H

/** A bug climbing a pole.  */
class Bug
{
public:
    Bug(int startPos);      // construct Bug at starting position
    void move();            // move bug one unit in direction
    void turn();            // Change the direction from left to right or vice-versa
    int position() const;   // Return the position
private:
    int m_position;
    int m_direction;
};

#endif
