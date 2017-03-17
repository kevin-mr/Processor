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
static const char *ng2 = "C:/Users/U/Documents/UNIVERSIDAD/Semestre 9/Arquitectura de procesadores/ProyectoFinalArquitecturaProcesadores/UnitControl.vhd";



char *work_a_2233526063_3212880686_sub_619766279_3057020925(char *t1, char *t2, int t3)
{
    char t4[128];
    char t5[8];
    char t8[16];
    char t15[8];
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

LAB0:    t6 = (t1 + 5996);
    t9 = (t8 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 7;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t11 = (0 - 7);
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
    memcpy(t15, t6, 8U);
    t17 = (t10 + 64U);
    *((char **)t17) = t8;
    t18 = (t10 + 80U);
    *((unsigned int *)t18) = 8U;
    t19 = (t5 + 4U);
    *((int *)t19) = t3;
    if (t3 == 0)
        goto LAB3;

LAB11:    if (t3 == 1)
        goto LAB4;

LAB12:    if (t3 == 2)
        goto LAB5;

LAB13:    if (t3 == 3)
        goto LAB6;

LAB14:    if (t3 == 4)
        goto LAB7;

LAB15:    if (t3 == 5)
        goto LAB8;

LAB16:    if (t3 == 6)
        goto LAB9;

LAB17:
LAB10:    t6 = (t10 + 56U);
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

LAB3:    t20 = (t1 + 6004);
    t22 = (t10 + 56U);
    t23 = *((char **)t22);
    t22 = (t23 + 0);
    memcpy(t22, t20, 8U);
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

LAB4:    t6 = (t1 + 6012);
    t9 = (t10 + 56U);
    t13 = *((char **)t9);
    t9 = (t13 + 0);
    memcpy(t9, t6, 8U);
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

LAB5:    t6 = (t1 + 6020);
    t9 = (t10 + 56U);
    t13 = *((char **)t9);
    t9 = (t13 + 0);
    memcpy(t9, t6, 8U);
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

LAB6:    t6 = (t1 + 6028);
    t9 = (t10 + 56U);
    t13 = *((char **)t9);
    t9 = (t13 + 0);
    memcpy(t9, t6, 8U);
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

LAB7:    t6 = (t1 + 6036);
    t9 = (t10 + 56U);
    t13 = *((char **)t9);
    t9 = (t13 + 0);
    memcpy(t9, t6, 8U);
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

LAB8:    t6 = (t1 + 6044);
    t9 = (t10 + 56U);
    t13 = *((char **)t9);
    t9 = (t13 + 0);
    memcpy(t9, t6, 8U);
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

LAB9:    t6 = (t1 + 6052);
    t9 = (t10 + 56U);
    t13 = *((char **)t9);
    t9 = (t13 + 0);
    memcpy(t9, t6, 8U);
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

LAB18:;
LAB19:    goto LAB2;

LAB20:    goto LAB2;

LAB21:    goto LAB2;

LAB22:    goto LAB2;

LAB23:    goto LAB2;

LAB24:    goto LAB2;

LAB25:    goto LAB2;

LAB26:    goto LAB2;

}

static void work_a_2233526063_3212880686_p_0(char *t0)
{
    char t12[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    unsigned char t10;
    char *t11;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;

LAB0:    xsi_set_current_line(76, ng2);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3272);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(78, ng2);
    t4 = (t0 + 1968U);
    t8 = *((char **)t4);
    t9 = *((int *)t8);
    t10 = (t9 > 6);
    if (t10 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(82, ng2);
    t2 = (t0 + 1968U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t2 = work_a_2233526063_3212880686_sub_619766279_3057020925(t0, t12, t9);
    t5 = (t12 + 12U);
    t13 = *((unsigned int *)t5);
    t13 = (t13 * 1U);
    t1 = (8U != t13);
    if (t1 == 1)
        goto LAB11;

LAB12:    t8 = (t0 + 3352);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 8U);
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(83, ng2);
    t2 = (t0 + 1968U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t17 = (t9 + 1);
    t2 = (t0 + 1968U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((int *)t2) = t17;
    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(79, ng2);
    t4 = (t0 + 1968U);
    t11 = *((char **)t4);
    t4 = (t11 + 0);
    *((int *)t4) = 0;
    goto LAB9;

LAB11:    xsi_size_not_matching(8U, t13, 0);
    goto LAB12;

}


extern void work_a_2233526063_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2233526063_3212880686_p_0};
	static char *se[] = {(void *)work_a_2233526063_3212880686_sub_619766279_3057020925};
	xsi_register_didat("work_a_2233526063_3212880686", "isim/Maintest_isim_beh.exe.sim/work/a_2233526063_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
