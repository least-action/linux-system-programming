/* ---------------------------------------------------------------------- */
#include <stdio.h>

void perror (const char *str);
/* ---------------------------------------------------------------------- */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int open (const char *name, int flags);
int open (const char *name, int flags, mode_t mode);
/* ---------------------------------------------------------------------- */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int creat (const char *name, mode_t mode);
/* ---------------------------------------------------------------------- */
#include <unistd.h>

ssize_t read (int fd, void *buf, size_t len);
/* ---------------------------------------------------------------------- */
#include <unistd.h>

ssize_t write (int fd, const void *buf, size_t count);
/* ---------------------------------------------------------------------- */
#include <unistd.h>

int fsync (int fd);         // sync data + metadata
int fdatasync (int fd);     // sync only data
/* ---------------------------------------------------------------------- */
#include <unistd.h>

void sync (void);           // always succeed
/* ---------------------------------------------------------------------- */
#include <unistd.h>

int close (int fd);
/* ---------------------------------------------------------------------- */
#include <sys/types.h>
#include <unistd.h>

off_t lseek (int fd, off_t pos, int origin);
/* ---------------------------------------------------------------------- */
#define _XOPEN_SOURCE 500

#include <unistd.h>

ssize_t pread (int fd, void *buf, size_t count, off_t pos);
/* ---------------------------------------------------------------------- */
#define _XOPEN_SOURCE 500

#include <unistd.h>

ssize_t pwrite (int fd, const void *buf, size_t count, off_t pos);
/* ---------------------------------------------------------------------- */
/* ---------------------------------------------------------------------- */
