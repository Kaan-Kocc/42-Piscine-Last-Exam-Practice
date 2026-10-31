
#include <unistd.h>
void    yaz(char *str)
{
    int a = 0;
    while (str[a])
    {
        write(1,&str[a],1);
        a++;
    }
}
int control(char *a,char *b)
{
    int i = 0;
    int j = 0;
    while(a[i] && b[j])
    {
        if(a[i] == b[j])
        {
            i++;
        }
        j++;
    }
    if (a[i] == '\0')
    {
        return(1);
    }
    return(0);
}

int main(int argc,char **argv)
{
    if(argc == 3)
    {
        if (control(argv[1], argv[2]))
			yaz(argv[1]);
    }
    write(1,"\n",1);
}