//
// Register Declarations for Microchip 16F610 Processor
//
//
// This header file was automatically generated by:
//
// inc2h.pl
//
// Copyright (c) 2002, Kevin L. Pauba, All Rights Reserved
//
// SDCC is licensed under the GNU Public license (GPL) v2. Note that
// this license covers the code to the compiler and other executables,
// but explicitly does not cover any code or objects generated by sdcc.
//
// For pic device libraries and header files which are derived from
// Microchip header (.inc) and linker script (.lkr) files Microchip
// requires that "The header files should state that they are only to be
// used with authentic Microchip devices" which makes them incompatible
// with the GPL. Pic device libraries and header files are located at
// non-free/lib and non-free/include directories respectively.
// Sdcc should be run with the --use-non-free command line option in
// order to include non-free header files and libraries.
//
// See http://sdcc.sourceforge.net/ for the latest information on sdcc.
//
// 
#ifndef P16F610_H
#define P16F610_H

//
// Register addresses.
//
#define INDF_ADDR       0x0000
#define TMR0_ADDR       0x0001
#define PCL_ADDR        0x0002
#define STATUS_ADDR     0x0003
#define FSR_ADDR        0x0004
#define PORTA_ADDR      0x0005
#define PORTC_ADDR      0x0007
#define PCLATH_ADDR     0x000A
#define INTCON_ADDR     0x000B
#define PIR1_ADDR       0x000C
#define TMR1_ADDR       0x000E
#define TMR1L_ADDR      0x000E
#define TMR1H_ADDR      0x000F
#define T1CON_ADDR      0x0010
#define VRCON_ADDR      0x0019
#define CM1CON0_ADDR    0x001A
#define CM2CON0_ADDR    0x001B
#define CM2CON1_ADDR    0x001C
#define OPTION_REG_ADDR 0x0081
#define TRISA_ADDR      0x0085
#define TRISC_ADDR      0x0087
#define PIE1_ADDR       0x008C
#define PCON_ADDR       0x008E
#define OSCTUNE_ADDR    0x0090
#define ANSEL_ADDR      0x0091
#define WPU_ADDR        0x0095
#define WPUA_ADDR       0x0095
#define IOC_ADDR        0x0096
#define IOCA_ADDR       0x0096
#define SRCON0_ADDR     0x0099
#define SRCON1_ADDR     0x009A

//
// Memory organization.
//



//         LIST

//==========================================================================
//  MPASM PIC16F610 processor include
//
//  (c) Copyright 1999-2012 Microchip Technology, All rights reserved
//==========================================================================

//         NOLIST

//==========================================================================
//  This header file defines configurations, registers, and other useful
//  bits of information for the PIC16F610 microcontroller.  These names
//  are taken to match the data sheets as closely as possible.
//
//  Note that the processor must be selected before this file is included.
//  The processor may be selected the following ways:
//
//       1. Command line switch:
//               C:\MPASM MYFILE.ASM /PIC16F610
//       2. LIST directive in the source file
//               LIST   P=PIC16F610
//       3. Processor Type entry in the MPASM full-screen interface
//       4. Setting the processor in the MPLAB Project Dialog
//==========================================================================

//==========================================================================
//
//       Verify Processor
//
//==========================================================================
//        IFNDEF __16F610
//            MESSG "Processor-header file mismatch.  Verify selected processor."
//         ENDIF



//==========================================================================
//
//       Register Definitions
//
//==========================================================================

#define W                    0x0000
#define F                    0x0001

//----- Register Files -----------------------------------------------------

//-----Bank0------------------
extern __sfr  __at (INDF_ADDR)                    INDF;
extern __sfr  __at (TMR0_ADDR)                    TMR0;
extern __sfr  __at (PCL_ADDR)                     PCL;
extern __sfr  __at (STATUS_ADDR)                  STATUS;
extern __sfr  __at (FSR_ADDR)                     FSR;
extern __sfr  __at (PORTA_ADDR)                   PORTA;
extern __sfr  __at (PORTC_ADDR)                   PORTC;
extern __sfr  __at (PCLATH_ADDR)                  PCLATH;
extern __sfr  __at (INTCON_ADDR)                  INTCON;
extern __sfr  __at (PIR1_ADDR)                    PIR1;
extern __sfr  __at (TMR1_ADDR)                    TMR1;
extern __sfr  __at (TMR1L_ADDR)                   TMR1L;
extern __sfr  __at (TMR1H_ADDR)                   TMR1H;
extern __sfr  __at (T1CON_ADDR)                   T1CON;
extern __sfr  __at (VRCON_ADDR)                   VRCON;
extern __sfr  __at (CM1CON0_ADDR)                 CM1CON0;
extern __sfr  __at (CM2CON0_ADDR)                 CM2CON0;
extern __sfr  __at (CM2CON1_ADDR)                 CM2CON1;

