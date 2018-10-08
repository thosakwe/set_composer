# set_composer
Computes the [composition of two relations on a set](https://en.wikipedia.org/wiki/Composition_of_relations).

## Building
Uses CMake. Requires ANTLR4. Make sure that you can
`#include <antlr4-runtime/antlr4-runtime.h>`.

## Usage
The grammar expects *ordered pairs*.
```
$ ./set_composer
Enter the first relation: {(1,2)}
Enter the second relation: {(2,3),(2,4)}
Result: {(1, 3), (1, 4)}
```