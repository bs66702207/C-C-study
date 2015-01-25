#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int copyfile(char *filename1, char *filename2)
{
	int ret = 0;
	FILE *fp1 = NULL;
	FILE *fp2 = NULL;
	int plainlen;
	unsigned char plain[4096];
	int writtenlen; 

	fp1 = fopen(filename1, "rb");
	if (fp1 == NULL)
	{
		ret = -1;
		printf("fopen: %s \n", filename1);
		goto End;
	}


	fp2 = fopen(filename2, "wb");
	if (fp2 == NULL)
	{
		ret = -2;
		printf("fopen: %s \n", filename2);
		goto End;
	}


	while (!feof(fp1))
	{
		plainlen = fread(plain , 1, 4096, fp1);
		if (feof(fp1))
		{
			break;
		}

		writtenlen = fwrite(plain, 1,  plainlen, fp2);
		if (writtenlen != plainlen)
		{
			ret = -3;
			printf("判断释放IO错误\n");
			goto End;
		}
	}

	writtenlen = fwrite(plain, 1,  plainlen, fp2);
	//判断释放IO错误
	if (writtenlen != plainlen)
	{
		ret = -4;
		printf("判断释放IO错误\n");
		goto End;
	}


End:
	if (fp1 != NULL)
	{
		fclose(fp1);
	}
	if (fp2 != NULL)
	{
		fclose(fp2);
	}
	return 0;
}

int main()
{
	copyfile("1.txt", "2.txt");
	return 0;
}
