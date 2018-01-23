/*
 * test.h
 *
 *  Created on: Jan 22, 2018
 *      Author: root
 */

#ifndef TEST_H_
#define TEST_H_

#ifndef HAVE_CONFIG_H
//#include <config.h>
#endif

#include "disk.h"
#include <iostream>
#include <string.h>
#include <getopt.h>
#include <errno.h>
extern "C"{
#include "atasmart.h"
}
#include <vector>
#include <stdlib.h>

#define ENDED 		0
#define FAILED 		1
#define	INPROGRESS	2
/*
enum {
        MODE_DUMP = 10,
        MODE_OVERALL,
        MODE_POWER_ON,
        MODE_POWER_CYCLE,
        MODE_BAD,
        MODE_TEMPERATURE,
        MODE_STATUS,
        MODE_CAN_SMART,
        MODE_SAVE
};

int mode = MODE_DUMP;

enum {
        ARG_SAVE = 256,
        ARG_LOAD
};

static const struct option long_options[] = {
                {"overall",     no_argument, &mode, MODE_OVERALL},
                {"power-on",    no_argument, &mode, MODE_POWER_ON},
                {"power-cycle", no_argument, &mode, MODE_POWER_CYCLE},
                {"bad",         no_argument, &mode, MODE_BAD},
                {"temperature", no_argument, &mode, MODE_TEMPERATURE},
                {"can-smart",   no_argument, &mode, MODE_CAN_SMART},
                {"status",      no_argument, &mode, MODE_STATUS},
                {"save",        optional_argument, NULL, ARG_SAVE},
                {"load",        optional_argument, NULL, ARG_LOAD},
                {"help",        no_argument, NULL, 'h' },
                {0, 0, 0, 0}
        };

*/


class test{
public:
	test(std::vector<std::string> arg_in,std::string name,std::string dev,std::string outf,int n_Arg);

	bool avaibiability_smart(SkDisk*);								//sk_dilsk_smart_is_available
	int get_overall( SkDisk*,std::string overall);					//sk_disk_smart_get_overall
//	int get_data(SkDisk*);											//sk_disk_smart_read_data
	int get_temperature(SkDisk*,uint64_t *);						//temperatura restituita in kelvin convertirla in Celsius
																	//sk_disk_smart_get_temperature
//	int get_data(SkDisk*);											//sk_disk_smart_read_data
	bool check_smart(std::string dev);
	bool check_device(std::string dev);
	bool check_dev_status(std::string dev);
	int get_bad_sector(SkDisk*);
	void get_general_info(SkDisk*, Disk );
private:
	std::vector<std::string> args;
	std::string test_name;
	int status;
	std::string device;
	std::string outputfile;
	//std:: string* args;
	int n_args;
	SkDisk *d;
	Disk hd;
};



#endif /* TEST_H_ */
