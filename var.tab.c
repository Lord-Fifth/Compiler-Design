/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "var.y" /* yacc.c:339  */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void yyerror(char *s);


void installid(char s[],int n);
int getid(char s[]);
void dis();
int relop(int a, int b, int c);
int val, val1, val2, inc;

char reg[7][10]={"t1","t2","t3","t4","t5","t6"};

extern FILE *yyout;
extern char *yylex();
char buffer[30];

struct table{
char name[10];
int val;
}symbol[53];

#line 92 "var.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "var.tab.h".  */
#ifndef YY_YY_VAR_TAB_H_INCLUDED
# define YY_YY_VAR_TAB_H_INCLUDED
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
    id = 258,
    num = 259,
    print = 260,
    EXIT = 261,
    IF = 262,
    ELSE = 263,
    ptable = 264,
    FOR = 265,
    WHILE = 266,
    DO = 267,
    FACT = 268,
    and = 269,
    or = 270,
    eq = 271,
    ne = 272,
    ge = 273,
    le = 274
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 27 "var.y" /* yacc.c:355  */

int no;
char var[10];
char code[50];

#line 158 "var.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_VAR_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 175 "var.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   633

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  10
/* YYNRULES -- Number of rules.  */
#define YYNRULES  56
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  266

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   274

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    24,     2,     2,
      28,    30,    25,    22,     2,    23,     2,    26,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    27,
      17,    29,    16,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    31,     2,    32,     2,     2,     2,     2,
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
      15,    18,    19,    20,    21
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    46,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      67,    75,    83,    91,    99,   107,   115,   123,   132,   140,
     149,   162,   174,   187,   189,   191,   194,   197,   200,   205,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   231,   232
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "id", "num", "print", "EXIT", "IF",
  "ELSE", "ptable", "FOR", "WHILE", "DO", "FACT", "and", "or", "'>'",
  "'<'", "eq", "ne", "ge", "le", "'+'", "'-'", "'%'", "'*'", "'/'", "';'",
  "'('", "'='", "')'", "'{'", "'}'", "$accept", "start", "for_statement",
  "do_statement", "while_statement", "assignment", "condn", "factorial",
  "exp", "term", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,    62,    60,   271,   272,
     273,   274,    43,    45,    37,    42,    47,    59,    40,    61,
      41,   123,   125
};
# endif

