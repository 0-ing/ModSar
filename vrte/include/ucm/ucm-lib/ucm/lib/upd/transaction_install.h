//=============================================================================
// C O P Y R I G H T
//-----------------------------------------------------------------------------
// Copyright (c) 2020 by Robert Bosch GmbH. All rights reserved.
//
// This file is property of Robert Bosch GmbH. Any unauthorized copy, use or
// distribution is an offensive act against international law and may be
// prosecuted under federal law. Its content is company confidential.
//=============================================================================

/// @file         ucm/lib/upd/transaction_install.h
/// @brief
/// @copyright    Robert Bosch GmbH 2020
/// @author       Vesselin Mladenov
/// @version
/// @remarks

#ifndef UCM_AAP_LIBRARY_LIB_UPD_TRANSACTIO_INSTALL_H_
#define UCM_AAP_LIBRARY_LIB_UPD_TRANSACTIO_INSTALL_H_

#include <mutex>
#include <string>

#if defined(GOOGLE_TEST)
#include "gtest/gtest_prod.h"
#endif

#include "ucm/lib/types.h"
#include "ucm/lib/app/core_context.h"

#include "ucm/lib/upd/phase.h"
#include "ucm/lib/upd/counters.h"
#include "ucm/lib/upd/update_context.h"

namespace bosch {
namespace vrte {
namespace ucm {
namespace lib {
namespace upd {

class TransactionInstall final
{
#if defined(GOOGLE_TEST)
    FRIEND_TEST(Test_TransactionInstall, Simple);
#endif

public:
    explicit TransactionInstall(UpdateContext&) noexcept;

    TransactionInstall(      TransactionInstall&&) = delete;
    TransactionInstall(const TransactionInstall &) = delete;

    TransactionInstall& operator=(      TransactionInstall&&) = delete;
    TransactionInstall& operator=(const TransactionInstall &) = delete;

    ~TransactionInstall() = default;

    ara_error_type
    install_file(const pkg::mnf::Manifest&, std::size_t) noexcept;

private:
    UpdateContext& ucontext_;
    app::CoreContext& ccontext_;
    std::shared_ptr<Phase> phase_{};

    mutable std::mutex mutex_{};
};

}    // namespace upd
}    // namespace lib
}    // namespace ucm
}    // namespace vrte
}    // namespace bosch

#endif // UCM_AAP_LIBRARY_LIB_UPD_TRANSACTIO_INSTALL_H_
