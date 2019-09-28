#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>
#include <stdio.h>

int main()
{

	int fd;
	const char * file_name = "./sample.txt";

	fd = creat (file_name, 0644);
	// creat == open with (O_WRONLY | O_CREAT | O_TRUNC)

	if (fd == -1)
		puts("create error");
	else
		puts("create success");


	if (close(fd) == -1)
		perror ("close");

	return 0;
}
