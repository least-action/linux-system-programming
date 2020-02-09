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


	char str[100];
	char *s;
	int c;
	int n = 5;

	s = str;
	while (--n > 0 && (c = fgetc (stream)) != EOF)
		*s++ = c;

	*s = '\0';
	printf("s: %s\n", str);

	return 0;
}
