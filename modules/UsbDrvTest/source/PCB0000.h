/*!
 * \file
 * \brief PCB0000 pin assignment file
 * \author Dawid Babula
 * \email dbabula@adventurous.pl
 *
 * \par Copyright (C) Dawid Babula, 2018
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#ifndef PCB0000_H
#define PCB0000_H

/*!
 *
 * \addtogroup hardware
 * \ingroup MiniThermo
 * \brief Configures pin assignment for PCB0000
 */

#define WIRE_DATA_PORT          (GPIO_PORTC)
#define WIRE_DATA_PIN           (5U)

#define DISPLAY0_PORT           (GPIO_PORTC)
#define DISPLAY0_PIN            (4U)
#define DISPLAY1_PORT           (GPIO_PORTD)
#define DISPLAY1_PIN            (2U)
#define DISPLAY2_PORT           (GPIO_PORTD)
#define DISPLAY2_PIN            (3U)
#define DISPLAY3_PORT           (GPIO_PORTD)
#define DISPLAY3_PIN            (4U)

#define SEGMENTA_PORT           (GPIO_PORTD)
#define SEGMENTA_PIN            (5U)
#define SEGMENTB_PORT           (GPIO_PORTD)
#define SEGMENTB_PIN            (6U)
#define SEGMENTC_PORT           (GPIO_PORTB)
#define SEGMENTC_PIN            (4U)
#define SEGMENTD_PORT           (GPIO_PORTB)
#define SEGMENTD_PIN            (3U)
#define SEGMENTE_PORT           (GPIO_PORTB)
#define SEGMENTE_PIN            (1U)
#define SEGMENTF_PORT           (GPIO_PORTD)
#define SEGMENTF_PIN            (7U)
#define SEGMENTG_PORT           (GPIO_PORTB)
#define SEGMENTG_PIN            (0U)
#define SEGMENTDP_PORT          (GPIO_PORTB)
#define SEGMENTDP_PIN           (2U)

/*@{*/

/*@}*/
#endif /* end of PCB0000_H */
