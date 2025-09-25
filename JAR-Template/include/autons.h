#pragma once
#include "JAR-Template/drive.h"

class Drive;

extern Drive chassis;

void default_constants();

void drive_test();
void turn_test();
void swing_test();
void full_test();
void odom_test();
void tank_odom_test();
void holonomic_odom_test();

// Intake helpers used by autons and usercontrol
void intake_forward(int power=100);
void intake1_forward_only(int power=100);
void intake_reverse(int power=100);
void intake_stop();