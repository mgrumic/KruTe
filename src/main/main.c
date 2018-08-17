#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "mul.h"
#include "volume.h"
#include "operation.h"
#include "force.h"

int main(void) {
	double cube_len = 2.12;
	double sphere_r = 7.71;
	double cube_len_err = 0.0;
	double sphere_r_err = -0.2;
	double mass = 70.0;
	double acc = 1.5;
	double mass_err = -70.0;
	double acc_neg = -1.5;
	double res = 0;
	int err = 0;

	printf("Double of 3 is: %f \n", double_value(3));
	printf("Negative of 3 is: %f \n", invert(3));
	printf("==========================================\n");
	
	res = cube_volume(cube_len);
	printf("Cube volume [a: %lf] = %lf\n", cube_len, res);
	res = cube_volume(cube_len_err);
	printf("Cube volume [a: %lf] = %lf\n", cube_len_err, res);
	printf("==========================================\n");
	
	res = sphere_volume(sphere_r);
	printf("Sphere volume [r: %lf] = %lf\n", sphere_r, res);
	res = sphere_volume(sphere_r_err);
	printf("Sphere volume [a: %lf] = %lf\n", sphere_r_err, res);
	printf("==========================================\n");
	
	res = force_magnitude(mass, acc);
	printf("Force magnitude [m: %lf, a: %lf] = %lf\n", mass, acc, res);
	res = force_magnitude(mass, acc_neg);
	printf("Force magnitude [m: %lf, a: %lf] = %lf\n", mass, acc_neg, res);
	res = force_magnitude(mass_err, acc);
	printf("Force magnitude [m: %lf, a: %lf] = %lf\n", mass_err, acc, res);
	printf("==========================================\n");
	
	printf("MUL test:");
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		double res = 0.0;
		float a = ((rand() * 1.0) / RAND_MAX) * 10;
		float b = ((rand() * 1.0) / RAND_MAX) * 10;
		if (0 == mul(a, b, &res)) {
			printf("\n%lf * %lf = %lf", a, b, res);
		} else {
			err = 1;
			printf("\nError in sqrt_s function: paramn-> %lf %lf 0x%p\n", a, b, &res);
			break;
		}
	}
	
	return err;
}
