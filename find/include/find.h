#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

/*! s
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param value valor a ser comparado na função
 * @param eq A função de comparação que retorna true quando o primeiro parâmetro é igual ao segundo
 * 
 * @return Um iterator para o primeiro elemento no range igual ao valor recebido por parâmetro. Se o valor não for encontrado no range, a função retorna o iterator last.
 */
 /*
 70%
 */
template<class InputIt, class T, class Equal>
InputIt find(InputIt first, InputIt last, const T& value, Equal eq)
{
    // TODO
    while (first!=last) {
         if(*first==value){ //aqui a ideia não era usar o operador == mas sim a função eq, essa expressao viraria eq(*first,value), como é um erro conceitual vou tirar 30%
            return first;
         }
        first++;
    }
    return last;
}

}
#endif
