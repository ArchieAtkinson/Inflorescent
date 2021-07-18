#include "inflorescent.h"

__attribute__ ((weak))
void matrix_init_kb(void) {
	// Turn status LED on
	#ifdef __AVR__
	setPinOutput(E6);
	writePinHigh(E6);
	#endif

	matrix_init_user();
}

