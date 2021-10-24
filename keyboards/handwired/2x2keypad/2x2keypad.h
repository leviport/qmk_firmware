#pragma once

#include "quantum.h"

#define LAYOUT( \
               K00, K01,                        \
               K10, K11                         \
) { \
        { K00,   K01 },                         \
        { K10,   K11 }                          \
}

void turn_off_leds(void);
void turn_on_led(pin_t pin);