//-----Bank1------------------
extern __sfr  __at (OPTION_REG_ADDR)              OPTION_REG;
extern __sfr  __at (TRISA_ADDR)                   TRISA;
extern __sfr  __at (TRISC_ADDR)                   TRISC;
extern __sfr  __at (PIE1_ADDR)                    PIE1;
extern __sfr  __at (PCON_ADDR)                    PCON;
extern __sfr  __at (OSCTUNE_ADDR)                 OSCTUNE;
extern __sfr  __at (ANSEL_ADDR)                   ANSEL;
extern __sfr  __at (WPU_ADDR)                     WPU;
extern __sfr  __at (WPUA_ADDR)                    WPUA;
extern __sfr  __at (IOC_ADDR)                     IOC;
extern __sfr  __at (IOCA_ADDR)                    IOCA;
extern __sfr  __at (SRCON0_ADDR)                  SRCON0;
extern __sfr  __at (SRCON1_ADDR)                  SRCON1;

//----- STATUS Bits -----------------------------------------------------



//----- PORTA Bits -----------------------------------------------------


//----- PORTC Bits -----------------------------------------------------


//----- INTCON Bits -----------------------------------------------------



//----- PIR1 Bits -----------------------------------------------------



//----- T1CON Bits -----------------------------------------------------



//----- VRCON Bits -----------------------------------------------------



//----- CM1CON0 Bits -----------------------------------------------------



//----- CM2CON0 Bits -----------------------------------------------------



//----- CM2CON1 Bits -----------------------------------------------------


//----- OPTION_REG Bits -----------------------------------------------------



//----- TRISA Bits -----------------------------------------------------


//----- TRISC Bits -----------------------------------------------------


//----- PIE1 Bits -----------------------------------------------------



//----- PCON Bits -----------------------------------------------------



//----- OSCTUNE Bits -----------------------------------------------------


//----- ANSEL Bits -----------------------------------------------------


//----- WPU Bits -----------------------------------------------------



//----- WPUA Bits -----------------------------------------------------



//----- IOC Bits -----------------------------------------------------



//----- IOCA Bits -----------------------------------------------------



//----- SRCON0 Bits -----------------------------------------------------



//----- SRCON1 Bits -----------------------------------------------------




//==========================================================================
//
//       RAM Definitions
//
//==========================================================================
//        __MAXRAM  H'00FF'
//        __BADRAM  H'0006'
//        __BADRAM  H'0008'-H'0009'
//        __BADRAM  H'000D'
//        __BADRAM  H'0011'-H'0018'
//        __BADRAM  H'001D'-H'001F'
//        __BADRAM  H'0020'-H'003F'
//        __BADRAM  H'0086'
//        __BADRAM  H'0088'-H'0089'
//        __BADRAM  H'008D'
//        __BADRAM  H'008F'
//        __BADRAM  H'0092'-H'0094'
//        __BADRAM  H'0097'-H'0098'
//        __BADRAM  H'009B'-H'009F'
//        __BADRAM  H'00A0'-H'00EF'

//==========================================================================
//
//       Configuration Bits
//
//   NAME            Address
//   CONFIG            2007h
//
//==========================================================================

// The following is an assignment of address values for all of the
// configuration registers for the purpose of table reads
#define _CONFIG              0x2007

