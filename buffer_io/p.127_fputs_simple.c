#include <stdio.h>
#include <errno.h>

int main() {
	FILE *stream;

	stream = fopen ("sample_fopen_write.txt", "w+");
	if (!stream) {
		perror("fopen");
		printf("errno: %d\n", errno);
	}

    const char str[5] = {'a', 'b', 'c', 'd', 'e'};
    printf("%s\n", str);

    if (fputs (str, stream) == EOF) {
        perror("fputc");
		printf("errno: %d\n", errno);
    }

	if (fclose(stream) != 0) {
		perror("fclose");
		printf("errno: %d\n", errno);
	}
	return 0;
}
