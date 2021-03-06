/* Register definitions for pic10f320.
 * This file was automatically generated by:
 *   inc2h.pl
 *   Copyright (c) 2002, Kevin L. Pauba, All Rights Reserved
 *
 * SDCC is licensed under the GNU Public license (GPL) v2. Note that
 * this license covers the code to the compiler and other executables,
 * tbut explicitly does not cover any code or objects generated by sdcc.
 *
 *
 * For pic device libraries and header files which are derived from
 * Microchip header (.inc) and linker script (.lkr) files Microchip
 * requires that "The header files should state that they are only to be
 * used with authentic Microchip devices" which makes them incompatible
 * with the GPL. Pic device libraries and header files are located at
 * non-free/lib and non-free/include directories respectively.
 * Sdcc should be run with the --use-non-free command line option in
 * order to include non-free header files and libraries.
 *
 * See http://sdcc.sourceforge.net/ for the latest information on sdcc.
 */
#include <pic10f320.h>

__sfr  __at (INDF_ADDR)                    INDF;
__sfr  __at (TMR0_ADDR)                    TMR0;
__sfr  __at (PCL_ADDR)                     PCL;
__sfr  __at (STATUS_ADDR)                  STATUS;
__sfr  __at (FSR_ADDR)                     FSR;
__sfr  __at (PORTA_ADDR)                   PORTA;
__sfr  __at (TRISA_ADDR)                   TRISA;
__sfr  __at (LATA_ADDR)                    LATA;
__sfr  __at (ANSELA_ADDR)                  ANSELA;
__sfr  __at (WPUA_ADDR)                    WPUA;
__sfr  __at (PCLATH_ADDR)                  PCLATH;
__sfr  __at (INTCON_ADDR)                  INTCON;
__sfr  __at (PIR1_ADDR)                    PIR1;
__sfr  __at (PIE1_ADDR)                    PIE1;
__sfr  __at (OPTION_REG_ADDR)              OPTION_REG;
__sfr  __at (PCON_ADDR)                    PCON;
__sfr  __at (OSCCON_ADDR)                  OSCCON;
__sfr  __at (TMR2_ADDR)                    TMR2;
__sfr  __at (PR2_ADDR)                     PR2;
__sfr  __at (T2CON_ADDR)                   T2CON;
__sfr  __at (PWM1DCL_ADDR)                 PWM1DCL;
__sfr  __at (PWM1DCH_ADDR)                 PWM1DCH;
__sfr  __at (PWM1CON_ADDR)                 PWM1CON;
__sfr  __at (PWM1CON0_ADDR)                PWM1CON0;
__sfr  __at (PWM2DCL_ADDR)                 PWM2DCL;
__sfr  __at (PWM2DCH_ADDR)                 PWM2DCH;
__sfr  __at (PWM2CON_ADDR)                 PWM2CON;
__sfr  __at (PWM2CON0_ADDR)                PWM2CON0;
__sfr  __at (IOCAP_ADDR)                   IOCAP;
__sfr  __at (IOCAN_ADDR)                   IOCAN;
__sfr  __at (IOCAF_ADDR)                   IOCAF;
__sfr  __at (FVRCON_ADDR)                  FVRCON;
__sfr  __at (ADRES_ADDR)                   ADRES;
__sfr  __at (ADCON_ADDR)                   ADCON;
__sfr  __at (PMADR_ADDR)                   PMADR;
__sfr  __at (PMADRL_ADDR)                  PMADRL;
__sfr  __at (PMADRH_ADDR)                  PMADRH;
__sfr  __at (PMDAT_ADDR)                   PMDAT;
__sfr  __at (PMDATL_ADDR)                  PMDATL;
__sfr  __at (PMDATH_ADDR)                  PMDATH;
__sfr  __at (PMCON1_ADDR)                  PMCON1;
__sfr  __at (PMCON2_ADDR)                  PMCON2;
__sfr  __at (CLKRCON_ADDR)                 CLKRCON;
__sfr  __at (NCO1ACC_ADDR)                 NCO1ACC;
__sfr  __at (NCO1ACCL_ADDR)                NCO1ACCL;
__sfr  __at (NCO1ACCH_ADDR)                NCO1ACCH;
__sfr  __at (NCO1ACCU_ADDR)                NCO1ACCU;
__sfr  __at (NCO1INC_ADDR)                 NCO1INC;
__sfr  __at (NCO1INCL_ADDR)                NCO1INCL;
__sfr  __at (NCO1INCH_ADDR)                NCO1INCH;
__sfr  __at (NCO1INCU_ADDR)                NCO1INCU;
__sfr  __at (NCO1CON_ADDR)                 NCO1CON;
__sfr  __at (NCO1CLK_ADDR)                 NCO1CLK;
__sfr  __at (WDTCON_ADDR)                  WDTCON;
__sfr  __at (CLC1CON_ADDR)                 CLC1CON;
__sfr  __at (CLC1SEL0_ADDR)                CLC1SEL0;
__sfr  __at (CLC1SEL1_ADDR)                CLC1SEL1;
__sfr  __at (CLC1POL_ADDR)                 CLC1POL;
__sfr  __at (CLC1GLS0_ADDR)                CLC1GLS0;
__sfr  __at (CLC1GLS1_ADDR)                CLC1GLS1;
__sfr  __at (CLC1GLS2_ADDR)                CLC1GLS2;
__sfr  __at (CLC1GLS3_ADDR)                CLC1GLS3;
__sfr  __at (CWG1CON0_ADDR)                CWG1CON0;
__sfr  __at (CWG1CON1_ADDR)                CWG1CON1;
__sfr  __at (CWG1CON2_ADDR)                CWG1CON2;
__sfr  __at (CWG1DBR_ADDR)                 CWG1DBR;
__sfr  __at (CWG1DBF_ADDR)                 CWG1DBF;
__sfr  __at (VREGCON_ADDR)                 VREGCON;
__sfr  __at (BORCON_ADDR)                  BORCON;