//----- CONFIG Options --------------------------------------------------
#define _FOSC_LP             0x3FF8    // LP oscillator: Low-power crystal on RA4/OSC2/CLKOUT and RA5/OSC1/CLKIN
#define _LP_OSC              0x3FF8    // LP oscillator: Low-power crystal on RA4/OSC2/CLKOUT and RA5/OSC1/CLKIN
#define _FOSC_XT             0x3FF9    // XT oscillator: Crystal/resonator on RA4/OSC2/CLKOUT and RA5/OSC1/CLKIN
#define _XT_OSC              0x3FF9    // XT oscillator: Crystal/resonator on RA4/OSC2/CLKOUT and RA5/OSC1/CLKIN
#define _FOSC_HS             0x3FFA    // HS oscillator: High-speed crystal/resonator on RA4/OSC2/CLKOUT and RA5/OSC1/CLKIN
#define _HS_OSC              0x3FFA    // HS oscillator: High-speed crystal/resonator on RA4/OSC2/CLKOUT and RA5/OSC1/CLKIN
#define _FOSC_EC             0x3FFB    // EC: I/O function on RA4/OSC2/CLKOUT pin, CLKIN on RA5/OSC1/CLKIN
#define _EC_OSC              0x3FFB    // EC: I/O function on RA4/OSC2/CLKOUT pin, CLKIN on RA5/OSC1/CLKIN
#define _FOSC_INTOSCIO       0x3FFC    // INTOSCIO oscillator: I/O function on RA4/OSC2/CLKOUT pin, I/O function on RA5/OSC1/CLKIN
#define _INTRC_OSC_NOCLKOUT  0x3FFC    // INTOSCIO oscillator: I/O function on RA4/OSC2/CLKOUT pin, I/O function on RA5/OSC1/CLKIN
#define _INTOSCIO            0x3FFC    // INTOSCIO oscillator: I/O function on RA4/OSC2/CLKOUT pin, I/O function on RA5/OSC1/CLKIN
#define _FOSC_INTOSCCLK      0x3FFD    // INTOSC oscillator: CLKOUT function on RA4/OSC2/CLKOUT pin, I/O function on RA5/OSC1/CLKIN
#define _INTRC_OSC_CLKOUT    0x3FFD    // INTOSC oscillator: CLKOUT function on RA4/OSC2/CLKOUT pin, I/O function on RA5/OSC1/CLKIN
#define _INTOSC              0x3FFD    // INTOSC oscillator: CLKOUT function on RA4/OSC2/CLKOUT pin, I/O function on RA5/OSC1/CLKIN
#define _FOSC_EXTRCIO        0x3FFE    // RCIO oscillator: I/O function on RA4/OSC2/CLKOUT pin, RC on RA5/OSC1/CLKIN
#define _EXTRC_OSC_NOCLKOUT  0x3FFE    // RCIO oscillator: I/O function on RA4/OSC2/CLKOUT pin, RC on RA5/OSC1/CLKIN
#define _EXTRCIO             0x3FFE    // RCIO oscillator: I/O function on RA4/OSC2/CLKOUT pin, RC on RA5/OSC1/CLKIN
#define _FOSC_EXTRCCLK       0x3FFF    // RC oscillator: CLKOUT function on RA4/OSC2/CLKOUT pin, RC on RA5/OSC1/CLKIN
#define _EXTRC_OSC_CLKOUT    0x3FFF    // RC oscillator: CLKOUT function on RA4/OSC2/CLKOUT pin, RC on RA5/OSC1/CLKIN
#define _EXTRC               0x3FFF    // RC oscillator: CLKOUT function on RA4/OSC2/CLKOUT pin, RC on RA5/OSC1/CLKIN

#define _WDTE_OFF            0x3FF7    // WDT disabled and can be enabled by SWDTEN bit of the WDTCON register
#define _WDT_OFF             0x3FF7    // WDT disabled and can be enabled by SWDTEN bit of the WDTCON register
#define _WDTE_ON             0x3FFF    // WDT enabled
#define _WDT_ON              0x3FFF    // WDT enabled

#define _PWRTE_ON            0x3FEF    // PWRT enabled
#define _PWRTE_OFF           0x3FFF    // PWRT disabled

#define _MCLRE_OFF           0x3FDF    // MCLR pin function is digital input, MCLR internally tied to VDD
#define _MCLRE_ON            0x3FFF    // MCLR pin function is MCLR

#define _CP_ON               0x3FBF    // Program memory code protection is enabled
#define _CP_OFF              0x3FFF    // Program memory code protection is disabled

#define _IOSCFS_4MHZ         0x3F7F    // 4 MHz
#define _IOSCFS4             0x3F7F    // 4 MHz
#define _IOSCFS_8MHZ         0x3FFF    // 8 MHz
#define _IOSCFS8             0x3FFF    // 8 MHz

#define _BOREN_OFF           0x3CFF    // BOR Disabled
#define _BOD_OFF             0x3CFF    // BOR Disabled
#define _BOR_OFF             0x3CFF    // BOR Disabled
#define _BOREN_NSLEEP        0x3EFF    // BOR enabled during operation and disabled in Sleep
#define _BOD_NSLEEP          0x3EFF    // BOR enabled during operation and disabled in Sleep
#define _BOR_NSLEEP          0x3EFF    // BOR enabled during operation and disabled in Sleep
#define _BOREN_ON            0x3FFF    // BOR enabled
#define _BOD_ON              0x3FFF    // BOR enabled
#define _BOR_ON              0x3FFF    // BOR enabled

//----- DEVID Equates --------------------------------------------------
#define _DEVID1              0x2006

//----- IDLOC Equates --------------------------------------------------
#define _IDLOC0              0x2000
#define _IDLOC1              0x2001
#define _IDLOC2              0x2002
#define _IDLOC3              0x2003

//         LIST

