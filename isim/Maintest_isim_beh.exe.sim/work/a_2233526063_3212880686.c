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
static const char *ng7 = "C:/Users/U/Documents/UNIVERSIDAD/Semestre 9/Arquitectura de procesadores/ProyectoFinalArquitecturaProcesadores/UnitControl.vhd";



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

LAB0:    t6 = (t1 + 9180);
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

LAB3:    t20 = (t1 + 9197);
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

LAB4:    t6 = (t1 + 9214);
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

LAB5:    t6 = (t1 + 9231);
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

LAB6:    t6 = (t1 + 9248);
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

LAB7:    t6 = (t1 + 9265);
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

LAB8:    t6 = (t1 + 9282);
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

LAB9:    t6 = (t1 + 9299);
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

LAB10:    t6 = (t1 + 9316);
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

LAB0:    t6 = (t1 + 9333);
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

LAB3:    t20 = (t1 + 9350);
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

LAB4:    t6 = (t1 + 9367);
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

LAB5:    t6 = (t1 + 9384);
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

LAB0:    t6 = (t1 + 9401);
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
LAB2:    xsi_error(ng3);
    t0 = 0;
    goto LAB1;

LAB3:    t20 = (t1 + 9418);
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

LAB4:    t6 = (t1 + 9435);
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

LAB5:    t6 = (t1 + 9452);
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

LAB0:    t6 = (t1 + 9469);
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
LAB2:    xsi_error(ng4);
    t0 = 0;
    goto LAB1;

LAB3:    t20 = (t1 + 9486);
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

LAB4:    t6 = (t1 + 9503);
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

LAB5:    t6 = (t1 + 9520);
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

LAB0:    t6 = (t1 + 9537);
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

LAB3:    t20 = (t1 + 9554);
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

LAB4:    t6 = (t1 + 9571);
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

LAB5:    t6 = (t1 + 9588);
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

LAB0:    t6 = (t1 + 9605);
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

LAB3:    t20 = (t1 + 9622);
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

LAB4:    t6 = (t1 + 9639);
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

LAB5:    t6 = (t1 + 9656);
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
    int t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    static char *nl0[] = {&&LAB9, &&LAB10};

LAB0:    xsi_set_current_line(172, ng7);
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
LAB2:    xsi_set_current_line(173, ng7);
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

LAB8:    xsi_set_current_line(280, ng7);
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

