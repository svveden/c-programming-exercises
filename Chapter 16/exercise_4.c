/* 02/27/2022 */
/* Struct declarations */

typedef struct {
	double real;
	double imaginary;
}Complex;

Complex c1,c2,c3;

Complex make_complex(double real, double imaginary){
	Complex a;
	a.real = real;
	a.imaginary = imaginary;
	return a;
}

Complex add_complex(Complex a, Complex b){
	Complex c;
	c.real = a.real + b.real;
	c.imaginary = a.imaginary + b.imaginary;
	return c;
}