// ----- ANSEL bits --------------------
typedef union {
  struct {
    unsigned char ANS0:1;
    unsigned char ANS1:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char ANS4:1;
    unsigned char ANS5:1;
    unsigned char ANS6:1;
    unsigned char ANS7:1;
  };
} __ANSELbits_t;
extern volatile __ANSELbits_t __at(ANSEL_ADDR) ANSELbits;

// ----- CM1CON0 bits --------------------
typedef union {
  struct {
    unsigned char C1CH0:1;
    unsigned char C1CH1:1;
    unsigned char C1R:1;
    unsigned char :1;
    unsigned char C1POL:1;
    unsigned char C1OE:1;
    unsigned char C1OUT:1;
    unsigned char C1ON:1;
  };
} __CM1CON0bits_t;
extern volatile __CM1CON0bits_t __at(CM1CON0_ADDR) CM1CON0bits;

// ----- CM2CON0 bits --------------------
typedef union {
  struct {
    unsigned char C2CH0:1;
    unsigned char C2CH1:1;
    unsigned char C2R:1;
    unsigned char :1;
    unsigned char C2POL:1;
    unsigned char C2OE:1;
    unsigned char C2OUT:1;
    unsigned char C2ON:1;
  };
} __CM2CON0bits_t;
extern volatile __CM2CON0bits_t __at(CM2CON0_ADDR) CM2CON0bits;

// ----- CM2CON1 bits --------------------
typedef union {
  struct {
    unsigned char C2SYNC:1;
    unsigned char T1GSS:1;
    unsigned char C2HYS:1;
    unsigned char C1HYS:1;
    unsigned char T1ACS:1;
    unsigned char :1;
    unsigned char MC2OUT:1;
    unsigned char MC1OUT:1;
  };
} __CM2CON1bits_t;
extern volatile __CM2CON1bits_t __at(CM2CON1_ADDR) CM2CON1bits;

// ----- INTCON bits --------------------
typedef union {
  struct {
    unsigned char RAIF:1;
    unsigned char INTF:1;
    unsigned char TMR0IF:1;
    unsigned char RAIE:1;
    unsigned char INTE:1;
    unsigned char TMR0IE:1;
    unsigned char PEIE:1;
    unsigned char GIE:1;
  };
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char T0IF:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char T0IE:1;
    unsigned char :1;
    unsigned char :1;
  };
} __INTCONbits_t;
extern volatile __INTCONbits_t __at(INTCON_ADDR) INTCONbits;

// ----- IOC bits --------------------
typedef union {
  struct {
    unsigned char IOCA0:1;
    unsigned char IOCA1:1;
    unsigned char IOCA2:1;
    unsigned char IOCA3:1;
    unsigned char IOCA4:1;
    unsigned char IOCA5:1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char IOC0:1;
    unsigned char IOC1:1;
    unsigned char IOC2:1;
    unsigned char IOC3:1;
    unsigned char IOC4:1;
    unsigned char IOC5:1;
    unsigned char :1;
    unsigned char :1;
  };
} __IOCbits_t;
extern volatile __IOCbits_t __at(IOC_ADDR) IOCbits;

// ----- IOCA bits --------------------
typedef union {
  struct {
    unsigned char IOCA0:1;
    unsigned char IOCA1:1;
    unsigned char IOCA2:1;
    unsigned char IOCA3:1;
    unsigned char IOCA4:1;
    unsigned char IOCA5:1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char IOC0:1;
    unsigned char IOC1:1;
    unsigned char IOC2:1;
    unsigned char IOC3:1;
    unsigned char IOC4:1;
    unsigned char IOC5:1;
    unsigned char :1;
    unsigned char :1;
  };
} __IOCAbits_t;
extern volatile __IOCAbits_t __at(IOCA_ADDR) IOCAbits;

// ----- OPTION_REG bits --------------------
typedef union {
  struct {
    unsigned char PS0:1;
    unsigned char PS1:1;
    unsigned char PS2:1;
    unsigned char PSA:1;
    unsigned char T0SE:1;
    unsigned char T0CS:1;
    unsigned char INTEDG:1;
    unsigned char NOT_RAPU:1;
  };
} __OPTION_REGbits_t;
extern volatile __OPTION_REGbits_t __at(OPTION_REG_ADDR) OPTION_REGbits;

