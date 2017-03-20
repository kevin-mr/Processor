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
static const char *ng0 = "C:/Users/U/Documents/UNIVERSIDAD/Semestre 9/Arquitectura de procesadores/ProyectoFinalArquitecturaProcesadores/RAM.vhd";
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);


static void work_a_3830602496_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1968U);
    t4 = *((char **)t2);
    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t2 = (t0 + 6392U);
    t11 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t5, t2);
    t17 = (t11 - 64);
    t12 = (t17 * -1);
    xsi_vhdl_check_range_of_index(64, 0, -1, t11);
    t13 = (16U * t12);
    t14 = (0 + t13);
    t8 = (t4 + t14);
    t9 = (t0 + 3472);
    t10 = (t9 + 56U);
    t15 = *((char **)t10);
    t16 = (t15 + 56U);
    t19 = *((char **)t16);
    memcpy(t19, t8, 16U);
    xsi_driver_first_trans_fast_port(t9);
    t2 = (t0 + 3392);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 7577);
    t9 = (t0 + 1968U);
    t10 = *((char **)t9);
    t11 = (30 - 64);
    t12 = (t11 * -1);
    t13 = (16U * t12);
    t14 = (0 + t13);
    t9 = (t10 + t14);
    memcpy(t9, t4, 16U);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 7593);
    t5 = (t0 + 1968U);
    t8 = *((char **)t5);
    t11 = (31 - 64);
    t12 = (t11 * -1);
    t13 = (16U * t12);
    t14 = (0 + t13);
    t5 = (t8 + t14);
    memcpy(t5, t2, 16U);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t2 = (t0 + 7609);
    t1 = 1;
    if (2U == 2U)
        goto LAB11;

LAB12:    t1 = 0;

LAB13:    if (t1 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t2 = (t0 + 7611);
    t1 = 1;
    if (2U == 2U)
        goto LAB19;

LAB20:    t1 = 0;

LAB21:    if (t1 != 0)
        goto LAB17;

LAB18:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(58, ng0);
    t10 = (t0 + 1968U);
    t15 = *((char **)t10);
    t10 = (t0 + 1352U);
    t16 = *((char **)t10);
    t10 = (t0 + 6392U);
    t11 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t16, t10);
    t17 = (t11 - 64);
    t13 = (t17 * -1);
    xsi_vhdl_check_range_of_index(64, 0, -1, t11);
    t14 = (16U * t13);
    t18 = (0 + t14);
    t19 = (t15 + t18);
    t20 = (t0 + 2088U);
    t21 = *((char **)t20);
    t20 = (t21 + 0);
    memcpy(t20, t19, 16U);
    goto LAB9;

LAB11:    t12 = 0;

LAB14:    if (t12 < 2U)
        goto LAB15;
    else
        goto LAB13;

LAB15:    t8 = (t4 + t12);
    t9 = (t2 + t12);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB12;

LAB16:    t12 = (t12 + 1);
    goto LAB14;

LAB17:    xsi_set_current_line(60, ng0);
    t10 = (t0 + 1512U);
    t15 = *((char **)t10);
    t10 = (t0 + 1968U);
    t16 = *((char **)t10);
    t10 = (t0 + 1352U);
    t19 = *((char **)t10);
    t10 = (t0 + 6392U);
    t11 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t19, t10);
    t17 = (t11 - 64);
    t13 = (t17 * -1);
    xsi_vhdl_check_range_of_index(64, 0, -1, t11);
    t14 = (16U * t13);
    t18 = (0 + t14);
    t20 = (t16 + t18);
    memcpy(t20, t15, 16U);
    goto LAB9;

LAB19:    t12 = 0;

LAB22:    if (t12 < 2U)
        goto LAB23;
    else
        goto LAB21;

LAB23:    t8 = (t4 + t12);
    t9 = (t2 + t12);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB20;

LAB24:    t12 = (t12 + 1);
    goto LAB22;

}


extern void work_a_3830602496_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3830602496_3212880686_p_0};
	xsi_register_didat("work_a_3830602496_3212880686", "isim/Maintest_isim_beh.exe.sim/work/a_3830602496_3212880686.didat");
	xsi_register_executes(pe);
}
