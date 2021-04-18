#include<stdio.h>
struct rec
{
	int x,y,z;
};
int main()
{
	int c;
	FILE *fp;
	struct rec r;
    fp=fopen("binaryfile.bin","rb");
	if (!fp)
    {
        printf("Unable to open file!");
        return 1;
    }
    for ( c=1; c <= 10; c++)
    {
         fread(&r,sizeof(struct rec),1,fp);
        printf("%d\n",r.x);
    }
    fclose(fp);
    return 0;
}
