#ifndef GENERAL_HPP
#define GENERAL_HPP

#include <fstream>
#include <string>
#include <sstream>
#include <regex>
#include <list>

#include <ansi_color.h>

using namespace std;

typedef enum{INT,CHAR,ID,SEMI,BRAC_ML,BRAC_SL,COMMA,BRAC_LL,
MINUS,OOPS,NUM,BREAK,IF,ELSE,WHILE,PRINT,READ,RET,ASSI,
PLUS,MULT,DIVI,EQUA,NEQU,LSTH,LSEQ,GREA,GREQ,AND,OR,BRAC_MR,BRAC_SR,
BRAC_LR,END,
DL,D,VD,FD,VDL,PDL,PDLT,PDLT_,PD,BR_,BR,B,T,SL,SL_,S,E,EE,ED,EC,EB,EA,EU,DA,UO,BOA,BOB,BOC,BOD,BOE
} TokenType;

class Token{
public:
    TokenType type;
    string value;
};

class ASTNode{
public:
    unsigned int ruleNo;
    vector<Token> terms;
    TokenType type;
    list<ASTNode *> derives;
};

class ParserParam{
public:
    list<Token *> *tokens;
    list<Token *> *symbols;
    list<int> stack;
    list<ASTNode *> astStack;
    bool isAccept;
};

class Variable{
public:
    string id;
    unsigned int unitSize, totalSize;
    int offset;
};

class GenParam{
public:
    string dataSeg;
    string textSeg;
    string errMsg;
    vector<Variable> varStack, gloStack;
    vector<string> tmpText;
};

#endif // GENERAL_HPP