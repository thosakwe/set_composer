
// Generated from Set.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "SetParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by SetParser.
 */
class  SetListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterSet(SetParser::SetContext *ctx) = 0;
  virtual void exitSet(SetParser::SetContext *ctx) = 0;

  virtual void enterPair(SetParser::PairContext *ctx) = 0;
  virtual void exitPair(SetParser::PairContext *ctx) = 0;


};