LAB9:    xsi_set_current_line(175, ng7);
    t10 = (t0 + 3128U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = 0;
    xsi_set_current_line(176, ng7);
    t2 = (t0 + 3008U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t13 = (t12 + 1);
    t2 = (t0 + 3008U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((int *)t2) = t13;
    xsi_set_current_line(177, ng7);
    t2 = (t0 + 3008U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t1 = (t12 == 8);
    if (t1 != 0)
        goto LAB11;

LAB13:    t2 = (t0 + 3008U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t1 = (t12 > 0);
    if (t1 != 0)
        goto LAB14;

LAB15:
LAB12:    goto LAB8;

LAB10:    xsi_set_current_line(193, ng7);
    t2 = (t0 + 3008U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = 0;
    xsi_set_current_line(194, ng7);
    t2 = (t0 + 3128U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t13 = (t12 + 1);
    t2 = (t0 + 3128U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((int *)t2) = t13;
    xsi_set_current_line(195, ng7);
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
    xsi_set_current_line(196, ng7);
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
    xsi_set_current_line(197, ng7);
    t2 = (t0 + 2768U);
    t4 = *((char **)t2);
    t15 = (15 - 15);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 9673);
    t12 = xsi_mem_cmp(t5, t2, 4U);
    if (t12 == 1)
        goto LAB17;

LAB20:    t10 = (t0 + 9677);
    t13 = xsi_mem_cmp(t10, t2, 4U);
    if (t13 == 1)
        goto LAB18;

LAB21:
LAB19:
LAB16:    goto LAB8;

LAB11:    xsi_set_current_line(178, ng7);
    t2 = (t0 + 3008U);
    t5 = *((char **)t2);
    t13 = *((int *)t5);
    t2 = work_a_2233526063_3212880686_sub_619766279_3057020925(t0, t14, t13);
    t8 = (t0 + 2888U);
    t10 = *((char **)t8);
    t8 = (t10 + 0);
    t11 = (t14 + 12U);
    t15 = *((unsigned int *)t11);
    t15 = (t15 * 1U);
    memcpy(t8, t2, t15);
    xsi_set_current_line(179, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 7);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4512);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(180, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 10);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4576);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 3U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(181, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 12);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4640);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(182, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 16);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4704);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(183, ng7);
    t2 = (t0 + 4768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(184, ng7);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t2 = (t0 + 2768U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    memcpy(t2, t4, 16U);
    goto LAB12;

LAB14:    xsi_set_current_line(186, ng7);
    t2 = (t0 + 3008U);
    t5 = *((char **)t2);
    t13 = *((int *)t5);
    t2 = work_a_2233526063_3212880686_sub_619766279_3057020925(t0, t14, t13);
    t8 = (t0 + 2888U);
    t10 = *((char **)t8);
    t8 = (t10 + 0);
    t11 = (t14 + 12U);
    t15 = *((unsigned int *)t11);
    t15 = (t15 * 1U);
    memcpy(t8, t2, t15);
    xsi_set_current_line(187, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 7);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4512);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(188, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 10);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4576);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 3U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(189, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 12);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4640);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(190, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 16);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4704);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB12;

LAB17:    xsi_set_current_line(199, ng7);
    t18 = (t0 + 3128U);
    t19 = *((char **)t18);
    t20 = *((int *)t19);
    t1 = (t20 == 3);
    if (t1 != 0)
        goto LAB23;

LAB25:    t2 = (t0 + 3128U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t1 = (t12 > 0);
    if (t1 != 0)
        goto LAB26;

LAB27:
LAB24:    goto LAB16;

LAB18:    xsi_set_current_line(214, ng7);
    t2 = (t0 + 2768U);
    t4 = *((char **)t2);
    t15 = (15 - 11);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 9681);
    t3 = 1;
    if (6U == 6U)
        goto LAB34;

LAB35:    t3 = 0;

LAB36:    if (t3 == 1)
        goto LAB31;

LAB32:    t1 = (unsigned char)0;

LAB33:    if (t1 != 0)
        goto LAB28;

LAB30:    t2 = (t0 + 2768U);
    t4 = *((char **)t2);
    t15 = (15 - 11);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 9693);
    t3 = 1;
    if (6U == 6U)
        goto LAB56;

LAB57:    t3 = 0;

LAB58:    if (t3 == 1)
        goto LAB53;

LAB54:    t1 = (unsigned char)0;

LAB55:    if (t1 != 0)
        goto LAB51;

LAB52:    t2 = (t0 + 2768U);
    t4 = *((char **)t2);
    t15 = (15 - 5);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 9705);
    t1 = 1;
    if (6U == 6U)
        goto LAB75;

LAB76:    t1 = 0;

LAB77:    if (t1 != 0)
        goto LAB73;

LAB74:    t2 = (t0 + 2768U);
    t4 = *((char **)t2);
    t15 = (15 - 5);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 9711);
    t1 = 1;
    if (6U == 6U)
        goto LAB88;

LAB89:    t1 = 0;

LAB90:    if (t1 != 0)
        goto LAB86;

LAB87:
LAB29:    goto LAB16;

LAB22:;
LAB23:    xsi_set_current_line(200, ng7);
    t18 = (t0 + 3128U);
    t21 = *((char **)t18);
    t22 = *((int *)t21);
    t18 = work_a_2233526063_3212880686_sub_3008558353_3057020925(t0, t14, t22);
    t23 = (t0 + 2888U);
    t24 = *((char **)t23);
    t23 = (t24 + 0);
    t25 = (t14 + 12U);
    t26 = *((unsigned int *)t25);
    t26 = (t26 * 1U);
    memcpy(t23, t18, t26);
    xsi_set_current_line(201, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 7);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4512);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(202, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 10);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4576);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 3U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(203, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 12);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4640);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(204, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 16);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4704);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(205, ng7);
    t2 = (t0 + 4768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    goto LAB24;

LAB26:    xsi_set_current_line(207, ng7);
    t2 = (t0 + 3128U);
    t5 = *((char **)t2);
    t13 = *((int *)t5);
    t2 = work_a_2233526063_3212880686_sub_3008558353_3057020925(t0, t14, t13);
    t8 = (t0 + 2888U);
    t10 = *((char **)t8);
    t8 = (t10 + 0);
    t11 = (t14 + 12U);
    t15 = *((unsigned int *)t11);
    t15 = (t15 * 1U);
    memcpy(t8, t2, t15);
    xsi_set_current_line(208, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 7);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4512);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(209, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 10);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4576);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 3U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(210, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 12);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4640);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(211, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 16);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4704);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB24;

