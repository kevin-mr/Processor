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
static const char *ng0 = "C:/Users/U/Documents/UNIVERSIDAD/Semestre 9/Arquitectura de procesadores/ProyectoFinalArquitecturaProcesadores/ALU.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_1547198987_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);


static void work_a_0832606739_3212880686_p_0(char *t0)
{
    char t27[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    int t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    int t20;
    char *t21;
    int t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2208U);
    t4 = *((char **)t2);
    t2 = (t0 + 3592);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 16U);
    xsi_driver_first_trans_fast_port(t2);
    t2 = (t0 + 3512);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 1192U);
    t8 = *((char **)t4);
    t9 = (3 - 2);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t4 = (t8 + t11);
    t12 = (t0 + 6453);
    t14 = xsi_mem_cmp(t12, t4, 3U);
    if (t14 == 1)
        goto LAB9;

LAB14:    t15 = (t0 + 6456);
    t17 = xsi_mem_cmp(t15, t4, 3U);
    if (t17 == 1)
        goto LAB10;

LAB15:    t18 = (t0 + 6459);
    t20 = xsi_mem_cmp(t18, t4, 3U);
    if (t20 == 1)
        goto LAB11;

LAB16:    t21 = (t0 + 6462);
    t23 = xsi_mem_cmp(t21, t4, 3U);
    if (t23 == 1)
        goto LAB12;

LAB17:
LAB13:
LAB8:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t14 = (3 - 3);
    t9 = (t14 * -1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t2 = (t4 + t11);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB19;

LAB21:
LAB20:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB9:    xsi_set_current_line(52, ng0);
    t24 = (t0 + 1352U);
    t25 = *((char **)t24);
    t24 = (t0 + 1968U);
    t26 = *((char **)t24);
    t24 = (t26 + 0);
    memcpy(t24, t25, 16U);
    goto LAB8;

LAB10:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 2088U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    memcpy(t2, t4, 16U);
    goto LAB8;

LAB11:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1968U);
    t4 = *((char **)t2);
    t2 = (t0 + 6312U);
    t5 = (t0 + 2088U);
    t8 = *((char **)t5);
    t5 = (t0 + 6328U);
    t12 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t27, t4, t2, t8, t5);
    t13 = (t0 + 2208U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    t16 = (t27 + 12U);
    t9 = *((unsigned int *)t16);
    t10 = (1U * t9);
    memcpy(t13, t12, t10);
    goto LAB8;

LAB12:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1968U);
    t4 = *((char **)t2);
    t2 = (t0 + 6312U);
    t5 = (t0 + 2088U);
    t8 = *((char **)t5);
    t5 = (t0 + 6328U);
    t12 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t27, t4, t2, t8, t5);
    t13 = (t0 + 2208U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    t16 = (t27 + 12U);
    t9 = *((unsigned int *)t16);
    t10 = (1U * t9);
    memcpy(t13, t12, t10);
    goto LAB8;

LAB18:;
LAB19:    xsi_set_current_line(62, ng0);
    t5 = (t0 + 2208U);
    t8 = *((char **)t5);
    t5 = (t0 + 3592);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t8, 16U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB20;

}


extern void work_a_0832606739_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0832606739_3212880686_p_0};
	xsi_register_didat("work_a_0832606739_3212880686", "isim/Maintest_isim_beh.exe.sim/work/a_0832606739_3212880686.didat");
	xsi_register_executes(pe);
}
