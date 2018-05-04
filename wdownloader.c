#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define CMD_HEADER "C:\\Users\\Public\\wget.exe -c -O"
#define CMD_MAX_LEN 2048
#define URL_MAX_LEN 1536
#define FILE_MAX_LEN (CMD_MAX_LEN - sizeof(CMD_HEADER) - URL_MAX_LEN)

int main(int argc, const char *argv[])
{
	char cmd[CMD_MAX_LEN];
	char url[URL_MAX_LEN];
	char fname[FILE_MAX_LEN];

	do {
		memset(url, 0, URL_MAX_LEN);
		printf("url: ");
		scanf("%s", url);
		fflush(stdout);
	} while (strncmp(url, "http://", 7) != 0 && strncmp(url, "https://", 8) != 0);
	
	do {
		memset(fname, 0, FILE_MAX_LEN);
		printf("file name: ");
		scanf("%s", fname);
		fflush(stdout);
	} while (!strchr(fname, '.'));

	memset(cmd, 0, CMD_MAX_LEN);
	system(cmd);
	system("pause");

	return 0;
}
