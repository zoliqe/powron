#ifndef __WATCHDOG_H__
#define __WATCHDOG_H__
void setupWatchDog(byte, unsigned long);
void watchDogTimeout(unsigned int);
void startTimer(byte);
void clearTimer(byte pin);
void watchDog();
// unsigned long differenceOf(unsigned long now, unsigned long start);
#endif