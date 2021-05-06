#include<stdio.h>
#include<dirent.h>
//#include<type.h>

void do_ls(char []);


int main(){

	char namedir [] = "..";
	do_ls(namedir);

	struct dirent directoryname;
	directoryname.d_name;

	printf("dir name: %s\n", directoryname.d_name);

	return 0;
}

void do_ls(char dirname[])
{
	DIR *dirp = opendir(dirname);
	struct dirent *direntp;

	while((direntp = readdir(dirp)) != NULL)
		printf("%s\n", direntp->d_name);

	closedir(dirp);

//second opening
printf("\n\n");

DIR *dirp2 = opendir(dirname);
struct dirent *direntp2 = readdir(dirp2);

printf("%s\n",direntp2->d_name);
closedir(dirp2);

}
