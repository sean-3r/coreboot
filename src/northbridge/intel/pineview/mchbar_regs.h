/*
 * This file is part of the coreboot project.
 *
 * Copyright (C) 2020 Angel Pons <th3fanbus@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __PINEVIEW_MCHBAR_REGS_H__
#define __PINEVIEW_MCHBAR_REGS_H__

/* Indexed register helper macros */
#define Gz(r, z)	((r) + ((z) * 0x100))
#define Ly(r, y)	((r) + ((y) * 4))
#define Cx(r, x)	((r) + ((x) * 0x400))
#define CxLy(r, x, y)	(((x) *	0x400) + (r) + ((y) * 4))

#define HTPACER			0x10
#define HPWRCTL1		0x14
#define HPWRCTL2		0x18
#define HPWRCTL3		0x1C
#define HTCLKGTCTL		0x20
#define SLIMCFGTMG		0x24
#define HTBONUS0		0x28
#define HTBONUS1		0x2C
#define HIT0			0x30
#define HIT1			0x34
#define HIT2			0x38
#define HIT3			0x3C
#define HIT4			0x40
#define HIT5			0x44
#define HICLKGTCTL		0x48
#define HIBONUS			0x4C
#define XTPR0			0x50
#define XTPR1			0x54
#define XTPR2			0x58
#define XTPR3			0x5C
#define XTPR4			0x60
#define XTPR5			0x64
#define XTPR6			0x68
#define XTPR7			0x6C
#define XTPR8			0x70
#define XTPR9			0x74
#define XTPR10			0x78
#define XTPR11			0x7C
#define XTPR12			0x80
#define XTPR13			0x84
#define XTPR14			0x88
#define XTPR15			0x8C
#define FCCREQ0SET		0x90
#define FCCREQ1SET		0x98
#define FCCREQ0MSK		0xA0
#define FCCREQ1MSK		0xA8
#define FCCDATASET		0xB0
#define FCCDATAMSK		0xB8
#define FCCCTL			0xC0
#define CFGPOCTL1		0xC8
#define CFGPOCTL2		0xCC
#define NOACFGBUSCTL		0xD0
#define POC			0xF4
#define POCRL			0xFA
#define CHDECMISC		0x111
#define ZQCALQT			0x114
#define SHC2REGI		0x115
#define SHC2REGII		0x117
#define WRWMCONFIG		0x120
#define SHC2REGIII		0x124
#define SHPENDREG		0x125
#define SHPAGECTRL		0x127
#define SHCMPLWRCMD		0x129
#define SHC2MINTM		0x12A
#define SHC2IDLETM		0x12C
#define BYPACTSF		0x12D
#define BYPKNRULE		0x12E
#define SHBONUSREG		0x12F
#define COMPCTRL1		0x130
#define COMPCTRL2		0x134
#define COMPCTRL3		0x138
#define XCOMP			0x13C
#define RCMEASBUFXOVR		0x140
#define ACTXCOMP		0x144
#define FINALXRCOMPRD		0x148
#define SCOMP			0x14C
#define SCMEASBUFOVR		0x150
#define ACTSCOMP		0x154
#define FINALXSCOMP		0x158
#define XSCSTART		0x15A
#define DCOMPRAW1		0x15C
#define DCOMPRAW2		0x160
#define DCMEASBUFOVR		0x164
#define FINALDELCOMP		0x168
#define OFREQDELSEL		0x16C
#define XCOMPDFCTRL		0x170
#define ZQCALCTRL		0x178
#define XCOMPCMNBNS		0x17A
#define PSMIOVR			0x17C
#define CSHRPDCTL		0x180
#define CSPDSLVWT		0x182
#define CSHRPDSHFTOUTLO		0x184
#define CSHRFIFOCTL		0x188
#define CSHWRIOBONUS		0x189
#define CSHRPDCTL2		0x18A
#define CSHRWRIOMLNS		0x18C
#define CSHRPDCTL3		0x18E
#define CSHRPDCTL4		0x190
#define CSHWRIOBONUS2		0x192
#define CSHRMSTDYNDLLENB	0x193
#define C0TXCCCMISC		0x194
#define CSHRMSTRCTL0		0x198
#define CSHRMSTRCTL1		0x19C
#define CSHRDQSTXPGM		0x1A0
#define CSHRDQSCMN		0x1A4
#define CSHRDDR3CTL		0x1A8
#define CSHRDIGANAOBSCTL	0x1B0
#define CSHRMISCCTL		0x1B4
#define CSHRMISCCTL1		0x1B6
#define CSHRDFTCTL		0x1B8
#define MPLLCTL			0x1C0
#define MPLLDBG			0x1C4
#define CREFPI			0x1C8
#define CSHRDQSDQTX		0x1E0
#define C0DRB0			0x200
#define C0DRB1			0x202
#define C0DRB2			0x204
#define C0DRB3			0x206
#define C0DRA01			0x208
#define C0DRA23			0x20A
#define CLOCKGATINGIII		0x210
#define SHC3C4REG1		0x212
#define SHC2REG4		0x216
#define C0COREBONUS2		0x218
#define C0GNT2LNCH3		0x21C
#define C0GNT2LNCH1		0x220
#define C0GNT2LNCH2		0x224
#define C0MISCTM		0x228
#define SHCYCTRKRDWRSFLV	0x22C
#define SHCYCTRKRFSHSFLV	0x232
#define SHCYCTRKCTLLVOV		0x234
#define C0WRDPYN		0x239
#define C0C2REG			0x23C
#define C0STATRDADJV		0x23E
#define C0LATCTRL		0x240
#define C0BYPCTRL		0x241
#define C0CWBCTRL		0x243
#define C0ARBCTRL		0x244
#define C0ADDCSCTRL		0x246
#define C0STATRDCTRL		0x248
#define C0RDFIFOCTRL		0x24C
#define C0WRDATACTRL		0x24D
#define C0CYCTRKPCHG		0x250
#define C0CYCTRKACT		0x252
#define C0CYCTRKWR		0x256
#define C0CYCTRKRD		0x258
#define C0CYCTRKREFR		0x25B
#define C0CYCTRKPCHG2		0x25D
#define C0RDQCTRL		0x25E
#define C0CKECTRL		0x260
#define C0CKEDELAY		0x264
#define C0PWLRCTRL		0x265
#define C0EPCONFIG		0x267
#define C0REFRCTRL2		0x268
#define C0REFRCTRL		0x269
#define C0PVCFG			0x26F
#define C0JEDEC			0x271
#define C0ARBSPL		0x272
#define C0DYNRDCTRL		0x274
#define C0WRWMFLSH		0x278
#define C0ECCERRLOG		0x280
#define C0DITCTRL		0x288
#define C0ODTRKCTRL		0x294
#define C0ODT			0x298
#define C0ODTCTRL		0x29C
#define C0GTEW			0x2A0
#define C0GTC			0x2A4
#define C0DTPEW			0x2A8
#define C0DTAEW			0x2AC
#define C0DTC			0x2B4
#define C0REFCTRL		0x2B8
#define C0NOASEL		0x2BF
#define C0COREBONUS		0x2C0
#define C0DARBTEST		0x2C8
#define CLOCKGATINGI		0x2D1
#define MEMTDPCTW		0x2D4
#define MTDPCTWHOTTH		0x2D8
#define MTDPCTWHOTTH2		0x2DC
#define MTDPCTWHOTTH3		0x2E0
#define MTDPCTWHOTTH4		0x2E4
#define MTDPCTWAUXTH		0x2E8
#define MTDPCTWIRTH		0x2EC
#define MTDPCCRWTWHOTTH		0x2F0
#define MTDPCCRWTWHOTTH2	0x2F4
#define MTDPCCRWTWHOTTH3	0x2F8
#define MTDPCCRWTWHOTTH4	0x2FC
#define MTDPCHOTTHINT		0x300
#define MTDPCHOTTHINT2		0x304
#define MTDPCTLAUXTNTINT	0x308
#define MTDPCMISC		0x30C

