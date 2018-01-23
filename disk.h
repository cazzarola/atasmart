/*
 * disk.h
 *
 *  Created on: Jan 24, 2018
 *      Author: root
 */

#ifndef DISK_H_
#define DISK_H_
#include <string>
#include <iostream>

class Disk{
private:
	std::string name;
	std::string device;
	int bad_sectors;
	int size;
	std::string serial_n;
	std::string model;
	bool smart;
	std::string firmware_v;
public:
	Disk(std::string NAME,std::string DEVICE,int B_SECT,int SIZE,std::string SERIAL,std::string MODEL,bool SMART, std::string FIRM):name(NAME),device(DEVICE),bad_sectors(B_SECT),size(SIZE),serial_n(SERIAL),model(MODEL),smart(SMART),firmware_v(FIRM){};
	const std::string get_name(void){return name;};
	const std::string get_device(void){return device;};
	const int get_size(void){return size;};
	const int get_bad_sectors(void){return bad_sectors;};
	const std::string get_serial(void){return serial_n;};
	const std::string get_model(void){return model;};
	const bool get_smart(void){return smart;};
	const std::string get_firmware_v(void){return firmware_v;};
	void set_name(const std::string );
	void set_device(const std::string );
	void set_b_sector(const int );
	void set_size(const int );
	void set_serial_n(const std::string );
	void set_smart(const bool );
	void set_firmware(const std::string );
};



#endif /* DISK_H_ */
