#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    int fd;
    ssize_t nr;
    if(argc != 3)
    {
       printf("incorrect number of argument passed\n");
       return 1;
    }

    fd = open(argv[1], O_WRONLY);
    if(fd == -1)
    {
        printf("file does not exist \n");
        return 1;
    }

    nr = write(fd, argv[2], strlen(argv[2]));
    if(nr == -1)
    {
        printf(" write operation failed \n");
        return 1;
    }
    else
    {
        printf(" write operation passed \n");
        return 0;
    }


   
}