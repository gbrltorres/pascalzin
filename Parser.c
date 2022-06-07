/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         pascalzin_parse
#define yylex           pascalzin_lex
#define yyerror         pascalzin_error
#define yydebug         pascalzin_debug
#define yynerrs         pascalzin_nerrs

/* First part of user prologue.  */
#line 20 "pascalzin.y"

/* Begin C preamble code */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Absyn.h"

#define YYMAXDEPTH 10000000

/* The type yyscan_t is defined by flex, but we need it in the parser already. */
#ifndef YY_TYPEDEF_YY_SCANNER_T
#define YY_TYPEDEF_YY_SCANNER_T
typedef void* yyscan_t;
#endif

typedef struct yy_buffer_state *YY_BUFFER_STATE;
extern YY_BUFFER_STATE pascalzin__scan_string(const char *str, yyscan_t scanner);
extern void pascalzin__delete_buffer(YY_BUFFER_STATE buf, yyscan_t scanner);

extern void pascalzin_lex_destroy(yyscan_t scanner);
extern char* pascalzin_get_text(yyscan_t scanner);

extern yyscan_t pascalzin__initialize_lexer(FILE * inp);

/* List reversal functions. */

/* End C preamble code */

#line 106 "Parser.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "Bison.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL__ERROR_ = 3,                    /* _ERROR_  */
  YYSYMBOL__BANG = 4,                      /* _BANG  */
  YYSYMBOL__DAMP = 5,                      /* _DAMP  */
  YYSYMBOL__SYMB_17 = 6,                   /* _SYMB_17  */
  YYSYMBOL__LPAREN = 7,                    /* _LPAREN  */
  YYSYMBOL__RPAREN = 8,                    /* _RPAREN  */
  YYSYMBOL__STAR = 9,                      /* _STAR  */
  YYSYMBOL__PLUS = 10,                     /* _PLUS  */
  YYSYMBOL__MINUS = 11,                    /* _MINUS  */
  YYSYMBOL__DOT = 12,                      /* _DOT  */
  YYSYMBOL__DDOT = 13,                     /* _DDOT  */
  YYSYMBOL__SLASH = 14,                    /* _SLASH  */
  YYSYMBOL__COLON = 15,                    /* _COLON  */
  YYSYMBOL__COLONEQ = 16,                  /* _COLONEQ  */
  YYSYMBOL__SEMI = 17,                     /* _SEMI  */
  YYSYMBOL__LT = 18,                       /* _LT  */
  YYSYMBOL__LDARROW = 19,                  /* _LDARROW  */
  YYSYMBOL__LTGT = 20,                     /* _LTGT  */
  YYSYMBOL__EQ = 21,                       /* _EQ  */
  YYSYMBOL__GT = 22,                       /* _GT  */
  YYSYMBOL__GTEQ = 23,                     /* _GTEQ  */
  YYSYMBOL__LBRACK = 24,                   /* _LBRACK  */
  YYSYMBOL__RBRACK = 25,                   /* _RBRACK  */
  YYSYMBOL__CARET = 26,                    /* _CARET  */
  YYSYMBOL__KW_ate = 27,                   /* _KW_ate  */
  YYSYMBOL__KW_caso = 28,                  /* _KW_caso  */
  YYSYMBOL__KW_char = 29,                  /* _KW_char  */
  YYSYMBOL__KW_const = 30,                 /* _KW_const  */
  YYSYMBOL__KW_de = 31,                    /* _KW_de  */
  YYSYMBOL__KW_enquanto = 32,              /* _KW_enquanto  */
  YYSYMBOL__KW_entao = 33,                 /* _KW_entao  */
  YYSYMBOL__KW_faca = 34,                  /* _KW_faca  */
  YYSYMBOL__KW_falso = 35,                 /* _KW_falso  */
  YYSYMBOL__KW_fim = 36,                   /* _KW_fim  */
  YYSYMBOL__KW_funcao = 37,                /* _KW_funcao  */
  YYSYMBOL__KW_inicio = 38,                /* _KW_inicio  */
  YYSYMBOL__KW_int = 39,                   /* _KW_int  */
  YYSYMBOL__KW_para = 40,                  /* _KW_para  */
  YYSYMBOL__KW_procedimento = 41,          /* _KW_procedimento  */
  YYSYMBOL__KW_programa = 42,              /* _KW_programa  */
  YYSYMBOL__KW_real = 43,                  /* _KW_real  */
  YYSYMBOL__KW_registro = 44,              /* _KW_registro  */
  YYSYMBOL__KW_se = 45,                    /* _KW_se  */
  YYSYMBOL__KW_senao = 46,                 /* _KW_senao  */
  YYSYMBOL__KW_sovai = 47,                 /* _KW_sovai  */
  YYSYMBOL__KW_tipo = 48,                  /* _KW_tipo  */
  YYSYMBOL__KW_var = 49,                   /* _KW_var  */
  YYSYMBOL__KW_verdadeiro = 50,            /* _KW_verdadeiro  */
  YYSYMBOL__KW_vetor = 51,                 /* _KW_vetor  */
  YYSYMBOL__DBAR = 52,                     /* _DBAR  */
  YYSYMBOL__STRING_ = 53,                  /* _STRING_  */
  YYSYMBOL__CHAR_ = 54,                    /* _CHAR_  */
  YYSYMBOL__INTEGER_ = 55,                 /* _INTEGER_  */
  YYSYMBOL__DOUBLE_ = 56,                  /* _DOUBLE_  */
  YYSYMBOL__IDENT_ = 57,                   /* _IDENT_  */
  YYSYMBOL_YYACCEPT = 58,                  /* $accept  */
  YYSYMBOL_Entry = 59,                     /* Entry  */
  YYSYMBOL_BlocoConstante = 60,            /* BlocoConstante  */
  YYSYMBOL_RegraBlocoConstante = 61,       /* RegraBlocoConstante  */
  YYSYMBOL_BlocoTipo = 62,                 /* BlocoTipo  */
  YYSYMBOL_RegraBlocoTipo = 63,            /* RegraBlocoTipo  */
  YYSYMBOL_BlocoVar = 64,                  /* BlocoVar  */
  YYSYMBOL_RegraBlocoVar = 65,             /* RegraBlocoVar  */
  YYSYMBOL_BlocoComando = 66,              /* BlocoComando  */
  YYSYMBOL_RegraComando = 67,              /* RegraComando  */
  YYSYMBOL_Comando = 68,                   /* Comando  */
  YYSYMBOL_Atribuicao = 69,                /* Atribuicao  */
  YYSYMBOL_SubEscrito = 70,                /* SubEscrito  */
  YYSYMBOL_RegraTipo = 71,                 /* RegraTipo  */
  YYSYMBOL_TipoPrimitivo = 72,             /* TipoPrimitivo  */
  YYSYMBOL_Valor = 73,                     /* Valor  */
  YYSYMBOL_TipoDerivado = 74,              /* TipoDerivado  */
  YYSYMBOL_Ponteiro = 75,                  /* Ponteiro  */
  YYSYMBOL_Vetor = 76,                     /* Vetor  */
  YYSYMBOL_If = 77,                        /* If  */
  YYSYMBOL_While = 78,                     /* While  */
  YYSYMBOL_For = 79,                       /* For  */
  YYSYMBOL_Goto = 80,                      /* Goto  */
  YYSYMBOL_Struct = 81,                    /* Struct  */
  YYSYMBOL_DefinicaoCampoStruct = 82,      /* DefinicaoCampoStruct  */
  YYSYMBOL_OperadorRelacional = 83,        /* OperadorRelacional  */
  YYSYMBOL_OperadorLogico = 84,            /* OperadorLogico  */
  YYSYMBOL_OperadorAritmetico = 85,        /* OperadorAritmetico  */
  YYSYMBOL_ExpressaoAritmetica = 86,       /* ExpressaoAritmetica  */
  YYSYMBOL_Operando = 87,                  /* Operando  */
  YYSYMBOL_RegraAritmetica = 88,           /* RegraAritmetica  */
  YYSYMBOL_ExpressaoRelacional = 89,       /* ExpressaoRelacional  */
  YYSYMBOL_RegraRelacional = 90,           /* RegraRelacional  */
  YYSYMBOL_ExpressaoLogica = 91,           /* ExpressaoLogica  */
  YYSYMBOL_RegraLogico = 92                /* RegraLogico  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 99 "pascalzin.y"

void yyerror(YYLTYPE *loc, yyscan_t scanner, YYSTYPE *result, const char *msg)
{
  fprintf(stderr, "error: %d,%d: %s at %s\n",
    loc->first_line, loc->first_column, msg, pascalzin_get_text(scanner));
}

int yyparse(yyscan_t scanner, YYSTYPE *result);

extern int yylex(YYSTYPE *lvalp, YYLTYPE *llocp, yyscan_t scanner);

#line 244 "Parser.c"


#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   152

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  152

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   312


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   213,   213,   215,   216,   218,   219,   221,   222,   224,
     225,   227,   228,   230,   231,   233,   235,   236,   238,   239,
     240,   241,   242,   244,   245,   247,   248,   250,   251,   253,
     254,   255,   257,   258,   259,   260,   261,   263,   264,   265,
     267,   268,   270,   272,   273,   275,   277,   278,   280,   284,
     286,   287,   292,   293,   294,   295,   296,   297,   299,   300,
     301,   302,   304,   305,   306,   307,   323,   325,   326,   327,
     329,   330,   332,   333,   335,   336,   338,   339,   340,   341,
     342,   343,   344,   345,   347,   348
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "_ERROR_", "_BANG",
  "_DAMP", "_SYMB_17", "_LPAREN", "_RPAREN", "_STAR", "_PLUS", "_MINUS",
  "_DOT", "_DDOT", "_SLASH", "_COLON", "_COLONEQ", "_SEMI", "_LT",
  "_LDARROW", "_LTGT", "_EQ", "_GT", "_GTEQ", "_LBRACK", "_RBRACK",
  "_CARET", "_KW_ate", "_KW_caso", "_KW_char", "_KW_const", "_KW_de",
  "_KW_enquanto", "_KW_entao", "_KW_faca", "_KW_falso", "_KW_fim",
  "_KW_funcao", "_KW_inicio", "_KW_int", "_KW_para", "_KW_procedimento",
  "_KW_programa", "_KW_real", "_KW_registro", "_KW_se", "_KW_senao",
  "_KW_sovai", "_KW_tipo", "_KW_var", "_KW_verdadeiro", "_KW_vetor",
  "_DBAR", "_STRING_", "_CHAR_", "_INTEGER_", "_DOUBLE_", "_IDENT_",
  "$accept", "Entry", "BlocoConstante", "RegraBlocoConstante", "BlocoTipo",
  "RegraBlocoTipo", "BlocoVar", "RegraBlocoVar", "BlocoComando",
  "RegraComando", "Comando", "Atribuicao", "SubEscrito", "RegraTipo",
  "TipoPrimitivo", "Valor", "TipoDerivado", "Ponteiro", "Vetor", "If",
  "While", "For", "Goto", "Struct", "DefinicaoCampoStruct",
  "OperadorRelacional", "OperadorLogico", "OperadorAritmetico",
  "ExpressaoAritmetica", "Operando", "RegraAritmetica",
  "ExpressaoRelacional", "RegraRelacional", "ExpressaoLogica",
  "RegraLogico", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312
};
#endif

#define YYPACT_NINF (-97)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-34)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -15,   -24,    48,    34,   -97,    37,     3,    21,   -97,    55,
     -97,     5,    44,    58,   -97,    73,   -97,     6,    60,   -97,
     -97,    -3,    47,   -97,    86,   -97,    91,   -11,   -97,    89,
     -97,    -6,    94,    50,   -97,   -97,   -97,   -97,   -26,   -97,
     -11,   -97,   -97,   -97,    84,    88,    99,   -97,   -97,   -97,
     -97,   -97,   -11,     0,    62,     0,    63,    49,    81,   101,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,    91,
     -97,   -97,    66,    78,    67,   106,   -97,   -97,   -97,     7,
       7,   -97,     0,    69,    61,     7,    92,    98,    97,   -97,
      58,   -10,   -97,    -6,   -97,   114,    74,   -97,    75,     0,
     -97,   -97,     7,   -97,   -97,   -97,   -97,   -97,   -97,   -26,
     -97,   -97,   -97,    60,    11,    60,   -97,   -97,   -97,   108,
     -97,    79,   120,   100,   -97,     7,   -97,   -97,    91,   -97,
     103,   104,    93,   124,   116,   -11,   -97,   -97,    60,    60,
      60,    58,   111,   126,   -97,   -97,   -97,   -97,    56,    74,
     -97,   -97
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     4,     0,
       3,     0,     0,     0,     8,     0,     7,     0,     0,    35,
      34,    67,    68,    69,     0,    36,     0,     0,    12,     0,
      11,     0,     0,     5,    64,    62,    63,    65,     0,    66,
       0,    31,    29,    30,     0,     0,     0,    27,    28,    37,
      38,    39,     0,     0,     0,     0,     0,     0,     0,     0,
      18,    19,    20,    21,    22,     2,     6,    67,    68,    70,
      40,    41,     0,     0,     9,     0,    58,    59,    61,    76,
      77,    60,     0,     0,     0,    78,     0,     0,     0,    48,
       0,     0,    15,    16,    71,     0,     0,    10,    13,     0,
      79,    80,    82,    53,    56,    54,    57,    52,    55,     0,
      73,    72,    81,     0,     0,     0,    23,    26,    25,     0,
      17,     0,     0,     0,    14,    84,    83,    75,    74,    45,
       0,     0,    43,     0,     0,     0,    49,    85,     0,     0,
       0,     0,     0,     0,    46,    47,    44,    24,     0,    50,
      42,    51
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -97,   -97,   -97,   112,   -97,    70,   -97,    51,   -96,    53,
     -97,    96,   -97,   -49,   -38,   -83,   107,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,    -1,   -97,   -45,   -97,   -12,   -13,
      82,   -97,    68,   -46,   -64
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     7,    10,    12,    16,    18,    30,    32,    58,
      59,    60,   119,    46,    47,    24,    48,    49,    50,    61,
      62,    63,    64,    51,   123,   109,    99,    38,    83,    84,
      39,    85,   110,    86,   100
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      26,    25,    70,    75,    76,    77,    78,   116,    82,    88,
      82,    76,    77,    78,   -32,    40,   101,   129,    41,   132,
       8,   112,    14,    28,   -32,    69,    53,     1,    42,    67,
      68,    23,    43,     3,    54,    79,   102,    82,   126,    55,
      44,    56,   144,   145,   146,   117,    45,   118,     4,     5,
      80,    57,    81,   125,    82,    67,    68,    23,   147,    81,
       9,   137,    15,    29,   -33,    90,   130,     6,   131,    11,
      34,    35,    36,    91,   -33,    37,    13,    26,    25,   103,
     104,   105,   106,   107,   108,    41,   143,   103,   104,   105,
     106,   107,   108,    17,    27,    42,   128,   127,    31,    43,
      34,    35,    36,    33,    52,    37,    65,     9,    72,    73,
     150,    19,    20,    21,    22,    23,    74,    92,    93,    57,
      89,    95,    96,    98,    15,   114,   113,   121,    26,    25,
     115,   122,    29,   133,   134,   135,   136,   138,   139,   140,
     141,   142,   148,   149,    97,    66,   120,    71,   151,   124,
      87,    94,   111
};

static const yytype_uint8 yycheck[] =
{
      13,    13,    40,    52,     4,     5,     6,    90,    53,    55,
      55,     4,     5,     6,    17,    26,    80,   113,    29,   115,
      17,    85,    17,    17,    27,    38,    32,    42,    39,    55,
      56,    57,    43,    57,    40,    35,    82,    82,   102,    45,
      51,    47,   138,   139,   140,    55,    57,    57,     0,    15,
      50,    57,    52,    99,    99,    55,    56,    57,   141,    52,
      57,   125,    57,    57,    17,    16,    55,    30,    57,    48,
       9,    10,    11,    24,    27,    14,    21,    90,    90,    18,
      19,    20,    21,    22,    23,    29,   135,    18,    19,    20,
      21,    22,    23,    49,    21,    39,   109,   109,    38,    43,
       9,    10,    11,    17,    15,    14,    12,    57,    24,    21,
     148,    53,    54,    55,    56,    57,    17,    36,    17,    57,
      57,    55,    44,    17,    57,    27,    34,    13,   141,   141,
      33,    57,    57,    25,    55,    15,    36,    34,    34,    46,
      16,    25,    31,    17,    74,    33,    93,    40,   149,    98,
      54,    69,    84
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    42,    59,    57,     0,    15,    30,    60,    17,    57,
      61,    48,    62,    21,    17,    57,    63,    49,    64,    53,
      54,    55,    56,    57,    73,    86,    87,    21,    17,    57,
      65,    38,    66,    17,     9,    10,    11,    14,    85,    88,
      26,    29,    39,    43,    51,    57,    71,    72,    74,    75,
      76,    81,    15,    32,    40,    45,    47,    57,    67,    68,
      69,    77,    78,    79,    80,    12,    61,    55,    56,    87,
      72,    74,    24,    21,    17,    71,     4,     5,     6,    35,
      50,    52,    84,    86,    87,    89,    91,    69,    91,    57,
      16,    24,    36,    17,    88,    55,    44,    63,    17,    84,
      92,    92,    91,    18,    19,    20,    21,    22,    23,    83,
      90,    90,    92,    34,    27,    33,    73,    55,    57,    70,
      67,    13,    57,    82,    65,    91,    92,    86,    87,    66,
      55,    57,    66,    25,    55,    15,    36,    92,    34,    34,
      46,    16,    25,    71,    66,    66,    66,    73,    31,    17,
      72,    82
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    58,    59,    60,    60,    61,    61,    62,    62,    63,
      63,    64,    64,    65,    65,    66,    67,    67,    68,    68,
      68,    68,    68,    69,    69,    70,    70,    71,    71,    72,
      72,    72,    73,    73,    73,    73,    73,    74,    74,    74,
      75,    75,    76,    77,    77,    78,    79,    79,    80,    81,
      82,    82,    83,    83,    83,    83,    83,    83,    84,    84,
      84,    84,    85,    85,    85,    85,    86,    87,    87,    87,
      88,    88,    89,    89,    90,    90,    91,    91,    91,    91,
      91,    91,    91,    91,    92,    92
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     8,     2,     2,     4,     5,     2,     2,     4,
       5,     2,     2,     4,     5,     3,     2,     3,     1,     1,
       1,     1,     1,     3,     6,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     8,     4,     6,     4,     6,     6,     2,     5,
       4,     5,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       2,     3,     2,     2,     2,     2,     1,     1,     1,     2,
       2,     2,     2,     3,     2,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, scanner, result, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YY_LOCATION_PRINT
#  if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, scanner, result); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (scanner);
  YY_USE (result);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, scanner, result);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, yyscan_t scanner, YYSTYPE *result)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), scanner, result);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner, result); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (scanner);
  YY_USE (result);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t scanner, YYSTYPE *result)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Entry: _KW_programa _IDENT_ _COLON BlocoConstante BlocoTipo BlocoVar BlocoComando _DOT  */
