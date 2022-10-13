#ifndef DEFINES1_H
#define DEFINES_1H

struct {
    uint8_t left_i2c : 1;
    uint8_t left_angle : 1;
    uint8_t right_i2c : 1;
    uint8_t right_angle : 1;
} fault_status;

#endif
