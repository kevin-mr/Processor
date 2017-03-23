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
static const char *ng1 = "C:/Users/U/Documents/UNIVERSIDAD/Semestre 9/Arquitectura de procesadores/ProyectoFinalArquitecturaProcesadores/RC.vhd";



unsigned char work_a_4219750676_3212880686_sub_1337540229_3057020925(char *t1, char *t2)
{
    char t3[128];
    char t4[24];
    char t5[16];
    char t12[8];
    unsigned char t0;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned char t16;
    char *t17;
    char *t18;
    int t20;
    char *t21;
    int t23;
    char *t24;
    int t26;
    char *t27;
    int t29;
    char *t30;
    char *t31;

LAB0:    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 1;
    t7 = (t6 + 4U);
    *((int *)t7) = 0;
    t7 = (t6 + 8U);
    *((int *)t7) = -1;
    t8 = (0 - 1);
    t9 = (t8 * -1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t7 = (t3 + 4U);
    t10 = ((IEEE_P_2592010699) + 3320);
    t11 = (t7 + 88U);
    *((char **)t11) = t10;
    t13 = (t7 + 56U);
    *((char **)t13) = t12;
    xsi_type_set_default_value(t10, t12, 0);
    t14 = (t7 + 80U);
    *((unsigned int *)t14) = 1U;
    t15 = (t4 + 4U);
    t16 = (t2 != 0);
    if (t16 == 1)
        goto LAB3;

LAB2:    t17 = (t4 + 12U);
    *((char **)t17) = t5;
    t18 = (t1 + 5551);
    t20 = xsi_mem_cmp(t18, t2, 2U);
    if (t20 == 1)
        goto LAB5;

LAB10:    t21 = (t1 + 5553);
    t23 = xsi_mem_cmp(t21, t2, 2U);
    if (t23 == 1)
        goto LAB6;

LAB11:    t24 = (t1 + 5555);
    t26 = xsi_mem_cmp(t24, t2, 2U);
    if (t26 == 1)
        goto LAB7;

LAB12:    t27 = (t1 + 5557);
    t29 = xsi_mem_cmp(t27, t2, 2U);
    if (t29 == 1)
        goto LAB8;

LAB13:
LAB9:
LAB4:    t6 = (t7 + 56U);
    t10 = *((char **)t6);
    t16 = *((unsigned char *)t10);
    t0 = t16;

LAB1:    return t0;
LAB3:    *((char **)t15) = t2;
    goto LAB2;

LAB5:    t30 = (t7 + 56U);
    t31 = *((char **)t30);
    t30 = (t31 + 0);
    *((unsigned char *)t30) = (unsigned char)2;
    goto LAB4;

LAB6:    t6 = (t7 + 56U);
    t10 = *((char **)t6);
    t6 = (t10 + 0);
    *((unsigned char *)t6) = (unsigned char)3;
    goto LAB4;

LAB7:    t6 = (t7 + 56U);
    t10 = *((char **)t6);
    t6 = (t10 + 0);
    *((unsigned char *)t6) = (unsigned char)2;
    goto LAB4;

LAB8:    t6 = (t7 + 56U);
    t10 = *((char **)t6);
    t6 = (t10 + 0);
    *((unsigned char *)t6) = (unsigned char)3;
    goto LAB4;

LAB14:;
LAB15:;
}

static void work_a_4219750676_3212880686_p_0(char *t0)
{
    char t37[16];
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
    int t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned char t26;
    char *t27;
    char *t28;
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned char t35;
    char *t36;
    char *t38;
    unsigned char t39;
    char *t40;
    char *t41;
    int t42;
    int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;

LAB0:    xsi_set_current_line(61, ng1);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(72, ng1);
    t2 = (t0 + 1808U);
    t4 = *((char **)t2);
    t2 = (t0 + 3192);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t4, 16U);
    xsi_driver_first_trans_fast_port(t2);
    t2 = (t0 + 3112);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(62, ng1);
    t4 = (t0 + 1192U);
    t8 = *((char **)t4);
    t4 = (t0 + 5559);
    t10 = xsi_mem_cmp(t4, t8, 2U);
    if (t10 == 1)
        goto LAB9;

LAB12:    t11 = (t0 + 5561);
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

LAB9:    xsi_set_current_line(64, ng1);
    t14 = (t0 + 5563);
    *((int *)t14) = 15;
    t15 = (t0 + 5567);
    *((int *)t15) = 0;
    t16 = 15;
    t17 = 0;

LAB15:    if (t16 >= t17)
        goto LAB16;

LAB18:    goto LAB8;

LAB10:    xsi_set_current_line(68, ng1);
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
LAB16:    xsi_set_current_line(65, ng1);
    t18 = (t0 + 1808U);
    t19 = *((char **)t18);
    t18 = (t0 + 5563);
    t20 = *((int *)t18);
    t21 = (t20 - 15);
    t22 = (t21 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, *((int *)t18));
    t23 = (1U * t22);
    t24 = (0 + t23);
    t25 = (t19 + t24);
    t26 = *((unsigned char *)t25);
    t27 = (t0 + 1352U);
    t28 = *((char **)t27);
    t27 = (t0 + 5563);
    t29 = *((int *)t27);
    t30 = (t29 - 15);
    t31 = (t30 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, *((int *)t27));
    t32 = (1U * t31);
    t33 = (0 + t32);
    t34 = (t28 + t33);
    t35 = *((unsigned char *)t34);
    t38 = ((IEEE_P_2592010699) + 4024);
    t36 = xsi_base_array_concat(t36, t37, t38, (char)99, t26, (char)99, t35, (char)101);
    t39 = work_a_4219750676_3212880686_sub_1337540229_3057020925(t0, t36);
    t40 = (t0 + 1808U);
    t41 = *((char **)t40);
    t40 = (t0 + 5563);
    t42 = *((int *)t40);
    t43 = (t42 - 15);
    t44 = (t43 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, *((int *)t40));
    t45 = (1U * t44);
    t46 = (0 + t45);
    t47 = (t41 + t46);
    *((unsigned char *)t47) = t39;

LAB17:    t2 = (t0 + 5563);
    t16 = *((int *)t2);
    t4 = (t0 + 5567);
    t17 = *((int *)t4);
    if (t16 == t17)
        goto LAB18;

LAB19:    t10 = (t16 + -1);
    t16 = t10;
    t5 = (t0 + 5563);
    *((int *)t5) = t16;
    goto LAB15;

}


extern void work_a_4219750676_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4219750676_3212880686_p_0};
	static char *se[] = {(void *)work_a_4219750676_3212880686_sub_1337540229_3057020925};
	xsi_register_didat("work_a_4219750676_3212880686", "isim/RC_isim_beh.exe.sim/work/a_4219750676_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
