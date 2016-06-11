/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   am335mmap.hpp
 * Author: ale
 *
 * Created on June 11, 2016, 7:44 PM
 */

#ifndef AM335MMAP_HPP
#define AM335MMAP_HPP

#define EPWM0_ADDR       0x48300200
#define EPWM1_ADDR       0x48302200
#define EPWM2_ADDR       0x48304200

//Time-Base Submodule Register
#define TBCTL_OFFSET     0x00    //Time-Base Control Register
#define TBSTS_OFFSET     0x02    //Time-Base Status Register
#define TBPHSHR_OFFSET   0x04    //Extension for HRPWM Phase Register
#define TBPHS_OFFSET     0x06    //Time-Base Phase Register
#define TBCNT_OFFSET     0x08    //Time-Base Counter Register
#define TBPRD_OFFSET     0x0A    //Time-Base Period Register


#endif /* AM335MMAP_HPP */

