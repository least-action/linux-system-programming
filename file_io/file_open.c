#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main()
{

	int fd;
	const char * file_name = "./sample_open.txt";

	fd = open (file_name, O_RDONLY);

	if (fd == -1)
		puts("open error");
	else
		puts("open success");


	if (close(fd) == -1)
		perror ("close");

	return 0;
}
