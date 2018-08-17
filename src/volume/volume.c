#include "volume.h"

double cube_volume(double a) {
	return a * a * ((a > 0) ? a : 0);
}

double sphere_volume(double r) {
	return (2/3.0) * (r * r * ((r > 0) ? r : 0));
}
