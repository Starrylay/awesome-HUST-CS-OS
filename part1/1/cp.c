#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
int main(int argc,char* argv[]){
	extern int errno;
	int fread,fwrite;
	char bufs[1024];
	int lenr,lenw;
	//argc表示参数个数，默认为1
	//argv[0]为程序位置
	if(argc != 3)//传入参数数量不等于3
	{
		printf("传入参数数量有误\n");
	}
	else
	{
		fread = open(argv[1],O_RDONLY);
		//argv[1]为source文件
		if(fread == -1){
			printf("source文件打开失败！\n");
			printf("失败原因是%s",strerror(errno));
		}

		else{//打开source文件了
			fwrite = open(argv[2],O_WRONLY|O_CREAT,0777);
			if(fwrite==-1){
				printf("target文件打开或创建失败！\n");
				printf("失败原因是%s",strerror(errno));
			}
			
			else{//打开target文件了
					while( (lenr = read(fread,bufs,1024)) > 0){
						if((lenw = write(fwrite,bufs,lenr))<0)break;
					}	
					if(lenr<0){
						printf("读文件失败！\n");
						printf("失败原因是%s",strerror(errno));
					}
					else if(lenw<0){
						printf("写文件失败！\n");
						printf("失败原因是%s",strerror(errno));
					}
					else printf("copy完成！\n");
			}
		}
	}
	close(fread);
	close(fwrite);
	return 0;
}
