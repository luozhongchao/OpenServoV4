#include <stdio.h>
#include <io.h>
#include <signal.h>
#include <stdint.h>
#include <WProgram.h>
#include "../../../libmaple/libraries/FreeRTOS/MapleFreeRTOS.h"
#include "config.h"


#ifndef _OS_OPENSERVO_H_
#define _OS_OPENSERVO_H_ 1

// Define the device type and subtype.  These values are used so that
// external TWI clients can query the type of device the servo is.
#define OPENSERVO_DEVICE_TYPE           1
// note that if you enable the rolling subtype this value is ignored.
#define OPENSERVO_DEVICE_SUBTYPE        1

// Define the software major and minor version.  These values are used
// so that external TWI clients can query the version of the software
// running on the servo.
#define SOFTWARE_VERSION_MAJOR          3
#define SOFTWARE_VERSION_MINOR          9

// The default TWI address. Change this if you want to change the TWI address of the servo
#define REG_DEFAULT_TWI_ADDR        0x10




#endif // _OS_OPENSERVO_H_
