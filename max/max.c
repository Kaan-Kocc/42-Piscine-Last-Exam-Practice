int		max(int* tab, unsigned int len)
{
    int largest;
    int i = 0;
    if (!len)
        return(0);
    largest = tab[i];
    while(i < len)
    {
        if(tab[i] > largest)
        {
            largest = tab[i];
        }
        i++;
    }
    return(largest);
}