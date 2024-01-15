/* A Bison parser, made by GNU Bison 3.8.2.  */

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
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "interpreter.y"

    #include "interpreter.h"
    int yylex();
    int yyerror(const char *msg);
    int EsteCorecta = 1;
    char msg[500];

#line 79 "interpreter.tab.c"

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

#include "interpreter.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOK_PLUS = 3,                   /* TOK_PLUS  */
  YYSYMBOL_TOK_MINUS = 4,                  /* TOK_MINUS  */
  YYSYMBOL_TOK_MULTIPLY = 5,               /* TOK_MULTIPLY  */
  YYSYMBOL_TOK_DIVIDE = 6,                 /* TOK_DIVIDE  */
  YYSYMBOL_TOK_LEFT = 7,                   /* TOK_LEFT  */
  YYSYMBOL_TOK_RIGHT = 8,                  /* TOK_RIGHT  */
  YYSYMBOL_TOK_PRINT = 9,                  /* TOK_PRINT  */
  YYSYMBOL_TOK_ERROR = 10,                 /* TOK_ERROR  */
  YYSYMBOL_TOK_SCAN = 11,                  /* TOK_SCAN  */
  YYSYMBOL_TOK_DECLARE_INT = 12,           /* TOK_DECLARE_INT  */
  YYSYMBOL_TOK_DECLARE_DOUBLE = 13,        /* TOK_DECLARE_DOUBLE  */
  YYSYMBOL_TOK_DECLARE_FLOAT = 14,         /* TOK_DECLARE_FLOAT  */
  YYSYMBOL_TOK_INT = 15,                   /* TOK_INT  */
  YYSYMBOL_TOK_DOUBLE = 16,                /* TOK_DOUBLE  */
  YYSYMBOL_TOK_FLOAT = 17,                 /* TOK_FLOAT  */
  YYSYMBOL_TOK_VARIABLE = 18,              /* TOK_VARIABLE  */
  YYSYMBOL_19_ = 19,                       /* ';'  */
  YYSYMBOL_20_ = 20,                       /* '='  */
  YYSYMBOL_YYACCEPT = 21,                  /* $accept  */
  YYSYMBOL_S = 22,                         /* S  */
  YYSYMBOL_I = 23,                         /* I  */
  YYSYMBOL_E = 24                          /* E  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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
typedef yytype_int8 yy_state_t;

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

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   107

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  21
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  4
/* YYNRULES -- Number of rules.  */
#define YYNRULES  28
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  63

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   273


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,    19,
       2,    20,     2,     2,     2,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    31,    31,    32,    33,    36,    61,    84,   107,   130,
     153,   176,   199,   240,   284,   319,   355,   390,   426,   461,
     498,   499,   500,   501,   515,   516,   517,   518,   519
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
  "\"end of file\"", "error", "\"invalid token\"", "TOK_PLUS",
  "TOK_MINUS", "TOK_MULTIPLY", "TOK_DIVIDE", "TOK_LEFT", "TOK_RIGHT",
  "TOK_PRINT", "TOK_ERROR", "TOK_SCAN", "TOK_DECLARE_INT",
  "TOK_DECLARE_DOUBLE", "TOK_DECLARE_FLOAT", "TOK_INT", "TOK_DOUBLE",
  "TOK_FLOAT", "TOK_VARIABLE", "';'", "'='", "$accept", "S", "I", "E", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-17)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       4,   -16,   -17,     3,    12,    24,    36,    35,    66,    48,
     -17,   -17,    52,    61,    67,    34,   -17,     4,    41,    46,
      53,    -6,   -17,   -17,   -17,   -17,    80,   -17,    16,    80,
      22,    80,    29,    80,    58,    81,    82,    83,    74,    58,
      58,    58,    58,    84,    85,    86,    70,    77,    78,   -17,
      14,    14,   -17,   -17,    79,    87,    88,   -17,   -17,   -17,
     -17,   -17,   -17
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     4,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     7,     9,    11,     0,     1,     2,     0,     0,
       0,     0,    25,    26,    27,    28,     5,     3,     0,     6,
       0,     8,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
      20,    21,    22,    23,     0,     0,     0,    14,    16,    18,
      15,    17,    19
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -17,    90,   -17,   -15
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     8,     9,    38
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      26,    34,    10,    29,    31,    33,    35,    36,    37,    22,
      23,    24,    25,     1,     2,     3,     4,     5,     6,    41,
      42,    11,     7,    34,    50,    51,    52,    53,    43,    34,
      12,    22,    23,    24,    25,    44,    34,    22,    23,    24,
      25,    21,    13,    45,    22,    23,    24,    25,    28,    22,
      23,    24,    25,    30,    14,    15,    22,    23,    24,    25,
      32,    22,    23,    24,    25,    34,    16,    17,    22,    23,
      24,    25,    18,    22,    23,    24,    25,    39,    40,    41,
      42,    19,    49,    39,    40,    41,    42,    20,    57,    46,
      47,    48,    54,    55,    56,    58,    59,    60,     0,     0,
       0,     0,     0,     0,     0,    61,    62,    27
};

