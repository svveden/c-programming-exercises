/* 02/27/2022 */
/* Struct declarations. */

struct color{
	int red;
	int green;
	int blue;
};

const struct color MAGENTA{255, 0, 255};

const struct color MAGENTA{.red = 255, .blue = 255};