/* RCOMP 0 */
#define C0RCOMPCTRL0		0x31C
#define C0RCOMPMULT0		0x320
#define C0RCOMPOVR0		0x322
#define C0RCOMPOSV0		0x326
#define C0SCOMPVREF0		0x32A
#define C0SCOMPOVR0		0x32C
#define C0SCOMPOFF0		0x32E
#define C0DCOMP0		0x330
#define C0SLEWBASE0		0x332
#define C0SLEWPULUT0		0x334
#define C0SLEWPDLUT0		0x338
#define C0DCOMPOVR0		0x33C
#define C0DCOMPOFF0		0x340

/* RCOMP 2 */
#define C0RCOMPCTRL2		0x374
#define C0RCOMPMULT2		0x378
#define C0RCOMPOVR2		0x37A
#define C0RCOMPOSV2		0x37E
#define C0SCOMPVREF2		0x382
#define C0SCOMPOVR2		0x384
#define C0SCOMPOFF2		0x386
#define C0DCOMP2		0x388
#define C0SLEWBASE2		0x38A
#define C0SLEWPULUT2		0x38C
#define C0SLEWPDLUT2		0x390
#define C0DCOMPOVR2		0x394
#define C0DCOMPOFF2		0x398

/* RCOMP 3 */
#define C0RCOMPCTRL3		0x3A2
#define C0RCOMPMULT3		0x3A6
#define C0RCOMPOVR3		0x3A8
#define C0RCOMPOSV3		0x3AC
#define C0SCOMPVREF3		0x3B0
#define C0SCOMPOVR3		0x3B2
#define C0SCOMPOFF3		0x3B4
#define C0DCOMP3		0x3B6
#define C0SLEWBASE3		0x3B8
#define C0SLEWPULUT3		0x3BA
#define C0SLEWPDLUT3		0x3BE
#define C0DCOMPOVR3		0x3C2
#define C0DCOMPOFF3		0x3C6

