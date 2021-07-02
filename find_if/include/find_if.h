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
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param p O predicado que será testado
 * 
 * @return Um iterator para o primeiro elemento no range igual ao valor recebido por parâmetro. Se o valor não for encontrado no range, a função retorna o iterator last.
 */
 /*
 ok!
 */
template<class InputIt, class UnaryPredicate>
InputIt find_if(InputIt first, InputIt last, UnaryPredicate p)
{
    while (first!=last) {
         if(p(*first)==true){ //aqui vc poderia fazer if(p(*first))
            return first;
         }
        first++;
    }
    return last;
}

}
#endif
