/*
 *  * test.cpp
 *
 *  Created on: Jan 23, 2018
 *      Author: root
 */
#include "test.h"
extern "C"{
#include "atasmart.h"
}

test::test(std::vector<std::string> arg_in,std::string name,std::string dev,std::string outf,int n_Arg){
		int size=arg_in.size();
		int ret=0;
		//SkDisk *disk;
		const char *DEV=dev.c_str();
		//if(sk_disk_open(DEV, &disk)<0){
		if(sk_disk_open(DEV,&d)<0){
			std::cout<<"Failed to open disk!";
			exit(EXIT_FAILURE);
		}

		for (int i=0;i<size;i++)
			args[i]=arg_in[i];
		n_args=size;
		test_name=name;
		status=ENDED;
		device=dev;
		outputfile=outf;
	};
bool test::avaibiability_smart(SkDisk*d){
	SkBool avaible;
	if (sk_disk_smart_is_available(d,&avaible) != 0 )
		return false;
	else
		return true;
}

void test::get_general_info(SkDisk* d, Disk hd){
	d->name;
}

/*
int get_overall( SkDisk*s,std::string overall_output){
	SkSmartOverall overall;
	//char *tmp_overall;
	sk_disk_smart_get_overall(s,&overall);
	sk_smart_overall_to_string(&overall);

}
*/

