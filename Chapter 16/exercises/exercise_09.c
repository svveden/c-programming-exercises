/* 02/27/2022 */
/* Struct for colors. */

struct color{
	int red;
	int green;
	int blue;
};

struct color make_color(int red, int green, int blue){
	struct color f;
	if(green < 0){
		f.green = 0;
	} else if(red < 0){
		f.red = 0;
	} else if(blue < 0){
		f.blue = 0;
	} else if(green > 255){
		f.green = 255;
	} else if(blue > 255){
		f.blue = 255;
	} else if(red > 255){
		f.red = 255;
	}
	else{
		f.red = red;
		f.green = green;
		f.blue = blue;
	}
	return f;
}

int getRed(struct color c){
	return c.red;
}

bool equal_color(struct color color1, struct color color2){
	if(color1.red == color2.red && color1.green == color2.green && color1.blue == color2.blue){
		return true;
	} return false;
}

struct color brighter(struct color c){
	struct color bright;
	if(c.red == 0 && c.green == 0 && c.blue == 0){
		bright.red = 3;
		bright.green = 3;
		bright.blue = 3;
		return bright;
	}
	if(c.red > 0 && c.red < 3){
		c.red = 3;
	} else if(c.green > 0 && c.green < 3){
		c.green = 3;
	} else if(c.blue > 0 && c.blue < 3){
		c.blue = 3;
	}
	bright.red = (*int)c.red/0.7;
	bright.green = (*int)c.green/0.7;
	bright.blue = (*int)c.blue/0.7;
	if(bright.red > 255){
		bright.red = 255;
	} else if(bright.green > 255){
		bright.green = 255;
	} else if(bright.blue > 255){
		bright.blue = 255;
	}
	return bright;
}

struct color darker(struct color c){
	struct color dark;
	dark.red = (*int)c.red*0.7;
	dark.green = (*int)c.green*0.7;
	dark.blue = (*int)c.blue*0.7;
	return dark;
}



