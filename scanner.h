/*
 * Implementace prekladace imperativního jazyka IFJ17.
 * xhudec30 - Patricia Hudedova
 */

#ifndef scanner_h
#define scanner_h

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "strings.h"

#define EOL                     '\n'

#define ID                      11
#define valueOfInteger          12
#define valueOfDouble           13
#define valueOfDoubleWithExp    14
#define valueOfString           15
// klucove slova

#define  As                     21
#define  Asc                    22
#define  Declare                23
#define  Dim                    24
#define  Do                     25
#define  Double                 26
#define  Else                   27
#define  End                    28
#define  Chr                    29
#define  Function               30
#define  If                     31
#define  Input                  32
#define  Integer                33
#define  Length                 34
#define  Loop                   35
#define  Print                  36
#define  Return                 37
#define  Scope                  38
#define  String                 39
#define  SubStr                 40
#define  Then                   41
#define  While                  42


// rezervovane klucove slova

#define  And                    61
#define  Boolean                62
#define  Continue               63
#define  Elseif                 64
#define  Exit                   65
#define  False                  66
#define  For                    67
#define  Next                   68
#define  Not                    69
#define  Or                     70
#define  Shared                 71
#define  Static                 72
#define  True                   73

// operatory

#define  Plus                   81  // +
#define  Minus                  82  // -
#define  Div                    83  // /
#define  Mul                    84  // '*'
#define  IntDiv                 85  // '\'
#define  Equal                  86  // =
#define  LowerGreater           87  // <>
#define  Lower                  88  // <
#define  LowerOrEqual           89  // <=
#define  Greater                90  // >
#define  GreaterOrEqual         91  // >=

// znaky

#define LeftParenthes           100 // (
#define RightParenthes          101 // )
#define Semicolon               104 // ;
#define Comma                   105 // ,
#define Exclamation             106 // !


#define EndOfFile               121
#define EndOfLine               122
#define ErrorInLexicalAnalyzer  1

int getNextToken(TString* token);

#endif
