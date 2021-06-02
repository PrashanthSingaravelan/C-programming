#include<stdio.h>
int main(int argc, char *argv[], char *envp[])
{
        for (int i = 0; envp[i] != NULL; i++)
                    {   printf("\n%s", envp[i]);       }
        return 0;
}

