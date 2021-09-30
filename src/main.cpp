/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       jameschoe                                                 */
/*    Created:      Wed Sep 29 2021                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// Motor1               motor         1               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  
  while (true)
  {
    if (Controller1.ButtonA.pressing()) Motor1.setVelocity(50, velocityUnits::pct);
    else if (Controller1.ButtonB.pressing()) Motor1.setVelocity(-50, velocityUnits::pct);
    else Motor1.setVelocity(0, velocityUnits::pct);

    Motor1.spin(forward);
    wait(50, msec);
  }

}
