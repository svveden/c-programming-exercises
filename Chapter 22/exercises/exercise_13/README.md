### Exercise 22.13

Write the following function:

```c
int line_length(const char *filename, int n);
```

The function should return the length of line `n` in the text file whose name is
`filename` (assuming that the first line in the file is line 1). If the line
doesn't exist, the function should return 0.