// ----- OSCTUNE bits --------------------
typedef union {
  struct {
    unsigned char TUN0:1;
    unsigned char TUN1:1;
    unsigned char TUN2:1;
    unsigned char TUN3:1;
    unsigned char TUN4:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __OSCTUNEbits_t;
extern volatile __OSCTUNEbits_t __at(OSCTUNE_ADDR) OSCTUNEbits;

// ----- PCON bits --------------------
typedef union {
  struct {
    unsigned char NOT_BOR:1;
    unsigned char NOT_POR:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char NOT_BOD:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __PCONbits_t;
extern volatile __PCONbits_t __at(PCON_ADDR) PCONbits;

// ----- PIE1 bits --------------------
typedef union {
  struct {
    unsigned char TMR1IE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char C1IE:1;
    unsigned char C2IE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char T1IE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __PIE1bits_t;
extern volatile __PIE1bits_t __at(PIE1_ADDR) PIE1bits;

// ----- PIR1 bits --------------------
typedef union {
  struct {
    unsigned char TMR1IF:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char C1IF:1;
    unsigned char C2IF:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char T1IF:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __PIR1bits_t;
extern volatile __PIR1bits_t __at(PIR1_ADDR) PIR1bits;

// ----- PORTA bits --------------------
typedef union {
  struct {
    unsigned char RA0:1;
    unsigned char RA1:1;
    unsigned char RA2:1;
    unsigned char RA3:1;
    unsigned char RA4:1;
    unsigned char RA5:1;
    unsigned char :1;
    unsigned char :1;
  };
} __PORTAbits_t;
extern volatile __PORTAbits_t __at(PORTA_ADDR) PORTAbits;

// ----- PORTC bits --------------------
typedef union {
  struct {
    unsigned char RC0:1;
    unsigned char RC1:1;
    unsigned char RC2:1;
    unsigned char RC3:1;
    unsigned char RC4:1;
    unsigned char RC5:1;
    unsigned char :1;
    unsigned char :1;
  };
} __PORTCbits_t;
extern volatile __PORTCbits_t __at(PORTC_ADDR) PORTCbits;

// ----- SRCON0 bits --------------------
typedef union {
  struct {
    unsigned char SRCLKEN:1;
    unsigned char :1;
    unsigned char PULSR:1;
    unsigned char PULSS:1;
    unsigned char C2REN:1;
    unsigned char C1SEN:1;
    unsigned char SR0:1;
    unsigned char SR1:1;
  };
} __SRCON0bits_t;
extern volatile __SRCON0bits_t __at(SRCON0_ADDR) SRCON0bits;

// ----- SRCON1 bits --------------------
typedef union {
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char SRCS0:1;
    unsigned char SRCS1:1;
  };
} __SRCON1bits_t;
extern volatile __SRCON1bits_t __at(SRCON1_ADDR) SRCON1bits;

// ----- STATUS bits --------------------
typedef union {
  struct {
    unsigned char C:1;
    unsigned char DC:1;
    unsigned char Z:1;
    unsigned char NOT_PD:1;
    unsigned char NOT_TO:1;
    unsigned char RP0:1;
    unsigned char RP1:1;
    unsigned char IRP:1;
  };
} __STATUSbits_t;
extern volatile __STATUSbits_t __at(STATUS_ADDR) STATUSbits;

// ----- T1CON bits --------------------
typedef union {
  struct {
    unsigned char TMR1ON:1;
    unsigned char TMR1CS:1;
    unsigned char NOT_T1SYNC:1;
    unsigned char T1OSCEN:1;
    unsigned char T1CKPS0:1;
    unsigned char T1CKPS1:1;
    unsigned char TMR1GE:1;
    unsigned char T1GINV:1;
  };
} __T1CONbits_t;
extern volatile __T1CONbits_t __at(T1CON_ADDR) T1CONbits;

// ----- TRISA bits --------------------
typedef union {
  struct {
    unsigned char TRISA0:1;
    unsigned char TRISA1:1;
    unsigned char TRISA2:1;
    unsigned char TRISA3:1;
    unsigned char TRISA4:1;
    unsigned char TRISA5:1;
    unsigned char :1;
    unsigned char :1;
  };
} __TRISAbits_t;
extern volatile __TRISAbits_t __at(TRISA_ADDR) TRISAbits;

// ----- TRISC bits --------------------
typedef union {
  struct {
    unsigned char TRISC0:1;
    unsigned char TRISC1:1;
    unsigned char TRISC2:1;
    unsigned char TRISC3:1;
    unsigned char TRISC4:1;
    unsigned char TRISC5:1;
    unsigned char :1;
    unsigned char :1;
  };
} __TRISCbits_t;
extern volatile __TRISCbits_t __at(TRISC_ADDR) TRISCbits;

// ----- VRCON bits --------------------
typedef union {
  struct {
    unsigned char VR0:1;
    unsigned char VR1:1;
    unsigned char VR2:1;
    unsigned char VR3:1;
    unsigned char VP6EN:1;
    unsigned char VRR:1;
    unsigned char C2VREN:1;
    unsigned char C1VREN:1;
  };
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char FVREN:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __VRCONbits_t;
extern volatile __VRCONbits_t __at(VRCON_ADDR) VRCONbits;

// ----- WPU bits --------------------
typedef union {
  struct {
    unsigned char WPUA0:1;
    unsigned char WPUA1:1;
    unsigned char WPUA2:1;
    unsigned char :1;
    unsigned char WPUA4:1;
    unsigned char WPUA5:1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char WPU0:1;
    unsigned char WPU1:1;
    unsigned char WPU2:1;
    unsigned char :1;
    unsigned char WPU4:1;
    unsigned char WPU5:1;
    unsigned char :1;
    unsigned char :1;
  };
} __WPUbits_t;
extern volatile __WPUbits_t __at(WPU_ADDR) WPUbits;

// ----- WPUA bits --------------------
typedef union {
  struct {
    unsigned char WPUA0:1;
    unsigned char WPUA1:1;
    unsigned char WPUA2:1;
    unsigned char :1;
    unsigned char WPUA4:1;
    unsigned char WPUA5:1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char WPU0:1;
    unsigned char WPU1:1;
    unsigned char WPU2:1;
    unsigned char :1;
    unsigned char WPU4:1;
    unsigned char WPU5:1;
    unsigned char :1;
    unsigned char :1;
  };
} __WPUAbits_t;
extern volatile __WPUAbits_t __at(WPUA_ADDR) WPUAbits;


#ifndef NO_BIT_DEFINES

#define ANS0                 ANSELbits.ANS0                 /* bit 0 */
#define ANS1                 ANSELbits.ANS1                 /* bit 1 */
#define ANS4                 ANSELbits.ANS4                 /* bit 4 */
#define ANS5                 ANSELbits.ANS5                 /* bit 5 */
#define ANS6                 ANSELbits.ANS6                 /* bit 6 */
#define ANS7                 ANSELbits.ANS7                 /* bit 7 */

#define C1CH0                CM1CON0bits.C1CH0              /* bit 0 */
#define C1CH1                CM1CON0bits.C1CH1              /* bit 1 */
#define C1R                  CM1CON0bits.C1R                /* bit 2 */
#define C1POL                CM1CON0bits.C1POL              /* bit 4 */
#define C1OE                 CM1CON0bits.C1OE               /* bit 5 */
#define C1OUT                CM1CON0bits.C1OUT              /* bit 6 */
#define C1ON                 CM1CON0bits.C1ON               /* bit 7 */

#define C2CH0                CM2CON0bits.C2CH0              /* bit 0 */
#define C2CH1                CM2CON0bits.C2CH1              /* bit 1 */
#define C2R                  CM2CON0bits.C2R                /* bit 2 */
#define C2POL                CM2CON0bits.C2POL              /* bit 4 */
#define C2OE                 CM2CON0bits.C2OE               /* bit 5 */
#define C2OUT                CM2CON0bits.C2OUT              /* bit 6 */
#define C2ON                 CM2CON0bits.C2ON               /* bit 7 */

#define C2SYNC               CM2CON1bits.C2SYNC             /* bit 0 */
#define T1GSS                CM2CON1bits.T1GSS              /* bit 1 */
#define C2HYS                CM2CON1bits.C2HYS              /* bit 2 */
#define C1HYS                CM2CON1bits.C1HYS              /* bit 3 */
#define T1ACS                CM2CON1bits.T1ACS              /* bit 4 */
#define MC2OUT               CM2CON1bits.MC2OUT             /* bit 6 */
#define MC1OUT               CM2CON1bits.MC1OUT             /* bit 7 */

#define RAIF                 INTCONbits.RAIF                /* bit 0 */
#define INTF                 INTCONbits.INTF                /* bit 1 */
#define T0IF                 INTCONbits.T0IF                /* bit 2 */
#define TMR0IF               INTCONbits.TMR0IF              /* bit 2 */
#define RAIE                 INTCONbits.RAIE                /* bit 3 */
#define INTE                 INTCONbits.INTE                /* bit 4 */
#define T0IE                 INTCONbits.T0IE                /* bit 5 */
#define TMR0IE               INTCONbits.TMR0IE              /* bit 5 */
#define PEIE                 INTCONbits.PEIE                /* bit 6 */
#define GIE                  INTCONbits.GIE                 /* bit 7 */

#define IOC0                 IOCbits.IOC0                   /* bit 0, shadows bit in IOCAbits */
#define IOCA0                IOCbits.IOCA0                  /* bit 0, shadows bit in IOCAbits */
#define IOC1                 IOCbits.IOC1                   /* bit 1, shadows bit in IOCAbits */
#define IOCA1                IOCbits.IOCA1                  /* bit 1, shadows bit in IOCAbits */
#define IOC2                 IOCbits.IOC2                   /* bit 2, shadows bit in IOCAbits */
#define IOCA2                IOCbits.IOCA2                  /* bit 2, shadows bit in IOCAbits */
#define IOC3                 IOCbits.IOC3                   /* bit 3, shadows bit in IOCAbits */
#define IOCA3                IOCbits.IOCA3                  /* bit 3, shadows bit in IOCAbits */
#define IOC4                 IOCbits.IOC4                   /* bit 4, shadows bit in IOCAbits */
#define IOCA4                IOCbits.IOCA4                  /* bit 4, shadows bit in IOCAbits */
#define IOC5                 IOCbits.IOC5                   /* bit 5, shadows bit in IOCAbits */
#define IOCA5                IOCbits.IOCA5                  /* bit 5, shadows bit in IOCAbits */

#define PS0                  OPTION_REGbits.PS0             /* bit 0 */
#define PS1                  OPTION_REGbits.PS1             /* bit 1 */
#define PS2                  OPTION_REGbits.PS2             /* bit 2 */
#define PSA                  OPTION_REGbits.PSA             /* bit 3 */
#define T0SE                 OPTION_REGbits.T0SE            /* bit 4 */
#define T0CS                 OPTION_REGbits.T0CS            /* bit 5 */
#define INTEDG               OPTION_REGbits.INTEDG          /* bit 6 */
#define NOT_RAPU             OPTION_REGbits.NOT_RAPU        /* bit 7 */

#define TUN0                 OSCTUNEbits.TUN0               /* bit 0 */
#define TUN1                 OSCTUNEbits.TUN1               /* bit 1 */
#define TUN2                 OSCTUNEbits.TUN2               /* bit 2 */
#define TUN3                 OSCTUNEbits.TUN3               /* bit 3 */
#define TUN4                 OSCTUNEbits.TUN4               /* bit 4 */

#define NOT_BOD              PCONbits.NOT_BOD               /* bit 0 */
#define NOT_BOR              PCONbits.NOT_BOR               /* bit 0 */
#define NOT_POR              PCONbits.NOT_POR               /* bit 1 */

#define T1IE                 PIE1bits.T1IE                  /* bit 0 */
#define TMR1IE               PIE1bits.TMR1IE                /* bit 0 */
#define C1IE                 PIE1bits.C1IE                  /* bit 3 */
#define C2IE                 PIE1bits.C2IE                  /* bit 4 */

#define T1IF                 PIR1bits.T1IF                  /* bit 0 */
#define TMR1IF               PIR1bits.TMR1IF                /* bit 0 */
#define C1IF                 PIR1bits.C1IF                  /* bit 3 */
#define C2IF                 PIR1bits.C2IF                  /* bit 4 */

#define RA0                  PORTAbits.RA0                  /* bit 0 */
#define RA1                  PORTAbits.RA1                  /* bit 1 */
#define RA2                  PORTAbits.RA2                  /* bit 2 */
#define RA3                  PORTAbits.RA3                  /* bit 3 */
#define RA4                  PORTAbits.RA4                  /* bit 4 */
#define RA5                  PORTAbits.RA5                  /* bit 5 */

#define RC0                  PORTCbits.RC0                  /* bit 0 */
#define RC1                  PORTCbits.RC1                  /* bit 1 */
#define RC2                  PORTCbits.RC2                  /* bit 2 */
#define RC3                  PORTCbits.RC3                  /* bit 3 */
#define RC4                  PORTCbits.RC4                  /* bit 4 */
#define RC5                  PORTCbits.RC5                  /* bit 5 */

#define SRCLKEN              SRCON0bits.SRCLKEN             /* bit 0 */
#define PULSR                SRCON0bits.PULSR               /* bit 2 */
#define PULSS                SRCON0bits.PULSS               /* bit 3 */
#define C2REN                SRCON0bits.C2REN               /* bit 4 */
#define C1SEN                SRCON0bits.C1SEN               /* bit 5 */
#define SR0                  SRCON0bits.SR0                 /* bit 6 */
#define SR1                  SRCON0bits.SR1                 /* bit 7 */

#define SRCS0                SRCON1bits.SRCS0               /* bit 6 */
#define SRCS1                SRCON1bits.SRCS1               /* bit 7 */

#define C                    STATUSbits.C                   /* bit 0 */
#define DC                   STATUSbits.DC                  /* bit 1 */
#define Z                    STATUSbits.Z                   /* bit 2 */
#define NOT_PD               STATUSbits.NOT_PD              /* bit 3 */
#define NOT_TO               STATUSbits.NOT_TO              /* bit 4 */
#define RP0                  STATUSbits.RP0                 /* bit 5 */
#define RP1                  STATUSbits.RP1                 /* bit 6 */
#define IRP                  STATUSbits.IRP                 /* bit 7 */

#define TMR1ON               T1CONbits.TMR1ON               /* bit 0 */
#define TMR1CS               T1CONbits.TMR1CS               /* bit 1 */
#define NOT_T1SYNC           T1CONbits.NOT_T1SYNC           /* bit 2 */
#define T1OSCEN              T1CONbits.T1OSCEN              /* bit 3 */
#define T1CKPS0              T1CONbits.T1CKPS0              /* bit 4 */
#define T1CKPS1              T1CONbits.T1CKPS1              /* bit 5 */
#define TMR1GE               T1CONbits.TMR1GE               /* bit 6 */
#define T1GINV               T1CONbits.T1GINV               /* bit 7 */

#define TRISA0               TRISAbits.TRISA0               /* bit 0 */
#define TRISA1               TRISAbits.TRISA1               /* bit 1 */
#define TRISA2               TRISAbits.TRISA2               /* bit 2 */
#define TRISA3               TRISAbits.TRISA3               /* bit 3 */
#define TRISA4               TRISAbits.TRISA4               /* bit 4 */
#define TRISA5               TRISAbits.TRISA5               /* bit 5 */

#define TRISC0               TRISCbits.TRISC0               /* bit 0 */
#define TRISC1               TRISCbits.TRISC1               /* bit 1 */
#define TRISC2               TRISCbits.TRISC2               /* bit 2 */
#define TRISC3               TRISCbits.TRISC3               /* bit 3 */
#define TRISC4               TRISCbits.TRISC4               /* bit 4 */
#define TRISC5               TRISCbits.TRISC5               /* bit 5 */

#define VR0                  VRCONbits.VR0                  /* bit 0 */
#define VR1                  VRCONbits.VR1                  /* bit 1 */
#define VR2                  VRCONbits.VR2                  /* bit 2 */
#define VR3                  VRCONbits.VR3                  /* bit 3 */
#define FVREN                VRCONbits.FVREN                /* bit 4 */
#define VP6EN                VRCONbits.VP6EN                /* bit 4 */
#define VRR                  VRCONbits.VRR                  /* bit 5 */
#define C2VREN               VRCONbits.C2VREN               /* bit 6 */
#define C1VREN               VRCONbits.C1VREN               /* bit 7 */

#define WPU0                 WPUbits.WPU0                   /* bit 0, shadows bit in WPUAbits */
#define WPUA0                WPUbits.WPUA0                  /* bit 0, shadows bit in WPUAbits */
#define WPU1                 WPUbits.WPU1                   /* bit 1, shadows bit in WPUAbits */
#define WPUA1                WPUbits.WPUA1                  /* bit 1, shadows bit in WPUAbits */
#define WPU2                 WPUbits.WPU2                   /* bit 2, shadows bit in WPUAbits */
#define WPUA2                WPUbits.WPUA2                  /* bit 2, shadows bit in WPUAbits */
#define WPU4                 WPUbits.WPU4                   /* bit 4, shadows bit in WPUAbits */
#define WPUA4                WPUbits.WPUA4                  /* bit 4, shadows bit in WPUAbits */
#define WPU5                 WPUbits.WPU5                   /* bit 5, shadows bit in WPUAbits */
#define WPUA5                WPUbits.WPUA5                  /* bit 5, shadows bit in WPUAbits */
#endif /* NO_BIT_DEFINES */

#ifndef NO_LEGACY_NAMES
#define ANSEL_bits           ANSELbits
#define CM1CON0_bits         CM1CON0bits
#define CM2CON0_bits         CM2CON0bits
#define CM2CON1_bits         CM2CON1bits
#define INTCON_bits          INTCONbits
#define IOC_bits             IOCbits
#define IOCA_bits            IOCAbits
#define OPTION_REG_bits      OPTION_REGbits
#define OSCTUNE_bits         OSCTUNEbits
#define PCON_bits            PCONbits
#define PIE1_bits            PIE1bits
#define PIR1_bits            PIR1bits
#define PORTA_bits           PORTAbits
#define PORTC_bits           PORTCbits
#define SRCON0_bits          SRCON0bits
#define SRCON1_bits          SRCON1bits
#define STATUS_bits          STATUSbits
#define T1CON_bits           T1CONbits
#define TRISA_bits           TRISAbits
#define TRISC_bits           TRISCbits
#define VRCON_bits           VRCONbits
#define WPU_bits             WPUbits
#define WPUA_bits            WPUAbits
#endif /* NO_LEGACY_NAMES */

#endif
