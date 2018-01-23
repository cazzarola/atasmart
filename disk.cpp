/*
 * disk.cpp
 *
 *  Created on: Jan 24, 2018
 *      Author: root
 */

#include "disk.h"

void Disk::set_name(const std::string NAME){
	name=NAME;
}

void Disk::set_device(const std::string DEVICE){
	device=DEVICE;
}

void Disk::set_b_sector(const int B_SECTORS){
	bad_sectors=B_SECTORS;
}

void Disk::set_size(const int DIM){
	size=DIM;
}

void Disk::set_serial_n(const std::string SERIAL){
	serial_n=SERIAL;
}

void Disk::set_smart(const bool SMART){
	smart=SMART;
}

void Disk::set_firmware(const std::string FIRMWARE){
	firmware_v=FIRMWARE;
}


