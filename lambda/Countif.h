/**
 * Simple higher order counting function
 * 
 * @author
 *   G. Carl Evans <gcevans@illinois.edu>
 */

#pragma once

template <typename Iter, typename Pred>
int Countif(Iter begin, Iter end, Pred pred);

#include "Countif.hpp"