LAB28:    xsi_set_current_line(215, ng7);
    t31 = (t0 + 3128U);
    t32 = *((char **)t31);
    t12 = *((int *)t32);
    t7 = (t12 == 3);
    if (t7 != 0)
        goto LAB46;

LAB48:    t2 = (t0 + 3128U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t1 = (t12 > 0);
    if (t1 != 0)
        goto LAB49;

LAB50:
LAB47:    goto LAB29;

LAB31:    t18 = (t0 + 2768U);
    t19 = *((char **)t18);
    t27 = (15 - 5);
    t28 = (t27 * 1U);
    t29 = (0 + t28);
    t18 = (t19 + t29);
    t21 = (t0 + 9687);
    t6 = 1;
    if (6U == 6U)
        goto LAB40;

LAB41:    t6 = 0;

LAB42:    t1 = t6;
    goto LAB33;

LAB34:    t26 = 0;

LAB37:    if (t26 < 6U)
        goto LAB38;
    else
        goto LAB36;

LAB38:    t10 = (t2 + t26);
    t11 = (t5 + t26);
    if (*((unsigned char *)t10) != *((unsigned char *)t11))
        goto LAB35;

LAB39:    t26 = (t26 + 1);
    goto LAB37;

LAB40:    t30 = 0;

LAB43:    if (t30 < 6U)
        goto LAB44;
    else
        goto LAB42;

LAB44:    t24 = (t18 + t30);
    t25 = (t21 + t30);
    if (*((unsigned char *)t24) != *((unsigned char *)t25))
        goto LAB41;

LAB45:    t30 = (t30 + 1);
    goto LAB43;

LAB46:    xsi_set_current_line(216, ng7);
    t31 = (t0 + 3128U);
    t33 = *((char **)t31);
    t13 = *((int *)t33);
    t31 = work_a_2233526063_3212880686_sub_2731719544_3057020925(t0, t14, t13);
    t34 = (t0 + 2888U);
    t35 = *((char **)t34);
    t34 = (t35 + 0);
    t36 = (t14 + 12U);
    t37 = *((unsigned int *)t36);
    t37 = (t37 * 1U);
    memcpy(t34, t31, t37);
    xsi_set_current_line(217, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 7);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4512);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(218, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 10);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4576);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 3U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(219, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 12);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4640);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(220, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 16);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4704);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(221, ng7);
    t2 = (t0 + 4768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    goto LAB47;

LAB49:    xsi_set_current_line(223, ng7);
    t2 = (t0 + 3128U);
    t5 = *((char **)t2);
    t13 = *((int *)t5);
    t2 = work_a_2233526063_3212880686_sub_2731719544_3057020925(t0, t14, t13);
    t8 = (t0 + 2888U);
    t10 = *((char **)t8);
    t8 = (t10 + 0);
    t11 = (t14 + 12U);
    t15 = *((unsigned int *)t11);
    t15 = (t15 * 1U);
    memcpy(t8, t2, t15);
    xsi_set_current_line(224, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 7);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4512);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(225, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 10);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4576);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 3U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(226, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 12);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4640);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(227, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 16);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4704);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB47;

LAB51:    xsi_set_current_line(230, ng7);
    t31 = (t0 + 3128U);
    t32 = *((char **)t31);
    t12 = *((int *)t32);
    t7 = (t12 == 3);
    if (t7 != 0)
        goto LAB68;