/* RCOMP 4 */
#define C0RCOMPCTRL4		0x3D0
#define C0RCOMPMULT4		0x3D4
#define C0RCOMPOVR4		0x3D6
#define C0RCOMPOSV4		0x3DA
#define C0SCOMPVREF4		0x3DE
#define C0SCOMPOVR4		0x3E0
#define C0SCOMPOFF4		0x3E2
#define C0DCOMP4		0x3E4
#define C0SLEWBASE4		0x3E6
#define C0SLEWPULUT4		0x3E8
#define C0SLEWPDLUT4		0x3EC
#define C0DCOMPOVR4		0x3F0
#define C0DCOMPOFF4		0x3F4

/* RCOMP 5 */
#define C0RCOMPCTRL5		0x3FE
#define C0RCOMPMULT5		0x402
#define C0RCOMPOVR5		0x404
#define C0RCOMPOSV5		0x408
#define C0SCOMPVREF5		0x40C
#define C0SCOMPOVR5		0x40E
#define C0SCOMPOFF5		0x410
#define C0DCOMP5		0x412
#define C0SLEWBASE5		0x414
#define C0SLEWPULUT5		0x416
#define C0SLEWPDLUT5		0x41A
#define C0DCOMPOVR5		0x41E
#define C0DCOMPOFF5		0x422

/* RCOMP 6 */
#define C0RCOMPCTRL6		0x42C
#define C0RCOMPMULT6		0x430
#define C0RCOMPOVR6		0x432
#define C0RCOMPOSV6		0x436
#define C0SCOMPVREF6		0x43A
#define C0SCOMPOVR6		0x43C
#define C0SCOMPOFF6		0x43E
#define C0DCOMP6		0x440
#define C0SLEWBASE6		0x442
#define C0SLEWPULUT6		0x444
#define C0SLEWPDLUT6		0x448
#define C0DCOMPOVR6		0x44C
#define C0DCOMPOFF6		0x450

