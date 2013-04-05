#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <string.h>	
#include <utils.h>
#include <actions.h>

int get_action(int argc,char ** argv){

	fprintf(stderr,"argv[0]=%s\n",argv[0]);
	if(!strlcmp(argv[0],"extract") || !strlcmp(argv[0],"x") || strstr(argv[0],"-extract") ){
		process_extract_action(--argc,++argv);
	}else if(!strlcmp(argv[0],"update") || !strlcmp(argv[0],"u") || strstr(argv[0],"-update") ) {
		process_update_action(--argc,++argv);
	}else if(!strlcmp(argv[0],"info") || !strlcmp(argv[0],"i") || strstr(argv[0],"-info") ) {
		process_info_action(--argc,++argv);
	}else if(!strlcmp(argv[0],"create-boot") || !strlcmp(argv[0],"c") || strstr(argv[0],"-create") ) {
		process_create_action(--argc,++argv);
	}
	else if(!strlcmp(argv[0],"create-ramdisk") || !strlcmp(argv[0],"r") ) {
		//process_info_action(--argc,++argv);
	}
	return  0 ;

}

int main(int argc,char ** argv){

	if(argc==1){
		return 0;
	}
	// was this a multicall, if not then move the arg pointer along
	if(!(strstr(argv[0],"-info") || strstr(argv[0],"-extract") || strstr(argv[0],"-create") || strstr(argv[0],"-update") ) ){
		
	
		--argc ; ++argv	;
	}
	
	get_action(argc , argv	);
		
	return 0;

}
