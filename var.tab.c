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
    and = 268,
    or = 269,
    eq = 270,
    ne = 271,
    ge = 272,
    le = 273
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

#line 157 "var.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_VAR_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 174 "var.tab.c" /* yacc.c:358  */

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
#define YYFINAL  27
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   614

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  9
/* YYNRULES -- Number of rules.  */
#define YYNRULES  52
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  248

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   273

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    23,     2,     2,
      27,    29,    24,    21,     2,    22,     2,    25,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    26,
      16,    28,    15,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    30,     2,    31,     2,     2,     2,     2,
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
      17,    18,    19,    20
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    47,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    66,    74,
      82,    90,    98,   106,   114,   122,   132,   137,   139,   141,
     146,   148,   150,   153,   156,   159,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   181,   182
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "id", "num", "print", "EXIT", "IF",
  "ELSE", "ptable", "FOR", "WHILE", "DO", "and", "or", "'>'", "'<'", "eq",
  "ne", "ge", "le", "'+'", "'-'", "'%'", "'*'", "'/'", "';'", "'('", "'='",
  "')'", "'{'", "'}'", "$accept", "start", "for_statement", "do_statement",
  "while_statement", "assignment", "condn", "exp", "term", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,    62,    60,   270,   271,   272,
     273,    43,    45,    37,    42,    47,    59,    40,    61,    41,
     123,   125
};
# endif

#define YYPACT_NINF -17

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-17)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      78,   -16,    11,    39,    10,    44,    52,    55,    82,    66,
     -17,   -17,   -17,    79,   -17,    11,   -17,   -17,    11,   233,
     -17,   -17,    11,   -17,   124,    11,   125,   -17,    11,   103,
     105,   -17,   -17,   -17,   106,   -17,   -17,   415,    29,    11,
      11,    11,    11,    11,    11,    11,    11,    11,    11,    11,
      11,    11,   -17,   146,   113,   428,    11,   247,   -17,   -17,
     -17,   -17,   101,   101,    -5,    -5,    -5,    -5,    -5,    -5,
      15,    15,    15,   -17,   -17,   112,    11,    11,    11,    11,
     261,   -17,     6,   275,    75,   115,   498,   140,   117,    11,
     143,   120,   121,   122,   119,    11,   289,   -14,   148,   149,
     167,    11,   303,   142,   170,   172,   173,   174,    11,    11,
      11,   441,   163,   187,   154,   186,   218,   499,   317,   331,
     345,    11,   203,   197,   240,   521,   523,   530,    11,    11,
      11,    -3,   504,   532,   510,   511,   512,   513,   185,   201,
     217,   514,     1,    11,   539,   540,   541,   543,    11,    11,
      11,   524,   519,   522,   359,   526,   529,   531,   533,   454,
     467,   480,   525,    11,    11,   520,   551,   552,   553,   554,
      11,    11,    11,    11,   373,   168,   -17,   534,   535,   536,
     537,    31,    77,    83,   493,   528,   538,   542,   544,   545,
     546,   547,   548,   549,    11,   -17,   557,   556,   562,   564,
     565,   -17,   -17,   -17,   507,   555,    56,    64,    88,   107,
     558,    11,   559,   560,   561,   563,   566,   567,   568,   569,
     -17,   387,   550,   570,   571,   572,   573,   574,   575,   576,
     577,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   580,
     579,   587,   582,    11,   401,   581,   583,   -17
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    14,    12,     0,    16,     0,    52,    51,     0,     0,
      36,     2,     0,     8,     0,     0,     0,     1,     0,     0,
       0,    11,    15,    13,     0,    17,     4,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,     0,     0,     0,     0,     0,     7,     9,
       6,    48,    49,    50,    42,    43,    44,    45,    46,    47,
      37,    38,    41,    39,    40,     0,     0,     0,     0,     0,
       0,     5,     0,     0,    42,    43,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,     0,    32,     0,     0,     0,     0,     0,     0,     0,
       0,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    34,     0,     0,     0,
       0,    38,    37,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,     0,     0,     0,
       0,    27,    28,    29,    43,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    24,    20,    22,    18,    25,    21,    23,    19,     0,
       0,     0,     0,     0,     0,     0,     0,    33
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -17,   -17,   588,   589,   590,   591,   602,   -15,   -17
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     9,    10,    11,    12,    13,    14,    19,    20
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      37,   104,   105,    38,   152,   106,   107,    53,   153,    88,
      55,    89,    15,    57,    16,    17,    47,    48,    49,    50,
      51,    50,    51,   141,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    22,    18,    50,
      51,    80,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    50,    51,   191,    61,   212,
     213,    83,    84,    85,    86,    21,    27,   214,   215,     1,
      23,    28,    29,     4,    96,    30,     6,     7,     8,    24,
     102,     1,    25,     2,     3,     4,   111,     5,     6,     7,
       8,   216,   217,   118,   119,   120,    47,    48,    49,    50,
      51,    50,    51,   192,    91,    36,   131,    50,    51,   193,
     218,   219,    26,   138,   139,   140,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    54,   154,    58,
      56,    59,    60,   159,   160,   161,    47,    48,    49,    50,
      51,    76,    82,    94,    92,    95,    97,   101,   174,   175,
      98,    99,   100,   108,   109,   181,   182,   183,   184,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,   110,   113,   114,    75,   115,   116,   117,   204,
     124,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,   122,   123,   221,   186,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,   132,   125,   148,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,   133,   244,   149,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,   134,   126,   150,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    81,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    87,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    90,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,   103,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,   112,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,   128,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,   129,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,   130,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,   165,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,   185,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,   230,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,   245,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    39,    40,    77,    78,    43,    79,    45,    46,    47,
      48,    49,    50,    51,    39,    40,    41,    42,    43,    44,
      45,    46,   121,    48,    49,    50,    51,    39,    40,    41,
      42,    43,    44,    45,    46,    47,   170,    49,    50,    51,
      39,    40,    41,    42,    43,    44,    45,    46,   171,    48,
      49,    50,    51,    39,    40,    41,    42,    43,    44,    45,
      46,   172,    48,    49,    50,    51,    39,    40,    41,   194,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    47,
      48,    49,    50,    51,   135,   127,   136,    93,    47,    48,
      49,    50,    51,   137,   142,   162,   210,   143,   144,   145,
     146,   147,   155,   156,   157,   151,   158,   163,   166,   164,
     167,   176,   173,   168,   169,   177,   178,   179,   180,   195,
     205,   206,     0,   187,   188,   189,   190,   207,   196,   208,
     209,     0,   197,     0,   198,   199,   200,     0,   201,   202,
     203,   231,     0,   211,   220,   222,   223,   224,   240,   225,
     242,     0,   226,   227,   228,   229,     0,    31,    32,    33,
      34,   232,   233,   234,   235,   236,   237,   238,   239,   241,
     243,    35,   246,     0,   247
};

