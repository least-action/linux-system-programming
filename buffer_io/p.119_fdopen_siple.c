#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>
#include <stdlib.h>

#include <stdio.h>

int main() {
	FILE *stream;
	int fd;

	fd = open ("sample_fdopen_simple.txt", O_RDONLY);
	if (fd == -1) {
		perror("open");
		exit(0);
	}
	else
		puts("open success");

	stream = fdopen (fd, "r");
	if (!stream) {
		perror("fdopen");
		exit(0);
	}

/*
	if (close(fd) == -1)
		perror("close");
*/
	return 0;
}
