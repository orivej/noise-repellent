/*
noise-repellent -- Noise Reduction LV2

Copyright 2016 Luciano Dato <lucianodato@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/
*/

#ifndef STFT_WINDOW_H
#define STFT_WINDOW_H

#include <stdbool.h>
#include <stdint.h>

typedef struct StftWindows StftWindows;

StftWindows *stft_window_initialize(uint32_t window_size);
void stft_window_free(StftWindows *self);
float input_output_window_sum(StftWindows *self);
const float *get_input_window(StftWindows *self);
const float *get_output_window(StftWindows *self);

#endif