#line 213 "pascalzin.y"
                                                                                        { (yyval.entry_) = make_L1((yyvsp[-6]._string), (yyvsp[-4].blococonstante_), (yyvsp[-3].blocotipo_), (yyvsp[-2].blocovar_), (yyvsp[-1].blococomando_)); result->entry_ = (yyval.entry_); }
#line 1435 "Parser.c"
    break;

  case 3: /* BlocoConstante: _KW_const RegraBlocoConstante  */
#line 215 "pascalzin.y"
                                               { (yyval.blococonstante_) = make_BlocoConstante1((yyvsp[0].regrablococonstante_)); result->blococonstante_ = (yyval.blococonstante_); }
#line 1441 "Parser.c"
    break;

  case 4: /* BlocoConstante: _KW_const _SEMI  */
#line 216 "pascalzin.y"
                    { (yyval.blococonstante_) = make_BlocoConstante2(); result->blococonstante_ = (yyval.blococonstante_); }
#line 1447 "Parser.c"
    break;

  case 5: /* RegraBlocoConstante: _IDENT_ _EQ Valor _SEMI  */
#line 218 "pascalzin.y"
                                              { (yyval.regrablococonstante_) = make_RegraBlocoConstante1((yyvsp[-3]._string), (yyvsp[-1].valor_)); result->regrablococonstante_ = (yyval.regrablococonstante_); }
