#include <stdio.h>
#include <errno.h>

int main() {
	printf("EPERM:   %d\n", EPERM);
	printf("ENOENT:  %d\n", ENOENT);
	printf("ESRCH:   %d\n", ESRCH);
	printf("EINTR:   %d\n", EINTR);
	printf("EIO:     %d\n", EIO);
	printf("ENXIO:   %d\n", ENXIO);
	printf("E2BIG:   %d\n", E2BIG);
	printf("ENOEXEC: %d\n", ENOEXEC);
	printf("EBADF:   %d\n", EBADF);
	printf("ECHILD:  %d\n", ECHILD);
	printf("EAGAIN:  %d\n", EAGAIN);
	printf("ENOMEM:  %d\n", ENOMEM);
	printf("EACCES:  %d\n", EACCES);
	printf("EFAULT:  %d\n", EFAULT);
	printf("EBUSY:   %d\n", EBUSY);
	printf("EEXIST:  %d\n", EEXIST);
	printf("EXDEV:   %d\n", EXDEV);
	printf("ENODEV:  %d\n", ENODEV);
	printf("ENOTDIR: %d\n", ENOTDIR);
	printf("EISDIR:  %d\n", EISDIR);
	printf("EINVAL:  %d\n", EINVAL);
	printf("ENFILE:  %d\n", ENFILE);
	printf("EMFILE:  %d\n", EMFILE);
	printf("ENOTTY:  %d\n", ENOTTY);
	printf("ETXTBSY: %d\n", ETXTBSY);
	printf("EFBIG:   %d\n", EFBIG);
	printf("ENOSPC:  %d\n", ENOSPC);
	printf("ESPIPE:  %d\n", ESPIPE);
	printf("EROFS:   %d\n", EROFS);
	printf("EMLINK:  %d\n", EMLINK);
	printf("EPIPE:   %d\n", EPIPE);
	printf("EDOM:    %d\n", EDOM);
	printf("ERANGE:  %d\n", ERANGE);

	return 0;
}
