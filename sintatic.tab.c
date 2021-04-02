/* A Bison parser, made by GNU Bison 3.7.4.  */

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
#define YYBISON 30704

/* Bison version string.  */
#define YYBISON_VERSION "3.7.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 8 "sintatic/sintatic.y"

  #include <string.h>
  #include <stdio.h>
  #include <stdlib.h>

  extern int yylex(void);
  extern int yyerror(const char *s);


#line 81 "sintatic.tab.c"

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

#include "sintatic.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_THEN = 3,                       /* THEN  */
  YYSYMBOL_CMD_ELSE = 4,                   /* CMD_ELSE  */
  YYSYMBOL_ID = 5,                         /* ID  */
  YYSYMBOL_MAIN = 6,                       /* MAIN  */
  YYSYMBOL_EMPTY = 7,                      /* EMPTY  */
  YYSYMBOL_TYPE_INT = 8,                   /* TYPE_INT  */
  YYSYMBOL_TYPE_FLOAT = 9,                 /* TYPE_FLOAT  */
  YYSYMBOL_TYPE_ELEM = 10,                 /* TYPE_ELEM  */
  YYSYMBOL_TYPE_SET = 11,                  /* TYPE_SET  */
  YYSYMBOL_ADD_OP = 12,                    /* ADD_OP  */
  YYSYMBOL_MULT_OP = 13,                   /* MULT_OP  */
  YYSYMBOL_CMD_IF = 14,                    /* CMD_IF  */
  YYSYMBOL_CMD_FOR = 15,                   /* CMD_FOR  */
  YYSYMBOL_CMD_FORALL = 16,                /* CMD_FORALL  */
  YYSYMBOL_GT_OP = 17,                     /* GT_OP  */
  YYSYMBOL_LT_OP = 18,                     /* LT_OP  */
  YYSYMBOL_LTE_OP = 19,                    /* LTE_OP  */
  YYSYMBOL_GTE_OP = 20,                    /* GTE_OP  */
  YYSYMBOL_NEQ_OP = 21,                    /* NEQ_OP  */
  YYSYMBOL_EQUAL_OP = 22,                  /* EQUAL_OP  */
  YYSYMBOL_ADD_FUNC = 23,                  /* ADD_FUNC  */
  YYSYMBOL_IS_SET_FUNC = 24,               /* IS_SET_FUNC  */
  YYSYMBOL_REMOVE_FUNC = 25,               /* REMOVE_FUNC  */
  YYSYMBOL_EXIST_FUNC = 26,                /* EXIST_FUNC  */
  YYSYMBOL_IN_OP = 27,                     /* IN_OP  */
  YYSYMBOL_OP_OR = 28,                     /* OP_OR  */
  YYSYMBOL_OP_AND = 29,                    /* OP_AND  */
  YYSYMBOL_OP_NEG = 30,                    /* OP_NEG  */
  YYSYMBOL_ATRIBUTION = 31,                /* ATRIBUTION  */
  YYSYMBOL_CMD_WRITE = 32,                 /* CMD_WRITE  */
  YYSYMBOL_CMD_WRITELN = 33,               /* CMD_WRITELN  */
  YYSYMBOL_CMD_READ = 34,                  /* CMD_READ  */
  YYSYMBOL_CMD_RETURN = 35,                /* CMD_RETURN  */
  YYSYMBOL_INT = 36,                       /* INT  */
  YYSYMBOL_FLOAT = 37,                     /* FLOAT  */
  YYSYMBOL_STRING = 38,                    /* STRING  */
  YYSYMBOL_CHARACTER = 39,                 /* CHARACTER  */
  YYSYMBOL_SEMICOLON = 40,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 41,                     /* COMMA  */
  YYSYMBOL_OPEN_PAREN = 42,                /* OPEN_PAREN  */
  YYSYMBOL_CLS_PAREN = 43,                 /* CLS_PAREN  */
  YYSYMBOL_OP_CUR_BRACKET = 44,            /* OP_CUR_BRACKET  */
  YYSYMBOL_CLS_CUR_BRACKET = 45,           /* CLS_CUR_BRACKET  */
  YYSYMBOL_YYACCEPT = 46,                  /* $accept  */
  YYSYMBOL_program = 47,                   /* program  */
  YYSYMBOL_list_declaration = 48,          /* list_declaration  */
  YYSYMBOL_main_declaration = 49,          /* main_declaration  */
  YYSYMBOL_var_declaration = 50,           /* var_declaration  */
  YYSYMBOL_func_declaration = 51,          /* func_declaration  */
  YYSYMBOL_list_args = 52,                 /* list_args  */
  YYSYMBOL_blockStmt = 53,                 /* blockStmt  */
  YYSYMBOL_list_statements = 54,           /* list_statements  */
  YYSYMBOL_stmt = 55,                      /* stmt  */
  YYSYMBOL_input_output_expr = 56,         /* input_output_expr  */
  YYSYMBOL_iteration_expr = 57,            /* iteration_expr  */
  YYSYMBOL_58_1 = 58,                      /* $@1  */
  YYSYMBOL_condition_expr = 59,            /* condition_expr  */
  YYSYMBOL_60_2 = 60,                      /* $@2  */
  YYSYMBOL_61_3 = 61,                      /* $@3  */
  YYSYMBOL_block_cond = 62,                /* block_cond  */
  YYSYMBOL_simple_complex_block_stmt = 63, /* simple_complex_block_stmt  */
  YYSYMBOL_return_stmt = 64,               /* return_stmt  */
  YYSYMBOL_expr_stmt = 65,                 /* expr_stmt  */
  YYSYMBOL_expr = 66,                      /* expr  */
  YYSYMBOL_assign = 67,                    /* assign  */
  YYSYMBOL_func_expr = 68,                 /* func_expr  */
  YYSYMBOL_func_in_expr = 69,              /* func_in_expr  */
  YYSYMBOL_op_or_expr = 70,                /* op_or_expr  */
  YYSYMBOL_op_and_expr = 71,               /* op_and_expr  */
  YYSYMBOL_logical_expr = 72,              /* logical_expr  */
  YYSYMBOL_arithmetic_expr = 73,           /* arithmetic_expr  */
  YYSYMBOL_mult_expr = 74,                 /* mult_expr  */
  YYSYMBOL_first_term = 75,                /* first_term  */
  YYSYMBOL_term = 76,                      /* term  */
  YYSYMBOL_logical_ops = 77,               /* logical_ops  */
  YYSYMBOL_str_expr = 78,                  /* str_expr  */
  YYSYMBOL_list_expr = 79,                 /* list_expr  */
  YYSYMBOL_var = 80,                       /* var  */
  YYSYMBOL_num_tipos = 81,                 /* num_tipos  */
  YYSYMBOL_tipos = 82                      /* tipos  */
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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5162

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  424

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   300


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
      45
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    71,    71,    75,    76,    80,    81,    82,    86,    90,
      92,    96,    97,    98,   102,   103,   107,   108,   113,   114,
     115,   116,   117,   119,   120,   124,   125,   126,   127,   128,
     132,   132,   136,   136,   136,   140,   141,   145,   146,   150,
     151,   155,   159,   160,   164,   168,   169,   170,   175,   176,
     180,   181,   182,   186,   187,   191,   192,   196,   197,   201,
     202,   206,   207,   208,   209,   210,   214,   215,   216,   220,
     221,   222,   223,   224,   225,   229,   233,   234,   238,   242,
     243,   244,   248,   249,   250,   251
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "THEN", "CMD_ELSE",
  "ID", "MAIN", "EMPTY", "TYPE_INT", "TYPE_FLOAT", "TYPE_ELEM", "TYPE_SET",
  "ADD_OP", "MULT_OP", "CMD_IF", "CMD_FOR", "CMD_FORALL", "GT_OP", "LT_OP",
  "LTE_OP", "GTE_OP", "NEQ_OP", "EQUAL_OP", "ADD_FUNC", "IS_SET_FUNC",
  "REMOVE_FUNC", "EXIST_FUNC", "IN_OP", "OP_OR", "OP_AND", "OP_NEG",
  "ATRIBUTION", "CMD_WRITE", "CMD_WRITELN", "CMD_READ", "CMD_RETURN",
  "INT", "FLOAT", "STRING", "CHARACTER", "SEMICOLON", "COMMA",
  "OPEN_PAREN", "CLS_PAREN", "OP_CUR_BRACKET", "CLS_CUR_BRACKET",
  "$accept", "program", "list_declaration", "main_declaration",
  "var_declaration", "func_declaration", "list_args", "blockStmt",
  "list_statements", "stmt", "input_output_expr", "iteration_expr", "$@1",
  "condition_expr", "$@2", "$@3", "block_cond",
  "simple_complex_block_stmt", "return_stmt", "expr_stmt", "expr",
  "assign", "func_expr", "func_in_expr", "op_or_expr", "op_and_expr",
  "logical_expr", "arithmetic_expr", "mult_expr", "first_term", "term",
  "logical_ops", "str_expr", "list_expr", "var", "num_tipos", "tipos", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300
};
#endif