#line 1453 "Parser.c"
    break;

  case 6: /* RegraBlocoConstante: _IDENT_ _EQ Valor _SEMI RegraBlocoConstante  */
#line 219 "pascalzin.y"
                                                { (yyval.regrablococonstante_) = make_RegraBlocoConstante2((yyvsp[-4]._string), (yyvsp[-2].valor_), (yyvsp[0].regrablococonstante_)); result->regrablococonstante_ = (yyval.regrablococonstante_); }
#line 1459 "Parser.c"
    break;

  case 7: /* BlocoTipo: _KW_tipo RegraBlocoTipo  */
#line 221 "pascalzin.y"
                                    { (yyval.blocotipo_) = make_BlocoTipo1((yyvsp[0].regrablocotipo_)); result->blocotipo_ = (yyval.blocotipo_); }
#line 1465 "Parser.c"
    break;

  case 8: /* BlocoTipo: _KW_tipo _SEMI  */
#line 222 "pascalzin.y"
                   { (yyval.blocotipo_) = make_BlocoTipo2(); result->blocotipo_ = (yyval.blocotipo_); }
#line 1471 "Parser.c"
    break;

  case 9: /* RegraBlocoTipo: _IDENT_ _EQ RegraTipo _SEMI  */
#line 224 "pascalzin.y"
                                             { (yyval.regrablocotipo_) = make_RegraBlocoTipo1((yyvsp[-3]._string), (yyvsp[-1].regratipo_)); result->regrablocotipo_ = (yyval.regrablocotipo_); }
