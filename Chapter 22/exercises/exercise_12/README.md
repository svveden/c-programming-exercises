### Exercise 22.12

Find the error in the following function and show how to fix it.

```c
int count_periods(const char *filename)
{
    FILE *fp;
    int n = 0;

    if ((fp = fopen(filename, "r")) != NULL) {
        while (fgetc(fp) != EOF)
            if (fgetc(fp) == '.')
                n++;
        fclose(fp);
    }
    return n;
}
```
