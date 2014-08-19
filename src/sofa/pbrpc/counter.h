// Copyright (c) 2014 Baidu.com, Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// Author: qinzuoyan01@baidu.com (Qin Zuoyan)

#ifndef _SOFA_PBRPC_COUNTER_H_
#define _SOFA_PBRPC_COUNTER_H_

#include <boost/atomic.hpp>

namespace sofa {
namespace pbrpc {

class BasicCounter
{
public:
    BasicCounter() : _counter(0) {}
    BasicCounter(uint32_t init) : _counter(init) {}
    uint32_t operator ++ ()
    {
        return ++ _counter;
    }
    uint32_t operator -- ()
    {
        return -- _counter;
    }
    operator uint32_t () const
    {
        return _counter;
    }
private:
    uint32_t _counter;
};

typedef boost::atomic_uint32_t AtomicCounter;
typedef boost::atomic_uint16_t AtomicCounter64;

} // namespace pbrpc
} // namespace sofa

#endif // _SOFA_PBRPC_COUNTER_H_

/* vim: set ts=4 sw=4 sts=4 tw=100 */