#define YYPACT_NINF (-173)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-86)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     716,   979,    58,   100,   156,   208,    24,   993,   998,  1011,
    1036,   243,  -173,  1054,    86,   -14,   203,    61,  1087,    61,
      17,    37,    47,    13,   278,    13,  1280,  3718,  1296,    61,
    1314,  4460,    25,    59,    69,    72,    75,    81,    25,    90,
      95,   105,   936,  4484,  4508,  1145,  2782,   106,  2821,  2860,
    2899,  2938,  2977,  3016,    16,   116,   128,    18,   183,    54,
    4861,   580,  4532,  4556,  4580,  4320,  4604,   181,   152,  4628,
    4652,  1153,   194,    43,    43,    43,  4676,   320,   320,   200,
    3055,   199,  4372,   191,  1318,   217,  3094,  3133,    87,    79,
      79,   122,   210,   337,   394,   455,   489,    79,    79,    79,
    1187,   195,   213,  1145,   258,    92,   230,   151,   232,   229,
     244,   259,   269,   273,   283,  3172,  4700,   406,   441,   804,
    4875,  4834,  4724,  4748,   301,  4772,   328,   304,   316,   332,
     334,   342,   352,   369,   372,   376,   382,   392,   399,  1230,
    4796,   440,  1187,  3211,  3250,  3289,  3328,  3367,   397,   627,
     418,  1794,  1846,  3406,  1885,   258,   890,   413,  3445,    15,
    3484,   466,   484,   485,   488,   347,  4346,  4820,  4398,  3744,
    1767,    88,   436,   453,   456,    88,  4032,  4050,  1145,   464,
     257,   287,   155,   730,  1576,  4068,  4086,  4104,  3762,  4122,
     468,  4424,  4899,   139,   139,  4912,  4925,  1145,   144,   918,
    5107,  4938,  4951,  4964,  4442,  4977,   467,   519,   470,   471,
     472,  1622,   784,   219,   474,   475,   482,   219,  1525,  3780,
    1145,   354,     8,   163,    11,  1372,  1472,  3798,  3816,  3834,
    1678,  3852,  3523,   499,   117,    43,  1924,   490,   493,   494,
     495,   496,  1098,  3718,  1963,  2002,  2041,  2080,  2119,  2158,
     502,   503,   181,   530,  3562,  3718,  3601,  3640,  4140,  4158,
    4176,    43,    43,    43,  4194,   522,   581,   581,   581,   581,
     581,   497,  4990,  5003,  5016,  5029,   523,    43,    43,    43,
      43,   676,    43,    43,    43,  3870,  3888,  3906,    43,    43,
      43,  3924,   525,   140,   667,   667,   667,   667,   667,   816,
     308,   527,   533,   535,   327,   350,   459,  1153,   194,   320,
     320,   200,  2197,   547,   546,  2236,  2275,   563,  1145,   561,
     383,   410,   416,  4212,   201,  4848,  1740,  4230,  4248,  4266,
     567,  5042,  5133,  5120,  5055,  5068,  5081,   573,   521,   551,
     562,   597,   603,   639,  3942,   262,   577,   579,   585,   279,
     325,   160,  1415,  4284,  3960,  3978,  3996,   590,    43,    43,
      43,  1145,   258,   600,   602,   606,   611,   615,  2314,  2353,
    2392,   622,  3679,   630,   632,   635,  4302,  5094,   586,   628,
     782,   357,   362,   386,    43,    43,    43,  4014,   649,   668,
     680,   637,   644,   645,   647,   654,   658,   670,   693,   703,
     710,   735,   752,   765,   440,  1187,  2431,  2470,  2509,  2548,
    2587,   353,   380,   517,   627,   682,  2626,  2665,   258,   627,
     646,  2704,    21,  2743
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -173,  -173,  -173,   726,     1,  -173,    14,   -20,   -46,  -143,
    -140,  -137,   426,  -131,   438,   351,   346,  -141,  -128,  -115,
    1328,   -81,    30,  1482,  1308,  1268,  1066,   983,   772,   687,
     286,  -172,   -74,  -114,    -1,   473,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,    46,    10,    20,   151,    47,    48,
      49,    50,   104,    51,   103,   149,   153,   154,    52,    53,
      54,    55,    56,    57,   106,   198,   199,   200,   201,   202,
     203,    97,   111,   127,   204,   205,    67
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,     9,    85,    28,   113,    30,   152,    11,     9,   245,
      16,   268,   246,   257,    26,   158,   254,    21,   247,    21,
      24,   248,   236,   129,    12,   148,    65,   278,    17,    21,
     167,    70,    31,    22,   249,   -52,   -52,    70,   -51,   -51,
     295,    82,   165,    68,   188,   -52,   -52,    65,   191,   -52,
     192,   -52,   -51,   296,   -51,   193,    86,    27,   -52,   255,
      23,    43,    44,   -82,   -82,   243,   102,    45,   251,   161,
     162,   163,   164,   194,   157,   179,   188,   188,   114,   195,
     196,   -51,   -51,    90,   168,   197,    31,   118,    82,    82,
      25,    32,   207,   258,   -51,   170,    82,    82,    82,    82,
     230,    71,   188,   130,   -13,   -83,   -83,   179,   179,    38,
     208,    72,   209,   210,    73,    43,    44,    74,   117,   -52,
     -52,    45,   300,    75,   176,   177,   -78,   -71,   -78,   -71,
     178,   221,    77,   179,   -71,   131,   256,    78,   230,   160,
     301,    82,   302,   303,   272,   345,   192,    79,    65,   252,
     244,    84,   -71,   268,   253,    65,    87,   330,   -71,   -71,
     278,   -85,   -85,   346,   -71,   347,   348,   337,   -43,   221,
     260,   -51,   -51,   277,   260,   195,   196,   188,   -52,   -52,
     296,   197,   -51,   -51,   267,   357,   190,   -50,   -50,   295,
     293,   294,   274,   274,   132,   -11,   188,   314,   -51,   -30,
     211,   -50,   212,   -50,   -42,   206,   -42,   213,   179,   319,
      88,    89,   287,   -84,   -84,   -69,   287,   -69,   214,   188,
     215,   216,   -69,   -42,   285,   217,   212,   179,   -50,   -50,
     267,   218,   219,   305,   116,   364,   366,   220,   125,   115,
     -69,    82,    65,    18,   -50,    19,   -69,   -69,    14,    15,
     179,   317,   -69,   232,    65,   218,   219,   234,   235,   -52,
     -52,   220,   -16,   233,   304,   188,   188,   188,   188,   188,
     230,   152,   -75,   417,   245,   133,   152,   246,   421,   245,
     230,   392,   246,   247,   -52,   -52,   248,   134,   247,   -78,
     -78,   248,   350,   230,   230,   230,   230,   230,   230,   249,
     -52,   221,   135,   -78,   249,   -78,   -49,   -49,   188,   188,
     367,   221,   136,    64,   234,   266,   137,   188,    69,    29,
     -49,   -12,   -49,   349,    76,   169,   138,   170,    64,   221,
     -42,   187,   171,   251,    64,   -78,   -78,   420,   251,   179,
     179,   -44,   -70,   172,   -70,   173,   174,   140,   179,   -70,
     175,   -78,   -48,   -48,   -49,   -49,   176,   177,   109,   141,
     188,   130,   178,   187,   187,   100,   -48,   -70,   -48,   139,
     -49,   -77,   142,   -70,   -70,    64,    64,   -48,   -48,   -70,
     -45,   -45,   -45,    64,    64,    64,    64,   229,   -78,   187,
     -78,   179,   -46,   -48,   -45,   -43,   -45,   -43,   -45,   -72,
     -45,   -72,   423,   -46,    82,   -46,   -72,   -46,   -46,   -47,
     -52,   -52,   143,    65,   252,   244,   144,   253,    65,   252,
     244,   -46,   145,   -46,   -72,   229,   373,   -47,    64,   -47,
     -72,   -72,   146,   -49,   -49,    64,   -72,   -52,   -52,   147,
     -76,   -33,    64,   -52,   -52,   -33,   -49,   -33,   -33,   -33,
     -33,   -33,   -33,   374,   -33,   -33,   159,   259,   155,   375,
     -73,   264,   -73,   -33,   187,   -33,   -33,   -73,   -48,   -48,
     -33,   -82,   -33,   -33,   -33,   -33,   -33,   -33,   261,   273,
     275,   -48,   -33,   187,   -33,   -73,   -50,   -50,   277,   -83,
     -85,   -73,   -73,   -84,   -74,   262,   -74,   -73,   263,   286,
      66,   -74,   211,   291,   212,    66,   187,   -43,   -78,   213,
     -78,    66,   282,   283,   284,    66,   288,   289,   189,   -74,
     214,    66,   215,   216,   290,   -74,   -74,   217,    64,    64,
     -78,   -74,   307,   218,   219,   308,   309,   310,   311,   220,
     329,    64,   315,   316,   -47,   -47,   -78,   -78,   -52,   -52,
     189,   189,   187,   187,   187,   187,   187,   229,   -47,   -78,
     -47,   318,    66,    66,   378,   323,   331,   229,   344,   358,
      66,    66,    66,    66,   231,   359,   189,   360,   -52,   -52,
     229,   229,   229,   229,   229,   229,   169,   368,   170,   -52,
     -52,   369,    98,   171,   379,   187,   187,   -56,   -56,   -56,
     -56,   -56,   -56,   370,   187,   380,   372,   -56,   -56,   -56,
     376,   175,   231,   -45,   -45,    66,   377,   176,   177,   384,
     -56,   385,    66,   178,   -52,   -52,   -45,   386,   236,    66,
     -52,   -52,   166,   387,    31,   161,   162,   163,   164,    32,
     381,   237,   238,   393,   189,   394,   382,   187,   189,   395,
      35,   189,    36,    37,   396,   -46,   -46,    38,   397,   239,
     240,   241,   242,    43,    44,   -44,   -52,   -52,   -46,    45,
     189,   243,   211,   -45,   212,   -46,   -52,   -52,   -47,   213,
     404,   211,   383,   212,   405,   406,   231,   407,   213,   422,
     231,    64,   401,   189,   408,   -52,   -52,   217,   409,   214,
      64,   215,   216,   218,   219,    64,   217,   -52,   -52,   220,
     410,   402,   218,   219,    63,    66,    66,     1,   220,   336,
     -52,   -52,   418,   403,     2,     3,     4,     5,    66,    63,
     -52,   -52,   186,    13,   362,    63,   411,   -52,   -52,   189,
     189,   189,   189,   189,   231,   361,   412,    91,    92,    93,
      94,    95,    96,   413,   231,   414,     0,   -54,   -54,   -54,
     416,     0,   -45,   -45,   186,   186,     0,   231,   231,   231,
     231,   231,   231,   -54,     0,     0,    63,    63,   -45,   -46,
     -46,     0,   189,   189,    63,    63,   123,    63,   228,     0,
     186,   189,   -47,   -47,     0,   -46,   -81,   -81,     0,    62,
       0,   -81,   -81,   -81,   -81,   -81,   -81,     0,   -47,   -47,
     -47,   -81,   -81,   -81,    62,     0,     0,   185,     0,     0,
      62,   211,   -47,   212,     0,   -81,   228,   -81,   213,    63,
       0,   -50,   -50,    90,   189,     0,    63,     0,     0,   214,
       0,   215,   216,    63,   -50,     0,   217,     0,     0,   185,
     185,     0,   218,   219,     0,     0,     0,     0,   220,   356,
       0,    62,    62,     0,     0,   186,     0,     0,     0,    62,
     122,     0,    62,   227,     0,   185,     0,     0,    66,     0,
       0,     0,     0,     0,   186,     0,     0,    66,     0,     0,
       0,   254,    66,     0,     0,   166,     0,    31,   161,   162,
     163,   164,    32,     0,    33,    34,     0,   186,     0,     0,
       0,   227,     0,    35,    62,    36,    37,     0,     0,     0,
      38,    62,    39,    40,    41,    42,    43,    44,    62,    63,
      63,     0,    45,     0,   255,    91,    92,    93,    94,    95,
      96,   168,    63,    31,     0,   -54,   -54,   -54,    32,     0,
     185,     0,     0,   186,   186,   186,   186,   328,   228,    35,
       0,    36,    37,     0,     0,     0,    38,   335,   228,   185,
       0,     0,    43,    44,     0,     0,    80,     0,    45,    -7,
      -7,   228,   228,   228,   228,   355,   228,    -7,    -7,    -7,
      -7,     0,   185,    -2,     1,     0,   186,   186,    -4,    -4,
       0,     2,     3,     4,     5,   186,    -4,    -4,    -4,    -4,
      61,    -6,    -6,     0,    62,    62,     0,     0,     0,    -6,
      -6,    -6,    -6,     0,     0,    61,     0,    62,   184,     0,
       0,    61,     0,     0,     0,     0,    -5,    -5,   185,   185,
     185,   327,     0,   227,    -5,    -5,    -5,    -5,   186,     0,
       0,   334,     0,   227,    -3,    -3,     0,     0,     0,     0,
     184,   184,    -3,    -3,    -3,    -3,   227,   227,   227,   354,
       0,   227,    61,    61,     0,     0,     0,     0,     0,     0,
     121,   185,   185,    61,   226,     0,   184,    -8,    -8,     0,
     185,     0,    63,    60,     0,    -8,    -8,    -8,    -8,     0,
       0,    63,     0,   168,     0,    31,    63,     0,    60,     0,
      32,   183,     0,     0,    60,     0,     0,     0,     0,     0,
       0,    35,   226,    36,    37,    61,     0,     0,    38,     0,
       0,     0,    61,   185,    43,    44,     0,     0,   312,    61,
      45,     0,     0,   183,   183,     0,     0,     0,     0,     0,
     169,     0,   170,     0,     0,    60,   120,   171,   -32,     0,
     -32,   184,     0,     0,     0,   -32,    60,   225,   172,   183,
     173,   174,     0,     0,     0,   175,   -32,    62,   -32,   -32,
     184,   176,   177,   -32,     0,     0,    62,   178,     0,   -32,
     -32,    62,   168,     0,    31,   -32,     0,     0,     0,    32,
       0,     0,     0,   184,     0,   225,     0,     0,    60,     0,
      35,     0,    36,    37,     0,    60,     0,    38,     0,     0,
       0,     0,    60,    43,    44,    61,    61,     0,     0,    45,
       0,     0,     0,     0,     0,   211,     0,   212,    61,     0,
       0,     0,   213,     0,   183,     0,     0,     0,     0,   184,
     184,   326,     0,   214,   226,   215,   216,     0,     0,     0,
     217,   333,     0,   183,   226,     0,   218,   219,     0,     0,
       0,     0,   220,     0,     0,     0,     0,   226,   226,   353,
     -15,   -15,   226,     0,     0,     0,   183,     0,   -15,   -15,
     -15,   -15,   184,   184,     0,    59,   -10,   -10,     0,     0,
       0,   184,     0,     0,   -10,   -10,   -10,   -10,    60,    60,
      59,     0,     0,   182,    -9,    -9,    59,     0,   -14,   -14,
       0,    60,    -9,    -9,    -9,    -9,   -14,   -14,   -14,   -14,
       0,     0,   183,   325,     0,    58,     0,   225,     0,     0,
       0,     0,     0,   332,   184,   182,   182,   225,     0,     0,
      58,     0,     0,   181,     0,     0,    58,   119,     0,     0,
     225,   352,     0,     0,     0,   225,     0,     0,    59,   224,
      81,   182,     0,    83,     0,   183,   183,     0,     0,     0,
       0,     0,     0,     0,   183,   181,   181,     0,    61,    91,
      92,    93,    94,    95,    96,     0,     0,    61,     0,   -54,
     -54,   -54,    61,     0,     0,   110,   112,   224,    58,   223,
      59,   181,     0,   -54,     0,   -54,     0,    59,     0,     0,
       0,     0,     0,     0,    59,     0,     0,   183,   124,   126,
       0,   128,    91,    92,    93,    94,    95,    96,     0,     0,
       0,     0,   -53,   -53,   -53,     0,   182,   223,     0,     0,
      58,     0,     0,     0,     0,     0,   -53,    58,   -53,     0,
       0,     0,     0,     0,    58,   182,     0,   126,     0,     0,
     150,    60,     0,     0,     0,     0,     0,   250,     0,     0,
      60,     0,     0,     0,   297,    60,   181,     0,   182,   -56,
     -56,   -56,   -56,   -56,   -56,     0,     0,     0,     0,   -56,
     -56,   -56,     0,   306,     0,   181,   265,     0,     0,     0,
      59,    59,     0,   -56,     0,   -56,     0,     0,     0,     0,
       0,     0,     0,    59,     0,   276,     0,   180,   181,     0,
       0,     0,     0,     0,   324,     0,     0,   -80,   -80,   224,
       0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   292,   224,
      58,    58,   -80,   -80,   -80,   105,   107,   108,     0,   180,
     180,     0,   351,    58,     0,     0,   -80,   224,   -80,     0,
     313,     0,     0,     0,     0,     0,     0,   182,   182,   223,
       0,     0,     0,   222,     0,   180,   182,     0,   269,   223,
       0,     0,     0,   -56,   -56,   -56,   -56,   -56,   -56,   126,
       0,     0,     0,   -56,   -56,   -56,     0,   223,     0,   126,
       0,     0,     0,     0,     0,     0,     0,   181,   181,   -56,
       0,   222,     0,     0,     0,     0,   181,   126,     0,   182,
       0,     0,     0,     0,   -78,   -78,     0,   363,   365,   -78,
     -78,   -78,   -78,   -78,   -78,     0,   371,     0,     0,   -78,
     -78,   -78,     0,     0,     0,     0,     0,     0,     0,     0,
     180,     0,     0,   -78,   -78,   -78,     0,     0,     0,   181,
       0,     0,     0,    59,     0,     0,     0,     0,     0,   180,
       0,     0,    59,     0,     0,     0,     0,    59,     0,   391,
     -66,   -66,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,
     -66,     0,   180,     0,     0,   -66,   -66,   -66,     0,     0,
       0,     0,     0,    58,     0,     0,     0,     0,     0,   -66,
     299,   -66,    58,     0,     0,     0,     0,    58,     0,     0,
       0,     0,     0,   415,     0,     0,     0,     0,     0,     0,
       0,     0,   250,   320,   321,   322,     0,   250,     0,     0,
       0,     0,   269,   222,     0,     0,     0,   -55,   -55,   -55,
     -55,   -55,   -55,   222,   338,   339,   340,   -55,   -55,   -55,
     341,   342,   343,     0,     0,     0,     0,     0,     0,   -81,
     -81,   222,     0,   -55,   -81,   -81,   -81,   -81,   -81,   -81,
       0,   180,   180,     0,   -81,   -81,   -81,     0,   -38,   -38,
     180,   -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,
     -81,     0,     0,     0,     0,     0,     0,   -38,     0,   -38,
     -38,     0,     0,     0,   -38,     0,   -38,   -38,   -38,   -38,
     -38,   -38,     0,     0,     0,     0,   -38,     0,     0,   -38,
     388,   389,   390,   180,     0,     0,     0,     0,     0,     0,
     -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,     0,
     -37,   -37,     0,     0,     0,     0,   398,   399,   400,   -37,
       0,   -37,   -37,     0,     0,     0,   -37,     0,   -37,   -37,
     -37,   -37,   -37,   -37,     0,     0,     0,     0,   -37,   156,
     -35,   -37,   -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,
     -35,     0,     0,     0,     0,     0,     0,     0,   -35,     0,
     -35,   -35,     0,     0,     0,   -35,     0,   -35,   -35,   -35,
     -35,   -35,   -35,     0,     0,     0,     0,   -35,   -15,   -15,
     -35,   -15,   -15,   -15,   -15,   -15,   -15,     0,   -15,   -15,
       0,     0,     0,     0,     0,     0,     0,   -15,     0,   -15,
     -15,     0,     0,     0,   -15,     0,   -15,   -15,   -15,   -15,
     -15,   -15,     0,     0,     0,     0,   -15,   -23,   -23,   -15,
     -23,   -23,   -23,   -23,   -23,   -23,     0,   -23,   -23,     0,
       0,     0,     0,     0,     0,     0,   -23,     0,   -23,   -23,
       0,     0,     0,   -23,     0,   -23,   -23,   -23,   -23,   -23,
     -23,     0,     0,     0,     0,   -23,   -21,   -21,   -23,   -21,
     -21,   -21,   -21,   -21,   -21,     0,   -21,   -21,     0,     0,
       0,     0,     0,     0,     0,   -21,     0,   -21,   -21,     0,
       0,     0,   -21,     0,   -21,   -21,   -21,   -21,   -21,   -21,
       0,     0,     0,     0,   -21,   -18,   -18,   -21,   -18,   -18,
     -18,   -18,   -18,   -18,     0,   -18,   -18,     0,     0,     0,
       0,     0,     0,     0,   -18,     0,   -18,   -18,     0,     0,
       0,   -18,     0,   -18,   -18,   -18,   -18,   -18,   -18,     0,
       0,     0,     0,   -18,   -19,   -19,   -18,   -19,   -19,   -19,
     -19,   -19,   -19,     0,   -19,   -19,     0,     0,     0,     0,
       0,     0,     0,   -19,     0,   -19,   -19,     0,     0,     0,
     -19,     0,   -19,   -19,   -19,   -19,   -19,   -19,     0,     0,
       0,     0,   -19,   -20,   -20,   -19,   -20,   -20,   -20,   -20,
     -20,   -20,     0,   -20,   -20,     0,     0,     0,     0,     0,
       0,     0,   -20,     0,   -20,   -20,     0,     0,     0,   -20,
       0,   -20,   -20,   -20,   -20,   -20,   -20,     0,     0,     0,
       0,   -20,   -22,   -22,   -20,   -22,   -22,   -22,   -22,   -22,
     -22,     0,   -22,   -22,     0,     0,     0,     0,     0,     0,
       0,   -22,     0,   -22,   -22,     0,     0,     0,   -22,     0,
     -22,   -22,   -22,   -22,   -22,   -22,     0,     0,     0,     0,
     -22,   -39,   -39,   -22,   -39,   -39,   -39,   -39,   -39,   -39,
       0,   -39,   -39,     0,     0,     0,     0,     0,     0,     0,
     -39,     0,   -39,   -39,     0,     0,     0,   -39,     0,   -39,
     -39,   -39,   -39,   -39,   -39,     0,     0,     0,     0,   -39,
     -41,   -41,   -39,   -41,   -41,   -41,   -41,   -41,   -41,     0,
     -41,   -41,     0,     0,     0,     0,     0,     0,     0,   -41,
       0,   -41,   -41,     0,     0,     0,   -41,     0,   -41,   -41,
     -41,   -41,   -41,   -41,     0,     0,     0,     0,   -41,   -24,
     -24,   -41,   -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,
     -24,     0,     0,     0,     0,     0,     0,     0,   -24,     0,
     -24,   -24,     0,     0,     0,   -24,     0,   -24,   -24,   -24,
     -24,   -24,   -24,     0,     0,     0,     0,   -24,   -40,   -40,
     -24,   -40,   -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,
       0,     0,     0,     0,     0,     0,     0,   -40,     0,   -40,
     -40,     0,     0,     0,   -40,     0,   -40,   -40,   -40,   -40,
     -40,   -40,     0,     0,     0,     0,   -40,   -14,   -14,   -40,
     -14,   -14,   -14,   -14,   -14,   -14,     0,   -14,   -14,     0,
       0,     0,     0,     0,     0,     0,   -14,     0,   -14,   -14,
       0,     0,     0,   -14,     0,   -14,   -14,   -14,   -14,   -14,
     -14,     0,     0,     0,     0,   -14,    -8,    -8,   -14,    -8,
      -8,    -8,    -8,    -8,    -8,     0,    -8,    -8,     0,     0,
       0,     0,     0,     0,     0,    -8,     0,    -8,    -8,     0,
       0,     0,    -8,     0,    -8,    -8,    -8,    -8,    -8,    -8,
       0,     0,     0,     0,    -8,   -26,   -26,    -8,   -26,   -26,
     -26,   -26,   -26,   -26,     0,   -26,   -26,     0,     0,     0,
       0,     0,     0,     0,   -26,     0,   -26,   -26,     0,     0,
       0,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,     0,
       0,     0,     0,   -26,   -25,   -25,   -26,   -25,   -25,   -25,
     -25,   -25,   -25,     0,   -25,   -25,     0,     0,     0,     0,
       0,     0,     0,   -25,     0,   -25,   -25,     0,     0,     0,
     -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,     0,     0,
       0,     0,   -25,   -28,   -28,   -25,   -28,   -28,   -28,   -28,
     -28,   -28,     0,   -28,   -28,     0,     0,     0,     0,     0,
       0,     0,   -28,     0,   -28,   -28,     0,     0,     0,   -28,
       0,   -28,   -28,   -28,   -28,   -28,   -28,     0,     0,     0,
       0,   -28,   -27,   -27,   -28,   -27,   -27,   -27,   -27,   -27,
     -27,     0,   -27,   -27,     0,     0,     0,     0,     0,     0,
       0,   -27,     0,   -27,   -27,     0,     0,     0,   -27,     0,
     -27,   -27,   -27,   -27,   -27,   -27,     0,     0,     0,     0,
     -27,   -29,   -29,   -27,   -29,   -29,   -29,   -29,   -29,   -29,
       0,   -29,   -29,     0,     0,     0,     0,     0,     0,     0,
     -29,     0,   -29,   -29,     0,     0,     0,   -29,     0,   -29,
     -29,   -29,   -29,   -29,   -29,     0,     0,     0,     0,   -29,
     -34,   -34,   -29,   -34,   -34,   -34,   -34,   -34,   -34,     0,
     -34,   -34,     0,     0,     0,     0,     0,     0,     0,   -34,
       0,   -34,   -34,     0,     0,     0,   -34,     0,   -34,   -34,
     -34,   -34,   -34,   -34,     0,     0,     0,     0,   -34,   419,
     -35,   -34,   -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,
     -35,     0,     0,     0,     0,     0,     0,     0,   -35,     0,
     -35,   -35,     0,     0,     0,   -35,     0,   -35,   -35,   -35,
     -35,   -35,   -35,     0,     0,     0,     0,   -35,   -36,   -36,
     -35,   -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,
       0,     0,     0,     0,     0,     0,     0,   -36,     0,   -36,
     -36,     0,     0,     0,   -36,     0,   -36,   -36,   -36,   -36,
     -36,   -36,     0,     0,     0,     0,   -36,   -31,   -31,   -36,
     -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,     0,
       0,     0,     0,     0,     0,     0,   -31,     0,   -31,   -31,
       0,     0,     0,   -31,     0,   -31,   -31,   -31,   -31,   -31,
     -31,     0,     0,     0,     0,   -31,     0,   -23,   -31,   -23,
     -23,   -23,   -23,   -23,   -23,     0,   -23,   -23,     0,     0,
       0,     0,     0,     0,     0,   -23,     0,   -23,   -23,     0,
       0,     0,   -23,     0,   -23,   -23,   -23,   -23,   -23,   -23,
       0,     0,     0,     0,   -23,     0,   166,   -23,    31,   161,
     162,   163,   164,    32,     0,    33,    34,     0,     0,     0,
       0,     0,     0,     0,    35,     0,    36,    37,     0,     0,
       0,    38,     0,    39,    40,    41,    42,    43,    44,     0,
       0,     0,     0,    45,     0,   -21,   -17,   -21,   -21,   -21,
     -21,   -21,   -21,     0,   -21,   -21,     0,     0,     0,     0,
       0,     0,     0,   -21,     0,   -21,   -21,     0,     0,     0,
     -21,     0,   -21,   -21,   -21,   -21,   -21,   -21,     0,     0,
       0,     0,   -21,     0,   -18,   -21,   -18,   -18,   -18,   -18,
     -18,   -18,     0,   -18,   -18,     0,     0,     0,     0,     0,
       0,     0,   -18,     0,   -18,   -18,     0,     0,     0,   -18,
       0,   -18,   -18,   -18,   -18,   -18,   -18,     0,     0,     0,
       0,   -18,     0,   -19,   -18,   -19,   -19,   -19,   -19,   -19,
     -19,     0,   -19,   -19,     0,     0,     0,     0,     0,     0,
       0,   -19,     0,   -19,   -19,     0,     0,     0,   -19,     0,
     -19,   -19,   -19,   -19,   -19,   -19,     0,     0,     0,     0,
     -19,     0,   -20,   -19,   -20,   -20,   -20,   -20,   -20,   -20,
       0,   -20,   -20,     0,     0,     0,     0,     0,     0,     0,
     -20,     0,   -20,   -20,     0,     0,     0,   -20,     0,   -20,
     -20,   -20,   -20,   -20,   -20,     0,     0,     0,     0,   -20,
       0,   -22,   -20,   -22,   -22,   -22,   -22,   -22,   -22,     0,
     -22,   -22,     0,     0,     0,     0,     0,     0,     0,   -22,
       0,   -22,   -22,     0,     0,     0,   -22,     0,   -22,   -22,
     -22,   -22,   -22,   -22,     0,     0,     0,     0,   -22,     0,
     -39,   -22,   -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,
     -39,     0,     0,     0,     0,     0,     0,     0,   -39,     0,
     -39,   -39,     0,     0,     0,   -39,     0,   -39,   -39,   -39,
     -39,   -39,   -39,     0,     0,     0,     0,   -39,     0,   -41,
     -39,   -41,   -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,
       0,     0,     0,     0,     0,     0,     0,   -41,     0,   -41,
     -41,     0,     0,     0,   -41,     0,   -41,   -41,   -41,   -41,
     -41,   -41,     0,     0,     0,     0,   -41,     0,   -24,   -41,
     -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,     0,
       0,     0,     0,     0,     0,     0,   -24,     0,   -24,   -24,
       0,     0,     0,   -24,     0,   -24,   -24,   -24,   -24,   -24,
     -24,     0,     0,     0,     0,   -24,     0,   -40,   -24,   -40,
     -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,     0,     0,
       0,     0,     0,     0,     0,   -40,     0,   -40,   -40,     0,
       0,     0,   -40,     0,   -40,   -40,   -40,   -40,   -40,   -40,
       0,     0,     0,     0,   -40,     0,   -26,   -40,   -26,   -26,
     -26,   -26,   -26,   -26,     0,   -26,   -26,     0,     0,     0,
       0,     0,     0,     0,   -26,     0,   -26,   -26,     0,     0,
       0,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,     0,
       0,     0,     0,   -26,     0,   -25,   -26,   -25,   -25,   -25,
     -25,   -25,   -25,     0,   -25,   -25,     0,     0,     0,     0,
       0,     0,     0,   -25,     0,   -25,   -25,     0,     0,     0,
     -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,     0,     0,
       0,     0,   -25,     0,   -28,   -25,   -28,   -28,   -28,   -28,
     -28,   -28,     0,   -28,   -28,     0,     0,     0,     0,     0,
       0,     0,   -28,     0,   -28,   -28,     0,     0,     0,   -28,
       0,   -28,   -28,   -28,   -28,   -28,   -28,     0,     0,     0,
       0,   -28,     0,   -27,   -28,   -27,   -27,   -27,   -27,   -27,
     -27,     0,   -27,   -27,     0,     0,     0,     0,     0,     0,
       0,   -27,     0,   -27,   -27,     0,     0,     0,   -27,     0,
     -27,   -27,   -27,   -27,   -27,   -27,     0,     0,     0,     0,
     -27,     0,   -29,   -27,   -29,   -29,   -29,   -29,   -29,   -29,
       0,   -29,   -29,     0,     0,     0,     0,     0,     0,     0,
     -29,     0,   -29,   -29,     0,     0,     0,   -29,     0,   -29,
     -29,   -29,   -29,   -29,   -29,     0,     0,     0,     0,   -29,
       0,   -34,   -29,   -34,   -34,   -34,   -34,   -34,   -34,     0,
     -34,   -34,     0,     0,     0,     0,     0,     0,     0,   -34,
       0,   -34,   -34,     0,     0,     0,   -34,     0,   -34,   -34,
     -34,   -34,   -34,   -34,     0,     0,     0,     0,   -34,     0,
     -36,   -34,   -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,
     -36,     0,     0,     0,     0,     0,     0,     0,   -36,     0,
     -36,   -36,     0,     0,     0,   -36,     0,   -36,   -36,   -36,
     -36,   -36,   -36,     0,     0,     0,     0,   -36,     0,   -31,
     -36,   -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,
       0,     0,     0,     0,     0,     0,     0,   -31,     0,   -31,
     -31,     0,     0,     0,   -31,     0,   -31,   -31,   -31,   -31,
     -31,   -31,     0,     0,     0,     0,   -31,     0,    -8,   -31,
      -8,    -8,    -8,    -8,    -8,    -8,     0,    -8,    -8,     0,
       0,     0,     0,     0,     0,     0,    -8,     0,    -8,    -8,
       0,     0,     0,    -8,     0,    -8,    -8,    -8,    -8,    -8,
      -8,     0,     0,     0,     0,    -8,     0,   -15,    -8,   -15,
     -15,   -15,   -15,   -15,   -15,     0,   -15,   -15,     0,     0,
       0,     0,     0,     0,     0,   -15,     0,   -15,   -15,     0,
       0,     0,   -15,     0,   -15,   -15,   -15,   -15,   -15,   -15,
       0,     0,     0,     0,   -15,     0,   -38,   -15,   -38,   -38,
     -38,   -38,   -38,   -38,     0,   -38,   -38,     0,     0,     0,
       0,     0,     0,     0,   -38,     0,   -38,   -38,     0,     0,
       0,   -38,     0,   -38,   -38,   -38,   -38,   -38,   -38,     0,
       0,     0,     0,   -38,     0,   -37,   -38,   -37,   -37,   -37,
     -37,   -37,   -37,     0,   -37,   -37,     0,     0,     0,     0,
       0,     0,     0,   -37,     0,   -37,   -37,     0,     0,     0,
     -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,     0,     0,
       0,     0,   -37,     0,   -14,   -37,   -14,   -14,   -14,   -14,
     -14,   -14,     0,   -14,   -14,     0,     0,     0,     0,     0,
       0,     0,   -14,     0,   -14,   -14,     0,     0,     0,   -14,
       0,   -14,   -14,   -14,   -14,   -14,   -14,     0,     0,     0,
       0,   -14,     0,   166,   -14,    31,   161,   162,   163,   164,
      32,     0,    33,    34,     0,     0,     0,     0,     0,     0,
       0,    35,     0,    36,    37,     0,     0,     0,    38,     0,
      39,    40,    41,    42,    43,    44,   -78,   -78,     0,     0,
      45,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,
       0,   -78,   -78,   -78,   -66,   -66,     0,     0,     0,   -66,
     -66,   -66,   -66,   -66,   -66,     0,   -78,   -78,     0,   -66,
     -66,   -66,   -79,   -79,     0,     0,     0,   -79,   -79,   -79,
     -79,   -79,   -79,     0,   271,   -66,     0,   -79,   -79,   -79,
     -58,   298,     0,     0,     0,   -58,   -58,   -58,   -58,   -58,
     -58,   -79,     0,   -79,     0,   -58,   -58,   -58,   -60,   -60,
       0,     0,     0,   -60,   -60,   -60,   -60,   -60,   -60,   -58,
       0,   -58,     0,   -60,   -60,   -60,   -61,   -61,     0,     0,
       0,   -61,   -61,   -61,   -61,   -61,   -61,   -60,     0,   -60,
       0,   -61,   -61,   -61,   -67,   -67,     0,     0,     0,   -67,
     -67,   -67,   -67,   -67,   -67,   -61,     0,   -61,     0,   -67,
     -67,   -67,   -78,   -78,     0,     0,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -67,     0,   -67,     0,   -78,   -78,   -78,
     -63,   -63,     0,     0,     0,   -63,   -63,   -63,   -63,   -63,
     -63,   -78,     0,   -78,     0,   -63,   -63,   -63,   -66,   -66,
       0,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -63,
       0,   -63,     0,   -66,   -66,   -66,   -62,   -62,     0,     0,
       0,   -62,   -62,   -62,   -62,   -62,   -62,   -66,     0,   -66,
       0,   -62,   -62,   -62,   -68,   -68,     0,     0,     0,   -68,
     -68,   -68,   -68,   -68,   -68,   -62,     0,   -62,     0,   -68,
     -68,   -68,   -57,   298,     0,     0,     0,   -57,   -57,   -57,
     -57,   -57,   -57,   -68,     0,   -68,     0,   -57,   -57,   -57,
     -59,   -59,     0,     0,     0,   -59,   -59,   -59,   -59,   -59,
     -59,   -57,     0,   -57,     0,   -59,   -59,   -59,   -65,   -65,
       0,     0,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -59,
       0,   -59,     0,   -65,   -65,   -65,   -64,   -64,     0,     0,
       0,   -64,   -64,   -64,   -64,   -64,   -64,   -65,     0,   -65,
       0,   -64,   -64,   -64,   -80,   -80,     0,     0,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -64,     0,   -64,     0,   -80,
     -80,   -80,   -79,   -79,     0,     0,     0,   -79,   -79,   -79,
     -79,   -79,   -79,     0,     0,   -80,     0,   -79,   -79,   -79,
     -58,   270,     0,     0,     0,   -58,   -58,   -58,   -58,   -58,
     -58,     0,     0,   -79,     0,   -58,   -58,   -58,   -60,   -60,
       0,     0,     0,   -60,   -60,   -60,   -60,   -60,   -60,     0,
       0,   -58,     0,   -60,   -60,   -60,   -61,   -61,     0,     0,
       0,   -61,   -61,   -61,   -61,   -61,   -61,     0,     0,   -60,
       0,   -61,   -61,   -61,   -67,   -67,     0,     0,     0,   -67,
     -67,   -67,   -67,   -67,   -67,     0,     0,   -61,     0,   -67,
     -67,   -67,   -78,   -78,     0,     0,     0,   -78,   -78,   -78,
     -78,   -78,   -78,     0,     0,   -67,     0,   -78,   -78,   -78,
     -63,   -63,     0,     0,     0,   -63,   -63,   -63,   -63,   -63,
     -63,     0,     0,   -78,     0,   -63,   -63,   -63,   -66,   -66,
       0,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,     0,
       0,   -63,     0,   -66,   -66,   -66,   -62,   -62,     0,     0,
       0,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,   -66,
       0,   -62,   -62,   -62,   -68,   -68,     0,     0,     0,   -68,
     -68,   -68,   -68,   -68,   -68,     0,     0,   -62,     0,   -68,
     -68,   -68,   -57,   270,     0,     0,     0,   -57,   -57,   -57,
     -57,   -57,   -57,     0,     0,   -68,     0,   -57,   -57,   -57,
     -59,   -59,     0,     0,     0,   -59,   -59,   -59,   -59,   -59,
     -59,     0,     0,   -57,     0,   -59,   -59,   -59,   -65,   -65,
       0,     0,     0,   -65,   -65,   -65,   -65,   -65,   -65,     0,
       0,   -59,     0,   -65,   -65,   -65,   297,     0,     0,     0,
       0,   -55,   -55,   -55,   -55,   -55,   -55,     0,     0,   -65,
       0,   -55,   -55,   -55,   -64,   -64,     0,     0,     0,   -64,
     -64,   -64,   -64,   -64,   -64,   -55,     0,   -55,     0,   -64,
     -64,   -64,   -66,   -66,     0,     0,     0,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,   -64,     0,   -66,   -66,   -66,
       0,   100,     0,     0,     0,     0,     0,     0,   -78,   -78,
     -66,     0,   101,   -78,   -78,   -78,   -78,   -78,   -78,     0,
       0,     0,     0,   -78,   -78,   -78,     0,   -78,     0,     0,
       0,     0,     0,     0,   -66,   -66,   -78,     0,   -78,   -66,
     -66,   -66,   -66,   -66,   -66,     0,     0,     0,     0,   -66,
     -66,   -66,     0,     0,     0,     0,     0,     0,     0,     0,
     -78,   -78,   -66,     0,   101,   -78,   -78,   -78,   -78,   -78,
     -78,     0,     0,     0,     0,   -78,   -78,   -78,     0,     0,
       0,     0,     0,     0,     0,     0,   -78,   -78,   -78,     0,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,
       0,   -78,   -78,   -78,   -66,   -66,     0,     0,     0,   -66,
     -66,   -66,   -66,   -66,   -66,     0,   -78,     0,     0,   -66,
     -66,   -66,   -81,   -81,     0,     0,     0,   -81,   -81,   -81,
     -81,   -81,   -81,     0,   281,     0,     0,   -81,   -81,   -81,
       0,     0,     0,     0,     0,     0,   -80,   -80,     0,     0,
     -81,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,
       0,   -80,   -80,   -80,     0,     0,     0,     0,     0,     0,
     -79,   -79,     0,     0,   -80,   -79,   -79,   -79,   -79,   -79,
     -79,     0,     0,     0,     0,   -79,   -79,   -79,     0,     0,
       0,     0,     0,     0,   -58,    99,     0,     0,   -79,   -58,
     -58,   -58,   -58,   -58,   -58,     0,     0,     0,     0,   -58,
     -58,   -58,     0,     0,     0,     0,     0,     0,   -60,   -60,
       0,     0,   -58,   -60,   -60,   -60,   -60,   -60,   -60,     0,
       0,     0,     0,   -60,   -60,   -60,     0,     0,     0,     0,
       0,     0,   -61,   -61,     0,     0,   -60,   -61,   -61,   -61,
     -61,   -61,   -61,     0,     0,     0,     0,   -61,   -61,   -61,
       0,     0,     0,     0,     0,     0,   -67,   -67,     0,     0,
     -61,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,   -67,   -67,   -67,     0,     0,     0,     0,     0,     0,
     -63,   -63,     0,     0,   -67,   -63,   -63,   -63,   -63,   -63,
     -63,     0,     0,     0,     0,   -63,   -63,   -63,     0,     0,
       0,     0,     0,     0,   -66,   -66,     0,     0,   -63,   -66,
     -66,   -66,   -66,   -66,   -66,     0,     0,     0,     0,   -66,
     -66,   -66,     0,     0,     0,     0,     0,     0,   -62,   -62,
       0,     0,   -66,   -62,   -62,   -62,   -62,   -62,   -62,     0,
       0,     0,     0,   -62,   -62,   -62,     0,     0,     0,     0,
       0,     0,   -68,   -68,     0,     0,   -62,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,   -68,   -68,   -68,
       0,     0,     0,     0,     0,     0,   -57,    99,     0,     0,
     -68,   -57,   -57,   -57,   -57,   -57,   -57,     0,     0,     0,
       0,   -57,   -57,   -57,     0,     0,     0,     0,     0,     0,
     -59,   -59,     0,     0,   -57,   -59,   -59,   -59,   -59,   -59,
     -59,     0,     0,     0,     0,   -59,   -59,   -59,     0,     0,
       0,     0,     0,     0,   -65,   -65,     0,     0,   -59,   -65,
     -65,   -65,   -65,   -65,   -65,     0,     0,     0,     0,   -65,
     -65,   -65,     0,     0,     0,     0,     0,     0,   -64,   -64,
       0,     0,   -65,   -64,   -64,   -64,   -64,   -64,   -64,     0,
       0,     0,     0,   -64,   -64,   -64,     0,     0,     0,     0,
       0,     0,   -78,   -78,     0,     0,   -64,   -78,   -78,   -78,
     -78,   -78,   -78,     0,     0,     0,    98,   -78,   -78,   -78,
       0,   -55,   -55,   -55,   -55,   -55,   -55,     0,     0,     0,
     -78,   -55,   -55,   -55,     0,    91,    92,    93,    94,    95,
      96,     0,     0,     0,   -55,   -53,   -53,   -53,    91,    92,
      93,    94,    95,    96,     0,     0,     0,     0,   -54,   -54,
     -54,   -53,    91,    92,    93,    94,    95,    96,     0,     0,
       0,   -54,   -53,   -53,   -53,     0,     0,     0,     0,     0,
       0,   -81,   -81,     0,     0,   -53,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,   -80,   -80,   -81,   -81,   -81,   -80,
     -80,   -80,   -80,   -80,   -80,     0,     0,   -79,   -79,   -80,
     -80,   -80,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
     -58,   280,   -79,   -79,   -79,   -58,   -58,   -58,   -58,   -58,
     -58,     0,     0,   -60,   -60,   -58,   -58,   -58,   -60,   -60,
     -60,   -60,   -60,   -60,     0,     0,   -61,   -61,   -60,   -60,
     -60,   -61,   -61,   -61,   -61,   -61,   -61,     0,     0,   -67,
     -67,   -61,   -61,   -61,   -67,   -67,   -67,   -67,   -67,   -67,
       0,     0,   -78,   -78,   -67,   -67,   -67,   -78,   -78,   -78,
     -78,   -78,   -78,     0,     0,   -63,   -63,   -78,   -78,   -78,
     -63,   -63,   -63,   -63,   -63,   -63,     0,     0,   -66,   -66,
     -63,   -63,   -63,   -66,   -66,   -66,   -66,   -66,   -66,     0,
       0,   -62,   -62,   -66,   -66,   -66,   -62,   -62,   -62,   -62,
     -62,   -62,     0,     0,   -68,   -68,   -62,   -62,   -62,   -68,
     -68,   -68,   -68,   -68,   -68,     0,     0,   -57,   280,   -68,
     -68,   -68,   -57,   -57,   -57,   -57,   -57,   -57,     0,     0,
     -59,   -59,   -57,   -57,   -57,   -59,   -59,   -59,   -59,   -59,
     -59,     0,     0,   -65,   -65,   -59,   -59,   -59,   -65,   -65,
     -65,   -65,   -65,   -65,     0,     0,   -64,   -64,   -65,   -65,
     -65,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,   279,
       0,   -64,   -64,   -64,   -56,   -56,   -56,   -56,   -56,   -56,
       0,     0,   279,     0,   -56,   -56,   -56,   -55,   -55,   -55,
     -55,   -55,   -55,     0,     0,     0,     0,   -55,   -55,   -55,
      91,    92,    93,    94,    95,    96,     0,     0,     0,     0,
     -53,   -53,   -53
};

