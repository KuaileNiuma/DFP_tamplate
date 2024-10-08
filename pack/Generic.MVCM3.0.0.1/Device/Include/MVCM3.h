/*
 * ARM Limited (ARM) is supplying this software for use with Cortex-M
 * processor based microcontroller, but can be equally used for other
 * suitable processor architectures. This file can be freely distributed.
 * Modifications to this file shall be clearly marked.
 * 
 * THIS SOFTWARE IS PROVIDED "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 * ARM SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR
 * CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 *
 * @file     MVCM3.h
 * @brief    CMSIS HeaderFile
 * @version  0.0.1
 * @date     Tue Sep 24 14:24:09 2024
 * @note     Generated by SVDConv V3.3.46
 *           from File 'D:/Working_space/VLSI-SOC/make_package/DFP/DFP_mode/mode/Generic.MVCM3.0.0.1/SVD/MVCM3.svd',
 *           last modified on Tue Sep 24 14:24:00 2024
 */


/** @addtogroup General
  * @{
  */


/** @addtogroup MVCM3
  * @{
  */


#ifndef MVCM3_H
#define MVCM3_H

#ifdef __cplusplus
extern "C" {
#endif


/** @addtogroup Configuration_of_CMSIS
  * @{
  */



/* =========================================================================================================================== */
/* ================                                Interrupt Number Definition                                ================ */
/* =========================================================================================================================== */

typedef enum {
/* =======================================  ARM Cortex-M3 Specific Interrupt Numbers  ======================================== */
  Reset_IRQn                = -15,              /*!< -15  Reset Vector, invoked on Power up and warm reset                     */
  NonMaskableInt_IRQn       = -14,              /*!< -14  Non maskable Interrupt, cannot be stopped or preempted               */
  HardFault_IRQn            = -13,              /*!< -13  Hard Fault, all classes of Fault                                     */
  MemoryManagement_IRQn     = -12,              /*!< -12  Memory Management, MPU mismatch, including Access Violation
                                                     and No Match                                                              */
  BusFault_IRQn             = -11,              /*!< -11  Bus Fault, Pre-Fetch-, Memory Access Fault, other address/memory
                                                     related Fault                                                             */
  UsageFault_IRQn           = -10,              /*!< -10  Usage Fault, i.e. Undef Instruction, Illegal State Transition        */
  SVCall_IRQn               =  -5,              /*!< -5 System Service Call via SVC instruction                                */
  DebugMonitor_IRQn         =  -4,              /*!< -4 Debug Monitor                                                          */
  PendSV_IRQn               =  -2,              /*!< -2 Pendable request for system service                                    */
  SysTick_IRQn              =  -1,              /*!< -1 System Tick Timer                                                      */
/* ===========================================  MVCM3 Specific Interrupt Numbers  ============================================ */
  TIMER0_IRQn               =   0,              /*!< 0  Timer 0 interrupt                                                      */
  TIMER1_IRQn               =   4,              /*!< 4  Timer 2 interrupt                                                      */
  TIMER2_IRQn               =   6               /*!< 6  Timer 2 interrupt                                                      */
} IRQn_Type;



/* =========================================================================================================================== */
/* ================                           Processor and Core Peripheral Section                           ================ */
/* =========================================================================================================================== */

/* ===========================  Configuration of the ARM Cortex-M3 Processor and Core Peripherals  =========================== */
#define __CM3_REV                 0x0100U       /*!< CM3 Core Revision                                                         */
#define __NVIC_PRIO_BITS               3        /*!< Number of Bits used for Priority Levels                                   */
#define __Vendor_SysTickConfig         0        /*!< Set to 1 if different SysTick Config is used                              */
#define __MPU_PRESENT                  1        /*!< MPU present                                                               */
#define __FPU_PRESENT                  0        /*!< FPU present                                                               */


/** @} */ /* End of group Configuration_of_CMSIS */

#include "core_cm3.h"                           /*!< ARM Cortex-M3 processor and core peripherals                              */
#include "system_MVCM3.h"                       /*!< MVCM3 System                                                              */

#ifndef __IM                                    /*!< Fallback for older CMSIS versions                                         */
  #define __IM   __I
#endif
#ifndef __OM                                    /*!< Fallback for older CMSIS versions                                         */
  #define __OM   __O
#endif
#ifndef __IOM                                   /*!< Fallback for older CMSIS versions                                         */
  #define __IOM  __IO
#endif


/* ========================================  Start of section using anonymous unions  ======================================== */
#if defined (__CC_ARM)
  #pragma push
  #pragma anon_unions
#elif defined (__ICCARM__)
  #pragma language=extended
#elif defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wc11-extensions"
  #pragma clang diagnostic ignored "-Wreserved-id-macro"
  #pragma clang diagnostic ignored "-Wgnu-anonymous-struct"
  #pragma clang diagnostic ignored "-Wnested-anon-types"
#elif defined (__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined (__TMS470__)
  /* anonymous unions are enabled by default */
#elif defined (__TASKING__)
  #pragma warning 586
#elif defined (__CSMC__)
  /* anonymous unions are enabled by default */
#else
  #warning Not supported compiler type
#endif


/* =========================================================================================================================== */
/* ================                            Device Specific Peripheral Section                             ================ */
/* =========================================================================================================================== */


/** @addtogroup Device_Peripheral_peripherals
  * @{
  */



/* =========================================================================================================================== */
/* ================                                          TIMER0                                           ================ */
/* =========================================================================================================================== */


/**
  * @brief 32 Timer / Counter, counting up or down from different sources (TIMER0)
  */

typedef struct {                                /*!< TIMER0 Structure                                                          */
  
  union {
    __IOM uint32_t CR;                          /*!< Control Register                                                          */
    
    struct {
      __IOM uint32_t EN         : 1;            /*!< Enable                                                                    */
      __OM  uint32_t RST        : 1;            /*!< Reset Timer                                                               */
      __IOM uint32_t CNT        : 2;            /*!< Counting direction                                                        */
      __IOM uint32_t MODE       : 3;            /*!< Operation Mode                                                            */
      __IOM uint32_t PSC        : 1;            /*!< Use Prescaler                                                             */
      __IOM uint32_t CNTSRC     : 4;            /*!< Timer / Counter Source Divider                                            */
      __IOM uint32_t CAPSRC     : 4;            /*!< Timer / Counter Capture Source                                            */
      __IOM uint32_t CAPEDGE    : 2;            /*!< Capture Edge, select which Edge should result in a counter increment
                                                     or decrement                                                              */
            uint32_t            : 2;
      __IOM uint32_t TRGEXT     : 2;            /*!< Triggers an other Peripheral                                              */
            uint32_t            : 2;
      __IOM uint32_t RELOAD     : 2;            /*!< Select RELOAD Register n to reload Timer on condition                     */
      __IOM uint32_t IDR        : 2;            /*!< Selects, if Reload Register number is incremented, decremented
                                                     or not modified                                                           */
            uint32_t            : 3;
      __IOM uint32_t S          : 1;            /*!< Starts and Stops the Timer / Counter                                      */
    } CR_b;
  } ;
  
  union {
    __IOM uint16_t SR;                          /*!< Status Register                                                           */
    
    struct {
      __IM  uint16_t RUN        : 1;            /*!< Shows if Timer is running or not                                          */
            uint16_t            : 7;
      __IOM uint16_t MATCH      : 1;            /*!< Shows if the MATCH was hit                                                */
      __IOM uint16_t UN         : 1;            /*!< Shows if an underflow occured. This flag is sticky                        */
      __IOM uint16_t OV         : 1;            /*!< Shows if an overflow occured. This flag is sticky                         */
            uint16_t            : 1;
      __IM  uint16_t RST        : 1;            /*!< Shows if Timer is in RESET state                                          */
            uint16_t            : 1;
      __IM  uint16_t RELOAD     : 2;            /*!< Shows the currently active RELOAD Register                                */
    } SR_b;
  } ;
  __IM  uint16_t  RESERVED;
  __IM  uint32_t  RESERVED1[2];
  
  union {
    __IOM uint16_t INT;                         /*!< Interrupt Register                                                        */
    
    struct {
      __IOM uint16_t EN         : 1;            /*!< Interrupt Enable                                                          */
            uint16_t            : 3;
      __IOM uint16_t MODE       : 3;            /*!< Interrupt Mode, selects on which condition the Timer should
                                                     generate an Interrupt                                                     */
            uint16_t            : 9;
    } INT_b;
  } ;
  __IM  uint16_t  RESERVED2;
  __IM  uint32_t  RESERVED3[3];
  __IOM uint32_t  COUNT;                        /*!< The Counter Register reflects the actual Value of the Timer/Counter       */
  __IOM uint32_t  MATCH;                        /*!< The Match Register stores the compare Value for the MATCH condition       */
  
  union {
    __IM  uint32_t PRESCALE_RD;                 /*!< The Prescale Register stores the Value for the prescaler. The
                                                     cont event gets divided by this value                                     */
    __OM  uint32_t PRESCALE_WR;                 /*!< The Prescale Register stores the Value for the prescaler. The
                                                     cont event gets divided by this value                                     */
  };
  __IM  uint32_t  RESERVED4[9];
  __IOM uint32_t  RELOAD[4];                    /*!< The Reload Register stores the Value the COUNT Register gets
                                                     reloaded on a when a condition was met.                                   */
} TIMER0_Type;                                  /*!< Size = 96 (0x60)                                                          */


/** @} */ /* End of group Device_Peripheral_peripherals */


/* =========================================================================================================================== */
/* ================                          Device Specific Peripheral Address Map                           ================ */
/* =========================================================================================================================== */


/** @addtogroup Device_Peripheral_peripheralAddr
  * @{
  */

#define TIMER0_BASE                 0x40010000UL
#define TIMER1_BASE                 0x40010100UL
#define TIMER2_BASE                 0x40010200UL

/** @} */ /* End of group Device_Peripheral_peripheralAddr */


/* =========================================================================================================================== */
/* ================                                  Peripheral declaration                                   ================ */
/* =========================================================================================================================== */


/** @addtogroup Device_Peripheral_declaration
  * @{
  */

#define TIMER0                      ((TIMER0_Type*)            TIMER0_BASE)
#define TIMER1                      ((TIMER0_Type*)            TIMER1_BASE)
#define TIMER2                      ((TIMER0_Type*)            TIMER2_BASE)

/** @} */ /* End of group Device_Peripheral_declaration */


/* =========================================  End of section using anonymous unions  ========================================= */
#if defined (__CC_ARM)
  #pragma pop
#elif defined (__ICCARM__)
  /* leave anonymous unions enabled */
#elif defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
  #pragma clang diagnostic pop
#elif defined (__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined (__TMS470__)
  /* anonymous unions are enabled by default */
#elif defined (__TASKING__)
  #pragma warning restore
#elif defined (__CSMC__)
  /* anonymous unions are enabled by default */
#endif


#ifdef __cplusplus
}
#endif

#endif /* MVCM3_H */


/** @} */ /* End of group MVCM3 */

/** @} */ /* End of group General */