static const yytype_int8 yycheck[] =
{
      15,     7,    18,    18,    19,    20,    12,    13,    14,    15,
      16,    17,    18,     9,    10,    11,    12,    13,    14,     5,
       6,    18,    18,     7,    39,    40,    41,    42,    12,     7,
      18,    15,    16,    17,    18,    13,     7,    15,    16,    17,
      18,     7,    18,    14,    15,    16,    17,    18,     7,    15,
      16,    17,    18,     7,    18,    20,    15,    16,    17,    18,
       7,    15,    16,    17,    18,     7,     0,    19,    15,    16,
      17,    18,    20,    15,    16,    17,    18,     3,     4,     5,
       6,    20,     8,     3,     4,     5,     6,    20,    18,     8,
       8,     8,     8,     8,     8,    18,    18,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    18,    17
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     9,    10,    11,    12,    13,    14,    18,    22,    23,
      18,    18,    18,    18,    18,    20,     0,    19,    20,    20,
      20,     7,    15,    16,    17,    18,    24,    22,     7,    24,
       7,    24,     7,    24,     7,    12,    13,    14,    24,     3,
       4,     5,     6,    12,    13,    14,     8,     8,     8,     8,
      24,    24,    24,    24,     8,     8,     8,    18,    18,    18,
      18,    18,    18
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    21,    22,    22,    22,    23,    23,    23,    23,    23,
      23,    23,    23,    23,    23,    23,    23,    23,    23,    23,
      24,    24,    24,    24,    24,    24,    24,    24,    24
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     3,     1,     3,     4,     2,     4,     2,
       4,     2,     2,     2,     6,     7,     6,     7,     6,     7,
       3,     3,     3,     3,     3,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

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

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
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
                 int yyrule)
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
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
      yychar = yylex ();
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
  case 4: /* S: TOK_ERROR  */
#line 33 "interpreter.y"
                { EsteCorecta = 0; }
#line 1241 "interpreter.tab.c"
    break;

  case 5: /* I: TOK_VARIABLE '=' E  */
#line 37 "interpreter.y"
{
    if(ts != NULL)
    {
        if(ts->exists((yyvsp[-2].sir)) == 1)
        {
            ts->setValueDouble((yyvsp[-2].sir), (yyvsp[0].val_double));
        }
        else
        {
            sprintf(msg,"%d:%d Eroare semantica: Variabila %s este utilizata fara sa fi fost declarata!", (yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].sir));
            yyerror(msg);
            YYERROR;
        }
    }
    else
    {
        sprintf(msg,"%d:%d Eroare semantica: Variabila %s este utilizata fara sa fi fost declarata!", (yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].sir));
        yyerror(msg);
        YYERROR;
    }
        
}
#line 1268 "interpreter.tab.c"
    break;

  case 6: /* I: TOK_DECLARE_INT TOK_VARIABLE '=' E  */
#line 62 "interpreter.y"
{
    if(ts != NULL)
    {
        if(ts->exists((yyvsp[-2].sir)) == 1)
        {
            ts->setValueInt((yyvsp[-2].sir), (yyvsp[0].val_double));
        }
        else
        {
            ts->addInt((yyvsp[-2].sir));
            ts->setValueInt((yyvsp[-2].sir), (yyvsp[0].val_double));
        }
    }
    else
    {
        ts = new TVAR();
        ts->addInt((yyvsp[-2].sir));
        ts->setValueInt((yyvsp[-2].sir), (yyvsp[0].val_double));
    }
        
}
#line 1294 "interpreter.tab.c"
    break;

  case 7: /* I: TOK_DECLARE_INT TOK_VARIABLE  */
