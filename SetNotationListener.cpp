// Copyright (c) 2018, Tobechukwu Osakwe.
//
// All rights reserved.
//
// Use of this source code is governed by an
// MIT-style license that can be found in the LICENSE file.
#include "SetNotationListener.h"

const Set &SetNotationListener::getSet() const {
    return set;
}

void SetNotationListener::enterPair(SetParser::PairContext *context) {
    int x = atoi(context->x->getText().c_str());
    int y = atoi(context->y->getText().c_str());
    set.addPair(OrderedPair(x, y));
}
