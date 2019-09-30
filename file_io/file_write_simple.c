#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

#include <stdio.h>
#include <stdlib.h>

#include <string.h>

int main() {
	const char * file_name = "./sample_write.txt";
	int fd;

	// open
	fd = open (file_name, O_WRONLY);

	if (fd == -1) {
		perror("open");
		exit(0);
	}
	else
		puts("open success");

	// write
	const char * buf = "My shipt is solid!";
	ssize_t nr;

	nr = write (fd, buf, strlen (buf));
	if (nr == -1)
		perror("write");
	else
		puts("write success");

	// close
	if (close(fd) == -1)
		perror("close");


	return 0;
}
