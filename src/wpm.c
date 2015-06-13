#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "install.h"
#include "list.h"

void help_option()
{
	printf("wpm (Whale package manger)\nusage: \n\tinstall\n\tlist\n");
}

int process_command_line_args(int argc, char* argv[])
{
	if(argc < 2)
		return 1;

	if(strcmp(argv[1], "install")==0)
	{
		if(argc < 4)
			return 1;

		wpm_install(argv[2],argv[3]);
	}
	else if(strcmp(argv[1], "list")==0)
	{
		wpm_list();
	}

	return 0;
}

int main(int argc, char* argv[])
{
	if(process_command_line_args(argc, argv))
	{
		help_option();
	}

	return 0; 
}