#define YYPACT_NINF -25

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-25)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      13,   -14,     2,    -1,     3,    21,     7,    27,    42,    98,
     -25,   -25,   -25,    50,   -25,   -25,     0,   -25,   -25,     2,
     213,   -25,   -25,     2,   -25,    99,   122,   128,   -25,     2,
      72,   125,   -25,   -25,   -25,   132,   -25,   -25,   -25,   150,
     400,    44,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,   -25,    65,   121,    37,     2,
     227,   -25,   -25,   -25,   175,   -25,   489,   489,   106,   106,
     106,   106,   106,   106,   -24,   -24,   -24,   -25,   -25,   167,
       2,   177,   178,   195,   246,   -25,   172,    89,   260,   174,
     191,   192,   198,   176,   196,     2,   202,   193,   224,   225,
     228,   -25,     2,   274,    55,   253,   516,   517,     2,   288,
     491,   521,   522,   523,   524,     2,     2,     2,   413,   497,
     525,   503,   504,   505,   507,   302,   316,   330,     2,     2,
     527,   506,   533,   535,   536,   537,     2,     2,     2,    12,
      96,   510,   538,   513,   515,   518,   519,   146,   171,   194,
     514,   520,    26,     2,   542,   546,   547,   548,     2,     2,
       2,   543,   544,   528,   530,   344,   539,   531,   540,   534,
     426,   439,   452,   532,   541,     2,     2,   529,   555,   560,
     561,   562,     4,     6,     8,     2,     2,   358,   123,   -25,
     545,   549,   550,   551,   556,   557,   558,   465,   478,   554,
     559,   563,   564,   565,   566,   567,   568,   569,     2,     2,
     -25,   570,   571,   572,   573,   577,   -25,   -25,   -25,    94,
     494,   574,    93,   108,   151,   173,   575,   578,     2,   579,
     580,   581,   582,   583,   584,   585,   586,   -25,   -25,   372,
     587,   588,   589,   590,   591,   592,   593,   594,   595,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,   596,   597,   611,
     600,     2,   386,   598,   599,   -25
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    14,    12,     0,    16,    19,     0,    56,    55,     0,
       0,    40,     2,     0,     8,     0,     0,     0,     1,     0,
       0,     0,    11,    15,    13,     0,    17,    18,     4,     0,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     3,     0,     0,     0,     0,
       0,     7,     9,     6,     0,    52,    53,    54,    46,    47,
      48,    49,    50,    51,    41,    42,    45,    43,    44,     0,
       0,     0,     0,     0,     0,     5,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,    41,
      42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,    55,    55,    55,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,     0,     0,     0,     0,     0,    30,    31,    32,    47,
      46,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
      22,    24,    20,    27,    23,    25,    21,     0,     0,     0,
       0,     0,     0,     0,     0,    36
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -25,   -25,   606,   607,   608,   609,   623,   624,    -2,   -25
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     9,    10,    11,    12,    13,    14,    15,    74,    21
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      20,    53,    54,    17,    18,    17,    18,    17,   194,    17,
     195,    17,   196,    39,    40,    16,     1,    41,     2,     3,
       4,    56,     5,     6,     7,     8,    22,    60,    19,   163,
      19,    23,    19,   164,    19,    25,    19,    53,    54,   150,
      66,    67,    68,    69,    70,    71,    72,    73,    24,    75,
      76,    77,    78,    81,    82,    26,    83,    84,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,   111,   112,    27,    65,   113,   114,    38,    88,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    94,   103,    95,    79,   229,   230,    28,    61,
     109,     1,    57,    29,    30,     4,   118,    31,     6,     7,
       8,   231,   232,   125,   126,   127,    50,    51,    52,    53,
      54,    53,    54,   151,   226,    58,   139,   140,    50,    51,
      52,    53,    54,    59,   147,   148,   149,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      80,   165,    62,   200,   233,   234,   170,   171,   172,    63,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,   187,   188,   158,   235,   236,    64,    86,
      75,    89,    90,   197,   198,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    87,    91,
     159,   100,    93,   101,    97,   104,   219,   220,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    98,    99,   160,   105,   102,   239,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    85,   106,   107,   108,   115,   262,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    92,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    96,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,   110,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,   119,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,   136,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,   137,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,   138,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,   177,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,   199,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,   248,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,   263,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    42,    43,    44,
      45,    46,    47,    48,    49,   128,   129,    52,    53,    54,
      42,    43,    44,    45,    46,    47,    48,    49,    50,   182,
      52,    53,    54,    42,    43,    44,    45,    46,    47,    48,
      49,   183,    51,    52,    53,    54,    42,    43,    44,    45,
      46,    47,    48,    49,   184,    51,    52,    53,    54,    42,
      43,    44,   208,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    42,    43,   209,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    50,    51,    52,    53,
      54,   116,   117,   120,   227,   121,   122,   123,   124,   130,
     132,   133,   134,   131,   135,   141,   143,   142,   144,   145,
     146,   152,   154,   153,   155,   166,   161,   156,   157,   167,
     168,   169,   162,   179,   173,   174,   181,   175,   176,   190,
     185,   189,   178,   180,   191,   192,   193,     0,     0,   186,
       0,     0,     0,   221,     0,   201,   222,   223,   224,   202,
     203,   204,   225,   205,   206,   207,   210,     0,     0,     0,
     211,     0,     0,     0,   212,   213,   214,   215,     0,   216,
     217,   218,   237,   228,   258,   238,   240,   241,   242,   243,
     244,   245,   246,   247,   260,    32,    33,    34,    35,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   259,   261,
     264,   265,    36,    37
};

