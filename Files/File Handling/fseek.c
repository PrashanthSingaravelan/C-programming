#include<stdio.h>
void main()
{
     FILE *fp;
     char ch;
     int n;

     fp=fopen("file.txt", "r");
     if(fp==NULL)  {     printf("file cannot be opened");   }
     else
     {
        printf("Enter value of n  to read last n characters : ");
        scanf("%d",&n);
        fseek(fp,n,1);
        while(     (ch=fgetc(fp))!=EOF)      {   printf("%c",ch);    }
      }

      printf("\nRewinding the pointers\n");
      rewind(fp);

      while(    (ch=fgetc(fp))!=EOF )       {     printf("%c",ch);      }
      fclose(fp);
}
