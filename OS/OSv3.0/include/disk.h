#ifndef DISK_H
#define DISK_H

#define PORT_DISK0_DATA	0x1f0
#define PORT_DISK0_ERR_FEATURE 0x1f1
#define PORT_DISK0_SECTOR_CNT 0x1f2
#define PORT_DISK0_SECTOR_LOW 0x1f3
#define PORT_DISK0_SECTOR_MID 0x1f4
#define PORT_DISK0_SECTOR_HIGH 0x1f5
#define PORT_DISK0_DEVICE 0x1f6
#define PORT_DISK0_STATUS_CMD 0x1f7

#define PORT_DISK0_ALT_STA_CTL 0x3f6

#define PORT_DISK1_DATA 0x170
#define PORT_DISK1_ERR_FEATURE 0x171
#define PORT_DISK1_SECTOR_CNT 0x172
#define PORT_DISK1_SECTOR_LOW 0x173
#define PORT_DISK1_SECTOR_MID 0x174
#define PORT_DISK1_SECTOR_HIGH 0x175
#define PORT_DISK1_DEVICE 0x176
#define PORT_DISK1_STATUS_CMD 0x177

#define PORT_DISK1_ALT_STA_CTL 0x376

#define DISK_STATUS_BUSY	(1 << 7)
#define DISK_STATUS_READY	(1 << 6)
#define DISK_STATUS_SEEK	(1 << 4)
#define DISK_STATUS_REQ		(1 << 3)
#define DISK_STATUS_ERROR	(1 << 0)

void InitDisk();
void disk_handler();
void read_one_sector(int n, unsigned char* cx);


char finish;






















#endif