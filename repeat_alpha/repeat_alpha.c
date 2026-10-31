
#include <unistd.h>

int main(int argc,char **argv)
{
    int i = 0;
    int turn;
    if(argc == 2)
    {
        while(argv[1][i])
        {   
            turn = 1;
            if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                turn = argv[1][i] - 64;
            else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                turn = argv[1][i] - 96;

            while(turn >=1)
            {
                write(1, &argv[1][i],1); 
                turn--;
            }
            i++;
        }
    }
    write(1,"\n",1);
}
