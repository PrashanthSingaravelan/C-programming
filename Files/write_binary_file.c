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
    fp=fopen("binaryfile.bin","wb");
	if (!fp)
    {
        printf("Unable to open file!");
        return 1;
    }
    for ( i=1; i <= 10; i++)
    {
        r.x= i;
        fwrite(&r,sizeof(struct rec),1,fp);
    }
    fclose(fp);
    return 0;
}

