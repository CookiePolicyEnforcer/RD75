/*
 * Copyright 2022
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

#pragma once

#include <stdint.h>
#include "report.h"

/**
 * \brief Initialize the Bluetooth system.
 */
void bluetooth_init(void);

/**
 * \brief Perform housekeeping tasks.
 */
void bluetooth_task(void);

/**
 * \brief Send a keyboard report.
 *
 * \param report The keyboard report to send.
 */
void bluetooth_send_keyboard(report_keyboard_t *report);
void User_bluetooth_send_keyboard(uint8_t *report, uint32_t len);
/**
 * \brief Send a mouse report.
 *
 * \param report The mouse report to send.
 */
void bluetooth_send_mouse(report_mouse_t *report);

/**
 * \brief Send a consumer usage.
 *
 * \param usage The consumer usage to send.
 */
void bluetooth_send_consumer(uint16_t usage);
