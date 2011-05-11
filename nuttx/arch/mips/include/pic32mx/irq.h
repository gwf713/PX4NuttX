/****************************************************************************
 * arch/mips/include/pic32mx/irq.h
 *
 *   Copyright (C) 2011 Gregory Nutt. All rights reserved.
 *   Author: Gregory Nutt <spudmonkey@racsa.co.cr>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/* This file should never be included directed but, rather, only indirectly
 * through nuttx/irq.h
 */

#ifndef __ARCH_MIPS_INCLUDE_PIC32MX_IRQ_H
#define __ARCH_MIPS_INCLUDE_PIC32MX_IRQ_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Interrupt vector numbers.  These should be used to attach to interrupts
 * and to change interrupt priorities.
 */

#define PIC32MX_IRQ_CT         0 /* Vector: 0,  Core Timer Interrupt */
#define PIC32MX_IRQ_CS0        1 /* Vector: 1,  Core Software Interrupt 0 */
#define PIC32MX_IRQ_CS1        2 /* Vector: 2,  Core Software Interrupt 1 */
#define PIC32MX_IRQ_INT0       3 /* Vector: 3,  External Interrupt 0 */
#define PIC32MX_IRQ_T1         4 /* Vector: 4,  Timer 1 */
#define PIC32MX_IRQ_IC1        5 /* Vector: 5,  Input Capture 1 */
#define PIC32MX_IRQ_OC1        6 /* Vector: 6,  Output Compare 1 */
#define PIC32MX_IRQ_INT1       7 /* Vector: 7,  External Interrupt 1 */
#define PIC32MX_IRQ_T2         8 /* Vector: 8,  Timer 2 */
#define PIC32MX_IRQ_IC2        9 /* Vector: 9,  Input Capture 2 */
#define PIC32MX_IRQ_OC2       10 /* Vector: 10, Output Compare 2 */
#define PIC32MX_IRQ_INT2      11 /* Vector: 11, External Interrupt 2 */
#define PIC32MX_IRQ_T3        12 /* Vector: 12, Timer 3 */
#define PIC32MX_IRQ_IC3       13 /* Vector: 13, Input Capture 3 */
#define PIC32MX_IRQ_OC3       14 /* Vector: 14, Output Compare 3 */
#define PIC32MX_IRQ_INT3      15 /* Vector: 15, External Interrupt 3 */
#define PIC32MX_IRQ_T4        16 /* Vector: 16, Timer 4 */
#define PIC32MX_IRQ_IC4       17 /* Vector: 17, Input Capture 4 */
#define PIC32MX_IRQ_OC4       18 /* Vector: 18, Output Compare 4 */
#define PIC32MX_IRQ_INT4      19 /* Vector: 19, External Interrupt 4 */
#define PIC32MX_IRQ_T5        20 /* Vector: 20, Timer 5 */
#define PIC32MX_IRQ_IC5       21 /* Vector: 21, Input Capture 5 */
#define PIC32MX_IRQ_OC5       22 /* Vector: 22, Output Compare 5 */
#define PIC32MX_IRQ_SPI1      23 /* Vector: 23, SPI1 */
#define PIC32MX_IRQ_U1        24 /* Vector: 24, UART1 */
#define PIC32MX_IRQ_I2C1      25 /* Vector: 25, I2C1 */
#define PIC32MX_IRQ_CN        26 /* Vector: 26, Input Change Interrupt */
#define PIC32MX_IRQ_AD1       27 /* Vector: 27, ADC1 Convert Done */
#define PIC32MX_IRQ_PMP       28 /* Vector: 28, Parallel Master Port */
#define PIC32MX_IRQ_CMP1      29 /* Vector: 29, Comparator Interrupt */
#define PIC32MX_IRQ_CMP2      30 /* Vector: 30, Comparator Interrupt */
#define PIC32MX_IRQ_SPI2      31 /* Vector: 31, SPI2 */
#define PIC32MX_IRQ_U2        32 /* Vector: 32, UART2 */
#define PIC32MX_IRQ_I2C2      33 /* Vector: 33, I2C2 */
#define PIC32MX_IRQ_FSCM      34 /* Vector: 34, Fail-Safe Clock Monitor */
#define PIC32MX_IRQ_RTCC      35 /* Vector: 35, Real-Time Clock and Calendar */
#define PIC32MX_IRQ_DMA0      36 /* Vector: 36, DMA Channel 0 */
#define PIC32MX_IRQ_DMA1      37 /* Vector: 37, DMA Channel 1 */
#define PIC32MX_IRQ_DMA2      38 /* Vector: 38, DMA Channel 2 */
#define PIC32MX_IRQ_DMA3      39 /* Vector: 39, DMA Channel 3 */
                                 /* Vectors 40-43: Not used */
