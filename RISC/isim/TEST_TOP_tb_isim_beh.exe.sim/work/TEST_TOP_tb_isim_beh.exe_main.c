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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002623497592_0886308060_init();
    work_m_00000000002940232339_3901337038_init();
    work_m_00000000000100397951_1733832700_init();
    work_m_00000000002086021411_1827790597_init();
    work_m_00000000002624342044_1178632293_init();
    work_m_00000000001493069232_0913582032_init();
    work_m_00000000001813680488_3578110727_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001813680488_3578110727");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
