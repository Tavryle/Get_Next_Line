int     main(int argc,char **argv)
{
    int fd;
    char *line;

    line = NULL;
    fd = open(argv[1],O_RDONLY);
    if(argc == 2)
    {
        while(get_next_line(fd, &line) > 0)
        {
            puts(line);
            if(line)
                ft_strdel(line);
        }
    }
    return (0);
}