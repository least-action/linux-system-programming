#include <stdio.h>
#include <errno.h>

int main() {
	FILE *stream;

	stream = fopen ("sample_fopen_simple.txt", "r");
	if (!stream) {
		perror("fopen");
		printf("errno: %d\n", errno);
	}

	int c;

	c = fgetc (stream);
	if (c == EOF) {
		perror("fgetc");
		printf("errno: %d\n", errno);
	}
	else
		printf("c = %c\n", (char) c);

	return 0;
}
