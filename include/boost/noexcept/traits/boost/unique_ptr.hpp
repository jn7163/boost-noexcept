//Copyright (c) 2017 Emil Dotchevski and Reverge Studios, Inc.

//Distributed under the Boost Software License, Version 1.0. (See accompanying
//file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef UUID_F21B7EBA4CEC11E78CDC864BAD730A1C
#define UUID_F21B7EBA4CEC11E78CDC864BAD730A1C

namespace boost { namespace movelib { template <class,class> class unique_ptr; } }

namespace
boost
    {
    namespace
    noexcept_
        {
        template <class>
        struct result_traits;

        template <class T,class D>
        struct
        result_traits<movelib::unique_ptr<T,D> >
            {
            static
            bool
            succeeded( movelib::unique_ptr<T,D> const & x ) noexcept
                {
                return x!=nullptr;
                }
            static
            movelib::unique_ptr<T,D>
            error_result() noexcept
                {
                return movelib::unique_ptr<T,D>();
                }
           };
        }
    }

#endif