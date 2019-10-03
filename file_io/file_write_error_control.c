#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

int main() {
	const char * file_name = "./sample_write_error_control.txt";
	int fd;

	// open
	fd = open (file_name, O_WRONLY | O_CREAT, 0644);
	if (fd == -1) {
		perror("open");
		exit(0);
	}
	else
		puts("open success");

	// write
	unsigned long word = 1720;
	size_t count;
	ssize_t nr;

	count = sizeof (word);
	nr = write (fd, &word, count);
	if (nr == -1) {
		perror("write");
		// check errno
	}
	else if (nr != count)
		perror("write");
		// could be error, however errno hasn't set


	// close
	if (close(fd) == -1)
		perror("close");

	return 0;
}
