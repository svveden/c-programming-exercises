/* 02/27/2022 */
/* Struct declarations */

struct complex{
	double real;
	double imaginary;
};

struct complex c1,c2,c3;

struct complex make_complex(double real, double imaginary, struct complex a){
	a.real = real;
	a.imaginary = imaginary;
	return a;
}

struct complex add_complex(struct complex a, struct complex b, struct complex c){
	c.real = a.real + b.real;
	c.imaginary = a.imaginary + b.imaginary;
	return c;
}