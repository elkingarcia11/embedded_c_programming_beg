/*
 * main.h
 *
 *  Created on: Feb 10, 2020
 *      Author: elkingarcia
 */

#ifndef MAIN_H_
#define MAIN_H_

#define ADDR_REG_AHB1ENR ((RCC_AHB1ENR_t*) 0X40023830)

#define ADDR_REG_GPIOx_MODE ((GPIOx_MODER_t*) 0X40020C00)

#define ADDR_REG_GPIOx_ODR ((GPIOx_ODR_t*) 0X40020C14)

#define GPIOx_ENABLE (1)

#define PIN_STATE_HIGH (1)

#define PIN_STATE_LOW (0)

#define MODE_CONF_OUTPUT (1)

#define DELAY_COUNT (300000ul)


typedef struct
{
	uint32_t GPIOAEN 		:1;
	uint32_t GPIOBEN 		:1;
	uint32_t GPIOCEN 		:1;
	uint32_t GPIODEN 		:1;
	uint32_t GPIOEEN		:1;
	uint32_t GPIOFEN 		:1;
	uint32_t GPIOGEN 		:1;
	uint32_t GPIOHEN 		:1;
	uint32_t GPIOIEN 		:1;
	uint32_t GPIOJEN 		:1;
	uint32_t GPIOKEN 		:1;
	uint32_t RESERVED1 		:1;
	uint32_t CRCEN 			:1;
	uint32_t RESERVED2 		:3;
	uint32_t RESERVED3 		:2;
	uint32_t BKPSRAMEN 		:1;
	uint32_t RESERVED4 		:1;
	uint32_t CCMDATARAMEN 	:1;
	uint32_t DMA1EN 		:1;
	uint32_t DMA2EN 		:1;
	uint32_t DMA2DEN 		:1;
	uint32_t RESERVED5 		:1;
	uint32_t ETHMACEN 		:1;
	uint32_t ETHMACTXEN 	:1;
	uint32_t ETHMACRXEN 	:1;
	uint32_t ETHMACPTPEN 	:1;
	uint32_t OTGHSEN 		:1;
	uint32_t OTGHSULPIEN 	:1;
	uint32_t RESERVED6 		:1;
}RCC_AHB1ENR_t;

typedef struct
{
	uint32_t mode_r0 	:2;
	uint32_t mode_r1 	:2;
	uint32_t mode_r2 	:2;
	uint32_t mode_r3 	:2;
	uint32_t mode_r4 	:2;
	uint32_t mode_r5 	:2;
	uint32_t mode_r6 	:2;
	uint32_t mode_r7 	:2;
	uint32_t mode_r8 	:2;
	uint32_t mode_r9 	:2;
	uint32_t mode_r10 	:2;
	uint32_t mode_r11 	:2;
	uint32_t mode_r12 	:2;
	uint32_t mode_r13 	:2;
	uint32_t mode_r14 	:2;
	uint32_t mode_r15 	:2;

}GPIOx_MODER_t;

typedef struct
{
	uint32_t odr_0 		:1;
	uint32_t odr_1 		:1;
	uint32_t odr_2 		:1;
	uint32_t odr_3 		:1;
	uint32_t odr_4 		:1;
	uint32_t odr_5 		:1;
	uint32_t odr_6 		:1;
	uint32_t odr_7 		:1;
	uint32_t odr_8 		:1;
	uint32_t odr_9 		:1;
	uint32_t odr_10 	:1;
	uint32_t odr_11 	:1;
	uint32_t odr_12 	:1;
	uint32_t odr_13 	:1;
	uint32_t odr_14 	:1;
	uint32_t odr_15 	:1;
	uint32_t reserve 	:16;

}GPIOx_ODR_t;


#endif /* MAIN_H_ */
