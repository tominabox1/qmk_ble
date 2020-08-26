#ifndef MASTER_CONFIG_H_
#define MASTER_CONFIG_H_

#include "custom_board.h"

#define ENABLE_STARTUP_ADV_NOLIST
#define IS_LEFT_HAND  true

#define RGB_DI_PIN ((1 << 6) | 15)
#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 21
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif


#endif /* MASTER_CONFIG_H_ */
