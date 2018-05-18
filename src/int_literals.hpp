/**
 * int_literals.hpp
 * Etienne Boespflug - 2018
 *
 * This software has no license, feel free to use, modify and distribute.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
#ifndef INT_LITERALS_HPP
#define INT_LITERALS_HPP

#include <cstdint>

namespace int_literals
{
    // short
    constexpr auto operator "" _s(unsigned long long value)
    {
        return static_cast<short>(value);
    }

    constexpr auto operator "" _us(unsigned long long value)
    {
        return static_cast<unsigned short>(value);
    }

    // int*_t
#if defined(INT8_MIN)
    constexpr auto operator "" _i8(unsigned long long value)
    {
        return static_cast<std::int8_t>(value);
    }
#endif

#if defined(INT16_MIN)
    constexpr auto operator "" _i16(unsigned long long value)
    {
        return static_cast<std::int16_t>(value);
    }
#endif

#if defined(INT32_MIN)
    constexpr auto operator "" _i32(unsigned long long value)
    {
        return static_cast<std::int32_t>(value);
    }
#endif

#if defined(INT64_MIN)
    constexpr auto operator "" _i64(unsigned long long value)
    {
        return static_cast<std::int64_t>(value);
    }
#endif

    // int_fast*_t
    constexpr auto operator "" _if8(unsigned long long value)
    {
        return static_cast<std::int_fast8_t>(value);
    }

    constexpr auto operator "" _if16(unsigned long long value)
    {
        return static_cast<std::int_fast16_t>(value);
    }

    constexpr auto operator "" _if32(unsigned long long value)
    {
        return static_cast<std::int_fast32_t>(value);
    }

    constexpr auto operator "" _if64(unsigned long long value)
    {
        return static_cast<std::int_fast64_t>(value);
    }

    // int_least*_t
    constexpr auto operator "" _il8(unsigned long long value)
    {
        return static_cast<std::int_least8_t>(value);
    }

    constexpr auto operator "" _il16(unsigned long long value)
    {
        return static_cast<std::int_least16_t>(value);
    }

    constexpr auto operator "" _il32(unsigned long long value)
    {
        return static_cast<std::int_least32_t>(value);
    }

    constexpr auto operator "" _il64(unsigned long long value)
    {
        return static_cast<std::int_least64_t>(value);
    }

    // int misc
#if defined(INTPTR_MIN)
    constexpr auto operator "" _iptr(unsigned long long value)
    {
        return static_cast<std::intptr_t>(value);
    }
#endif

    constexpr auto operator "" _imax(unsigned long long value)
    {
        return static_cast<std::intmax_t>(value);
    }

    // uint*_t
#if defined(UINT8_MAX)
    constexpr auto operator "" _u8(unsigned long long value)
    {
        return static_cast<std::uint8_t>(value);
    }
#endif

#if defined(UINT16_MAX)
    constexpr auto operator "" _u16(unsigned long long value)
    {
        return static_cast<std::uint16_t>(value);
    }
#endif

#if defined(UINT32_MAX)
    constexpr auto operator "" _u32(unsigned long long value)
    {
        return static_cast<std::uint32_t>(value);
    }
#endif

#if defined(UINT64_MAX)
    constexpr auto operator "" _u64(unsigned long long value)
    {
        return static_cast<std::uint64_t>(value);
    }
#endif

    // int_fast*_t
    constexpr auto operator "" _uf8(unsigned long long value)
    {
        return static_cast<std::uint_fast8_t>(value);
    }

    constexpr auto operator "" _uf16(unsigned long long value)
    {
        return static_cast<std::uint_fast16_t>(value);
    }

    constexpr auto operator "" _uf32(unsigned long long value)
    {
        return static_cast<std::uint_fast32_t>(value);
    }

    constexpr auto operator "" _uf64(unsigned long long value)
    {
        return static_cast<std::uint_fast64_t>(value);
    }

    // int_least*_t
    constexpr auto operator "" _ul8(unsigned long long value)
    {
        return static_cast<std::uint_least8_t>(value);
    }

    constexpr auto operator "" _ul16(unsigned long long value)
    {
        return static_cast<std::uint_least16_t>(value);
    }

    constexpr auto operator "" _ul32(unsigned long long value)
    {
        return static_cast<std::uint_least32_t>(value);
    }

    constexpr auto operator "" _ul64(unsigned long long value)
    {
        return static_cast<std::uint_least64_t>(value);
    }
    // uint misc
#if defined(UINTPTR_MAX)
    constexpr auto operator "" _uptr(unsigned long long value)
    {
        return static_cast<std::uintptr_t>(value);
    }
#endif

    constexpr auto operator "" _umax(unsigned long long value)
    {
        return static_cast<std::uintmax_t>(value);
    }
}

#endif // INT_LITERALS_HPP
