#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

/*! 
 * TODO: documentação no estilo doxygen
 */
template<class BidirIt>
void reverse(BidirIt first, BidirIt last)
{
    // TODO
    BidirIt temp = last;
    for(BidirIt i=first; i!=last; i++){
        std::swap(*first, *last);
        first++;
        last--;
    }

}

}
#endif
