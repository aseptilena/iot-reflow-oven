#ifndef _OVEN_CONTROL_H_
#define _OVEN_CONTROL_H_

const PROGMEM uint8_t awreflow::OvenControl::LookupTable[99]={
// 0% isn't required (oven is fully off)
6, 11, 13, 14, 16, 17, 18, 19, 21, 22, 23, 23, 24, 26, 26, 27,
28, 29, 29, 31, 31, 32, 33, 33, 34, 35, 36, 36, 37, 38, 38, 39,
39, 41, 41, 42, 42, 43, 43, 44, 45, 46, 46, 47, 47, 48, 49, 49,
50, 51, 51, 52, 53, 53, 54, 54, 55, 56, 57, 57, 58, 58, 59, 59,
61, 61, 62, 62, 63, 64, 64, 65, 66, 67, 67, 68, 69, 69, 71, 71,
72, 73, 74, 74, 76, 77, 77, 78, 79, 81, 82, 83, 84, 86, 87, 89,
91, 94
// 100% isn't required (oven fully on)
};

#endif