#include "I2C.h"

void main()
{
	uint8_t burst_data_write[5] = {0x24, 0x48, 0x52, 0x59, 0x73}, burst_data_read[6] = { 0 };
	uint8_t single_data_read = 0;
	
	I2C_init(I2C1, 100000);
		delay();
		
	I2C_single_write(I2C1, 0xA0, 0x20, 0x15);
		delay();
	I2C_burst_write(I2C1, 0xA0, 0x11, 5, burst_data_write);
		delay();
	
	single_data_read = I2C_single_read(I2C1, 0xA0, 0x20);
		delay();
	I2C_burst_read(I2C1, 0xA0, 0x11, 5, burst_data_read);
	
	while(1);
}