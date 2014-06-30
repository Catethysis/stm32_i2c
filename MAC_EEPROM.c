#include "I2C.h"

void main()
{
	uint8_t MAC_Address[6] = { 0 };
	
	I2C_init(I2C1, 100000);
		delay();
	I2C_burst_read(I2C1, 0xA0, 0xFA, 6, MAC_Address);
	
	while(1);
}