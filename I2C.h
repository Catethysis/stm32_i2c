void I2C_init(I2C_TypeDef* I2Cx, uint32_t speed);
void I2C_single_write(I2C_TypeDef* I2Cx, uint8_t HW_address, uint8_t addr, uint8_t data);
void I2C_burst_write(I2C_TypeDef* I2Cx, uint8_t HW_address, uint8_t addr, uint8_t n_data, uint8_t *data);
uint8_t I2C_single_read(I2C_TypeDef* I2Cx, uint8_t HW_address, uint8_t addr);
void I2C_burst_read(I2C_TypeDef* I2Cx, uint8_t HW_address, uint8_t addr, uint8_t n_data, uint8_t *data);