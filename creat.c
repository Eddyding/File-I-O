#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>


int 
main()
{
    int iret = 20 ;
	iret  = creat("./a.txt",S_IRWXU);
	printf("iret is %d\n",iret);
	return  0;
}