//
// bitfield definitions
//
volatile __ADCONbits_t __at(ADCON_ADDR) ADCONbits;
volatile __ANSELAbits_t __at(ANSELA_ADDR) ANSELAbits;
volatile __BORCONbits_t __at(BORCON_ADDR) BORCONbits;
volatile __CLC1CONbits_t __at(CLC1CON_ADDR) CLC1CONbits;
volatile __CLC1GLS0bits_t __at(CLC1GLS0_ADDR) CLC1GLS0bits;
volatile __CLC1GLS1bits_t __at(CLC1GLS1_ADDR) CLC1GLS1bits;
volatile __CLC1GLS2bits_t __at(CLC1GLS2_ADDR) CLC1GLS2bits;
volatile __CLC1GLS3bits_t __at(CLC1GLS3_ADDR) CLC1GLS3bits;
volatile __CLC1POLbits_t __at(CLC1POL_ADDR) CLC1POLbits;
volatile __CLC1SEL0bits_t __at(CLC1SEL0_ADDR) CLC1SEL0bits;
volatile __CLC1SEL1bits_t __at(CLC1SEL1_ADDR) CLC1SEL1bits;
volatile __CLKRCONbits_t __at(CLKRCON_ADDR) CLKRCONbits;
volatile __CWG1CON0bits_t __at(CWG1CON0_ADDR) CWG1CON0bits;
volatile __CWG1CON1bits_t __at(CWG1CON1_ADDR) CWG1CON1bits;
volatile __CWG1CON2bits_t __at(CWG1CON2_ADDR) CWG1CON2bits;
volatile __CWG1DBFbits_t __at(CWG1DBF_ADDR) CWG1DBFbits;
volatile __CWG1DBRbits_t __at(CWG1DBR_ADDR) CWG1DBRbits;
volatile __FVRCONbits_t __at(FVRCON_ADDR) FVRCONbits;
volatile __INTCONbits_t __at(INTCON_ADDR) INTCONbits;
volatile __IOCAFbits_t __at(IOCAF_ADDR) IOCAFbits;
volatile __IOCANbits_t __at(IOCAN_ADDR) IOCANbits;
volatile __IOCAPbits_t __at(IOCAP_ADDR) IOCAPbits;
volatile __LATAbits_t __at(LATA_ADDR) LATAbits;
volatile __NCO1ACCHbits_t __at(NCO1ACCH_ADDR) NCO1ACCHbits;
volatile __NCO1ACCLbits_t __at(NCO1ACCL_ADDR) NCO1ACCLbits;
volatile __NCO1ACCUbits_t __at(NCO1ACCU_ADDR) NCO1ACCUbits;
volatile __NCO1CLKbits_t __at(NCO1CLK_ADDR) NCO1CLKbits;
volatile __NCO1CONbits_t __at(NCO1CON_ADDR) NCO1CONbits;
volatile __NCO1INCHbits_t __at(NCO1INCH_ADDR) NCO1INCHbits;
volatile __NCO1INCLbits_t __at(NCO1INCL_ADDR) NCO1INCLbits;
volatile __OPTION_REGbits_t __at(OPTION_REG_ADDR) OPTION_REGbits;
volatile __OSCCONbits_t __at(OSCCON_ADDR) OSCCONbits;
volatile __PCLATHbits_t __at(PCLATH_ADDR) PCLATHbits;
volatile __PCONbits_t __at(PCON_ADDR) PCONbits;
volatile __PIE1bits_t __at(PIE1_ADDR) PIE1bits;
volatile __PIR1bits_t __at(PIR1_ADDR) PIR1bits;
volatile __PMADRHbits_t __at(PMADRH_ADDR) PMADRHbits;
volatile __PMCON1bits_t __at(PMCON1_ADDR) PMCON1bits;
volatile __PORTAbits_t __at(PORTA_ADDR) PORTAbits;
volatile __PWM1CONbits_t __at(PWM1CON_ADDR) PWM1CONbits;
volatile __PWM1CON0bits_t __at(PWM1CON0_ADDR) PWM1CON0bits;
volatile __PWM1DCHbits_t __at(PWM1DCH_ADDR) PWM1DCHbits;
volatile __PWM1DCLbits_t __at(PWM1DCL_ADDR) PWM1DCLbits;
volatile __PWM2CONbits_t __at(PWM2CON_ADDR) PWM2CONbits;
volatile __PWM2CON0bits_t __at(PWM2CON0_ADDR) PWM2CON0bits;
volatile __PWM2DCHbits_t __at(PWM2DCH_ADDR) PWM2DCHbits;
volatile __PWM2DCLbits_t __at(PWM2DCL_ADDR) PWM2DCLbits;
volatile __STATUSbits_t __at(STATUS_ADDR) STATUSbits;
volatile __T2CONbits_t __at(T2CON_ADDR) T2CONbits;
volatile __TRISAbits_t __at(TRISA_ADDR) TRISAbits;
volatile __VREGCONbits_t __at(VREGCON_ADDR) VREGCONbits;
volatile __WDTCONbits_t __at(WDTCON_ADDR) WDTCONbits;
volatile __WPUAbits_t __at(WPUA_ADDR) WPUAbits;