#define PIC32MX_IRQ_FCE       44 /* Vector: 44, Flash Control Event */
#define PIC32MX_IRQ_USB       45 /* Vector: 45, USB */

#define PIC32MX_IRQ_BAD       46 /* Not a real IRQ number */
#define NR_IRQS               46

/* Interrupt numbers.  These should be used for enabling and disabling
 * interrupt sources.  Note that there are more interrupt sources than
 * interrupt vectors and interrupt priorities.
 */

#define PIC32MX_IRQSRC0_FIRST 0
#define PIC32MX_IRQSRC_CT     0  /* Vector: 0, Core Timer Interrupt */
#define PIC32MX_IRQSRC_CS0    1  /* Vector: 1, Core Software Interrupt 0 */
#define PIC32MX_IRQSRC_CS1    2  /* Vector: 2, Core Software Interrupt 1 */
#define PIC32MX_IRQSRC_INT0   3  /* Vector: 3, External Interrupt 0 */
#define PIC32MX_IRQSRC_T1     4  /* Vector: 4, Timer 1 */
#define PIC32MX_IRQSRC_IC1    5  /* Vector: 5, Input Capture 1 */
#define PIC32MX_IRQSRC_OC1    6  /* Vector: 6, Output Compare 1 */
#define PIC32MX_IRQSRC_INT1   7  /* Vector: 7, External Interrupt 1 */
#define PIC32MX_IRQSRC_T2     8  /* Vector: 8, Timer 2 */
#define PIC32MX_IRQSRC_IC2    9  /* Vector: 9, Input Capture 2 */
#define PIC32MX_IRQSRC_OC2    10 /* Vector: 10, Output Compare 2 */
#define PIC32MX_IRQSRC_INT2   11 /* Vector: 11, External Interrupt 2 */
#define PIC32MX_IRQSRC_T3     12 /* Vector: 12, Timer 3 */
#define PIC32MX_IRQSRC_IC3    13 /* Vector: 13, Input Capture 3 */
#define PIC32MX_IRQSRC_OC3    14 /* Vector: 14, Output Compare 3 */
#define PIC32MX_IRQSRC_INT3   15 /* Vector: 15, External Interrupt 3 */
#define PIC32MX_IRQSRC_T4     16 /* Vector: 16, Timer 4 */
#define PIC32MX_IRQSRC_IC4    17 /* Vector: 17, Input Capture 4 */
#define PIC32MX_IRQSRC_OC4    18 /* Vector: 18, Output Compare 4 */
#define PIC32MX_IRQSRC_INT4   19 /* Vector: 19, External Interrupt 4 */
#define PIC32MX_IRQSRC_T5     20 /* Vector: 20, Timer 5 */
#define PIC32MX_IRQSRC_IC5    21 /* Vector: 21, Input Capture 5 */
#define PIC32MX_IRQSRC_OC5    22 /* Vector: 22, Output Compare 5 */
#define PIC32MX_IRQSRC_SPI1E  23 /* Vector: 23, SPI1 */
#define PIC32MX_IRQSRC_SPI1TX 24 /* Vector: 23, "  " */
#define PIC32MX_IRQSRC_SPI1RX 25 /* Vector: 23, "  " */
#define PIC32MX_IRQSRC_U1E    26 /* Vector: 24, UART1 */
#define PIC32MX_IRQSRC_U1RX   27 /* Vector: 24, "   " */
#define PIC32MX_IRQSRC_U1TX   28 /* Vector: 24, "   " */
#define PIC32MX_IRQSRC_I2C1B  29 /* Vector: 25, I2C1 */
#define PIC32MX_IRQSRC_I2C1S  30 /* Vector: 25, "  " */
#define PIC32MX_IRQSRC_I2C1M  31 /* Vector: 25, "  " */
#define PIC32MX_IRQSRC0_LAST  31

