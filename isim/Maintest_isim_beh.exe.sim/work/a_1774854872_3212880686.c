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
static const char *ng0 = "C:/Users/U/Documents/UNIVERSIDAD/Semestre 9/Arquitectura de procesadores/ProyectoFinalArquitecturaProcesadores/Main.vhd";



static void work_a_1774854872_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(130, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = (1 - 7);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = (3 - 7);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB5;

LAB6:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = (5 - 7);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB7;

LAB8:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = (7 - 7);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB9;

LAB10:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = (1 - 1);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB11;

LAB12:
LAB3:    xsi_set_current_line(141, ng0);
    t1 = (t0 + 2768U);
    t2 = *((char **)t1);
    t1 = (t0 + 4152);
    t9 = (t1 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 16U);
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 4072);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(131, ng0);
    t9 = (t0 + 1512U);
    t10 = *((char **)t9);
    t9 = (t0 + 2768U);
    t11 = *((char **)t9);
    t9 = (t11 + 0);
    memcpy(t9, t10, 16U);
    goto LAB3;

LAB5:    xsi_set_current_line(133, ng0);
    t9 = (t0 + 1672U);
    t10 = *((char **)t9);
    t9 = (t0 + 2768U);
    t11 = *((char **)t9);
    t9 = (t11 + 0);
    memcpy(t9, t10, 16U);
    goto LAB3;

LAB7:    xsi_set_current_line(135, ng0);
    t9 = (t0 + 1832U);
    t10 = *((char **)t9);
    t9 = (t0 + 2768U);
    t11 = *((char **)t9);
    t9 = (t11 + 0);
    memcpy(t9, t10, 16U);
    goto LAB3;

LAB9:    xsi_set_current_line(137, ng0);
    t9 = (t0 + 1992U);
    t10 = *((char **)t9);
    t9 = (t0 + 2768U);
    t11 = *((char **)t9);
    t9 = (t11 + 0);
    memcpy(t9, t10, 16U);
    goto LAB3;

LAB11:    xsi_set_current_line(139, ng0);
    t9 = (t0 + 2152U);
    t10 = *((char **)t9);
    t9 = (t0 + 2768U);
    t11 = *((char **)t9);
    t9 = (t11 + 0);
    memcpy(t9, t10, 16U);
    goto LAB3;

}


extern void work_a_1774854872_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1774854872_3212880686_p_0};
	xsi_register_didat("work_a_1774854872_3212880686", "isim/Maintest_isim_beh.exe.sim/work/a_1774854872_3212880686.didat");
	xsi_register_executes(pe);
}
