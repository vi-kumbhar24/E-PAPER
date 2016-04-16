// Copyright 2013-2015 Pervasive Displays, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at:
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
// express or implied.  See the License for the specific language
// governing permissions and limitations under the License.


#if !defined(EPD_IO_H)
#define EPD_IO_H 1

#define panel_on_pin  15
#define border_pin    18
#define discharge_pin 19
#define pwm_pin       20
#define reset_pin     21
#define busy_pin      16

#define SPI_DEVICE    "/dev/spidev1.0"
#define SPI_BPS       24000000

#endif
