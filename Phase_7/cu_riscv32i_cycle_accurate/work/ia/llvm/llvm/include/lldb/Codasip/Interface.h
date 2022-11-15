/**
 * Codasip s.r.o.
 *
 * CONFIDENTIAL
 *
 * Copyright 2019 Codasip s.r.o.
 *
 * All Rights Reserved.
 *
 * NOTICE: All information contained in this file, is and shall remain the property of
 * Codasip s.r.o. and its suppliers, if any.
 *
 * The intellectual and technical concepts contained herein are confidential and proprietary to
 * Codasip s.r.o. and are protected by trade secret and copyright law.  In addition, elements of the
 * technical concepts may be patent pending.
 *
 * This file is part of the Codasip Studio product. No part of the Studio product, including this
 * file, may be use, copied, modified, or distributed except in accordance with the terms contained
 * in Codasip license agreement under which you obtained this file.
 *
 */

#ifndef INCLUDE_LLDB_CODASIP_INTERFACE_H_
#define INCLUDE_LLDB_CODASIP_INTERFACE_H_

// C Includes
// C++ Includes
// C++ Includes
// Other libraries and framework includes
// Project includes
#include "Addressable.h"

namespace codasip {

/**
 * \class Interface
 * \brief Info about interface
 */
class Interface : public Addressable
{
public:
    /**
     *  \{
     *  \brief  Constructor
     */
    Interface();
    Interface(
        // generic resource
        const std::string& name,
        const uint32_t dwarf,
        const uint32_t uid,
        const uint32_t bitWidth,
        const lldb::Encoding encoding,
        const lldb::Format format,
        const std::string& set,
        const std::string& description,
        // generic addressable
        const uint32_t addressBitWidth,
        const uint32_t wordBitWidth,
        const uint32_t byteBitWidth,
        const std::string& endianness);
    /** \} */

    uint32_t GetBitWidth() const override;
};

}   // namespace codasip

#endif  // INCLUDE_LLDB_CODASIP_INTERFACE_H_
