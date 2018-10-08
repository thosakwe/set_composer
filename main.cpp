#include <antlr4-runtime.h>
#include "Set.h"
#include "SetLexer.h"
#include "SetNotationListener.h"
#include "SetParser.h"

using namespace antlr4;
using namespace antlr4::tree;

bool parseInto(const std::string &s, Set *outSet);

int main() {
    std::string setAText, setBText;
    Set a, b;

    std::cout << "Enter the first relation: ";
    std::getline(std::cin, setAText);
    if (!parseInto(setAText, &a)) return 1;

    std::cout << "Enter the second relation: ";
    std::getline(std::cin, setBText);
    if (!parseInto(setBText, &b)) return 1;

    Set composed = a.composeWith(b);
    std::cout << "Result: ";
    composed.print(std::cout);
    std::cout << std::endl;
    return 0;
}

bool parseInto(const std::string &s, Set* outSet) {
    ANTLRInputStream input(s);
    SetLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    SetParser parser(&tokens);
    auto *setCtx = parser.set();

    if (parser.getNumberOfSyntaxErrors() > 0) {
        std::cerr << "Parse error." << std::endl;
        return false;
    }

    SetNotationListener listener;
    tree::ParseTreeWalker::DEFAULT.walk(&listener, setCtx);
    *outSet = Set(listener.getSet());
    return true;
}