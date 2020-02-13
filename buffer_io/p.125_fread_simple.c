#include <stdio.h>
#include <errno.h>

int main() {
	FILE *stream;

	stream = fopen ("sample_fopen_simple.txt", "r");
	if (!stream) {
		perror("fopen");
		printf("errno: %d\n", errno);
	}

	char buf[64];
	size_t nr;
	nr = fread (buf, sizeof(buf)-1, 1, stream);

	if (nr == 0) {
		perror("fread");
		printf("errno: %d\n", errno);
	} else {
		printf("%s\n", buf);
	}

	if (fclose(stream) != 0) {
		perror("fclose");
		printf("errno: %d\n", errno);
	}
	return 0;
}
