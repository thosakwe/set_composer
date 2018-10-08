// Copyright (c) 2018, Tobechukwu Osakwe.
//
// All rights reserved.
//
// Use of this source code is governed by an
// MIT-style license that can be found in the LICENSE file.
#ifndef SET_COMPOSER_SETNOTATIONVISITOR_H
#define SET_COMPOSER_SETNOTATIONVISITOR_H

#include "SetBaseListener.h"
#include "Set.h"

class SetNotationListener : public SetBaseListener
{
public:
    const Set &getSet() const;

    void enterPair(SetParser::PairContext *context) override;

private:
    Set set;
};


#endif //SET_COMPOSER_SETNOTATIONVISITOR_H
