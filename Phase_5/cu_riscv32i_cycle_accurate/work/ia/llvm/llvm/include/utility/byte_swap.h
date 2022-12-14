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
 *  \file
 *  \author Libor Vasicek
 *  \date   2014-12-11
 *  \brief  Provides utilities for byte swapping. It is useful for converting words from big-endian
 *          to little-endian and vice versa.
 */

#ifndef UTILITY_BYTE_SWAP_H_
#define UTILITY_BYTE_SWAP_H_

#include "common/codasip_integer.h"
#include "os/compiler.h"

#include <functional>

namespace codasip {
namespace detail {

template<typename T, int byteCount = sizeof(T)>
struct ByteSwapper;

////////////////////////////////////////////////////////////////////////////////////////////////////
template<typename T>
struct ByteSwapper<T, 1> : public std::unary_function<const T, T>
{
    T operator()(const T value) const
    {
        return value;
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////
template<typename T>
struct ByteSwapper<T, 2> : public std::unary_function<const T, T>
{
    T operator()(const T value) const
    {
        return bswap16(value);
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////
template<typename T>
struct ByteSwapper<T, 4> : public std::unary_function<const T, T>
{
    T operator()(const T value) const
    {
        return bswap32(value);
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////
template<typename T>
struct ByteSwapper<T, 8> : public std::unary_function<const T, T>
{
    T operator()(const T value) const
    {
        return bswap64(value);
    }
};
}   // namespace detail

//size is in octets
template<unsigned BITS, bool SIGN>
inline Integer<BITS, SIGN> ByteSwapBig(const Integer<BITS, SIGN>& n, unsigned const int size)
{
    Integer<BITS, SIGN> result;
    uint8_t aux;

    for (unsigned int i = 0; i < size; i++)
    {
        result = result << 8;
        aux = (n >> i * 8) & 0xFFULL;
        result |= aux;
    }

    return result;
}

template<class T>
inline T ByteSwap(const T value)
{
    return detail::ByteSwapper<T>()(value);
}

}   // namespace codasip

#endif   // UTILITY_BYTE_SWAP_H_
