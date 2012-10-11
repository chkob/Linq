/*=============================================================================
    Copyright (c) 2012 Paul Fultz II
    contains.h
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
==============================================================================*/

#ifndef LINQ_GUARD_EXTENSIONS_CONTAINS_H
#define LINQ_GUARD_EXTENSIONS_CONTAINS_H

namespace linq { 

//
// contains
//
namespace detail {
struct contains_t
{
    template<class Range, class T>
    auto operator()(Range && r, T && x) LINQ_RETURNS(return (r | linq::find(x) != boost::end(r)));
};
}
namespace {
range_extension<detail::contains_t> contains = {};
}

}

#endif