# cpp-int-literals

## Overview

int-literals is a small header-only C++ library providing user-defined literals for integral types (fundamentals types such as short and integral types from ```<cstdint>``` header).

## Installation

This library is header-only. To use it, simply include the header in your source files.

## Usage

The directive ```using namespace int_literals;``` import the literals from the corresponding namespace to avoid namespace specification :

```c++
#include "int_literals.hpp"

int main()
{
    using namespace int_literals;

    auto s   = 0_s;     // short
    auto us  = 0_us;    // unsigned short.

    auto i1  = 0_i8;    // std::int8_t
    auto i2  = 0_i16;   // std::int16_t
    auto i3  = 0_i32;   // std::int32_t
    auto i4  = 0_i64;   // std::int64_t

    auto i5  = 0_if8;   // std::int_fast8_t
    auto i6  = 0_if16;  // std::int_fast16_t
    auto i7  = 0_if32;  // std::int_fast32_t
    auto i8  = 0_if64;  // std::int_fast64_t

    auto i9  = 0_il8;   // std::int8_t
    auto i10 = 0_il16;  // std::int16_t
    auto i11 = 0_il32;  // std::int32_t
    auto i12 = 0_il64;  // std::int64_t

    auto i13 = 0_iptr;  // std::intptr_t
    auto i14 = 0_imax;  // std::intmax_t

    auto u1  = 2_u8;    // std::uint8_t
    auto u2  = 2_u16;   // std::uint16_t
    auto u3  = 2_u32;   // std::uint32_t
    auto u4  = 2_u64;   // std::uint64_t

    auto u5  = 0_uf8;   // std::uint_fast8_t
    auto u6  = 0_uf16;  // std::uint_fast16_t
    auto u7  = 0_uf32;  // std::uint_fast32_t
    auto u8  = 0_uf64;  // std::uint_fast64_t

    auto u9  = 0_ul8;   // std::uint_least8_t
    auto u10 = 0_ul16;  // std::uint_least16_t
    auto u11 = 0_ul32;  // std::uint_least32_t
    auto u12 = 0_ul64;  // std::uint_least64_t

    auto u13 = 0_uptr;  // std::uintptr_t
    auto u14 = 0_umax;  // std::uintmax_t
}
```

Please notice that some integer types are optional and some implementation my not be able to provide thos types. In this case, int-literals do not provide literals types for those missing integers.

If you have another way to provides those types, please define the corresponding macro constants before including the header.
The following types require the standard macro constant to be defined :
 - ```std::int8_t``` : require ```INT8_MIN```.  
 - ```std::int16_t``` : require ```INT16_MIN```.  
 - ```std::int32_t``` : require ```INT32_MIN```.  
 - ```std::int64_t```  : require ```INT64_MIN```.  
 - ```std::intptr_t``` : require ```INTPTR_MIN```.  
 - ```std::uint8_t```  : require ```UINT8_MAX```.  
 - ```std::uint16_t``` : require ```UINT16_MAX```.  
 - ```std::uint32_t``` : require ```UINT32_MAX```.  
 - ```std::uint64_t``` : require ```UINT64_MAX```.
 - ```std::uintptr_t```: require ```UINTPTR_MAX```.

## Contributors

 - Etienne BOESPFLUG [etienne.boespflug@gmail.com].

## Licence

[![CC0](https://licensebuttons.net/p/zero/1.0/88x31.png)](http://creativecommons.org/publicdomain/zero/1.0/)

This software has no license and is free to use.

## Disclaimer

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
