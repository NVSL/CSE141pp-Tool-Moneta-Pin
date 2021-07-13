/*
 * Copyright 2002-2020 Intel Corporation.
 * 
 * This software and the related documents are Intel copyrighted materials, and your
 * use of them is governed by the express license under which they were provided to
 * you ("License"). Unless the License provides otherwise, you may not use, modify,
 * copy, publish, distribute, disclose or transmit this software or the related
 * documents without Intel's prior written permission.
 * 
 * This software and the related documents are provided as is, with no express or
 * implied warranties, other than those that are expressly stated in the License.
 */

// <COMPONENT>: debugger-protocol
// <FILE-TYPE>: component public header

#ifndef DEBUGGER_PROTOCOL_REGS_WINDOWS_AVX512_32_HPP
#define DEBUGGER_PROTOCOL_REGS_WINDOWS_AVX512_32_HPP

#include "debugger-protocol.hpp"

namespace DEBUGGER_PROTOCOL
{
#if defined(DEBUGGER_PROTOCOL_BUILD) // Library clients should NOT define this.

/*!
 * This is the register set the Windows debuggers use for 32-bit AVX512.
 */
DEBUGGER_PROTOCOL_API REG_DESCRIPTION RegsWindowsAvx512_32[] = {
    {32, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_EAX
    {32, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_ECX
    {32, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_EDX
    {32, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_EBX
    {32, REG_INVALID, true},   // REG_WINDOWS_AVX512_32_ESP
    {32, REG_INVALID, true},   // REG_WINDOWS_AVX512_32_EBP
    {32, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_ESI
    {32, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_EDI
    {32, REG_PC, true},        // REG_WINDOWS_AVX512_32_PC
    {32, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_EFLAGS
    {32, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_CS
    {32, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_SS
    {32, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_DS
    {32, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_ES
    {32, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_FS
    {32, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_GS
    {80, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_ST0
    {80, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_ST1
    {80, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_ST2
    {80, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_ST3
    {80, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_ST4
    {80, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_ST5
    {80, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_ST6
    {80, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_ST7
    {32, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_FCTRL
    {32, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_FSTAT
    {32, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_FTAG_FULL
    {32, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_FISEG
    {32, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_FIOFF
    {32, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_FOSEG
    {32, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_FOOFF
    {32, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_FOP
    {128, REG_INVALID, false}, // REG_WINDOWS_AVX512_32_XMM0
    {128, REG_INVALID, false}, // REG_WINDOWS_AVX512_32_XMM1
    {128, REG_INVALID, false}, // REG_WINDOWS_AVX512_32_XMM2
    {128, REG_INVALID, false}, // REG_WINDOWS_AVX512_32_XMM3
    {128, REG_INVALID, false}, // REG_WINDOWS_AVX512_32_XMM4
    {128, REG_INVALID, false}, // REG_WINDOWS_AVX512_32_XMM5
    {128, REG_INVALID, false}, // REG_WINDOWS_AVX512_32_XMM6
    {128, REG_INVALID, false}, // REG_WINDOWS_AVX512_32_XMM7
    {32, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_MXCSR
    {32, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_MXCSRMASK
    {128, REG_INVALID, false}, // REG_WINDOWS_AVX512_32_YMM0H
    {128, REG_INVALID, false}, // REG_WINDOWS_AVX512_32_YMM1H
    {128, REG_INVALID, false}, // REG_WINDOWS_AVX512_32_YMM2H
    {128, REG_INVALID, false}, // REG_WINDOWS_AVX512_32_YMM3H
    {128, REG_INVALID, false}, // REG_WINDOWS_AVX512_32_YMM4H
    {128, REG_INVALID, false}, // REG_WINDOWS_AVX512_32_YMM5H
    {128, REG_INVALID, false}, // REG_WINDOWS_AVX512_32_YMM6H
    {128, REG_INVALID, false}, // REG_WINDOWS_AVX512_32_YMM7H
    {64, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_K0
    {64, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_K1
    {64, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_K2
    {64, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_K3
    {64, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_K4
    {64, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_K5
    {64, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_K6
    {64, REG_INVALID, false},  // REG_WINDOWS_AVX512_32_K7
    {256, REG_INVALID, false}, // REG_WINDOWS_AVX512_32_ZMM0H
    {256, REG_INVALID, false}, // REG_WINDOWS_AVX512_32_ZMM1H
    {256, REG_INVALID, false}, // REG_WINDOWS_AVX512_32_ZMM2H
    {256, REG_INVALID, false}, // REG_WINDOWS_AVX512_32_ZMM3H
    {256, REG_INVALID, false}, // REG_WINDOWS_AVX512_32_ZMM4H
    {256, REG_INVALID, false}, // REG_WINDOWS_AVX512_32_ZMM5H
    {256, REG_INVALID, false}, // REG_WINDOWS_AVX512_32_ZMM6H
    {256, REG_INVALID, false}  // REG_WINDOWS_AVX512_32_ZMM7H
};

/*!
 * Number of entries in RegsWindowsAvx512_32.
 */
DEBUGGER_PROTOCOL_API unsigned RegsWindowsAvx512_32Count = sizeof(RegsWindowsAvx512_32) / sizeof(RegsWindowsAvx512_32[0]);

#else

DEBUGGER_PROTOCOL_API extern REG_DESCRIPTION RegsWindowsAvx512_32[]; ///< 32-bit Avx512 register set on Windows.
DEBUGGER_PROTOCOL_API extern unsigned RegsWindowsAvx512_32Count;     ///< Number of entries in RegsWindowsAvx512_32.

#endif /*DEBUGGER_PROTOCOL_BUILD*/

/*!
 * Convenient identifiers for the registers in this set.
 */
enum REG_WINDOWS_AVX512_32
{
    REG_WINDOWS_AVX512_32_FIRST = REG_END,
    REG_WINDOWS_AVX512_32_EAX   = REG_WINDOWS_AVX512_32_FIRST,
    REG_WINDOWS_AVX512_32_ECX,
    REG_WINDOWS_AVX512_32_EDX,
    REG_WINDOWS_AVX512_32_EBX,
    REG_WINDOWS_AVX512_32_ESP,
    REG_WINDOWS_AVX512_32_EBP,
    REG_WINDOWS_AVX512_32_ESI,
    REG_WINDOWS_AVX512_32_EDI,
    REG_WINDOWS_AVX512_32_PC,
    REG_WINDOWS_AVX512_32_EFLAGS,
    REG_WINDOWS_AVX512_32_CS,
    REG_WINDOWS_AVX512_32_SS,
    REG_WINDOWS_AVX512_32_DS,
    REG_WINDOWS_AVX512_32_ES,
    REG_WINDOWS_AVX512_32_FS,
    REG_WINDOWS_AVX512_32_GS,
    REG_WINDOWS_AVX512_32_ST0,
    REG_WINDOWS_AVX512_32_ST1,
    REG_WINDOWS_AVX512_32_ST2,
    REG_WINDOWS_AVX512_32_ST3,
    REG_WINDOWS_AVX512_32_ST4,
    REG_WINDOWS_AVX512_32_ST5,
    REG_WINDOWS_AVX512_32_ST6,
    REG_WINDOWS_AVX512_32_ST7,
    REG_WINDOWS_AVX512_32_FCTRL,
    REG_WINDOWS_AVX512_32_FSTAT,
    REG_WINDOWS_AVX512_32_FTAG_FULL, // 16-bit "full" encoding
    REG_WINDOWS_AVX512_32_FISEG,
    REG_WINDOWS_AVX512_32_FIOFF,
    REG_WINDOWS_AVX512_32_FOSEG,
    REG_WINDOWS_AVX512_32_FOOFF,
    REG_WINDOWS_AVX512_32_FOP,
    REG_WINDOWS_AVX512_32_XMM0,
    REG_WINDOWS_AVX512_32_XMM1,
    REG_WINDOWS_AVX512_32_XMM2,
    REG_WINDOWS_AVX512_32_XMM3,
    REG_WINDOWS_AVX512_32_XMM4,
    REG_WINDOWS_AVX512_32_XMM5,
    REG_WINDOWS_AVX512_32_XMM6,
    REG_WINDOWS_AVX512_32_XMM7,
    REG_WINDOWS_AVX512_32_MXCSR,
    REG_WINDOWS_AVX512_32_MXCSRMASK,
    REG_WINDOWS_AVX512_32_YMM0H,
    REG_WINDOWS_AVX512_32_YMM1H,
    REG_WINDOWS_AVX512_32_YMM2H,
    REG_WINDOWS_AVX512_32_YMM3H,
    REG_WINDOWS_AVX512_32_YMM4H,
    REG_WINDOWS_AVX512_32_YMM5H,
    REG_WINDOWS_AVX512_32_YMM6H,
    REG_WINDOWS_AVX512_32_YMM7H,
    REG_WINDOWS_AVX512_32_K0,
    REG_WINDOWS_AVX512_32_K1,
    REG_WINDOWS_AVX512_32_K2,
    REG_WINDOWS_AVX512_32_K3,
    REG_WINDOWS_AVX512_32_K4,
    REG_WINDOWS_AVX512_32_K5,
    REG_WINDOWS_AVX512_32_K6,
    REG_WINDOWS_AVX512_32_K7,
    REG_WINDOWS_AVX512_32_ZMM0H,
    REG_WINDOWS_AVX512_32_ZMM1H,
    REG_WINDOWS_AVX512_32_ZMM2H,
    REG_WINDOWS_AVX512_32_ZMM3H,
    REG_WINDOWS_AVX512_32_ZMM4H,
    REG_WINDOWS_AVX512_32_ZMM5H,
    REG_WINDOWS_AVX512_32_ZMM6H,
    REG_WINDOWS_AVX512_32_ZMM7H,
    REG_WINDOWS_AVX512_32_LAST = REG_WINDOWS_AVX512_32_ZMM7H
};

} // namespace DEBUGGER_PROTOCOL
#endif // file guard