#define C0ODTRECORDX		0x45A
#define C0DQSODTRECORDX		0x462
#define XCOMPSDR0BNS		0x4B0
#define C0TXDQ0R0DLL		0x500
#define C0TXDQ0R1DLL		0x501
#define C0TXDQ0R2DLL		0x502
#define C0TXDQ0R3DLL		0x503
#define C0TXDQ1R0DLL		0x504
#define C0TXDQ1R1DLL		0x505
#define C0TXDQ1R2DLL		0x506
#define C0TXDQ1R3DLL		0x507
#define C0TXDQ2R0DLL		0x508
#define C0TXDQ2R1DLL		0x509
#define C0TXDQ2R2DLL		0x50A
#define C0TXDQ2R3DLL		0x50B
#define C0TXDQ3R0DLL		0x50C
#define C0TXDQ3R1DLL		0x50D
#define C0TXDQ3R2DLL		0x50E
#define C0TXDQ3R3DLL		0x50F
#define C0TXDQ4R0DLL		0x510
#define C0TXDQ4R1DLL		0x511
#define C0TXDQ4R2DLL		0x512
#define C0TXDQ4R3DLL		0x513
#define C0TXDQ5R0DLL		0x514
#define C0TXDQ5R1DLL		0x515
#define C0TXDQ5R2DLL		0x516
#define C0TXDQ5R3DLL		0x517
#define C0TXDQ6R0DLL		0x518
#define C0TXDQ6R1DLL		0x519
#define C0TXDQ6R2DLL		0x51A
#define C0TXDQ6R3DLL		0x51B
#define C0TXDQ7R0DLL		0x51C
#define C0TXDQ7R1DLL		0x51D
#define C0TXDQ7R2DLL		0x51E
#define C0TXDQ7R3DLL		0x51F
#define C0TXDQS0R0DLL		0x520
#define C0TXDQS0R1DLL		0x521
#define C0TXDQS0R2DLL		0x522
#define C0TXDQS0R3DLL		0x523
#define C0TXDQS1R0DLL		0x524
#define C0TXDQS1R1DLL		0x525
#define C0TXDQS1R2DLL		0x526
#define C0TXDQS1R3DLL		0x527
#define C0TXDQS2R0DLL		0x528
#define C0TXDQS2R1DLL		0x529
#define C0TXDQS2R2DLL		0x52A
#define C0TXDQS2R3DLL		0x52B
#define C0TXDQS3R0DLL		0x52C
#define C0TXDQS3R1DLL		0x52D
#define C0TXDQS3R2DLL		0x52E
#define C0TXDQS3R3DLL		0x52F
#define C0TXDQS4R0DLL		0x530
#define C0TXDQS4R1DLL		0x531
#define C0TXDQS4R2DLL		0x532
#define C0TXDQS4R3DLL		0x533
#define C0TXDQS5R0DLL		0x534
#define C0TXDQS5R1DLL		0x535
#define C0TXDQS5R2DLL		0x536
#define C0TXDQS5R3DLL		0x537
#define C0TXDQS6R0DLL		0x538
#define C0TXDQS6R1DLL		0x539
#define C0TXDQS6R2DLL		0x53A
#define C0TXDQS6R3DLL		0x53B
#define C0TXDQS7R0DLL		0x53C
#define C0TXDQS7R1DLL		0x53D
#define C0TXDQS7R2DLL		0x53E
#define C0TXDQS7R3DLL		0x53F

#define C0DLLRCVCTLy(y)		Ly(0x540, y)
#define C0RXRCVyDLL(y)		Ly(0x560, y)
#define C0MISCCTLy(y)		Ly(0x561, y)

#define C0TXCMD0DLL		0x580
#define C0TXCK0DLL		0x581
#define C0TXCK1DLL		0x582
#define C0TXCMD1DLL		0x583
#define C0TXCTL0DLL		0x584
#define C0TXCTL1DLL		0x585
#define C0TXCTL2DLL		0x586
#define C0TXCTL3DLL		0x587
#define C0RCVMISCCTL1		0x588
#define C0RCVMISCCTL2		0x58C
#define C0MCHODTMISCCTL1	0x590
#define C0DYNSLVDLLEN		0x592
#define C0CMDTX1		0x594
#define C0CMDTX2		0x598
#define C0CTLTX2		0x59C
#define C0CKTX			0x5A0

