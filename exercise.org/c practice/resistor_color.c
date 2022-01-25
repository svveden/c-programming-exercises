#include "resistor_color.h"

static resistor_band_t bands[] = {BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE};

resistor_band_t color_code(resistor_band_t code){
    return bands[code];
}
resistor_band_t* colors(){
    return bands;
}
