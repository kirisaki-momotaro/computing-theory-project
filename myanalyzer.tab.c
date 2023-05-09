/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "myanalyzer.y"

	#include <stdio.h>
  #include "cgen.h"
  #include <string.h>
	#include "thetalib.h"
	extern int yylex(void);


	char  comp_function_under[10000000];	
	
	char * comp_to_append=NULL;

#line 83 "myanalyzer.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_MYANALYZER_TAB_H_INCLUDED
# define YY_YY_MYANALYZER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TK_STRING = 258,
    TK_IDENT = 259,
    TK_INT = 260,
    TK_REAL = 261,
    TK_ASSGN = 262,
    KW_HASH = 263,
    KW_IF = 264,
    KW_ELSE = 265,
    KW_INTEGER = 266,
    KW_FALSE = 267,
    KW_FOR = 268,
    KW_BREAK = 269,
    KW_DEF = 270,
    KW_ENDCOMP = 271,
    KW_SCALAR = 272,
    KW_CONST = 273,
    KW_IN = 274,
    KW_CONTINUE = 275,
    KW_ENDDEF = 276,
    KW_STR = 277,
    KW_ENDFOR = 278,
    KW_NOT = 279,
    KW_MAIN = 280,
    KW_BOOLEAN = 281,
    KW_WHILE = 282,
    KW_AND = 283,
    KW_RETURN = 284,
    KW_TRUE = 285,
    KW_ENDIF = 286,
    KW_ENDWHILE = 287,
    KW_OR = 288,
    KW_COMP = 289,
    KW_VOID = 290,
    OP_PLUS = 291,
    OP_MINUS = 292,
    OP_MUL = 293,
    OP_DIV = 294,
    OP_MOD = 295,
    OP_POWER = 296,
    OP_EQ = 297,
    OP_INEQ = 298,
    OP_LESS = 299,
    OP_EQLESS = 300,
    OP_MORE = 301,
    OP_EQMORE = 302,
    OP_ASSIGN = 303,
    OP_PLUSEQ = 304,
    OP_MINUSEQ = 305,
    OP_MULEQ = 306,
    OP_DIVEQ = 307,
    OP_MODEQ = 308,
    OP_POINTER = 309,
    OP_PAR_L = 310,
    OP_PAR_R = 311,
    OP_SEMI = 312,
    OP_COMA = 313,
    OP_BRA_L = 314,
    OP_BRA_R = 315,
    OP_DOT = 316,
    OP_MEAN = 317
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "myanalyzer.y"

	char* str;

#line 202 "myanalyzer.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYANALYZER_TAB_H_INCLUDED  */



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
typedef yytype_int16 yy_state_t;

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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2335

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  153
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  377

#define YYUNDEFTOK  2
#define YYMAXUTOK   317


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   140,   140,   150,   154,   155,   156,   157,   161,   169,
     170,   175,   178,   179,   180,   181,   184,   189,   190,   191,
     192,   193,   196,   198,   199,   201,   202,   205,   206,   207,
     211,   212,   217,   218,   222,   223,   224,   225,   226,   229,
     230,   231,   232,   233,   236,   238,   239,   249,   250,   251,
     254,   255,   258,   260,   261,   266,   267,   271,   273,   275,
     282,   285,   286,   287,   291,   292,   298,   299,   303,   307,
     310,   311,   312,   319,   322,   323,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   358,
     359,   365,   366,   367,   371,   372,   373,   374,   375,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   403,   404,   407,
     409,   414,   415,   416,   417,   425,   433,   434,   435,   436,
     437,   440,   442,   443,   448,   450,   452,   459,   460,   461,
     473,   474,   476,   477
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_STRING", "TK_IDENT", "TK_INT",
  "TK_REAL", "TK_ASSGN", "KW_HASH", "KW_IF", "KW_ELSE", "KW_INTEGER",
  "KW_FALSE", "KW_FOR", "KW_BREAK", "KW_DEF", "KW_ENDCOMP", "KW_SCALAR",
  "KW_CONST", "KW_IN", "KW_CONTINUE", "KW_ENDDEF", "KW_STR", "KW_ENDFOR",
  "KW_NOT", "KW_MAIN", "KW_BOOLEAN", "KW_WHILE", "KW_AND", "KW_RETURN",
  "KW_TRUE", "KW_ENDIF", "KW_ENDWHILE", "KW_OR", "KW_COMP", "KW_VOID",
  "OP_PLUS", "OP_MINUS", "OP_MUL", "OP_DIV", "OP_MOD", "OP_POWER", "OP_EQ",
  "OP_INEQ", "OP_LESS", "OP_EQLESS", "OP_MORE", "OP_EQMORE", "OP_ASSIGN",
  "OP_PLUSEQ", "OP_MINUSEQ", "OP_MULEQ", "OP_DIVEQ", "OP_MODEQ",
  "OP_POINTER", "OP_PAR_L", "OP_PAR_R", "OP_SEMI", "OP_COMA", "OP_BRA_L",
  "OP_BRA_R", "OP_DOT", "OP_MEAN", "$accept", "input", "compiler",
  "final_program", "main", "program", "global_declarations",
  "func_declaration", "func_parameters", "function_code", "main_program",
  "local_declarations", "var_declarations", "conditions", "while_loop",
  "for_loop", "variable_types", "comp_types_of_declarations", "expr",
  "legal_array_index", "data_types", "types", "operators", "comp_code",
  "comp_local_declarations", "comp_initialise_local_declarations",
  "comp_var_declarations", "comp_initialise_types_of_declarations",
  "comp_function_code", "comp_func_declaration", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317
};
# endif

