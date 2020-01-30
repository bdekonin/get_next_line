# Get_next_line - @ Codam Coding College
Function that will recieve an File Descriptor and will read line by line.
Once a newline has been found, it will copy everything from the buf into the line.
It will use an function to move everything after a '\n' to the front (including the '\0').


#### How do I use it?
This has been one of the few projects where I did not need to use an Makefile.
If you compile your project with the `get_next_line.c` & `get_next_line_utils.c` and also include `get_next_line.h` in your project,
you will be able to use these functions. I will include an easy to read main so you can see how it has been called.

```
int main()
{
  int fd;
  int ret;
  int *line;
  
  fd = open("textfile.txt", O_RDONLY);
  ret = 1;
  while (ret > 0)
  {
    get_next_line(fd, &line);
    printf("ret = [%i]\t[%s]", ret, line);
    free(line);
  }
  return (ret);
}
```
