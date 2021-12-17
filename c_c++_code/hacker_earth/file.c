#include <stdio.h>
int main()
{
    char a[200];
    char b[200];
    char c[200];
    char line[200];
    char bug[100];
    int s;
    FILE *fp;
    printf("Press 1 to add\nPress 2 to show\n");
    scanf("%d", &s);
    if (s == 1)
        goto level1;
    else
        goto level2;
level1:
    gets(bug);
    //scanf("% [^\n]s" , &a);
    printf("Name:");
    //fflush(stdin);
    scanf("% [^\n]s", &a);
    fgets(a, 200, stdin);
    printf("Address: ");
    scanf("% [^\n]s", &b);
    fgets(b, 200, stdin);

    printf("Comment: ");
    scanf("% [^\n]s", &c);
    fgets(c, 200, stdin);

    fp = fopen("practice2.txt", "a+");

    fprintf(fp, "\n %s %s %s", a, b, c);
    fclose(fp);

    printf("\n1 for add\n2 for show\n");
    scanf("%d", &s);
    if (s == 1)
        goto level1;
    else
        goto level2;

level2:
    fp = fopen("practice2.txt", "r");
    if (fp == 0)
        printf("\nEmpty\n");
    else
    {
        //while(!feof(fp))
        while (fgets(line, sizeof(line), fp))
        {
            //fscanf(fp, "\n %s \t %s \t %s \t",&a,&b,&c);
            printf("%s", line);
        }
    }
    fclose(fp);
    return 0;
}