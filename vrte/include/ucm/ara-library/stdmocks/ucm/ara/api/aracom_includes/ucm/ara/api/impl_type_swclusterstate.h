#ifndef IMPL_TYPE_SWCLUSTERSTATE_H
#define IMPL_TYPE_SWCLUSTERSTATE_H
/***********************************************************************************************************************
 *
 * COPYRIGHT RESERVED, Robert Bosch GmbH, 2018. All rights reserved.
 * The reproduction, distribution and utilization of this document as well as the communication of its contents to
 * others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
 * All rights reserved in the event of the grant of a patent, utility model or design.
 *
 ***********************************************************************************************************************
 *
 * \\file    impl_type_swclusterstate.h
 * \\authors This file was generated with VRTE DataTypes Generator 
 *
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *
 * Typedefs
 *
 **********************************************************************************************************************/
using SwClusterState = enum class SwClusterState:uint8_t {
                          kPresent = 0, 
                          kAdded = 1, 
                          kUpdated = 2, 
                          kRemoved = 3
                        };

#endif

