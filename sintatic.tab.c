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

  #include "tree.h"
  #include "symbol_table.h"

  extern int yylex();
  extern int yylex_destroy();
  extern int yyerror(const char *);
  // int error = 0;

  TreeNodes* raiz;
  Symbol* table;

#line 88 "sintatic.tab.c"

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
  YYSYMBOL_INT = 6,                        /* INT  */
  YYSYMBOL_FLOAT = 7,                      /* FLOAT  */
  YYSYMBOL_ADD_OP = 8,                     /* ADD_OP  */
  YYSYMBOL_MULT_OP = 9,                    /* MULT_OP  */
  YYSYMBOL_STRING = 10,                    /* STRING  */
  YYSYMBOL_MAIN = 11,                      /* MAIN  */
  YYSYMBOL_EMPTY = 12,                     /* EMPTY  */
  YYSYMBOL_TYPE_INT = 13,                  /* TYPE_INT  */
  YYSYMBOL_TYPE_FLOAT = 14,                /* TYPE_FLOAT  */
  YYSYMBOL_TYPE_ELEM = 15,                 /* TYPE_ELEM  */
  YYSYMBOL_TYPE_SET = 16,                  /* TYPE_SET  */
  YYSYMBOL_CMD_IF = 17,                    /* CMD_IF  */
  YYSYMBOL_CMD_FOR = 18,                   /* CMD_FOR  */
  YYSYMBOL_CMD_FORALL = 19,                /* CMD_FORALL  */
  YYSYMBOL_GT_OP = 20,                     /* GT_OP  */
  YYSYMBOL_LT_OP = 21,                     /* LT_OP  */
  YYSYMBOL_LTE_OP = 22,                    /* LTE_OP  */
  YYSYMBOL_GTE_OP = 23,                    /* GTE_OP  */
  YYSYMBOL_NEQ_OP = 24,                    /* NEQ_OP  */
  YYSYMBOL_EQUAL_OP = 25,                  /* EQUAL_OP  */
  YYSYMBOL_ADD_FUNC = 26,                  /* ADD_FUNC  */
  YYSYMBOL_IS_SET_FUNC = 27,               /* IS_SET_FUNC  */
  YYSYMBOL_REMOVE_FUNC = 28,               /* REMOVE_FUNC  */
  YYSYMBOL_EXIST_FUNC = 29,                /* EXIST_FUNC  */
  YYSYMBOL_IN_OP = 30,                     /* IN_OP  */
  YYSYMBOL_OP_OR = 31,                     /* OP_OR  */
  YYSYMBOL_OP_AND = 32,                    /* OP_AND  */
  YYSYMBOL_OP_NEG = 33,                    /* OP_NEG  */
  YYSYMBOL_ATRIBUTION = 34,                /* ATRIBUTION  */
  YYSYMBOL_CMD_WRITE = 35,                 /* CMD_WRITE  */
  YYSYMBOL_CMD_WRITELN = 36,               /* CMD_WRITELN  */
  YYSYMBOL_CMD_READ = 37,                  /* CMD_READ  */
  YYSYMBOL_CMD_RETURN = 38,                /* CMD_RETURN  */
  YYSYMBOL_SEMICOLON = 39,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 40,                     /* COMMA  */
  YYSYMBOL_OPEN_PAREN = 41,                /* OPEN_PAREN  */
  YYSYMBOL_CLS_PAREN = 42,                 /* CLS_PAREN  */
  YYSYMBOL_OP_CUR_BRACKET = 43,            /* OP_CUR_BRACKET  */
  YYSYMBOL_CLS_CUR_BRACKET = 44,           /* CLS_CUR_BRACKET  */
  YYSYMBOL_YYACCEPT = 45,                  /* $accept  */
  YYSYMBOL_program = 46,                   /* program  */
  YYSYMBOL_list_declaration = 47,          /* list_declaration  */
  YYSYMBOL_main_declaration = 48,          /* main_declaration  */
  YYSYMBOL_var_declaration = 49,           /* var_declaration  */
  YYSYMBOL_func_declaration = 50,          /* func_declaration  */
  YYSYMBOL_list_args = 51,                 /* list_args  */
  YYSYMBOL_blockStmt = 52,                 /* blockStmt  */
  YYSYMBOL_list_statements = 53,           /* list_statements  */
  YYSYMBOL_stmt = 54,                      /* stmt  */
  YYSYMBOL_input_output_expr = 55,         /* input_output_expr  */
  YYSYMBOL_iteration_expr = 56,            /* iteration_expr  */
  YYSYMBOL_condition_expr = 57,            /* condition_expr  */
  YYSYMBOL_block_cond = 58,                /* block_cond  */
  YYSYMBOL_simple_complex_block_stmt = 59, /* simple_complex_block_stmt  */
  YYSYMBOL_return_stmt = 60,               /* return_stmt  */
  YYSYMBOL_set_stmt = 61,                  /* set_stmt  */
  YYSYMBOL_expr_stmt = 62,                 /* expr_stmt  */
  YYSYMBOL_expr = 63,                      /* expr  */
  YYSYMBOL_assign = 64,                    /* assign  */
  YYSYMBOL_func_expr = 65,                 /* func_expr  */
  YYSYMBOL_is_set_expr = 66,               /* is_set_expr  */
  YYSYMBOL_func_in_expr = 67,              /* func_in_expr  */
  YYSYMBOL_op_or_expr = 68,                /* op_or_expr  */
  YYSYMBOL_op_and_expr = 69,               /* op_and_expr  */
  YYSYMBOL_logical_expr = 70,              /* logical_expr  */
  YYSYMBOL_arithmetic_expr = 71,           /* arithmetic_expr  */
  YYSYMBOL_mult_expr = 72,                 /* mult_expr  */
  YYSYMBOL_first_term = 73,                /* first_term  */
  YYSYMBOL_term = 74,                      /* term  */
  YYSYMBOL_logical_ops = 75,               /* logical_ops  */
  YYSYMBOL_str_expr = 76,                  /* str_expr  */
  YYSYMBOL_list_expr = 77,                 /* list_expr  */
  YYSYMBOL_var = 78,                       /* var  */
  YYSYMBOL_adds_op = 79,                   /* adds_op  */
  YYSYMBOL_mult_ops = 80,                  /* mult_ops  */
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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6016

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  462

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   299


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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    88,    88,    96,    99,   103,   104,   108,   116,   120,
     129,   137,   140,   147,   155,   162,   168,   174,   178,   183,
     184,   185,   186,   187,   188,   189,   191,   195,   198,   201,
     204,   207,   213,   225,   233,   234,   244,   245,   249,   252,
     259,   265,   271,   274,   278,   279,   283,   291,   295,   299,
     306,   310,   316,   321,   329,   334,   335,   339,   344,   348,
     353,   357,   362,   366,   371,   375,   376,   380,   384,   388,
     392,   393,   394,   400,   403,   406,   409,   412,   415,   421,
     428,   429,   433,   440,   447,   455,   459,   463,   469,   472,
     475,   478
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
  "ID", "INT", "FLOAT", "ADD_OP", "MULT_OP", "STRING", "MAIN", "EMPTY",
  "TYPE_INT", "TYPE_FLOAT", "TYPE_ELEM", "TYPE_SET", "CMD_IF", "CMD_FOR",
  "CMD_FORALL", "GT_OP", "LT_OP", "LTE_OP", "GTE_OP", "NEQ_OP", "EQUAL_OP",
  "ADD_FUNC", "IS_SET_FUNC", "REMOVE_FUNC", "EXIST_FUNC", "IN_OP", "OP_OR",
  "OP_AND", "OP_NEG", "ATRIBUTION", "CMD_WRITE", "CMD_WRITELN", "CMD_READ",
  "CMD_RETURN", "SEMICOLON", "COMMA", "OPEN_PAREN", "CLS_PAREN",
  "OP_CUR_BRACKET", "CLS_CUR_BRACKET", "$accept", "program",
  "list_declaration", "main_declaration", "var_declaration",
  "func_declaration", "list_args", "blockStmt", "list_statements", "stmt",
  "input_output_expr", "iteration_expr", "condition_expr", "block_cond",
  "simple_complex_block_stmt", "return_stmt", "set_stmt", "expr_stmt",
  "expr", "assign", "func_expr", "is_set_expr", "func_in_expr",
  "op_or_expr", "op_and_expr", "logical_expr", "arithmetic_expr",
  "mult_expr", "first_term", "term", "logical_ops", "str_expr",
  "list_expr", "var", "adds_op", "mult_ops", "num_tipos", "tipos", YY_NULLPTR
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
     295,   296,   297,   298,   299
};
#endif

