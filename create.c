#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>


int main()
{
	char fname[30];
	int fd =0;
	

	printf("Enter file name to create\n");
	scanf("%s",fname);

	fd = creat(fname,0777);

	if(fd != -1)
	{
		printf("File succesfully created\n");
	}

	return 0;

}