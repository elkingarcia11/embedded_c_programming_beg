/**
  ******************************************************************************
  * @file    main.c
  * @author  Auto-generated by STM32CubeIDE
  * @version V1.0
  * @brief   Default main function.
  ******************************************************************************
*/

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#include <stdint.h>
#include <stdio.h>

int main(void)
{
	// Address AHB1 Bus clock control reg
	uint32_t* pClkCtrlReg = (uint32_t*) 0x40023830;
	// Address of GPIOD Mode Reg -
	uint32_t* pPortDModeReg = (uint32_t*) 0x40020C00;
	// Address of GPIOA Mode Reg
	uint32_t* pPortAModeReg = (uint32_t*) 0x40020000;
	// Address of GPIOD Data Output Reg
	uint32_t* pPortDOutReg = (uint32_t*) 0x40020C14;
	// Address of GPIOA Data Input Reg
	uint32_t* pPortAInReg = (uint32_t*) 0x40020010;

	//Enable GPIOD and GPIOA peripherals - 1001
	*pClkCtrlReg |= 0x9;
	*pPortDModeReg &= ~(3 << 24);
	*pPortDModeReg |= (1 << 24);
	/* 1. Find bus GPIOA clock belongs to - AHB1
	 * 2. Find address of GPIOA clock register - Same as GPIOD, but 0th pin enabled
	 * 3. Enable it - done
	 * 4. Find GPIOA Mode reg - 0x40020000
	 * 5. Enable input mode - 0x10 offset to ^
	 * 5. Enabled input data reg -
	 * 6. Find adress of data input reg
	 * 7. Read
	 * 8. Based on read update PD12(LED)
	 * */
	// Enable input mode (00)
	*pPortAModeReg &= 0xFFFFFFF0;


	while(1){
		/* Read 0th pin of port A
		 * If even, aka 0 in 0th position, its LOW/OFF
		 * Else its HIGH/ON
		 */
		uint8_t currentState = (uint8_t)(*pPortAInReg & 0x1);
		if(!currentState){
			*pPortDOutReg &= ~(1 << 12);
		} else {
			*pPortDOutReg |= (1 << 12);
		}

		//for(uint32_t i = 0; i<300000;i++);

	}
	return 0;

}
