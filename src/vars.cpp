#include "vars.h"

const uint16_t temp_minC = 100; // Minimum temperature the controller can check accurately
const uint16_t temp_maxC = 600; // Maximum possible temperature
const uint16_t temp_ambC = 25; // Average ambient temperature
const uint16_t temp_max = 850; // Maximum possible temperature in internal units
const uint16_t temp_tip[3] = {200, 400, 600}; // Temperature reference points for calibration
const uint16_t max_fan_speed = 1999; // Maximum Hot Air Gun Fan speed
const uint16_t min_fan_speed	= 600;
const uint16_t tune_fan_speed	= 1200; // Hot Air Gun speed in tune mode
