stm32_i2c
=========

Библиотека функций работы с I2C для STM32F1. Подробнее - http://catethysis.ru/stm32-i2c/

# Функции
* I2C_init (I2Cx, speed) - инициализирует выбранный модуль I2C с указанной скоростью связи
* I2C_single_write (I2Cx, HW_address, addr, data) - записывает один байт data по адресу addr
* I2C_burst_write (I2Cx, HW_address, addr, n_data, *data) - записывает несколько байт *data, начиная с адреса addr
* I2C_single_read (I2Cx, HW_address, addr) - читает один байт data по адресу addr
* I2C_burst_read (I2Cx, HW_address, addr, n_data, *data) - читает несколько байт *data, начиная с адреса addr

Функции чтения и записи принимают линию I2C (I2Cx) и адрес устройства (HW_address).

# Примеры применения
В EEPROM.c - пример работы с EEPROM-памятью: запись/чтение одного байта и массива из нескольких байт.

MAC_EEPROM.c - чтение 6-байтного MAC-адреса из микросхем памяти типа 24AA02E48 с предзаписанным MAC-адресом.