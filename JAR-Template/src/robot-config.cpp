#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;

//The motor constructor takes motors as (port, ratio, reversed), so for example
//motor LeftFront = motor(PORT1, ratio6_1, false);

//Add your devices below, and don't forget to do the same in robot-config.h:
// Controller
controller Controller1 = controller(primary);

// Drive motors (from koifish.v5python)
motor left_front = motor(PORT1, ratio6_1, true);
motor left_middle = motor(PORT2, ratio6_1, true);
motor left_back = motor(PORT11, ratio6_1, true);

motor right_front = motor(PORT9, ratio6_1, false);
motor right_middle = motor(PORT10, ratio6_1, false);
motor right_back = motor(PORT20, ratio6_1, false);

// Intake motors
motor intake1 = motor(PORT7, ratio6_1, false);
motor intake2 = motor(PORT8, ratio6_1, false);

// Inertial sensor
inertial inertial_sensor = inertial(PORT16);

// Pneumatics (three wire digital out)
digital_out solenoid = digital_out(Brain.ThreeWirePort.H);

void vexcodeInit( void ) {
  // Set stopping modes to coast like the python config
  left_front.setStopping(coast);
  left_middle.setStopping(coast);
  left_back.setStopping(coast);
  right_front.setStopping(coast);
  right_middle.setStopping(coast);
  right_back.setStopping(coast);
  intake1.setStopping(coast);
  intake2.setStopping(coast);
}