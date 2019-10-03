#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>
#include <stdio.h>
#include <errno.h>

#include <stdlib.h>
#include <string.h>

int main() {
	const char * file_name = "sample_write_sync.txt";
	int fd;

	// open
	fd = open (file_name, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd == -1) {
		perror("open");
		printf("errno: %d\n", errno);
		exit(0);
	}
	else
		puts("open success");

	// write
	ssize_t ret, nr;
	const char * buf = "hello";
	size_t len = strlen(buf);

	while (len != 0 && (ret = write (fd, buf, len)) != 0) {
		if (ret == -1) {
			if (errno == EINTR)
				continue;
			perror("write");
			break;
		}

		len -= ret;
		buf += ret;
	}

	if (fsync (fd) == -1) {
		if (errno == EINVAL) {
			if (fdatasync (fd) == -1)
				perror("fdatasync");
		} else
			perror("fsync");
	}

	// close
	if (close(fd) == -1)
		perror("close");
	else
		puts("close success");

	return 0;
}
