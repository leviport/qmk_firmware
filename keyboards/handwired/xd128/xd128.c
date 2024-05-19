/* Copyright 2020
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "xd128.h"

// #define XD75_CAPSLOCK_LED 2  // B2
// #define XD75_GP103_LED 4  // F4
// #define XD75_KEYCAPS_LED 5  // F5
// #define XD75_GP100_LED 7  // F7

void matrix_init_kb(void) {
	// put your keyboard start-up code here
	// runs once when the firmware starts up

  //	capslock_led_init();
  //	gp100_led_init();
  //	gp103_led_init();
  //	keycaps_led_init();

	matrix_init_user();
}

void matrix_scan_kb(void) {
	// put your looping keyboard code here
	// runs every cycle (a lot)

	matrix_scan_user();
}