#define YYPACT_NINF (-252)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-148)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,  -252,    34,    16,    71,    40,    72,  -252,  -252,  1348,
      11,  -252,   778,  -252,   -27,    41,  -252,    22,    23,  -252,
      28,    53,  -252,  -252,  -252,  -252,    55,  -252,    92,    80,
      87,    76,  -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,
    -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,
    -252,  1462,  1462,  -252,  1462,   835,  -252,  -252,    18,    95,
     106,    25,  1808,  1462,  1348,  -252,  1462,   379,  -252,  1462,
     136,    71,    48,    10,    78,  1716,    77,  1462,   127,  -252,
    -252,  1462,    49,  2274,  1839,  1870,    91,  -252,    88,    97,
      98,   100,  1405,    93,  1462,  1462,  1462,  1462,  1462,  1462,
    1462,  1462,  1462,  1462,  1462,  1462,  1462,  1462,  1462,  1462,
    1462,  1462,  1462,  1462,  -252,  1462,  1462,  2274,   892,  1902,
     101,  1519,  -252,    52,  1933,  -252,  -252,   103,   102,  -252,
    -252,  -252,  -252,  -252,   131,    64,   -19,     5,   122,  -252,
    -252,  -252,   128,   114,   188,   189,   186,    73,  -252,  -252,
    -252,    51,   436,  1964,   137,  1995,    93,  -252,  -252,    19,
    1348,  -252,  -252,  -252,  -252,  2026,  -252,   138,   139,   140,
    2274,  2274,  2274,  2274,  2274,  2274,  2274,  2274,  2274,  2274,
    2274,  2274,  2274,  2274,  2274,  2274,  2274,  2274,  2274,  2274,
    2274,  2274,   141,   180,  -252,   181,  2057,    93,  -252,    -8,
     136,  -252,   143,    48,   159,  -252,   -15,   204,  -252,    48,
     147,     3,   155,   207,    42,   158,  -252,   208,    48,  1462,
    -252,   493,   150,  1462,   157,   160,   213,    19,   550,  -252,
    -252,   163,  -252,    -8,    19,   167,   168,   205,   169,  1462,
      48,   170,   171,  -252,    48,   185,  -252,    66,   175,    48,
    1576,   136,    12,  -252,  1716,  -252,   231,   179,  2088,   183,
    1633,  -252,   607,  1777,   949,  -252,  -252,    19,  -252,  -252,
     184,   190,    57,  2119,   192,  -252,    48,   176,    13,   177,
      48,  -252,   193,   187,  2150,   191,   -12,    74,   194,   114,
     195,  -252,   222,  -252,   224,  2181,   664,  -252,   721,  1462,
    1006,  1063,  -252,  -252,    93,  -252,  -252,  -252,  -252,   197,
     199,   203,  -252,  -252,   136,  -252,    -6,   220,  -252,    -4,
      48,   206,   136,   212,   214,   251,  1746,   215,  -252,  -252,
      48,   216,  1690,    48,    48,   227,  -252,   217,    48,   218,
    -252,  -252,   226,   219,  1462,   228,  -252,   229,   273,  2212,
     230,   233,    48,  -252,   235,  -252,  -252,  1120,  2243,  -252,
    -252,   238,  -252,  -252,  -252,   240,  -252,  1177,  1234,   243,
     136,  -252,  1348,   246,  1291,   250,  -252
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    55,     0,     0,     0,     0,     0,     2,     3,    60,
       0,     9,    27,    11,    57,     0,    56,     0,     0,    57,
       0,     0,     1,    61,    62,    63,     0,    65,     0,     0,
       0,     0,    64,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    60,    60,    98,    60,    60,    30,    32,     0,     0,
       0,    69,     0,    60,    60,    10,    60,    60,    28,    60,
       0,     0,     0,    22,     0,     0,   129,    60,     0,    37,
      38,    60,    69,    73,     0,     0,     0,    31,     0,     0,
       0,     0,    60,     0,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    33,    60,    60,    68,    60,     0,
       0,    60,    29,    69,     0,   100,    99,     0,    58,   108,
     105,   106,   104,   107,     0,     0,     0,     0,     0,   102,
     101,   103,     0,     0,     0,     0,     0,     0,   127,   130,
     135,     0,    60,     0,     0,     0,     0,    96,    97,     7,
      60,    34,    35,    36,    66,     0,    55,     0,     0,     0,
      90,    88,    89,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    91,    92,    93,    94,    95,
      74,    75,     0,     0,    15,    98,     0,     0,    39,     0,
       0,    44,     0,     0,     0,    21,     0,     0,     8,     0,
       0,   144,     0,     0,     0,     0,   128,     0,     0,    60,
     148,    60,     0,    60,     0,     0,     0,     6,    60,    67,
      56,     0,    72,    70,     5,     0,     0,     0,     0,    60,
       0,     0,     0,    23,     0,     0,    19,     0,     0,     0,
      60,     0,    22,   144,     0,    16,     0,     0,     0,     0,
      60,   149,    60,     0,    60,    70,    71,     4,    14,    12,
       0,    70,    69,     0,     0,    59,     0,     0,     0,     0,
       0,    45,     0,    55,     0,     0,     0,     0,     0,     0,
     145,   141,     0,   134,    98,     0,    60,    30,    60,    60,
      60,    60,    13,    42,     0,    40,    43,    25,    20,     0,
       0,     0,    24,    46,     0,   136,     0,     0,   153,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    18,    17,
       0,     0,    60,     0,     0,     0,   151,     0,     0,     0,
     133,   131,     0,     0,    60,    70,    26,     0,     0,     0,
       0,     0,     0,   142,     0,   146,   132,    60,     0,    41,
     139,    56,   137,   140,   152,     0,   143,    60,    60,     0,
       0,   150,    60,     0,    60,     0,   138
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -252,  -252,  -252,  -252,   269,  -152,    -9,  -252,    38,  -252,
     -58,    -7,    36,  -252,  -252,  -252,     0,   284,    70,   -62,
    -140,     4,   -67,  -252,   164,  -252,  -252,   166,  -251,  -252
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,     9,    10,    11,    12,   137,    67,
      55,    87,    57,    58,    59,    60,    82,    15,    62,   127,
     142,   134,    63,   147,   148,   149,   150,   151,   221,   152
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      14,    65,    56,   210,    19,    68,   118,   227,   143,    61,
      14,   298,    61,   301,   135,     1,   135,   129,   204,     2,
      17,    69,   245,     1,   130,   317,     3,     2,    88,     4,
     131,   169,    70,   335,   226,   132,    13,     4,    16,   133,
     239,    18,   332,   205,    21,     5,    13,   246,   309,    89,
     318,   250,   129,     5,   240,    61,   333,    56,   336,   130,
     122,   206,   251,   207,    61,   131,   136,    61,   286,   123,
     132,   128,    22,    69,   133,     1,    75,    73,    74,     2,
      92,   144,   267,   -57,    93,   144,    71,   -57,   145,   215,
     254,   146,   145,   168,   225,   146,    78,   166,   126,    71,
     217,   167,   228,    72,    92,   231,   368,    92,   156,   217,
      77,   197,    92,   218,   288,    76,   304,   139,    61,   140,
     141,    83,    84,   202,    85,   279,   203,    90,   280,    91,
     319,    81,   207,   117,   138,   238,   119,    79,   241,   124,
     125,   126,   230,   126,    80,   220,   154,   153,   159,   321,
     160,   155,    61,    56,   161,   162,   168,   163,   194,    14,
      61,   200,   165,   199,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   208,   190,   191,   289,   201,   285,
     209,   196,   211,   212,   213,    13,   223,   168,   234,   232,
     233,   235,   236,   242,   296,   244,   300,   243,   247,   249,
     252,   253,   262,   248,   261,   255,   256,    17,    65,   264,
     265,    61,   257,   266,   268,   269,   270,    14,    61,   271,
     275,   278,   281,   276,    14,   290,   291,   311,   308,   272,
     293,   302,   327,   323,   274,   324,   314,   303,   277,   306,
     313,   316,   331,   282,   322,   297,   320,   297,    65,   328,
     339,   329,    61,    13,    61,   330,   334,    14,   338,   340,
      13,   341,   342,   352,   353,   345,   347,   361,   355,    64,
     307,   357,   310,   356,   312,   359,   360,   363,    20,   258,
     287,   261,   366,   263,   261,   364,    61,   370,    61,   367,
      61,    61,   371,    13,   168,   372,   375,   376,   373,   273,
       0,   216,   214,     0,   374,     0,     0,     0,     0,     0,
     284,     0,     0,     0,   337,     0,     0,     0,     0,     0,
     295,     0,     0,     0,   346,     0,     0,   350,   351,     0,
       0,     0,   354,     0,     0,     0,     0,     0,     0,     0,
     297,     0,     0,     0,     0,     0,   365,    61,     0,     0,
       0,   261,     0,     0,     0,    56,     0,    61,    61,   326,
       0,     0,    61,     0,    61,     0,     0,     0,     0,     0,
       0,     0,    23,     1,    24,    25,     0,     2,    26,     0,
       0,    27,    28,    29,     0,     0,     0,     4,     0,    30,
     120,     0,   349,     0,     0,     0,    31,     0,   121,    32,
       0,     0,     0,     0,   358,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,     0,    53,     0,    54,    23,
       1,    24,    25,     0,     2,    26,     0,     0,    27,    28,
      29,     0,     0,     0,     4,     0,    30,  -147,     0,     0,
       0,     0,     0,    31,     0,   219,    32,     0,     0,     0,
       0,     0,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,     0,    53,     0,    54,    23,     1,    24,    25,
       0,     2,    26,     0,     0,    27,    28,    29,     0,     0,
       0,     4,     0,    30,   259,     0,     0,     0,     0,     0,
      31,     0,   260,    32,     0,     0,     0,     0,     0,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,     0,
      53,     0,    54,    23,     1,    24,    25,     0,     2,    26,
     -49,     0,    27,    28,    29,     0,     0,     0,     4,     0,
      30,     0,     0,     0,     0,     0,     0,    31,     0,     0,
      32,   -49,     0,     0,     0,     0,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,     0,    53,     0,    54,
      23,     1,    24,    25,     0,     2,    26,  -147,     0,    27,
      28,    29,     0,     0,     0,     4,     0,    30,     0,     0,
       0,     0,     0,     0,    31,     0,     0,    32,  -147,     0,
       0,     0,     0,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,     0,    53,     0,    54,    23,     1,    24,
      25,     0,     2,    26,   -47,     0,    27,    28,    29,     0,
       0,     0,     4,     0,    30,     0,     0,     0,     0,     0,
       0,    31,     0,     0,    32,   -47,     0,     0,     0,     0,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
       0,    53,     0,    54,    23,     1,    24,    25,     0,     2,
      26,   -48,     0,    27,    28,    29,     0,     0,     0,     4,
       0,    30,     0,     0,     0,     0,     0,     0,    31,     0,
       0,    32,   -48,     0,     0,     0,     0,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,     0,    53,     0,
      54,    23,     1,    24,    25,     0,     2,    26,     0,     0,
      27,    28,    29,     0,     0,     0,     4,     0,    30,     0,
       0,     0,     0,     0,     0,    31,     0,    66,    32,     0,
       0,     0,     0,     0,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,     0,    53,     0,    54,    23,     1,
      24,    25,     0,     2,    26,     0,     0,    27,    28,    29,
       0,     0,     0,     4,     0,    30,    86,     0,     0,     0,
       0,     0,    31,     0,     0,    32,     0,     0,     0,     0,
       0,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,     0,    53,     0,    54,    23,     1,    24,    25,     0,
       2,    26,     0,     0,    27,    28,    29,     0,     0,     0,
       4,     0,    30,   192,     0,     0,     0,     0,     0,    31,
       0,     0,    32,     0,     0,     0,     0,     0,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,     0,    53,
       0,    54,    23,     1,    24,    25,     0,     2,    26,     0,
       0,    27,    28,    29,     0,     0,     0,     4,     0,    30,
       0,     0,     0,     0,     0,     0,    31,     0,     0,    32,
       0,  -147,     0,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,     0,    53,     0,    54,    23,
       1,    24,    25,     0,     2,    26,     0,     0,    27,    28,
      29,     0,     0,     0,     4,     0,    30,     0,     0,     0,
       0,     0,     0,    31,     0,     0,    32,     0,   -50,     0,
       0,     0,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,     0,    53,     0,    54,    23,     1,    24,    25,
       0,     2,    26,     0,     0,    27,    28,    29,     0,     0,
       0,     4,     0,    30,     0,     0,     0,     0,     0,     0,
      31,     0,     0,    32,     0,   -51,     0,     0,     0,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,     0,
      53,     0,    54,    23,     1,    24,    25,     0,     2,    26,
       0,     0,    27,    28,    29,     0,     0,     0,     4,     0,
      30,     0,     0,  -147,     0,     0,     0,    31,     0,     0,
      32,     0,     0,     0,     0,     0,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,     0,    53,     0,    54,
      23,     1,    24,    25,     0,     2,    26,     0,     0,    27,
      28,    29,     0,     0,     0,     4,     0,    30,     0,     0,
     -52,     0,     0,     0,    31,     0,     0,    32,     0,     0,
       0,     0,     0,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,     0,    53,     0,    54,    23,     1,    24,
      25,     0,     2,    26,     0,     0,    27,    28,    29,     0,
       0,     0,     4,     0,    30,     0,     0,   -53,     0,     0,
       0,    31,     0,     0,    32,     0,     0,     0,     0,     0,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
       0,    53,     0,    54,    23,     1,    24,    25,     0,     2,
      26,     0,     0,    27,    28,    29,     0,     0,     0,     4,
       0,    30,     0,     0,   -54,     0,     0,     0,    31,     0,
       0,    32,     0,     0,     0,     0,     0,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,     0,    53,     0,
      54,    23,     1,    24,    25,     0,     2,    26,     0,     0,
      27,    28,    29,     0,     0,     0,     4,     0,    30,     0,
       0,     0,     0,     0,     0,    31,     0,     0,    32,     0,
       0,     0,     0,     0,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,     0,    53,     0,    54,    23,     1,
      24,    25,     0,     2,     0,     0,     0,    27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,     0,     0,     0,     0,
       0,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,   164,    53,     0,    54,    23,     1,    24,    25,     0,
       2,     0,     0,     0,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,     0,     0,     0,     0,     0,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,     0,    53,
       0,    54,    23,     1,    24,    25,     0,     2,     0,     0,
       0,    27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
       0,     0,     0,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,     0,   195,     0,    54,    23,
     283,    24,    25,     0,     2,     0,     0,     0,    27,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,     0,     0,     0,
       0,     0,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,     0,    53,     0,    54,    23,     1,    24,    25,
       0,     2,     0,     0,     0,    27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    32,     0,     0,     0,     0,     0,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,     0,
     294,     0,    54,    23,     1,    24,    25,     0,   348,     0,
       0,     0,    27,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   139,
      32,   140,   141,     0,     0,     0,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,     0,    53,     0,    54,
       0,     0,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      94,     0,     0,     0,    95,     0,     0,     0,     0,    96,
       0,     0,    97,    98,    99,   100,   101,     0,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
       0,    94,     0,     0,   115,    95,   343,   116,   344,     0,
      96,     0,     0,    97,    98,    99,   100,   101,     0,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,     0,    94,     0,     0,   115,    95,     0,   116,   299,
       0,    96,     0,     0,    97,    98,    99,   100,   101,     0,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,     0,    94,     0,   114,   115,    95,     0,   116,
       0,     0,    96,     0,     0,    97,    98,    99,   100,   101,
       0,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,     0,    94,   157,     0,   115,    95,     0,
     116,     0,     0,    96,     0,     0,    97,    98,    99,   100,
     101,     0,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,     0,     0,    94,     0,   115,   158,
      95,   116,     0,     0,     0,    96,     0,     0,    97,    98,
      99,   100,   101,     0,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,     0,    94,     0,   193,
     115,    95,     0,   116,     0,     0,    96,     0,     0,    97,
      98,    99,   100,   101,     0,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,     0,    94,     0,
     198,   115,    95,     0,   116,     0,     0,    96,     0,     0,
      97,    98,    99,   100,   101,     0,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,     0,    94,
     222,     0,   115,    95,     0,   116,     0,     0,    96,     0,
       0,    97,    98,    99,   100,   101,     0,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,     0,
      94,   224,     0,   115,    95,     0,   116,     0,     0,    96,
       0,     0,    97,    98,    99,   100,   101,     0,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
       0,    94,   229,     0,   115,    95,     0,   116,     0,     0,
      96,     0,     0,    97,    98,    99,   100,   101,     0,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,     0,    94,     0,   237,   115,    95,     0,   116,     0,
       0,    96,     0,     0,    97,    98,    99,   100,   101,     0,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,     0,    94,     0,   292,   115,    95,     0,   116,
       0,     0,    96,     0,     0,    97,    98,    99,   100,   101,
       0,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,     0,    94,     0,   305,   115,    95,     0,
     116,     0,     0,    96,     0,     0,    97,    98,    99,   100,
     101,     0,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,     0,    94,     0,   315,   115,    95,
       0,   116,     0,     0,    96,     0,     0,    97,    98,    99,
     100,   101,     0,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,     0,    94,     0,   325,   115,
      95,     0,   116,     0,     0,    96,     0,     0,    97,    98,
      99,   100,   101,     0,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,     0,    94,     0,   362,
     115,    95,     0,   116,     0,     0,    96,     0,     0,    97,
      98,    99,   100,   101,     0,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,     0,    94,     0,
       0,   115,    95,   369,   116,     0,     0,    96,     0,     0,
      97,    98,    99,   100,   101,     0,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,     0,     0,
       0,     0,   115,     0,     0,   116
};

