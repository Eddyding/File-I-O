#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


#define FLAGS O_WRONLY | O_CREAT | O_TRUNC
// flags:只写，文件不存在则创建，文件长度截断为0
#define MODE S_IRWXU | S_IRGRP |S_IXGRP | S_IROTH | S_IXOTH
// 创建文件的权限：用户读，写，执行；组读,执行；其他用户读，执行；


int
main(void)
{
	const char *pathname;// 绝对路径名 或者 相对路径名
	int fd;

	char pn[30];
	
// close(1); 直接关闭标准输出。
// close(stdout);反而没有用。猜测可能是stdout没有初始化。

	printf("Input the pathname(<30 characters):");
	
	//close(stdin);
	close(0); // 直接使用0,1,2

	gets(pn);

	pathname = pn;

	if(fd = open(pathname,FLAGS,MODE) == -1)
	{
		printf("open file error!\n");
		exit(1);
	}	
	printf("open file OK!\n");
	printf("fd = %d\n",fd);
	return 0;
}


