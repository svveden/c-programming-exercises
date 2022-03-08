int count_ones(unsigned char ch)
{
    if (ch == 0)
        return 0;
    return count_ones(ch & ch - 1) + 1;
}