#define PIC32MX_IRQSRC1_FIRST 32
#define PIC32MX_IRQSRC_CN     32 /* Vector: 26, Input Change Interrupt */
#define PIC32MX_IRQSRC_AD1    33 /* Vector: 27, ADC1 Convert Done */
#define PIC32MX_IRQSRC_PMP    34 /* Vector: 28, Parallel Master Port */
#define PIC32MX_IRQSRC_CMP1   35 /* Vector: 29, Comparator Interrupt */
#define PIC32MX_IRQSRC_CMP2   36 /* Vector: 30, Comparator Interrupt */
#define PIC32MX_IRQSRC_SPI2E  37 /* Vector: 31, SPI2 */
#define PIC32MX_IRQSRC_SPI2TX 38 /* Vector: 31, "  " */
#define PIC32MX_IRQSRC_SPI2RX 39 /* Vector: 31, "  " */
#define PIC32MX_IRQSRC_U2E    40 /* Vector: 32, UART2 */
#define PIC32MX_IRQSRC_U2RX   41 /* Vector: 32, "   " */
#define PIC32MX_IRQSRC_U2TX   42 /* Vector: 32, "   " */
#define PIC32MX_IRQSRC_I2C2B  43 /* Vector: 33, I2C2 */
#define PIC32MX_IRQSRC_I2C2S  44 /* Vector: 33, "  " */
#define PIC32MX_IRQSRC_I2C2M  45 /* Vector: 33, "  " */
#define PIC32MX_IRQSRC_FSCM   46 /* Vector: 34, Fail-Safe Clock Monitor */
#define PIC32MX_IRQSRC_RTCC   47 /* Vector: 35, Real-Time Clock and Calendar */
#define PIC32MX_IRQSRC_DMA0   48 /* Vector: 36, DMA Channel 0 */
#define PIC32MX_IRQSRC_DMA1   49 /* Vector: 37, DMA Channel 1 */
#define PIC32MX_IRQSRC_DMA2   50 /* Vector: 38, DMA Channel 2 */
#define PIC32MX_IRQSRC_DMA3   51 /* Vector: 39, DMA Channel 3 */
#define PIC32MX_IRQSRC_FCE    56 /* Vector: 44, Flash Control Event */
#define PIC32MX_IRQSRC_USB    57 /* Vector: 45, USB */
#define PIC32MX_IRQSRC1_FIRST 57

/****************************************************************************
 * Public Types
 ****************************************************************************/

#ifndef __ASSEMBLY__

/****************************************************************************
 * Inline functions
 ****************************************************************************/

/****************************************************************************
 * Public Variables
 ****************************************************************************/

/****************************************************************************
 * Public Function Prototypes
 ****************************************************************************/

#ifdef __cplusplus
#define EXTERN extern "C"
extern "C" {
#else
#define EXTERN extern
#endif

#undef EXTERN
#ifdef __cplusplus
}
#endif

#endif /* __ASSEMBLY__ */
#endif /* __ARCH_MIPS_INCLUDE_PIC32MX_IRQ_H */
