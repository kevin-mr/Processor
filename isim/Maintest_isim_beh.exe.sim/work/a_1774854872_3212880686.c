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
static const char *ng0 = "C:/Users/U/Documents/UNIVERSIDAD/Semestre 9/Arquitectura de procesadores/Procesador2/ProyectoFinalArquitecturaProcesadores/Main.vhd";



static void work_a_1774854872_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3752);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(106, ng0);
    t4 = (t0 + 1192U);
    t8 = *((char **)t4);
    t9 = (1 - 7);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t4 = (t8 + t12);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t9 = (3 - 7);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t2 = (t4 + t12);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t9 = (5 - 7);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t2 = (t4 + t12);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB13;

LAB14:    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t9 = (7 - 7);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t2 = (t4 + t12);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB15;

LAB16:
LAB9:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 2448U);
    t4 = *((char **)t2);
    t2 = (t0 + 3832);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 16U);
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(107, ng0);
    t15 = (t0 + 1512U);
    t16 = *((char **)t15);
    t15 = (t0 + 2448U);
    t17 = *((char **)t15);
    t15 = (t17 + 0);
    memcpy(t15, t16, 16U);
    goto LAB9;

LAB11:    xsi_set_current_line(109, ng0);
    t5 = (t0 + 1672U);
    t8 = *((char **)t5);
    t5 = (t0 + 2448U);
    t15 = *((char **)t5);
    t5 = (t15 + 0);
    memcpy(t5, t8, 16U);
    goto LAB9;

LAB13:    xsi_set_current_line(111, ng0);
    t5 = (t0 + 1832U);
    t8 = *((char **)t5);
    t5 = (t0 + 2448U);
    t15 = *((char **)t5);
    t5 = (t15 + 0);
    memcpy(t5, t8, 16U);
    goto LAB9;

LAB15:    xsi_set_current_line(113, ng0);
    t5 = (t0 + 1992U);
    t8 = *((char **)t5);
    t5 = (t0 + 2448U);
    t15 = *((char **)t5);
    t5 = (t15 + 0);
    memcpy(t5, t8, 16U);
    goto LAB9;

}


extern void work_a_1774854872_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1774854872_3212880686_p_0};
	xsi_register_didat("work_a_1774854872_3212880686", "isim/Maintest_isim_beh.exe.sim/work/a_1774854872_3212880686.didat");
	xsi_register_executes(pe);
}
