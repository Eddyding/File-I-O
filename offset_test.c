#include<sys/types.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


int
main(void)
{
	//stdin:0
	if( lseek(0,0,SEEK_CUR) == -1) // 判断标准输入文件能否被设置位移量.
		printf("cannot seek!\n");
	else
		printf(" seek OK!\n");
	return 0;
}
