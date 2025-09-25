using namespace vex;

extern brain Brain;

// Controller
extern controller Controller1;

// Drive motors
extern motor left_front;
extern motor left_middle;
extern motor left_back;

extern motor right_front;
extern motor right_middle;
extern motor right_back;

// Intake
extern motor intake1;
extern motor intake2;

// Inertial sensor
extern inertial inertial_sensor;

// Pneumatics (three-wire)
extern digital_out solenoid;

void  vexcodeInit( void );