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
static const char *ng0 = "C:/Users/U/Documents/UNIVERSIDAD/Semestre 9/Arquitectura de procesadores/Procesador2/ProyectoFinalArquitecturaProcesadores/PC.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );


static void work_a_1991350011_3212880686_p_0(char *t0)
{
    char t17[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t18;
    unsigned int t19;

LAB0:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3112);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 1192U);
    t8 = *((char **)t4);
    t4 = (t0 + 5659);
    t10 = xsi_mem_cmp(t4, t8, 2U);
    if (t10 == 1)
        goto LAB9;

LAB12:    t11 = (t0 + 5661);
    t13 = xsi_mem_cmp(t11, t8, 2U);
    if (t13 == 1)
        goto LAB10;

LAB13:
LAB11:
LAB8:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB9:    xsi_set_current_line(50, ng0);
    t14 = (t0 + 1352U);
    t15 = *((char **)t14);
    t14 = (t0 + 1808U);
    t16 = *((char **)t14);
    t14 = (t16 + 0);
    memcpy(t14, t15, 16U);
    goto LAB8;

LAB10:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1808U);
    t4 = *((char **)t2);
    t2 = (t0 + 5600U);
    t5 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t17, t4, t2, 1);
    t8 = (t0 + 1808U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    t11 = (t17 + 12U);
    t18 = *((unsigned int *)t11);
    t19 = (1U * t18);
    memcpy(t8, t5, t19);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1808U);
    t4 = *((char **)t2);
    t2 = (t0 + 3192);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t4, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB8;

LAB14:;
}


extern void work_a_1991350011_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1991350011_3212880686_p_0};
	xsi_register_didat("work_a_1991350011_3212880686", "isim/Maintest_isim_beh.exe.sim/work/a_1991350011_3212880686.didat");
	xsi_register_executes(pe);
}
