
// Generated from Set.g4 by ANTLR 4.7.1


#include "SetListener.h"

#include "SetParser.h"


using namespace antlrcpp;
using namespace antlr4;

SetParser::SetParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SetParser::~SetParser() {
  delete _interpreter;
}

std::string SetParser::getGrammarFileName() const {
  return "Set.g4";
}

const std::vector<std::string>& SetParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& SetParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- SetContext ------------------------------------------------------------------

SetParser::SetContext::SetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SetParser::PairContext *> SetParser::SetContext::pair() {
  return getRuleContexts<SetParser::PairContext>();
}

SetParser::PairContext* SetParser::SetContext::pair(size_t i) {
  return getRuleContext<SetParser::PairContext>(i);
}


size_t SetParser::SetContext::getRuleIndex() const {
  return SetParser::RuleSet;
}

void SetParser::SetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SetListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSet(this);
}

void SetParser::SetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SetListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSet(this);
}

SetParser::SetContext* SetParser::set() {
  SetContext *_localctx = _tracker.createInstance<SetContext>(_ctx, getState());
  enterRule(_localctx, 0, SetParser::RuleSet);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(4);
    match(SetParser::T__0);
    setState(14);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SetParser::T__3) {
      setState(10);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(5);
          pair();
          setState(6);
          match(SetParser::T__1); 
        }
        setState(12);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
      }
      setState(13);
      pair();
    }
    setState(16);
    match(SetParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PairContext ------------------------------------------------------------------

SetParser::PairContext::PairContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SetParser::PairContext::Integer() {
  return getTokens(SetParser::Integer);
}

tree::TerminalNode* SetParser::PairContext::Integer(size_t i) {
  return getToken(SetParser::Integer, i);
}


size_t SetParser::PairContext::getRuleIndex() const {
  return SetParser::RulePair;
}

void SetParser::PairContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SetListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPair(this);
}

void SetParser::PairContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SetListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPair(this);
}

SetParser::PairContext* SetParser::pair() {
  PairContext *_localctx = _tracker.createInstance<PairContext>(_ctx, getState());
  enterRule(_localctx, 2, SetParser::RulePair);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(18);
    match(SetParser::T__3);
    setState(19);
    dynamic_cast<PairContext *>(_localctx)->x = match(SetParser::Integer);
    setState(20);
    match(SetParser::T__1);
    setState(21);
    dynamic_cast<PairContext *>(_localctx)->y = match(SetParser::Integer);
    setState(22);
    match(SetParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> SetParser::_decisionToDFA;
atn::PredictionContextCache SetParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SetParser::_atn;
std::vector<uint16_t> SetParser::_serializedATN;

std::vector<std::string> SetParser::_ruleNames = {
  "set", "pair"
};

std::vector<std::string> SetParser::_literalNames = {
  "", "'{'", "','", "'}'", "'('", "')'"
};

std::vector<std::string> SetParser::_symbolicNames = {
  "", "", "", "", "", "", "Whitespace", "Integer"
};

dfa::Vocabulary SetParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SetParser::_tokenNames;

SetParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x9, 0x1b, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0xb, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 
    0xe, 0xb, 0x2, 0x3, 0x2, 0x5, 0x2, 0x11, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x2, 0x2, 0x4, 0x2, 0x4, 0x2, 0x2, 0x2, 0x1a, 0x2, 0x6, 0x3, 0x2, 0x2, 
    0x2, 0x4, 0x14, 0x3, 0x2, 0x2, 0x2, 0x6, 0x10, 0x7, 0x3, 0x2, 0x2, 0x7, 
    0x8, 0x5, 0x4, 0x3, 0x2, 0x8, 0x9, 0x7, 0x4, 0x2, 0x2, 0x9, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0xa, 0x7, 0x3, 0x2, 0x2, 0x2, 0xb, 0xe, 0x3, 0x2, 0x2, 
    0x2, 0xc, 0xa, 0x3, 0x2, 0x2, 0x2, 0xc, 0xd, 0x3, 0x2, 0x2, 0x2, 0xd, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0xe, 0xc, 0x3, 0x2, 0x2, 0x2, 0xf, 0x11, 0x5, 
    0x4, 0x3, 0x2, 0x10, 0xc, 0x3, 0x2, 0x2, 0x2, 0x10, 0x11, 0x3, 0x2, 
    0x2, 0x2, 0x11, 0x12, 0x3, 0x2, 0x2, 0x2, 0x12, 0x13, 0x7, 0x5, 0x2, 
    0x2, 0x13, 0x3, 0x3, 0x2, 0x2, 0x2, 0x14, 0x15, 0x7, 0x6, 0x2, 0x2, 
    0x15, 0x16, 0x7, 0x9, 0x2, 0x2, 0x16, 0x17, 0x7, 0x4, 0x2, 0x2, 0x17, 
    0x18, 0x7, 0x9, 0x2, 0x2, 0x18, 0x19, 0x7, 0x7, 0x2, 0x2, 0x19, 0x5, 
    0x3, 0x2, 0x2, 0x2, 0x4, 0xc, 0x10, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

SetParser::Initializer SetParser::_init;
