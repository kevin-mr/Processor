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
char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);


static void work_a_0832606739_3212880686_p_0(char *t0)
{
    char t30[16];
    char t31[16];
    char t33[16];
    char t34[16];
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
    char *t19;
    int t20;
    char *t21;
    char *t22;
    int t23;
    char *t24;
    int t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t32;
    unsigned int t35;
    unsigned int t36;

LAB0:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(67, ng0);
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
    t12 = (t0 + 6457);
    t14 = xsi_mem_cmp(t12, t4, 3U);
    if (t14 == 1)
        goto LAB9;

LAB15:    t15 = (t0 + 6460);
    t17 = xsi_mem_cmp(t15, t4, 3U);
    if (t17 == 1)
        goto LAB10;

LAB16:    t18 = (t0 + 6463);
    t20 = xsi_mem_cmp(t18, t4, 3U);
    if (t20 == 1)
        goto LAB11;

LAB17:    t21 = (t0 + 6466);
    t23 = xsi_mem_cmp(t21, t4, 3U);
    if (t23 == 1)
        goto LAB12;

LAB18:    t24 = (t0 + 6469);
    t26 = xsi_mem_cmp(t24, t4, 3U);
    if (t26 == 1)
        goto LAB13;

LAB19:
LAB14:
LAB8:    xsi_set_current_line(63, ng0);
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
        goto LAB21;

LAB23:
LAB22:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB9:    xsi_set_current_line(52, ng0);
    t27 = (t0 + 1352U);
    t28 = *((char **)t27);
    t27 = (t0 + 1968U);
    t29 = *((char **)t27);
    t27 = (t29 + 0);
    memcpy(t27, t28, 16U);
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
    t2 = (t0 + 6316U);
    t5 = (t0 + 2088U);
    t8 = *((char **)t5);
    t5 = (t0 + 6332U);
    t12 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t30, t4, t2, t8, t5);
    t13 = (t0 + 2208U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    t16 = (t30 + 12U);
    t9 = *((unsigned int *)t16);
    t10 = (1U * t9);
    memcpy(t13, t12, t10);
    goto LAB8;

LAB12:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1968U);
    t4 = *((char **)t2);
    t2 = (t0 + 6316U);
    t5 = (t0 + 2088U);
    t8 = *((char **)t5);
    t5 = (t0 + 6332U);
    t12 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t30, t4, t2, t8, t5);
    t13 = (t0 + 2208U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    t16 = (t30 + 12U);
    t9 = *((unsigned int *)t16);
    t10 = (1U * t9);
    memcpy(t13, t12, t10);
    goto LAB8;

LAB13:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 6472);
    t5 = (t0 + 1968U);
    t8 = *((char **)t5);
    t9 = (15 - 5);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t5 = (t8 + t11);
    t12 = (t31 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 5;
    t13 = (t12 + 4U);
    *((int *)t13) = 0;
    t13 = (t12 + 8U);
    *((int *)t13) = -1;
    t14 = (0 - 5);
    t32 = (t14 * -1);
    t32 = (t32 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t32;
    t13 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t30, t5, t31);
    t16 = ((IEEE_P_2592010699) + 4024);
    t18 = (t34 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = 9;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t17 = (9 - 0);
    t32 = (t17 * 1);
    t32 = (t32 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t32;
    t15 = xsi_base_array_concat(t15, t33, t16, (char)97, t2, t34, (char)97, t13, t30, (char)101);
    t19 = (t0 + 2208U);
    t21 = *((char **)t19);
    t19 = (t21 + 0);
    t22 = (t30 + 12U);
    t32 = *((unsigned int *)t22);
    t35 = (1U * t32);
    t36 = (10U + t35);
    memcpy(t19, t15, t36);
    goto LAB8;

LAB20:;
LAB21:    xsi_set_current_line(64, ng0);
    t5 = (t0 + 2208U);
    t8 = *((char **)t5);
    t5 = (t0 + 3592);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t8, 16U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB22;

}


extern void work_a_0832606739_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0832606739_3212880686_p_0};
	xsi_register_didat("work_a_0832606739_3212880686", "isim/Maintest_isim_beh.exe.sim/work/a_0832606739_3212880686.didat");
	xsi_register_executes(pe);
}
