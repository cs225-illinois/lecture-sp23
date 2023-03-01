/**
 * Simple higher order counting function
 * 
 * @author
 *   G Carl Evans <gcevans@illinois.edu>
 */

#include <iostream>

template <typename Iter, typename Pred>
int Countif(Iter begin, Iter end, Pred pred) {
  int count = 0;
  auto cur = begin;

  while(cur != end) {
    if(pred(*cur))    
      ++count;
    ++cur;
  }

  return count;
}

