#include <stdio.h>
#include <errno.h>

int main() {
	FILE *stream;

	stream = fopen ("sample_fopen_write.txt", "w+");
	if (!stream) {
		perror("fopen");
		printf("errno: %d\n", errno);
	}

    if (fputc ('p', stream) == EOF) {
        perror("fputc");
		printf("errno: %d\n", errno);
    }

	if (fclose(stream) != 0) {
		perror("fclose");
		printf("errno: %d\n", errno);
	}
	return 0;
}