#line 85 "interpreter.y"
{
    if(ts != NULL)
    {
        if(ts->exists((yyvsp[0].sir)) == 0)
        {
            ts->addInt((yyvsp[0].sir));
        }
        else
        {
            sprintf(msg,"%d:%d Eroare semantica: Declaratii multiple pentru variabila %s!", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].sir));
            yyerror(msg);
            YYERROR;
        }
    }
    else
    {
        ts = new TVAR();
        ts->addInt((yyvsp[0].sir));
    }
}
#line 1319 "interpreter.tab.c"
    break;

  case 8: /* I: TOK_DECLARE_DOUBLE TOK_VARIABLE '=' E  */
#line 108 "interpreter.y"
{
    if(ts != NULL)
    {
        if(ts->exists((yyvsp[-2].sir)) == 1)
        {
            ts->setValueDouble((yyvsp[-2].sir), (yyvsp[0].val_double));
        }
        else
        {
            ts->addDouble((yyvsp[-2].sir));
            ts->setValueDouble((yyvsp[-2].sir), (yyvsp[0].val_double));
        }
    }
    else
    {
        ts = new TVAR();
        ts->addDouble((yyvsp[-2].sir));
        ts->setValueDouble((yyvsp[-2].sir), (yyvsp[0].val_double));
    }
        
}
#line 1345 "interpreter.tab.c"
    break;

  case 9: /* I: TOK_DECLARE_DOUBLE TOK_VARIABLE  */
#line 131 "interpreter.y"
{
    if(ts != NULL)
    {
        if(ts->exists((yyvsp[0].sir)) == 0)
        {
            ts->addDouble((yyvsp[0].sir));
        }
        else
        {
            sprintf(msg,"%d:%d Eroare semantica: Declaratii multiple pentru variabila %s!", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].sir));
            yyerror(msg);
            YYERROR;
        }
    }
    else
    {
        ts = new TVAR();
        ts->addDouble((yyvsp[0].sir));
    }
}
#line 1370 "interpreter.tab.c"
    break;

  case 10: /* I: TOK_DECLARE_FLOAT TOK_VARIABLE '=' E  */
#line 154 "interpreter.y"
{
    if(ts != NULL)
    {
        if(ts->exists((yyvsp[-2].sir)) == 1)
        {
            ts->setValueFloat((yyvsp[-2].sir), (yyvsp[0].val_double));
        }
        else
        {
            ts->addFloat((yyvsp[-2].sir));
            ts->setValueFloat((yyvsp[-2].sir), (yyvsp[0].val_double));
        }
    }
    else
    {
        ts = new TVAR();
        ts->addFloat((yyvsp[-2].sir));
        ts->setValueFloat((yyvsp[-2].sir), (yyvsp[0].val_double));
    }
        
}
#line 1396 "interpreter.tab.c"
    break;

  case 11: /* I: TOK_DECLARE_FLOAT TOK_VARIABLE  */
#line 177 "interpreter.y"
{
    if(ts != NULL)
    {
        if(ts->exists((yyvsp[0].sir)) == 0)
        {
            ts->addFloat((yyvsp[0].sir));
        }
        else
        {
            sprintf(msg,"%d:%d Eroare semantica: Declaratii multiple pentru variabila %s!", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].sir));
            yyerror(msg);
            YYERROR;
        }
    }
    else
    {
        ts = new TVAR();
        ts->addFloat((yyvsp[0].sir));
    }
}
#line 1421 "interpreter.tab.c"
    break;

  case 12: /* I: TOK_PRINT TOK_VARIABLE  */
