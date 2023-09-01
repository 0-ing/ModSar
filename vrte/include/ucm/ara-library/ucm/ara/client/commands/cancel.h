//=============================================================================
// C O P Y R I G H T
//-----------------------------------------------------------------------------
// Copyright (c) 2021 by Robert Bosch GmbH. All rights reserved.
//
// This file is property of Robert Bosch GmbH. Any unauthorized copy, use or
// distribution is an offensive act against international law and may be
// prosecuted under federal law. Its content is company confidential.
//=============================================================================

/// @file         ucm/ara/client/commands/cancel.h
/// @brief
/// @copyright    Robert Bosch GmbH 2021
/// @author       dsh8cob
/// @version
/// @remarks

#ifndef UCM_AAP_PKGMANAGER_ARA_CLIENT_COMMANDS_CANCEL_H_
#define UCM_AAP_PKGMANAGER_ARA_CLIENT_COMMANDS_CANCEL_H_

#include "ucm/ara/client/command.h"

namespace bosch  {
namespace vrte   {
namespace ucm    {
namespace ara    {
namespace client {

class Cancel final : public Command
{
public:
    explicit Cancel(Tuple& tuple,
                    const std::string& name, StepData&& data);

    Cancel(Cancel     &&) = delete;
    Cancel(Cancel const&) = delete;

    Cancel& operator=(Cancel     &&) = delete;
    Cancel& operator=(Cancel const&) = delete;

    virtual ~Cancel() = default;

protected:
    virtual void impl_perform(StepData&) override;

private:
    StepData::transferid_type transfer_id(StepData&);
};

}    // namespace client
}    // namespace ara
}    // namespace ucm
}    // namespace vrte
}    // namespace bosch

#endif // UCM_AAP_PKGMANAGER_ARA_CLIENT_COMMANDS_CANCEL_H_
