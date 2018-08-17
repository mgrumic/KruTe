#include "force.h"

double force_magnitude(double m, double a) {
	return ((m > 0) ? m : 0) * a;
}