#line 200 "interpreter.y"
{
    if(ts != NULL)
    {
        if(ts->exists((yyvsp[0].sir)) == 1)
        {
            if(ts->getValueInt((yyvsp[0].sir)) != -1)
            {
                printf("%d\n", ts->getValueInt((yyvsp[0].sir)));
            }
            else if(ts->getValueDouble((yyvsp[0].sir)) != -1)
            {
                printf("%f\n", ts->getValueDouble((yyvsp[0].sir)));
            }
            else if(ts->getValueFloat((yyvsp[0].sir)) != -1)
            {
                printf("%f\n", ts->getValueFloat((yyvsp[0].sir)));
            }
            else
            {
                
                sprintf(msg,"%d:%d Eroare semantica: Variabila %s este utilizata fara sa fi fost initializata!", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].sir));
                yyerror(msg);
                YYERROR;
            }
        }
        else
        {
            sprintf(msg,"%d:%d Eroare semantica: Variabila %s este utilizata fara sa fi fost declarata!", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].sir));
            yyerror(msg);
            YYERROR;
        }
    }
    else
    {
        sprintf(msg,"%d:%d Eroare semantica: Variabila %s este utilizata fara sa fi fost declarata!", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].sir));
        yyerror(msg);
        YYERROR;
    }
}
#line 1465 "interpreter.tab.c"
    break;

  case 13: /* I: TOK_SCAN TOK_VARIABLE  */
#line 241 "interpreter.y"
{
    if(ts != NULL)
    {
        if(ts->exists((yyvsp[0].sir)) == 1)
        {
            if(ts->checkIsInt((yyvsp[0].sir))){
                int a;
                printf("Introduceti numarul: ");
                scanf("%d", &a);
                ts->setValueInt((yyvsp[0].sir), a);
            }

            else if(ts->checkIsDouble((yyvsp[0].sir))){
                double a;
                printf("Introduceti numarul: ");
                scanf("%lf", &a);
                ts->setValueDouble((yyvsp[0].sir), a);
            }

            else if(ts->checkIsFloat((yyvsp[0].sir))){
                float a;
                printf("Introduceti numarul: ");
                scanf("%f", &a);
                ts->setValueFloat((yyvsp[0].sir), a);
            }
        }
        else
        {
            sprintf(msg,"%d:%d Eroare semantica: Variabila %s este utilizata fara sa fi fost declarata!", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].sir));
            yyerror(msg);
            YYERROR;
        }
    }
    else
    {
        sprintf(msg,"%d:%d Eroare semantica: Variabila %s este utilizata fara sa fi fost declarata!", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].sir));
        yyerror(msg);
        YYERROR;
    }
    printf("Finish scan!\n");
}
#line 1511 "interpreter.tab.c"
    break;

  case 14: /* I: TOK_VARIABLE '=' TOK_LEFT TOK_DECLARE_INT TOK_RIGHT TOK_VARIABLE  */
#line 285 "interpreter.y"
{
    if (ts != NULL){
        printf("Convert to int!\n");
        if(ts->checkIsInt((yyvsp[-5].sir))){
            if (ts->checkIsInt((yyvsp[0].sir))){
                ts->setValueInt((yyvsp[-5].sir), ts->getValueInt((yyvsp[0].sir)));
            }
            else if (ts->checkIsDouble((yyvsp[0].sir))){
                ts->setValueInt((yyvsp[-5].sir), (int)ts->getValueDouble((yyvsp[0].sir)));
            }
            else if (ts->checkIsFloat((yyvsp[0].sir))){
                ts->setValueInt((yyvsp[-5].sir), (int)ts->getValueFloat((yyvsp[0].sir)));
            }
            else{
                sprintf(msg,"%d:%d Eroare semantica: Variabila %s nu exista!", (yylsp[-5]).first_line, (yylsp[-5]).first_column, (yyvsp[0].sir));
                yyerror(msg);
                YYERROR;
            }
        }

        else{
            sprintf(msg,"%d:%d Eroare semantica: Variabila %s nu este int!", (yylsp[-5]).first_line, (yylsp[-5]).first_column, (yyvsp[-5].sir));
            yyerror(msg);
            YYERROR;
        }

    }
    else {
        sprintf(msg,"%d:%d Eroare semantica: Variabila %s este utilizata fara sa fi fost declarata!", (yylsp[-5]).first_line, (yylsp[-5]).first_column, (yyvsp[-5].sir));
        yyerror(msg);
        YYERROR;
    }
}
#line 1549 "interpreter.tab.c"
    break;

  case 15: /* I: TOK_DECLARE_INT TOK_VARIABLE '=' TOK_LEFT TOK_DECLARE_INT TOK_RIGHT TOK_VARIABLE  */