#line 1477 "Parser.c"
    break;

  case 10: /* RegraBlocoTipo: _IDENT_ _EQ RegraTipo _SEMI RegraBlocoTipo  */
#line 225 "pascalzin.y"
                                               { (yyval.regrablocotipo_) = make_RegraBlocoTipo2((yyvsp[-4]._string), (yyvsp[-2].regratipo_), (yyvsp[0].regrablocotipo_)); result->regrablocotipo_ = (yyval.regrablocotipo_); }
#line 1483 "Parser.c"
    break;

  case 11: /* BlocoVar: _KW_var RegraBlocoVar  */
#line 227 "pascalzin.y"
                                 { (yyval.blocovar_) = make_BlocoVar1((yyvsp[0].regrablocovar_)); result->blocovar_ = (yyval.blocovar_); }
#line 1489 "Parser.c"
    break;

  case 12: /* BlocoVar: _KW_var _SEMI  */
#line 228 "pascalzin.y"
                  { (yyval.blocovar_) = make_BlocoVar2(); result->blocovar_ = (yyval.blocovar_); }
#line 1495 "Parser.c"
    break;

  case 13: /* RegraBlocoVar: _IDENT_ _COLON RegraTipo _SEMI  */
#line 230 "pascalzin.y"
                                               { (yyval.regrablocovar_) = make_RegraBlocoVar1((yyvsp[-3]._string), (yyvsp[-1].regratipo_)); result->regrablocovar_ = (yyval.regrablocovar_); }
#line 1501 "Parser.c"
    break;

  case 14: /* RegraBlocoVar: _IDENT_ _COLON RegraTipo _SEMI RegraBlocoVar  */
#line 231 "pascalzin.y"
                                                 { (yyval.regrablocovar_) = make_RegraBlocoVar2((yyvsp[-4]._string), (yyvsp[-2].regratipo_), (yyvsp[0].regrablocovar_)); result->regrablocovar_ = (yyval.regrablocovar_); }
#line 1507 "Parser.c"
    break;

  case 15: /* BlocoComando: _KW_inicio RegraComando _KW_fim  */
#line 233 "pascalzin.y"
                                               { (yyval.blococomando_) = make_L5((yyvsp[-1].regracomando_)); result->blococomando_ = (yyval.blococomando_); }
#line 1513 "Parser.c"
    break;

  case 16: /* RegraComando: Comando _SEMI  */
#line 235 "pascalzin.y"
                             { (yyval.regracomando_) = make_RegraComando1((yyvsp[-1].comando_)); result->regracomando_ = (yyval.regracomando_); }
#line 1519 "Parser.c"
    break;

  case 17: /* RegraComando: Comando _SEMI RegraComando  */
#line 236 "pascalzin.y"
                               { (yyval.regracomando_) = make_RegraComando2((yyvsp[-2].comando_), (yyvsp[0].regracomando_)); result->regracomando_ = (yyval.regracomando_); }
#line 1525 "Parser.c"
    break;

  case 18: /* Comando: Atribuicao  */
#line 238 "pascalzin.y"
                     { (yyval.comando_) = make_ComandoAtribuicao((yyvsp[0].atribuicao_)); result->comando_ = (yyval.comando_); }
#line 1531 "Parser.c"
    break;

  case 19: /* Comando: If  */
#line 239 "pascalzin.y"
       { (yyval.comando_) = make_ComandoIf((yyvsp[0].if_)); result->comando_ = (yyval.comando_); }
#line 1537 "Parser.c"
    break;

  case 20: /* Comando: While  */
#line 240 "pascalzin.y"
          { (yyval.comando_) = make_ComandoWhile((yyvsp[0].while_)); result->comando_ = (yyval.comando_); }
#line 1543 "Parser.c"
    break;

  case 21: /* Comando: For  */
#line 241 "pascalzin.y"
        { (yyval.comando_) = make_ComandoFor((yyvsp[0].for_)); result->comando_ = (yyval.comando_); }
#line 1549 "Parser.c"
    break;

  case 22: /* Comando: Goto  */
#line 242 "pascalzin.y"
         { (yyval.comando_) = make_ComandoGoto((yyvsp[0].goto_)); result->comando_ = (yyval.comando_); }
#line 1555 "Parser.c"
    break;

  case 23: /* Atribuicao: _IDENT_ _COLONEQ Valor  */
#line 244 "pascalzin.y"
                                    { (yyval.atribuicao_) = make_Atribuicao1((yyvsp[-2]._string), (yyvsp[0].valor_)); result->atribuicao_ = (yyval.atribuicao_); }
#line 1561 "Parser.c"
    break;

  case 24: /* Atribuicao: _IDENT_ _LBRACK SubEscrito _RBRACK _COLONEQ Valor  */
#line 245 "pascalzin.y"
                                                      { (yyval.atribuicao_) = make_Atribuicao2((yyvsp[-5]._string), (yyvsp[-3].subescrito_), (yyvsp[0].valor_)); result->atribuicao_ = (yyval.atribuicao_); }
#line 1567 "Parser.c"
    break;

  case 25: /* SubEscrito: _IDENT_  */
#line 247 "pascalzin.y"
                     { (yyval.subescrito_) = make_SubEscritoIdent((yyvsp[0]._string)); result->subescrito_ = (yyval.subescrito_); }
#line 1573 "Parser.c"
    break;

  case 26: /* SubEscrito: _INTEGER_  */
#line 248 "pascalzin.y"
              { (yyval.subescrito_) = make_SubEscritoInteger((yyvsp[0]._int)); result->subescrito_ = (yyval.subescrito_); }
#line 1579 "Parser.c"
    break;

  case 27: /* RegraTipo: TipoPrimitivo  */
#line 250 "pascalzin.y"
                          { (yyval.regratipo_) = make_RegraTipoTipoPrimitivo((yyvsp[0].tipoprimitivo_)); result->regratipo_ = (yyval.regratipo_); }
#line 1585 "Parser.c"
    break;

  case 28: /* RegraTipo: TipoDerivado  */
#line 251 "pascalzin.y"
                 { (yyval.regratipo_) = make_RegraTipoTipoDerivado((yyvsp[0].tipoderivado_)); result->regratipo_ = (yyval.regratipo_); }
#line 1591 "Parser.c"
    break;

  case 29: /* TipoPrimitivo: _KW_int  */
#line 253 "pascalzin.y"
                        { (yyval.tipoprimitivo_) = make_TipoPrimitivo_int(); result->tipoprimitivo_ = (yyval.tipoprimitivo_); }
#line 1597 "Parser.c"
    break;

  case 30: /* TipoPrimitivo: _KW_real  */
#line 254 "pascalzin.y"
             { (yyval.tipoprimitivo_) = make_TipoPrimitivo_real(); result->tipoprimitivo_ = (yyval.tipoprimitivo_); }