LAB70:    t2 = (t0 + 3128U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t1 = (t12 > 0);
    if (t1 != 0)
        goto LAB71;

LAB72:
LAB69:    goto LAB29;

LAB53:    t18 = (t0 + 2768U);
    t19 = *((char **)t18);
    t27 = (15 - 5);
    t28 = (t27 * 1U);
    t29 = (0 + t28);
    t18 = (t19 + t29);
    t21 = (t0 + 9699);
    t6 = 1;
    if (6U == 6U)
        goto LAB62;

LAB63:    t6 = 0;

LAB64:    t1 = t6;
    goto LAB55;

LAB56:    t26 = 0;

LAB59:    if (t26 < 6U)
        goto LAB60;
    else
        goto LAB58;

LAB60:    t10 = (t2 + t26);
    t11 = (t5 + t26);
    if (*((unsigned char *)t10) != *((unsigned char *)t11))
        goto LAB57;

LAB61:    t26 = (t26 + 1);
    goto LAB59;

LAB62:    t30 = 0;

LAB65:    if (t30 < 6U)
        goto LAB66;
    else
        goto LAB64;

LAB66:    t24 = (t18 + t30);
    t25 = (t21 + t30);
    if (*((unsigned char *)t24) != *((unsigned char *)t25))
        goto LAB63;

LAB67:    t30 = (t30 + 1);
    goto LAB65;

LAB68:    xsi_set_current_line(231, ng7);
    t31 = (t0 + 3128U);
    t33 = *((char **)t31);
    t13 = *((int *)t33);
    t31 = work_a_2233526063_3212880686_sub_2692585240_3057020925(t0, t14, t13);
    t34 = (t0 + 2888U);
    t35 = *((char **)t34);
    t34 = (t35 + 0);
    t36 = (t14 + 12U);
    t37 = *((unsigned int *)t36);
    t37 = (t37 * 1U);
    memcpy(t34, t31, t37);
    xsi_set_current_line(232, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 7);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4512);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(233, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 10);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4576);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 3U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(234, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 12);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4640);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(235, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 16);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4704);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(236, ng7);
    t2 = (t0 + 4768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    goto LAB69;

LAB71:    xsi_set_current_line(238, ng7);
    t2 = (t0 + 3128U);
    t5 = *((char **)t2);
    t13 = *((int *)t5);
    t2 = work_a_2233526063_3212880686_sub_2692585240_3057020925(t0, t14, t13);
    t8 = (t0 + 2888U);
    t10 = *((char **)t8);
    t8 = (t10 + 0);
    t11 = (t14 + 12U);
    t15 = *((unsigned int *)t11);
    t15 = (t15 * 1U);
    memcpy(t8, t2, t15);
    xsi_set_current_line(239, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 7);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4512);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(240, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 10);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4576);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 3U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(241, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 12);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4640);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(242, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 16);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4704);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB69;

LAB73:    xsi_set_current_line(245, ng7);
    t18 = (t0 + 3128U);
    t19 = *((char **)t18);
    t12 = *((int *)t19);
    t3 = (t12 == 3);
    if (t3 != 0)
        goto LAB81;

