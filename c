PROGRAM -> FUNCTION PROGRAM'
PROGRAM' -> FUNCTION PROGRAM' | $
FUNCTION -> TYPE DECLARATOR COMPOUND_STATEMENT
TYPE -> VOID|CHAR|INT|FLOAT
DECLARATOR -> ID (PARAMETER)
PARAMETER -> PTYPE ID PARAMETER'| $
PARAMETER' -> ,PTYPE ID PARAMETER'|$
COMPOUND_STATEMENT -> { COMPOUND_STATEMENT'}
COMPOUND_STATEMENT' -> STATEMENT_LIST  |  $
DECLARATION_LIST -> DECLARATION DECLARATION_LIST'
DECLARATION_LIST' -> DECLARATION DECLARATION_LIST' | $
DECLARATION -> PTYPE ID INIT;
INIT -> = ZHI | $
ZHI -> DIGIT | CHARR
PTYPE -> CHAR|INT|FLOAT
STATEMENT_LIST -> STATEMENT STATEMENT_LIST'
STATEMENT_LIST' -> STATEMENT STATEMENT_LIST' | $
STATEMENT -> JUMP_STATEMENT | COMPOUND_STATEMENT | DECLARATION_LIST | EXPRESSION_LIST| SELECTION_STATEMENT | ITERATION_STATEMENT
JUMP_STATEMENT -> BREAK; | CONTINUE; | RETURN JUMP_STATEMENT'
JUMP_STATEMENT' -> ZHI; | EXPRESSION; | ;
EXPRESSION_LIST -> EXPRESSION; EXPRESSION_LIST'
EXPRESSION_LIST' -> EXPRESSION; EXPRESSION_LIST' | $
EXPRESSION -> ID OPERATOR TERM
TERM -> ZHI | ID | $
OPERATOR -> = | + | -  | > | <
SELECTION_STATEMENT -> IF( EXPRESSION ) COMPOUND_STATEMENT SELECTION_STATEMENT'
SELECTION_STATEMENT' -> ELSE STATEMENT | $
ITERATION_STATEMENT ->  WHILE(EXPRESSION) COMPOUND_STATEMENT | FOR(EXPRESSION; EXPRESSION; SINGLE) | COMPOUND_STATEMENT
SINGLE -> ID COMPLEX
COMPLEX -> ++ | --