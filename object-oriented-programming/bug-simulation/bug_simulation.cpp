/**
 *  @file bug_simulation.cpp
 */
#include <string>
using namespace std;


#include "bug_simulation.h"

// construct Bug at starting position
Bug::Bug(int startPos) :  m_position(startPos){
     m_direction = 1;
}
// move bug one unit in direction
void Bug::move(){
    m_position += m_direction;
}

// Change the direction from left to right or vice-versa
void Bug::turn(){
    m_direction *= -1;
}

// Return the position
int Bug::position() const{
    return m_position;
}


#include <iostream>
int main()
{

     Bug fred(3);
     fred.move();
     cout << "fred is now at " << fred.position() << endl;

    return 0;
}
