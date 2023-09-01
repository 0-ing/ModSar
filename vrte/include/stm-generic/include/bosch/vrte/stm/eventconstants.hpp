//=============================================================================
// C O P Y R I G H T
//-----------------------------------------------------------------------------
// Copyright (c) 2018-2022 by Robert Bosch GmbH. All rights reserved.
//
// This file is property of Robert Bosch GmbH. Any unauthorized copy, use or
// distribution is an offensive act against international law and may be
// prosecuted under federal law. Its content is company confidential.
//=============================================================================

//=============================================================================
//
// This file is generated by the Python script 'eventparser.py'
//
//=============================================================================

#ifndef BOSCH_VRTE_STM_EVENTCONSTANTS_HPP_INCLUDED
#define BOSCH_VRTE_STM_EVENTCONSTANTS_HPP_INCLUDED

#include <cstdint>

namespace bosch
{
namespace vrte
{
namespace stm
{

// 64 bits event composition
//                   64 bits event composition
//  VERSION  SENDER     STATE MACHINE ID     DATA
//  0xF      FF         FFFF                 FFFF FFFF F              <-- Mask data Hex
//  1111     1111 1111  1111 1111 1111 1111  1111 1111 1111 1111 ...  <-- Mask data Bin
//    60            52                   36                        0  <-- Bit Index
//

// four bits for event version
constexpr uint8_t EV_ID_VERSION = 1;

// the bit offset of the event metadata
constexpr uint8_t EV_OFFS_VERSION      = 60;
constexpr uint8_t EV_OFFS_SENDER       = 52;
constexpr uint8_t EV_OFFS_STATEMACHINE = 36;
constexpr uint8_t EV_OFFS_DATA         = 0;

// eight bits for event context
constexpr uint8_t EV_ID_EH     = 1;
constexpr uint8_t EV_ID_OSM    = 2;
constexpr uint8_t EV_ID_CM     = 3;
constexpr uint8_t EV_ID_FGM    = 4;
constexpr uint8_t EV_ID_SM     = 5;
constexpr uint8_t EV_ID_ECUCFG = 6;
constexpr uint8_t EV_ID_NM     = 7;
constexpr uint8_t EV_ID_ALL    = 8;
constexpr uint8_t EV_ID_PLG    = 9;

// the bitmasks for extracting partial info
constexpr uint64_t EV_MASK_VERSION      = 0xFUL << EV_OFFS_VERSION;
constexpr uint64_t EV_MASK_SENDER       = 0xFFUL << EV_OFFS_SENDER;
constexpr uint64_t EV_MASK_STATEMACHINE = 0xFFFFUL << EV_OFFS_STATEMACHINE;
constexpr uint64_t EV_MASK_DATA_MASK    = 0xFFFFFFFFFUL << EV_OFFS_DATA;

// four bits for event version
constexpr uint64_t EV_VERSION = (uint64_t)EV_ID_VERSION << EV_OFFS_VERSION;

// eight bits for event context
constexpr uint64_t EV_EH  = (uint64_t)EV_ID_EH << EV_OFFS_SENDER;
constexpr uint64_t EV_OSM = (uint64_t)EV_ID_OSM << EV_OFFS_SENDER;
constexpr uint64_t EV_CM  = (uint64_t)EV_ID_CM << EV_OFFS_SENDER;
constexpr uint64_t EV_FGM = (uint64_t)EV_ID_FGM << EV_OFFS_SENDER;
constexpr uint64_t EV_SM  = (uint64_t)EV_ID_SM << EV_OFFS_SENDER;
constexpr uint64_t EV_NM  = (uint64_t)EV_ID_NM << EV_OFFS_SENDER;
constexpr uint64_t EV_ALL = (uint64_t)EV_ID_ALL << EV_OFFS_SENDER;
constexpr uint64_t EV_PLG = (uint64_t)EV_ID_PLG << EV_OFFS_SENDER;

// invalid event, no sender
constexpr uint64_t EV_INVALID = EV_ID_VERSION | 0UL;

}  // namespace stm
}  // namespace vrte
}  // namespace bosch

#endif  // BOSCH_VRTE_STM_EVENTCONSTANTS_HPP_INCLUDED