static const yytype_int16 yycheck[] =
{
       2,    25,    26,     3,     4,     3,     4,     3,     4,     3,
       4,     3,     4,    13,    16,    29,     3,    19,     5,     6,
       7,    23,     9,    10,    11,    12,    27,    29,    28,     3,
      28,    28,    28,     7,    28,    28,    28,    25,    26,    27,
      42,    43,    44,    45,    46,    47,    48,    49,    27,    51,
      52,    53,    54,    16,    17,    28,    19,    59,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    16,    17,    31,    30,    20,    21,    27,    80,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     3,    95,     5,    30,     3,     4,     0,    27,
     102,     3,     3,     5,     6,     7,   108,     9,    10,    11,
      12,     3,     4,   115,   116,   117,    22,    23,    24,    25,
      26,    25,    26,    27,    30,     3,   128,   129,    22,    23,
      24,    25,    26,     5,   136,   137,   138,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      29,   153,    27,    30,     3,     4,   158,   159,   160,    27,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   175,   176,    29,     3,     4,    28,     4,
     182,     4,     4,   185,   186,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    31,     4,
      29,     3,    30,    27,    30,     3,   208,   209,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    30,    30,    29,    31,    29,   228,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    31,    31,    29,     5,   261,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    22,    23,    24,    25,
      26,     5,     5,    32,    30,     4,     4,     4,     4,    32,
      27,    27,    27,     8,    27,     8,     3,    31,     3,     3,
       3,    31,    29,     5,    29,     3,    32,    29,    29,     3,
       3,     3,    32,    22,    11,    11,    22,    29,    28,     4,
      28,    32,    23,    23,     4,     4,     4,    -1,    -1,    28,
      -1,    -1,    -1,     3,    -1,    30,     5,     5,     5,    30,
      30,    30,     5,    27,    27,    27,    32,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    31,    31,    31,    31,    -1,    32,
      32,    32,    27,    29,     8,    27,    27,    27,    27,    27,
      27,    27,    27,    27,     3,     9,     9,     9,     9,    32,
      32,    32,    32,    32,    32,    32,    32,    32,    31,    29,
      32,    32,     9,     9
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,     7,     9,    10,    11,    12,    34,
      35,    36,    37,    38,    39,    40,    29,     3,     4,    28,
      41,    42,    27,    28,    27,    28,    28,    31,     0,     5,
       6,     9,    35,    36,    37,    38,    39,    40,    27,    13,
      41,    41,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    41,     3,     3,     5,
      41,    27,    27,    27,    28,    30,    41,    41,    41,    41,
      41,    41,    41,    41,    41,    41,    41,    41,    41,    30,
      29,    16,    17,    19,    41,    27,     4,    31,    41,     4,
       4,     4,    27,    30,     3,     5,    27,    30,    30,    30,
       3,    27,    29,    41,     3,    31,    31,    31,    29,    41,
      27,    16,    17,    20,    21,     5,     5,     5,    41,    27,
      32,     4,     4,     4,     4,    41,    41,    41,    22,    23,
      32,     8,    27,    27,    27,    27,    27,    27,    27,    41,
      41,     8,    31,     3,     3,     3,     3,    41,    41,    41,
      27,    27,    31,     5,    29,    29,    29,    29,    29,    29,
      29,    32,    32,     3,     7,    41,     3,     3,     3,     3,
      41,    41,    41,    11,    11,    29,    28,    27,    23,    22,
      23,    22,    23,    22,    22,    28,    28,    41,    41,    32,
       4,     4,     4,     4,     4,     4,     4,    41,    41,    27,
      30,    30,    30,    30,    30,    27,    27,    27,    17,    16,
      32,    31,    31,    31,    31,    31,    32,    32,    32,    41,
      41,     3,     5,     5,     5,     5,    30,    30,    29,     3,
       4,     3,     4,     3,     4,     3,     4,    27,    27,    41,
      27,    27,    27,    27,    27,    27,    27,    27,    27,    32,
      32,    32,    32,    32,    32,    32,    32,    32,     8,    31,
       3,    29,    41,    27,    32,    32
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    33,    34,    34,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    34,    34,
      35,    35,    35,    35,    35,    35,    35,    35,    36,    36,
      37,    37,    37,    38,    39,    39,    39,    39,    39,    40,
      41,    41,    41,    41,    41,    41,    41,    41,    41,    41,
      41,    41,    41,    41,    41,    42,    42
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     2,     4,     3,     3,     2,     3,
       1,     2,     1,     2,     1,     2,     1,     2,     2,     1,
      21,    21,    21,    21,    21,    21,    21,    21,    19,    19,
      17,    17,    17,     3,    17,    10,    30,    15,     9,     7,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
#line 46 "var.y" /* yacc.c:1646  */
    {exit(0);}
#line 1468 "var.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 47 "var.y" /* yacc.c:1646  */
    { printf("Printing: %d\n",(yyvsp[-1].no)); fprintf(yyout,"%s := %d;\nprint %s;\n\n",reg[0],(yyvsp[-1].no),reg[0]); }
#line 1474 "var.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 48 "var.y" /* yacc.c:1646  */
    {;}
#line 1480 "var.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 49 "var.y" /* yacc.c:1646  */
    { {printf("Printing: %d \n",(yyvsp[-1].no));} fprintf(yyout,"%s := %d;\nprint %s;\n\n",reg[0],(yyvsp[-1].no),reg[0]); ; }
#line 1486 "var.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 50 "var.y" /* yacc.c:1646  */
    {;}
#line 1492 "var.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 51 "var.y" /* yacc.c:1646  */
    {exit(EXIT_SUCCESS);}
#line 1498 "var.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 52 "var.y" /* yacc.c:1646  */
    { dis();}
#line 1504 "var.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 53 "var.y" /* yacc.c:1646  */
    { dis();}
#line 1510 "var.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 54 "var.y" /* yacc.c:1646  */
    { ;	}
#line 1516 "var.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 55 "var.y" /* yacc.c:1646  */
    { ; }
#line 1522 "var.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 56 "var.y" /* yacc.c:1646  */
    { ; }
#line 1528 "var.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 57 "var.y" /* yacc.c:1646  */
    { ; }
#line 1534 "var.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 58 "var.y" /* yacc.c:1646  */
    { ; }
#line 1540 "var.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 59 "var.y" /* yacc.c:1646  */
    { ; }
#line 1546 "var.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 60 "var.y" /* yacc.c:1646  */
    {;}
#line 1552 "var.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 61 "var.y" /* yacc.c:1646  */
    {;}
#line 1558 "var.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 62 "var.y" /* yacc.c:1646  */
    {;}
#line 1564 "var.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 63 "var.y" /* yacc.c:1646  */
    {;}
#line 1570 "var.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 68 "var.y" /* yacc.c:1646  */
    {  {installid((yyvsp[-18].var),(yyvsp[-16].no));} val=getid((yyvsp[-18].var));val1=(yyvsp[-12].no);val2=(yyvsp[-2].no); inc=(yyvsp[-6].no); 
                           for(;val<val1;  )
                          {  
	                  	val=val+inc;
	           			printf("Printing %d\n",val2);  
                          }
		          }
#line 1582 "var.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 76 "var.y" /* yacc.c:1646  */
    {  {installid((yyvsp[-18].var),(yyvsp[-16].no));} val=getid((yyvsp[-18].var));val1=(yyvsp[-12].no);val2=(yyvsp[-2].no); inc=(yyvsp[-6].no); 
                           for(;val<=val1;  )
                          {  
	                  	val=val+inc;
	           			printf("Printing %d\n",val2);  
                          }
		          }
#line 1594 "var.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 84 "var.y" /* yacc.c:1646  */
    {  {installid((yyvsp[-18].var),(yyvsp[-16].no));} val=getid((yyvsp[-18].var));val1=(yyvsp[-12].no);val2=(yyvsp[-2].no); inc=(yyvsp[-6].no); 
                           for(;val>val1;  )
                          {  
	                  	val=val-inc;
	           			printf("Printing %d\n",val2);  
                          }
		          }
#line 1606 "var.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 92 "var.y" /* yacc.c:1646  */
    {  {installid((yyvsp[-18].var),(yyvsp[-16].no));} val=getid((yyvsp[-18].var));val1=(yyvsp[-12].no);val2=(yyvsp[-2].no); inc=(yyvsp[-6].no); 
                           for(;val>=val1;  )
                          {  
	                  	val=val-inc;
	           			printf("Printing %d\n",val2);  
                          }
		          }
#line 1618 "var.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 100 "var.y" /* yacc.c:1646  */
    {  {installid((yyvsp[-18].var),(yyvsp[-16].no));} val=getid((yyvsp[-18].var));val1=(yyvsp[-12].no);val2=getid((yyvsp[-2].var)); inc=(yyvsp[-6].no); 
                           for(;val<val1;  )
                          {  
	                  	val=val+inc;
	           			printf("Printing %d\n",val); 
                          }
		          }
#line 1630 "var.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 108 "var.y" /* yacc.c:1646  */
    {  {installid((yyvsp[-18].var),(yyvsp[-16].no));} val=getid((yyvsp[-18].var));val1=(yyvsp[-12].no);val2=getid((yyvsp[-2].var)); inc=(yyvsp[-6].no); 
                           for(;val<=val1;  )
                          {  
	                  	val=val+inc;
	           			printf("Printing %d\n",val);  
                          }
		          }
#line 1642 "var.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 116 "var.y" /* yacc.c:1646  */
    {  {installid((yyvsp[-18].var),(yyvsp[-16].no));} val=getid((yyvsp[-18].var));val1=(yyvsp[-12].no);val2=getid((yyvsp[-2].var)); inc=(yyvsp[-6].no); 
                           for(;val>val1;  )
                          {  
	                  	val=val-inc;
	           		    printf("Printing %d\n",val); 
                          }
		          }
#line 1654 "var.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 124 "var.y" /* yacc.c:1646  */
    {  {installid((yyvsp[-18].var),(yyvsp[-16].no));} val=getid((yyvsp[-18].var));val1=(yyvsp[-12].no);val2=getid((yyvsp[-2].var)); inc=(yyvsp[-6].no); 
                           for(;val>=val1;  )
                          {  
	                  	val=val-inc;
						printf("Printing %d\n",val);                           }
		          }
#line 1665 "var.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 133 "var.y" /* yacc.c:1646  */
    { int n=(yyvsp[-4].no);
						  do{printf("Printing: %d\n",n);
						  n=n+(yyvsp[-9].no); 
						}while(n<=(yyvsp[-2].no));
						installid((yyvsp[-13].var),n); 
fprintf(yyout,"L1: print %s;\n%s := %s + %d;\n%s := %s;\n%s = %s <= %d; \nif (%s) goto L1;\n\n",reg[0],reg[0],reg[0],(yyvsp[-9].no),(yyvsp[-13].var),reg[0],reg[1],(yyvsp[-13].var),(yyvsp[-2].no),reg[1]);}
#line 1676 "var.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 141 "var.y" /* yacc.c:1646  */
    { int n=(yyvsp[-4].no);
						  do{printf("Printing: %d\n",n);
						  n=n-(yyvsp[-9].no); 
						}while(n>=(yyvsp[-2].no));
						installid((yyvsp[-13].var),n); 
fprintf(yyout,"L1: print %s;\n%s := %s - %d;\n%s := %s;\n%s = %s >= %d; \nif (%s) goto L1;\n\n",reg[0],reg[0],reg[0],(yyvsp[-9].no),(yyvsp[-13].var),reg[0],reg[1],(yyvsp[-13].var),(yyvsp[-2].no),reg[1]);}
#line 1687 "var.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 150 "var.y" /* yacc.c:1646  */
    {int loopvar=(yyvsp[-6].no); 
				   while(loopvar>(yyvsp[-12].no))
				   {if((yyvsp[-8].no)==(yyvsp[-6].no))
				   		{printf("Printing: %d\n",loopvar); }
					else 
						{printf("Printing: %d\n",(yyvsp[-8].no));} 
				    loopvar=loopvar-(yyvsp[-2].no);
				   } 

fprintf(yyout,"L1: %s = %s > %d; \nif (%s) goto L2;\ngoto L3;\nL2: print %s;\n%s := %s - %d;\n%s := %s;\ngoto L1;\nL3:\n\n",reg[0],(yyvsp[-14].var),(yyvsp[-12].no),reg[0],reg[0],reg[0],reg[0],(yyvsp[-2].no),(yyvsp[-14].var),reg[0]);
 }
#line 1703 "var.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 163 "var.y" /* yacc.c:1646  */
    {int loopvar=(yyvsp[-6].no); 		
				   while(loopvar<(yyvsp[-12].no))
				   {if((yyvsp[-8].no)==(yyvsp[-6].no))
				   		{printf("Printing: %d\n",loopvar);}
					else 
						{printf("Printing: %d\n",(yyvsp[-8].no));} 
					loopvar=loopvar+(yyvsp[-2].no);
				   }
fprintf(yyout,"L1: %s = %s < %d; \nif (%s) goto L2;\ngoto L3;\nL2: print %s;\n%s := %s + %d;\n%s := %s;\ngoto L1;\nL3:\n\n",reg[0],(yyvsp[-14].var),(yyvsp[-12].no),reg[0],reg[0],reg[0],reg[0],(yyvsp[-2].no),(yyvsp[-14].var),reg[0]);
				  }
#line 1718 "var.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 175 "var.y" /* yacc.c:1646  */
    {int loopvar=(yyvsp[-6].no); 				
				   while(loopvar!=(yyvsp[-12].no))
				   		{if((yyvsp[-8].no)==(yyvsp[-6].no))
				   			{printf("Printing: %d\n",loopvar);}
						 else 
						 	{printf("Printing: %d\n",(yyvsp[-8].no));}
						 loopvar=loopvar+(yyvsp[-2].no);
						}
fprintf(yyout,"L1: %s = %s ne %d; \nif (%s) goto L2;\ngoto L3;\nL2: print %s;\n%s := %s + %d;\n%s := %s;\ngoto L1;\nL3:\n\n",reg[0],(yyvsp[-14].var),(yyvsp[-12].no),reg[0],reg[0],reg[0],reg[0],(yyvsp[-2].no),(yyvsp[-14].var),reg[0]);
				  }
#line 1733 "var.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 187 "var.y" /* yacc.c:1646  */
    { {installid((yyvsp[-2].var),(yyvsp[0].no));} fprintf(yyout,"%s := %d;\n %s := %s;\n\n",reg[0],(yyvsp[0].no),(yyvsp[-2].var),reg[0]); ; }
#line 1739 "var.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 189 "var.y" /* yacc.c:1646  */
    { if((yyvsp[-14].no)>0){installid((yyvsp[-11].var),(yyvsp[-9].no));}else{installid((yyvsp[-4].var),(yyvsp[-2].no));} 
	fprintf(yyout,"if z %s goto _LABEL;\n%s := %d;\n%s := %s;\n_LABEL : else;\n%s := %d;\n%s := %s;\n\n",reg[0],reg[1],(yyvsp[-9].no),(yyvsp[-11].var),reg[1],reg[2],(yyvsp[-2].no),(yyvsp[-4].var),reg[2]); ;}
#line 1746 "var.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 191 "var.y" /* yacc.c:1646  */
    { if((yyvsp[-7].no)>0){installid((yyvsp[-4].var),(yyvsp[-2].no));} 
fprintf(yyout,"if nz %s;\n%s := %d;\n%s := %s;\n\n",reg[0],reg[1],(yyvsp[-2].no),(yyvsp[-4].var),reg[1]); ;}
#line 1753 "var.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 194 "var.y" /* yacc.c:1646  */
    { if((yyvsp[-27].no)>0){installid((yyvsp[-24].var),(yyvsp[-22].no));}else{ if((yyvsp[-15].no)>0){installid((yyvsp[-12].var),(yyvsp[-10].no));}else{ installid((yyvsp[-5].var),(yyvsp[-3].no));} } 
fprintf(yyout, "if z %s goto _MAINELSE; \n%s := %d;\n%s := %s;\n\n _MAINELSE : else;\n if z %s goto _LABEL;\n%s := %d;\n%s := %s;\n_LABEL : else;\n%s := %d;\n%s := %s;\n\n;",reg[0],reg[1],(yyvsp[-22].no),(yyvsp[-24].var),reg[1],reg[2],reg[3],(yyvsp[-10].no),(yyvsp[-12].var),reg[3],reg[4],(yyvsp[-3].no),(yyvsp[-5].var),reg[4]); ; }
#line 1760 "var.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 197 "var.y" /* yacc.c:1646  */
    { if((yyvsp[-12].no)>0){printf("Printing: %d\n",(yyvsp[-8].no));}else{printf("Printing: %d\n",(yyvsp[-2].no));} 
fprintf(yyout,"if z %s goto _LABEL;\n%s := %d;\nprint %s;\n_LABEL : else;\n%s := %d;\nprint %s;\n\n",reg[0],reg[1],(yyvsp[-8].no),reg[1],reg[2],(yyvsp[-2].no),reg[2]);; }
#line 1767 "var.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 200 "var.y" /* yacc.c:1646  */
    {if((yyvsp[-6].no)>0){printf("Printing: %d\n",(yyvsp[-2].no)); }
fprintf(yyout,"if nz %s; \n%s := %d \nPrint %s",reg[0],reg[1],(yyvsp[-2].no),reg[1]) ; }
#line 1774 "var.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 205 "var.y" /* yacc.c:1646  */
    {int n = (yyvsp[-2].no); int i; int f=1;
											for(i=1;i<=n;i++)
													{ f= f*i;
													}
											installid((yyvsp[-6].var),f);
										}
#line 1785 "var.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 214 "var.y" /* yacc.c:1646  */
    { {(yyval.no) = (yyvsp[0].no);} /*fprintf(yyout,"%s := %d;\n ",reg[0],$1);*/ ; }
#line 1791 "var.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 215 "var.y" /* yacc.c:1646  */
    { {(yyval.no) = (yyvsp[-2].no) + (yyvsp[0].no);} /*fprintf(yyout,"%s := %d + %d;\n ",reg[0],$1,$3);*/ ; }
#line 1797 "var.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 216 "var.y" /* yacc.c:1646  */
    { {(yyval.no) = (yyvsp[-2].no) - (yyvsp[0].no);} /*fprintf(yyout,"%s := %d - %d;\n ",reg[0],$1,$3);*/ ; }
#line 1803 "var.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 217 "var.y" /* yacc.c:1646  */
    { {(yyval.no) = (yyvsp[-2].no) * (yyvsp[0].no);} /*fprintf(yyout,"%s := %d * %d;\n ",reg[0],$1,$3);*/ ; }
#line 1809 "var.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 218 "var.y" /* yacc.c:1646  */
    { {(yyval.no) = (yyvsp[-2].no) / (yyvsp[0].no);} /*fprintf(yyout,"%s := %d / %d;\n ",reg[0],$1,$3);*/ ; }
#line 1815 "var.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 219 "var.y" /* yacc.c:1646  */
    { {(yyval.no)= (yyvsp[-2].no) % (yyvsp[0].no);}}
#line 1821 "var.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 220 "var.y" /* yacc.c:1646  */
    { {(yyval.no) =relop((yyvsp[-2].no),(yyvsp[0].no),1);} /*fprintf(yyout,"%s := %c > %d;\n ",reg[0],$1,$3); */;}
#line 1827 "var.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 221 "var.y" /* yacc.c:1646  */
    { {(yyval.no) =relop((yyvsp[-2].no),(yyvsp[0].no),2);} /*fprintf(yyout,"%s := %c < %d;\n ",reg[0],$1,$3); */;}
#line 1833 "var.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 222 "var.y" /* yacc.c:1646  */
    { {(yyval.no) =relop((yyvsp[-2].no),(yyvsp[0].no),3);} /*fprintf(yyout,"%s := %c eq %d;\n ",reg[0],$1,$3); */;}
#line 1839 "var.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 223 "var.y" /* yacc.c:1646  */
    { {(yyval.no) =relop((yyvsp[-2].no),(yyvsp[0].no),4);} /*fprintf(yyout,"%s := %c neq %d;\n ",reg[0],$1,$3); */;}
#line 1845 "var.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 224 "var.y" /* yacc.c:1646  */
    { {(yyval.no) =relop((yyvsp[-2].no),(yyvsp[0].no),5);} /*fprintf(yyout,"%s := %c ge %d;\n ",reg[0],$1,$3); */;}
#line 1851 "var.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 225 "var.y" /* yacc.c:1646  */
    { {(yyval.no) =relop((yyvsp[-2].no),(yyvsp[0].no),6);} /*fprintf(yyout,"%s := %c le %d;\n ",reg[0],$1,$3); */;}
#line 1857 "var.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 226 "var.y" /* yacc.c:1646  */
    { {(yyval.no) = (yyvsp[-1].no);} /*fprintf(yyout,"%s := %d;\n ",reg[0],$2); */;}
#line 1863 "var.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 227 "var.y" /* yacc.c:1646  */
    { {(yyval.no) =relop((yyvsp[-2].no),(yyvsp[0].no),7);} /*fprintf(yyout,"%s := %c and %d;\n ",reg[0],$1,$3);*/ ;}
#line 1869 "var.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 228 "var.y" /* yacc.c:1646  */
    { {(yyval.no) =relop((yyvsp[-2].no),(yyvsp[0].no),8);} /*fprintf(yyout,"%s := %c or %d;\n ",reg[0],$1,$3);*/ ;}
#line 1875 "var.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 231 "var.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1881 "var.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 232 "var.y" /* yacc.c:1646  */
    {(yyval.no)=getid((yyvsp[0].var));}
#line 1887 "var.tab.c" /* yacc.c:1646  */
    break;


#line 1891 "var.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
                  yystos[*yyssp], yyvsp);
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
#line 234 "var.y" /* yacc.c:1906  */

