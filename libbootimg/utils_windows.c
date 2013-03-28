#include <string.h>
#include <utils.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <utils_windows.h>
void mkdir_and_parents(const unsigned char *path,unsigned mode)
{
        char opath[256];
        char *p;
        size_t len;

        strncpy(opath,(char*) path, sizeof(opath));
        len = strlen(opath);
        if(opath[len - 1] == '/')
                opath[len - 1] = '\0';
        for(p = opath; *p; p++)
                if(*p == '/') {
                        *p = '\0';
                        if(access(opath, F_OK))
                                mkdir(opath);
                        *p = '/';
                }
        if(access(opath, F_OK))         /* if path is not terminated with / */
                mkdir(opath);
}
int symlink_os(const unsigned char *source, unsigned size,const char *path){
    
	FILE *output_file_fp = fopen(path, "wb");
    if (output_file_fp != NULL)
    {
		fwrite("LNK:",4,1,output_file_fp);
        fwrite(source,size,1,output_file_fp);
        fwrite("\0",1,1,output_file_fp);
        fclose(output_file_fp);
    }
    return 0;
}