#line 320 "interpreter.y"
{
    if (ts != NULL){
        printf("Convert to int!\n");
        if(ts->checkIsInt((yyvsp[-5].sir))){
            if (ts->checkIsInt((yyvsp[0].sir))){
                ts->setValueInt((yyvsp[-5].sir), ts->getValueInt((yyvsp[0].sir)));
            }
            else if (ts->checkIsDouble((yyvsp[0].sir))){
                ts->setValueInt((yyvsp[-5].sir), (int)ts->getValueDouble((yyvsp[0].sir)));
            }
            else if (ts->checkIsFloat((yyvsp[0].sir))){
                ts->setValueInt((yyvsp[-5].sir), (int)ts->getValueFloat((yyvsp[0].sir)));
            }
            else{
                sprintf(msg,"%d:%d Eroare semantica: Variabila %s nu exista!", (yylsp[-6]).first_line, (yylsp[-6]).first_column, (yyvsp[0].sir));
                yyerror(msg);
                YYERROR;
            }
        }

        else{
            sprintf(msg,"%d:%d Eroare semantica: Variabila %s nu este int!", (yylsp[-6]).first_line, (yylsp[-6]).first_column, (yyvsp[-5].sir));
            yyerror(msg);
            YYERROR;
        }

    }
    else {
        sprintf(msg,"%d:%d Eroare semantica: Variabila %s este utilizata fara sa fi fost declarata!", (yylsp[-6]).first_line, (yylsp[-6]).first_column, (yyvsp[-5].sir));
        yyerror(msg);
        YYERROR;
    }
}
#line 1587 "interpreter.tab.c"
    break;

  case 16: /* I: TOK_VARIABLE '=' TOK_LEFT TOK_DECLARE_DOUBLE TOK_RIGHT TOK_VARIABLE  */
#line 356 "interpreter.y"
{
    if (ts != NULL){
        printf("Convert to double!\n");
        if(ts->checkIsDouble((yyvsp[-5].sir))){
            if (ts->checkIsInt((yyvsp[0].sir))){
                ts->setValueDouble((yyvsp[-5].sir), (double)ts->getValueInt((yyvsp[0].sir)));
            }
            else if (ts->checkIsDouble((yyvsp[0].sir))){
                ts->setValueDouble((yyvsp[-5].sir), ts->getValueDouble((yyvsp[0].sir)));
            }
            else if (ts->checkIsFloat((yyvsp[0].sir))){
                ts->setValueDouble((yyvsp[-5].sir), (double)ts->getValueFloat((yyvsp[0].sir)));
            }
            else{
                sprintf(msg,"%d:%d Eroare semantica: Variabila %s nu exista!", (yylsp[-5]).first_line, (yylsp[-5]).first_column, (yyvsp[0].sir));
                yyerror(msg);
                YYERROR;
            }
        }

        else{
            sprintf(msg,"%d:%d Eroare semantica: Variabila %s nu este double!", (yylsp[-5]).first_line, (yylsp[-5]).first_column, (yyvsp[-5].sir));
            yyerror(msg);
            YYERROR;
        }

    }
    else {
        sprintf(msg,"%d:%d Eroare semantica: Variabila %s este utilizata fara sa fi fost declarata!", (yylsp[-5]).first_line, (yylsp[-5]).first_column, (yyvsp[-5].sir));
        yyerror(msg);
        YYERROR;
    }
}
#line 1625 "interpreter.tab.c"
    break;

  case 17: /* I: TOK_DECLARE_DOUBLE TOK_VARIABLE '=' TOK_LEFT TOK_DECLARE_DOUBLE TOK_RIGHT TOK_VARIABLE  */
