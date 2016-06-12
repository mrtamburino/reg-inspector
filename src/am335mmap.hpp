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

// Time-Base Submodule Register
#define TBCTL_OFFSET     0x00    // Time-Base Control Register
#define TBSTS_OFFSET     0x02    // Time-Base Status Register
#define TBPHSHR_OFFSET   0x04    // Extension for HRPWM Phase Register
#define TBPHS_OFFSET     0x06    // Time-Base Phase Register
#define TBCNT_OFFSET     0x08    // Time-Base Counter Register
#define TBPRD_OFFSET     0x0A    // Time-Base Period Register

// Counter-Compare Submodule Registers
#define CMPCTL_OFFSET    0x0E    // Counter-Compare Control Register
#define CMPAHR_OFFSET    0x10    // Extension for HRPWM Counter-Compare A Register
#define CMPA_OFFSET      0x12    // Counter-Compare A Register
#define CMPB_OFFSET      0x14    // Counter-Compare B Register

// Action-Qualifier Submodule Registers
#define AQCTLA_OFFSET    0x16    // Action-Qualifier Control Register for Output A (EPWMxA)
#define AQCTLB_OFFSET    0x18    // Action-Qualifier Control Register for Output B (EPWMxB)
#define AQSFRC_OFFSET    0x1A    // Action-Qualifier Software Force Register
#define AQCSFRC_OFFSET   0x1C    // Action-Qualifier Continuous S/W Force Register Set

#endif /* AM335MMAP_HPP */

