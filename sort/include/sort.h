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
 /*
 80%
 */
template<class ForwardIt, class Comparison>
void sort(ForwardIt first, ForwardIt last, Comparison cmp)
{
    // TODO
    for(ForwardIt i = first; i < last; i++){
        for(ForwardIt j = i; j < last; j++){
            if(cmp(*i,*j) == false){
                std::swap(*i, *j);
            }
        }
    }
}

}
#endif
