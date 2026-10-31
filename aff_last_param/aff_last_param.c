
#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int f;

    f = 0;
    i = 1;
    if(argc >= 1)
    {
        while(argv[i])
        {
            i++;
        }
        i--;
        while(argv[i][f])
        {
            write(1, &argv[i][f],1);
            f++;
        }
    }
    write(1,"\n",1);
}