#line 1603 "Parser.c"
    break;

  case 31: /* TipoPrimitivo: _KW_char  */
#line 255 "pascalzin.y"
             { (yyval.tipoprimitivo_) = make_TipoPrimitivo_char(); result->tipoprimitivo_ = (yyval.tipoprimitivo_); }
#line 1609 "Parser.c"
    break;

  case 32: /* Valor: _INTEGER_  */
#line 257 "pascalzin.y"
                  { (yyval.valor_) = make_ValorInteger((yyvsp[0]._int)); result->valor_ = (yyval.valor_); }
#line 1615 "Parser.c"
    break;

  case 33: /* Valor: _DOUBLE_  */
#line 258 "pascalzin.y"
             { (yyval.valor_) = make_ValorDouble((yyvsp[0]._double)); result->valor_ = (yyval.valor_); }
#line 1621 "Parser.c"
    break;

  case 34: /* Valor: _CHAR_  */
#line 259 "pascalzin.y"
           { (yyval.valor_) = make_ValorChar((yyvsp[0]._char)); result->valor_ = (yyval.valor_); }
#line 1627 "Parser.c"
    break;

  case 35: /* Valor: _STRING_  */
#line 260 "pascalzin.y"
             { (yyval.valor_) = make_ValorString((yyvsp[0]._string)); result->valor_ = (yyval.valor_); }
#line 1633 "Parser.c"
    break;

  case 36: /* Valor: ExpressaoAritmetica  */
#line 261 "pascalzin.y"
                        { (yyval.valor_) = make_ValorExpressaoAritmetica((yyvsp[0].expressaoaritmetica_)); result->valor_ = (yyval.valor_); }
#line 1639 "Parser.c"
    break;

  case 37: /* TipoDerivado: Ponteiro  */
#line 263 "pascalzin.y"
                        { (yyval.tipoderivado_) = make_TipoDerivadoPonteiro((yyvsp[0].ponteiro_)); result->tipoderivado_ = (yyval.tipoderivado_); }
#line 1645 "Parser.c"
    break;

  case 38: /* TipoDerivado: Vetor  */
#line 264 "pascalzin.y"
          { (yyval.tipoderivado_) = make_TipoDerivadoVetor((yyvsp[0].vetor_)); result->tipoderivado_ = (yyval.tipoderivado_); }
#line 1651 "Parser.c"
    break;

  case 39: /* TipoDerivado: Struct  */
#line 265 "pascalzin.y"
           { (yyval.tipoderivado_) = make_TipoDerivadoStruct((yyvsp[0].struct_)); result->tipoderivado_ = (yyval.tipoderivado_); }
#line 1657 "Parser.c"
    break;

  case 40: /* Ponteiro: _CARET TipoPrimitivo  */
#line 267 "pascalzin.y"
                                { (yyval.ponteiro_) = make_Ponteiro1((yyvsp[0].tipoprimitivo_)); result->ponteiro_ = (yyval.ponteiro_); }
#line 1663 "Parser.c"
    break;

  case 41: /* Ponteiro: _CARET TipoDerivado  */
#line 268 "pascalzin.y"
                        { (yyval.ponteiro_) = make_Ponteiro2((yyvsp[0].tipoderivado_)); result->ponteiro_ = (yyval.ponteiro_); }
#line 1669 "Parser.c"
    break;

  case 42: /* Vetor: _KW_vetor _LBRACK _INTEGER_ _DDOT _INTEGER_ _RBRACK _KW_de TipoPrimitivo  */
#line 270 "pascalzin.y"
                                                                                 { (yyval.vetor_) = make_L7((yyvsp[-5]._int), (yyvsp[-3]._int), (yyvsp[0].tipoprimitivo_)); result->vetor_ = (yyval.vetor_); }
#line 1675 "Parser.c"
    break;

  case 43: /* If: _KW_se ExpressaoLogica _KW_entao BlocoComando  */
#line 272 "pascalzin.y"
                                                   { (yyval.if_) = make_If1((yyvsp[-2].expressaologica_), (yyvsp[0].blococomando_)); result->if_ = (yyval.if_); }
#line 1681 "Parser.c"
    break;

  case 44: /* If: _KW_se ExpressaoLogica _KW_entao BlocoComando _KW_senao BlocoComando  */
#line 273 "pascalzin.y"
                                                                         { (yyval.if_) = make_If2((yyvsp[-4].expressaologica_), (yyvsp[-2].blococomando_), (yyvsp[0].blococomando_)); result->if_ = (yyval.if_); }
#line 1687 "Parser.c"
    break;

  case 45: /* While: _KW_enquanto ExpressaoLogica _KW_faca BlocoComando  */
#line 275 "pascalzin.y"
                                                           { (yyval.while_) = make_L8((yyvsp[-2].expressaologica_), (yyvsp[0].blococomando_)); result->while_ = (yyval.while_); }
#line 1693 "Parser.c"
    break;

  case 46: /* For: _KW_para Atribuicao _KW_ate _INTEGER_ _KW_faca BlocoComando  */
#line 277 "pascalzin.y"
                                                                  { (yyval.for_) = make_For1((yyvsp[-4].atribuicao_), (yyvsp[-2]._int), (yyvsp[0].blococomando_)); result->for_ = (yyval.for_); }
#line 1699 "Parser.c"
    break;

  case 47: /* For: _KW_para Atribuicao _KW_ate _IDENT_ _KW_faca BlocoComando  */
#line 278 "pascalzin.y"
                                                              { (yyval.for_) = make_For2((yyvsp[-4].atribuicao_), (yyvsp[-2]._string), (yyvsp[0].blococomando_)); result->for_ = (yyval.for_); }
#line 1705 "Parser.c"
    break;

  case 48: /* Goto: _KW_sovai _IDENT_  */
#line 280 "pascalzin.y"
                         { (yyval.goto_) = make_L9((yyvsp[0]._string)); result->goto_ = (yyval.goto_); }
#line 1711 "Parser.c"
    break;

  case 49: /* Struct: _IDENT_ _EQ _KW_registro DefinicaoCampoStruct _KW_fim  */
#line 284 "pascalzin.y"
                                                               { (yyval.struct_) = make_L11((yyvsp[-4]._string), (yyvsp[-1].definicaocampostruct_)); result->struct_ = (yyval.struct_); }
#line 1717 "Parser.c"
    break;

  case 50: /* DefinicaoCampoStruct: _IDENT_ _COLON RegraTipo _SEMI  */
#line 286 "pascalzin.y"
                                                      { (yyval.definicaocampostruct_) = make_DefinicaoCampoStruct1((yyvsp[-3]._string), (yyvsp[-1].regratipo_)); result->definicaocampostruct_ = (yyval.definicaocampostruct_); }
#line 1723 "Parser.c"
    break;

  case 51: /* DefinicaoCampoStruct: _IDENT_ _COLON RegraTipo _SEMI DefinicaoCampoStruct  */
#line 287 "pascalzin.y"
                                                        { (yyval.definicaocampostruct_) = make_DefinicaoCampoStruct2((yyvsp[-4]._string), (yyvsp[-2].regratipo_), (yyvsp[0].definicaocampostruct_)); result->definicaocampostruct_ = (yyval.definicaocampostruct_); }
#line 1729 "Parser.c"
    break;

  case 52: /* OperadorRelacional: _GT  */