#line 391 "interpreter.y"
{
    if (ts != NULL){
        printf("Convert to double!\n");
        if(ts->checkIsDouble((yyvsp[-5].sir))){
            if (ts->checkIsInt((yyvsp[0].sir))){
                ts->setValueDouble((yyvsp[-5].sir), (double)ts->getValueInt((yyvsp[0].sir)));
            }
            else if (ts->checkIsDouble((yyvsp[0].sir))){
                ts->setValueDouble((yyvsp[-5].sir), ts->getValueDouble((yyvsp[0].sir)));
            }
            else if (ts->checkIsFloat((yyvsp[0].sir))){
                ts->setValueDouble((yyvsp[-5].sir), (double)ts->getValueFloat((yyvsp[0].sir)));
            }
            else{
                sprintf(msg,"%d:%d Eroare semantica: Variabila %s nu exista!", (yylsp[-6]).first_line, (yylsp[-6]).first_column, (yyvsp[0].sir));
                yyerror(msg);
                YYERROR;
            }
        }

        else{
            sprintf(msg,"%d:%d Eroare semantica: Variabila %s nu este double!", (yylsp[-6]).first_line, (yylsp[-6]).first_column, (yyvsp[-5].sir));
            yyerror(msg);
            YYERROR;
        }

    }
    else {
        sprintf(msg,"%d:%d Eroare semantica: Variabila %s este utilizata fara sa fi fost declarata!", (yylsp[-6]).first_line, (yylsp[-6]).first_column, (yyvsp[-5].sir));
        yyerror(msg);
        YYERROR;
    }
}
#line 1663 "interpreter.tab.c"
    break;

  case 18: /* I: TOK_VARIABLE '=' TOK_LEFT TOK_DECLARE_FLOAT TOK_RIGHT TOK_VARIABLE  */
#line 427 "interpreter.y"
{
    if (ts != NULL){
        printf("Convert to float!\n");
        if(ts->checkIsFloat((yyvsp[-5].sir))){
            if (ts->checkIsInt((yyvsp[0].sir))){
                ts->setValueFloat((yyvsp[-5].sir), (float)ts->getValueInt((yyvsp[0].sir)));
            }
            else if (ts->checkIsDouble((yyvsp[0].sir))){
                ts->setValueFloat((yyvsp[-5].sir), (float)ts->getValueDouble((yyvsp[0].sir)));
            }
            else if (ts->checkIsFloat((yyvsp[0].sir))){
                ts->setValueFloat((yyvsp[-5].sir), ts->getValueFloat((yyvsp[0].sir)));
            }
            else{
                sprintf(msg,"%d:%d Eroare semantica: Variabila %s nu exista!", (yylsp[-5]).first_line, (yylsp[-5]).first_column, (yyvsp[0].sir));
                yyerror(msg);
                YYERROR;
            }
        }

        else{
            sprintf(msg,"%d:%d Eroare semantica: Variabila %s nu este float!", (yylsp[-5]).first_line, (yylsp[-5]).first_column, (yyvsp[-5].sir));
            yyerror(msg);
            YYERROR;
        }

    }
    else {
        sprintf(msg,"%d:%d Eroare semantica: Variabila %s este utilizata fara sa fi fost declarata!", (yylsp[-5]).first_line, (yylsp[-5]).first_column, (yyvsp[-5].sir));
        yyerror(msg);
        YYERROR;
    }
}
#line 1701 "interpreter.tab.c"
    break;

  case 19: /* I: TOK_DECLARE_FLOAT TOK_VARIABLE '=' TOK_LEFT TOK_DECLARE_FLOAT TOK_RIGHT TOK_VARIABLE  */