int relop(int a , int b ,int op)
{
switch(op){
case 1:if(a>b){return 1;} else{return 0;} break;
case 2:if(a<b){return 1;} else{return 0;} break;
case 3:if(a==b){return 1;} else{return 0;} break;
case 4:if(a!=b){return 1;} else{return 0;} break;
case 5:if(a>=b){return 1;} else{return 0;} break;
case 6:if(a<=b){return 1;} else{return 0;} break;
case 7:if(a>0 && b>0 ){return 1;}else{return 0;}break;
case 8:if(a>0 || b>0 ){return 1;}else{return 0;}break;
}
}

void dis()
{
int i;
printf("index\tvar\tval\n");
for(i=0;i<53;i++)
{
 if(symbol[i].val!=-101)
 printf("%d\t%s\t%d\n",i,symbol[i].name,symbol[i].val);
}
}

void installid(char str[],int n){
int index,i;
index=str[0]%53;
i=index;
if(strcmp(str,symbol[i].name)==0||symbol[i].val==-101)
{
symbol[index].val=n;
strcpy(symbol[index].name,str);
}
else
{
i=(i+1)%53;
 	while(i!=index)
	{
		if(strcmp(str,symbol[i].name)==0||symbol[i].val==-101)
		{
			symbol[i].val=n;
			strcpy(symbol[i].name,str);
			break;
		}
	i=(i+1)%53;
	}
}

}


int getid(char str[]){
int index,i;
index=str[0]%53;
i=index;
if(strcmp(str,symbol[index].name)==0)
{
return(symbol[index].val);
}
else
{i=(i+1)%53;
 	while(i!=index)
	{
		if(strcmp(str,symbol[i].name)==0)
		{
			return (symbol[i].val);
			break;
		}
	i=(i+1)%53;
	}
	if(i==index)
	{
		printf("not initialised.");
	}
}

}


void yyerror (char *s) {fprintf (stdout, "%s\n", s);} 

int main()
{

int i;

 for(i=0;i<53;i++)
{
symbol[i].val=-101;
}

yyout = fopen("output.txt","a");
/* if(yyout==NULL)
{
	printf("error!!");
}
else
{
	printf("file opened");
} */

//fprintf(yyout,"%s",reg[0]);
//fprintf("\n%s",ftell(yyout));

 return yyparse();

}
