/**
 * Copyright (c) 2022 Innodisk crop.
 * 
 * This software is released under the MIT License.
 * https://opensource.org/licenses/MIT
 */

/**
 * Reference from https://github.com/richardcochran/linuxptp/blob/v3.1.1/phc.c
 * Trying to get the phc clock from xlnx TSN IP
*/

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/syscall.h>
#include <sys/timex.h>
#include <linux/ptp_clock.h>
#include <linux/version.h>

#define FD_TO_CLOCKID(fd)	((clockid_t) ((((unsigned int) ~fd) << 3) | 3))

int main(int argc, char *argv[])
{
	clockid_t clkid;
	struct timespec ts;
	int fd;

    fd = open(argv[1], O_RDWR);

    clkid = FD_TO_CLOCKID(fd);

	if (clock_gettime(clkid, &ts)) {
		close(fd);
        printf("CLOCK_INVALID from %s\n",argv[1]);
		return -1;
	}
    else
    {
		printf("tv_sec : %ld\n",ts.tv_sec);
		printf("tv_nsec : %ld\n",ts.tv_nsec);
    }

	close(fd);
    return 0;
}
