#ifndef __MINI6410_LEDS_H
#define __MINI6410_LEDS_H

#include <linux/cdev.h> //struct cdev

#define LED_NUM				4
#define MINI6410_LEDS_MAJOR	0//230

struct led_dev {
	struct cdev cdev;
	unsigned char led_num;
};

#endif

