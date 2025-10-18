#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#define BUF_SIZE 1024

static void close_or_die(int fd)
{
if (close(fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

int main(int ac, char **av)
{
int fd_from, fd_to;
ssize_t r, w;
char buf[BUF_SIZE];

if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
exit(97);
}
fd_from = open(av[1], O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
exit(98);
}
fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
close_or_die(fd_from);
exit(99);
}
while ((r = read(fd_from, buf, BUF_SIZE)) > 0)
{
ssize_t total = 0;
while (total < r)
{
w = write(fd_to, buf + total, r - total);
if (w == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
close_or_die(fd_from);
close_or_die(fd_to);
exit(99);
}
total += w;
}
}
if (r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
close_or_die(fd_from);
close_or_die(fd_to);
exit(98);
}
close_or_die(fd_from);
close_or_die(fd_to);
return (0);
}
