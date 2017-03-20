/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
extern char *IEEE_P_2592010699;
static const char *ng1 = "Function fetch_instruction ended without a return statement";
static const char *ng2 = "Function storage ended without a return statement";
static const char *ng3 = "Function move_rb_ra ended without a return statement";
static const char *ng4 = "Function move_ra_rb ended without a return statement";
static const char *ng5 = "Function move_ram_ra ended without a return statement";
static const char *ng6 = "Function move_ram_rb ended without a return statement";
static const char *ng7 = "Function move_ra_ram ended without a return statement";
static const char *ng8 = "Function move_rb_ram ended without a return statement";
static const char *ng9 = "C:/Users/U/Documents/UNIVERSIDAD/Semestre 9/Arquitectura de procesadores/ProyectoFinalArquitecturaProcesadores/UnitControl.vhd";



char *work_a_2233526063_3212880686_sub_619766279_3057020925(char *t1, char *t2, int t3)
{
    char t4[128];
    char t5[8];
    char t8[16];
    char t15[24];
    char *t0;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    int t24;
    int t25;
    int t26;
    unsigned int t27;

LAB0:    t6 = (t1 + 9020);
    t9 = (t8 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 16;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t11 = (0 - 16);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    t10 = (t4 + 4U);
    t13 = ((IEEE_P_2592010699) + 4024);
    t14 = (t10 + 88U);
    *((char **)t14) = t13;
    t16 = (t10 + 56U);
    *((char **)t16) = t15;
    memcpy(t15, t6, 17U);
    t17 = (t10 + 64U);
    *((char **)t17) = t8;
    t18 = (t10 + 80U);
    *((unsigned int *)t18) = 17U;
    t19 = (t5 + 4U);
    *((int *)t19) = t3;
    if (t3 == 1)
        goto LAB3;

LAB12:    if (t3 == 2)
        goto LAB4;

LAB13:    if (t3 == 3)
        goto LAB5;

LAB14:    if (t3 == 4)
        goto LAB6;

LAB15:    if (t3 == 5)
        goto LAB7;

LAB16:    if (t3 == 6)
        goto LAB8;

LAB17:    if (t3 == 7)
        goto LAB9;

LAB18:    if (t3 == 8)
        goto LAB10;

LAB19:
LAB11:    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;

LAB1:    return t0;
LAB2:    xsi_error(ng1);
    t0 = 0;
    goto LAB1;

LAB3:    t20 = (t1 + 9037);
    t22 = (t10 + 56U);
    t23 = *((char **)t22);
    t22 = (t23 + 0);
    memcpy(t22, t20, 17U);
    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;
    goto LAB1;

LAB4:    t6 = (t1 + 9054);
    t9 = (t10 + 56U);
    t13 = *((char **)t9);
    t9 = (t13 + 0);
    memcpy(t9, t6, 17U);
    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;
    goto LAB1;

LAB5:    t6 = (t1 + 9071);
    t9 = (t10 + 56U);
    t13 = *((char **)t9);
    t9 = (t13 + 0);
    memcpy(t9, t6, 17U);
    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;
    goto LAB1;

LAB6:    t6 = (t1 + 9088);
    t9 = (t10 + 56U);
    t13 = *((char **)t9);
    t9 = (t13 + 0);
    memcpy(t9, t6, 17U);
    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;
    goto LAB1;

LAB7:    t6 = (t1 + 9105);
    t9 = (t10 + 56U);
    t13 = *((char **)t9);
    t9 = (t13 + 0);
    memcpy(t9, t6, 17U);
    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;
    goto LAB1;

LAB8:    t6 = (t1 + 9122);
    t9 = (t10 + 56U);
    t13 = *((char **)t9);
    t9 = (t13 + 0);
    memcpy(t9, t6, 17U);
    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;
    goto LAB1;

LAB9:    t6 = (t1 + 9139);
    t9 = (t10 + 56U);
    t13 = *((char **)t9);
    t9 = (t13 + 0);
    memcpy(t9, t6, 17U);
    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;
    goto LAB1;

LAB10:    t6 = (t1 + 9156);
    t9 = (t10 + 56U);
    t13 = *((char **)t9);
    t9 = (t13 + 0);
    memcpy(t9, t6, 17U);
    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;
    goto LAB1;

LAB20:;
LAB21:    goto LAB2;

LAB22:    goto LAB2;

LAB23:    goto LAB2;

LAB24:    goto LAB2;

LAB25:    goto LAB2;

LAB26:    goto LAB2;

LAB27:    goto LAB2;

LAB28:    goto LAB2;

LAB29:    goto LAB2;

}

char *work_a_2233526063_3212880686_sub_3008558353_3057020925(char *t1, char *t2, int t3)
{
    char t4[128];
    char t5[8];
    char t8[16];
    char t15[24];
    char *t0;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    int t24;
    int t25;
    int t26;
    unsigned int t27;

LAB0:    t6 = (t1 + 9173);
    t9 = (t8 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 16;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t11 = (0 - 16);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    t10 = (t4 + 4U);
    t13 = ((IEEE_P_2592010699) + 4024);
    t14 = (t10 + 88U);
    *((char **)t14) = t13;
    t16 = (t10 + 56U);
    *((char **)t16) = t15;
    memcpy(t15, t6, 17U);
    t17 = (t10 + 64U);
    *((char **)t17) = t8;
    t18 = (t10 + 80U);
    *((unsigned int *)t18) = 17U;
    t19 = (t5 + 4U);
    *((int *)t19) = t3;
    if (t3 == 1)
        goto LAB3;

LAB7:    if (t3 == 2)
        goto LAB4;

LAB8:    if (t3 == 3)
        goto LAB5;

LAB9:
LAB6:    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;

LAB1:    return t0;
LAB2:    xsi_error(ng2);
    t0 = 0;
    goto LAB1;

LAB3:    t20 = (t1 + 9190);
    t22 = (t10 + 56U);
    t23 = *((char **)t22);
    t22 = (t23 + 0);
    memcpy(t22, t20, 17U);
    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;
    goto LAB1;

LAB4:    t6 = (t1 + 9207);
    t9 = (t10 + 56U);
    t13 = *((char **)t9);
    t9 = (t13 + 0);
    memcpy(t9, t6, 17U);
    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;
    goto LAB1;

LAB5:    t6 = (t1 + 9224);
    t9 = (t10 + 56U);
    t13 = *((char **)t9);
    t9 = (t13 + 0);
    memcpy(t9, t6, 17U);
    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;
    goto LAB1;

LAB10:;
LAB11:    goto LAB2;

LAB12:    goto LAB2;

LAB13:    goto LAB2;

LAB14:    goto LAB2;

}

char *work_a_2233526063_3212880686_sub_2731719544_3057020925(char *t1, char *t2, int t3)
{
    char t4[128];
    char t5[8];
    char t8[16];
    char t15[24];
    char *t0;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    int t24;
    int t25;
    int t26;
    unsigned int t27;

LAB0:    t6 = (t1 + 9241);
    t9 = (t8 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 16;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t11 = (0 - 16);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    t10 = (t4 + 4U);
    t13 = ((IEEE_P_2592010699) + 4024);
    t14 = (t10 + 88U);
    *((char **)t14) = t13;
    t16 = (t10 + 56U);
    *((char **)t16) = t15;
    memcpy(t15, t6, 17U);
    t17 = (t10 + 64U);
    *((char **)t17) = t8;
    t18 = (t10 + 80U);
    *((unsigned int *)t18) = 17U;
    t19 = (t5 + 4U);
    *((int *)t19) = t3;
    if (t3 == 1)
        goto LAB3;

LAB6:    if (t3 == 2)
        goto LAB4;

LAB7:
LAB5:    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;

LAB1:    return t0;
LAB2:    xsi_error(ng3);
    t0 = 0;
    goto LAB1;

LAB3:    t20 = (t1 + 9258);
    t22 = (t10 + 56U);
    t23 = *((char **)t22);
    t22 = (t23 + 0);
    memcpy(t22, t20, 17U);
    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;
    goto LAB1;

LAB4:    t6 = (t1 + 9275);
    t9 = (t10 + 56U);
    t13 = *((char **)t9);
    t9 = (t13 + 0);
    memcpy(t9, t6, 17U);
    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;
    goto LAB1;

LAB8:;
LAB9:    goto LAB2;

LAB10:    goto LAB2;

LAB11:    goto LAB2;

}

char *work_a_2233526063_3212880686_sub_2692585240_3057020925(char *t1, char *t2, int t3)
{
    char t4[128];
    char t5[8];
    char t8[16];
    char t15[24];
    char *t0;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    int t24;
    int t25;
    int t26;
    unsigned int t27;

LAB0:    t6 = (t1 + 9292);
    t9 = (t8 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 16;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t11 = (0 - 16);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    t10 = (t4 + 4U);
    t13 = ((IEEE_P_2592010699) + 4024);
    t14 = (t10 + 88U);
    *((char **)t14) = t13;
    t16 = (t10 + 56U);
    *((char **)t16) = t15;
    memcpy(t15, t6, 17U);
    t17 = (t10 + 64U);
    *((char **)t17) = t8;
    t18 = (t10 + 80U);
    *((unsigned int *)t18) = 17U;
    t19 = (t5 + 4U);
    *((int *)t19) = t3;
    if (t3 == 1)
        goto LAB3;

LAB6:    if (t3 == 2)
        goto LAB4;

LAB7:
LAB5:    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;

LAB1:    return t0;
LAB2:    xsi_error(ng4);
    t0 = 0;
    goto LAB1;

LAB3:    t20 = (t1 + 9309);
    t22 = (t10 + 56U);
    t23 = *((char **)t22);
    t22 = (t23 + 0);
    memcpy(t22, t20, 17U);
    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;
    goto LAB1;

LAB4:    t6 = (t1 + 9326);
    t9 = (t10 + 56U);
    t13 = *((char **)t9);
    t9 = (t13 + 0);
    memcpy(t9, t6, 17U);
    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;
    goto LAB1;

LAB8:;
LAB9:    goto LAB2;

LAB10:    goto LAB2;

LAB11:    goto LAB2;

}

char *work_a_2233526063_3212880686_sub_274809124_3057020925(char *t1, char *t2, int t3)
{
    char t4[128];
    char t5[8];
    char t8[16];
    char t15[24];
    char *t0;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    int t24;
    int t25;
    int t26;
    unsigned int t27;

LAB0:    t6 = (t1 + 9343);
    t9 = (t8 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 16;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t11 = (0 - 16);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    t10 = (t4 + 4U);
    t13 = ((IEEE_P_2592010699) + 4024);
    t14 = (t10 + 88U);
    *((char **)t14) = t13;
    t16 = (t10 + 56U);
    *((char **)t16) = t15;
    memcpy(t15, t6, 17U);
    t17 = (t10 + 64U);
    *((char **)t17) = t8;
    t18 = (t10 + 80U);
    *((unsigned int *)t18) = 17U;
    t19 = (t5 + 4U);
    *((int *)t19) = t3;
    if (t3 == 1)
        goto LAB3;

LAB7:    if (t3 == 2)
        goto LAB4;

LAB8:    if (t3 == 3)
        goto LAB5;

LAB9:
LAB6:    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;

LAB1:    return t0;
LAB2:    xsi_error(ng5);
    t0 = 0;
    goto LAB1;

LAB3:    t20 = (t1 + 9360);
    t22 = (t10 + 56U);
    t23 = *((char **)t22);
    t22 = (t23 + 0);
    memcpy(t22, t20, 17U);
    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;
    goto LAB1;

LAB4:    t6 = (t1 + 9377);
    t9 = (t10 + 56U);
    t13 = *((char **)t9);
    t9 = (t13 + 0);
    memcpy(t9, t6, 17U);
    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;
    goto LAB1;

LAB5:    t6 = (t1 + 9394);
    t9 = (t10 + 56U);
    t13 = *((char **)t9);
    t9 = (t13 + 0);
    memcpy(t9, t6, 17U);
    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;
    goto LAB1;

LAB10:;
LAB11:    goto LAB2;

LAB12:    goto LAB2;

LAB13:    goto LAB2;

LAB14:    goto LAB2;

}

char *work_a_2233526063_3212880686_sub_274810213_3057020925(char *t1, char *t2, int t3)
{
    char t4[128];
    char t5[8];
    char t8[16];
    char t15[24];
    char *t0;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    int t24;
    int t25;
    int t26;
    unsigned int t27;

LAB0:    t6 = (t1 + 9411);
    t9 = (t8 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 16;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t11 = (0 - 16);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    t10 = (t4 + 4U);
    t13 = ((IEEE_P_2592010699) + 4024);
    t14 = (t10 + 88U);
    *((char **)t14) = t13;
    t16 = (t10 + 56U);
    *((char **)t16) = t15;
    memcpy(t15, t6, 17U);
    t17 = (t10 + 64U);
    *((char **)t17) = t8;
    t18 = (t10 + 80U);
    *((unsigned int *)t18) = 17U;
    t19 = (t5 + 4U);
    *((int *)t19) = t3;
    if (t3 == 1)
        goto LAB3;

LAB7:    if (t3 == 2)
        goto LAB4;

LAB8:    if (t3 == 3)
        goto LAB5;

LAB9:
LAB6:    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;

LAB1:    return t0;
LAB2:    xsi_error(ng6);
    t0 = 0;
    goto LAB1;

LAB3:    t20 = (t1 + 9428);
    t22 = (t10 + 56U);
    t23 = *((char **)t22);
    t22 = (t23 + 0);
    memcpy(t22, t20, 17U);
    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;
    goto LAB1;

LAB4:    t6 = (t1 + 9445);
    t9 = (t10 + 56U);
    t13 = *((char **)t9);
    t9 = (t13 + 0);
    memcpy(t9, t6, 17U);
    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;
    goto LAB1;

LAB5:    t6 = (t1 + 9462);
    t9 = (t10 + 56U);
    t13 = *((char **)t9);
    t9 = (t13 + 0);
    memcpy(t9, t6, 17U);
    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;
    goto LAB1;

LAB10:;
LAB11:    goto LAB2;

LAB12:    goto LAB2;

LAB13:    goto LAB2;

LAB14:    goto LAB2;

}

char *work_a_2233526063_3212880686_sub_4043815556_3057020925(char *t1, char *t2, int t3)
{
    char t4[128];
    char t5[8];
    char t8[16];
    char t15[24];
    char *t0;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    int t24;
    int t25;
    int t26;
    unsigned int t27;

LAB0:    t6 = (t1 + 9479);
    t9 = (t8 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 16;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t11 = (0 - 16);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    t10 = (t4 + 4U);
    t13 = ((IEEE_P_2592010699) + 4024);
    t14 = (t10 + 88U);
    *((char **)t14) = t13;
    t16 = (t10 + 56U);
    *((char **)t16) = t15;
    memcpy(t15, t6, 17U);
    t17 = (t10 + 64U);
    *((char **)t17) = t8;
    t18 = (t10 + 80U);
    *((unsigned int *)t18) = 17U;
    t19 = (t5 + 4U);
    *((int *)t19) = t3;
    if (t3 == 1)
        goto LAB3;

LAB7:    if (t3 == 2)
        goto LAB4;

LAB8:    if (t3 == 3)
        goto LAB5;

LAB9:
LAB6:    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;

LAB1:    return t0;
LAB2:    xsi_error(ng7);
    t0 = 0;
    goto LAB1;

LAB3:    t20 = (t1 + 9496);
    t22 = (t10 + 56U);
    t23 = *((char **)t22);
    t22 = (t23 + 0);
    memcpy(t22, t20, 17U);
    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;
    goto LAB1;

LAB4:    t6 = (t1 + 9513);
    t9 = (t10 + 56U);
    t13 = *((char **)t9);
    t9 = (t13 + 0);
    memcpy(t9, t6, 17U);
    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;
    goto LAB1;

LAB5:    t6 = (t1 + 9530);
    t9 = (t10 + 56U);
    t13 = *((char **)t9);
    t9 = (t13 + 0);
    memcpy(t9, t6, 17U);
    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;
    goto LAB1;

LAB10:;
LAB11:    goto LAB2;

LAB12:    goto LAB2;

LAB13:    goto LAB2;

LAB14:    goto LAB2;

}

char *work_a_2233526063_3212880686_sub_1040316229_3057020925(char *t1, char *t2, int t3)
{
    char t4[128];
    char t5[8];
    char t8[16];
    char t15[24];
    char *t0;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    int t24;
    int t25;
    int t26;
    unsigned int t27;

LAB0:    t6 = (t1 + 9547);
    t9 = (t8 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 16;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t11 = (0 - 16);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    t10 = (t4 + 4U);
    t13 = ((IEEE_P_2592010699) + 4024);
    t14 = (t10 + 88U);
    *((char **)t14) = t13;
    t16 = (t10 + 56U);
    *((char **)t16) = t15;
    memcpy(t15, t6, 17U);
    t17 = (t10 + 64U);
    *((char **)t17) = t8;
    t18 = (t10 + 80U);
    *((unsigned int *)t18) = 17U;
    t19 = (t5 + 4U);
    *((int *)t19) = t3;
    if (t3 == 1)
        goto LAB3;

LAB7:    if (t3 == 2)
        goto LAB4;

LAB8:    if (t3 == 3)
        goto LAB5;

LAB9:
LAB6:    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;

LAB1:    return t0;
LAB2:    xsi_error(ng8);
    t0 = 0;
    goto LAB1;

LAB3:    t20 = (t1 + 9564);
    t22 = (t10 + 56U);
    t23 = *((char **)t22);
    t22 = (t23 + 0);
    memcpy(t22, t20, 17U);
    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;
    goto LAB1;

LAB4:    t6 = (t1 + 9581);
    t9 = (t10 + 56U);
    t13 = *((char **)t9);
    t9 = (t13 + 0);
    memcpy(t9, t6, 17U);
    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;
    goto LAB1;

LAB5:    t6 = (t1 + 9598);
    t9 = (t10 + 56U);
    t13 = *((char **)t9);
    t9 = (t13 + 0);
    memcpy(t9, t6, 17U);
    t6 = (t10 + 56U);
    t7 = *((char **)t6);
    t6 = (t8 + 12U);
    t12 = *((unsigned int *)t6);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t7, t12);
    t9 = (t8 + 0U);
    t11 = *((int *)t9);
    t13 = (t8 + 4U);
    t24 = *((int *)t13);
    t14 = (t8 + 8U);
    t25 = *((int *)t14);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t25;
    t26 = (t24 - t11);
    t27 = (t26 * t25);
    t27 = (t27 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t27;
    goto LAB1;

LAB10:;
LAB11:    goto LAB2;

LAB12:    goto LAB2;

LAB13:    goto LAB2;

LAB14:    goto LAB2;

}

static void work_a_2233526063_3212880686_p_0(char *t0)
{
    char t14[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    int t12;
    int t13;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    static char *nl0[] = {&&LAB9, &&LAB10};

LAB0:    xsi_set_current_line(200, ng9);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 4432);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(201, ng9);
    t4 = (t0 + 2312U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (char *)((nl0) + t9);
    goto **((char **)t4);

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(265, ng9);
    t2 = (t0 + 2472U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 4960);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB9:    xsi_set_current_line(203, ng9);
    t10 = (t0 + 3128U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = 0;
    xsi_set_current_line(204, ng9);
    t2 = (t0 + 3008U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t13 = (t12 + 1);
    t2 = (t0 + 3008U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((int *)t2) = t13;
    xsi_set_current_line(205, ng9);
    t2 = (t0 + 3008U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t1 = (t12 == 8);
    if (t1 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(209, ng9);
    t2 = (t0 + 3008U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t2 = work_a_2233526063_3212880686_sub_619766279_3057020925(t0, t14, t12);
    t5 = (t0 + 2888U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    t10 = (t14 + 12U);
    t15 = *((unsigned int *)t10);
    t15 = (t15 * 1U);
    memcpy(t5, t2, t15);
    xsi_set_current_line(210, ng9);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 7);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4576);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(211, ng9);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 10);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4640);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 3U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(212, ng9);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 12);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4704);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(213, ng9);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 16);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4768);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB8;

LAB10:    xsi_set_current_line(215, ng9);
    t2 = (t0 + 3008U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = 0;
    xsi_set_current_line(216, ng9);
    t2 = (t0 + 3128U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t13 = (t12 + 1);
    t2 = (t0 + 3128U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((int *)t2) = t13;
    xsi_set_current_line(217, ng9);
    t2 = (t0 + 2768U);
    t4 = *((char **)t2);
    t15 = (15 - 11);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4832);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 6U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(218, ng9);
    t2 = (t0 + 2768U);
    t4 = *((char **)t2);
    t15 = (15 - 5);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4896);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 6U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(219, ng9);
    t2 = (t0 + 2768U);
    t4 = *((char **)t2);
    t15 = (15 - 15);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 9615);
    t12 = xsi_mem_cmp(t5, t2, 4U);
    if (t12 == 1)
        goto LAB15;

LAB18:    t10 = (t0 + 9619);
    t13 = xsi_mem_cmp(t10, t2, 4U);
    if (t13 == 1)
        goto LAB16;

LAB19:
LAB17:
LAB14:    xsi_set_current_line(259, ng9);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 7);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4576);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(260, ng9);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 10);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4640);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 3U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(261, ng9);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 12);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4704);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(262, ng9);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 16);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4768);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB8;

LAB11:    xsi_set_current_line(206, ng9);
    t2 = (t0 + 4512);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(207, ng9);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t2 = (t0 + 2768U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    memcpy(t2, t4, 16U);
    goto LAB12;

LAB15:    xsi_set_current_line(221, ng9);
    t18 = (t0 + 3128U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t1 = (t20 == 3);
    if (t1 != 0)
        goto LAB21;

LAB23:
LAB22:    xsi_set_current_line(224, ng9);
    t2 = (t0 + 3128U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t2 = work_a_2233526063_3212880686_sub_3008558353_3057020925(t0, t14, t12);
    t5 = (t0 + 2888U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    t10 = (t14 + 12U);
    t15 = *((unsigned int *)t10);
    t15 = (t15 * 1U);
    memcpy(t5, t2, t15);
    goto LAB14;

LAB16:    xsi_set_current_line(226, ng9);
    t2 = (t0 + 2768U);
    t4 = *((char **)t2);
    t15 = (15 - 11);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 9623);
    t3 = 1;
    if (6U == 6U)
        goto LAB30;

LAB31:    t3 = 0;

LAB32:    if (t3 == 1)
        goto LAB27;

LAB28:    t1 = (unsigned char)0;

LAB29:    if (t1 != 0)
        goto LAB24;

LAB26:    t2 = (t0 + 2768U);
    t4 = *((char **)t2);
    t15 = (15 - 11);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 9635);
    t3 = 1;
    if (6U == 6U)
        goto LAB50;

LAB51:    t3 = 0;

LAB52:    if (t3 == 1)
        goto LAB47;

LAB48:    t1 = (unsigned char)0;

LAB49:    if (t1 != 0)
        goto LAB45;

LAB46:    t2 = (t0 + 2768U);
    t4 = *((char **)t2);
    t15 = (15 - 5);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 9647);
    t1 = 1;
    if (6U == 6U)
        goto LAB67;

LAB68:    t1 = 0;

LAB69:    if (t1 != 0)
        goto LAB65;

LAB66:    t2 = (t0 + 2768U);
    t4 = *((char **)t2);
    t15 = (15 - 5);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 9653);
    t1 = 1;
    if (6U == 6U)
        goto LAB78;

LAB79:    t1 = 0;

LAB80:    if (t1 != 0)
        goto LAB76;

LAB77:    t2 = (t0 + 2768U);
    t4 = *((char **)t2);
    t15 = (15 - 11);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 9659);
    t1 = 1;
    if (6U == 6U)
        goto LAB89;