#define C0DQRyTX1(y)		Ly(0x5A4, y)
#define C0DQSRyTX1(y)		Ly(0x5B4, y)

#define C0DQSDQTX2		0x5C4

#define C0DQSDQRyTX3(y)		Ly(0x5C8, y)

#define C0RSTCTL		0x5D8
#define C0MISCCTL		0x5D9
#define C0MISC2			0x5DA
#define C0BONUS			0x5DB
#define CMNDQFIFORST		0x5DC
#define C0IOBUFACTCTL		0x5DD
#define C0BONUS2		0x5DE
#define C0DLLPIEN		0x5F0
#define C0COARSEDLY0		0x5FA
#define C0COARSEDLY1		0x5FC
#define SHC3C4REG2		0x610
#define SHC3C4REG3		0x612
#define SHC3C4REG4		0x614
#define SHCYCTRKCKEL		0x62C
#define SHCYCTRKACTSFLV		0x630
#define SHCYCTRKPCHGSFLV	0x634
#define C1COREBONUS		0x6C0
#define CLOCKGATINGII		0x6D1
#define CLKXSSH2MCBYPPHAS	0x6D4
#define CLKXSSH2MCBYP		0x6D8
#define CLKXSSH2MCRDQ		0x6E0
#define CLKXSSH2MCRDCST		0x6E8
#define CLKXSSMC2H		0x6F0
#define CLKXSSMC2HALT		0x6F8
#define CLKXSSH2MD		0x700
#define CLKXSSH2X2MD		0x708
#define XSBFTCTL		0xB00
#define XSBFTDRR		0xB04
#define DACGIOCTRL1		0xB08
#define CLKCFG			0xC00
#define HMCCMP			0xC04
#define HMCCMC			0xC08
#define HMPLLO			0xC10
#define CPCTL			0xC1C
#define SSKPD			0xC20
#define HMCCPEXT		0xC28
#define HMDCPEXT		0xC2C
#define CPBUP			0xC30
#define HMBYPEXT		0xC34
#define HPLLVCO			0xC38
#define HPLLMONCTLA		0xC3C
#define HPLLMONCTLB		0xC40
#define HPLLMONCTLC		0xC44
#define DPLLMONCTLA		0xC48
#define DPLLMONCTLB		0xC4C
#define HMDCMP			0xC50
#define HMBYPCP			0xC54
#define FLRCSSEL		0xC58
#define DPLLMONCTLC		0xC5C
#define MPLLMONCTLA		0xC60
#define MPLLMONCTLB		0xC64
#define MPLLMONCTLC		0xC68
#define PLLFUSEOVR1		0xC70
#define PLLFUSEOVR2		0xC74
#define GCRCSCP			0xC80
#define GCRCSCMP		0xC84
#define GCRCSBYPCP		0xC86
#define GCPLLO			0xC88
#define MCH_GCFGC		0xC8C	/* Note: 'GCFGC' is also defined in 'i915_reg.h' */
#define GTDPCTSHOTTH		0xD00
#define GTDPCTSHOTTH2		0xD04
#define MTDPCTSHOTTH		0xD08
#define MTDPCTSHOTTH2		0xD0C
#define TSROTDPC		0xD10
#define TSMISC			0xD14
#define TEST_MC			0xE00
#define APSMCTL			0xE04
#define DFT_STRAP1		0xE08
#define DFT_STRAP2		0xE0C
#define CFGFUSE1		0xE10
#define FUSEOVR1		0xE1C
#define FUSEOVR2		0xE20
#define FUSEOVR3		0xE24
#define FUSEOVR4		0xE28
#define NOA_RCOMP		0xE2C
#define NOAR1			0xE30
#define NOAR2			0xE34
#define NOAR3			0xE38
#define NOAR4			0xE3C
#define NOAR5			0xE40
#define NOAR6			0xE44
#define NOAR7			0xE48
#define NOAR8			0xE4C
#define NOAR9			0xE50
#define NOAR10			0xE54
#define ODOC1			0xE58
#define ODOC2			0xE5C
#define ODOSTAT			0xE60
#define ODOSTAT2		0xE64
#define ODOSTAT3		0xE68
#define DPLLMMC			0xE6C
#define CFGFUSE2		0xE70
#define FUSEOVR5		0xE78
#define NOA_LVDSCTRL		0xE7C
#define NOABUFMSK		0xE80
#define PMCFG			0xF10
#define PMSTS			0xF14
#define PMMISC			0xF18
#define GTDPCNME		0xF20
#define GTDPCTW			0xF24
#define GTDPCTW2		0xF28
#define GTDPTWHOTTH		0xF2C
#define GTDPTWHOTTH2		0xF30
#define GTDPTWHOTTH3		0xF34
#define GTDPTWHOTTH4		0xF38
#define GTDPTWAUXTH		0xF3C
#define GTDPCTWIRTH		0xF40
#define GTDPCTWIRTH2NMISC	0xF44
#define GTDPHTM			0xF48
#define GTDPHTM2		0xF4C
#define GTDPHTM3		0xF50
#define GTDPHTM4		0xF54
#define GTDPAHTMOV		0xF58
#define GTDPAHTMOV2		0xF5C
#define GTDPAHTMOV3		0xF60
#define GTDPAHTMOV4		0xF64
#define GTDPATM			0xF68
#define GTDPCGC			0xF6C
#define PCWBFC			0xF90
#define SCWBFC			0xF98
#define SBCTL			0xFA0
#define SBCTL2			0xFA4
#define PCWBPFC			0xFA8
#define SBCTL3			0xFAC
#define SBCLKGATECTRL		0xFB0
#define SBBONUS0		0xFB4
#define SBBONUS1		0xFB6
#define PSMICTL			0xFC0
#define PSMIMBASE		0xFC4
#define PSMIMLIMIT		0xFC8
#define PSMIDEBUG		0xFCC
#define PSMICTL2		0xFD0
#define PSMIRPLYNOAMAP		0xFD4
#define CICGDIS			0xFF0
#define CICTRL			0xFF4
#define CISDCTRL		0xFF8
#define CIMBSR			0xFFC
#define GFXC3C4			0x1104
#define PMDSLFRC		0x1108
#define PMMSPMRES		0x110C
#define PMCLKRC			0x1110
#define PMPXPRC			0x1114
#define PMC6CTL			0x111C
#define PMICHTST		0x1120
#define PMBAK			0x1124
#define C0TXDQDQS0MISC		0x2800
#define C0TXDQDQS1MISC		0x2804
#define C0TXDQDQS2MISC		0x2808
#define C0TXDQDQS3MISC		0x280C
#define C0TXDQDQS4MISC		0x2810
#define C0TXDQDQS5MISC		0x2814
#define C0TXDQDQS6MISC		0x2818
#define C0TXDQDQS7MISC		0x281C
#define CSHRPDCTL5		0x2C00
#define CSHWRIOBONUSX		0x2C02
#define C0CALRESULT1		0x2C04
#define C0CALRESULT2		0x2C08
#define C0MODREFOFFSET1		0x2C0C
#define C0MODREFOFFSET2		0x2C10
#define C0SLVDLLOUTEN		0x2C14
#define C0DYNSLVDLLEN2		0x2C15
#define LVDSICR1		0x3000
#define LVDSICR2		0x3004
#define IOCKTRR1		0x3008
#define IOCKTRR2		0x300C
#define IOCKTRR3		0x3010
#define IOCKTSTTR		0x3014
#define IUB			0x3800
#define BIR			0x3804
#define TSC1			0x3808
#define TSC2			0x3809
#define TSS			0x380A
#define TR			0x380B
#define TSTTP			0x380C
#define TCO			0x3812
#define TST			0x3813
#define THERM1			0x3814
#define THERM3			0x3816
#define TIS			0x381A
#define TERRCMD			0x3820
#define TSMICMD			0x3821
#define TSCICMD			0x3822
#define TSC3			0x3824
#define EXTTSCS			0x3825
#define C0THRMSTS		0x3830

#endif	/* __PINEVIEW_MCHBAR_REGS_H__ */