#define YYPACT_NINF (-177)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-92)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       9,   -24,    58,    62,    79,    91,    40,   466,   574,   591,
     847,   110,   910,  -177,  1067,    14,     7,   101,    44,  1091,
      94,    -6,    10,    78,    64,    69,    77,    77,   118,    77,
      77,  4441,  1122,  1166,   395,  1187,  1234,  5315,  5335,   211,
    5355,   114,   130,   146,   152,   167,   171,   180,   226,   183,
     184,   194,   120,   609,  3254,   205,  3295,  3336,  3377,  3418,
    3459,  3500,  3541,   223,   236,   243,   244,   318,   462,   214,
     938,  5635,  5375,  5395,  5415,  1585,   226,  5435,   245,   254,
     609,   260,   298,   111,    36,   111,   111,  5455,  5475,   762,
     762,   321,  3582,   314,  5215,   333,  1332,   312,  3623,  3664,
    3705,    49,   169,   169,   193,   235,   251,   338,   514,   544,
     169,   169,   773,   169,   945,   178,  5495,   341,   346,   344,
     361,   374,    -3,   133,   365,   378,     2,   328,   391,   398,
     405,   408,   409,   411,  3746,  5515,   476,   497,  1193,  5958,
    5655,  5535,  5555,   421,  5575,   138,   419,   646,   945,    36,
     432,   435,   439,   452,   463,   492,   495,   499,   501,   505,
    1157,  5595,  1004,  2006,  3787,  2135,   509,   426,   454,  3828,
    3869,  3910,  3951,  3992,   455,  4402,   260,  4402,  4402,  4033,
     511,  4074,  4115,   500,  4156,   552,   553,   554,   555,   154,
     523,  5188,  5615,  5240,  1379,  1288,  1537,  4738,   464,   522,
     531,   299,   609,   536,   396,   445,    99,   679,  5138,  4763,
    4788,  4813,  1404,   299,  4838,   803,   540,   546,   563,  5265,
    5675,  5693,  5711,   416,   609,   198,  5971,  1470,  5729,  5747,
    5765,  5290,   416,  5783,   558,   572,   567,   577,   581,  1186,
    1435,  1650,  1812,   588,   589,   590,   429,   609,   259,    57,
      82,   103,   719,  4863,  1881,  2037,  4463,  1231,   429,  4488,
    4197,   269,   111,   607,   608,   614,   628,   635,   639,   645,
     901,  4441,  2188,  2229,  2270,  2311,  2352,  2393,  2434,   649,
     656,   667,   245,  4441,  4238,  4279,   633,  4320,   111,   111,
     111,  4888,  4913,  4938,   671,   826,   826,   826,   826,   826,
     457,  4963,  5801,  5819,  5837,   674,   111,   111,   111,   111,
     504,  5855,   111,   111,   111,   111,   111,   111,  4513,  4538,
    4563,   678,   336,  1057,  1057,  1057,  1057,  1057,   686,  4588,
     458,   681,   689,   690,   493,   534,   290,  2475,   609,   260,
     298,   762,   762,   321,  2516,   694,   693,  2557,  2598,  2639,
     709,   711,   609,   597,   687,   763,  4988,   382,  1560,  5163,
    5013,  5038,  5063,   714,  5873,  5984,  1837,  5891,  5909,  5927,
     716,   793,   844,   846,   863,   889,   902,  4613,   347,   712,
     730,   741,   594,   626,   239,  1258,  5088,  4638,  4663,  4688,
     718,   111,   111,   111,   742,   750,   767,   757,   760,   765,
     770,   774,  2680,  2721,  2762,  4361,   775,   776,   777,   779,
    5113,  5945,  1027,  1064,  1080,   294,   358,   390,   111,   111,
     111,  4713,   957,   964,   973,   646,   945,    36,   753,   783,
     800,   804,   807,   996,  1013,  1019,  1078,  1098,  1114,  2803,
    2844,   810,   808,   822,  2885,  2926,  2967,  3008,  3049,   705,
     733,   756,   646,   260,   646,   646,  3090,   824,  3131,  3172,
     761,  3213
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -177,  -177,  -177,   845,     4,  -177,    15,   -21,   -44,    -5,
    -145,  -117,  -100,   448,  -161,   -86,   -58,   -53,   832,   -62,
     424,   -49,  1793,  1663,  1647,  1474,  1304,  1214,  1044,   271,
    -176,   -87,  -131,   -10,   530,  -172,   789,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,    54,    10,    22,   162,    55,   163,
      57,    58,    59,   164,   165,    60,    61,    62,    63,    64,
      65,    66,    67,   123,   225,   226,   227,   228,   229,   230,
     110,   130,   146,   231,   232,   113,   233,    78
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,    17,   273,   132,     9,    32,    33,    11,    35,    36,
       1,     9,    97,    28,   179,    12,   181,   182,    23,   119,
      23,    75,     2,     3,     4,     5,    56,   -56,   -56,   174,
     274,   297,   -56,   -56,    23,    25,    26,   299,    88,   150,
      13,   234,    94,   212,   153,    21,    75,   275,    18,    79,
     307,    56,    27,   -82,   235,   -82,   309,   185,   186,   187,
     188,   276,   198,   -88,   199,   200,    88,   -89,   117,   -88,
     212,   120,   121,   -89,   125,   236,   325,   237,   238,   212,
     212,   133,   327,   189,   -91,   280,   -15,   -56,   -56,   277,
     -91,   137,    94,    94,   278,    24,   -90,   -56,   281,   -56,
      94,    94,   -90,    94,    94,   257,    29,   185,   186,   187,
     188,    30,   322,   323,   180,    15,   219,   220,   221,    39,
      31,    16,   -44,   222,   -44,   193,    37,    38,    39,   -55,
     -55,   296,    40,   -55,   -55,   324,   -15,    75,    94,   168,
      19,   -55,    20,   -55,   223,   -55,    44,   282,    46,    47,
     257,   272,   224,    48,   284,    80,   284,   284,    34,    92,
     -14,    53,   184,   261,   262,    75,   286,    75,    75,   363,
     285,    81,   285,   285,   193,    37,    38,    39,   160,   370,
     -81,    40,   297,   239,   240,   241,    39,    82,   299,   307,
     242,   293,   212,    83,   -82,   309,   -82,   390,   -75,   -75,
     -75,   -75,    48,   293,   243,   -75,   244,   245,    84,   325,
      53,   246,    85,   304,   212,   327,   -83,   -83,   -83,   247,
     144,    86,   304,   -83,    89,    90,   -75,   346,   -55,   -55,
     306,   192,    37,    38,   -75,    91,   320,   212,    40,   351,
     -73,   -73,   -73,   -73,   -55,   -55,   103,   -73,   320,    96,
     216,   335,   -83,   -55,   398,   400,   -74,   -74,   -74,   -74,
      94,    75,    98,   -74,   440,   217,    56,    53,   -73,   -54,
     -54,   324,   350,    75,   330,    99,   -73,   395,    56,   -54,
     273,   -54,   -45,   100,   -74,   212,   212,   212,   212,   212,
     257,   456,   -74,   458,   459,   331,   -13,   332,   333,   -45,
     257,   -45,    74,   218,   291,   195,   196,   273,   274,   273,
     273,   197,   383,   257,   257,   257,   257,   257,   257,    87,
     -54,   -54,   306,    74,   211,   275,   234,    74,   212,   120,
     396,   212,   212,   401,   -47,   274,   -47,   274,   274,   276,
     202,   378,   212,   -76,   -76,   -76,   -76,   116,   -56,   -56,
     -76,   211,   275,   134,   275,   275,   -17,   -56,   -56,   -56,
     211,   211,   379,   280,   380,   381,   276,   277,   276,   276,
     154,   -76,   278,    74,    74,   135,   281,   -82,   -82,   -76,
     260,    74,    74,   148,    74,    74,   256,   -82,   147,   -82,
     280,   457,   280,   280,   277,   114,   277,   277,   -48,   278,
     -48,   278,   278,   281,   149,   281,   281,   151,   185,   186,
     187,   188,   -54,   -54,   296,    75,    94,   443,    74,    74,
     152,   302,   220,   221,   -54,   282,   -56,   -56,   222,   272,
     -49,   256,   -49,   -79,   318,   240,   241,   -15,   -56,   461,
     155,   242,    75,   286,    75,    75,    74,   156,    74,    74,
     157,   158,   282,   159,   282,   282,   272,   224,   272,   272,
     -46,   161,   239,   240,   241,    39,    -2,     1,   177,   242,
     247,   -47,   292,   211,   -51,   261,   295,   203,   -50,     2,
       3,     4,     5,   243,   301,   244,   245,   -44,   -82,   -82,
     246,   -48,   101,   102,   303,   211,   178,   -80,   247,   362,
     -82,   -44,   -49,   311,   203,   288,   -53,   -53,   124,   239,
     240,   241,    39,   203,   203,   -53,   242,   319,   211,   -77,
     -77,   -77,   -77,   -53,   -53,   136,   -77,   -52,   -52,   329,
     243,   169,   244,   245,   170,   -53,   -52,   246,   171,   248,
     172,    74,    74,   283,   173,   247,   369,   -77,   176,   -78,
     -78,   -78,   -78,   183,    74,   -77,   -78,   -88,   -89,   -91,
     -90,    76,   287,   289,   -52,   -52,   211,   211,   211,   211,
     211,   256,   290,   167,    -4,    -4,   -52,   -78,   -45,   -82,
     -82,   256,    76,   213,   248,   -78,    76,    -4,    -4,    -4,
      -4,    -6,    -6,   -82,   256,   256,   256,   256,   256,   256,
     -82,   111,   -82,   -82,    -6,    -6,    -6,    -6,   312,   211,
     213,   -82,   211,   211,   194,   195,   196,    39,   313,   213,
     213,   197,   314,   211,   -53,   -53,   203,   -56,   -56,   315,
     316,   317,    76,    76,   -53,   198,   -53,   199,   200,   407,
      76,    76,   201,    76,    76,   258,   337,   263,   203,   338,
     202,   191,    37,    38,    39,   339,   -52,   -52,    40,   185,
     186,   187,   188,   264,   265,   266,   -52,   352,   -52,   340,
     111,   203,    44,    45,    46,    47,   341,    76,    76,    48,
     342,   267,   268,   269,   270,   334,   343,    53,   347,   271,
     258,   239,   240,   241,    39,   348,    74,    74,   242,   104,
     105,   106,   107,   108,   109,    76,   349,    76,    76,   -58,
     -58,   -58,   243,   356,   244,   245,   364,   -56,   -56,   246,
     377,   -58,   391,    74,   248,    74,    74,   247,   389,   408,
     392,   393,   213,   402,   248,   -47,   -47,   403,   298,   104,
     105,   106,   107,   108,   109,   -47,   382,   -47,   404,   -58,
     -58,   -58,   248,   418,   213,   405,   410,   308,   411,   -58,
     421,   -58,   203,   -48,   -48,   203,   203,   194,   195,   196,
      39,   419,   128,   -48,   197,   -48,   203,   213,   -84,   -84,
     -84,   -84,   420,   326,   425,   -84,   -49,   -49,   198,   426,
     199,   200,   444,   -56,   -56,   201,   -49,   427,   -49,   428,
      76,    76,   429,   202,   271,   409,   -84,   430,   -83,   -83,
     -83,   -83,   431,    76,   -84,   -83,   432,   -46,   -47,   -48,
      77,   -49,   445,   -56,   -56,   213,   213,   213,   213,   213,
     258,   194,   195,   196,    39,   412,   -83,    77,   197,   446,
     258,    77,   214,   447,   -83,    77,   448,    -5,    -5,   453,
     454,   442,    14,   258,   258,   258,   258,   258,   258,   201,
      -5,    -5,    -5,    -5,   455,    77,   460,   202,   213,   214,
       0,   213,   213,   439,   -56,   -56,   -56,   -56,   214,   214,
       0,     0,   213,     0,    93,    95,   413,     0,   414,   298,
       0,    77,    77,   -56,   -56,     0,   308,     0,     0,    77,
      77,     0,    77,    77,   259,   415,   193,    37,    38,    39,
      -8,    -8,   118,    40,     0,     0,   326,     0,     0,   -56,
     -56,   129,   131,    -8,    -8,    -8,    -8,    44,     0,    46,
      47,   416,   -56,   -56,    48,     0,    77,    77,     0,     0,
     344,     0,    53,     0,   417,     0,   143,   145,     0,   259,
     193,    37,    38,    39,     0,    76,    76,    40,   104,   105,
     106,   107,   108,   109,    77,     0,    77,    77,   -58,   -58,
     -58,    44,     0,    46,    47,     0,     0,   -58,    48,   279,
     166,     0,    76,     0,    76,    76,    53,   -56,   -56,     0,
     214,   214,   145,     0,   -56,   -56,     0,     0,     0,   436,
       0,     0,   214,   -56,   -56,   -37,   437,     0,   -37,   -37,
     -37,   -37,   -37,   214,     0,   438,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,     0,     0,   -56,   -56,     0,     0,
     -37,   -37,   -37,   -37,   294,   259,   214,   -37,   449,   -37,
     -37,   -37,   -37,   -56,   -56,   -37,     0,   259,   -37,   -56,
     -56,     0,     0,     0,     0,   450,   305,   -47,   -47,    77,
      77,   451,   239,   240,   241,    39,   -47,    -3,    -3,   242,
       0,     0,    77,     0,     0,    73,     0,     0,     0,   321,
      -3,    -3,    -3,    -3,   214,   214,   214,   214,   214,   259,
     246,    -7,    -7,     0,   -48,   -48,    73,   210,   247,   259,
      73,     0,   345,   -48,    -7,    -7,    -7,    -7,   -47,   -47,
     -49,   -49,   259,   259,   259,   259,   259,   259,     0,   -49,
     -47,     0,   -12,   -12,   210,     0,     0,   214,   -48,   -48,
     214,   214,   145,   210,   210,   -12,   -12,   -12,   -12,     0,
     -48,   214,   145,     0,   -49,   -49,    73,    73,     0,     0,
       0,     0,     0,     0,    73,    73,   -49,   142,    73,   255,
     145,     0,   239,   240,   241,    39,   -10,   -10,     0,   242,
     394,     0,     0,   397,   399,     0,     0,     0,     0,   -10,
     -10,   -10,   -10,   243,   406,   244,   245,   -11,   -11,     0,
     246,    73,    73,     0,   -82,   -82,     0,     0,   247,     0,
     -11,   -11,   -11,   -11,   255,     0,   -82,   -82,   -82,   -82,
     -82,   -82,     0,     0,    77,    77,   -82,   -82,   -82,    73,
       0,    73,    73,   -54,   -54,   103,   -82,   -82,   -82,     0,
       0,     0,   -54,     0,    -9,    -9,     0,     0,     0,   -70,
     -70,    77,     0,    77,    77,    72,   210,    -9,    -9,    -9,
      -9,   -70,   -70,   -70,   -70,   -70,   -70,   279,   441,     0,
       0,   -70,   -70,   -70,     0,     0,    72,   209,   210,     0,
      72,   -70,   328,   -70,     0,     0,     0,     0,   104,   105,
     106,   107,   108,   109,   279,     0,   279,   279,   -57,   -57,
     -57,   210,     0,     0,   209,     0,   -86,   -86,   -57,     0,
     -57,     0,     0,   209,   209,     0,     0,     0,   -86,   -86,
     -86,   -86,   -86,   -86,    73,    73,    72,    72,   -86,   -86,
     -86,     0,     0,     0,    72,   141,     0,    73,    72,   254,
     -86,     0,   -16,   -16,     0,    71,     0,     0,     0,   210,
     210,   210,   210,   361,   255,   -16,   -16,   -16,   -16,     0,
       0,     0,     0,   368,   255,     0,    71,   208,     0,     0,
      71,    72,    72,     0,     0,     0,     0,   255,   255,   255,
     255,   388,   255,     0,   254,     0,     0,     0,     0,     0,
       0,     0,   210,     0,   208,   210,   210,   -82,   -82,    72,
       0,    72,    72,   208,   208,     0,   210,     0,     0,   -82,
     -82,   -82,   -82,   -82,   -82,     0,    71,    71,     0,   -82,
     -82,   -82,   -70,   -70,   140,     0,   209,     0,    71,   253,
     -82,   -82,     0,     0,   -70,   -70,   -70,   -70,   -70,   -70,
       0,     0,     0,     0,   -70,   -70,   -70,     0,   209,     0,
       0,     0,     0,   -86,   -86,   300,   -70,     0,     0,     0,
       0,    71,    71,     0,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   209,     0,     0,   253,   -86,   -86,   -86,     0,    73,
      73,     0,     0,     0,     0,   -86,     0,   -86,   215,    71,
       0,    71,    71,     0,    72,    72,     0,     0,     0,     0,
     -60,   -60,   -60,   -60,   -60,   -60,    73,    72,    73,    73,
     -60,   -60,   -60,     0,     0,    70,   208,     0,     0,   209,
     209,   209,   360,     0,   254,     0,     0,     0,     0,     0,
       0,     0,   367,     0,   254,     0,    70,   207,   208,     0,
      70,     0,     0,     0,     0,     0,     0,   254,   254,   254,
     387,     0,   254,     0,     0,   -85,   -85,     0,     0,     0,
       0,   208,   209,     0,   207,   209,   209,   -85,   -85,   -85,
     -85,   -85,   -85,   207,   207,     0,   209,   -85,   -85,   -85,
       0,     0,     0,     0,    71,    71,    70,   139,     0,   -85,
     104,   105,   106,   107,   108,   109,     0,    71,    70,   252,
     -57,   -57,   -57,   -70,   -70,     0,     0,     0,     0,   208,
     208,   359,   -57,     0,   253,   -70,   -70,   -70,   -70,   -70,
     -70,   366,     0,     0,   253,   -70,   -70,   -70,     0,   114,
       0,    70,    70,     0,   -70,     0,   115,   253,   253,   386,
       0,     0,   253,     0,   252,     0,     0,     0,     0,    72,
      72,     0,   208,     0,     0,   208,   208,     0,     0,    70,
       0,    70,    70,     0,     0,     0,   208,     0,   -85,   -85,
       0,     0,     0,     0,     0,     0,    72,     0,    72,    72,
     -85,   -85,   -85,   -85,   -85,   -85,   207,     0,    69,     0,
     -85,   -85,   -85,     0,     0,     0,     0,     0,     0,     0,
     -85,     0,   -85,     0,    68,     0,     0,     0,   207,    69,
     206,     0,     0,    69,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    68,   205,     0,     0,    68,
       0,   207,     0,     0,     0,     0,     0,   206,     0,    71,
      71,     0,     0,     0,     0,     0,   206,   206,     0,     0,
       0,     0,     0,   205,    70,    70,     0,     0,     0,   138,
       0,     0,   205,   205,     0,     0,    71,    70,    71,    71,
       0,    69,   251,     0,     0,     0,     0,     0,     0,   207,
     358,     0,     0,     0,   252,     0,     0,    68,   250,     0,
     365,     0,     0,     0,   252,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    69,    69,     0,   252,   385,     0,
       0,     0,   252,     0,     0,     0,     0,   251,     0,     0,
      68,    68,   207,     0,     0,   207,   207,     0,     0,     0,
     -87,   -87,    69,   250,    69,    69,   207,     0,     0,     0,
       0,     0,   -87,   -87,   -87,   -87,   -87,   -87,    68,     0,
      68,    68,   -87,   -87,   -87,   215,   204,     0,     0,   206,
       0,     0,   -87,     0,   -87,     0,     0,   -59,   -59,   -59,
     -59,   -59,   -59,     0,     0,   205,     0,   -59,   -59,   -59,
       0,   206,     0,   204,     0,     0,   122,     0,   126,   127,
       0,     0,   204,   204,     0,     0,     0,   205,     0,   -62,
     112,     0,     0,     0,   206,     0,     0,     0,     0,    70,
      70,   -62,   -62,   -62,   -62,   -62,   -62,     0,   249,   336,
     205,   -62,   -62,   -62,     0,     0,     0,    69,    69,     0,
       0,   -62,     0,   -62,     0,     0,    70,     0,    70,    70,
      69,     0,     0,    68,    68,     0,     0,     0,     0,     0,
       0,     0,   357,     0,     0,     0,    68,   251,     0,     0,
       0,     0,     0,   249,     0,     0,     0,   251,     0,     0,
       0,     0,     0,   250,     0,     0,     0,     0,     0,     0,
     384,     0,     0,   250,     0,   251,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   206,     0,     0,   206,   206,
       0,   250,     0,     0,     0,   204,     0,     0,     0,   206,
       0,   205,     0,     0,   205,   205,     0,   -36,     0,     0,
     -36,   -36,   -36,   -36,   -36,   205,     0,   204,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,     0,     0,     0,     0,
       0,     0,   -36,   -36,   -36,   -36,     0,     0,     0,   -36,
     204,   -36,   -36,   -36,   -36,   -64,   -64,   -36,     0,     0,
     -36,     0,     0,     0,     0,     0,     0,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,     0,   -64,   -64,   -64,
       0,     0,    69,    69,     0,     0,     0,   -64,     0,   -64,
       0,   353,   354,   355,     0,     0,     0,     0,    68,    68,
       0,     0,     0,   249,     0,     0,     0,     0,     0,    69,
       0,    69,    69,   249,     0,   371,   372,   373,   374,   375,
     376,     0,     0,     0,     0,    68,     0,    68,    68,     0,
       0,   249,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   204,     0,     0,   204,   204,   -34,     0,     0,   175,
     -34,   -34,   -34,   -34,     0,   204,     0,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,     0,     0,     0,     0,     0,
       0,   -34,   -34,   -34,   -34,     0,     0,     0,   -34,     0,
     -34,   -34,   -34,   -34,     0,     0,   -34,     0,     0,   -34,
       0,     0,     0,     0,   422,   423,   424,     0,     0,   -25,
       0,     0,   -25,   -25,   -25,   -25,   -25,     0,     0,     0,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,     0,     0,
       0,   433,   434,   435,   -25,   -25,   -25,   -25,     0,     0,
       0,   -25,     0,   -25,   -25,   -25,   -25,     0,     0,   -25,
     -22,     0,   -25,   -22,   -22,   -22,   -22,   -22,     0,     0,
       0,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,     0,
       0,     0,     0,     0,     0,   -22,   -22,   -22,   -22,     0,
       0,     0,   -22,     0,   -22,   -22,   -22,   -22,     0,     0,
     -22,   -19,     0,   -22,   -19,   -19,   -19,   -19,   -19,     0,
       0,     0,   -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,
       0,     0,     0,     0,     0,     0,   -19,   -19,   -19,   -19,
       0,     0,     0,   -19,     0,   -19,   -19,   -19,   -19,     0,
       0,   -19,   -20,     0,   -19,   -20,   -20,   -20,   -20,   -20,
       0,     0,     0,   -20,   -20,   -20,   -20,   -20,   -20,   -20,
     -20,     0,     0,     0,     0,     0,     0,   -20,   -20,   -20,
     -20,     0,     0,     0,   -20,     0,   -20,   -20,   -20,   -20,
       0,     0,   -20,   -21,     0,   -20,   -21,   -21,   -21,   -21,
     -21,     0,     0,     0,   -21,   -21,   -21,   -21,   -21,   -21,
     -21,   -21,     0,     0,     0,     0,     0,     0,   -21,   -21,
     -21,   -21,     0,     0,     0,   -21,     0,   -21,   -21,   -21,
     -21,     0,     0,   -21,   -24,     0,   -21,   -24,   -24,   -24,
     -24,   -24,     0,     0,     0,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,     0,     0,     0,     0,     0,     0,   -24,
     -24,   -24,   -24,     0,     0,     0,   -24,     0,   -24,   -24,
     -24,   -24,     0,     0,   -24,   -23,     0,   -24,   -23,   -23,
     -23,   -23,   -23,     0,     0,     0,   -23,   -23,   -23,   -23,
     -23,   -23,   -23,   -23,     0,     0,     0,     0,     0,     0,
     -23,   -23,   -23,   -23,     0,     0,     0,   -23,     0,   -23,
     -23,   -23,   -23,     0,     0,   -23,    -8,     0,   -23,    -8,
      -8,    -8,    -8,    -8,     0,     0,     0,    -8,    -8,    -8,
      -8,    -8,    -8,    -8,    -8,     0,     0,     0,     0,     0,
       0,    -8,    -8,    -8,    -8,     0,     0,     0,    -8,     0,
      -8,    -8,    -8,    -8,     0,     0,    -8,   -38,     0,    -8,
     -38,   -38,   -38,   -38,   -38,     0,     0,     0,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,     0,     0,     0,     0,
       0,     0,   -38,   -38,   -38,   -38,     0,     0,     0,   -38,
       0,   -38,   -38,   -38,   -38,     0,     0,   -38,   -43,     0,
     -38,   -43,   -43,   -43,   -43,   -43,     0,     0,     0,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,     0,     0,
       0,     0,     0,   -43,   -43,   -43,   -43,     0,     0,     0,
     -43,     0,   -43,   -43,   -43,   -43,     0,     0,   -43,   -26,
       0,   -43,   -26,   -26,   -26,   -26,   -26,     0,     0,     0,
     -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,     0,     0,
       0,     0,     0,     0,   -26,   -26,   -26,   -26,     0,     0,
       0,   -26,     0,   -26,   -26,   -26,   -26,     0,     0,   -26,
     -42,     0,   -26,   -42,   -42,   -42,   -42,   -42,     0,     0,
       0,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,
       0,     0,     0,     0,     0,   -42,   -42,   -42,   -42,     0,
       0,     0,   -42,     0,   -42,   -42,   -42,   -42,     0,     0,
     -42,   -39,     0,   -42,   -39,   -39,   -39,   -39,   -39,     0,
       0,     0,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
       0,     0,     0,     0,     0,     0,   -39,   -39,   -39,   -39,
       0,     0,     0,   -39,     0,   -39,   -39,   -39,   -39,     0,
       0,   -39,   -16,     0,   -39,   -16,   -16,   -16,   -16,   -16,
       0,     0,     0,   -16,   -16,   -16,   -16,   -16,   -16,   -16,
     -16,     0,     0,     0,     0,     0,     0,   -16,   -16,   -16,
     -16,     0,     0,     0,   -16,     0,   -16,   -16,   -16,   -16,
       0,     0,   -16,    -7,     0,   -16,    -7,    -7,    -7,    -7,
      -7,     0,     0,     0,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,     0,     0,     0,     0,     0,     0,    -7,    -7,
      -7,    -7,     0,     0,     0,    -7,     0,    -7,    -7,    -7,
      -7,     0,     0,    -7,   -33,     0,    -7,   -33,   -33,   -33,
     -33,   -33,     0,     0,     0,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,     0,     0,     0,     0,     0,     0,   -33,
     -33,   -33,   -33,     0,     0,     0,   -33,     0,   -33,   -33,
     -33,   -33,     0,     0,   -33,   -34,     0,   -33,   452,   -34,
     -34,   -34,   -34,     0,     0,     0,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,     0,     0,     0,     0,     0,     0,
     -34,   -34,   -34,   -34,     0,     0,     0,   -34,     0,   -34,
     -34,   -34,   -34,     0,     0,   -34,   -28,     0,   -34,   -28,
     -28,   -28,   -28,   -28,     0,     0,     0,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,     0,     0,     0,     0,     0,
       0,   -28,   -28,   -28,   -28,     0,     0,     0,   -28,     0,
     -28,   -28,   -28,   -28,     0,     0,   -28,   -27,     0,   -28,
     -27,   -27,   -27,   -27,   -27,     0,     0,     0,   -27,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,     0,     0,     0,     0,
       0,     0,   -27,   -27,   -27,   -27,     0,     0,     0,   -27,
       0,   -27,   -27,   -27,   -27,     0,     0,   -27,   -30,     0,
     -27,   -30,   -30,   -30,   -30,   -30,     0,     0,     0,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,     0,     0,
       0,     0,     0,   -30,   -30,   -30,   -30,     0,     0,     0,
     -30,     0,   -30,   -30,   -30,   -30,     0,     0,   -30,   -29,
       0,   -30,   -29,   -29,   -29,   -29,   -29,     0,     0,     0,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,     0,     0,
       0,     0,     0,     0,   -29,   -29,   -29,   -29,     0,     0,
       0,   -29,     0,   -29,   -29,   -29,   -29,     0,     0,   -29,
     -31,     0,   -29,   -31,   -31,   -31,   -31,   -31,     0,     0,
       0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,
       0,     0,     0,     0,     0,   -31,   -31,   -31,   -31,     0,
       0,     0,   -31,     0,   -31,   -31,   -31,   -31,     0,     0,
     -31,   -35,     0,   -31,   -35,   -35,   -35,   -35,   -35,     0,
       0,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
       0,     0,     0,     0,     0,     0,   -35,   -35,   -35,   -35,
       0,     0,     0,   -35,     0,   -35,   -35,   -35,   -35,     0,
       0,   -35,   -40,     0,   -35,   -40,   -40,   -40,   -40,   -40,
       0,     0,     0,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,     0,     0,     0,     0,     0,     0,   -40,   -40,   -40,
     -40,     0,     0,     0,   -40,     0,   -40,   -40,   -40,   -40,
       0,     0,   -40,   -41,     0,   -40,   -41,   -41,   -41,   -41,
     -41,     0,     0,     0,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,     0,     0,     0,     0,     0,     0,   -41,   -41,
     -41,   -41,     0,     0,     0,   -41,     0,   -41,   -41,   -41,
     -41,     0,     0,   -41,   -32,     0,   -41,   -32,   -32,   -32,
     -32,   -32,     0,     0,     0,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,     0,     0,     0,     0,     0,     0,   -32,
     -32,   -32,   -32,     0,     0,     0,   -32,     0,   -32,   -32,
     -32,   -32,     0,     0,   -32,   -25,     0,   -32,     0,   -25,
     -25,   -25,   -25,     0,     0,     0,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,   -25,     0,     0,     0,     0,     0,     0,
     -25,   -25,   -25,   -25,     0,     0,     0,   -25,     0,   -25,
     -25,   -25,   -25,     0,     0,   -25,   190,     0,   -25,     0,
     191,    37,    38,    39,     0,     0,     0,    40,   185,   186,
     187,   188,    41,    42,    43,     0,     0,     0,     0,     0,
       0,    44,    45,    46,    47,     0,     0,     0,    48,     0,
      49,    50,    51,    52,     0,     0,    53,   -22,     0,   -18,
       0,   -22,   -22,   -22,   -22,     0,     0,     0,   -22,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,     0,     0,     0,     0,
       0,     0,   -22,   -22,   -22,   -22,     0,     0,     0,   -22,
       0,   -22,   -22,   -22,   -22,     0,     0,   -22,   -19,     0,
     -22,     0,   -19,   -19,   -19,   -19,     0,     0,     0,   -19,
     -19,   -19,   -19,   -19,   -19,   -19,   -19,     0,     0,     0,
       0,     0,     0,   -19,   -19,   -19,   -19,     0,     0,     0,
     -19,     0,   -19,   -19,   -19,   -19,     0,     0,   -19,   -20,
       0,   -19,     0,   -20,   -20,   -20,   -20,     0,     0,     0,
     -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,     0,     0,
       0,     0,     0,     0,   -20,   -20,   -20,   -20,     0,     0,
       0,   -20,     0,   -20,   -20,   -20,   -20,     0,     0,   -20,
     -21,     0,   -20,     0,   -21,   -21,   -21,   -21,     0,     0,
       0,   -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,     0,
       0,     0,     0,     0,     0,   -21,   -21,   -21,   -21,     0,
       0,     0,   -21,     0,   -21,   -21,   -21,   -21,     0,     0,
     -21,   -24,     0,   -21,     0,   -24,   -24,   -24,   -24,     0,
       0,     0,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
       0,     0,     0,     0,     0,     0,   -24,   -24,   -24,   -24,
       0,     0,     0,   -24,     0,   -24,   -24,   -24,   -24,     0,
       0,   -24,   -23,     0,   -24,     0,   -23,   -23,   -23,   -23,
       0,     0,     0,   -23,   -23,   -23,   -23,   -23,   -23,   -23,
     -23,     0,     0,     0,     0,     0,     0,   -23,   -23,   -23,
     -23,     0,     0,     0,   -23,     0,   -23,   -23,   -23,   -23,
       0,     0,   -23,   -38,     0,   -23,     0,   -38,   -38,   -38,
     -38,     0,     0,     0,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,     0,     0,     0,     0,     0,     0,   -38,   -38,
     -38,   -38,     0,     0,     0,   -38,     0,   -38,   -38,   -38,
     -38,     0,     0,   -38,   -43,     0,   -38,     0,   -43,   -43,
     -43,   -43,     0,     0,     0,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,     0,     0,     0,     0,     0,     0,   -43,
     -43,   -43,   -43,     0,     0,     0,   -43,     0,   -43,   -43,
     -43,   -43,     0,     0,   -43,   -26,     0,   -43,     0,   -26,
     -26,   -26,   -26,     0,     0,     0,   -26,   -26,   -26,   -26,
     -26,   -26,   -26,   -26,     0,     0,     0,     0,     0,     0,
     -26,   -26,   -26,   -26,     0,     0,     0,   -26,     0,   -26,
     -26,   -26,   -26,     0,     0,   -26,   -42,     0,   -26,     0,
     -42,   -42,   -42,   -42,     0,     0,     0,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,     0,     0,     0,     0,     0,
       0,   -42,   -42,   -42,   -42,     0,     0,     0,   -42,     0,
     -42,   -42,   -42,   -42,     0,     0,   -42,   -39,     0,   -42,
       0,   -39,   -39,   -39,   -39,     0,     0,     0,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,     0,     0,     0,     0,
       0,     0,   -39,   -39,   -39,   -39,     0,     0,     0,   -39,
       0,   -39,   -39,   -39,   -39,     0,     0,   -39,   -33,     0,
     -39,     0,   -33,   -33,   -33,   -33,     0,     0,     0,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,     0,
       0,     0,     0,   -33,   -33,   -33,   -33,     0,     0,     0,
     -33,     0,   -33,   -33,   -33,   -33,     0,     0,   -33,   -28,
       0,   -33,     0,   -28,   -28,   -28,   -28,     0,     0,     0,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,     0,     0,
       0,     0,     0,     0,   -28,   -28,   -28,   -28,     0,     0,
       0,   -28,     0,   -28,   -28,   -28,   -28,     0,     0,   -28,
     -27,     0,   -28,     0,   -27,   -27,   -27,   -27,     0,     0,
       0,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,     0,
       0,     0,     0,     0,     0,   -27,   -27,   -27,   -27,     0,
       0,     0,   -27,     0,   -27,   -27,   -27,   -27,     0,     0,
     -27,   -30,     0,   -27,     0,   -30,   -30,   -30,   -30,     0,
       0,     0,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
       0,     0,     0,     0,     0,     0,   -30,   -30,   -30,   -30,
       0,     0,     0,   -30,     0,   -30,   -30,   -30,   -30,     0,
       0,   -30,   -29,     0,   -30,     0,   -29,   -29,   -29,   -29,
       0,     0,     0,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,     0,     0,     0,     0,     0,     0,   -29,   -29,   -29,
     -29,     0,     0,     0,   -29,     0,   -29,   -29,   -29,   -29,
       0,     0,   -29,   -31,     0,   -29,     0,   -31,   -31,   -31,
     -31,     0,     0,     0,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,     0,     0,     0,     0,     0,     0,   -31,   -31,
     -31,   -31,     0,     0,     0,   -31,     0,   -31,   -31,   -31,
     -31,     0,     0,   -31,   -35,     0,   -31,     0,   -35,   -35,
     -35,   -35,     0,     0,     0,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,     0,     0,     0,     0,     0,     0,   -35,
     -35,   -35,   -35,     0,     0,     0,   -35,     0,   -35,   -35,
     -35,   -35,     0,     0,   -35,   -40,     0,   -35,     0,   -40,
     -40,   -40,   -40,     0,     0,     0,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,     0,     0,     0,     0,     0,     0,
     -40,   -40,   -40,   -40,     0,     0,     0,   -40,     0,   -40,
     -40,   -40,   -40,     0,     0,   -40,   -41,     0,   -40,     0,
     -41,   -41,   -41,   -41,     0,     0,     0,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,     0,     0,     0,     0,     0,
       0,   -41,   -41,   -41,   -41,     0,     0,     0,   -41,     0,
     -41,   -41,   -41,   -41,     0,     0,   -41,   -32,     0,   -41,
       0,   -32,   -32,   -32,   -32,     0,     0,     0,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,     0,     0,     0,     0,
       0,     0,   -32,   -32,   -32,   -32,     0,     0,     0,   -32,
       0,   -32,   -32,   -32,   -32,     0,     0,   -32,    -7,     0,
     -32,     0,    -7,    -7,    -7,    -7,     0,     0,     0,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,     0,     0,     0,
       0,     0,     0,    -7,    -7,    -7,    -7,     0,     0,     0,
      -7,     0,    -7,    -7,    -7,    -7,     0,     0,    -7,   -37,
       0,    -7,     0,   -37,   -37,   -37,   -37,     0,     0,     0,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,     0,
       0,     0,     0,     0,   -37,   -37,   -37,   -37,     0,     0,
       0,   -37,     0,   -37,   -37,   -37,   -37,     0,     0,   -37,
     -36,     0,   -37,     0,   -36,   -36,   -36,   -36,     0,     0,
       0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,
       0,     0,     0,     0,     0,   -36,   -36,   -36,   -36,     0,
       0,     0,   -36,     0,   -36,   -36,   -36,   -36,     0,     0,
     -36,    -8,     0,   -36,     0,    -8,    -8,    -8,    -8,     0,
       0,     0,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,
       0,     0,     0,     0,     0,     0,    -8,    -8,    -8,    -8,
       0,     0,     0,    -8,     0,    -8,    -8,    -8,    -8,     0,
       0,    -8,   -16,     0,    -8,     0,   -16,   -16,   -16,   -16,
       0,     0,     0,   -16,   -16,   -16,   -16,   -16,   -16,   -16,
     -16,     0,     0,     0,     0,     0,     0,   -16,   -16,   -16,
     -16,     0,     0,     0,   -16,     0,   -16,   -16,   -16,   -16,
       0,     0,   -16,   190,     0,   -16,     0,   191,    37,    38,
      39,     0,     0,     0,    40,   185,   186,   187,   188,    41,
      42,    43,     0,     0,     0,     0,     0,     0,    44,    45,
      46,    47,     0,     0,     0,    48,     0,    49,    50,    51,
      52,     0,   190,    53,     0,   283,   191,    37,    38,    39,
       0,     0,     0,    40,   185,   186,   187,   188,    41,    42,
      43,     0,     0,     0,     0,     0,     0,    44,    45,    46,
      47,   -65,   -65,     0,    48,     0,    49,    50,    51,    52,
       0,     0,    53,   -65,   -65,   -65,   -65,   -65,   -65,     0,
       0,     0,     0,   -65,   -65,   -65,   -71,   -71,     0,     0,
       0,     0,     0,   -65,     0,   -65,     0,     0,   -71,   -71,
     -71,   -71,   -71,   -71,     0,     0,     0,     0,   -71,   -71,
     -71,   -82,   -82,     0,     0,     0,     0,     0,   -71,     0,
     -71,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,     0,
       0,     0,     0,   -82,   -82,   -82,   -66,   -66,     0,     0,
       0,     0,     0,   -82,     0,   -82,     0,     0,   -66,   -66,
     -66,   -66,   -66,   -66,     0,     0,     0,     0,   -66,   -66,
     -66,   -70,   -70,     0,     0,     0,     0,     0,   -66,     0,
     -66,     0,     0,   -70,   -70,   -70,   -70,   -70,   -70,     0,
       0,     0,     0,   -70,   -70,   -70,   -67,   -67,     0,     0,
       0,     0,     0,   -70,     0,   -70,     0,     0,   -67,   -67,
     -67,   -67,   -67,   -67,     0,     0,     0,     0,   -67,   -67,
     -67,   -72,   -72,     0,     0,     0,     0,     0,   -67,     0,
     -67,     0,     0,   -72,   -72,   -72,   -72,   -72,   -72,     0,
       0,     0,     0,   -72,   -72,   -72,   -61,   112,     0,     0,
       0,     0,     0,   -72,     0,   -72,     0,     0,   -61,   -61,
     -61,   -61,   -61,   -61,     0,     0,     0,     0,   -61,   -61,
     -61,   -63,   -63,     0,     0,     0,     0,     0,   -61,     0,
     -61,     0,     0,   -63,   -63,   -63,   -63,   -63,   -63,     0,
       0,     0,     0,   -63,   -63,   -63,   -69,   -69,     0,     0,
       0,     0,     0,   -63,     0,   -63,     0,     0,   -69,   -69,
     -69,   -69,   -69,   -69,     0,     0,     0,     0,   -69,   -69,
     -69,   -68,   -68,     0,     0,     0,     0,     0,   -69,     0,
     -69,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,     0,
       0,     0,     0,   -68,   -68,   -68,   -87,   -87,     0,     0,
       0,     0,     0,   -68,     0,   -68,     0,     0,   -87,   -87,
     -87,   -87,   -87,   -87,     0,     0,     0,     0,   -87,   -87,
     -87,   -62,   112,     0,     0,     0,     0,     0,     0,     0,
     -87,     0,     0,   -62,   -62,   -62,   -62,   -62,   -62,     0,
       0,     0,     0,   -62,   -62,   -62,   -64,   -64,     0,     0,
       0,     0,     0,     0,     0,   -62,     0,     0,   -64,   -64,
     -64,   -64,   -64,   -64,     0,     0,     0,     0,   -64,   -64,
     -64,   -65,   -65,     0,     0,     0,     0,     0,     0,     0,
     -64,     0,     0,   -65,   -65,   -65,   -65,   -65,   -65,     0,
       0,     0,     0,   -65,   -65,   -65,   -71,   -71,     0,     0,
       0,     0,     0,     0,     0,   -65,     0,     0,   -71,   -71,
     -71,   -71,   -71,   -71,     0,     0,     0,     0,   -71,   -71,
     -71,   215,     0,     0,     0,     0,     0,     0,     0,     0,
     -71,     0,     0,   -60,   -60,   -60,   -60,   -60,   -60,     0,
       0,     0,     0,   -60,   -60,   -60,   -82,   -82,     0,     0,
       0,     0,     0,   -60,     0,   -60,     0,     0,   -82,   -82,
     -82,   -82,   -82,   -82,     0,     0,     0,     0,   -82,   -82,
     -82,   -66,   -66,     0,     0,     0,     0,     0,     0,     0,
     -82,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,     0,
       0,     0,     0,   -66,   -66,   -66,   -70,   -70,     0,     0,
       0,     0,     0,     0,     0,   -66,     0,     0,   -70,   -70,
     -70,   -70,   -70,   -70,     0,     0,     0,     0,   -70,   -70,
     -70,   -67,   -67,     0,     0,     0,     0,     0,     0,     0,
     -70,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,     0,
       0,     0,     0,   -67,   -67,   -67,   -72,   -72,     0,     0,
       0,     0,     0,     0,     0,   -67,     0,     0,   -72,   -72,
     -72,   -72,   -72,   -72,     0,     0,     0,     0,   -72,   -72,
     -72,   -61,   112,     0,     0,     0,     0,     0,     0,     0,
     -72,     0,     0,   -61,   -61,   -61,   -61,   -61,   -61,     0,
       0,     0,     0,   -61,   -61,   -61,   -63,   -63,     0,     0,
       0,     0,     0,     0,     0,   -61,     0,     0,   -63,   -63,
     -63,   -63,   -63,   -63,     0,     0,     0,     0,   -63,   -63,
     -63,   -69,   -69,     0,     0,     0,     0,     0,     0,     0,
     -63,     0,     0,   -69,   -69,   -69,   -69,   -69,   -69,     0,
       0,     0,     0,   -69,   -69,   -69,   215,     0,     0,     0,
       0,     0,     0,     0,     0,   -69,     0,     0,   -59,   -59,
     -59,   -59,   -59,   -59,     0,     0,     0,     0,   -59,   -59,
     -59,   -68,   -68,     0,     0,     0,     0,     0,   -59,     0,
     -59,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,     0,
       0,     0,     0,   -68,   -68,   -68,   215,     0,     0,     0,
       0,     0,     0,     0,     0,   -68,     0,     0,   -60,   -60,
     -60,   -60,   -60,   -60,     0,     0,     0,     0,   -60,   -60,
     -60,   215,     0,     0,     0,     0,     0,     0,     0,     0,
     -60,     0,     0,   -59,   -59,   -59,   -59,   -59,   -59,     0,
       0,     0,     0,   -59,   -59,   -59,   -82,   -82,     0,     0,
       0,     0,     0,     0,     0,   -59,     0,     0,   -82,   -82,
     -82,   -82,   -82,   -82,     0,     0,     0,     0,   -82,   -82,
     -82,     0,   -82,   -70,   -70,     0,     0,   -82,     0,   -82,
       0,     0,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,
     -70,     0,     0,     0,     0,   -70,   -70,   -70,   -82,   -82,
       0,     0,     0,     0,   -70,     0,   115,     0,     0,     0,
     -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,
     -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,   -82,
       0,   -82,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,
     -82,     0,     0,     0,     0,   -82,   -82,   -82,   -70,   -70,
       0,     0,     0,     0,     0,     0,   -82,     0,     0,     0,
     -70,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,     0,
     -70,   -70,   -70,   -86,   -86,     0,     0,     0,     0,     0,
       0,   310,     0,     0,     0,   -86,   -86,   -86,   -86,   -86,
     -86,     0,     0,   -85,   -85,   -86,   -86,   -86,     0,     0,
       0,     0,     0,     0,   -86,   -85,   -85,   -85,   -85,   -85,
     -85,     0,     0,   -87,   -87,   -85,   -85,   -85,     0,     0,
       0,     0,     0,     0,   -85,   -87,   -87,   -87,   -87,   -87,
     -87,     0,     0,   -62,   112,   -87,   -87,   -87,     0,     0,
       0,     0,     0,     0,   -87,   -62,   -62,   -62,   -62,   -62,
     -62,     0,     0,   -64,   -64,   -62,   -62,   -62,     0,     0,
       0,     0,     0,     0,   -62,   -64,   -64,   -64,   -64,   -64,
     -64,     0,     0,   -65,   -65,   -64,   -64,   -64,     0,     0,
       0,     0,     0,     0,   -64,   -65,   -65,   -65,   -65,   -65,
     -65,     0,     0,   -71,   -71,   -65,   -65,   -65,     0,     0,
       0,     0,     0,     0,   -65,   -71,   -71,   -71,   -71,   -71,
     -71,     0,     0,   -66,   -66,   -71,   -71,   -71,     0,     0,
       0,     0,     0,     0,   -71,   -66,   -66,   -66,   -66,   -66,
     -66,     0,     0,   -70,   -70,   -66,   -66,   -66,     0,     0,
       0,     0,     0,     0,   -66,   -70,   -70,   -70,   -70,   -70,
     -70,     0,     0,   -67,   -67,   -70,   -70,   -70,     0,     0,
       0,     0,     0,     0,   -70,   -67,   -67,   -67,   -67,   -67,
     -67,     0,     0,   -72,   -72,   -67,   -67,   -67,     0,     0,
       0,     0,     0,     0,   -67,   -72,   -72,   -72,   -72,   -72,
     -72,     0,     0,   -61,   112,   -72,   -72,   -72,     0,     0,
       0,     0,     0,     0,   -72,   -61,   -61,   -61,   -61,   -61,
     -61,     0,     0,   -63,   -63,   -61,   -61,   -61,     0,     0,
       0,     0,     0,     0,   -61,   -63,   -63,   -63,   -63,   -63,
     -63,     0,     0,   -69,   -69,   -63,   -63,   -63,     0,     0,
       0,     0,     0,     0,   -63,   -69,   -69,   -69,   -69,   -69,
     -69,     0,     0,   -68,   -68,   -69,   -69,   -69,     0,     0,
       0,     0,     0,     0,   -69,   -68,   -68,   -68,   -68,   -68,
     -68,     0,     0,   -82,   -82,   -68,   -68,   -68,     0,     0,
       0,     0,     0,     0,   -68,   -82,   -82,   -82,   -82,   -82,
     -82,     0,     0,   215,     0,   -82,   -82,   -82,     0,     0,
       0,     0,     0,     0,   -82,   -60,   -60,   -60,   -60,   -60,
     -60,     0,     0,   215,     0,   -60,   -60,   -60,     0,     0,
       0,     0,     0,     0,   -60,   -59,   -59,   -59,   -59,   -59,
     -59,     0,     0,   -86,   -86,   -59,   -59,   -59,     0,     0,
       0,     0,     0,     0,   -59,   -86,   -86,   -86,   -86,   -86,
     -86,   -85,   -85,     0,     0,   -86,   -86,   -86,     0,     0,
       0,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -87,
     -87,     0,     0,   -85,   -85,   -85,     0,     0,     0,     0,
       0,   -87,   -87,   -87,   -87,   -87,   -87,   -62,   112,     0,
       0,   -87,   -87,   -87,     0,     0,     0,     0,     0,   -62,
     -62,   -62,   -62,   -62,   -62,   -64,   -64,     0,     0,   -62,
     -62,   -62,     0,     0,     0,     0,     0,   -64,   -64,   -64,
     -64,   -64,   -64,   -65,   -65,     0,     0,   -64,   -64,   -64,
       0,     0,     0,     0,     0,   -65,   -65,   -65,   -65,   -65,
     -65,   -71,   -71,     0,     0,   -65,   -65,   -65,     0,     0,
       0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -82,
     -82,     0,     0,   -71,   -71,   -71,     0,     0,     0,     0,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -66,   -66,     0,
       0,   -82,   -82,   -82,     0,     0,     0,     0,     0,   -66,
     -66,   -66,   -66,   -66,   -66,   -70,   -70,     0,     0,   -66,
     -66,   -66,     0,     0,     0,     0,     0,   -70,   -70,   -70,
     -70,   -70,   -70,   -67,   -67,     0,     0,   -70,   -70,   -70,
       0,     0,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,
     -67,   -72,   -72,     0,     0,   -67,   -67,   -67,     0,     0,
       0,     0,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -61,
     112,     0,     0,   -72,   -72,   -72,     0,     0,     0,     0,
       0,   -61,   -61,   -61,   -61,   -61,   -61,   -63,   -63,     0,
       0,   -61,   -61,   -61,     0,     0,     0,     0,     0,   -63,
     -63,   -63,   -63,   -63,   -63,   -69,   -69,     0,     0,   -63,
     -63,   -63,     0,     0,     0,     0,     0,   -69,   -69,   -69,
     -69,   -69,   -69,   -68,   -68,     0,     0,   -69,   -69,   -69,
       0,     0,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,
     -68,     0,     0,     0,     0,   -68,   -68,   -68,   104,   105,
     106,   107,   108,   109,     0,     0,     0,     0,   -57,   -57,
     -57,   104,   105,   106,   107,   108,   109,   -57,     0,     0,
       0,   -58,   -58,   -58,   104,   105,   106,   107,   108,   109,
       0,     0,     0,     0,   -57,   -57,   -57
};