static const yytype_int16 yycheck[] =
{
       0,     0,    48,    23,    78,    25,   149,     7,     7,   149,
      11,   183,   149,   156,     1,   156,     1,    17,   149,    19,
      21,   149,     1,   104,     0,   139,    27,   199,    42,    29,
       5,    32,     7,    19,   149,    27,    28,    38,    27,    28,
      29,    42,     5,    29,    45,    27,    28,    48,     5,    41,
       7,    43,    41,   225,    43,    12,    40,    44,    40,    44,
      43,    36,    37,     5,     6,    44,    67,    42,   149,     8,
       9,    10,    11,    30,   155,    45,    77,    78,    79,    36,
      37,    27,    28,    29,     5,    42,     7,    88,    89,    90,
      43,    12,     5,     5,    40,     7,    97,    98,    99,   100,
     101,    42,   103,   104,    43,     5,     6,    77,    78,    30,
      23,    42,    25,    26,    42,    36,    37,    42,    88,    27,
      28,    42,     5,    42,    36,    37,    40,     5,    42,     7,
      42,   101,    42,   103,    12,    43,   156,    42,   139,   159,
      23,   142,    25,    26,     5,     5,     7,    42,   149,   149,
     149,    45,    30,   325,   155,   156,    40,   271,    36,    37,
     332,     5,     6,    23,    42,    25,    26,   281,    40,   139,
     171,    27,    28,    29,   175,    36,    37,   178,    27,    28,
     352,    42,    27,    28,    29,   299,     5,    27,    28,    29,
      27,    28,   193,   194,    43,    43,   197,   243,    43,     5,
       5,    41,     7,    43,    41,     5,    43,    12,   178,   255,
      27,    28,   213,     5,     6,     5,   217,     7,    23,   220,
      25,    26,    12,    40,     5,    30,     7,   197,    27,    28,
      29,    36,    37,   234,    43,   309,   310,    42,    43,    40,
      30,   242,   243,    40,    43,    42,    36,    37,     5,     6,
     220,   252,    42,    40,   255,    36,    37,    27,    28,    27,
      28,    42,    45,     5,   234,   266,   267,   268,   269,   270,
     271,   414,    43,   414,   414,    43,   419,   414,   419,   419,
     281,   362,   419,   414,    27,    28,   414,    43,   419,    27,
      28,   419,   293,   294,   295,   296,   297,   298,   299,   414,
      43,   271,    43,    41,   419,    43,    27,    28,   309,   310,
     311,   281,    43,    27,    27,    28,    43,   318,    32,    41,
      41,    43,    43,   293,    38,     5,    43,     7,    42,   299,
      43,    45,    12,   414,    48,    27,    28,   418,   419,   309,
     310,    40,     5,    23,     7,    25,    26,    43,   318,    12,
      30,    43,    27,    28,    27,    28,    36,    37,    38,    43,
     361,   362,    42,    77,    78,    31,    41,    30,    43,    41,
      43,    43,    40,    36,    37,    89,    90,    27,    28,    42,
      27,    28,    40,    97,    98,    99,   100,   101,    41,   103,
      43,   361,    40,    43,    41,    41,    43,    43,    41,     5,
      43,     7,   422,    41,   405,    43,    12,    27,    28,    40,
      27,    28,    40,   414,   414,   414,    40,   418,   419,   419,
     419,    41,    40,    43,    30,   139,    43,    41,   142,    43,
      36,    37,    40,    27,    28,   149,    42,    27,    28,    40,
      43,     1,   156,    27,    28,     5,    40,     7,     8,     9,
      10,    11,    12,    43,    14,    15,    43,   171,    40,    43,
       5,   175,     7,    23,   178,    25,    26,    12,    27,    28,
      30,     5,    32,    33,    34,    35,    36,    37,    42,   193,
     194,    40,    42,   197,    44,    30,    27,    28,    29,     5,
       5,    36,    37,     5,     5,    42,     7,    42,    42,   213,
      27,    12,     5,   217,     7,    32,   220,    43,    40,    12,
      43,    38,    42,    42,    42,    42,    42,    42,    45,    30,
      23,    48,    25,    26,    42,    36,    37,    30,   242,   243,
      31,    42,    42,    36,    37,    42,    42,    42,    42,    42,
      43,   255,    40,    40,    27,    28,    27,    28,    27,    28,
      77,    78,   266,   267,   268,   269,   270,   271,    41,    40,
      43,    31,    89,    90,    43,    43,    43,   281,    43,    42,
      97,    98,    99,   100,   101,    42,   103,    42,    27,    28,
     294,   295,   296,   297,   298,   299,     5,    40,     7,    27,
      28,    45,    12,    12,    43,   309,   310,    17,    18,    19,
      20,    21,    22,    40,   318,    43,    45,    27,    28,    29,
      43,    30,   139,    27,    28,   142,    43,    36,    37,    42,
      40,    42,   149,    42,    27,    28,    40,    42,     1,   156,
      27,    28,     5,    43,     7,     8,     9,    10,    11,    12,
      43,    14,    15,    43,   171,    43,    43,   361,   175,    43,
      23,   178,    25,    26,    43,    27,    28,    30,    43,    32,
      33,    34,    35,    36,    37,    43,    27,    28,    40,    42,
     197,    44,     5,    43,     7,    43,    27,    28,    43,    12,
      43,     5,    43,     7,    40,    40,   213,    40,    12,    43,
     217,   405,    43,   220,    40,    27,    28,    30,    40,    23,
     414,    25,    26,    36,    37,   419,    30,    27,    28,    42,
      40,    43,    36,    37,    27,   242,   243,     1,    42,    43,
      27,    28,    40,    43,     8,     9,    10,    11,   255,    42,
      27,    28,    45,     7,   308,    48,    43,    27,    28,   266,
     267,   268,   269,   270,   271,   307,    43,    17,    18,    19,
      20,    21,    22,    43,   281,   404,    -1,    27,    28,    29,
     414,    -1,    27,    28,    77,    78,    -1,   294,   295,   296,
     297,   298,   299,    43,    -1,    -1,    89,    90,    43,    27,
      28,    -1,   309,   310,    97,    98,    99,   100,   101,    -1,
     103,   318,    27,    28,    -1,    43,    12,    13,    -1,    27,
      -1,    17,    18,    19,    20,    21,    22,    -1,    43,    27,
      28,    27,    28,    29,    42,    -1,    -1,    45,    -1,    -1,
      48,     5,    40,     7,    -1,    41,   139,    43,    12,   142,
      -1,    27,    28,    29,   361,    -1,   149,    -1,    -1,    23,
      -1,    25,    26,   156,    40,    -1,    30,    -1,    -1,    77,
      78,    -1,    36,    37,    -1,    -1,    -1,    -1,    42,    43,
      -1,    89,    90,    -1,    -1,   178,    -1,    -1,    -1,    97,
      98,    -1,   100,   101,    -1,   103,    -1,    -1,   405,    -1,
      -1,    -1,    -1,    -1,   197,    -1,    -1,   414,    -1,    -1,
      -1,     1,   419,    -1,    -1,     5,    -1,     7,     8,     9,
      10,    11,    12,    -1,    14,    15,    -1,   220,    -1,    -1,
      -1,   139,    -1,    23,   142,    25,    26,    -1,    -1,    -1,
      30,   149,    32,    33,    34,    35,    36,    37,   156,   242,
     243,    -1,    42,    -1,    44,    17,    18,    19,    20,    21,
      22,     5,   255,     7,    -1,    27,    28,    29,    12,    -1,
     178,    -1,    -1,   266,   267,   268,   269,   270,   271,    23,
      -1,    25,    26,    -1,    -1,    -1,    30,   280,   281,   197,
      -1,    -1,    36,    37,    -1,    -1,    40,    -1,    42,     0,
       1,   294,   295,   296,   297,   298,   299,     8,     9,    10,
      11,    -1,   220,     0,     1,    -1,   309,   310,     0,     1,
      -1,     8,     9,    10,    11,   318,     8,     9,    10,    11,
      27,     0,     1,    -1,   242,   243,    -1,    -1,    -1,     8,
       9,    10,    11,    -1,    -1,    42,    -1,   255,    45,    -1,
      -1,    48,    -1,    -1,    -1,    -1,     0,     1,   266,   267,
     268,   269,    -1,   271,     8,     9,    10,    11,   361,    -1,
      -1,   279,    -1,   281,     0,     1,    -1,    -1,    -1,    -1,
      77,    78,     8,     9,    10,    11,   294,   295,   296,   297,
      -1,   299,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      97,   309,   310,   100,   101,    -1,   103,     0,     1,    -1,
     318,    -1,   405,    27,    -1,     8,     9,    10,    11,    -1,
      -1,   414,    -1,     5,    -1,     7,   419,    -1,    42,    -1,
      12,    45,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    23,   139,    25,    26,   142,    -1,    -1,    30,    -1,
      -1,    -1,   149,   361,    36,    37,    -1,    -1,    40,   156,
      42,    -1,    -1,    77,    78,    -1,    -1,    -1,    -1,    -1,
       5,    -1,     7,    -1,    -1,    89,    90,    12,     5,    -1,
       7,   178,    -1,    -1,    -1,    12,   100,   101,    23,   103,
      25,    26,    -1,    -1,    -1,    30,    23,   405,    25,    26,
     197,    36,    37,    30,    -1,    -1,   414,    42,    -1,    36,
      37,   419,     5,    -1,     7,    42,    -1,    -1,    -1,    12,
      -1,    -1,    -1,   220,    -1,   139,    -1,    -1,   142,    -1,
      23,    -1,    25,    26,    -1,   149,    -1,    30,    -1,    -1,
      -1,    -1,   156,    36,    37,   242,   243,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,     5,    -1,     7,   255,    -1,
      -1,    -1,    12,    -1,   178,    -1,    -1,    -1,    -1,   266,
     267,   268,    -1,    23,   271,    25,    26,    -1,    -1,    -1,
      30,   278,    -1,   197,   281,    -1,    36,    37,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,   294,   295,   296,
       0,     1,   299,    -1,    -1,    -1,   220,    -1,     8,     9,
      10,    11,   309,   310,    -1,    27,     0,     1,    -1,    -1,
      -1,   318,    -1,    -1,     8,     9,    10,    11,   242,   243,
      42,    -1,    -1,    45,     0,     1,    48,    -1,     0,     1,
      -1,   255,     8,     9,    10,    11,     8,     9,    10,    11,
      -1,    -1,   266,   267,    -1,    27,    -1,   271,    -1,    -1,
      -1,    -1,    -1,   277,   361,    77,    78,   281,    -1,    -1,
      42,    -1,    -1,    45,    -1,    -1,    48,    89,    -1,    -1,
     294,   295,    -1,    -1,    -1,   299,    -1,    -1,   100,   101,
      42,   103,    -1,    45,    -1,   309,   310,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   318,    77,    78,    -1,   405,    17,
      18,    19,    20,    21,    22,    -1,    -1,   414,    -1,    27,
      28,    29,   419,    -1,    -1,    77,    78,   139,   100,   101,
     142,   103,    -1,    41,    -1,    43,    -1,   149,    -1,    -1,
      -1,    -1,    -1,    -1,   156,    -1,    -1,   361,   100,   101,
      -1,   103,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    -1,   178,   139,    -1,    -1,
     142,    -1,    -1,    -1,    -1,    -1,    41,   149,    43,    -1,
      -1,    -1,    -1,    -1,   156,   197,    -1,   139,    -1,    -1,
     142,   405,    -1,    -1,    -1,    -1,    -1,   149,    -1,    -1,
     414,    -1,    -1,    -1,    12,   419,   178,    -1,   220,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,
      28,    29,    -1,   235,    -1,   197,   178,    -1,    -1,    -1,
     242,   243,    -1,    41,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   255,    -1,   197,    -1,    45,   220,    -1,
      -1,    -1,    -1,    -1,   266,    -1,    -1,    12,    13,   271,
      -1,    -1,    17,    18,    19,    20,    21,    22,   220,   281,
     242,   243,    27,    28,    29,    73,    74,    75,    -1,    77,
      78,    -1,   294,   255,    -1,    -1,    41,   299,    43,    -1,
     242,    -1,    -1,    -1,    -1,    -1,    -1,   309,   310,   271,
      -1,    -1,    -1,   101,    -1,   103,   318,    -1,    12,   281,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,   271,
      -1,    -1,    -1,    27,    28,    29,    -1,   299,    -1,   281,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,   310,    43,
      -1,   139,    -1,    -1,    -1,    -1,   318,   299,    -1,   361,
      -1,    -1,    -1,    -1,    12,    13,    -1,   309,   310,    17,
      18,    19,    20,    21,    22,    -1,   318,    -1,    -1,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     178,    -1,    -1,    41,    42,    43,    -1,    -1,    -1,   361,
      -1,    -1,    -1,   405,    -1,    -1,    -1,    -1,    -1,   197,
      -1,    -1,   414,    -1,    -1,    -1,    -1,   419,    -1,   361,
      12,    13,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    -1,   220,    -1,    -1,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,   405,    -1,    -1,    -1,    -1,    -1,    41,
      42,    43,   414,    -1,    -1,    -1,    -1,   419,    -1,    -1,
      -1,    -1,    -1,   405,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   414,   261,   262,   263,    -1,   419,    -1,    -1,
      -1,    -1,    12,   271,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,   281,   282,   283,   284,    27,    28,    29,
     288,   289,   290,    -1,    -1,    -1,    -1,    -1,    -1,    12,
      13,   299,    -1,    43,    17,    18,    19,    20,    21,    22,
      -1,   309,   310,    -1,    27,    28,    29,    -1,     4,     5,
     318,     7,     8,     9,    10,    11,    12,    -1,    14,    15,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    42,    -1,    -1,    45,
     358,   359,   360,   361,    -1,    -1,    -1,    -1,    -1,    -1,
       4,     5,    -1,     7,     8,     9,    10,    11,    12,    -1,
      14,    15,    -1,    -1,    -1,    -1,   384,   385,   386,    23,
      -1,    25,    26,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    42,     4,
       5,    45,     7,     8,     9,    10,    11,    12,    -1,    14,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      25,    26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    42,     4,     5,
      45,     7,     8,     9,    10,    11,    12,    -1,    14,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    42,     4,     5,    45,
       7,     8,     9,    10,    11,    12,    -1,    14,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    25,    26,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    42,     4,     5,    45,     7,
       8,     9,    10,    11,    12,    -1,    14,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    25,    26,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    42,     4,     5,    45,     7,     8,
       9,    10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    25,    26,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    42,     4,     5,    45,     7,     8,     9,
      10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    25,    26,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    42,     4,     5,    45,     7,     8,     9,    10,
      11,    12,    -1,    14,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    25,    26,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    42,     4,     5,    45,     7,     8,     9,    10,    11,
      12,    -1,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    25,    26,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      42,     4,     5,    45,     7,     8,     9,    10,    11,    12,
      -1,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    25,    26,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    42,
       4,     5,    45,     7,     8,     9,    10,    11,    12,    -1,
      14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    25,    26,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    42,     4,
       5,    45,     7,     8,     9,    10,    11,    12,    -1,    14,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      25,    26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    42,     4,     5,
      45,     7,     8,     9,    10,    11,    12,    -1,    14,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    42,     4,     5,    45,
       7,     8,     9,    10,    11,    12,    -1,    14,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    25,    26,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    42,     4,     5,    45,     7,
       8,     9,    10,    11,    12,    -1,    14,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    25,    26,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    42,     4,     5,    45,     7,     8,
       9,    10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    25,    26,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    42,     4,     5,    45,     7,     8,     9,
      10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    25,    26,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    42,     4,     5,    45,     7,     8,     9,    10,
      11,    12,    -1,    14,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    25,    26,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    42,     4,     5,    45,     7,     8,     9,    10,    11,
      12,    -1,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    25,    26,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      42,     4,     5,    45,     7,     8,     9,    10,    11,    12,
      -1,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    25,    26,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    42,
       4,     5,    45,     7,     8,     9,    10,    11,    12,    -1,
      14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    25,    26,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    42,     4,
       5,    45,     7,     8,     9,    10,    11,    12,    -1,    14,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      25,    26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    42,     4,     5,
      45,     7,     8,     9,    10,    11,    12,    -1,    14,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    42,     4,     5,    45,
       7,     8,     9,    10,    11,    12,    -1,    14,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    25,    26,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    42,    -1,     5,    45,     7,
       8,     9,    10,    11,    12,    -1,    14,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    25,    26,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    42,    -1,     5,    45,     7,     8,
       9,    10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    25,    26,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    42,    -1,     5,    45,     7,     8,     9,
      10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    25,    26,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    42,    -1,     5,    45,     7,     8,     9,    10,
      11,    12,    -1,    14,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    25,    26,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    42,    -1,     5,    45,     7,     8,     9,    10,    11,
      12,    -1,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    25,    26,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      42,    -1,     5,    45,     7,     8,     9,    10,    11,    12,
      -1,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    25,    26,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    42,
      -1,     5,    45,     7,     8,     9,    10,    11,    12,    -1,
      14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    25,    26,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    42,    -1,
       5,    45,     7,     8,     9,    10,    11,    12,    -1,    14,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      25,    26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    42,    -1,     5,
      45,     7,     8,     9,    10,    11,    12,    -1,    14,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    42,    -1,     5,    45,
       7,     8,     9,    10,    11,    12,    -1,    14,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    25,    26,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    42,    -1,     5,    45,     7,
       8,     9,    10,    11,    12,    -1,    14,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    25,    26,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    42,    -1,     5,    45,     7,     8,
       9,    10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    25,    26,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    42,    -1,     5,    45,     7,     8,     9,
      10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    25,    26,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    42,    -1,     5,    45,     7,     8,     9,    10,
      11,    12,    -1,    14,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    25,    26,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    42,    -1,     5,    45,     7,     8,     9,    10,    11,
      12,    -1,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    25,    26,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      42,    -1,     5,    45,     7,     8,     9,    10,    11,    12,
      -1,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    25,    26,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    42,
      -1,     5,    45,     7,     8,     9,    10,    11,    12,    -1,
      14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    25,    26,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    42,    -1,
       5,    45,     7,     8,     9,    10,    11,    12,    -1,    14,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      25,    26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    42,    -1,     5,
      45,     7,     8,     9,    10,    11,    12,    -1,    14,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    42,    -1,     5,    45,
       7,     8,     9,    10,    11,    12,    -1,    14,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    25,    26,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    42,    -1,     5,    45,     7,
       8,     9,    10,    11,    12,    -1,    14,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    25,    26,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    42,    -1,     5,    45,     7,     8,
       9,    10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    25,    26,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    42,    -1,     5,    45,     7,     8,     9,
      10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    25,    26,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    42,    -1,     5,    45,     7,     8,     9,    10,
      11,    12,    -1,    14,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    25,    26,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    42,    -1,     5,    45,     7,     8,     9,    10,    11,
      12,    -1,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    25,    26,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    12,    13,    -1,    -1,
      42,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    12,    13,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    -1,    42,    43,    -1,    27,
      28,    29,    12,    13,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    -1,    42,    43,    -1,    27,    28,    29,
      12,    13,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    41,    -1,    43,    -1,    27,    28,    29,    12,    13,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    41,
      -1,    43,    -1,    27,    28,    29,    12,    13,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    41,    -1,    43,
      -1,    27,    28,    29,    12,    13,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    41,    -1,    43,    -1,    27,
      28,    29,    12,    13,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    41,    -1,    43,    -1,    27,    28,    29,
      12,    13,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    41,    -1,    43,    -1,    27,    28,    29,    12,    13,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    41,
      -1,    43,    -1,    27,    28,    29,    12,    13,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    41,    -1,    43,
      -1,    27,    28,    29,    12,    13,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    41,    -1,    43,    -1,    27,
      28,    29,    12,    13,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    41,    -1,    43,    -1,    27,    28,    29,
      12,    13,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    41,    -1,    43,    -1,    27,    28,    29,    12,    13,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    41,
      -1,    43,    -1,    27,    28,    29,    12,    13,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    41,    -1,    43,
      -1,    27,    28,    29,    12,    13,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    41,    -1,    43,    -1,    27,
      28,    29,    12,    13,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    -1,    -1,    43,    -1,    27,    28,    29,
      12,    13,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    -1,    -1,    43,    -1,    27,    28,    29,    12,    13,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    -1,
      -1,    43,    -1,    27,    28,    29,    12,    13,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    -1,    -1,    43,
      -1,    27,    28,    29,    12,    13,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    -1,    -1,    43,    -1,    27,
      28,    29,    12,    13,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    -1,    -1,    43,    -1,    27,    28,    29,
      12,    13,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    -1,    -1,    43,    -1,    27,    28,    29,    12,    13,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    -1,
      -1,    43,    -1,    27,    28,    29,    12,    13,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    -1,    -1,    43,
      -1,    27,    28,    29,    12,    13,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    -1,    -1,    43,    -1,    27,
      28,    29,    12,    13,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    -1,    -1,    43,    -1,    27,    28,    29,
      12,    13,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    -1,    -1,    43,    -1,    27,    28,    29,    12,    13,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    -1,
      -1,    43,    -1,    27,    28,    29,    12,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    -1,    -1,    43,
      -1,    27,    28,    29,    12,    13,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    41,    -1,    43,    -1,    27,
      28,    29,    12,    13,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    -1,    -1,    43,    -1,    27,    28,    29,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    12,    13,
      40,    -1,    42,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    27,    28,    29,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    13,    40,    -1,    42,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      12,    13,    40,    -1,    42,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    13,    40,    -1,
      42,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    12,    13,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    -1,    42,    -1,    -1,    27,
      28,    29,    12,    13,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    -1,    42,    -1,    -1,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,
      40,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      12,    13,    -1,    -1,    40,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    40,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    12,    13,
      -1,    -1,    40,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    12,    13,    -1,    -1,    40,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,
      40,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      12,    13,    -1,    -1,    40,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    40,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    12,    13,
      -1,    -1,    40,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    12,    13,    -1,    -1,    40,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,
      40,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      12,    13,    -1,    -1,    40,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    40,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    12,    13,
      -1,    -1,    40,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    12,    13,    -1,    -1,    40,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    12,    27,    28,    29,
      -1,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      40,    27,    28,    29,    -1,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    40,    27,    28,    29,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,
      29,    43,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    40,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    12,    13,    -1,    -1,    40,    17,    18,    19,    20,
      21,    22,    -1,    -1,    12,    13,    27,    28,    29,    17,
      18,    19,    20,    21,    22,    -1,    -1,    12,    13,    27,
      28,    29,    17,    18,    19,    20,    21,    22,    -1,    -1,
      12,    13,    27,    28,    29,    17,    18,    19,    20,    21,
      22,    -1,    -1,    12,    13,    27,    28,    29,    17,    18,
      19,    20,    21,    22,    -1,    -1,    12,    13,    27,    28,
      29,    17,    18,    19,    20,    21,    22,    -1,    -1,    12,
      13,    27,    28,    29,    17,    18,    19,    20,    21,    22,
      -1,    -1,    12,    13,    27,    28,    29,    17,    18,    19,
      20,    21,    22,    -1,    -1,    12,    13,    27,    28,    29,
      17,    18,    19,    20,    21,    22,    -1,    -1,    12,    13,
      27,    28,    29,    17,    18,    19,    20,    21,    22,    -1,
      -1,    12,    13,    27,    28,    29,    17,    18,    19,    20,
      21,    22,    -1,    -1,    12,    13,    27,    28,    29,    17,
      18,    19,    20,    21,    22,    -1,    -1,    12,    13,    27,
      28,    29,    17,    18,    19,    20,    21,    22,    -1,    -1,
      12,    13,    27,    28,    29,    17,    18,    19,    20,    21,
      22,    -1,    -1,    12,    13,    27,    28,    29,    17,    18,
      19,    20,    21,    22,    -1,    -1,    12,    13,    27,    28,
      29,    17,    18,    19,    20,    21,    22,    -1,    -1,    12,
      -1,    27,    28,    29,    17,    18,    19,    20,    21,    22,
      -1,    -1,    12,    -1,    27,    28,    29,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      27,    28,    29
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     8,     9,    10,    11,    47,    48,    49,    50,
      51,    82,     0,    49,     5,     6,    80,    42,    40,    42,
      52,    82,    52,    43,    80,    43,     1,    44,    53,    41,
      53,     7,    12,    14,    15,    23,    25,    26,    30,    32,
      33,    34,    35,    36,    37,    42,    50,    54,    55,    56,
      57,    59,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    80,    81,    82,    52,    76,
      80,    42,    42,    42,    42,    42,    76,    42,    42,    42,
      40,    66,    80,    66,    45,    54,    40,    40,    27,    28,
      29,    17,    18,    19,    20,    21,    22,    77,    12,    13,
      31,    42,    80,    60,    58,    69,    70,    69,    69,    38,
      66,    78,    66,    78,    80,    40,    43,    68,    80,    71,
      72,    73,    74,    75,    66,    43,    66,    79,    66,    67,
      80,    43,    43,    43,    43,    43,    43,    43,    43,    41,
      43,    43,    40,    40,    40,    40,    40,    40,    79,    61,
      66,    53,    55,    62,    63,    40,     4,    67,    63,    43,
      53,     8,     9,    10,    11,     5,     5,     5,     5,     5,
       7,    12,    23,    25,    26,    30,    36,    37,    42,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    80,    81,
       5,     5,     7,    12,    30,    36,    37,    42,    71,    72,
      73,    74,    75,    76,    80,    81,     5,     5,    23,    25,
      26,     5,     7,    12,    23,    25,    26,    30,    36,    37,
      42,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      80,    81,    40,     5,    27,    28,     1,    14,    15,    32,
      33,    34,    35,    44,    50,    56,    57,    59,    64,    65,
      66,    67,    82,    80,     1,    44,    53,    55,     5,    76,
      80,    42,    42,    42,    76,    66,    28,    29,    77,    12,
      13,    42,     5,    76,    80,    76,    66,    29,    77,    12,
      13,    42,    42,    42,    42,     5,    76,    80,    42,    42,
      42,    76,    66,    27,    28,    29,    77,    12,    13,    42,
       5,    23,    25,    26,    68,    80,    71,    42,    42,    42,
      42,    42,    40,    66,    54,    40,    40,    80,    31,    54,
      69,    69,    69,    43,    71,    72,    73,    74,    75,    43,
      79,    43,    72,    73,    74,    75,    43,    79,    69,    69,
      69,    69,    69,    69,    43,     5,    23,    25,    26,    68,
      80,    71,    72,    73,    74,    75,    43,    79,    42,    42,
      42,    60,    58,    66,    78,    66,    78,    80,    40,    45,
      40,    66,    45,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    42,    42,    42,    43,    69,    69,
      69,    66,    67,    43,    43,    43,    43,    43,    69,    69,
      69,    43,    43,    43,    43,    40,    40,    40,    40,    40,
      40,    43,    43,    43,    61,    66,    62,    63,    40,     4,
      67,    63,    43,    53
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    48,    48,    49,    49,    49,    50,    51,
      51,    52,    52,    52,    53,    53,    54,    54,    55,    55,
      55,    55,    55,    55,    55,    56,    56,    56,    56,    56,
      58,    57,    60,    61,    59,    62,    62,    63,    63,    64,
      64,    65,    66,    66,    67,    68,    68,    68,    69,    69,
      70,    70,    70,    71,    71,    72,    72,    73,    73,    74,
      74,    75,    75,    75,    75,    75,    76,    76,    76,    77,
      77,    77,    77,    77,    77,    78,    79,    79,    80,    81,
      81,    81,    82,    82,    82,    82
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     6,
       6,     4,     2,     0,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     2,     5,     5,     5,     5,     5,
       0,    10,     0,     0,     7,     1,     3,     1,     1,     2,
       3,     2,     1,     1,     3,     4,     4,     4,     3,     3,
       3,     1,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     1,     2,     2,     4,     3,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1
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
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
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
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
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


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
#  undef YYSTACK_RELOCATE
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
  case 7: /* main_declaration: error  */
#line 82 "sintatic/sintatic.y"
                {}
#line 2612 "sintatic.tab.c"
    break;

  case 13: /* list_args: %empty  */
#line 98 "sintatic/sintatic.y"
                 {printf(" null args \n");}
#line 2618 "sintatic.tab.c"
    break;

  case 14: /* blockStmt: OP_CUR_BRACKET list_statements CLS_CUR_BRACKET  */
#line 102 "sintatic/sintatic.y"
                                                       {printf("{ }\n");}
#line 2624 "sintatic.tab.c"
    break;

  case 15: /* blockStmt: error  */
#line 103 "sintatic/sintatic.y"
                {}
#line 2630 "sintatic.tab.c"
    break;

  case 16: /* list_statements: stmt list_statements  */
#line 107 "sintatic/sintatic.y"
                             {printf("statements, statement\n");}
#line 2636 "sintatic.tab.c"
    break;

  case 25: /* input_output_expr: CMD_WRITE OPEN_PAREN str_expr CLS_PAREN SEMICOLON  */
#line 124 "sintatic/sintatic.y"
                                                          {printf("IO: write \n");}
#line 2642 "sintatic.tab.c"
    break;

  case 26: /* input_output_expr: CMD_WRITE OPEN_PAREN expr CLS_PAREN SEMICOLON  */
#line 125 "sintatic/sintatic.y"
                                                        {printf("IO: write \n");}
#line 2648 "sintatic.tab.c"
    break;

  case 27: /* input_output_expr: CMD_WRITELN OPEN_PAREN str_expr CLS_PAREN SEMICOLON  */
#line 126 "sintatic/sintatic.y"
                                                              {printf("IO: writeln \n");}
#line 2654 "sintatic.tab.c"
    break;

  case 28: /* input_output_expr: CMD_WRITELN OPEN_PAREN expr CLS_PAREN SEMICOLON  */
#line 127 "sintatic/sintatic.y"
                                                          {printf("IO: writeln \n");}
#line 2660 "sintatic.tab.c"
    break;

  case 29: /* input_output_expr: CMD_READ OPEN_PAREN var CLS_PAREN SEMICOLON  */
#line 128 "sintatic/sintatic.y"
                                                      {printf("IO: read \n");}
#line 2666 "sintatic.tab.c"
    break;

  case 30: /* $@1: %empty  */
#line 132 "sintatic/sintatic.y"
                           { printf(" for( "); }
#line 2672 "sintatic.tab.c"
    break;

  case 32: /* $@2: %empty  */
#line 136 "sintatic/sintatic.y"
                          { printf(" if( "); }
#line 2678 "sintatic.tab.c"
    break;

  case 33: /* $@3: %empty  */
#line 136 "sintatic/sintatic.y"
                                                              { printf(" ) "); }
#line 2684 "sintatic.tab.c"
    break;

  case 45: /* func_expr: ADD_FUNC OPEN_PAREN func_in_expr CLS_PAREN  */
#line 168 "sintatic/sintatic.y"
                                                   {printf("add \n");}
#line 2690 "sintatic.tab.c"
    break;

  case 46: /* func_expr: REMOVE_FUNC OPEN_PAREN func_in_expr CLS_PAREN  */
#line 169 "sintatic/sintatic.y"
                                                        {printf("remove \n");}
#line 2696 "sintatic.tab.c"
    break;

  case 47: /* func_expr: EXIST_FUNC OPEN_PAREN func_in_expr CLS_PAREN  */
#line 170 "sintatic/sintatic.y"
                                                       {printf("exist)\n");}
#line 2702 "sintatic.tab.c"
    break;

  case 66: /* term: var  */
#line 214 "sintatic/sintatic.y"
            {printf("var \n");}
#line 2708 "sintatic.tab.c"
    break;

  case 68: /* term: OPEN_PAREN expr CLS_PAREN  */
#line 216 "sintatic/sintatic.y"
                                    {printf("( operationalExp )\n");}
#line 2714 "sintatic.tab.c"
    break;

  case 69: /* logical_ops: LT_OP  */
#line 220 "sintatic/sintatic.y"
                { printf(" < \n");}
#line 2720 "sintatic.tab.c"
    break;

  case 70: /* logical_ops: LTE_OP  */
#line 221 "sintatic/sintatic.y"
                   { printf(" <= \n");}
#line 2726 "sintatic.tab.c"
    break;

  case 71: /* logical_ops: GT_OP  */
#line 222 "sintatic/sintatic.y"
                  { printf(" > \n");}
#line 2732 "sintatic.tab.c"
    break;

  case 72: /* logical_ops: GTE_OP  */
#line 223 "sintatic/sintatic.y"
                   { printf(" >= \n");}
#line 2738 "sintatic.tab.c"
    break;

  case 73: /* logical_ops: NEQ_OP  */
#line 224 "sintatic/sintatic.y"
                   { printf(" != \n");}
#line 2744 "sintatic.tab.c"
    break;

  case 74: /* logical_ops: EQUAL_OP  */
#line 225 "sintatic/sintatic.y"
                     { printf(" == \n");}
#line 2750 "sintatic.tab.c"
    break;

  case 78: /* var: ID  */
#line 238 "sintatic/sintatic.y"
               { printf("%s", (yyvsp[0].sval));}
#line 2756 "sintatic.tab.c"
    break;

  case 79: /* num_tipos: FLOAT  */
#line 242 "sintatic/sintatic.y"
              {printf("float value\n");}
#line 2762 "sintatic.tab.c"
    break;

  case 80: /* num_tipos: INT  */
#line 243 "sintatic/sintatic.y"
              {printf("int value\n");}
#line 2768 "sintatic.tab.c"
    break;

  case 81: /* num_tipos: EMPTY  */
#line 244 "sintatic/sintatic.y"
                {printf("empty value\n");}
#line 2774 "sintatic.tab.c"
    break;

  case 82: /* tipos: TYPE_INT  */
#line 248 "sintatic/sintatic.y"
                     { printf("INT ");}
#line 2780 "sintatic.tab.c"
    break;

  case 83: /* tipos: TYPE_FLOAT  */
#line 249 "sintatic/sintatic.y"
                     { printf("FLOAT "); }
#line 2786 "sintatic.tab.c"
    break;

  case 84: /* tipos: TYPE_SET  */
#line 250 "sintatic/sintatic.y"
                     { printf("SET "); }
#line 2792 "sintatic.tab.c"
    break;

  case 85: /* tipos: TYPE_ELEM  */
#line 251 "sintatic/sintatic.y"
                     { printf("ELEM "); }
#line 2798 "sintatic.tab.c"
    break;


#line 2802 "sintatic.tab.c"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