static const yytype_int16 yycheck[] =
{
       0,    10,     9,   143,     4,    12,    64,   159,    75,     9,
      10,   262,    12,   264,     4,     4,     4,     4,    37,     8,
       4,    48,    37,     4,    11,    37,    15,     8,    10,    18,
      17,    93,    59,    37,    15,    22,     0,    18,     4,    26,
      48,    25,    48,    62,     4,    34,    10,    62,    35,    31,
      62,    48,     4,    34,    62,    55,    62,    64,    62,    11,
      67,    56,    59,    58,    64,    17,    56,    67,    56,    69,
      22,    71,     0,    48,    26,     4,    48,    55,    55,     8,
      55,     8,   234,    58,    59,     8,    58,    62,    15,    16,
      48,    18,    15,    93,   156,    18,     4,     4,     5,    58,
      58,     8,   160,    62,    55,   167,   357,    55,    59,    58,
      55,    59,    55,    62,   254,    62,    59,     3,   118,     5,
       6,    51,    52,    59,    54,    59,    62,    32,    62,    23,
      56,    55,    58,    63,    56,   197,    66,    57,   200,    69,
       4,     5,     4,     5,    57,   152,    19,    77,    57,   289,
      62,    81,   152,   160,    57,    57,   156,    57,    57,   159,
     160,    59,    92,    60,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    62,   115,   116,   254,    57,   251,
      62,   121,     4,     4,     8,   159,    59,   197,    57,    60,
      60,    21,    21,    60,   262,    46,   264,   203,     4,    62,
      55,     4,    62,   209,   221,    57,     8,     4,   227,    62,
      60,   221,   218,    60,    57,    57,    21,   227,   228,    60,
      60,    46,    57,    62,   234,     4,    57,    60,    62,   239,
      57,    57,   304,    21,   240,    21,    59,    57,   244,    57,
      57,    60,   314,   249,    59,   262,    62,   264,   267,    62,
     322,    62,   262,   227,   264,    62,    46,   267,    62,    57,
     234,    57,    21,    46,    57,    60,    60,     4,    60,    10,
     276,    62,   278,    57,   280,    57,    57,    57,     4,   219,
     252,   298,    57,   223,   301,    62,   296,    59,   298,   357,
     300,   301,    62,   267,   304,    62,    60,    57,   370,   239,
      -1,   147,   146,    -1,   372,    -1,    -1,    -1,    -1,    -1,
     250,    -1,    -1,    -1,   320,    -1,    -1,    -1,    -1,    -1,
     260,    -1,    -1,    -1,   330,    -1,    -1,   333,   334,    -1,
      -1,    -1,   338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     357,    -1,    -1,    -1,    -1,    -1,   352,   357,    -1,    -1,
      -1,   368,    -1,    -1,    -1,   372,    -1,   367,   368,   299,
      -1,    -1,   372,    -1,   374,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    12,    13,    14,    -1,    -1,    -1,    18,    -1,    20,
      21,    -1,   332,    -1,    -1,    -1,    27,    -1,    29,    30,
      -1,    -1,    -1,    -1,   344,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,    -1,    59,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    12,    13,
      14,    -1,    -1,    -1,    18,    -1,    20,    21,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    29,    30,    -1,    -1,    -1,
      -1,    -1,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    -1,    59,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    12,    13,    14,    -1,    -1,
      -1,    18,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    29,    30,    -1,    -1,    -1,    -1,    -1,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    -1,    59,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    14,    -1,    -1,    -1,    18,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      30,    31,    -1,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    -1,    59,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    14,    -1,    -1,    -1,    18,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    57,    -1,    59,     3,     4,     5,
       6,    -1,     8,     9,    10,    -1,    12,    13,    14,    -1,
      -1,    -1,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,    -1,    59,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    12,    13,    14,    -1,    -1,    -1,    18,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    30,    31,    -1,    -1,    -1,    -1,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    57,    -1,
      59,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      12,    13,    14,    -1,    -1,    -1,    18,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    29,    30,    -1,
      -1,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,    -1,    59,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    12,    13,    14,
      -1,    -1,    -1,    18,    -1,    20,    21,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    -1,    59,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    12,    13,    14,    -1,    -1,    -1,
      18,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      -1,    59,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    12,    13,    14,    -1,    -1,    -1,    18,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    30,
      -1,    32,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,    -1,    59,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    12,    13,
      14,    -1,    -1,    -1,    18,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    30,    -1,    32,    -1,
      -1,    -1,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    -1,    59,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    12,    13,    14,    -1,    -1,
      -1,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    30,    -1,    32,    -1,    -1,    -1,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    -1,    59,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    12,    13,    14,    -1,    -1,    -1,    18,    -1,
      20,    -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    -1,    59,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    12,
      13,    14,    -1,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    27,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    57,    -1,    59,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    12,    13,    14,    -1,
      -1,    -1,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    27,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,    -1,    59,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    12,    13,    14,    -1,    -1,    -1,    18,
      -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    27,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    57,    -1,
      59,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      12,    13,    14,    -1,    -1,    -1,    18,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,    -1,    59,     3,     4,
       5,     6,    -1,     8,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    59,     3,     4,     5,     6,    -1,
       8,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      -1,    59,     3,     4,     5,     6,    -1,     8,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,    -1,    59,     3,
       4,     5,     6,    -1,     8,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    -1,    59,     3,     4,     5,     6,
      -1,     8,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    -1,    59,     3,     4,     5,     6,    -1,     8,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      30,     5,     6,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    -1,    59,
      -1,    -1,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      24,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    36,    37,    38,    39,    40,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    24,    -1,    -1,    58,    28,    60,    61,    62,    -1,
      33,    -1,    -1,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    24,    -1,    -1,    58,    28,    -1,    61,    62,
      -1,    33,    -1,    -1,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    24,    -1,    57,    58,    28,    -1,    61,
      -1,    -1,    33,    -1,    -1,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    24,    56,    -1,    58,    28,    -1,
      61,    -1,    -1,    33,    -1,    -1,    36,    37,    38,    39,
      40,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    -1,    24,    -1,    58,    59,
      28,    61,    -1,    -1,    -1,    33,    -1,    -1,    36,    37,
      38,    39,    40,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    24,    -1,    57,
      58,    28,    -1,    61,    -1,    -1,    33,    -1,    -1,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    24,    -1,
      57,    58,    28,    -1,    61,    -1,    -1,    33,    -1,    -1,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    24,
      56,    -1,    58,    28,    -1,    61,    -1,    -1,    33,    -1,
      -1,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      24,    56,    -1,    58,    28,    -1,    61,    -1,    -1,    33,
      -1,    -1,    36,    37,    38,    39,    40,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    24,    56,    -1,    58,    28,    -1,    61,    -1,    -1,
      33,    -1,    -1,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    24,    -1,    57,    58,    28,    -1,    61,    -1,
      -1,    33,    -1,    -1,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    24,    -1,    57,    58,    28,    -1,    61,
      -1,    -1,    33,    -1,    -1,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    24,    -1,    57,    58,    28,    -1,
      61,    -1,    -1,    33,    -1,    -1,    36,    37,    38,    39,
      40,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    24,    -1,    57,    58,    28,
      -1,    61,    -1,    -1,    33,    -1,    -1,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    24,    -1,    57,    58,
      28,    -1,    61,    -1,    -1,    33,    -1,    -1,    36,    37,
      38,    39,    40,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    24,    -1,    57,
      58,    28,    -1,    61,    -1,    -1,    33,    -1,    -1,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    24,    -1,
      -1,    58,    28,    60,    61,    -1,    -1,    33,    -1,    -1,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    61
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     8,    15,    18,    34,    64,    65,    66,    67,
      68,    69,    70,    75,    79,    80,     4,     4,    25,    79,
      80,     4,     0,     3,     5,     6,     9,    12,    13,    14,
      20,    27,    30,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    57,    59,    73,    74,    75,    76,    77,
      78,    79,    81,    85,    67,    69,    29,    72,    74,    48,
      59,    58,    62,    55,    55,    48,    62,    55,     4,    57,
      57,    55,    79,    81,    81,    81,    21,    74,    10,    31,
      32,    23,    55,    59,    24,    28,    33,    36,    37,    38,
      39,    40,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    57,    58,    61,    81,    73,    81,
      21,    29,    74,    79,    81,     4,     5,    82,    79,     4,
      11,    17,    22,    26,    84,     4,    56,    71,    56,     3,
       5,     6,    83,    85,     8,    15,    18,    86,    87,    88,
      89,    90,    92,    81,    19,    81,    59,    56,    59,    57,
      62,    57,    57,    57,    56,    81,     4,     8,    79,    82,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    21,    57,    57,    57,    81,    59,    57,    60,
      59,    57,    59,    62,    37,    62,    56,    58,    62,    62,
      83,     4,     4,     8,    90,    16,    87,    58,    62,    29,
      74,    91,    56,    59,    56,    82,    15,    68,    73,    56,
       4,    82,    60,    60,    57,    21,    21,    57,    82,    48,
      62,    82,    60,    84,    46,    37,    62,     4,    84,    62,
      48,    59,    55,     4,    48,    57,     8,    84,    81,    21,
      29,    74,    62,    81,    62,    60,    60,    68,    57,    57,
      21,    60,    79,    81,    84,    60,    62,    84,    46,    59,
      62,    57,    84,     4,    81,    82,    56,    71,    83,    85,
       4,    57,    57,    57,    57,    81,    73,    74,    91,    62,
      73,    91,    57,    57,    59,    57,    57,    84,    62,    35,
      84,    60,    84,    57,    59,    57,    60,    37,    62,    56,
      62,    83,    59,    21,    21,    57,    81,    82,    62,    62,
      62,    82,    48,    62,    46,    37,    62,    84,    62,    82,
      57,    57,    21,    60,    62,    60,    84,    60,     8,    81,
      84,    84,    46,    57,    84,    60,    57,    62,    81,    57,
      57,     4,    57,    57,    62,    84,    57,    73,    91,    60,
      59,    62,    62,    82,    73,    60,    57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    63,    64,    65,    66,    66,    66,    66,    67,    68,
      68,    69,    69,    69,    69,    69,    69,    70,    70,    70,
      70,    70,    71,    71,    71,    71,    71,    72,    72,    72,
      73,    73,    74,    74,    74,    74,    74,    74,    74,    75,
      75,    75,    75,    75,    75,    75,    75,    76,    76,    76,
      77,    77,    78,    78,    78,    79,    79,    80,    80,    80,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    82,
      82,    83,    83,    83,    84,    84,    84,    84,    84,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    86,    86,    87,
      87,    87,    87,    87,    87,    88,    89,    89,    89,    89,
      89,    89,    89,    89,    90,    90,    90,    91,    91,    91,
      92,    92,    92,    92
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     6,     5,     5,     4,     5,     1,
       2,     1,     6,     7,     6,     4,     6,     9,     9,     6,
       8,     5,     0,     3,     5,     5,     7,     0,     1,     2,
       1,     2,     1,     2,     3,     3,     3,     2,     2,     4,
       7,    10,     7,     7,     4,     7,     8,     6,     6,     4,
       6,     6,    10,    10,    12,     1,     2,     1,     3,     6,
       0,     1,     1,     1,     1,     1,     3,     4,     2,     1,
       4,     5,     4,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     0,
       1,     6,     7,     6,     4,     1,     5,     8,    12,     8,
       8,     4,     7,     8,     2,     4,     7,     0,     1,     2,
       9,     6,     8,     5
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

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
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
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
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 141 "myanalyzer.y"
        {
		if (yyerror_count == 0) {
			
			printf("%s\n", (yyvsp[0].str));	
		}
	}
#line 2024 "myanalyzer.tab.c"
    break;

  case 3:
#line 150 "myanalyzer.y"
                     { (yyval.str) = template("#include <stdio.h> \n #include \"cgen.h\"\n #include <string.h> \n	#include \"thetalib.h\"\n  %s", (yyvsp[0].str) );}
#line 2030 "myanalyzer.tab.c"
    break;

  case 4:
#line 154 "myanalyzer.y"
                                                            { (yyval.str) = template("%s%s\n{\n%s}\n%s", (yyvsp[-5].str),(yyvsp[-4].str) ,(yyvsp[-3].str),(yyvsp[0].str));}
#line 2036 "myanalyzer.tab.c"
    break;

  case 5:
#line 155 "myanalyzer.y"
                                                      { (yyval.str) = template("%s%s\n{\n%s}\n", (yyvsp[-4].str),(yyvsp[-3].str) ,(yyvsp[-2].str));}
#line 2042 "myanalyzer.tab.c"
    break;

  case 6:
#line 156 "myanalyzer.y"
                                                     { (yyval.str) = template("%%s\n{\n%s}\n%s", (yyvsp[-4].str),(yyvsp[-3].str) ,(yyvsp[0].str));}
#line 2048 "myanalyzer.tab.c"
    break;

  case 7:
#line 157 "myanalyzer.y"
                                            { (yyval.str) = template("%s\n{\n%s}\n", (yyvsp[-3].str) ,(yyvsp[-2].str));}
#line 2054 "myanalyzer.tab.c"
    break;

  case 8:
#line 161 "myanalyzer.y"
                                                { (yyval.str) = template("int main(int argc, char *argv[])");}
#line 2060 "myanalyzer.tab.c"
    break;

  case 9:
#line 169 "myanalyzer.y"
                           { (yyval.str) = template("%s", (yyvsp[0].str) );}
#line 2066 "myanalyzer.tab.c"
    break;

  case 10:
#line 170 "myanalyzer.y"
                                     { (yyval.str) = template("%s%s", (yyvsp[-1].str),(yyvsp[0].str) );}
#line 2072 "myanalyzer.tab.c"
    break;

  case 11:
#line 175 "myanalyzer.y"
                        { (yyval.str) = template("%s", (yyvsp[0].str));}
#line 2078 "myanalyzer.tab.c"
    break;

  case 12:
#line 178 "myanalyzer.y"
                                                                           { (yyval.str) = template("%s\n\n%s\n return;\n}\n", (yyvsp[-5].str) ,(yyvsp[-4].str));}
#line 2084 "myanalyzer.tab.c"
    break;

  case 13:
#line 179 "myanalyzer.y"
                                                                                { (yyval.str) = template("%s\n{\n%s\n return %s;\n}\n", (yyvsp[-6].str) ,(yyvsp[-5].str),(yyvsp[-3].str));}
#line 2090 "myanalyzer.tab.c"
    break;

  case 14:
#line 180 "myanalyzer.y"
                                                                   { (yyval.str) = template("%s\n{\n return %s;\n}\n", (yyvsp[-5].str) ,(yyvsp[-3].str));}
#line 2096 "myanalyzer.tab.c"
    break;

  case 15:
#line 181 "myanalyzer.y"
                                                         { (yyval.str) = template("%s\n{\n%s\n return;\n}\n", (yyvsp[-3].str) ,(yyvsp[-2].str));}
#line 2102 "myanalyzer.tab.c"
    break;

  case 16:
#line 184 "myanalyzer.y"
                                                              {(yyval.str) = template("#undef SELF \n \n #define SELF struct %s *self \n  typedef struct %s\n {%s\n}%s;\n \n %s \n", (yyvsp[-4].str),(yyvsp[-4].str),(yyvsp[-2].str),(yyvsp[-4].str),comp_function_under);memset(comp_function_under,0,10000000);}
#line 2108 "myanalyzer.tab.c"
    break;

  case 17:
#line 189 "myanalyzer.y"
                                                                                         { (yyval.str) = template("%s %s(%s)",(yyvsp[-1].str),(yyvsp[-7].str),(yyvsp[-5].str));}
#line 2114 "myanalyzer.tab.c"
    break;

  case 18:
#line 190 "myanalyzer.y"
                                                                                           { (yyval.str) = template("%s %s(%s)",(yyvsp[-1].str),(yyvsp[-7].str),(yyvsp[-5].str));}
#line 2120 "myanalyzer.tab.c"
    break;

  case 19:
#line 191 "myanalyzer.y"
                                                                  { (yyval.str) = template("void %s(%s)",(yyvsp[-4].str),(yyvsp[-2].str));}
#line 2126 "myanalyzer.tab.c"
    break;

  case 20:
#line 192 "myanalyzer.y"
                                                                           { (yyval.str) = template("%s %s()",(yyvsp[-1].str),(yyvsp[-6].str));}
#line 2132 "myanalyzer.tab.c"
    break;

  case 21:
#line 193 "myanalyzer.y"
                                                   { (yyval.str) = template("void %s()",(yyvsp[-3].str));}
#line 2138 "myanalyzer.tab.c"
    break;

  case 23:
#line 198 "myanalyzer.y"
                                {(yyval.str) = template("%s %s", (yyvsp[0].str),(yyvsp[-2].str));}
#line 2144 "myanalyzer.tab.c"
    break;

  case 24:
#line 199 "myanalyzer.y"
                                                           {(yyval.str) = template("%s,%s %s",(yyvsp[-4].str),(yyvsp[0].str) ,(yyvsp[-2].str));}
#line 2150 "myanalyzer.tab.c"
    break;

  case 25:
#line 201 "myanalyzer.y"
                                                      {(yyval.str) = template("%s %s[]",(yyvsp[0].str), (yyvsp[-4].str));}
#line 2156 "myanalyzer.tab.c"
    break;

  case 26:
#line 202 "myanalyzer.y"
                                                                              {(yyval.str) = template("%s,%s %s[]", (yyvsp[-6].str),(yyvsp[0].str),(yyvsp[-4].str));}
#line 2162 "myanalyzer.tab.c"
    break;

  case 28:
#line 206 "myanalyzer.y"
                            { (yyval.str) = template("%s\n", (yyvsp[0].str) );}
#line 2168 "myanalyzer.tab.c"
    break;

  case 29:
#line 207 "myanalyzer.y"
                                          { (yyval.str) = template("%s%s", (yyvsp[-1].str),(yyvsp[0].str));}
#line 2174 "myanalyzer.tab.c"
    break;

  case 30:
#line 211 "myanalyzer.y"
                          { (yyval.str) = template("%s", (yyvsp[0].str) );}
#line 2180 "myanalyzer.tab.c"
    break;

  case 31:
#line 212 "myanalyzer.y"
                                         { (yyval.str) = template("%s %s", (yyvsp[-1].str),(yyvsp[0].str) );}
#line 2186 "myanalyzer.tab.c"
    break;

  case 32:
#line 217 "myanalyzer.y"
                        { (yyval.str) = template("%s", (yyvsp[0].str));}
#line 2192 "myanalyzer.tab.c"
    break;

  case 33:
#line 218 "myanalyzer.y"
                     {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 2198 "myanalyzer.tab.c"
    break;

  case 34:
#line 222 "myanalyzer.y"
                                    { (yyval.str) = template("%s", (yyvsp[-2].str));}
#line 2204 "myanalyzer.tab.c"
    break;

  case 35:
#line 223 "myanalyzer.y"
                                       { (yyval.str) = template("%s", (yyvsp[-2].str));}
#line 2210 "myanalyzer.tab.c"
    break;

  case 36:
#line 224 "myanalyzer.y"
                                   { (yyval.str) = template("%s", (yyvsp[-2].str));}
#line 2216 "myanalyzer.tab.c"
    break;

  case 37:
#line 225 "myanalyzer.y"
                         { (yyval.str) = template("break;\n");}
#line 2222 "myanalyzer.tab.c"
    break;

  case 38:
#line 226 "myanalyzer.y"
                            { (yyval.str) = template("continue;\n");}
#line 2228 "myanalyzer.tab.c"
    break;

  case 39:
#line 229 "myanalyzer.y"
                                             {(yyval.str) = template("%s = %s;\n",(yyvsp[-3].str), (yyvsp[-1].str));}
#line 2234 "myanalyzer.tab.c"
    break;

  case 40:
#line 230 "myanalyzer.y"
                                                                                   {(yyval.str) = template("%s [%s]= %s;\n",(yyvsp[-6].str),(yyvsp[-4].str) ,(yyvsp[-1].str));}
#line 2240 "myanalyzer.tab.c"
    break;

  case 41:
#line 231 "myanalyzer.y"
                                                                                                                                 {(yyval.str) = template("%s [%s]= %s[%s];\n",(yyvsp[-9].str),(yyvsp[-7].str) ,(yyvsp[-4].str),(yyvsp[-2].str));}
#line 2246 "myanalyzer.tab.c"
    break;

  case 42:
#line 232 "myanalyzer.y"
                                                                                            {(yyval.str) = template("%s = %s[%s];\n",(yyvsp[-6].str),(yyvsp[-4].str) ,(yyvsp[-2].str));}
#line 2252 "myanalyzer.tab.c"
    break;

  case 43:
#line 233 "myanalyzer.y"
                                                                                  {(yyval.str) = template("%s %s[%s];\n",(yyvsp[-1].str),(yyvsp[-6].str) ,(yyvsp[-4].str));}
#line 2258 "myanalyzer.tab.c"
    break;

  case 44:
#line 236 "myanalyzer.y"
                                                        {(yyval.str) = template("%s %s;\n",(yyvsp[-1].str), (yyvsp[-3].str));}
#line 2264 "myanalyzer.tab.c"
    break;

  case 45:
#line 238 "myanalyzer.y"
                                                                                        {(yyval.str) = template("const %s %s = %s;\n",(yyvsp[-1].str), (yyvsp[-5].str),(yyvsp[-3].str));}
#line 2270 "myanalyzer.tab.c"
    break;

  case 46:
#line 239 "myanalyzer.y"
                                                                                                  {(yyval.str) = template("const %s %s = %s%s;\n",(yyvsp[-1].str), (yyvsp[-6].str),(yyvsp[-4].str),(yyvsp[-3].str));}
#line 2276 "myanalyzer.tab.c"
    break;

  case 47:
#line 249 "myanalyzer.y"
                                                          { (yyval.str) = template("if(%s){\n %s \n }\n", (yyvsp[-3].str) ,(yyvsp[0].str));}
#line 2282 "myanalyzer.tab.c"
    break;

  case 48:
#line 250 "myanalyzer.y"
                                                                 { (yyval.str) = template("if(%s){\n %s \n }\n", (yyvsp[-3].str) ,(yyvsp[0].str));}
#line 2288 "myanalyzer.tab.c"
    break;

  case 49:
#line 251 "myanalyzer.y"
                                                  { (yyval.str) = template("%s\n else{\n %s \n }\n",(yyvsp[-3].str), (yyvsp[0].str));}
#line 2294 "myanalyzer.tab.c"
    break;

  case 50:
#line 254 "myanalyzer.y"
                                                             { (yyval.str) = template("while(%s){\n %s \n }\n", (yyvsp[-3].str) ,(yyvsp[0].str));}
#line 2300 "myanalyzer.tab.c"
    break;

  case 51:
#line 255 "myanalyzer.y"
                                                                    { (yyval.str) = template("while(%s){\n %s \n }\n", (yyvsp[-3].str) ,(yyvsp[0].str));}
#line 2306 "myanalyzer.tab.c"
    break;

  case 52:
#line 258 "myanalyzer.y"
                                                                                        { (yyval.str) = template("for(%s=%s;%s<%s;%s+=1){\n %s \n }\n", (yyvsp[-8].str),(yyvsp[-5].str),(yyvsp[-8].str),(yyvsp[-3].str),(yyvsp[-8].str) ,(yyvsp[0].str));}
#line 2312 "myanalyzer.tab.c"
    break;

  case 53:
#line 260 "myanalyzer.y"
                                                                                               { (yyval.str) = template("for(%s=%s;%s<%s;%s+=1){\n %s \n }\n", (yyvsp[-8].str),(yyvsp[-5].str),(yyvsp[-8].str),(yyvsp[-3].str),(yyvsp[-8].str) ,(yyvsp[0].str));}
#line 2318 "myanalyzer.tab.c"
    break;

  case 54:
#line 261 "myanalyzer.y"
                                                                                                      { (yyval.str) = template("for(%s=%s;%s<%s;%s+=%s){\n %s \n }\n", (yyvsp[-10].str),(yyvsp[-7].str),(yyvsp[-10].str),(yyvsp[-5].str),(yyvsp[-10].str),(yyvsp[-3].str) ,(yyvsp[0].str));}
#line 2324 "myanalyzer.tab.c"
    break;

  case 55:
#line 266 "myanalyzer.y"
         {(yyval.str) = template("%s",(yyvsp[0].str));}
#line 2330 "myanalyzer.tab.c"
    break;

  case 56:
#line 267 "myanalyzer.y"
                 {(yyval.str) = template("self->%s",(yyvsp[0].str));}
#line 2336 "myanalyzer.tab.c"
    break;

  case 57:
#line 271 "myanalyzer.y"
                        {(yyval.str) = template("%s",(yyvsp[0].str));}
#line 2342 "myanalyzer.tab.c"
    break;

  case 58:
#line 273 "myanalyzer.y"
                                                           {(yyval.str) = template("%s ,%s",(yyvsp[-2].str), (yyvsp[0].str));}
#line 2348 "myanalyzer.tab.c"
    break;

  case 59:
#line 275 "myanalyzer.y"
                                                                                               {(yyval.str) = template("%s ,%s %s",(yyvsp[-5].str),(yyvsp[-3].str), (yyvsp[-1].str));}
#line 2354 "myanalyzer.tab.c"
    break;

  case 64:
#line 291 "myanalyzer.y"
                { (yyval.str) = template("1");}
#line 2360 "myanalyzer.tab.c"
    break;

  case 65:
#line 292 "myanalyzer.y"
                 { (yyval.str) = template("0");}
#line 2366 "myanalyzer.tab.c"
    break;

  case 66:
#line 298 "myanalyzer.y"
                                          {(yyval.str) = template("%s()", (yyvsp[-2].str));}
#line 2372 "myanalyzer.tab.c"
    break;

  case 67:
#line 299 "myanalyzer.y"
                                              {(yyval.str) = template("%s(%s)", (yyvsp[-3].str),(yyvsp[-1].str));}
#line 2378 "myanalyzer.tab.c"
    break;

  case 68:
#line 303 "myanalyzer.y"
                         {(yyval.str) = template("%s%s",(yyvsp[-1].str),(yyvsp[0].str) );}
#line 2384 "myanalyzer.tab.c"
    break;

  case 69:
#line 307 "myanalyzer.y"
                          {(yyval.str) = template("%s", (yyvsp[0].str));}
#line 2390 "myanalyzer.tab.c"
    break;

  case 70:
#line 310 "myanalyzer.y"
                                                            { (yyval.str) = template("%s[%s]",(yyvsp[-3].str), (yyvsp[-1].str));}
#line 2396 "myanalyzer.tab.c"
    break;

  case 71:
#line 311 "myanalyzer.y"
                                                                    {(yyval.str) = template("%s [%s]",(yyvsp[-4].str),(yyvsp[-1].str));}
#line 2402 "myanalyzer.tab.c"
    break;

  case 72:
#line 312 "myanalyzer.y"
                                                         { (yyval.str) = template("%s[%s]",(yyvsp[-3].str), (yyvsp[-1].str));}
#line 2408 "myanalyzer.tab.c"
    break;

  case 73:
#line 319 "myanalyzer.y"
                        { (yyval.str) = template("%s%s",(yyvsp[-1].str), (yyvsp[0].str));}
#line 2414 "myanalyzer.tab.c"
    break;

  case 74:
#line 322 "myanalyzer.y"
                          { (yyval.str) = template("%s,%s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 2420 "myanalyzer.tab.c"
    break;

  case 75:
#line 323 "myanalyzer.y"
                         { (yyval.str) = template("%s.%s",(yyvsp[-2].str),(yyvsp[0].str));}
#line 2426 "myanalyzer.tab.c"
    break;

  case 76:
#line 325 "myanalyzer.y"
                            { (yyval.str) = template("%s + %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2432 "myanalyzer.tab.c"
    break;

  case 77:
#line 326 "myanalyzer.y"
                             { (yyval.str) = template("%s - %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2438 "myanalyzer.tab.c"
    break;

  case 78:
#line 327 "myanalyzer.y"
                           { (yyval.str) = template("%s * %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2444 "myanalyzer.tab.c"
    break;

  case 79:
#line 328 "myanalyzer.y"
                           { (yyval.str) = template("%s / %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2450 "myanalyzer.tab.c"
    break;

  case 80:
#line 329 "myanalyzer.y"
                           {(yyval.str) = template("%s %% %s", (yyvsp[-2].str),(yyvsp[0].str));}
#line 2456 "myanalyzer.tab.c"
    break;

  case 81:
#line 330 "myanalyzer.y"
                          {(yyval.str) = template("%s == %s", (yyvsp[-2].str),(yyvsp[0].str));}
#line 2462 "myanalyzer.tab.c"
    break;

  case 82:
#line 331 "myanalyzer.y"
                            {(yyval.str) = template("%s != %s", (yyvsp[-2].str),(yyvsp[0].str));}
#line 2468 "myanalyzer.tab.c"
    break;

  case 83:
#line 332 "myanalyzer.y"
                            {(yyval.str) = template("%s < %s", (yyvsp[-2].str),(yyvsp[0].str));}
#line 2474 "myanalyzer.tab.c"
    break;

  case 84:
#line 333 "myanalyzer.y"
                               {(yyval.str) = template("%s <= %s", (yyvsp[-2].str),(yyvsp[0].str));}
#line 2480 "myanalyzer.tab.c"
    break;

  case 85:
#line 334 "myanalyzer.y"
                            {(yyval.str) = template("%s > %s", (yyvsp[-2].str),(yyvsp[0].str));}
#line 2486 "myanalyzer.tab.c"
    break;

  case 86:
#line 335 "myanalyzer.y"
                              {(yyval.str) = template("%s >= %s", (yyvsp[-2].str),(yyvsp[0].str));}
#line 2492 "myanalyzer.tab.c"
    break;

  case 87:
#line 336 "myanalyzer.y"
                              {(yyval.str) = template("%s = %s", (yyvsp[-2].str),(yyvsp[0].str));}
#line 2498 "myanalyzer.tab.c"
    break;

  case 88:
#line 338 "myanalyzer.y"
                           {(yyval.str) = template("%s && %s", (yyvsp[-2].str),(yyvsp[0].str));}
#line 2504 "myanalyzer.tab.c"
    break;

  case 89:
#line 339 "myanalyzer.y"
                          {(yyval.str) = template("%s || %s", (yyvsp[-2].str),(yyvsp[0].str));}
#line 2510 "myanalyzer.tab.c"
    break;

  case 90:
#line 340 "myanalyzer.y"
                           {(yyval.str) = template("%s ! %s", (yyvsp[-2].str),(yyvsp[0].str));}
#line 2516 "myanalyzer.tab.c"
    break;

  case 91:
#line 341 "myanalyzer.y"
                              {(yyval.str) = template("%s += %s", (yyvsp[-2].str),(yyvsp[0].str));}
#line 2522 "myanalyzer.tab.c"
    break;

  case 92:
#line 342 "myanalyzer.y"
                               {(yyval.str) = template("%s -= %s", (yyvsp[-2].str),(yyvsp[0].str));}
#line 2528 "myanalyzer.tab.c"
    break;

  case 93:
#line 343 "myanalyzer.y"
                             {(yyval.str) = template("%s *= %s", (yyvsp[-2].str),(yyvsp[0].str));}
#line 2534 "myanalyzer.tab.c"
    break;

  case 94:
#line 344 "myanalyzer.y"
                             {(yyval.str) = template("%s //= %s", (yyvsp[-2].str),(yyvsp[0].str));}
#line 2540 "myanalyzer.tab.c"
    break;

  case 95:
#line 345 "myanalyzer.y"
                             {(yyval.str) = template("%s %= %s", (yyvsp[-2].str),(yyvsp[0].str));}
#line 2546 "myanalyzer.tab.c"
    break;

  case 96:
#line 346 "myanalyzer.y"
                                 {(yyval.str) = template("(%s)" ,(yyvsp[-1].str));}
#line 2552 "myanalyzer.tab.c"
    break;

  case 97:
#line 347 "myanalyzer.y"
                                 {(yyval.str) = template("[%s]",(yyvsp[-1].str));}
#line 2558 "myanalyzer.tab.c"
    break;

  case 98:
#line 348 "myanalyzer.y"
                {(yyval.str) = template(";");}
#line 2564 "myanalyzer.tab.c"
    break;

  case 99:
#line 358 "myanalyzer.y"
              { (yyval.str) = template("%s", (yyvsp[0].str) );}
#line 2570 "myanalyzer.tab.c"
    break;

  case 100:
#line 359 "myanalyzer.y"
                 { (yyval.str) = template("%s", (yyvsp[0].str) );}
#line 2576 "myanalyzer.tab.c"
    break;

  case 101:
#line 365 "myanalyzer.y"
              { (yyval.str) = template("%s", (yyvsp[0].str) );}
#line 2582 "myanalyzer.tab.c"
    break;

  case 102:
#line 366 "myanalyzer.y"
                  { (yyval.str) = template("%s", (yyvsp[0].str) );}
#line 2588 "myanalyzer.tab.c"
    break;

  case 103:
#line 367 "myanalyzer.y"
                { (yyval.str) = template("%s", (yyvsp[0].str) );}
#line 2594 "myanalyzer.tab.c"
    break;

  case 104:
#line 371 "myanalyzer.y"
                { (yyval.str) = template("char*");}
#line 2600 "myanalyzer.tab.c"
    break;

  case 105:
#line 372 "myanalyzer.y"
                    { (yyval.str) = template("int");}
#line 2606 "myanalyzer.tab.c"
    break;

  case 106:
#line 373 "myanalyzer.y"
                   { (yyval.str) = template("double");}
#line 2612 "myanalyzer.tab.c"
    break;

  case 107:
#line 374 "myanalyzer.y"
                   { (yyval.str) = template("int");}
#line 2618 "myanalyzer.tab.c"
    break;

  case 108:
#line 375 "myanalyzer.y"
                 { (yyval.str) = template("%s",(yyvsp[0].str));}
#line 2624 "myanalyzer.tab.c"
    break;

  case 127:
#line 403 "myanalyzer.y"
                               {(yyval.str) = template("%s",(yyvsp[0].str));}
#line 2630 "myanalyzer.tab.c"
    break;

  case 128:
#line 404 "myanalyzer.y"
                                          {(yyval.str) = template("%s %s",(yyvsp[-1].str),(yyvsp[0].str));}
#line 2636 "myanalyzer.tab.c"
    break;

  case 130:
#line 409 "myanalyzer.y"
                                                { (yyval.str) = template("%s",(yyvsp[0].str) );}
#line 2642 "myanalyzer.tab.c"
    break;

  case 131:
#line 414 "myanalyzer.y"
                                                                                     { (yyval.str) = template("%s",(yyvsp[-5].str) );comp_to_append=template("\n\n%s\n return;\n}\n",(yyvsp[-4].str));strcat(comp_function_under,comp_to_append);}
#line 2648 "myanalyzer.tab.c"
    break;

  case 132:
#line 415 "myanalyzer.y"
                                                                                          { (yyval.str) = template("%s",(yyvsp[-6].str) );comp_to_append= template("\n{\n%s\n return %s;\n}\n",(yyvsp[-5].str),(yyvsp[-3].str));strcat(comp_function_under,comp_to_append);}
#line 2654 "myanalyzer.tab.c"
    break;

  case 133:
#line 416 "myanalyzer.y"
                                                                        { (yyval.str) = template("%s",(yyvsp[-5].str) );comp_to_append= template("\n{\n return %s;\n}\n",(yyvsp[-3].str));strcat(comp_function_under,comp_to_append);}
#line 2660 "myanalyzer.tab.c"
    break;

  case 134:
#line 417 "myanalyzer.y"
                                                                   { (yyval.str) = template("%s",(yyvsp[-3].str) );comp_to_append= template("\n{\n%s\n return;\n}\n" ,(yyvsp[-2].str));strcat(comp_function_under,comp_to_append);}
#line 2666 "myanalyzer.tab.c"
    break;

  case 135:
#line 425 "myanalyzer.y"
                             { (yyval.str) = template("%s", (yyvsp[0].str));}
#line 2672 "myanalyzer.tab.c"
    break;

  case 136:
#line 433 "myanalyzer.y"
                                               {(yyval.str) = template("%s = %s;\n",(yyvsp[-3].str), (yyvsp[-1].str));}
#line 2678 "myanalyzer.tab.c"
    break;

  case 137:
#line 434 "myanalyzer.y"
                                                                                     {(yyval.str) = template("%s [%s]= %s;\n",(yyvsp[-6].str),(yyvsp[-4].str) ,(yyvsp[-1].str));}
#line 2684 "myanalyzer.tab.c"
    break;

  case 138:
#line 435 "myanalyzer.y"
                                                                                                                                     {(yyval.str) = template("%s [%s]= %s[%s];\n",(yyvsp[-10].str),(yyvsp[-8].str) ,(yyvsp[-4].str),(yyvsp[-2].str));}
#line 2690 "myanalyzer.tab.c"
    break;

  case 139:
#line 436 "myanalyzer.y"
                                                                                        {(yyval.str) = template("%s = %s[%s];\n",(yyvsp[-6].str),(yyvsp[-4].str) ,(yyvsp[-2].str));}
#line 2696 "myanalyzer.tab.c"
    break;

  case 140:
#line 437 "myanalyzer.y"
                                                                                    {(yyval.str) = template("%s %s[%s];\n",(yyvsp[-1].str),(yyvsp[-6].str) ,(yyvsp[-4].str));}
#line 2702 "myanalyzer.tab.c"
    break;

  case 141:
#line 440 "myanalyzer.y"
                                                                   {(yyval.str) = template("%s %s;\n",(yyvsp[-1].str), (yyvsp[-3].str));}
#line 2708 "myanalyzer.tab.c"
    break;

  case 142:
#line 442 "myanalyzer.y"
                                                                                                   {(yyval.str) = template("const %s %s = %s;\n",(yyvsp[-1].str), (yyvsp[-5].str),(yyvsp[-3].str));}
#line 2714 "myanalyzer.tab.c"
    break;

  case 143:
#line 443 "myanalyzer.y"
                                                                                                             {(yyval.str) = template("const %s %s = %s%s;\n",(yyvsp[-1].str), (yyvsp[-6].str),(yyvsp[-4].str),(yyvsp[-3].str));}
#line 2720 "myanalyzer.tab.c"
    break;

  case 144:
#line 448 "myanalyzer.y"
                          {(yyval.str) = template("%s",(yyvsp[0].str));}
#line 2726 "myanalyzer.tab.c"
    break;

  case 145:
#line 450 "myanalyzer.y"
                                                                        {(yyval.str) = template("%s ,%s",(yyvsp[-3].str), (yyvsp[0].str));}
#line 2732 "myanalyzer.tab.c"
    break;

  case 146:
#line 452 "myanalyzer.y"
                                                                                                            {(yyval.str) = template("%s ,%s %s",(yyvsp[-6].str),(yyvsp[-3].str), (yyvsp[-1].str));}
#line 2738 "myanalyzer.tab.c"
    break;

  case 148:
#line 460 "myanalyzer.y"
                           { (yyval.str) = template("%s",(yyvsp[0].str) );}
#line 2744 "myanalyzer.tab.c"
    break;

  case 149:
#line 461 "myanalyzer.y"
                                               { (yyval.str) = template("%s%s", (yyvsp[-1].str),(yyvsp[0].str));}
#line 2750 "myanalyzer.tab.c"
    break;

  case 150:
#line 473 "myanalyzer.y"
                                                                                        { (yyval.str) = template("%s (*%s)(SELF, %s);\n",(yyvsp[-1].str),(yyvsp[-7].str),(yyvsp[-5].str));comp_to_append=template("%s %s(SELF, %s)",(yyvsp[-7].str),(yyvsp[-1].str),(yyvsp[-5].str));strcat(comp_function_under,comp_to_append);}
#line 2756 "myanalyzer.tab.c"
    break;

  case 151:
#line 474 "myanalyzer.y"
                                                                  { (yyval.str) = template("void (*%s)(SELF, %s);\n",(yyvsp[-4].str),(yyvsp[-2].str));comp_to_append= template("void %s(SELF, %s)",(yyvsp[-4].str),(yyvsp[-2].str));strcat(comp_function_under,comp_to_append);}
#line 2762 "myanalyzer.tab.c"
    break;

  case 152:
#line 476 "myanalyzer.y"
                                                                          { (yyval.str) = template("%s (*%s)(SELF);\n",(yyvsp[-1].str),(yyvsp[-6].str));comp_to_append=template("%s %s(SELF)",(yyvsp[-1].str),(yyvsp[-6].str));strcat(comp_function_under,comp_to_append);}
#line 2768 "myanalyzer.tab.c"
    break;

  case 153:
#line 477 "myanalyzer.y"
                                                   { (yyval.str) = template("void (*%s)(SELF);\n",(yyvsp[-3].str));comp_to_append= template("void %s(SELF)",(yyvsp[-3].str));strcat(comp_function_under,comp_to_append);}
#line 2774 "myanalyzer.tab.c"
    break;


#line 2778 "myanalyzer.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



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
                      yytoken, &yylval);
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 484 "myanalyzer.y"

int main ()
{
   if ( yyparse() == 0 )
		printf("//Accepted!\n");
	else
		printf("Rejected!\n");
}
