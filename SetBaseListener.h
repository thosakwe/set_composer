
// Generated from Set.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "SetListener.h"


/**
 * This class provides an empty implementation of SetListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  SetBaseListener : public SetListener {
public:

  virtual void enterSet(SetParser::SetContext * /*ctx*/) override { }
  virtual void exitSet(SetParser::SetContext * /*ctx*/) override { }

  virtual void enterPair(SetParser::PairContext * /*ctx*/) override { }
  virtual void exitPair(SetParser::PairContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