#line 292 "pascalzin.y"
                         { (yyval.operadorrelacional_) = make_OperadorRelacional1(); result->operadorrelacional_ = (yyval.operadorrelacional_); }
#line 1735 "Parser.c"
    break;

  case 53: /* OperadorRelacional: _LT  */
#line 293 "pascalzin.y"
        { (yyval.operadorrelacional_) = make_OperadorRelacional2(); result->operadorrelacional_ = (yyval.operadorrelacional_); }
#line 1741 "Parser.c"
    break;

  case 54: /* OperadorRelacional: _LTGT  */
#line 294 "pascalzin.y"
          { (yyval.operadorrelacional_) = make_OperadorRelacional3(); result->operadorrelacional_ = (yyval.operadorrelacional_); }
#line 1747 "Parser.c"
    break;

  case 55: /* OperadorRelacional: _GTEQ  */
#line 295 "pascalzin.y"
          { (yyval.operadorrelacional_) = make_OperadorRelacional4(); result->operadorrelacional_ = (yyval.operadorrelacional_); }
#line 1753 "Parser.c"
    break;

  case 56: /* OperadorRelacional: _LDARROW  */
#line 296 "pascalzin.y"
             { (yyval.operadorrelacional_) = make_OperadorRelacional5(); result->operadorrelacional_ = (yyval.operadorrelacional_); }
#line 1759 "Parser.c"
    break;

  case 57: /* OperadorRelacional: _EQ  */
#line 297 "pascalzin.y"
        { (yyval.operadorrelacional_) = make_OperadorRelacional6(); result->operadorrelacional_ = (yyval.operadorrelacional_); }
#line 1765 "Parser.c"
    break;

  case 58: /* OperadorLogico: _BANG  */
#line 299 "pascalzin.y"
                       { (yyval.operadorlogico_) = make_OperadorLogico1(); result->operadorlogico_ = (yyval.operadorlogico_); }
#line 1771 "Parser.c"
    break;

  case 59: /* OperadorLogico: _DAMP  */
#line 300 "pascalzin.y"
          { (yyval.operadorlogico_) = make_OperadorLogico2(); result->operadorlogico_ = (yyval.operadorlogico_); }
#line 1777 "Parser.c"
    break;

  case 60: /* OperadorLogico: _DBAR  */
#line 301 "pascalzin.y"
          { (yyval.operadorlogico_) = make_OperadorLogico3(); result->operadorlogico_ = (yyval.operadorlogico_); }
#line 1783 "Parser.c"
    break;

  case 61: /* OperadorLogico: _SYMB_17  */
#line 302 "pascalzin.y"
             { (yyval.operadorlogico_) = make_OperadorLogico4(); result->operadorlogico_ = (yyval.operadorlogico_); }
#line 1789 "Parser.c"
    break;

  case 62: /* OperadorAritmetico: _PLUS  */
#line 304 "pascalzin.y"
                           { (yyval.operadoraritmetico_) = make_OperadorAritmetico1(); result->operadoraritmetico_ = (yyval.operadoraritmetico_); }
#line 1795 "Parser.c"
    break;

  case 63: /* OperadorAritmetico: _MINUS  */
#line 305 "pascalzin.y"
           { (yyval.operadoraritmetico_) = make_OperadorAritmetico2(); result->operadoraritmetico_ = (yyval.operadoraritmetico_); }
#line 1801 "Parser.c"
    break;

  case 64: /* OperadorAritmetico: _STAR  */
#line 306 "pascalzin.y"
          { (yyval.operadoraritmetico_) = make_OperadorAritmetico3(); result->operadoraritmetico_ = (yyval.operadoraritmetico_); }
#line 1807 "Parser.c"
    break;

  case 65: /* OperadorAritmetico: _SLASH  */
#line 307 "pascalzin.y"
           { (yyval.operadoraritmetico_) = make_OperadorAritmetico4(); result->operadoraritmetico_ = (yyval.operadoraritmetico_); }
#line 1813 "Parser.c"
    break;

  case 66: /* ExpressaoAritmetica: Operando RegraAritmetica  */
#line 323 "pascalzin.y"
                                               { (yyval.expressaoaritmetica_) = make_L14((yyvsp[-1].operando_), (yyvsp[0].regraaritmetica_)); result->expressaoaritmetica_ = (yyval.expressaoaritmetica_); }
#line 1819 "Parser.c"
    break;

  case 67: /* Operando: _INTEGER_  */
#line 325 "pascalzin.y"
                     { (yyval.operando_) = make_OperandoInteger((yyvsp[0]._int)); result->operando_ = (yyval.operando_); }
#line 1825 "Parser.c"
    break;

  case 68: /* Operando: _DOUBLE_  */
#line 326 "pascalzin.y"
             { (yyval.operando_) = make_OperandoDouble((yyvsp[0]._double)); result->operando_ = (yyval.operando_); }
#line 1831 "Parser.c"
    break;

  case 69: /* Operando: _IDENT_  */
#line 327 "pascalzin.y"
            { (yyval.operando_) = make_OperandoIdent((yyvsp[0]._string)); result->operando_ = (yyval.operando_); }
#line 1837 "Parser.c"
    break;

  case 70: /* RegraAritmetica: OperadorAritmetico Operando  */
#line 329 "pascalzin.y"
                                              { (yyval.regraaritmetica_) = make_RegraAritmetica1((yyvsp[-1].operadoraritmetico_), (yyvsp[0].operando_)); result->regraaritmetica_ = (yyval.regraaritmetica_); }
#line 1843 "Parser.c"
    break;

  case 71: /* RegraAritmetica: OperadorAritmetico Operando RegraAritmetica  */
#line 330 "pascalzin.y"
                                                { (yyval.regraaritmetica_) = make_RegraAritmetica2((yyvsp[-2].operadoraritmetico_), (yyvsp[-1].operando_), (yyvsp[0].regraaritmetica_)); result->regraaritmetica_ = (yyval.regraaritmetica_); }
#line 1849 "Parser.c"
    break;

  case 72: /* ExpressaoRelacional: Operando RegraRelacional  */
#line 332 "pascalzin.y"
                                               { (yyval.expressaorelacional_) = make_ExpressaoRelacional1((yyvsp[-1].operando_), (yyvsp[0].regrarelacional_)); result->expressaorelacional_ = (yyval.expressaorelacional_); }
#line 1855 "Parser.c"
    break;

  case 73: /* ExpressaoRelacional: ExpressaoAritmetica RegraRelacional  */
#line 333 "pascalzin.y"
                                        { (yyval.expressaorelacional_) = make_ExpressaoRelacional2((yyvsp[-1].expressaoaritmetica_), (yyvsp[0].regrarelacional_)); result->expressaorelacional_ = (yyval.expressaorelacional_); }
#line 1861 "Parser.c"
    break;

  case 74: /* RegraRelacional: OperadorRelacional Operando  */
#line 335 "pascalzin.y"
                                              { (yyval.regrarelacional_) = make_RegraRelacional1((yyvsp[-1].operadorrelacional_), (yyvsp[0].operando_)); result->regrarelacional_ = (yyval.regrarelacional_); }
#line 1867 "Parser.c"
    break;

  case 75: /* RegraRelacional: OperadorRelacional ExpressaoAritmetica  */