LAB90:    t1 = 0;

LAB91:    if (t1 != 0)
        goto LAB87;

LAB88:    t2 = (t0 + 2768U);
    t4 = *((char **)t2);
    t15 = (15 - 11);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 9665);
    t1 = 1;
    if (6U == 6U)
        goto LAB100;

LAB101:    t1 = 0;

LAB102:    if (t1 != 0)
        goto LAB98;

LAB99:
LAB25:    goto LAB14;

LAB20:;
LAB21:    xsi_set_current_line(222, ng9);
    t18 = (t0 + 4512);
    t21 = (t18 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)0;
    xsi_driver_first_trans_fast(t18);
    goto LAB22;

LAB24:    xsi_set_current_line(227, ng9);
    t30 = (t0 + 3128U);
    t31 = *((char **)t30);
    t12 = *((int *)t31);
    t7 = (t12 == 2);
    if (t7 != 0)
        goto LAB42;

LAB44:
LAB43:    xsi_set_current_line(230, ng9);
    t2 = (t0 + 3128U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t2 = work_a_2233526063_3212880686_sub_2731719544_3057020925(t0, t14, t12);
    t5 = (t0 + 2888U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    t10 = (t14 + 12U);
    t15 = *((unsigned int *)t10);
    t15 = (t15 * 1U);
    memcpy(t5, t2, t15);
    goto LAB25;

LAB27:    t18 = (t0 + 2768U);
    t19 = *((char **)t18);
    t26 = (15 - 5);
    t27 = (t26 * 1U);
    t28 = (0 + t27);
    t18 = (t19 + t28);
    t21 = (t0 + 9629);
    t6 = 1;
    if (6U == 6U)
        goto LAB36;

LAB37:    t6 = 0;

LAB38:    t1 = t6;
    goto LAB29;

LAB30:    t25 = 0;

LAB33:    if (t25 < 6U)
        goto LAB34;
    else
        goto LAB32;

LAB34:    t10 = (t2 + t25);
    t11 = (t5 + t25);
    if (*((unsigned char *)t10) != *((unsigned char *)t11))
        goto LAB31;

LAB35:    t25 = (t25 + 1);
    goto LAB33;

LAB36:    t29 = 0;

LAB39:    if (t29 < 6U)
        goto LAB40;
    else
        goto LAB38;

LAB40:    t23 = (t18 + t29);
    t24 = (t21 + t29);
    if (*((unsigned char *)t23) != *((unsigned char *)t24))
        goto LAB37;

LAB41:    t29 = (t29 + 1);
    goto LAB39;

LAB42:    xsi_set_current_line(228, ng9);
    t30 = (t0 + 4512);
    t32 = (t30 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    *((unsigned char *)t35) = (unsigned char)0;
    xsi_driver_first_trans_fast(t30);
    goto LAB43;

LAB45:    xsi_set_current_line(232, ng9);
    t30 = (t0 + 3128U);
    t31 = *((char **)t30);
    t12 = *((int *)t31);
    t7 = (t12 == 2);
    if (t7 != 0)
        goto LAB62;

LAB64:
LAB63:    xsi_set_current_line(235, ng9);
    t2 = (t0 + 3128U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t2 = work_a_2233526063_3212880686_sub_2692585240_3057020925(t0, t14, t12);
    t5 = (t0 + 2888U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    t10 = (t14 + 12U);
    t15 = *((unsigned int *)t10);
    t15 = (t15 * 1U);
    memcpy(t5, t2, t15);
    goto LAB25;

LAB47:    t18 = (t0 + 2768U);
    t19 = *((char **)t18);
    t26 = (15 - 5);
    t27 = (t26 * 1U);
    t28 = (0 + t27);
    t18 = (t19 + t28);
    t21 = (t0 + 9641);
    t6 = 1;
    if (6U == 6U)
        goto LAB56;

LAB57:    t6 = 0;

LAB58:    t1 = t6;
    goto LAB49;

LAB50:    t25 = 0;

LAB53:    if (t25 < 6U)
        goto LAB54;
    else
        goto LAB52;

LAB54:    t10 = (t2 + t25);
    t11 = (t5 + t25);
    if (*((unsigned char *)t10) != *((unsigned char *)t11))
        goto LAB51;

LAB55:    t25 = (t25 + 1);
    goto LAB53;

LAB56:    t29 = 0;

LAB59:    if (t29 < 6U)
        goto LAB60;
    else
        goto LAB58;

LAB60:    t23 = (t18 + t29);
    t24 = (t21 + t29);
    if (*((unsigned char *)t23) != *((unsigned char *)t24))
        goto LAB57;

LAB61:    t29 = (t29 + 1);
    goto LAB59;

LAB62:    xsi_set_current_line(233, ng9);
    t30 = (t0 + 4512);
    t32 = (t30 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    *((unsigned char *)t35) = (unsigned char)0;
    xsi_driver_first_trans_fast(t30);
    goto LAB63;

LAB65:    xsi_set_current_line(237, ng9);
    t18 = (t0 + 3128U);
    t19 = *((char **)t18);
    t12 = *((int *)t19);
    t3 = (t12 == 3);
    if (t3 != 0)
        goto LAB73;

LAB75:
LAB74:    xsi_set_current_line(240, ng9);
    t2 = (t0 + 3128U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t2 = work_a_2233526063_3212880686_sub_274809124_3057020925(t0, t14, t12);
    t5 = (t0 + 2888U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    t10 = (t14 + 12U);
    t15 = *((unsigned int *)t10);
    t15 = (t15 * 1U);
    memcpy(t5, t2, t15);
    goto LAB25;

LAB67:    t25 = 0;

LAB70:    if (t25 < 6U)
        goto LAB71;
    else
        goto LAB69;

LAB71:    t10 = (t2 + t25);
    t11 = (t5 + t25);
    if (*((unsigned char *)t10) != *((unsigned char *)t11))
        goto LAB68;

LAB72:    t25 = (t25 + 1);
    goto LAB70;

LAB73:    xsi_set_current_line(238, ng9);
    t18 = (t0 + 4512);
    t21 = (t18 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)0;
    xsi_driver_first_trans_fast(t18);
    goto LAB74;

LAB76:    xsi_set_current_line(242, ng9);
    t18 = (t0 + 3128U);
    t19 = *((char **)t18);
    t12 = *((int *)t19);
    t3 = (t12 == 3);
    if (t3 != 0)
        goto LAB84;

LAB86:
LAB85:    xsi_set_current_line(245, ng9);
    t2 = (t0 + 3128U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t2 = work_a_2233526063_3212880686_sub_274810213_3057020925(t0, t14, t12);
    t5 = (t0 + 2888U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    t10 = (t14 + 12U);
    t15 = *((unsigned int *)t10);
    t15 = (t15 * 1U);
    memcpy(t5, t2, t15);
    goto LAB25;

LAB78:    t25 = 0;

LAB81:    if (t25 < 6U)
        goto LAB82;
    else
        goto LAB80;

LAB82:    t10 = (t2 + t25);
    t11 = (t5 + t25);
    if (*((unsigned char *)t10) != *((unsigned char *)t11))
        goto LAB79;

LAB83:    t25 = (t25 + 1);
    goto LAB81;

LAB84:    xsi_set_current_line(243, ng9);
    t18 = (t0 + 4512);
    t21 = (t18 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)0;
    xsi_driver_first_trans_fast(t18);
    goto LAB85;

LAB87:    xsi_set_current_line(247, ng9);
    t18 = (t0 + 3128U);
    t19 = *((char **)t18);
    t12 = *((int *)t19);
    t3 = (t12 == 3);
    if (t3 != 0)
        goto LAB95;

LAB97:
LAB96:    xsi_set_current_line(250, ng9);
    t2 = (t0 + 3128U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t2 = work_a_2233526063_3212880686_sub_4043815556_3057020925(t0, t14, t12);
    t5 = (t0 + 2888U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    t10 = (t14 + 12U);
    t15 = *((unsigned int *)t10);
    t15 = (t15 * 1U);
    memcpy(t5, t2, t15);
    goto LAB25;

LAB89:    t25 = 0;

LAB92:    if (t25 < 6U)
        goto LAB93;
    else
        goto LAB91;

LAB93:    t10 = (t2 + t25);
    t11 = (t5 + t25);
    if (*((unsigned char *)t10) != *((unsigned char *)t11))
        goto LAB90;

LAB94:    t25 = (t25 + 1);
    goto LAB92;

LAB95:    xsi_set_current_line(248, ng9);
    t18 = (t0 + 4512);
    t21 = (t18 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)0;
    xsi_driver_first_trans_fast(t18);
    goto LAB96;

LAB98:    xsi_set_current_line(252, ng9);
    t18 = (t0 + 3128U);
    t19 = *((char **)t18);
    t12 = *((int *)t19);
    t3 = (t12 == 3);
    if (t3 != 0)
        goto LAB106;

LAB108:
LAB107:    xsi_set_current_line(255, ng9);
    t2 = (t0 + 3128U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t2 = work_a_2233526063_3212880686_sub_1040316229_3057020925(t0, t14, t12);
    t5 = (t0 + 2888U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    t10 = (t14 + 12U);
    t15 = *((unsigned int *)t10);
    t15 = (t15 * 1U);
    memcpy(t5, t2, t15);
    goto LAB25;

LAB100:    t25 = 0;

LAB103:    if (t25 < 6U)
        goto LAB104;
    else
        goto LAB102;

LAB104:    t10 = (t2 + t25);
    t11 = (t5 + t25);
    if (*((unsigned char *)t10) != *((unsigned char *)t11))
        goto LAB101;

LAB105:    t25 = (t25 + 1);
    goto LAB103;

LAB106:    xsi_set_current_line(253, ng9);
    t18 = (t0 + 4512);
    t21 = (t18 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)0;
    xsi_driver_first_trans_fast(t18);
    goto LAB107;

}


extern void work_a_2233526063_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2233526063_3212880686_p_0};
	static char *se[] = {(void *)work_a_2233526063_3212880686_sub_619766279_3057020925,(void *)work_a_2233526063_3212880686_sub_3008558353_3057020925,(void *)work_a_2233526063_3212880686_sub_2731719544_3057020925,(void *)work_a_2233526063_3212880686_sub_2692585240_3057020925,(void *)work_a_2233526063_3212880686_sub_274809124_3057020925,(void *)work_a_2233526063_3212880686_sub_274810213_3057020925,(void *)work_a_2233526063_3212880686_sub_4043815556_3057020925,(void *)work_a_2233526063_3212880686_sub_1040316229_3057020925};
	xsi_register_didat("work_a_2233526063_3212880686", "isim/Maintest_isim_beh.exe.sim/work/a_2233526063_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