static const yytype_int16 yycheck[] =
{
      15,    15,    16,    18,     3,    19,    20,    22,     7,     3,
      25,     5,    28,    28,     3,     4,    21,    22,    23,    24,
      25,    24,    25,    26,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    27,    27,    24,
      25,    56,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    24,    25,    26,    29,     3,
       4,    76,    77,    78,    79,    26,     0,     3,     4,     3,
      26,     5,     6,     7,    89,     9,    10,    11,    12,    27,
      95,     3,    27,     5,     6,     7,   101,     9,    10,    11,
      12,     3,     4,   108,   109,   110,    21,    22,    23,    24,
      25,    24,    25,    26,    29,    26,   121,    24,    25,    26,
       3,     4,    30,   128,   129,   130,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     3,   143,    26,
       5,    26,    26,   148,   149,   150,    21,    22,    23,    24,
      25,    28,    30,     3,    29,    28,     3,    28,   163,   164,
      30,    30,    30,     5,     5,   170,   171,   172,   173,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     5,    31,     4,    29,     4,     4,     4,   194,
      26,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    31,     8,   211,    29,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     8,    26,    28,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    30,   243,    28,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     3,    26,    28,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    21,
      22,    23,    24,    25,     3,    26,     3,    29,    21,    22,
      23,    24,    25,     3,    30,    11,    29,     5,    28,    28,
      28,    28,     3,     3,     3,    31,     3,    28,    22,    27,
      21,    31,    27,    22,    21,     4,     4,     4,     4,    31,
       3,     5,    -1,    29,    29,    29,    29,     5,    30,     5,
       5,    -1,    30,    -1,    30,    30,    30,    -1,    31,    31,
      31,    31,    -1,    28,    26,    26,    26,    26,     8,    26,
       3,    -1,    26,    26,    26,    26,    -1,     9,     9,     9,
       9,    31,    31,    31,    31,    31,    31,    31,    31,    30,
      28,     9,    31,    -1,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,     7,     9,    10,    11,    12,    33,
      34,    35,    36,    37,    38,    28,     3,     4,    27,    39,
      40,    26,    27,    26,    27,    27,    30,     0,     5,     6,
       9,    34,    35,    36,    37,    38,    26,    39,    39,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    39,     3,    39,     5,    39,    26,    26,
      26,    29,    39,    39,    39,    39,    39,    39,    39,    39,
      39,    39,    39,    39,    39,    29,    28,    15,    16,    18,
      39,    26,    30,    39,    39,    39,    39,    26,     3,     5,
      26,    29,    29,    29,     3,    28,    39,     3,    30,    30,
      30,    28,    39,    26,    15,    16,    19,    20,     5,     5,
       5,    39,    26,    31,     4,     4,     4,     4,    39,    39,
      39,    21,    31,     8,    26,    26,    26,    26,    26,    26,
      26,    39,     8,    30,     3,     3,     3,     3,    39,    39,
      39,    26,    30,     5,    28,    28,    28,    28,    28,    28,
      28,    31,     3,     7,    39,     3,     3,     3,     3,    39,
      39,    39,    11,    28,    27,    26,    22,    21,    22,    21,
      22,    21,    21,    27,    39,    39,    31,     4,     4,     4,
       4,    39,    39,    39,    39,    26,    29,    29,    29,    29,
      29,    26,    26,    26,    16,    31,    30,    30,    30,    30,
      30,    31,    31,    31,    39,     3,     5,     5,     5,     5,
      29,    28,     3,     4,     3,     4,     3,     4,     3,     4,
      26,    39,    26,    26,    26,    26,    26,    26,    26,    26,
      26,    31,    31,    31,    31,    31,    31,    31,    31,    31,
       8,    30,     3,    28,    39,    26,    31,    31
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    32,    33,    33,    33,    33,    33,    33,    33,    33,
      33,    33,    33,    33,    33,    33,    33,    33,    34,    34,
      34,    34,    34,    34,    34,    34,    35,    36,    36,    36,
      37,    38,    38,    38,    38,    38,    39,    39,    39,    39,
      39,    39,    39,    39,    39,    39,    39,    39,    39,    39,
      39,    40,    40
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     2,     4,     3,     3,     2,     3,
       1,     2,     1,     2,     1,     2,     1,     2,    21,    21,
      21,    21,    21,    21,    21,    21,    19,    17,    17,    17,
       3,    17,    10,    30,    15,     9,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1
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
#line 47 "var.y" /* yacc.c:1646  */
    {exit(0);}
#line 1456 "var.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 48 "var.y" /* yacc.c:1646  */
    { printf("Printing: %d\n",(yyvsp[-1].no)); fprintf(yyout,"%s := %d;\nprint %s;\n\n",reg[0],(yyvsp[-1].no),reg[0]); }
#line 1462 "var.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 49 "var.y" /* yacc.c:1646  */
    {;}
#line 1468 "var.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 50 "var.y" /* yacc.c:1646  */
    { {printf("Printing: %d \n",(yyvsp[-1].no));} fprintf(yyout,"%s := %d;\nprint %s;\n\n",reg[0],(yyvsp[-1].no),reg[0]); ; }
#line 1474 "var.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 51 "var.y" /* yacc.c:1646  */
    {;}
#line 1480 "var.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 52 "var.y" /* yacc.c:1646  */
    {exit(EXIT_SUCCESS);}
#line 1486 "var.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 53 "var.y" /* yacc.c:1646  */
    { dis();}
#line 1492 "var.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 54 "var.y" /* yacc.c:1646  */
    { dis();}
#line 1498 "var.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 55 "var.y" /* yacc.c:1646  */
    { ;	}
#line 1504 "var.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 56 "var.y" /* yacc.c:1646  */
    { ; }
#line 1510 "var.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 57 "var.y" /* yacc.c:1646  */
    { ; }
#line 1516 "var.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 58 "var.y" /* yacc.c:1646  */
    { ; }
#line 1522 "var.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 59 "var.y" /* yacc.c:1646  */
    { ; }
#line 1528 "var.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 60 "var.y" /* yacc.c:1646  */
    { ; }
#line 1534 "var.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 61 "var.y" /* yacc.c:1646  */
    {;}
#line 1540 "var.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 62 "var.y" /* yacc.c:1646  */
    {;}
#line 1546 "var.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 67 "var.y" /* yacc.c:1646  */
    {  {installid((yyvsp[-18].var),(yyvsp[-16].no));} val=getid((yyvsp[-18].var));val1=(yyvsp[-12].no);val2=(yyvsp[-2].no); inc=(yyvsp[-6].no); 
                           for(;val<val1;  )
                          {  
	                  	val=val+inc;
	           		printf("%d",val2); 
                          }
		          }
#line 1558 "var.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 75 "var.y" /* yacc.c:1646  */
    {  {installid((yyvsp[-18].var),(yyvsp[-16].no));} val=getid((yyvsp[-18].var));val1=(yyvsp[-12].no);val2=(yyvsp[-2].no); inc=(yyvsp[-6].no); 
                           for(;val<=val1;  )
                          {  
	                  	val=val+inc;
	           		printf("%d",val2); 
                          }
		          }
#line 1570 "var.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 83 "var.y" /* yacc.c:1646  */
    {  {installid((yyvsp[-18].var),(yyvsp[-16].no));} val=getid((yyvsp[-18].var));val1=(yyvsp[-12].no);val2=(yyvsp[-2].no); inc=(yyvsp[-6].no); 
                           for(;val>val1;  )
                          {  
	                  	val=val-inc;
	           		printf("%d",val2); 
                          }
		          }
#line 1582 "var.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 91 "var.y" /* yacc.c:1646  */
    {  {installid((yyvsp[-18].var),(yyvsp[-16].no));} val=getid((yyvsp[-18].var));val1=(yyvsp[-12].no);val2=(yyvsp[-2].no); inc=(yyvsp[-6].no); 
                           for(;val>=val1;  )
                          {  
	                  	val=val-inc;
	           		printf("%d",val2); 
                          }
		          }
#line 1594 "var.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 99 "var.y" /* yacc.c:1646  */
    {  {installid((yyvsp[-18].var),(yyvsp[-16].no));} val=getid((yyvsp[-18].var));val1=(yyvsp[-12].no);val2=getid((yyvsp[-2].var)); inc=(yyvsp[-6].no); 
                           for(;val<val1;  )
                          {  
	                  	val=val+inc;
	           		printf("%d",val); 
                          }
		          }
#line 1606 "var.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 107 "var.y" /* yacc.c:1646  */
    {  {installid((yyvsp[-18].var),(yyvsp[-16].no));} val=getid((yyvsp[-18].var));val1=(yyvsp[-12].no);val2=getid((yyvsp[-2].var)); inc=(yyvsp[-6].no); 
                           for(;val<=val1;  )
                          {  
	                  	val=val+inc;
	           		printf("%d",val); 
                          }
		          }
#line 1618 "var.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 115 "var.y" /* yacc.c:1646  */
    {  {installid((yyvsp[-18].var),(yyvsp[-16].no));} val=getid((yyvsp[-18].var));val1=(yyvsp[-12].no);val2=getid((yyvsp[-2].var)); inc=(yyvsp[-6].no); 
                           for(;val>val1;  )
                          {  
	                  	val=val-inc;
	           		    printf("%d",val); 
                          }
		          }
#line 1630 "var.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 123 "var.y" /* yacc.c:1646  */
    {  {installid((yyvsp[-18].var),(yyvsp[-16].no));} val=getid((yyvsp[-18].var));val1=(yyvsp[-12].no);val2=getid((yyvsp[-2].var)); inc=(yyvsp[-6].no); 
                           for(;val>=val1;  )
                          {  
	                  	val=val-inc;
	           		printf("%d",val); 
                          }
		          }
#line 1642 "var.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 133 "var.y" /* yacc.c:1646  */
    { int n=(yyvsp[-4].no);do{printf("Printing: %d\n",n);n=n+(yyvsp[-9].no); }while(n<=(yyvsp[-2].no));installid((yyvsp[-13].var),n); 
fprintf(yyout,"L1: print %s;\n%s := %s + %d;\n%s := %s;\n%s = %s <= %d; \nif (%s) goto L1;\n\n",reg[0],reg[0],reg[0],(yyvsp[-9].no),(yyvsp[-13].var),reg[0],reg[1],(yyvsp[-13].var),(yyvsp[-2].no),reg[1]);}
#line 1649 "var.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 137 "var.y" /* yacc.c:1646  */
    {int loopvar=(yyvsp[-6].no); while(loopvar>(yyvsp[-12].no)){if((yyvsp[-8].no)==(yyvsp[-6].no)){printf("Printing: %d\n",loopvar);}
	else {printf("printing: %d\n",(yyvsp[-8].no));} loopvar=loopvar-(yyvsp[-2].no);}}
#line 1656 "var.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 139 "var.y" /* yacc.c:1646  */
    {int loopvar=(yyvsp[-6].no); 		while(loopvar<(yyvsp[-12].no)){if((yyvsp[-8].no)==(yyvsp[-6].no)){printf("Printing: %d\n",loopvar);}
	else {printf("printing: %d\n",(yyvsp[-8].no));} loopvar=loopvar+(yyvsp[-2].no);}}
#line 1663 "var.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 141 "var.y" /* yacc.c:1646  */
    {int loopvar=(yyvsp[-6].no); 				while(loopvar!=(yyvsp[-12].no)){if((yyvsp[-8].no)==(yyvsp[-6].no)){printf("Printing: %d\n",loopvar);}
	else {printf("printing: %d\n",(yyvsp[-8].no));} loopvar=loopvar+(yyvsp[-2].no);}}
#line 1670 "var.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 146 "var.y" /* yacc.c:1646  */
    { {installid((yyvsp[-2].var),(yyvsp[0].no));} fprintf(yyout,"%s := %d;\n %s := %s;\n\n",reg[0],(yyvsp[0].no),(yyvsp[-2].var),reg[0]); ; }
#line 1676 "var.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 148 "var.y" /* yacc.c:1646  */
    { if((yyvsp[-14].no)>0){installid((yyvsp[-11].var),(yyvsp[-9].no));}else{installid((yyvsp[-4].var),(yyvsp[-2].no));} 
	fprintf(yyout,"if z %s goto _LABEL;\n%s := %d;\n%s := %s;\n_LABEL : else;\n%s := %d;\n%s := %s;\n\n",reg[0],reg[1],(yyvsp[-9].no),(yyvsp[-11].var),reg[1],reg[2],(yyvsp[-2].no),(yyvsp[-4].var),reg[2]); ;}
#line 1683 "var.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 150 "var.y" /* yacc.c:1646  */
    { if((yyvsp[-7].no)>0){installid((yyvsp[-4].var),(yyvsp[-2].no));} 
fprintf(yyout,"if nz %s;\n%s := %d;\n%s := %s;\n\n",reg[0],reg[1],(yyvsp[-2].no),(yyvsp[-4].var),reg[1]); ;}
#line 1690 "var.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 153 "var.y" /* yacc.c:1646  */
    { if((yyvsp[-27].no)>0){installid((yyvsp[-24].var),(yyvsp[-22].no));}else{ if((yyvsp[-15].no)>0){installid((yyvsp[-12].var),(yyvsp[-10].no));}else{ installid((yyvsp[-5].var),(yyvsp[-3].no));} } 
fprintf(yyout, "if z %s goto _MAINELSE; \n%s := %d;\n%s := %s;\n\n _MAINELSE : else;\n if z %s goto _LABEL;\n%s := %d;\n%s := %s;\n_LABEL : else;\n%s := %d;\n%s := %s;\n\n;",reg[0],reg[1],(yyvsp[-22].no),(yyvsp[-24].var),reg[1],reg[2],reg[3],(yyvsp[-10].no),(yyvsp[-12].var),reg[3],reg[4],(yyvsp[-3].no),(yyvsp[-5].var),reg[4]); ; }
#line 1697 "var.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 156 "var.y" /* yacc.c:1646  */
    { if((yyvsp[-12].no)>0){printf("Printing: %d\n",(yyvsp[-8].no));}else{printf("Printing: %d\n",(yyvsp[-2].no));} 
fprintf(yyout,"if z %s goto _LABEL;\n%s := %d;\nprint %s;\n_LABEL : else;\n%s := %d;\nprint %s;\n\n",reg[0],reg[1],(yyvsp[-8].no),reg[1],reg[2],(yyvsp[-2].no),reg[2]);; }
#line 1704 "var.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 159 "var.y" /* yacc.c:1646  */
    {if((yyvsp[-6].no)>0){printf("Printing: %d\n",(yyvsp[-2].no)); }
fprintf(yyout,"if nz %s; \n%s := %d \nPrint %s",reg[0],reg[1],(yyvsp[-2].no),reg[1]) ; }
#line 1711 "var.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 164 "var.y" /* yacc.c:1646  */
    { {(yyval.no) = (yyvsp[0].no);} /*fprintf(yyout,"%s := %d;\n ",reg[0],$1);*/ ; }
#line 1717 "var.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 165 "var.y" /* yacc.c:1646  */
    { {(yyval.no) = (yyvsp[-2].no) + (yyvsp[0].no);} /*fprintf(yyout,"%s := %d + %d;\n ",reg[0],$1,$3);*/ ; }
#line 1723 "var.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 166 "var.y" /* yacc.c:1646  */
    { {(yyval.no) = (yyvsp[-2].no) - (yyvsp[0].no);} /*fprintf(yyout,"%s := %d - %d;\n ",reg[0],$1,$3);*/ ; }
#line 1729 "var.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 167 "var.y" /* yacc.c:1646  */
    { {(yyval.no) = (yyvsp[-2].no) * (yyvsp[0].no);} /*fprintf(yyout,"%s := %d * %d;\n ",reg[0],$1,$3);*/ ; }
#line 1735 "var.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 168 "var.y" /* yacc.c:1646  */
    { {(yyval.no) = (yyvsp[-2].no) / (yyvsp[0].no);} /*fprintf(yyout,"%s := %d / %d;\n ",reg[0],$1,$3);*/ ; }
#line 1741 "var.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 169 "var.y" /* yacc.c:1646  */
    { {(yyval.no)= (yyvsp[-2].no) % (yyvsp[0].no);}}
#line 1747 "var.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 170 "var.y" /* yacc.c:1646  */
    { {(yyval.no) =relop((yyvsp[-2].no),(yyvsp[0].no),1);} /*fprintf(yyout,"%s := %c > %d;\n ",reg[0],$1,$3); */;}
#line 1753 "var.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 171 "var.y" /* yacc.c:1646  */
    { {(yyval.no) =relop((yyvsp[-2].no),(yyvsp[0].no),2);} /*fprintf(yyout,"%s := %c < %d;\n ",reg[0],$1,$3); */;}
#line 1759 "var.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 172 "var.y" /* yacc.c:1646  */
    { {(yyval.no) =relop((yyvsp[-2].no),(yyvsp[0].no),3);} /*fprintf(yyout,"%s := %c eq %d;\n ",reg[0],$1,$3); */;}
#line 1765 "var.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 173 "var.y" /* yacc.c:1646  */
    { {(yyval.no) =relop((yyvsp[-2].no),(yyvsp[0].no),4);} /*fprintf(yyout,"%s := %c neq %d;\n ",reg[0],$1,$3); */;}
#line 1771 "var.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 174 "var.y" /* yacc.c:1646  */
    { {(yyval.no) =relop((yyvsp[-2].no),(yyvsp[0].no),5);} /*fprintf(yyout,"%s := %c ge %d;\n ",reg[0],$1,$3); */;}
#line 1777 "var.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 175 "var.y" /* yacc.c:1646  */
    { {(yyval.no) =relop((yyvsp[-2].no),(yyvsp[0].no),6);} /*fprintf(yyout,"%s := %c le %d;\n ",reg[0],$1,$3); */;}
#line 1783 "var.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 176 "var.y" /* yacc.c:1646  */
    { {(yyval.no) = (yyvsp[-1].no);} /*fprintf(yyout,"%s := %d;\n ",reg[0],$2); */;}
#line 1789 "var.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 177 "var.y" /* yacc.c:1646  */
    { {(yyval.no) =relop((yyvsp[-2].no),(yyvsp[0].no),7);} /*fprintf(yyout,"%s := %c and %d;\n ",reg[0],$1,$3);*/ ;}
#line 1795 "var.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 178 "var.y" /* yacc.c:1646  */
    { {(yyval.no) =relop((yyvsp[-2].no),(yyvsp[0].no),8);} /*fprintf(yyout,"%s := %c or %d;\n ",reg[0],$1,$3);*/ ;}
#line 1801 "var.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 181 "var.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1807 "var.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 182 "var.y" /* yacc.c:1646  */
    {(yyval.no)=getid((yyvsp[0].var));}
#line 1813 "var.tab.c" /* yacc.c:1646  */
    break;


#line 1817 "var.tab.c" /* yacc.c:1646  */
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
#line 184 "var.y" /* yacc.c:1906  */

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