#line 336 "pascalzin.y"
                                           { (yyval.regrarelacional_) = make_RegraRelacional2((yyvsp[-1].operadorrelacional_), (yyvsp[0].expressaoaritmetica_)); result->regrarelacional_ = (yyval.regrarelacional_); }
#line 1873 "Parser.c"
    break;

  case 76: /* ExpressaoLogica: _KW_falso  */
#line 338 "pascalzin.y"
                            { (yyval.expressaologica_) = make_ExpressaoLogica_falso(); result->expressaologica_ = (yyval.expressaologica_); }
#line 1879 "Parser.c"
    break;

  case 77: /* ExpressaoLogica: _KW_verdadeiro  */
#line 339 "pascalzin.y"
                   { (yyval.expressaologica_) = make_ExpressaoLogica_verdadeiro(); result->expressaologica_ = (yyval.expressaologica_); }
#line 1885 "Parser.c"
    break;

  case 78: /* ExpressaoLogica: ExpressaoRelacional  */
#line 340 "pascalzin.y"
                        { (yyval.expressaologica_) = make_ExpressaoLogicaExpressaoRelacional((yyvsp[0].expressaorelacional_)); result->expressaologica_ = (yyval.expressaologica_); }
#line 1891 "Parser.c"
    break;

  case 79: /* ExpressaoLogica: _KW_falso RegraLogico  */
#line 341 "pascalzin.y"
                          { (yyval.expressaologica_) = make_ExpressaoLogica1((yyvsp[0].regralogico_)); result->expressaologica_ = (yyval.expressaologica_); }
#line 1897 "Parser.c"
    break;

  case 80: /* ExpressaoLogica: _KW_verdadeiro RegraLogico  */
#line 342 "pascalzin.y"
                               { (yyval.expressaologica_) = make_ExpressaoLogica2((yyvsp[0].regralogico_)); result->expressaologica_ = (yyval.expressaologica_); }
#line 1903 "Parser.c"
    break;

  case 81: /* ExpressaoLogica: ExpressaoRelacional RegraLogico  */
#line 343 "pascalzin.y"
                                    { (yyval.expressaologica_) = make_ExpressaoLogica3((yyvsp[-1].expressaorelacional_), (yyvsp[0].regralogico_)); result->expressaologica_ = (yyval.expressaologica_); }
#line 1909 "Parser.c"
    break;

  case 82: /* ExpressaoLogica: OperadorLogico ExpressaoLogica  */
#line 344 "pascalzin.y"
                                   { (yyval.expressaologica_) = make_ExpressaoLogica4((yyvsp[-1].operadorlogico_), (yyvsp[0].expressaologica_)); result->expressaologica_ = (yyval.expressaologica_); }
#line 1915 "Parser.c"
    break;

  case 83: /* ExpressaoLogica: OperadorLogico ExpressaoLogica RegraLogico  */
#line 345 "pascalzin.y"
                                               { (yyval.expressaologica_) = make_ExpressaoLogica5((yyvsp[-2].operadorlogico_), (yyvsp[-1].expressaologica_), (yyvsp[0].regralogico_)); result->expressaologica_ = (yyval.expressaologica_); }
#line 1921 "Parser.c"
    break;

  case 84: /* RegraLogico: OperadorLogico ExpressaoLogica  */
#line 347 "pascalzin.y"
                                             { (yyval.regralogico_) = make_RegraLogico1((yyvsp[-1].operadorlogico_), (yyvsp[0].expressaologica_)); result->regralogico_ = (yyval.regralogico_); }
#line 1927 "Parser.c"
    break;

  case 85: /* RegraLogico: OperadorLogico ExpressaoLogica RegraLogico  */
#line 348 "pascalzin.y"
                                               { (yyval.regralogico_) = make_RegraLogico2((yyvsp[-2].operadorlogico_), (yyvsp[-1].expressaologica_), (yyvsp[0].regralogico_)); result->regralogico_ = (yyval.regralogico_); }
#line 1933 "Parser.c"
    break;


#line 1937 "Parser.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (&yylloc, scanner, result, YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, scanner, result);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, scanner, result);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, scanner, result, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, scanner, result);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, scanner, result);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 351 "pascalzin.y"



/* Entrypoint: parse Entry from file. */
Entry pEntry(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.entry_;
  }
}

/* Entrypoint: parse Entry from string. */
Entry psEntry(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.entry_;
  }
}

/* Entrypoint: parse BlocoConstante from file. */
BlocoConstante pBlocoConstante(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.blococonstante_;
  }
}

/* Entrypoint: parse BlocoConstante from string. */
BlocoConstante psBlocoConstante(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.blococonstante_;
  }
}

/* Entrypoint: parse RegraBlocoConstante from file. */
RegraBlocoConstante pRegraBlocoConstante(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.regrablococonstante_;
  }
}

/* Entrypoint: parse RegraBlocoConstante from string. */
RegraBlocoConstante psRegraBlocoConstante(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.regrablococonstante_;
  }
}

/* Entrypoint: parse BlocoTipo from file. */
BlocoTipo pBlocoTipo(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.blocotipo_;
  }
}

/* Entrypoint: parse BlocoTipo from string. */
BlocoTipo psBlocoTipo(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.blocotipo_;
  }
}

/* Entrypoint: parse RegraBlocoTipo from file. */
RegraBlocoTipo pRegraBlocoTipo(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.regrablocotipo_;
  }
}

/* Entrypoint: parse RegraBlocoTipo from string. */
RegraBlocoTipo psRegraBlocoTipo(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.regrablocotipo_;
  }
}

/* Entrypoint: parse BlocoVar from file. */
BlocoVar pBlocoVar(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.blocovar_;
  }
}

/* Entrypoint: parse BlocoVar from string. */
BlocoVar psBlocoVar(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.blocovar_;
  }
}

/* Entrypoint: parse RegraBlocoVar from file. */
RegraBlocoVar pRegraBlocoVar(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.regrablocovar_;
  }
}

/* Entrypoint: parse RegraBlocoVar from string. */
RegraBlocoVar psRegraBlocoVar(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.regrablocovar_;
  }
}

/* Entrypoint: parse BlocoComando from file. */
BlocoComando pBlocoComando(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.blococomando_;
  }
}

/* Entrypoint: parse BlocoComando from string. */
BlocoComando psBlocoComando(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.blococomando_;
  }
}

/* Entrypoint: parse RegraComando from file. */
RegraComando pRegraComando(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.regracomando_;
  }
}

/* Entrypoint: parse RegraComando from string. */
RegraComando psRegraComando(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.regracomando_;
  }
}

/* Entrypoint: parse Comando from file. */
Comando pComando(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.comando_;
  }
}

/* Entrypoint: parse Comando from string. */
Comando psComando(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.comando_;
  }
}

/* Entrypoint: parse Atribuicao from file. */
Atribuicao pAtribuicao(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.atribuicao_;
  }
}

/* Entrypoint: parse Atribuicao from string. */
Atribuicao psAtribuicao(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.atribuicao_;
  }
}

/* Entrypoint: parse SubEscrito from file. */
SubEscrito pSubEscrito(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.subescrito_;
  }
}

/* Entrypoint: parse SubEscrito from string. */
SubEscrito psSubEscrito(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.subescrito_;
  }
}

