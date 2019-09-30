#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

#include <stdio.h>

#include <errno.h>

int main()
{
	// open
	const char * file_name = "./sample_read.txt";
	int fd;

	fd = open (file_name, O_RDONLY | O_NONBLOCK);
	if (fd == -1)
		perror("open");
	else
		puts("open success");


	// read
	const unsigned int BUFSIZE = 10;
	char buf[BUFSIZE];
	ssize_t nr;

	nr = read (fd, buf, BUFSIZE);
	if (errno == EINTR)
		// interupt
		;
	if (errno == EAGAIN)
		// try later
		;
	else
		// error
		;



	// close
	if (close(fd) == -1)
		perror("close");


	return 0;
}
