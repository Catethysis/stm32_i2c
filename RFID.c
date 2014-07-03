#include "I2C.h"

void delay()
{
	for(volatile uint16_t del = 0; del<250000; del++);
}

int main()
{
	uint8_t burst_data_write[2] = {0x01, 0x01}, burst_data_read[11] = { 0 };

	I2C_init(I2C1, 100000);
		delay();
	I2C_RFID_burst_write(I2C1, 0xA0, 2, burst_data_write);
		delay();
	I2C_RFID_burst_read(I2C1, 0xA0, 11, burst_data_read);
		
	while(1);
}