#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(int  argc, char*  argv[])
{ 
  int sz;
  char data [100];
  int source = open(argv[1], O_RDONLY | O_CREAT);
  int copy = open(argv[2], O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
  if (source < 0) 
  {
     return 0;
  }
  read(source, data, 20);
  write(copy, data, 20);
  close(source);
  close(copy);
  return 0;
} 

