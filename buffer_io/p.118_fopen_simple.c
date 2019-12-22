#include <stdio.h>
#include <errno.h>

int main() {
	FILE *stream;

	stream = fopen ("sample_fopen_simple1.txt", "r");
	if (!stream) {
		perror("fopen");
		printf("errno: %d\n", errno);
	}

	return 0;
}