/* Entrypoint: parse RegraTipo from file. */
RegraTipo pRegraTipo(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.regratipo_;
  }
}

/* Entrypoint: parse RegraTipo from string. */
RegraTipo psRegraTipo(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.regratipo_;
  }
}

/* Entrypoint: parse TipoPrimitivo from file. */
TipoPrimitivo pTipoPrimitivo(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.tipoprimitivo_;
  }
}

/* Entrypoint: parse TipoPrimitivo from string. */
TipoPrimitivo psTipoPrimitivo(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.tipoprimitivo_;
  }
}

/* Entrypoint: parse Valor from file. */
Valor pValor(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.valor_;
  }
}

/* Entrypoint: parse Valor from string. */
Valor psValor(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.valor_;
  }
}

/* Entrypoint: parse TipoDerivado from file. */
TipoDerivado pTipoDerivado(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.tipoderivado_;
  }
}

/* Entrypoint: parse TipoDerivado from string. */
TipoDerivado psTipoDerivado(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.tipoderivado_;
  }
}

/* Entrypoint: parse Ponteiro from file. */
Ponteiro pPonteiro(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.ponteiro_;
  }
}

/* Entrypoint: parse Ponteiro from string. */
Ponteiro psPonteiro(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.ponteiro_;
  }
}

/* Entrypoint: parse Vetor from file. */
Vetor pVetor(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.vetor_;
  }
}

/* Entrypoint: parse Vetor from string. */
Vetor psVetor(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.vetor_;
  }
}

/* Entrypoint: parse If from file. */
If pIf(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.if_;
  }
}

/* Entrypoint: parse If from string. */
If psIf(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.if_;
  }
}

/* Entrypoint: parse While from file. */
While pWhile(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.while_;
  }
}

/* Entrypoint: parse While from string. */
While psWhile(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.while_;
  }
}

/* Entrypoint: parse For from file. */
For pFor(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.for_;
  }
}

/* Entrypoint: parse For from string. */
For psFor(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.for_;
  }
}

/* Entrypoint: parse Goto from file. */
Goto pGoto(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.goto_;
  }
}

/* Entrypoint: parse Goto from string. */
Goto psGoto(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.goto_;
  }
}

/* Entrypoint: parse Rotulo from file. */
Rotulo pRotulo(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.rotulo_;
  }
}

/* Entrypoint: parse Rotulo from string. */
Rotulo psRotulo(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.rotulo_;
  }
}

/* Entrypoint: parse Struct from file. */
Struct pStruct(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.struct_;
  }
}

/* Entrypoint: parse Struct from string. */
Struct psStruct(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.struct_;
  }
}

/* Entrypoint: parse DefinicaoCampoStruct from file. */
DefinicaoCampoStruct pDefinicaoCampoStruct(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.definicaocampostruct_;
  }
}

/* Entrypoint: parse DefinicaoCampoStruct from string. */
DefinicaoCampoStruct psDefinicaoCampoStruct(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.definicaocampostruct_;
  }
}

/* Entrypoint: parse AtribuicaoStruct from file. */
AtribuicaoStruct pAtribuicaoStruct(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.atribuicaostruct_;
  }
}

/* Entrypoint: parse AtribuicaoStruct from string. */
AtribuicaoStruct psAtribuicaoStruct(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.atribuicaostruct_;
  }
}

/* Entrypoint: parse OperadorRelacional from file. */
OperadorRelacional pOperadorRelacional(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.operadorrelacional_;
  }
}

/* Entrypoint: parse OperadorRelacional from string. */
OperadorRelacional psOperadorRelacional(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.operadorrelacional_;
  }
}

/* Entrypoint: parse OperadorLogico from file. */
OperadorLogico pOperadorLogico(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.operadorlogico_;
  }
}

/* Entrypoint: parse OperadorLogico from string. */
OperadorLogico psOperadorLogico(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.operadorlogico_;
  }
}

/* Entrypoint: parse OperadorAritmetico from file. */
OperadorAritmetico pOperadorAritmetico(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.operadoraritmetico_;
  }
}

/* Entrypoint: parse OperadorAritmetico from string. */
OperadorAritmetico psOperadorAritmetico(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.operadoraritmetico_;
  }
}

/* Entrypoint: parse Case from file. */
Case pCase(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.case_;
  }
}

/* Entrypoint: parse Case from string. */
Case psCase(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.case_;
  }
}

/* Entrypoint: parse RegraSeletor from file. */
RegraSeletor pRegraSeletor(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.regraseletor_;
  }
}

/* Entrypoint: parse RegraSeletor from string. */
RegraSeletor psRegraSeletor(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.regraseletor_;
  }
}

/* Entrypoint: parse Seletor from file. */
Seletor pSeletor(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.seletor_;
  }
}

/* Entrypoint: parse Seletor from string. */
Seletor psSeletor(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.seletor_;
  }
}

/* Entrypoint: parse Funcao from file. */
Funcao pFuncao(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.funcao_;
  }
}

/* Entrypoint: parse Funcao from string. */
Funcao psFuncao(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.funcao_;
  }
}

/* Entrypoint: parse Procedimento from file. */
Procedimento pProcedimento(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.procedimento_;
  }
}

/* Entrypoint: parse Procedimento from string. */
Procedimento psProcedimento(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.procedimento_;
  }
}

/* Entrypoint: parse ExpressaoAritmetica from file. */
ExpressaoAritmetica pExpressaoAritmetica(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expressaoaritmetica_;
  }
}

/* Entrypoint: parse ExpressaoAritmetica from string. */
ExpressaoAritmetica psExpressaoAritmetica(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expressaoaritmetica_;
  }
}

/* Entrypoint: parse Operando from file. */
Operando pOperando(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.operando_;
  }
}

/* Entrypoint: parse Operando from string. */
Operando psOperando(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.operando_;
  }
}

/* Entrypoint: parse RegraAritmetica from file. */
RegraAritmetica pRegraAritmetica(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.regraaritmetica_;
  }
}

/* Entrypoint: parse RegraAritmetica from string. */
RegraAritmetica psRegraAritmetica(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.regraaritmetica_;
  }
}

/* Entrypoint: parse ExpressaoRelacional from file. */
ExpressaoRelacional pExpressaoRelacional(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expressaorelacional_;
  }
}

/* Entrypoint: parse ExpressaoRelacional from string. */
ExpressaoRelacional psExpressaoRelacional(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expressaorelacional_;
  }
}

/* Entrypoint: parse RegraRelacional from file. */
RegraRelacional pRegraRelacional(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.regrarelacional_;
  }
}

/* Entrypoint: parse RegraRelacional from string. */
RegraRelacional psRegraRelacional(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.regrarelacional_;
  }
}

/* Entrypoint: parse ExpressaoLogica from file. */
ExpressaoLogica pExpressaoLogica(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expressaologica_;
  }
}

/* Entrypoint: parse ExpressaoLogica from string. */
ExpressaoLogica psExpressaoLogica(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expressaologica_;
  }
}

/* Entrypoint: parse RegraLogico from file. */
RegraLogico pRegraLogico(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.regralogico_;
  }
}

/* Entrypoint: parse RegraLogico from string. */
RegraLogico psRegraLogico(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = pascalzin__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = pascalzin__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  pascalzin__delete_buffer(buf, scanner);
  pascalzin_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.regralogico_;
  }
}