static const yytype_int16 yycheck[] =
{
       0,    11,   147,    90,     0,    26,    27,     7,    29,    30,
       1,     7,    56,    23,   175,    39,   177,   178,    18,    81,
      20,    31,    13,    14,    15,    16,    31,    30,    31,   160,
     147,   207,    30,    31,    34,    20,    42,   209,    48,    42,
       0,     5,    52,    53,    42,     1,    56,   147,    41,    34,
     226,    56,    42,    39,     5,    41,   228,    13,    14,    15,
      16,   147,    26,     5,    28,    29,    76,     5,    78,    11,
      80,    81,    82,    11,    84,    26,   252,    28,    29,    89,
      90,    91,   254,     5,     5,   147,    42,    30,    31,   147,
      11,   101,   102,   103,   147,     1,     5,    40,   147,    42,
     110,   111,    11,   113,   114,   115,    42,    13,    14,    15,
      16,    42,    30,    31,   176,     5,     5,     6,     7,     8,
      43,    11,    40,    12,    42,     5,     6,     7,     8,    30,
      31,    32,    12,    30,    31,    32,    42,   147,   148,   149,
      39,    42,    41,    40,    33,    42,    26,   147,    28,    29,
     160,   147,    41,    33,   175,    41,   177,   178,    40,    39,
      42,    41,   183,    30,    31,   175,   176,   177,   178,   300,
     175,    41,   177,   178,     5,     6,     7,     8,    40,   310,
      42,    12,   358,     5,     6,     7,     8,    41,   360,   365,
      12,   201,   202,    41,    40,   367,    42,   328,     5,     6,
       7,     8,    33,   213,    26,    12,    28,    29,    41,   385,
      41,    33,    41,   223,   224,   387,     5,     6,     7,    41,
      42,    41,   232,    12,    41,    41,    33,   271,    30,    31,
      32,     5,     6,     7,    41,    41,   246,   247,    12,   283,
       5,     6,     7,     8,    30,    31,    32,    12,   258,    44,
       5,   261,    41,    39,   341,   342,     5,     6,     7,     8,
     270,   271,    39,    12,   425,     5,   271,    41,    33,    30,
      31,    32,   282,   283,     5,    39,    41,   339,   283,    40,
     425,    42,    39,    39,    33,   295,   296,   297,   298,   299,
     300,   452,    41,   454,   455,    26,    42,    28,    29,    40,
     310,    42,    31,     5,     5,     6,     7,   452,   425,   454,
     455,    12,   322,   323,   324,   325,   326,   327,   328,    48,
      30,    31,    32,    52,    53,   425,     5,    56,   338,   339,
     340,   341,   342,   343,    40,   452,    42,   454,   455,   425,
      41,     5,   352,     5,     6,     7,     8,    76,    30,    31,
      12,    80,   452,    39,   454,   455,    44,    39,    30,    31,
      89,    90,    26,   425,    28,    29,   452,   425,   454,   455,
      42,    33,   425,   102,   103,    42,   425,    30,    31,    41,
      39,   110,   111,    39,   113,   114,   115,    40,    42,    42,
     452,   453,   454,   455,   452,    34,   454,   455,    40,   452,
      42,   454,   455,   452,    30,   454,   455,    42,    13,    14,
      15,    16,    30,    31,    32,   425,   426,   427,   147,   148,
      42,     5,     6,     7,    42,   425,    30,    31,    12,   425,
      40,   160,    42,    42,     5,     6,     7,    42,    42,   460,
      42,    12,   452,   453,   454,   455,   175,    42,   177,   178,
      42,    42,   452,    42,   454,   455,   452,    41,   454,   455,
      39,    42,     5,     6,     7,     8,     0,     1,    42,    12,
      41,    39,   201,   202,    39,    30,    31,    53,    39,    13,
      14,    15,    16,    26,   213,    28,    29,    42,    30,    31,
      33,    39,    30,    31,   223,   224,    42,    42,    41,    42,
      42,    39,    39,   232,    80,    41,    30,    31,    84,     5,
       6,     7,     8,    89,    90,    39,    12,   246,   247,     5,
       6,     7,     8,    30,    31,   101,    12,    30,    31,   258,
      26,    39,    28,    29,    39,    42,    39,    33,    39,   115,
      39,   270,   271,    43,    39,    41,    42,    33,    39,     5,
       6,     7,     8,    42,   283,    41,    12,     5,     5,     5,
       5,    31,    39,    41,    30,    31,   295,   296,   297,   298,
     299,   300,    41,   149,     0,     1,    42,    33,    42,    39,
      34,   310,    52,    53,   160,    41,    56,    13,    14,    15,
      16,     0,     1,    30,   323,   324,   325,   326,   327,   328,
      42,    71,    30,    31,    13,    14,    15,    16,    41,   338,
      80,    39,   341,   342,     5,     6,     7,     8,    41,    89,
      90,    12,    41,   352,    30,    31,   202,    30,    31,    41,
      41,    41,   102,   103,    40,    26,    42,    28,    29,    42,
     110,   111,    33,   113,   114,   115,    39,     1,   224,    41,
      41,     5,     6,     7,     8,    41,    30,    31,    12,    13,
      14,    15,    16,    17,    18,    19,    40,    34,    42,    41,
     140,   247,    26,    27,    28,    29,    41,   147,   148,    33,
      41,    35,    36,    37,    38,   261,    41,    41,    39,    43,
     160,     5,     6,     7,     8,    39,   425,   426,    12,    20,
      21,    22,    23,    24,    25,   175,    39,   177,   178,    30,
      31,    32,    26,    42,    28,    29,    42,    30,    31,    33,
      42,    42,    41,   452,   300,   454,   455,    41,    42,    42,
      41,    41,   202,    39,   310,    30,    31,    44,   208,    20,
      21,    22,    23,    24,    25,    40,   322,    42,    39,    30,
      31,    32,   328,    41,   224,    44,    42,   227,    42,    40,
      42,    42,   338,    30,    31,   341,   342,     5,     6,     7,
       8,    41,    10,    40,    12,    42,   352,   247,     5,     6,
       7,     8,    41,   253,    42,    12,    30,    31,    26,    39,
      28,    29,    39,    30,    31,    33,    40,    30,    42,    42,
     270,   271,    42,    41,    43,    42,    33,    42,     5,     6,
       7,     8,    42,   283,    41,    12,    42,    42,    42,    42,
      31,    42,    39,    30,    31,   295,   296,   297,   298,   299,
     300,     5,     6,     7,     8,    42,    33,    48,    12,    39,
     310,    52,    53,    39,    41,    56,    39,     0,     1,    39,
      42,   427,     7,   323,   324,   325,   326,   327,   328,    33,
      13,    14,    15,    16,    42,    76,    42,    41,   338,    80,
      -1,   341,   342,   425,    30,    31,    30,    31,    89,    90,
      -1,    -1,   352,    -1,    52,    53,    42,    -1,    42,   359,
      -1,   102,   103,    30,    31,    -1,   366,    -1,    -1,   110,
     111,    -1,   113,   114,   115,    42,     5,     6,     7,     8,
       0,     1,    80,    12,    -1,    -1,   386,    -1,    -1,    30,
      31,    89,    90,    13,    14,    15,    16,    26,    -1,    28,
      29,    42,    30,    31,    33,    -1,   147,   148,    -1,    -1,
      39,    -1,    41,    -1,    42,    -1,   114,   115,    -1,   160,
       5,     6,     7,     8,    -1,   425,   426,    12,    20,    21,
      22,    23,    24,    25,   175,    -1,   177,   178,    30,    31,
      32,    26,    -1,    28,    29,    -1,    -1,    39,    33,   147,
     148,    -1,   452,    -1,   454,   455,    41,    30,    31,    -1,
     201,   202,   160,    -1,    30,    31,    -1,    -1,    -1,    42,
      -1,    -1,   213,    30,    31,     1,    42,    -1,     4,     5,
       6,     7,     8,   224,    -1,    42,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    30,    31,    -1,    -1,
      26,    27,    28,    29,   202,   246,   247,    33,    42,    35,
      36,    37,    38,    30,    31,    41,    -1,   258,    44,    30,
      31,    -1,    -1,    -1,    -1,    42,   224,    30,    31,   270,
     271,    42,     5,     6,     7,     8,    39,     0,     1,    12,
      -1,    -1,   283,    -1,    -1,    31,    -1,    -1,    -1,   247,
      13,    14,    15,    16,   295,   296,   297,   298,   299,   300,
      33,     0,     1,    -1,    30,    31,    52,    53,    41,   310,
      56,    -1,   270,    39,    13,    14,    15,    16,    30,    31,
      30,    31,   323,   324,   325,   326,   327,   328,    -1,    39,
      42,    -1,     0,     1,    80,    -1,    -1,   338,    30,    31,
     341,   342,   300,    89,    90,    13,    14,    15,    16,    -1,
      42,   352,   310,    -1,    30,    31,   102,   103,    -1,    -1,
      -1,    -1,    -1,    -1,   110,   111,    42,   113,   114,   115,
     328,    -1,     5,     6,     7,     8,     0,     1,    -1,    12,
     338,    -1,    -1,   341,   342,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    26,   352,    28,    29,     0,     1,    -1,
      33,   147,   148,    -1,     8,     9,    -1,    -1,    41,    -1,
      13,    14,    15,    16,   160,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,   425,   426,    30,    31,    32,   175,
      -1,   177,   178,    30,    31,    32,    40,    41,    42,    -1,
      -1,    -1,    39,    -1,     0,     1,    -1,    -1,    -1,     8,
       9,   452,    -1,   454,   455,    31,   202,    13,    14,    15,
      16,    20,    21,    22,    23,    24,    25,   425,   426,    -1,
      -1,    30,    31,    32,    -1,    -1,    52,    53,   224,    -1,
      56,    40,    41,    42,    -1,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,   452,    -1,   454,   455,    30,    31,
      32,   247,    -1,    -1,    80,    -1,     8,     9,    40,    -1,
      42,    -1,    -1,    89,    90,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,   270,   271,   102,   103,    30,    31,
      32,    -1,    -1,    -1,   110,   111,    -1,   283,   114,   115,
      42,    -1,     0,     1,    -1,    31,    -1,    -1,    -1,   295,
     296,   297,   298,   299,   300,    13,    14,    15,    16,    -1,
      -1,    -1,    -1,   309,   310,    -1,    52,    53,    -1,    -1,
      56,   147,   148,    -1,    -1,    -1,    -1,   323,   324,   325,
     326,   327,   328,    -1,   160,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   338,    -1,    80,   341,   342,     8,     9,   175,
      -1,   177,   178,    89,    90,    -1,   352,    -1,    -1,    20,
      21,    22,    23,    24,    25,    -1,   102,   103,    -1,    30,
      31,    32,     8,     9,   110,    -1,   202,    -1,   114,   115,
      41,    42,    -1,    -1,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    30,    31,    32,    -1,   224,    -1,
      -1,    -1,    -1,     8,     9,    41,    42,    -1,    -1,    -1,
      -1,   147,   148,    -1,    -1,    20,    21,    22,    23,    24,
      25,   247,    -1,    -1,   160,    30,    31,    32,    -1,   425,
     426,    -1,    -1,    -1,    -1,    40,    -1,    42,     8,   175,
      -1,   177,   178,    -1,   270,   271,    -1,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    25,   452,   283,   454,   455,
      30,    31,    32,    -1,    -1,    31,   202,    -1,    -1,   295,
     296,   297,   298,    -1,   300,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   308,    -1,   310,    -1,    52,    53,   224,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,   323,   324,   325,
     326,    -1,   328,    -1,    -1,     8,     9,    -1,    -1,    -1,
      -1,   247,   338,    -1,    80,   341,   342,    20,    21,    22,
      23,    24,    25,    89,    90,    -1,   352,    30,    31,    32,
      -1,    -1,    -1,    -1,   270,   271,   102,   103,    -1,    42,
      20,    21,    22,    23,    24,    25,    -1,   283,   114,   115,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,   295,
     296,   297,    42,    -1,   300,    20,    21,    22,    23,    24,
      25,   307,    -1,    -1,   310,    30,    31,    32,    -1,    34,
      -1,   147,   148,    -1,    39,    -1,    41,   323,   324,   325,
      -1,    -1,   328,    -1,   160,    -1,    -1,    -1,    -1,   425,
     426,    -1,   338,    -1,    -1,   341,   342,    -1,    -1,   175,
      -1,   177,   178,    -1,    -1,    -1,   352,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,   452,    -1,   454,   455,
      20,    21,    22,    23,    24,    25,   202,    -1,    31,    -1,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    42,    -1,    31,    -1,    -1,    -1,   224,    52,
      53,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    -1,    -1,    56,
      -1,   247,    -1,    -1,    -1,    -1,    -1,    80,    -1,   425,
     426,    -1,    -1,    -1,    -1,    -1,    89,    90,    -1,    -1,
      -1,    -1,    -1,    80,   270,   271,    -1,    -1,    -1,   102,
      -1,    -1,    89,    90,    -1,    -1,   452,   283,   454,   455,
      -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,   295,
     296,    -1,    -1,    -1,   300,    -1,    -1,   114,   115,    -1,
     306,    -1,    -1,    -1,   310,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   147,   148,    -1,   323,   324,    -1,
      -1,    -1,   328,    -1,    -1,    -1,    -1,   160,    -1,    -1,
     147,   148,   338,    -1,    -1,   341,   342,    -1,    -1,    -1,
       8,     9,   175,   160,   177,   178,   352,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    25,   175,    -1,
     177,   178,    30,    31,    32,     8,    53,    -1,    -1,   202,
      -1,    -1,    40,    -1,    42,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,   202,    -1,    30,    31,    32,
      -1,   224,    -1,    80,    -1,    -1,    83,    -1,    85,    86,
      -1,    -1,    89,    90,    -1,    -1,    -1,   224,    -1,     8,
       9,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,   425,
     426,    20,    21,    22,    23,    24,    25,    -1,   115,   262,
     247,    30,    31,    32,    -1,    -1,    -1,   270,   271,    -1,
      -1,    40,    -1,    42,    -1,    -1,   452,    -1,   454,   455,
     283,    -1,    -1,   270,   271,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   295,    -1,    -1,    -1,   283,   300,    -1,    -1,
      -1,    -1,    -1,   160,    -1,    -1,    -1,   310,    -1,    -1,
      -1,    -1,    -1,   300,    -1,    -1,    -1,    -1,    -1,    -1,
     323,    -1,    -1,   310,    -1,   328,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   338,    -1,    -1,   341,   342,
      -1,   328,    -1,    -1,    -1,   202,    -1,    -1,    -1,   352,
      -1,   338,    -1,    -1,   341,   342,    -1,     1,    -1,    -1,
       4,     5,     6,     7,     8,   352,    -1,   224,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    -1,    -1,    -1,    33,
     247,    35,    36,    37,    38,     8,     9,    41,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
      -1,    -1,   425,   426,    -1,    -1,    -1,    40,    -1,    42,
      -1,   288,   289,   290,    -1,    -1,    -1,    -1,   425,   426,
      -1,    -1,    -1,   300,    -1,    -1,    -1,    -1,    -1,   452,
      -1,   454,   455,   310,    -1,   312,   313,   314,   315,   316,
     317,    -1,    -1,    -1,    -1,   452,    -1,   454,   455,    -1,
      -1,   328,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   338,    -1,    -1,   341,   342,     1,    -1,    -1,     4,
       5,     6,     7,     8,    -1,   352,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    -1,    -1,    -1,    33,    -1,
      35,    36,    37,    38,    -1,    -1,    41,    -1,    -1,    44,
      -1,    -1,    -1,    -1,   391,   392,   393,    -1,    -1,     1,
      -1,    -1,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,   418,   419,   420,    26,    27,    28,    29,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,    41,
       1,    -1,    44,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,     1,    -1,    44,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,
      -1,    41,     1,    -1,    44,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,
      -1,    -1,    41,     1,    -1,    44,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    41,     1,    -1,    44,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    -1,    -1,    41,     1,    -1,    44,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    38,    -1,    -1,    41,     1,    -1,    44,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    -1,    -1,    -1,    33,    -1,
      35,    36,    37,    38,    -1,    -1,    41,     1,    -1,    44,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    -1,    -1,    -1,    33,
      -1,    35,    36,    37,    38,    -1,    -1,    41,     1,    -1,
      44,     4,     5,     6,     7,     8,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    38,    -1,    -1,    41,     1,
      -1,    44,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,    41,
       1,    -1,    44,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,     1,    -1,    44,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,
      -1,    41,     1,    -1,    44,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,
      -1,    -1,    41,     1,    -1,    44,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    41,     1,    -1,    44,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    -1,    -1,    41,     1,    -1,    44,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    38,    -1,    -1,    41,     1,    -1,    44,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    -1,    -1,    -1,    33,    -1,
      35,    36,    37,    38,    -1,    -1,    41,     1,    -1,    44,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    -1,    -1,    -1,    33,
      -1,    35,    36,    37,    38,    -1,    -1,    41,     1,    -1,
      44,     4,     5,     6,     7,     8,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    38,    -1,    -1,    41,     1,
      -1,    44,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,    41,
       1,    -1,    44,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,     1,    -1,    44,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,
      -1,    41,     1,    -1,    44,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,
      -1,    -1,    41,     1,    -1,    44,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    41,     1,    -1,    44,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    -1,    -1,    41,     1,    -1,    44,    -1,     5,
       6,     7,     8,    -1,    -1,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    38,    -1,    -1,    41,     1,    -1,    44,    -1,
       5,     6,     7,     8,    -1,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    -1,    -1,    -1,    33,    -1,
      35,    36,    37,    38,    -1,    -1,    41,     1,    -1,    44,
      -1,     5,     6,     7,     8,    -1,    -1,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    -1,    -1,    -1,    33,
      -1,    35,    36,    37,    38,    -1,    -1,    41,     1,    -1,
      44,    -1,     5,     6,     7,     8,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    38,    -1,    -1,    41,     1,
      -1,    44,    -1,     5,     6,     7,     8,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,    41,
       1,    -1,    44,    -1,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,     1,    -1,    44,    -1,     5,     6,     7,     8,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,
      -1,    41,     1,    -1,    44,    -1,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,
      -1,    -1,    41,     1,    -1,    44,    -1,     5,     6,     7,
       8,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    41,     1,    -1,    44,    -1,     5,     6,
       7,     8,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    -1,    -1,    41,     1,    -1,    44,    -1,     5,
       6,     7,     8,    -1,    -1,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    38,    -1,    -1,    41,     1,    -1,    44,    -1,
       5,     6,     7,     8,    -1,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    -1,    -1,    -1,    33,    -1,
      35,    36,    37,    38,    -1,    -1,    41,     1,    -1,    44,
      -1,     5,     6,     7,     8,    -1,    -1,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    -1,    -1,    -1,    33,
      -1,    35,    36,    37,    38,    -1,    -1,    41,     1,    -1,
      44,    -1,     5,     6,     7,     8,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    38,    -1,    -1,    41,     1,
      -1,    44,    -1,     5,     6,     7,     8,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,    41,
       1,    -1,    44,    -1,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,     1,    -1,    44,    -1,     5,     6,     7,     8,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,
      -1,    41,     1,    -1,    44,    -1,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,
      -1,    -1,    41,     1,    -1,    44,    -1,     5,     6,     7,
       8,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    41,     1,    -1,    44,    -1,     5,     6,
       7,     8,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    -1,    -1,    41,     1,    -1,    44,    -1,     5,
       6,     7,     8,    -1,    -1,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    38,    -1,    -1,    41,     1,    -1,    44,    -1,
       5,     6,     7,     8,    -1,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    -1,    -1,    -1,    33,    -1,
      35,    36,    37,    38,    -1,    -1,    41,     1,    -1,    44,
      -1,     5,     6,     7,     8,    -1,    -1,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    -1,    -1,    -1,    33,
      -1,    35,    36,    37,    38,    -1,    -1,    41,     1,    -1,
      44,    -1,     5,     6,     7,     8,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    38,    -1,    -1,    41,     1,
      -1,    44,    -1,     5,     6,     7,     8,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,    41,
       1,    -1,    44,    -1,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,     1,    -1,    44,    -1,     5,     6,     7,     8,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,
      -1,    41,     1,    -1,    44,    -1,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,
      -1,    -1,    41,     1,    -1,    44,    -1,     5,     6,     7,
       8,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    -1,     1,    41,    -1,    43,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,     8,     9,    -1,    33,    -1,    35,    36,    37,    38,
      -1,    -1,    41,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    42,    -1,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,
      32,     8,     9,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      42,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    42,    -1,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,
      32,     8,     9,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      42,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    42,    -1,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,
      32,     8,     9,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      42,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    42,    -1,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,
      32,     8,     9,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      42,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    42,    -1,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,
      32,     8,     9,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      42,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    42,    -1,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,
      32,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,
      32,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,
      32,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    42,    -1,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,
      32,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,
      32,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,
      32,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,
      32,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    30,    31,    32,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,
      32,     8,     9,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      42,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    30,    31,    32,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,
      32,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,
      32,    -1,    34,     8,     9,    -1,    -1,    39,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,     9,
      -1,    -1,    -1,    -1,    39,    -1,    41,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,    39,
      -1,    41,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    20,    21,    22,    23,    24,
      25,    -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    20,    21,    22,    23,    24,
      25,    -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    20,    21,    22,    23,    24,
      25,    -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    20,    21,    22,    23,    24,
      25,    -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    20,    21,    22,    23,    24,
      25,    -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    20,    21,    22,    23,    24,
      25,    -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    20,    21,    22,    23,    24,
      25,    -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    20,    21,    22,    23,    24,
      25,    -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    20,    21,    22,    23,    24,
      25,    -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    20,    21,    22,    23,    24,
      25,    -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    20,    21,    22,    23,    24,
      25,    -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    20,    21,    22,    23,    24,
      25,    -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    20,    21,    22,    23,    24,
      25,    -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    20,    21,    22,    23,    24,
      25,    -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    20,    21,    22,    23,    24,
      25,    -1,    -1,     8,    -1,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    20,    21,    22,    23,    24,
      25,    -1,    -1,     8,    -1,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    20,    21,    22,    23,    24,
      25,    -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    20,    21,    22,    23,    24,
      25,     8,     9,    -1,    -1,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    25,     8,
       9,    -1,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    23,    24,    25,     8,     9,    -1,
      -1,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    23,    24,    25,     8,     9,    -1,    -1,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,     8,     9,    -1,    -1,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      25,     8,     9,    -1,    -1,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    25,     8,
       9,    -1,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    23,    24,    25,     8,     9,    -1,
      -1,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    23,    24,    25,     8,     9,    -1,    -1,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,     8,     9,    -1,    -1,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      25,     8,     9,    -1,    -1,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    25,     8,
       9,    -1,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    23,    24,    25,     8,     9,    -1,
      -1,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    23,    24,    25,     8,     9,    -1,    -1,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,     8,     9,    -1,    -1,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    31,    32,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,
      32,    20,    21,    22,    23,    24,    25,    39,    -1,    -1,
      -1,    30,    31,    32,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    30,    31,    32
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    13,    14,    15,    16,    46,    47,    48,    49,
      50,    82,    39,     0,    48,     5,    11,    78,    41,    39,
      41,     1,    51,    82,     1,    51,    42,    42,    78,    42,
      42,    43,    52,    52,    40,    52,    52,     6,     7,     8,
      12,    17,    18,    19,    26,    27,    28,    29,    33,    35,
      36,    37,    38,    41,    49,    53,    54,    55,    56,    57,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    78,    79,    81,    82,    51,
      41,    41,    41,    41,    41,    41,    41,    74,    78,    41,
      41,    41,    39,    63,    78,    63,    44,    53,    39,    39,
      39,    30,    31,    32,    20,    21,    22,    23,    24,    25,
      75,    79,     9,    80,    34,    41,    74,    78,    63,    64,
      78,    78,    67,    68,    65,    78,    67,    67,    10,    63,
      76,    63,    76,    78,    39,    42,    65,    78,    69,    70,
      71,    72,    73,    63,    42,    63,    77,    42,    39,    30,
      42,    42,    42,    42,    42,    42,    42,    42,    42,    42,
      40,    42,    52,    54,    58,    59,    63,    65,    78,    39,
      39,    39,    39,    39,    77,     4,    39,    42,    42,    59,
      64,    59,    59,    42,    52,    13,    14,    15,    16,     5,
       1,     5,     5,     5,     5,     6,     7,    12,    26,    28,
      29,    33,    41,    65,    67,    68,    69,    70,    71,    72,
      73,    74,    78,    79,    81,     8,     5,     5,     5,     5,
       6,     7,    12,    33,    41,    69,    70,    71,    72,    73,
      74,    78,    79,    81,     5,     5,    26,    28,    29,     5,
       6,     7,    12,    26,    28,    29,    33,    41,    65,    67,
      68,    69,    70,    71,    72,    73,    74,    78,    79,    81,
      39,    30,    31,     1,    17,    18,    19,    35,    36,    37,
      38,    43,    49,    55,    56,    57,    60,    61,    62,    63,
      64,    66,    82,    43,    52,    54,    78,    39,    41,    41,
      41,     5,    74,    78,    63,    31,    32,    75,    79,    80,
      41,    74,     5,    74,    78,    63,    32,    75,    79,    80,
      41,    74,    41,    41,    41,    41,    41,    41,     5,    74,
      78,    63,    30,    31,    32,    75,    79,    80,    41,    74,
       5,    26,    28,    29,    65,    78,    69,    39,    41,    41,
      41,    41,    41,    41,    39,    63,    53,    39,    39,    39,
      78,    53,    34,    67,    67,    67,    42,    69,    70,    71,
      72,    73,    42,    77,    42,    70,    71,    72,    73,    42,
      77,    67,    67,    67,    67,    67,    67,    42,     5,    26,
      28,    29,    65,    78,    69,    70,    71,    72,    73,    42,
      77,    41,    41,    41,    63,    64,    78,    63,    76,    63,
      76,    78,    39,    44,    39,    44,    63,    42,    42,    42,
      42,    42,    42,    42,    42,    42,    42,    42,    41,    41,
      41,    42,    67,    67,    67,    42,    39,    30,    42,    42,
      42,    42,    42,    67,    67,    67,    42,    42,    42,    58,
      59,    63,    65,    78,    39,    39,    39,    39,    39,    42,
      42,    42,     4,    39,    42,    42,    59,    64,    59,    59,
      42,    52
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    48,    48,    49,    49,    50,
      50,    50,    50,    51,    51,    51,    52,    53,    53,    54,
      54,    54,    54,    54,    54,    54,    54,    55,    55,    55,
      55,    55,    56,    57,    58,    58,    59,    59,    60,    60,
      61,    61,    61,    62,    63,    63,    64,    65,    65,    65,
      66,    66,    67,    67,    68,    68,    68,    69,    69,    70,
      70,    71,    71,    72,    72,    73,    73,    73,    73,    73,
      74,    74,    74,    75,    75,    75,    75,    75,    75,    76,
      77,    77,    78,    79,    80,    81,    81,    81,    82,    82,
      82,    82
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     2,     6,
       6,     6,     6,     4,     2,     0,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     5,     5,     5,
       5,     5,     9,     5,     1,     3,     1,     1,     2,     3,
       7,     7,     2,     2,     1,     1,     3,     4,     4,     4,
       4,     4,     3,     3,     3,     1,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     2,     2,     4,     3,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
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
  case 2: /* program: list_declaration  */
#line 88 "sintatic/sintatic.y"
                         {
            (yyval.typeNode) = buildNode("program");
            (yyval.typeNode)->childNode = (yyvsp[0].typeNode);
            raiz = (yyval.typeNode);
        }
#line 2807 "sintatic.tab.c"
    break;

  case 3: /* list_declaration: list_declaration main_declaration  */
#line 96 "sintatic/sintatic.y"
                                          {
            (yyvsp[-1].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 2815 "sintatic.tab.c"
    break;

  case 7: /* var_declaration: tipos var SEMICOLON  */
#line 108 "sintatic/sintatic.y"
                            {
            (yyval.typeNode) = buildNode("var_declaration");
            (yyval.typeNode)->childNode = (yyvsp[-2].typeNode); 
            (yyvsp[-2].typeNode)->brotherNode = (yyvsp[-1].typeNode);  
         
            //char *id, char *typ
            insertItem(&table, (yyvsp[-2].typeNode)->value, (yyvsp[-1].typeNode)->value);
        }
#line 2828 "sintatic.tab.c"
    break;

  case 8: /* var_declaration: error SEMICOLON  */
#line 116 "sintatic/sintatic.y"
                          { (yyval.typeNode) = buildNode("SINTATIC ERR");}
#line 2834 "sintatic.tab.c"
    break;

  case 9: /* func_declaration: tipos var OPEN_PAREN list_args CLS_PAREN blockStmt  */
#line 120 "sintatic/sintatic.y"
                                                           {
            (yyval.typeNode) = buildNode("func_declaration");   
            (yyval.typeNode)->childNode = (yyvsp[-5].typeNode);
            (yyvsp[-5].typeNode)->brotherNode = (yyvsp[-4].typeNode);
            (yyvsp[-4].typeNode)->brotherNode = (yyvsp[-2].typeNode);
            (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);

            insertItem(&table, (yyvsp[-5].typeNode)->value, (yyvsp[-4].typeNode)->value);
        }
#line 2848 "sintatic.tab.c"
    break;

  case 10: /* func_declaration: tipos MAIN OPEN_PAREN list_args CLS_PAREN blockStmt  */
#line 129 "sintatic/sintatic.y"
                                                                           {
            (yyval.typeNode) = buildNode("func_declaration_main");   
            (yyval.typeNode)->childNode = (yyvsp[-5].typeNode);
            (yyvsp[-5].typeNode)->brotherNode = (yyvsp[-2].typeNode);
            (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);

            insertItem(&table, (yyvsp[-5].typeNode)->value, "MAIN");
        }
#line 2861 "sintatic.tab.c"
    break;

  case 11: /* func_declaration: tipos var OPEN_PAREN error CLS_PAREN blockStmt  */
#line 137 "sintatic/sintatic.y"
                                                         {
                (yyval.typeNode) = buildNode("SINTATIC ERR");
        }
#line 2869 "sintatic.tab.c"
    break;

  case 12: /* func_declaration: tipos MAIN OPEN_PAREN error CLS_PAREN blockStmt  */
#line 140 "sintatic/sintatic.y"
                                                                 {
                (yyval.typeNode) = buildNode("SINTATIC ERR");
        }
#line 2877 "sintatic.tab.c"
    break;

  case 13: /* list_args: tipos var COMMA list_args  */
#line 147 "sintatic/sintatic.y"
                                  {
                (yyval.typeNode) = buildNode("list_args");  
                (yyval.typeNode)->childNode = (yyvsp[-3].typeNode);
                (yyvsp[-3].typeNode)->brotherNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);

                insertItem(&table, (yyvsp[-3].typeNode)->value, (yyvsp[-2].typeNode)->value);
        }
#line 2890 "sintatic.tab.c"
    break;

  case 14: /* list_args: tipos var  */
#line 155 "sintatic/sintatic.y"
                    {
                (yyval.typeNode) = buildNode("list_args"); 
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
                (yyvsp[-1].typeNode)->brotherNode = (yyvsp[0].typeNode);

                insertItem(&table, (yyvsp[-1].typeNode)->value, (yyvsp[0].typeNode)->value);
        }
#line 2902 "sintatic.tab.c"
    break;

  case 15: /* list_args: %empty  */
#line 162 "sintatic/sintatic.y"
                 {
                (yyval.typeNode) = buildNode("no_args"); 
        }
#line 2910 "sintatic.tab.c"
    break;

  case 16: /* blockStmt: OP_CUR_BRACKET list_statements CLS_CUR_BRACKET  */
#line 168 "sintatic/sintatic.y"
                                                       {
                (yyval.typeNode) = (yyvsp[-1].typeNode);
        }
#line 2918 "sintatic.tab.c"
    break;

  case 17: /* list_statements: stmt list_statements  */
#line 174 "sintatic/sintatic.y"
                             {
               (yyval.typeNode) = (yyvsp[-1].typeNode);
               (yyvsp[-1].typeNode)->brotherNode = (yyvsp[0].typeNode); 
        }
#line 2927 "sintatic.tab.c"
    break;

  case 27: /* input_output_expr: CMD_WRITE OPEN_PAREN str_expr CLS_PAREN SEMICOLON  */
#line 195 "sintatic/sintatic.y"
                                                          {
                (yyval.typeNode) = buildNode("CMD_WRITE_STR");
        }
#line 2935 "sintatic.tab.c"
    break;

  case 28: /* input_output_expr: CMD_WRITE OPEN_PAREN expr CLS_PAREN SEMICOLON  */
#line 198 "sintatic/sintatic.y"
                                                        {
                (yyval.typeNode) = buildNode("CMD_WRITE_EXPR");
        }
#line 2943 "sintatic.tab.c"
    break;

  case 29: /* input_output_expr: CMD_WRITELN OPEN_PAREN str_expr CLS_PAREN SEMICOLON  */
#line 201 "sintatic/sintatic.y"
                                                              {
                (yyval.typeNode) = buildNode("CMD_WRITELN_STR");
        }
#line 2951 "sintatic.tab.c"
    break;

  case 30: /* input_output_expr: CMD_WRITELN OPEN_PAREN expr CLS_PAREN SEMICOLON  */
#line 204 "sintatic/sintatic.y"
                                                          {
                (yyval.typeNode) = buildNode("CMD_WRITELN_EXPR");
        }
#line 2959 "sintatic.tab.c"
    break;

  case 31: /* input_output_expr: CMD_READ OPEN_PAREN var CLS_PAREN SEMICOLON  */
#line 207 "sintatic/sintatic.y"
                                                      {
                (yyval.typeNode) = buildNode("CMD_READ_VAR");
        }
#line 2967 "sintatic.tab.c"
    break;

  case 32: /* iteration_expr: CMD_FOR OPEN_PAREN assign SEMICOLON expr SEMICOLON assign CLS_PAREN blockStmt  */
#line 214 "sintatic/sintatic.y"
        {     
             (yyval.typeNode) = buildNode("for");
             (yyval.typeNode)->childNode = (yyvsp[-6].typeNode);
             (yyvsp[-6].typeNode)->brotherNode = (yyvsp[-4].typeNode);
             (yyvsp[-4].typeNode)->brotherNode = (yyvsp[-2].typeNode);
             (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);  
        
        }
#line 2980 "sintatic.tab.c"
    break;

  case 33: /* condition_expr: CMD_IF OPEN_PAREN expr CLS_PAREN block_cond  */
#line 225 "sintatic/sintatic.y"
                                                     {
                (yyval.typeNode) = buildNode("if");
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 2990 "sintatic.tab.c"
    break;

  case 35: /* block_cond: simple_complex_block_stmt CMD_ELSE simple_complex_block_stmt  */
#line 234 "sintatic/sintatic.y"
                                                                       {
                (yyval.typeNode) = buildNode("if_stmt");
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);

                (yyval.typeNode)->brotherNode = buildNode("else");
                (yyval.typeNode)->brotherNode->childNode = (yyvsp[0].typeNode);
        }
#line 3002 "sintatic.tab.c"
    break;

  case 38: /* return_stmt: CMD_RETURN SEMICOLON  */
#line 249 "sintatic/sintatic.y"
                             {
              (yyval.typeNode) = buildNode("return");  
        }
#line 3010 "sintatic.tab.c"
    break;

  case 39: /* return_stmt: CMD_RETURN expr SEMICOLON  */
#line 252 "sintatic/sintatic.y"
                                     {
                (yyval.typeNode) = buildNode("return");  
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3019 "sintatic.tab.c"
    break;

  case 40: /* set_stmt: CMD_FORALL OPEN_PAREN var IN_OP func_expr CLS_PAREN simple_complex_block_stmt  */
#line 259 "sintatic/sintatic.y"
                                                                                      {
                (yyval.typeNode) = buildNode("forall");  
                (yyval.typeNode)->childNode = (yyvsp[-4].typeNode);
                (yyvsp[-4].typeNode)->brotherNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3030 "sintatic.tab.c"
    break;

  case 41: /* set_stmt: CMD_FORALL OPEN_PAREN var IN_OP var CLS_PAREN simple_complex_block_stmt  */
#line 265 "sintatic/sintatic.y"
                                                                                  {
                (yyval.typeNode) = buildNode("forall");  
                (yyval.typeNode)->childNode = (yyvsp[-4].typeNode);
                (yyvsp[-4].typeNode)->brotherNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3041 "sintatic.tab.c"
    break;

  case 46: /* assign: var ATRIBUTION expr  */
#line 283 "sintatic/sintatic.y"
                            {
              (yyval.typeNode) = buildNode(" = ");
              (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3051 "sintatic.tab.c"
    break;

  case 47: /* func_expr: ADD_FUNC OPEN_PAREN func_in_expr CLS_PAREN  */
#line 291 "sintatic/sintatic.y"
                                                   {
                (yyval.typeNode) = buildNode(" add ");
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3060 "sintatic.tab.c"
    break;

  case 48: /* func_expr: REMOVE_FUNC OPEN_PAREN func_in_expr CLS_PAREN  */
#line 295 "sintatic/sintatic.y"
                                                        {
                (yyval.typeNode) = buildNode(" remove ");
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3069 "sintatic.tab.c"
    break;

  case 49: /* func_expr: EXIST_FUNC OPEN_PAREN func_in_expr CLS_PAREN  */
#line 299 "sintatic/sintatic.y"
                                                       {
                (yyval.typeNode) = buildNode(" exist ");
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3078 "sintatic.tab.c"
    break;

  case 50: /* is_set_expr: IS_SET_FUNC OPEN_PAREN var CLS_PAREN  */
#line 306 "sintatic/sintatic.y"
                                             {
              (yyval.typeNode) = buildNode(" is_set ");
              (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3087 "sintatic.tab.c"
    break;

  case 51: /* is_set_expr: IS_SET_FUNC OPEN_PAREN func_expr CLS_PAREN  */
#line 310 "sintatic/sintatic.y"
                                                     {
                (yyval.typeNode) = buildNode(" is_set ");
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3096 "sintatic.tab.c"
    break;

  case 52: /* func_in_expr: op_or_expr IN_OP var  */
#line 316 "sintatic/sintatic.y"
                             {
                (yyval.typeNode) = buildNode(" IN ");
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3106 "sintatic.tab.c"
    break;

  case 53: /* func_in_expr: op_or_expr IN_OP func_expr  */
#line 321 "sintatic/sintatic.y"
                                     {
                (yyval.typeNode) = buildNode(" IN ");
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3116 "sintatic.tab.c"
    break;

  case 54: /* op_or_expr: op_or_expr OP_OR op_and_expr  */
#line 329 "sintatic/sintatic.y"
                                     {
              (yyval.typeNode) = buildNode("or");
              (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3126 "sintatic.tab.c"
    break;

  case 57: /* op_and_expr: op_and_expr OP_AND logical_expr  */
#line 339 "sintatic/sintatic.y"
                                        {
              (yyval.typeNode) = buildNode("and");
              (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);  
        }
#line 3136 "sintatic.tab.c"
    break;

  case 59: /* logical_expr: logical_expr logical_ops arithmetic_expr  */
#line 348 "sintatic/sintatic.y"
                                                {
             (yyval.typeNode) = (yyvsp[-1].typeNode);
             (yyvsp[-1].typeNode)->childNode = (yyvsp[-2].typeNode); 
             (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode); 
       }
#line 3146 "sintatic.tab.c"
    break;

  case 61: /* arithmetic_expr: arithmetic_expr adds_op mult_expr  */
#line 357 "sintatic/sintatic.y"
                                          {
              (yyval.typeNode) = (yyvsp[-1].typeNode);
              (yyvsp[-1].typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3156 "sintatic.tab.c"
    break;

  case 63: /* mult_expr: mult_expr mult_ops first_term  */
#line 366 "sintatic/sintatic.y"
                                      {
              (yyval.typeNode) = (yyvsp[-1].typeNode);
              (yyvsp[-1].typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3166 "sintatic.tab.c"
    break;

  case 66: /* first_term: OP_NEG term  */
#line 376 "sintatic/sintatic.y"
                      {
              (yyval.typeNode) = buildNode(" ! ");
              (yyval.typeNode)->childNode = (yyvsp[0].typeNode);
        }
#line 3175 "sintatic.tab.c"
    break;

  case 67: /* first_term: adds_op term  */
#line 380 "sintatic/sintatic.y"
                       {
              (yyval.typeNode) = (yyvsp[-1].typeNode);
              (yyvsp[-1].typeNode)->childNode = (yyvsp[0].typeNode);
        }
#line 3184 "sintatic.tab.c"
    break;

  case 68: /* first_term: var OPEN_PAREN list_expr CLS_PAREN  */
#line 384 "sintatic/sintatic.y"
                                             {
                (yyval.typeNode) = (yyvsp[-3].typeNode);
                (yyvsp[-3].typeNode)->brotherNode = (yyvsp[-1].typeNode);
        }
#line 3193 "sintatic.tab.c"
    break;

  case 72: /* term: OPEN_PAREN expr CLS_PAREN  */
#line 394 "sintatic/sintatic.y"
                                    {
                (yyval.typeNode) = (yyvsp[-1].typeNode);
        }
#line 3201 "sintatic.tab.c"
    break;

  case 73: /* logical_ops: LT_OP  */
#line 400 "sintatic/sintatic.y"
              {
                (yyval.typeNode) = buildNode("LT_OP");
        }
#line 3209 "sintatic.tab.c"
    break;

  case 74: /* logical_ops: LTE_OP  */
#line 403 "sintatic/sintatic.y"
                  {
                (yyval.typeNode) = buildNode("LTE_OP");
        }
#line 3217 "sintatic.tab.c"
    break;

  case 75: /* logical_ops: GT_OP  */
#line 406 "sintatic/sintatic.y"
                 {
                (yyval.typeNode) = buildNode("GT_OP");
        }
#line 3225 "sintatic.tab.c"
    break;

  case 76: /* logical_ops: GTE_OP  */
#line 409 "sintatic/sintatic.y"
                  {
                (yyval.typeNode) = buildNode("GTE_OP");
        }
#line 3233 "sintatic.tab.c"
    break;

  case 77: /* logical_ops: NEQ_OP  */
#line 412 "sintatic/sintatic.y"
                  {
                (yyval.typeNode) = buildNode("NEQ_OP");
        }
#line 3241 "sintatic.tab.c"
    break;

  case 78: /* logical_ops: EQUAL_OP  */
#line 415 "sintatic/sintatic.y"
                    {
                (yyval.typeNode) = buildNode("EQUAL_OP");
        }
#line 3249 "sintatic.tab.c"
    break;

  case 79: /* str_expr: STRING  */
#line 421 "sintatic/sintatic.y"
               {
            (yyval.typeNode) = buildNode((yyvsp[0].sval));
            free((yyvsp[0].sval));
        }
#line 3258 "sintatic.tab.c"
    break;

  case 82: /* var: ID  */
#line 433 "sintatic/sintatic.y"
         {
            (yyval.typeNode) = buildNode((yyvsp[0].sval));
            free((yyvsp[0].sval));
       }
#line 3267 "sintatic.tab.c"
    break;

  case 83: /* adds_op: ADD_OP  */
#line 440 "sintatic/sintatic.y"
             {
            (yyval.typeNode) = buildNode((yyvsp[0].sval)); 
            free((yyvsp[0].sval)); 
      }
#line 3276 "sintatic.tab.c"
    break;

  case 84: /* mult_ops: MULT_OP  */
#line 447 "sintatic/sintatic.y"
              {
            (yyval.typeNode) = buildNode((yyvsp[0].sval)); 
            free((yyvsp[0].sval));  
      }
#line 3285 "sintatic.tab.c"
    break;

  case 85: /* num_tipos: FLOAT  */
#line 455 "sintatic/sintatic.y"
              {
              (yyval.typeNode) = buildNode((yyvsp[0].sval));
              free((yyvsp[0].sval));
        }
#line 3294 "sintatic.tab.c"
    break;

  case 86: /* num_tipos: INT  */
#line 459 "sintatic/sintatic.y"
              {
              (yyval.typeNode) = buildNode((yyvsp[0].sval));
              free((yyvsp[0].sval));
        }
#line 3303 "sintatic.tab.c"
    break;

  case 87: /* num_tipos: EMPTY  */
#line 463 "sintatic/sintatic.y"
                {
              (yyval.typeNode) = buildNode("EMPTY");
        }
#line 3311 "sintatic.tab.c"
    break;

  case 88: /* tipos: TYPE_INT  */
#line 469 "sintatic/sintatic.y"
                 {
             (yyval.typeNode) = buildNode("TYPE_INT");
        }
#line 3319 "sintatic.tab.c"
    break;

  case 89: /* tipos: TYPE_FLOAT  */
#line 472 "sintatic/sintatic.y"
                     {
              (yyval.typeNode) = buildNode("TYPE_FLOAT");
        }
#line 3327 "sintatic.tab.c"
    break;

  case 90: /* tipos: TYPE_SET  */
#line 475 "sintatic/sintatic.y"
                    {
              (yyval.typeNode) = buildNode("TYPE_SET");
        }
#line 3335 "sintatic.tab.c"
    break;

  case 91: /* tipos: TYPE_ELEM  */
#line 478 "sintatic/sintatic.y"
                    {
             (yyval.typeNode) = buildNode("TYPE_ELEM");
        }
#line 3343 "sintatic.tab.c"
    break;


#line 3347 "sintatic.tab.c"

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

#line 482 "sintatic/sintatic.y"



int yyerror(const char* errormsg) {
  fprintf(stderr, "%s at line:%d, column:%d,\n", errormsg, yylval.token.line, yylval.token.column);
  // error++;
  return 0;
}

int main(int argc, char ** argv) {

    yyparse();

    // if(error) return 0;
    showTable(table);
    showTree(raiz, 0);

    clearTree(raiz);

    yylex_destroy();
    return 0;
}
