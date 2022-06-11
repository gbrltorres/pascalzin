/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_PASCALZIN_BISON_H_INCLUDED
# define YY_PASCALZIN_BISON_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int pascalzin_debug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    _ERROR_ = 258,                 /* _ERROR_  */
    _BANG = 259,                   /* _BANG  */
    _DAMP = 260,                   /* _DAMP  */
    _SYMB_17 = 261,                /* _SYMB_17  */
    _LPAREN = 262,                 /* _LPAREN  */
    _RPAREN = 263,                 /* _RPAREN  */
    _STAR = 264,                   /* _STAR  */
    _PLUS = 265,                   /* _PLUS  */
    _COMMA = 266,                  /* _COMMA  */
    _MINUS = 267,                  /* _MINUS  */
    _DOT = 268,                    /* _DOT  */
    _DDOT = 269,                   /* _DDOT  */
    _SLASH = 270,                  /* _SLASH  */
    _COLON = 271,                  /* _COLON  */
    _COLONEQ = 272,                /* _COLONEQ  */
    _SEMI = 273,                   /* _SEMI  */
    _LT = 274,                     /* _LT  */
    _LDARROW = 275,                /* _LDARROW  */
    _LTGT = 276,                   /* _LTGT  */
    _EQ = 277,                     /* _EQ  */
    _GT = 278,                     /* _GT  */
    _GTEQ = 279,                   /* _GTEQ  */
    _LBRACK = 280,                 /* _LBRACK  */
    _RBRACK = 281,                 /* _RBRACK  */
    _CARET = 282,                  /* _CARET  */
    _KW_ate = 283,                 /* _KW_ate  */
    _KW_caso = 284,                /* _KW_caso  */
    _KW_char = 285,                /* _KW_char  */
    _KW_const = 286,               /* _KW_const  */
    _KW_de = 287,                  /* _KW_de  */
    _KW_enquanto = 288,            /* _KW_enquanto  */
    _KW_entao = 289,               /* _KW_entao  */
    _KW_faca = 290,                /* _KW_faca  */
    _KW_falso = 291,               /* _KW_falso  */
    _KW_fim = 292,                 /* _KW_fim  */
    _KW_funcao = 293,              /* _KW_funcao  */
    _KW_inicio = 294,              /* _KW_inicio  */
    _KW_int = 295,                 /* _KW_int  */
    _KW_para = 296,                /* _KW_para  */
    _KW_procedimento = 297,        /* _KW_procedimento  */
    _KW_programa = 298,            /* _KW_programa  */
    _KW_real = 299,                /* _KW_real  */
    _KW_registro = 300,            /* _KW_registro  */
    _KW_se = 301,                  /* _KW_se  */
    _KW_senao = 302,               /* _KW_senao  */
    _KW_sovai = 303,               /* _KW_sovai  */
    _KW_tipo = 304,                /* _KW_tipo  */
    _KW_var = 305,                 /* _KW_var  */
    _KW_verdadeiro = 306,          /* _KW_verdadeiro  */
    _KW_vetor = 307,               /* _KW_vetor  */
    _DBAR = 308,                   /* _DBAR  */
    _STRING_ = 309,                /* _STRING_  */
    _CHAR_ = 310,                  /* _CHAR_  */
    _INTEGER_ = 311,               /* _INTEGER_  */
    _DOUBLE_ = 312,                /* _DOUBLE_  */
    _IDENT_ = 313                  /* _IDENT_  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 51 "pascalzin.y"

  int    _int;
  char   _char;
  double _double;
  char*  _string;
  Entry entry_;
  BlocoDefinicoes blocodefinicoes_;
  BlocoFuncaoEProc blocofuncaoeproc_;
  BlocoConstante blococonstante_;
  RegraBlocoConstante regrablococonstante_;
  BlocoTipo blocotipo_;
  RegraBlocoTipo regrablocotipo_;
  BlocoVar blocovar_;
  RegraBlocoVar regrablocovar_;
  BlocoComando blococomando_;
  RegraComando regracomando_;
  Comando comando_;
  Atribuicao atribuicao_;
  SubEscrito subescrito_;
  RegraTipo regratipo_;
  TipoPrimitivo tipoprimitivo_;
  Valor valor_;
  TipoDerivado tipoderivado_;
  Ponteiro ponteiro_;
  Vetor vetor_;
  If if_;
  While while_;
  For for_;
  Goto goto_;
  Rotulo rotulo_;
  Struct struct_;
  DefinicaoCampoStruct definicaocampostruct_;
  AtribuicaoStruct atribuicaostruct_;
  OperadorRelacional operadorrelacional_;
  OperadorLogico operadorlogico_;
  OperadorAritmetico operadoraritmetico_;
  Case case_;
  RegraSeletor regraseletor_;
  Seletor seletor_;
  ChamadaFuncao chamadafuncao_;
  ListaIdent listaident_;
  Funcao funcao_;
  Procedimento procedimento_;
  ExpressaoAritmetica expressaoaritmetica_;
  Operando operando_;
  RegraAritmetica regraaritmetica_;
  ExpressaoRelacional expressaorelacional_;
  RegraRelacional regrarelacional_;
  ExpressaoLogica expressaologica_;
  RegraLogico regralogico_;

#line 174 "Bison.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif




int pascalzin_parse (yyscan_t scanner, YYSTYPE *result);


#endif /* !YY_PASCALZIN_BISON_H_INCLUDED  */
