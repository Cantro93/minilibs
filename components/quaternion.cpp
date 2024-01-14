#include "quaternion.h"
#ifndef _QUATERNION_IMPL
#define _QUATERNION_IMPL

template <quaternion_internal::number type>
quaternion<type>::quaternion(type re, type im, type jm, type km)
{
    num[e] = re;
    num[i] = im;
    num[j] = jm;
    num[k] = km;
}

template <quaternion_internal::number type>
type &quaternion<type>::operator[](quaternion_part id)
{
    return num[id];
}

template <quaternion_internal::number type>
inline type quaternion<type>::operator()(signed char id)
{
    if ((id < 4) && (id > -1))
        return num[id];
    else return 0;
}

template <quaternion_internal::number type>
type quaternion<type>::norm()
{
    return (type)sqrt(((*(*this)) * (*this))[e]);
}

template <quaternion_internal::number type>
quaternion<type> quaternion<type>::operator*()
{
    return quaternion<type>(num[e], -num[i], -num[j], -num[k]);
}

template <quaternion_internal::number type>
quaternion<long double> quaternion<type>::reciprocal()
{
    long double m = ((long double)1/((*(*this)) * (*this))[e]);
    return quaternion<long double>(
        (m * num[e]),
        (m * -num[i]),
        (m * -num[j]),
        (m * -num[k])
    );
}

template <quaternion_internal::number type>
quaternion<type> quaternion<type>::operator+(quaternion<type> b)
{
    return quaternion<type>(
        num[e] + b[e], 
        num[i] + b[i],
        num[j] + b[j],
        num[k] + b[k]
    );
}

template <quaternion_internal::number type>
quaternion<type> quaternion<type>::operator-(quaternion<type> b)
{
    return quaternion<type>(
        num[e] - b[e], 
        num[i] - b[i],
        num[j] - b[j],
        num[k] - b[k]
    );
}

template <quaternion_internal::number type>
quaternion<type> quaternion<type>::operator*(quaternion<type> b)
{
    return quaternion<type>(
        (num[e] * b[e]) - (num[i] * b[i]) - (num[j] * b[j]) - (num[k] * b[k]),
        (num[e] * b[i]) + (num[j] * b[k]) + (num[i] * b[e]) - (num[k] * b[j]),
        (num[e] * b[j]) + (num[k] * b[i]) + (num[j] * b[e]) - (num[i] * b[k]),
        (num[e] * b[k]) + (num[k] * b[e]) + (num[i] * b[j]) - (num[j] * b[i])
    );
}

template<quaternion_internal::number target, quaternion_internal::number source>
quaternion<target> quaternion_cast(quaternion<source> src);


template <quaternion_internal::number type>
quaternion<type> quaternion<type>::operator/(quaternion<type> b)
{
    return quaternion_cast<type>(b.reciprocal() * quaternion_cast<long double>(*this));
}

template <quaternion_internal::number type>
ostream& operator<<(ostream& os, quaternion<type> a)
{
    bool previous = false;
    for (signed char l = 0; l < 4; l++)
    {
        if (a(l) != 0)
        {
            if (previous) os << ' ' << ((a(l) > 0) ? '+' : '-') << ' ';
            else if (a(l) < 0) cout << '-';
            if ((l > 0) ? (abs(a(l)) != 1) : true) os << abs(a(l));
            previous = true;
            switch ((quaternion_part)l)
            {
            case i:
                os << 'i';
                break;
            case j:
                os << 'j';
                break;
            case k:
                os << 'k';
                break;
            default:
                break;
            }
        }
    }
    if (!previous) os << 0;
    return os;
}

template<quaternion_internal::number target, quaternion_internal::number source>
quaternion<target> quaternion_cast(quaternion<source> src)
{
    return quaternion<target>((target)src[e], (target)src[i], (target)src[j], (target)src[k]);
}

#endif //!_QUATERNION_IMPL