#line 462 "interpreter.y"
{
    if (ts != NULL){
        printf("Convert to float!\n");
        if(ts->checkIsFloat((yyvsp[-5].sir))){
            if (ts->checkIsInt((yyvsp[0].sir))){
                ts->setValueFloat((yyvsp[-5].sir), (float)ts->getValueInt((yyvsp[0].sir)));
            }
            else if (ts->checkIsDouble((yyvsp[0].sir))){
                ts->setValueFloat((yyvsp[-5].sir), (float)ts->getValueDouble((yyvsp[0].sir)));
            }
            else if (ts->checkIsFloat((yyvsp[0].sir))){
                ts->setValueFloat((yyvsp[-5].sir), ts->getValueFloat((yyvsp[0].sir)));
            }
            else{
                sprintf(msg,"%d:%d Eroare semantica: Variabila %s nu exista!", (yylsp[-6]).first_line, (yylsp[-6]).first_column, (yyvsp[0].sir));
                yyerror(msg);
                YYERROR;
            }
        }

        else{
            sprintf(msg,"%d:%d Eroare semantica: Variabila %s nu este float!", (yylsp[-6]).first_line, (yylsp[-6]).first_column, (yyvsp[-5].sir));
            yyerror(msg);
            YYERROR;
        }

    }
    else {
        sprintf(msg,"%d:%d Eroare semantica: Variabila %s este utilizata fara sa fi fost declarata!", (yylsp[-6]).first_line, (yylsp[-6]).first_column, (yyvsp[-5].sir));
        yyerror(msg);
        YYERROR;
    }
}
#line 1739 "interpreter.tab.c"
    break;

  case 20: /* E: E TOK_PLUS E  */
#line 498 "interpreter.y"
                 { (yyval.val_double) = (yyvsp[-2].val_double) + (yyvsp[0].val_double); }
#line 1745 "interpreter.tab.c"
    break;

  case 21: /* E: E TOK_MINUS E  */
#line 499 "interpreter.y"
                { (yyval.val_double) = (yyvsp[-2].val_double) - (yyvsp[0].val_double); }
#line 1751 "interpreter.tab.c"
    break;

  case 22: /* E: E TOK_MULTIPLY E  */
#line 500 "interpreter.y"
                   { (yyval.val_double) = (yyvsp[-2].val_double) * (yyvsp[0].val_double); }
#line 1757 "interpreter.tab.c"
    break;

  case 23: /* E: E TOK_DIVIDE E  */
#line 502 "interpreter.y"
{
    if((yyvsp[0].val_double) == 0)
    {
        sprintf(msg,"%d:%d Eroare semantica: Impartire la zero!", (yylsp[-2]).first_line, (yylsp[-2]).first_column);
        yyerror(msg);
        YYERROR;
    } 
    else
    { 
        (yyval.val_double) = (yyvsp[-2].val_double) / (yyvsp[0].val_double); 
    } 
}
#line 1774 "interpreter.tab.c"
    break;

  case 24: /* E: TOK_LEFT E TOK_RIGHT  */
#line 515 "interpreter.y"
                       { (yyval.val_double) = (yyvsp[-1].val_double); }
#line 1780 "interpreter.tab.c"
    break;

  case 25: /* E: TOK_INT  */
#line 516 "interpreter.y"
          { (yyval.val_double) = (yyvsp[0].val_int); }
#line 1786 "interpreter.tab.c"
    break;

  case 26: /* E: TOK_DOUBLE  */
#line 517 "interpreter.y"
             { (yyval.val_double) = (yyvsp[0].val_double); }
#line 1792 "interpreter.tab.c"
    break;

  case 27: /* E: TOK_FLOAT  */
#line 518 "interpreter.y"
            { (yyval.val_double) = (yyvsp[0].val_float); }
#line 1798 "interpreter.tab.c"
    break;

  case 28: /* E: TOK_VARIABLE  */
#line 520 "interpreter.y"
    {
        if(ts != NULL && ts->exists((yyvsp[0].sir)))
        {
            if(ts->getValueInt((yyvsp[0].sir)) != -1)
                (yyval.val_double) = ts->getValueInt((yyvsp[0].sir));
            else if(ts->getValueDouble((yyvsp[0].sir)) != -1)
                (yyval.val_double) = ts->getValueDouble((yyvsp[0].sir));
            else if(ts->getValueFloat((yyvsp[0].sir)) != -1)
                (yyval.val_double) = ts->getValueFloat((yyvsp[0].sir));
        }
        else
        {
            sprintf(msg,"%d:%d Eroare semantica: Variabila %s nu este declarata!", (yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].sir));
            yyerror(msg);
            YYERROR;
        }
    }
#line 1820 "interpreter.tab.c"
    break;


#line 1824 "interpreter.tab.c"

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
      yyerror (YY_("syntax error"));
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
                      yytoken, &yylval, &yylloc);
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
  ++yynerrs;

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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 538 "interpreter.y"



