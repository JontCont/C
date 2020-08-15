#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <termios.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define	STOP	'\n'
#define	BAUDRATE	B9600
#define	MODEMDEVICE	"/dev/ttyS1"
#define	_POSIX_SOURCE	1

int main()
{
  int	fd, c=0, res,i;
  struct termios	oldtio, newtio;
  char	buf[256];
  char	ch;
  static char	s1[20];

  printf("Start...\n");
  fd = open(MODEMDEVICE, O_RDWR|O_NOCTTY);
  if (fd < 0) {
	perror(MODEMDEVICE);
	exit(1);
  }

  printf("Open...\n");
  tcgetattr(fd, &oldtio);
  bzero(&newtio, sizeof(newtio));
  
  newtio.c_cflag = BAUDRATE|CS8|CLOCAL|CREAD;
  newtio.c_iflag = IGNPAR;
  newtio.c_oflag = 0;
  newtio.c_lflag = 0;
  newtio.c_cc[VTIME]=0;
  newtio.c_cc[VMIN]=1;

  tcflush(fd, TCIFLUSH);
  tcsetattr(fd, TCSANOW, &newtio);

  
  printf("Writing...\n");
	ch=getchar();
	s1[0]=ch;
	s1[1]=ch;
	res=write(fd, s1, 2);	  

	 
  printf("Reading...\n");
  while(1) {
 	res = read(fd, buf, 10);
	buf[res]=0;
	printf("res=%d  buf=%s\n", res, buf);
  }
  printf("Close...\n");
  close(fd);
  tcsetattr(fd, TCSANOW, &oldtio);
  return 0;
}