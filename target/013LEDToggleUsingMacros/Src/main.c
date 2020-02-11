#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#include <stdint.h>
#include <stdio.h>
#include "main.h"



int main(void)
{
/* 	 Address of GPIOD clock on AHB1 Bus clock reg
	 	 Address of GPIOD Mode Reg
	 	 Address of GPIOD Data Output Reg
	*/

	RCC_AHB1ENR_t* pClkCtrlReg = ADDR_REG_AHB1ENR;
	GPIOx_MODER_t* pPortDModeReg = ADDR_REG_GPIOx_MODE;
	GPIOx_ODR_t* pPortDOutReg = ADDR_REG_GPIOx_ODR;

	// Bit manipulation is handled by compiler - shifting and setting bits
	pClkCtrlReg -> GPIODEN = GPIOx_ENABLE;

	pPortDModeReg -> mode_r13 = MODE_CONF_OUTPUT;

	while(1){

		pPortDOutReg -> odr_13 = PIN_STATE_HIGH;

		for(uint32_t i = 0; i < DELAY_COUNT;i++);

		pPortDOutReg -> odr_13 = PIN_STATE_LOW;

		for(uint32_t i = 0; i < DELAY_COUNT;i++);
	}

	return 0;

}
