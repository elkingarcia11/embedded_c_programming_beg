#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#include <stdint.h>
#include <stdio.h>
#include "main.h"

int main(void)
{
	// Address of GPIOD clock on AHB1 Bus clock reg
	RCC_AHB1ENR_t* pClkCtrlReg = (RCC_AHB1ENR_t*) 0x40023830;
	// Address of GPIOD Mode Reg
	GPIOx_MODER_t* pPortDModeReg = (GPIOx_MODER_t*) 0x40020C00;
	// Address of GPIOD Data Output Reg
	GPIOx_ODR_t* pPortDOutReg = (GPIOx_ODR_t*) 0x40020C14;

	// Bit manipulation is handled by compiler - shifting and setting bits
	pClkCtrlReg -> GPIODEN = 1;

	pPortDModeReg -> mode_r13 = 1;

	pPortDOutReg -> odr_13 = 1;

	while(1){

		pPortDOutReg -> odr_13 = 1;

		for(uint32_t i = 0; i<200000;i++);

		pPortDOutReg -> odr_13 = 0;

		for(uint32_t i = 0; i<200000;i++);
	}
	return 0;

}
