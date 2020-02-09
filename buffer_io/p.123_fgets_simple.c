#include <stdio.h>
#include <errno.h>

#define LINE_MAX 100

int main() {
	FILE *stream;

	stream = fopen ("sample_fopen_simple.txt", "r");
	if (!stream) {
		perror("fopen");
		printf("errno: %d\n", errno);
	}


	char buf[LINE_MAX];
	if (!fgets (buf, LINE_MAX, stream)) {
		perror("fgets");
		printf("errno: %d\n", errno);
	}
	else
		printf("s = %s", buf);

	return 0;
}