LAB83:    t2 = (t0 + 3128U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t1 = (t12 > 0);
    if (t1 != 0)
        goto LAB84;

LAB85:
LAB82:    goto LAB29;

LAB75:    t26 = 0;

LAB78:    if (t26 < 6U)
        goto LAB79;
    else
        goto LAB77;

LAB79:    t10 = (t2 + t26);
    t11 = (t5 + t26);
    if (*((unsigned char *)t10) != *((unsigned char *)t11))
        goto LAB76;

LAB80:    t26 = (t26 + 1);
    goto LAB78;

LAB81:    xsi_set_current_line(246, ng7);
    t18 = (t0 + 3128U);
    t21 = *((char **)t18);
    t13 = *((int *)t21);
    t18 = work_a_2233526063_3212880686_sub_274809124_3057020925(t0, t14, t13);
    t23 = (t0 + 2888U);
    t24 = *((char **)t23);
    t23 = (t24 + 0);
    t25 = (t14 + 12U);
    t27 = *((unsigned int *)t25);
    t27 = (t27 * 1U);
    memcpy(t23, t18, t27);
    xsi_set_current_line(247, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 7);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4512);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(248, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 10);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4576);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 3U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(249, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 12);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4640);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(250, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 16);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4704);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(251, ng7);
    t2 = (t0 + 4768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    goto LAB82;

LAB84:    xsi_set_current_line(253, ng7);
    t2 = (t0 + 3128U);
    t5 = *((char **)t2);
    t13 = *((int *)t5);
    t2 = work_a_2233526063_3212880686_sub_274809124_3057020925(t0, t14, t13);
    t8 = (t0 + 2888U);
    t10 = *((char **)t8);
    t8 = (t10 + 0);
    t11 = (t14 + 12U);
    t15 = *((unsigned int *)t11);
    t15 = (t15 * 1U);
    memcpy(t8, t2, t15);
    xsi_set_current_line(254, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 7);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4512);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(255, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 10);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4576);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 3U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(256, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 12);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4640);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(257, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 16);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4704);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB82;

LAB86:    xsi_set_current_line(260, ng7);
    t18 = (t0 + 3128U);
    t19 = *((char **)t18);
    t12 = *((int *)t19);
    t3 = (t12 == 3);
    if (t3 != 0)
        goto LAB94;

LAB96:    t2 = (t0 + 3128U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t1 = (t12 > 0);
    if (t1 != 0)
        goto LAB97;

LAB98:
LAB95:    goto LAB29;

LAB88:    t26 = 0;

LAB91:    if (t26 < 6U)
        goto LAB92;
    else
        goto LAB90;

LAB92:    t10 = (t2 + t26);
    t11 = (t5 + t26);
    if (*((unsigned char *)t10) != *((unsigned char *)t11))
        goto LAB89;

LAB93:    t26 = (t26 + 1);
    goto LAB91;

LAB94:    xsi_set_current_line(261, ng7);
    t18 = (t0 + 3128U);
    t21 = *((char **)t18);
    t13 = *((int *)t21);
    t18 = work_a_2233526063_3212880686_sub_274810213_3057020925(t0, t14, t13);
    t23 = (t0 + 2888U);
    t24 = *((char **)t23);
    t23 = (t24 + 0);
    t25 = (t14 + 12U);
    t27 = *((unsigned int *)t25);
    t27 = (t27 * 1U);
    memcpy(t23, t18, t27);
    xsi_set_current_line(262, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 7);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4512);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(263, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 10);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4576);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 3U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(264, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 12);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4640);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(265, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 16);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4704);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(266, ng7);
    t2 = (t0 + 4768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    goto LAB95;

LAB97:    xsi_set_current_line(268, ng7);
    t2 = (t0 + 3128U);
    t5 = *((char **)t2);
    t13 = *((int *)t5);
    t2 = work_a_2233526063_3212880686_sub_274810213_3057020925(t0, t14, t13);
    t8 = (t0 + 2888U);
    t10 = *((char **)t8);
    t8 = (t10 + 0);
    t11 = (t14 + 12U);
    t15 = *((unsigned int *)t11);
    t15 = (t15 * 1U);
    memcpy(t8, t2, t15);
    xsi_set_current_line(269, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 7);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4512);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(270, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 10);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4576);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 3U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(271, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 12);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4640);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(272, ng7);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t15 = (16 - 16);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4704);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    memcpy(t18, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB95;

}


extern void work_a_2233526063_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2233526063_3212880686_p_0};
	static char *se[] = {(void *)work_a_2233526063_3212880686_sub_619766279_3057020925,(void *)work_a_2233526063_3212880686_sub_3008558353_3057020925,(void *)work_a_2233526063_3212880686_sub_2731719544_3057020925,(void *)work_a_2233526063_3212880686_sub_2692585240_3057020925,(void *)work_a_2233526063_3212880686_sub_274809124_3057020925,(void *)work_a_2233526063_3212880686_sub_274810213_3057020925};
	xsi_register_didat("work_a_2233526063_3212880686", "isim/Maintest_isim_beh.exe.sim/work/a_2233526063_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
