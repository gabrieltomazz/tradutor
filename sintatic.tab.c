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
  
  TreeNodes* origin;
  Symbol* table;

#line 87 "sintatic.tab.c"

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
#define YYLAST   7156

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  565

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
       0,    87,    87,    95,    98,   102,   103,   107,   115,   119,
     128,   136,   139,   146,   154,   161,   167,   173,   177,   181,
     182,   183,   184,   185,   186,   187,   188,   192,   195,   198,
     201,   204,   207,   210,   213,   219,   230,   235,   241,   242,
     252,   253,   257,   260,   267,   273,   279,   280,   285,   289,
     290,   294,   302,   306,   310,   314,   317,   320,   326,   330,
     334,   339,   344,   352,   357,   358,   362,   367,   371,   376,
     380,   385,   389,   394,   398,   399,   403,   407,   411,   412,
     415,   421,   422,   423,   426,   432,   435,   438,   441,   444,
     447,   453,   460,   461,   462,   468,   475,   482,   490,   494,
     498,   504,   507,   510,   513
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

#define YYPACT_NINF (-228)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-105)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     389,   -34,    17,    41,   151,   207,    26,   282,   331,   407,
     519,   212,   560,  -228,   681,    29,    -8,   353,    35,   747,
      44,    12,    19,    66,    68,   110,    88,    88,   415,    88,
      88,  4724,   898,   927,    74,  1059,  1086,   468,  6291,  6311,
      25,  6331,   122,   133,   148,   160,   169,   225,   235,    73,
     266,   269,   292,  1008,  1363,  3293,   138,  3334,  3375,  3416,
    3457,  3498,  3539,  3580,   201,   284,   304,   310,    72,    95,
     199,  7085,  1711,  6351,  6371,  6391,  6137,    73,  6411,   348,
     297,   327,  1426,   377,    24,   329,   187,   488,   738,  6431,
    6451,  1038,  1120,   186,   344,  3621,   362,  6191,    87,   346,
    1090,   368,  3662,  3703,  3744,    89,   804,   804,   877,   918,
    1250,  1587,  1611,  1809,   804,   804,  4801,   804,  1545,   236,
    6471,   380,  6491,   179,   395,   402,   410,   420,   442,   245,
      33,   334,   433,   437,   440,   383,    82,   418,    90,   423,
     460,   486,   503,   446,   507,   538,   545,   549,  3785,  6511,
    6531,   453,   553,   283,  7098,  6671,  6551,  6571,   635,   485,
    6591,   664,   644,   691,  4646,  1545,   706,   206,   673,   683,
     701,   731,   735,   774,   783,   786,   789,   805,   813,   829,
     834,   842,   847,   854,   863,   814,  6611,  1840,  6631,  3826,
     132,   612,  3867,  1765,   883,   897,   924,   942,  3908,  3949,
    3990,  4031,  4072,  4113,  4154,  4195,   954,   482,   960,  4685,
     377,   846,  4685,  4685,  4236,   965,  4277,  4318,  4359,   737,
    4400,  1005,  1007,  1024,  1030,   712,  6164,  4441,  6651,  6216,
     573,  5587,  5612,  5637,   997,  1010,  1017,    86,  1946,  1000,
     141,   165,   111,  7059,  6087,  5662,  5687,  5712,  5087,    86,
    5737,  4810,  1085,  1044,  1068,  6241,   769,  6691,  6709,    94,
    1976,   222,  7111,  7015,  6727,  6745,  6763,  6266,    94,  6781,
    1087,  1089,   660,  1092,  1103,  1104,  5037,  5112,  5137,  5162,
    1106,  1109,  1110,   173,  2006,   741,   341,   396,   604,  1377,
    1292,  5187,  5212,  5237,  5062,   173,  5262,  4482,  1112,   242,
    4819,  1113,   756,  1111,  1117,  1121,  1122,  1125,  1130,  1168,
    4724,  1889,  2059,  2101,  2145,  2186,  2227,  2268,  1133,  1138,
    1139,   348,  4724,  4523,  4564,  1147,  4832,  4849,  4862,  5762,
    5787,  5812,   565,  1142,  4871,  4871,  4871,  4871,  4871,   672,
    5837,  6799,  6817,  6835,   581,  1143,  4819,  4819,  4819,  4819,
     828,  6853,  5862,  4880,  4893,  4910,  4923,  4932,  4941,  5287,
    5312,  5337,   591,  1144,   262,  4954,  4954,  4954,  4954,  4954,
     962,  5362,  6871,   215,  1148,  1149,  1154,   230,   250,  1157,
     570,  5387,  2309,  4762,   377,   300,  1205,  1260,   337,  2350,
    1160,  1156,  2391,  2432,  2473,  1164,  1161,  4771,   715,   321,
     746,   349,   790,   412,  5887,  5912,  1173,   194,  7072,  6112,
    5937,  5962,   630,  5987,  1176,  6889,  6907,  7124,  7033,  6925,
    6943,  1028,  6961,  1177,   817,   416,   835,   473,   875,   500,
     916,   520,   951,   535,   958,   548,  5412,  5437,   438,  1179,
    1180,  1181,   621,   627,  1182,   811,  7046,  6012,  5462,  5487,
    1052,  5512,  1185,  4971,  4984,  4993,   980,  1186,  1190,  1194,
    1202,   984,  1193,  1195,  1014,  1197,  1200,  1201,  1203,  2514,
    2555,  2596,  4605,  1207,  1208,  1217,  1218,  1221,  1222,  1227,
    6037,  6062,  6979,  6997,   693,   836,   866,   870,   905,  1001,
     779,   889,   892,   922,   933,   947,  5002,  5015,  5032,  5537,
    5562,  1039,   579,  1055,   624,  1072,   685,  1235,  4646,  1545,
    1243,   206,  1232,  1234,  1236,  1237,  1238,  1239,  1245,  1246,
    1074,   689,  1076,   742,  1095,   772,   776,   808,   873,   923,
     941,   975,  2637,  2678,  2719,  1248,  1252,  1253,  1254,  2760,
    2801,  2842,  2883,  2924,  2965,  3006,  3047,   645,   711,   832,
     988,  1023,  1162,  4646,   377,  1273,  4646,  4646,  3088,  1255,
    3129,  3170,  3211,  1204,  3252
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
       0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -228,  -228,  -228,  1283,     2,  -228,    21,   -15,   -47,    -4,
    -160,  -158,  -147,   794,   -90,  -140,  -124,  -122,  1437,   -80,
    1573,  -108,  1671,  1331,  1329,  1323,  1134,   970,   773,   202,
    -227,   -84,  -164,   -10,   399,  -226,   611,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,    55,    10,    22,   190,    56,   191,
      58,    59,    60,   192,   193,    61,    62,    63,    64,    65,
      66,    67,    68,   131,   261,   262,   263,   264,   265,   266,
     114,   142,   162,   267,   268,   117,   269,    79
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,    17,     9,   125,   312,    12,   313,    11,   145,     9,
     101,    32,    33,    28,    35,    36,   336,   314,    23,   338,
      23,    76,  -101,   208,   315,   127,    13,    57,  -101,   254,
     -96,   -96,   -96,    18,    23,   347,    21,   -96,   349,    90,
     316,    25,   317,    97,   248,    24,  -102,    76,   221,   222,
     223,   224,  -102,    57,    26,    80,   320,   221,   222,   223,
     224,    27,   367,   -65,   -65,   369,   -96,    90,   -95,   121,
     -95,   225,   248,   126,   128,   169,   134,   -15,   228,    38,
      39,   248,   248,   147,   319,    41,   -15,   221,   222,   223,
     224,   329,   231,   232,   272,   152,    97,    97,   233,   341,
     256,   257,   -65,   -65,    97,    97,   258,    97,    97,   294,
      29,   -65,   -65,   -65,    54,   273,   -15,   274,   275,   214,
     -65,   -65,   217,   218,   174,   105,   106,   238,   271,   149,
     215,    31,   176,   -41,   -49,   260,   -41,   -41,   -41,   -41,
     -41,   -64,   -64,   335,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,    30,   -64,    76,    97,  -104,   197,   -41,   -41,
     -41,   -41,  -104,    82,   321,   -41,   311,   -41,   -41,   -41,
     -41,   -65,   -65,   -41,    83,   414,   -41,   294,   359,   277,
     278,   336,   100,   -65,   338,   279,   423,   146,   132,    84,
     347,   270,   270,   349,   323,   299,   334,   323,   323,    76,
     325,    85,    76,    76,   220,   324,   452,   -49,   324,   324,
      86,   270,  -103,   234,   284,   235,   236,    15,  -103,   367,
     271,   163,   369,    16,   -63,   -63,   335,   331,   248,   -64,
     -64,   107,   234,    75,   235,   236,   -63,   159,   -64,   331,
     102,   276,   277,   278,    40,   -95,   -95,   373,   279,   343,
     248,    89,   -64,   -64,   346,    75,   247,   -95,   343,    75,
     -62,   -62,   280,   391,   281,   282,    87,   438,   374,   283,
     375,   376,   -62,   361,   248,   396,    88,   284,   160,   120,
     -61,   -61,    -2,     1,   247,   361,   298,   168,   439,   378,
     440,   441,   -61,   247,   247,     2,     3,     4,     5,    97,
      76,   459,   463,   466,   458,   254,    57,    91,    75,    75,
      92,   395,    76,   -63,   -63,   107,    75,    75,    57,    75,
      75,   293,   -63,   103,   248,   248,   248,   248,   248,   294,
     129,    -4,    -4,    93,   255,   256,   257,    40,   467,   -13,
     294,   258,   270,   -50,    -4,    -4,    -4,    -4,   312,   104,
     313,   -65,   -65,   252,   443,   294,   294,   294,   294,   294,
     294,   314,   259,   475,   299,   300,    75,    75,   315,   122,
     260,   -65,   -65,   248,   126,   460,   248,   248,   468,   -65,
     -65,   -65,   253,   -65,   316,    81,   317,   248,   150,   293,
       1,   477,    19,   312,    20,   313,   312,   312,   313,   313,
     320,   148,     2,     3,     4,     5,   314,    -6,    -6,   314,
     314,    75,   -17,   315,    75,    75,   315,   315,   534,   297,
      -6,    -6,    -6,    -6,   298,   173,   364,   365,   319,   316,
      77,   317,   316,   316,   317,   317,   -49,   164,   -49,   330,
     247,   165,   -65,   -65,   118,   320,   -65,   -65,   320,   320,
     166,   340,    77,   249,   479,    34,    77,   -14,   485,   298,
     175,   342,   247,   558,   271,   177,   561,   562,   -95,   -95,
     351,   115,   167,   319,   559,   170,   319,   319,   -95,   171,
     -95,   249,   172,   -62,   -62,   360,   247,   271,   180,   135,
     249,   249,   -62,   255,   256,   257,    40,   371,    76,    97,
     258,   538,   -91,   -65,   -65,    77,    77,   227,   321,    81,
     311,    75,    75,    77,    77,   487,    77,    77,   295,    -5,
      -5,   259,   185,   301,    75,   185,   301,   186,   178,   260,
     -65,   -65,    -5,    -5,    -5,    -5,   247,   247,   247,   247,
     247,   293,   489,    76,   325,   179,    76,    76,   564,   181,
     -65,   -65,   293,   321,   115,   311,   321,   321,   311,   311,
      -8,    -8,   491,    77,    77,   -65,   -65,   293,   293,   293,
     293,   293,   293,    -8,    -8,    -8,    -8,   493,   -65,   -65,
     182,   -95,   -95,   -61,   -61,   247,   295,   183,   247,   247,
     495,   184,   -61,   -95,   -95,   -95,   -95,   -95,   -95,   247,
     -63,   -63,   346,   -95,   -95,   -95,   271,   404,    77,   -65,
     -65,    77,    77,   -40,   -95,   -95,   -40,   -40,   -40,   -40,
     -40,   527,   271,   415,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   271,   436,   -64,   -64,   366,   249,   -40,   -40,
     -40,   -40,    78,   337,   -64,   -40,   -64,   -40,   -40,   -40,
     -40,   -62,   -62,   -40,   -65,   -65,   -40,   -61,   -61,   249,
      78,   -62,   348,   -62,    78,   250,   529,   -61,    78,   -61,
     185,   301,   480,   412,   -51,   -55,   -55,   276,   277,   278,
      40,    -3,    -3,   249,   279,   -55,   188,   -55,    78,   368,
     -95,   -95,   189,   250,    -3,    -3,    -3,    -3,   280,   -95,
     281,   282,   250,   250,   187,   283,   -93,   195,    77,    77,
      75,    75,   -55,   284,   413,   -65,   -65,    78,    78,   -65,
     -65,    77,   -52,   -55,   -55,    78,    78,   531,    78,    78,
     296,   548,   -55,   249,   249,   249,   249,   249,   295,   137,
     -60,   -52,   -52,   255,   256,   257,    40,    -7,    -7,   295,
     258,   -52,   -95,   -52,   -95,    75,   298,   474,    75,    75,
      -7,    -7,    -7,    -7,   295,   295,   295,   295,   295,   295,
     -59,   259,   -65,   -65,   -58,    78,    78,   -99,   -99,   260,
     322,   -50,   249,   -50,   550,   249,   249,   298,   476,   -99,
     -99,   -99,   -99,   -99,   -99,   382,   249,    81,   296,   -99,
     -99,   -99,   -65,   -65,    74,    94,   -55,   -55,   337,   229,
      38,    39,    40,   -56,   552,   206,    41,   348,   -55,   -55,
      78,   -55,   -53,    78,    78,   -57,    74,   246,   -54,   421,
      74,   298,   478,   276,   277,   278,    40,    49,   -52,   -52,
     279,   -63,   -63,   366,   198,    54,   368,   216,   250,   250,
     -52,   -63,   199,   -63,   280,   246,   281,   282,   298,   484,
     250,   283,   -56,   -56,   246,   246,   -52,   -52,   200,   284,
     422,   250,   -56,   201,   -56,   -52,   298,   486,   -87,    74,
      74,   202,   -87,   -87,   -87,   -87,   203,    74,    74,   -87,
     157,    74,   292,   204,   296,   250,   -56,   -56,   -12,   -12,
     -53,   -53,   205,   -56,   -56,   -56,   296,    77,    77,   -53,
     -87,   -12,   -12,   -12,   -12,   -56,   298,   488,   -87,   -85,
      78,    78,   210,   -85,   -85,   -85,   -85,   -10,   -10,   -52,
     -85,   -52,   -56,    78,   -56,   -57,   -57,    74,    74,   211,
     -10,   -10,   -10,   -10,   -57,   250,   250,   250,   250,   250,
     296,   -85,    77,   -53,   -53,    77,    77,   298,   490,   -85,
     292,   296,   -53,   450,   -53,   -53,   212,   276,   277,   278,
      40,   -57,   -57,   -57,   279,   -57,   296,   296,   296,   296,
     296,   296,    74,   -57,   213,    74,    74,   -54,   280,   -54,
     281,   282,   298,   492,   250,   283,   -94,   250,   250,   298,
     494,    73,   -92,   284,   451,   -54,   -54,   219,   250,    94,
    -101,   246,  -102,   229,    38,    39,    40,   -54,   -53,   -53,
      41,   271,   507,    73,   245,   271,   512,    73,   -53,  -104,
     -53,   -54,   -54,   246,    45,  -103,    47,    48,   326,   139,
     -54,    49,   -50,   230,   231,   232,    40,    95,   140,    54,
     233,   327,   245,   -57,   -57,   271,   515,   246,   328,   -11,
     -11,   245,   245,   -57,   234,   -57,   235,   236,   185,   301,
     482,   237,   -11,   -11,   -11,   -11,    73,    73,   -95,   238,
     298,   526,    74,    74,    73,   156,    -9,    -9,    73,   291,
     -16,   -16,   185,   301,   499,    74,   298,   528,   -95,    -9,
      -9,    -9,    -9,   -16,   -16,   -16,   -16,   246,   246,   246,
     246,   411,   292,   298,   530,   298,   547,   298,   549,    78,
      78,   143,   420,   292,   -95,   230,   231,   232,    40,   -95,
     140,   352,   233,   353,    73,    73,   298,   551,   292,   292,
     292,   292,   449,   292,   354,   355,   234,   356,   235,   236,
     357,   358,   383,   237,   372,   381,   246,   291,   384,   246,
     246,   238,   385,   386,    78,    72,   387,    78,    78,    94,
     246,   388,   392,   229,    38,    39,    40,   393,   394,    73,
      41,   397,    73,    73,   405,   416,   437,    72,   244,   453,
     454,    72,   -54,   -54,    45,   455,    47,    48,   298,   469,
     470,    49,   -54,   471,   -54,   472,   461,   389,   245,    54,
     230,   231,   232,    40,   271,   140,   244,   233,   481,   483,
     496,   497,   498,   301,   510,   244,   244,   500,   508,   509,
     245,   234,   511,   235,   236,   513,   532,   514,   237,   516,
      72,    72,   517,   518,   536,   519,   238,   310,   155,   -51,
     -55,   -86,    72,   290,   245,   -86,   -86,   -86,   -86,   -52,
     -56,   464,   -86,   -53,   -57,   230,   231,   232,    40,   -54,
     140,   539,   233,   540,   560,   541,   542,   543,   544,    73,
      73,    74,    74,   -86,   545,   546,   234,   554,   235,   236,
      14,   -86,    73,   237,   555,   556,   557,   563,    72,    72,
     251,   238,   533,     0,   245,   245,   245,   410,     0,   291,
       0,     0,   -69,   -69,   -69,   -69,   -69,   -69,   419,     0,
     291,   290,   -69,   -69,   -69,     0,    74,     0,     0,    74,
      74,     0,   -69,     0,   -69,   291,   291,   291,   448,     0,
     291,     0,     0,    72,     0,     0,    72,    72,     0,     0,
       0,     0,     0,   245,    71,     0,   245,   245,     0,     0,
      70,     0,    69,     0,    98,     0,     0,   245,   230,   231,
     232,    40,   244,     0,     0,   233,    71,   243,     0,     0,
      71,     0,    70,   242,    69,   241,    70,     0,    69,   234,
       0,   235,   236,     0,   244,     0,   237,   108,   109,   110,
     111,   112,   113,     0,   238,   243,     0,   -67,   -67,   -67,
       0,   242,     0,   241,   243,   243,     0,   -67,   244,   -67,
     242,   242,   241,   241,     0,     0,     0,   123,     0,    71,
     154,   230,   231,   232,    40,   153,     0,     0,   233,     0,
       0,    71,   289,    72,    72,     0,     0,    70,   288,    69,
     287,     0,   234,     0,   235,   236,    72,     0,     0,   237,
       0,     0,     0,     0,     0,     0,     0,   238,   244,   244,
     409,     0,     0,   290,     0,     0,     0,     0,    73,    73,
       0,   418,     0,     0,   290,     0,     0,    71,    71,     0,
      96,    99,     0,    70,    70,    69,    69,     0,     0,   290,
     290,   447,     0,     0,   290,     0,     0,     0,     0,     0,
     289,     0,     0,     0,     0,     0,   288,   244,   287,   124,
     244,   244,     0,    73,     0,     0,    73,    73,   141,   144,
       0,   244,    71,     0,     0,    71,    71,     0,    70,     0,
      69,    70,    70,    69,    69,     0,    94,     0,     0,     0,
     229,    38,    39,    40,     0,   158,   161,    41,     0,     0,
       0,   243,     0,     0,     0,     0,     0,   242,     0,   241,
       0,    45,     0,    47,    48,     0,     0,     0,    49,     0,
       0,     0,     0,   243,     0,     0,    54,     0,   -88,   242,
       0,   241,   -88,   -88,   -88,   -88,     0,     0,     0,   -88,
       0,   318,   194,     0,     0,     0,     0,   243,     0,     0,
       0,     0,   -89,   242,     0,   241,   -89,   -89,   -89,   -89,
     -88,     0,     0,   -89,   161,     0,     0,   239,   -88,   380,
       0,     0,    71,    71,     0,     0,     0,     0,    70,    70,
      69,    69,    72,    72,   -89,    71,     0,     0,     0,     0,
       0,    70,   -89,    69,     0,   239,     0,   243,   408,   133,
       0,     0,   289,   407,   239,   239,     0,     0,   288,   417,
     287,     0,     0,   289,     0,   333,     0,     0,   151,   288,
       0,   287,     0,     0,     0,     0,     0,    72,   289,   446,
      72,    72,   285,   289,   445,     0,     0,   345,     0,   288,
       0,   287,     0,     0,     0,     0,   243,     0,     0,   243,
     243,     0,   242,     0,   241,   242,   242,   241,   241,   251,
     243,   363,     0,     0,     0,   240,   242,     0,   241,     0,
       0,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,
     196,   -69,   -69,   -69,     0,     0,   390,     0,     0,     0,
     -69,     0,     0,   240,     0,     0,   130,     0,   136,   138,
     285,     0,   240,   240,     0,     0,   -38,     0,     0,   209,
     -38,   -38,   -38,   -38,     0,     0,   161,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,     0,     0,   161,     0,     0,
     286,   -38,   -38,   -38,   -38,     0,     0,     0,   -38,     0,
     -38,   -38,   -38,   -38,     0,     0,   -38,   161,     0,   -38,
     -90,   239,     0,     0,   -90,   -90,   -90,   -90,     0,     0,
     457,   -90,     0,   462,   465,     0,     0,     0,     0,     0,
       0,    71,    71,   239,   473,     0,     0,    70,    70,    69,
      69,   207,   -90,     0,     0,   276,   277,   278,    40,     0,
     -90,     0,   279,     0,     0,     0,     0,   239,   286,     0,
       0,     0,     0,     0,     0,     0,   280,     0,   281,   282,
       0,     0,   377,   283,     0,     0,    71,     0,     0,    71,
      71,   284,    70,     0,    69,    70,    70,    69,    69,     0,
     -25,     0,     0,   -25,   -25,   -25,   -25,   -25,     0,     0,
       0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   240,
       0,     0,   285,     0,     0,   -25,   -25,   -25,   -25,     0,
       0,     0,   -25,   285,   -25,   -25,   -25,   -25,     0,     0,
     -25,   240,     0,   -25,     0,     0,     0,   442,     0,     0,
       0,     0,     0,   285,     0,   318,   535,   332,     0,     0,
       0,   230,   231,   232,    40,   240,   239,     0,   233,   239,
     239,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     239,     0,   234,     0,   235,   236,     0,   344,     0,   237,
       0,   230,   231,   232,    40,     0,     0,   238,   233,     0,
     318,     0,     0,   318,   318,     0,     0,   399,   401,   403,
       0,     0,   234,     0,   235,   236,     0,   362,     0,   237,
     286,   230,   231,   232,    40,     0,     0,   238,   233,     0,
       0,   286,     0,     0,   425,   427,   429,   431,   433,   435,
       0,     0,   234,     0,   235,   236,     0,     0,     0,   237,
       0,   286,     0,     0,     0,     0,     0,   238,     0,     0,
       0,     0,     0,     0,   240,     0,     0,   240,   240,     0,
     -22,     0,     0,   -22,   -22,   -22,   -22,   -22,   240,     0,
       0,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,     0,
       0,     0,     0,     0,   537,   -22,   -22,   -22,   -22,     0,
       0,     0,   -22,     0,   -22,   -22,   -22,   -22,     0,     0,
     -22,     0,   -19,   -22,     0,   -19,   -19,   -19,   -19,   -19,
       0,     0,     0,   -19,   -19,   -19,   -19,   -19,   -19,   -19,
     -19,     0,     0,     0,   502,   504,   506,   -19,   -19,   -19,
     -19,     0,     0,     0,   -19,     0,   -19,   -19,   -19,   -19,
       0,     0,   -19,     0,     0,   -19,   -20,     0,     0,   -20,
     -20,   -20,   -20,   -20,     0,     0,     0,   -20,   -20,   -20,
     -20,   -20,   -20,   -20,   -20,     0,     0,   521,   523,   525,
       0,   -20,   -20,   -20,   -20,     0,     0,     0,   -20,     0,
     -20,   -20,   -20,   -20,     0,     0,   -20,   -21,     0,   -20,
     -21,   -21,   -21,   -21,   -21,     0,     0,     0,   -21,   -21,
     -21,   -21,   -21,   -21,   -21,   -21,     0,     0,     0,     0,
       0,     0,   -21,   -21,   -21,   -21,     0,     0,     0,   -21,
       0,   -21,   -21,   -21,   -21,     0,     0,   -21,   -24,     0,
     -21,   -24,   -24,   -24,   -24,   -24,     0,     0,     0,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,     0,     0,
       0,     0,     0,   -24,   -24,   -24,   -24,     0,     0,     0,
     -24,     0,   -24,   -24,   -24,   -24,     0,     0,   -24,   -23,
       0,   -24,   -23,   -23,   -23,   -23,   -23,     0,     0,     0,
     -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,     0,     0,
       0,     0,     0,     0,   -23,   -23,   -23,   -23,     0,     0,
       0,   -23,     0,   -23,   -23,   -23,   -23,     0,     0,   -23,
      -8,     0,   -23,    -8,    -8,    -8,    -8,    -8,     0,     0,
       0,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,     0,
       0,     0,     0,     0,     0,    -8,    -8,    -8,    -8,     0,
       0,     0,    -8,     0,    -8,    -8,    -8,    -8,     0,     0,
      -8,   -42,     0,    -8,   -42,   -42,   -42,   -42,   -42,     0,
       0,     0,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
       0,     0,     0,     0,     0,     0,   -42,   -42,   -42,   -42,
       0,     0,     0,   -42,     0,   -42,   -42,   -42,   -42,     0,
       0,   -42,   -48,     0,   -42,   -48,   -48,   -48,   -48,   -48,
       0,     0,     0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,     0,     0,     0,     0,     0,     0,   -48,   -48,   -48,
     -48,     0,     0,     0,   -48,     0,   -48,   -48,   -48,   -48,
       0,     0,   -48,   -26,     0,   -48,   -26,   -26,   -26,   -26,
     -26,     0,     0,     0,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,     0,     0,     0,     0,     0,     0,   -26,   -26,
     -26,   -26,     0,     0,     0,   -26,     0,   -26,   -26,   -26,
     -26,     0,     0,   -26,   -46,     0,   -26,   -46,   -46,   -46,
     -46,   -46,     0,     0,     0,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,     0,     0,     0,     0,     0,     0,   -46,
     -46,   -46,   -46,     0,     0,     0,   -46,     0,   -46,   -46,
     -46,   -46,     0,     0,   -46,   -43,     0,   -46,   -43,   -43,
     -43,   -43,   -43,     0,     0,     0,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,     0,     0,     0,     0,     0,     0,
     -43,   -43,   -43,   -43,     0,     0,     0,   -43,     0,   -43,
     -43,   -43,   -43,     0,     0,   -43,   -16,     0,   -43,   -16,
     -16,   -16,   -16,   -16,     0,     0,     0,   -16,   -16,   -16,
     -16,   -16,   -16,   -16,   -16,     0,     0,     0,     0,     0,
       0,   -16,   -16,   -16,   -16,     0,     0,     0,   -16,     0,
     -16,   -16,   -16,   -16,     0,     0,   -16,    -7,     0,   -16,
      -7,    -7,    -7,    -7,    -7,     0,     0,     0,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,     0,     0,     0,     0,
       0,     0,    -7,    -7,    -7,    -7,     0,     0,     0,    -7,
       0,    -7,    -7,    -7,    -7,     0,     0,    -7,   -37,     0,
      -7,   -37,   -37,   -37,   -37,   -37,     0,     0,     0,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,     0,     0,
       0,     0,     0,   -37,   -37,   -37,   -37,     0,     0,     0,
     -37,     0,   -37,   -37,   -37,   -37,     0,     0,   -37,   -36,
       0,   -37,   -36,   -36,   -36,   -36,   -36,     0,     0,     0,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,     0,
       0,     0,     0,     0,   -36,   -36,   -36,   -36,     0,     0,
       0,   -36,     0,   -36,   -36,   -36,   -36,     0,     0,   -36,
     -38,     0,   -36,   553,   -38,   -38,   -38,   -38,     0,     0,
       0,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,
       0,     0,     0,     0,     0,   -38,   -38,   -38,   -38,     0,
       0,     0,   -38,     0,   -38,   -38,   -38,   -38,     0,     0,
     -38,   -32,     0,   -38,   -32,   -32,   -32,   -32,   -32,     0,
       0,     0,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
       0,     0,     0,     0,     0,     0,   -32,   -32,   -32,   -32,
       0,     0,     0,   -32,     0,   -32,   -32,   -32,   -32,     0,
       0,   -32,   -28,     0,   -32,   -28,   -28,   -28,   -28,   -28,
       0,     0,     0,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,     0,     0,     0,     0,     0,     0,   -28,   -28,   -28,
     -28,     0,     0,     0,   -28,     0,   -28,   -28,   -28,   -28,
       0,     0,   -28,   -27,     0,   -28,   -27,   -27,   -27,   -27,
     -27,     0,     0,     0,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,     0,     0,     0,     0,     0,     0,   -27,   -27,
     -27,   -27,     0,     0,     0,   -27,     0,   -27,   -27,   -27,
     -27,     0,     0,   -27,   -33,     0,   -27,   -33,   -33,   -33,
     -33,   -33,     0,     0,     0,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,     0,     0,     0,     0,     0,     0,   -33,
     -33,   -33,   -33,     0,     0,     0,   -33,     0,   -33,   -33,
     -33,   -33,     0,     0,   -33,   -30,     0,   -33,   -30,   -30,
     -30,   -30,   -30,     0,     0,     0,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,     0,     0,     0,     0,     0,     0,
     -30,   -30,   -30,   -30,     0,     0,     0,   -30,     0,   -30,
     -30,   -30,   -30,     0,     0,   -30,   -29,     0,   -30,   -29,
     -29,   -29,   -29,   -29,     0,     0,     0,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,     0,     0,     0,     0,     0,
       0,   -29,   -29,   -29,   -29,     0,     0,     0,   -29,     0,
     -29,   -29,   -29,   -29,     0,     0,   -29,   -34,     0,   -29,
     -34,   -34,   -34,   -34,   -34,     0,     0,     0,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,     0,     0,     0,     0,
       0,     0,   -34,   -34,   -34,   -34,     0,     0,     0,   -34,
       0,   -34,   -34,   -34,   -34,     0,     0,   -34,   -31,     0,
     -34,   -31,   -31,   -31,   -31,   -31,     0,     0,     0,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,     0,
       0,     0,     0,   -31,   -31,   -31,   -31,     0,     0,     0,
     -31,     0,   -31,   -31,   -31,   -31,     0,     0,   -31,   -39,
       0,   -31,   -39,   -39,   -39,   -39,   -39,     0,     0,     0,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,     0,     0,
       0,     0,     0,     0,   -39,   -39,   -39,   -39,     0,     0,
       0,   -39,     0,   -39,   -39,   -39,   -39,     0,     0,   -39,
     -47,     0,   -39,   -47,   -47,   -47,   -47,   -47,     0,     0,
       0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,
       0,     0,     0,     0,     0,   -47,   -47,   -47,   -47,     0,
       0,     0,   -47,     0,   -47,   -47,   -47,   -47,     0,     0,
     -47,   -44,     0,   -47,   -44,   -44,   -44,   -44,   -44,     0,
       0,     0,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
       0,     0,     0,     0,     0,     0,   -44,   -44,   -44,   -44,
       0,     0,     0,   -44,     0,   -44,   -44,   -44,   -44,     0,
       0,   -44,   -45,     0,   -44,   -45,   -45,   -45,   -45,   -45,
       0,     0,     0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,     0,     0,     0,     0,     0,     0,   -45,   -45,   -45,
     -45,     0,     0,     0,   -45,     0,   -45,   -45,   -45,   -45,
       0,     0,   -45,   -35,     0,   -45,   -35,   -35,   -35,   -35,
     -35,     0,     0,     0,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,     0,     0,     0,     0,     0,     0,   -35,   -35,
     -35,   -35,     0,     0,     0,   -35,     0,   -35,   -35,   -35,
     -35,     0,     0,   -35,   -25,     0,   -35,     0,   -25,   -25,
     -25,   -25,     0,     0,     0,   -25,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,     0,     0,     0,     0,     0,     0,   -25,
     -25,   -25,   -25,     0,     0,     0,   -25,     0,   -25,   -25,
     -25,   -25,     0,     0,   -25,    37,     0,   -25,     0,   226,
      38,    39,    40,     0,     0,     0,    41,   221,   222,   223,
     224,    42,    43,    44,     0,     0,     0,     0,     0,     0,
      45,    46,    47,    48,     0,     0,     0,    49,     0,    50,
      51,    52,    53,     0,     0,    54,   -22,     0,   -18,     0,
     -22,   -22,   -22,   -22,     0,     0,     0,   -22,   -22,   -22,
     -22,   -22,   -22,   -22,   -22,     0,     0,     0,     0,     0,
       0,   -22,   -22,   -22,   -22,     0,     0,     0,   -22,     0,
     -22,   -22,   -22,   -22,     0,     0,   -22,   -19,     0,   -22,
       0,   -19,   -19,   -19,   -19,     0,     0,     0,   -19,   -19,
     -19,   -19,   -19,   -19,   -19,   -19,     0,     0,     0,     0,
       0,     0,   -19,   -19,   -19,   -19,     0,     0,     0,   -19,
       0,   -19,   -19,   -19,   -19,     0,     0,   -19,   -20,     0,
     -19,     0,   -20,   -20,   -20,   -20,     0,     0,     0,   -20,
     -20,   -20,   -20,   -20,   -20,   -20,   -20,     0,     0,     0,
       0,     0,     0,   -20,   -20,   -20,   -20,     0,     0,     0,
     -20,     0,   -20,   -20,   -20,   -20,     0,     0,   -20,   -21,
       0,   -20,     0,   -21,   -21,   -21,   -21,     0,     0,     0,
     -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,     0,     0,
       0,     0,     0,     0,   -21,   -21,   -21,   -21,     0,     0,
       0,   -21,     0,   -21,   -21,   -21,   -21,     0,     0,   -21,
     -24,     0,   -21,     0,   -24,   -24,   -24,   -24,     0,     0,
       0,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,
       0,     0,     0,     0,     0,   -24,   -24,   -24,   -24,     0,
       0,     0,   -24,     0,   -24,   -24,   -24,   -24,     0,     0,
     -24,   -23,     0,   -24,     0,   -23,   -23,   -23,   -23,     0,
       0,     0,   -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,
       0,     0,     0,     0,     0,     0,   -23,   -23,   -23,   -23,
       0,     0,     0,   -23,     0,   -23,   -23,   -23,   -23,     0,
       0,   -23,   -42,     0,   -23,     0,   -42,   -42,   -42,   -42,
       0,     0,     0,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,     0,     0,     0,     0,     0,     0,   -42,   -42,   -42,
     -42,     0,     0,     0,   -42,     0,   -42,   -42,   -42,   -42,
       0,     0,   -42,   -48,     0,   -42,     0,   -48,   -48,   -48,
     -48,     0,     0,     0,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,     0,     0,     0,     0,     0,     0,   -48,   -48,
     -48,   -48,     0,     0,     0,   -48,     0,   -48,   -48,   -48,
     -48,     0,     0,   -48,   -26,     0,   -48,     0,   -26,   -26,
     -26,   -26,     0,     0,     0,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,   -26,     0,     0,     0,     0,     0,     0,   -26,
     -26,   -26,   -26,     0,     0,     0,   -26,     0,   -26,   -26,
     -26,   -26,     0,     0,   -26,   -46,     0,   -26,     0,   -46,
     -46,   -46,   -46,     0,     0,     0,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,     0,     0,     0,     0,     0,     0,
     -46,   -46,   -46,   -46,     0,     0,     0,   -46,     0,   -46,
     -46,   -46,   -46,     0,     0,   -46,   -43,     0,   -46,     0,
     -43,   -43,   -43,   -43,     0,     0,     0,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,     0,     0,     0,     0,     0,
       0,   -43,   -43,   -43,   -43,     0,     0,     0,   -43,     0,
     -43,   -43,   -43,   -43,     0,     0,   -43,   -37,     0,   -43,
       0,   -37,   -37,   -37,   -37,     0,     0,     0,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,     0,     0,     0,     0,
       0,     0,   -37,   -37,   -37,   -37,     0,     0,     0,   -37,
       0,   -37,   -37,   -37,   -37,     0,     0,   -37,   -36,     0,
     -37,     0,   -36,   -36,   -36,   -36,     0,     0,     0,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,     0,     0,
       0,     0,     0,   -36,   -36,   -36,   -36,     0,     0,     0,
     -36,     0,   -36,   -36,   -36,   -36,     0,     0,   -36,   -32,
       0,   -36,     0,   -32,   -32,   -32,   -32,     0,     0,     0,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,     0,
       0,     0,     0,     0,   -32,   -32,   -32,   -32,     0,     0,
       0,   -32,     0,   -32,   -32,   -32,   -32,     0,     0,   -32,
     -28,     0,   -32,     0,   -28,   -28,   -28,   -28,     0,     0,
       0,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,     0,
       0,     0,     0,     0,     0,   -28,   -28,   -28,   -28,     0,
       0,     0,   -28,     0,   -28,   -28,   -28,   -28,     0,     0,
     -28,   -27,     0,   -28,     0,   -27,   -27,   -27,   -27,     0,
       0,     0,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
       0,     0,     0,     0,     0,     0,   -27,   -27,   -27,   -27,
       0,     0,     0,   -27,     0,   -27,   -27,   -27,   -27,     0,
       0,   -27,   -33,     0,   -27,     0,   -33,   -33,   -33,   -33,
       0,     0,     0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,     0,     0,     0,     0,     0,     0,   -33,   -33,   -33,
     -33,     0,     0,     0,   -33,     0,   -33,   -33,   -33,   -33,
       0,     0,   -33,   -30,     0,   -33,     0,   -30,   -30,   -30,
     -30,     0,     0,     0,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,     0,     0,     0,     0,     0,     0,   -30,   -30,
     -30,   -30,     0,     0,     0,   -30,     0,   -30,   -30,   -30,
     -30,     0,     0,   -30,   -29,     0,   -30,     0,   -29,   -29,
     -29,   -29,     0,     0,     0,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,     0,     0,     0,     0,     0,     0,   -29,
     -29,   -29,   -29,     0,     0,     0,   -29,     0,   -29,   -29,
     -29,   -29,     0,     0,   -29,   -34,     0,   -29,     0,   -34,
     -34,   -34,   -34,     0,     0,     0,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,     0,     0,     0,     0,     0,     0,
     -34,   -34,   -34,   -34,     0,     0,     0,   -34,     0,   -34,
     -34,   -34,   -34,     0,     0,   -34,   -31,     0,   -34,     0,
     -31,   -31,   -31,   -31,     0,     0,     0,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,     0,     0,     0,     0,     0,
       0,   -31,   -31,   -31,   -31,     0,     0,     0,   -31,     0,
     -31,   -31,   -31,   -31,     0,     0,   -31,   -39,     0,   -31,
       0,   -39,   -39,   -39,   -39,     0,     0,     0,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,     0,     0,     0,     0,
       0,     0,   -39,   -39,   -39,   -39,     0,     0,     0,   -39,
       0,   -39,   -39,   -39,   -39,     0,     0,   -39,   -47,     0,
     -39,     0,   -47,   -47,   -47,   -47,     0,     0,     0,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,     0,     0,
       0,     0,     0,   -47,   -47,   -47,   -47,     0,     0,     0,
     -47,     0,   -47,   -47,   -47,   -47,     0,     0,   -47,   -44,
       0,   -47,     0,   -44,   -44,   -44,   -44,     0,     0,     0,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,     0,
       0,     0,     0,     0,   -44,   -44,   -44,   -44,     0,     0,
       0,   -44,     0,   -44,   -44,   -44,   -44,     0,     0,   -44,
     -45,     0,   -44,     0,   -45,   -45,   -45,   -45,     0,     0,
       0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,     0,
       0,     0,     0,     0,     0,   -45,   -45,   -45,   -45,     0,
       0,     0,   -45,     0,   -45,   -45,   -45,   -45,     0,     0,
     -45,   -35,     0,   -45,     0,   -35,   -35,   -35,   -35,     0,
       0,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
       0,     0,     0,     0,     0,     0,   -35,   -35,   -35,   -35,
       0,     0,     0,   -35,     0,   -35,   -35,   -35,   -35,     0,
       0,   -35,    -8,     0,   -35,     0,    -8,    -8,    -8,    -8,
       0,     0,     0,    -8,    -8,    -8,    -8,    -8,    -8,    -8,
      -8,     0,     0,     0,     0,     0,     0,    -8,    -8,    -8,
      -8,     0,     0,     0,    -8,     0,    -8,    -8,    -8,    -8,
       0,     0,    -8,    -7,     0,    -8,     0,    -7,    -7,    -7,
      -7,     0,     0,     0,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,     0,     0,     0,     0,     0,     0,    -7,    -7,
      -7,    -7,     0,     0,     0,    -7,     0,    -7,    -7,    -7,
      -7,     0,     0,    -7,   -41,     0,    -7,     0,   -41,   -41,
     -41,   -41,     0,     0,     0,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,     0,     0,     0,     0,     0,     0,   -41,
     -41,   -41,   -41,     0,     0,     0,   -41,     0,   -41,   -41,
     -41,   -41,     0,     0,   -41,   -40,     0,   -41,     0,   -40,
     -40,   -40,   -40,     0,     0,     0,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,     0,     0,     0,     0,     0,     0,
     -40,   -40,   -40,   -40,     0,     0,     0,   -40,     0,   -40,
     -40,   -40,   -40,     0,     0,   -40,   -16,     0,   -40,     0,
     -16,   -16,   -16,   -16,     0,     0,     0,   -16,   -16,   -16,
     -16,   -16,   -16,   -16,   -16,     0,     0,     0,     0,     0,
       0,   -16,   -16,   -16,   -16,     0,     0,     0,   -16,     0,
     -16,   -16,   -16,   -16,     0,     0,   -16,   302,     0,   -16,
       0,   226,    38,    39,    40,     0,     0,     0,    41,   221,
     222,   223,   224,   303,   304,   305,     0,     0,     0,     0,
       0,     0,    45,    46,    47,    48,     0,     0,     0,    49,
       0,   306,   307,   308,   309,     0,    37,    54,     0,   310,
     226,    38,    39,    40,     0,     0,     0,    41,   221,   222,
     223,   224,    42,    43,    44,     0,     0,     0,     0,     0,
       0,    45,    46,    47,    48,     0,     0,     0,    49,     0,
      50,    51,    52,    53,     0,    37,    54,     0,   322,   226,
      38,    39,    40,     0,     0,     0,    41,   221,   222,   223,
     224,    42,    43,    44,     0,     0,     0,     0,     0,     0,
      45,    46,    47,    48,     0,     0,     0,    49,     0,    50,
      51,    52,    53,   456,     0,    54,     0,   230,   231,   232,
      40,     0,   406,     0,   233,     0,   230,   231,   232,    40,
       0,     0,     0,   233,     0,     0,     0,     0,   234,     0,
     235,   236,     0,     0,     0,   237,     0,   234,     0,   235,
     236,     0,   -97,   238,   237,     0,   -97,   -97,   -97,   -97,
       0,   -96,   238,   -97,     0,   -96,   -96,   -96,   -96,     0,
     379,     0,   -96,     0,   255,   256,   257,    40,     0,     0,
       0,   258,     0,   398,   -97,     0,     0,   255,   256,   257,
      40,     0,   -97,   -96,   258,     0,     0,     0,     0,     0,
     400,   -96,   259,     0,   255,   256,   257,    40,     0,     0,
     260,   258,     0,   402,     0,   259,     0,   255,   256,   257,
      40,     0,   406,   260,   258,     0,   230,   231,   232,    40,
       0,   424,   259,   233,     0,   255,   256,   257,    40,     0,
     260,     0,   258,     0,   426,   259,     0,     0,   255,   256,
     257,    40,     0,   260,   237,   258,     0,     0,     0,     0,
       0,   428,   238,   259,     0,   255,   256,   257,    40,     0,
       0,   260,   258,     0,   430,     0,   259,     0,   255,   256,
     257,    40,     0,   432,   260,   258,     0,   255,   256,   257,
      40,     0,   434,   259,   258,     0,   255,   256,   257,    40,
       0,   260,     0,   258,     0,   444,   259,     0,     0,   276,
     277,   278,    40,     0,   260,   259,   279,     0,     0,     0,
       0,     0,   501,   260,   259,     0,   255,   256,   257,    40,
       0,     0,   260,   258,     0,   503,     0,   283,     0,   255,
     256,   257,    40,     0,   505,   284,   258,     0,   255,   256,
     257,    40,     0,   520,   259,   258,     0,   255,   256,   257,
      40,     0,   260,     0,   258,     0,   522,   259,     0,     0,
     255,   256,   257,    40,     0,   260,   259,   258,     0,     0,
       0,     0,     0,   524,   260,   259,     0,   255,   256,   257,
      40,     0,     0,   260,   258,   -95,   -95,     0,   259,     0,
       0,     0,     0,     0,     0,     0,   260,   -95,   -95,   -95,
     -95,   -95,   -95,     0,     0,   259,     0,   -95,   -95,   -95,
     -81,   -81,     0,   260,     0,     0,     0,   -95,   -95,   -95,
       0,     0,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,
       0,     0,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,
       0,     0,   -81,   370,   -81,     0,     0,   -81,   -81,   -81,
     -81,   -81,   -81,     0,     0,     0,     0,   -81,   -81,   -81,
     -99,   -99,     0,     0,     0,     0,     0,     0,   339,   -81,
       0,     0,   -99,   -99,   -99,   -99,   -99,   -99,     0,     0,
       0,     0,   -99,   -99,   -99,   -98,   -98,     0,     0,     0,
       0,     0,   -99,     0,   -99,     0,     0,   -98,   -98,   -98,
     -98,   -98,   -98,     0,     0,     0,     0,   -98,   -98,   -98,
    -100,  -100,     0,     0,     0,     0,     0,   -98,     0,   -98,
       0,     0,  -100,  -100,  -100,  -100,  -100,  -100,     0,     0,
       0,     0,  -100,  -100,  -100,   -71,   116,     0,     0,     0,
       0,     0,  -100,     0,  -100,     0,     0,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,   -71,   -71,   -71,
     -73,   -73,     0,     0,     0,     0,     0,   -71,     0,   -71,
       0,     0,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,
       0,     0,   -73,   -73,   -73,   -74,   -74,     0,     0,     0,
       0,     0,   -73,     0,   -73,     0,     0,   -74,   -74,   -74,
     -74,   -74,   -74,     0,     0,     0,     0,   -74,   -74,   -74,
     -82,   -82,     0,     0,     0,     0,     0,   -74,     0,   -74,
       0,     0,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,
       0,     0,   -82,   -82,   -82,   -95,   -95,     0,     0,     0,
       0,     0,   -82,     0,   -82,     0,     0,   -95,   -95,   -95,
     -95,   -95,   -95,     0,     0,     0,     0,   -95,   -95,   -95,
     -75,   -75,     0,     0,     0,     0,     0,   -95,     0,   -95,
       0,     0,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,
       0,     0,   -75,   -75,   -75,   -81,   -81,     0,     0,     0,
       0,     0,   -75,     0,   -75,     0,     0,   -81,   -81,   -81,
     -81,   -81,   -81,     0,     0,     0,     0,   -81,   -81,   -81,
     -76,   -76,     0,     0,     0,     0,     0,   -81,     0,   -81,
       0,     0,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,
       0,     0,   -76,   -76,   -76,   -80,   -80,     0,     0,     0,
       0,     0,   -76,     0,   -76,     0,     0,   -80,   -80,   -80,
     -80,   -80,   -80,     0,     0,     0,     0,   -80,   -80,   -80,
     -84,   -84,     0,     0,     0,     0,     0,   -80,     0,   -80,
       0,     0,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,
       0,     0,   -84,   -84,   -84,   -83,   -83,     0,     0,     0,
       0,     0,   -84,     0,   -84,     0,     0,   -83,   -83,   -83,
     -83,   -83,   -83,     0,     0,     0,     0,   -83,   -83,   -83,
     -70,   116,     0,     0,     0,     0,     0,   -83,     0,   -83,
       0,     0,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,
       0,     0,   -70,   -70,   -70,   -72,   -72,     0,     0,     0,
       0,     0,   -70,     0,   -70,     0,     0,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,   -72,   -72,   -72,
     -78,   -78,     0,     0,     0,     0,     0,   -72,     0,   -72,
       0,     0,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,
       0,     0,   -78,   -78,   -78,   -79,   -79,     0,     0,     0,
       0,     0,   -78,     0,   -78,     0,     0,   -79,   -79,   -79,
     -79,   -79,   -79,     0,     0,     0,     0,   -79,   -79,   -79,
     -77,   -77,     0,     0,     0,     0,     0,   -79,     0,   -79,
       0,     0,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,
       0,     0,   -77,   -77,   -77,   -99,   -99,     0,     0,     0,
       0,     0,   -77,     0,   -77,     0,     0,   -99,   -99,   -99,
     -99,   -99,   -99,     0,     0,     0,     0,   -99,   -99,   -99,
     -98,   -98,     0,     0,     0,     0,     0,     0,     0,   -99,
       0,     0,   -98,   -98,   -98,   -98,   -98,   -98,     0,     0,
       0,     0,   -98,   -98,   -98,  -100,  -100,     0,     0,     0,
       0,     0,     0,     0,   -98,     0,     0,  -100,  -100,  -100,
    -100,  -100,  -100,     0,     0,     0,     0,  -100,  -100,  -100,
     -71,   116,     0,     0,     0,     0,     0,     0,     0,  -100,
       0,     0,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,
       0,     0,   -71,   -71,   -71,   -73,   -73,     0,     0,     0,
       0,     0,     0,     0,   -71,     0,     0,   -73,   -73,   -73,
     -73,   -73,   -73,     0,     0,     0,     0,   -73,   -73,   -73,
     -74,   -74,     0,     0,     0,     0,     0,     0,     0,   -73,
       0,     0,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,
       0,     0,   -74,   -74,   -74,   -82,   -82,     0,     0,     0,
       0,     0,     0,     0,   -74,     0,     0,   -82,   -82,   -82,
     -82,   -82,   -82,     0,     0,     0,     0,   -82,   -82,   -82,
     -95,   -95,     0,     0,     0,     0,     0,     0,     0,   -82,
       0,     0,   -95,   -95,   -95,   -95,   -95,   -95,     0,     0,
       0,     0,   -95,   -95,   -95,   -75,   -75,     0,     0,     0,
       0,     0,     0,     0,   -95,     0,     0,   -75,   -75,   -75,
     -75,   -75,   -75,     0,     0,     0,     0,   -75,   -75,   -75,
     -81,   -81,     0,     0,     0,     0,     0,     0,     0,   -75,
       0,     0,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,
       0,     0,   -81,   -81,   -81,   -76,   -76,     0,     0,     0,
       0,     0,     0,     0,   -81,     0,     0,   -76,   -76,   -76,
     -76,   -76,   -76,     0,     0,     0,     0,   -76,   -76,   -76,
     -80,   -80,     0,     0,     0,     0,     0,     0,     0,   -76,
       0,     0,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,
       0,     0,   -80,   -80,   -80,   -84,   -84,     0,     0,     0,
       0,     0,     0,     0,   -80,     0,     0,   -84,   -84,   -84,
     -84,   -84,   -84,     0,     0,     0,     0,   -84,   -84,   -84,
     -83,   -83,     0,     0,     0,     0,     0,     0,     0,   -84,
       0,     0,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,
       0,     0,   -83,   -83,   -83,   -70,   116,     0,     0,     0,
       0,     0,     0,     0,   -83,     0,     0,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,   -70,   -70,   -70,
     -72,   -72,     0,     0,     0,     0,     0,     0,     0,   -70,
       0,     0,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,
       0,     0,   -72,   -72,   -72,   -78,   -78,     0,     0,     0,
       0,     0,     0,     0,   -72,     0,     0,   -78,   -78,   -78,
     -78,   -78,   -78,     0,     0,     0,     0,   -78,   -78,   -78,
     251,     0,     0,     0,     0,     0,     0,     0,     0,   -78,
       0,     0,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,
       0,     0,   -68,   -68,   -68,   -79,   -79,     0,     0,     0,
       0,     0,   -68,     0,   -68,     0,     0,   -79,   -79,   -79,
     -79,   -79,   -79,     0,     0,     0,     0,   -79,   -79,   -79,
     -77,   -77,     0,     0,     0,     0,     0,     0,     0,   -79,
       0,     0,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,
       0,     0,   -77,   -77,   -77,   251,     0,     0,     0,     0,
       0,     0,     0,     0,   -77,     0,     0,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,     0,     0,   -69,   -69,   -69,
     251,     0,     0,     0,     0,     0,     0,     0,     0,   -69,
       0,     0,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,
       0,     0,   -68,   -68,   -68,   -81,   -81,     0,     0,     0,
       0,     0,     0,     0,   -68,     0,     0,   -81,   -81,   -81,
     -81,   -81,   -81,     0,     0,     0,     0,   -81,   -81,   -81,
       0,   118,   -95,   -95,     0,     0,   -81,     0,   119,     0,
       0,     0,     0,     0,   -95,   -95,   -95,   -95,   -95,   -95,
       0,     0,     0,     0,   -95,   -95,   -95,     0,   -95,   -81,
     -81,     0,     0,   -95,     0,   -95,     0,     0,     0,     0,
       0,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,
       0,   -81,   -81,   -81,   -95,   -95,     0,     0,     0,     0,
     -81,     0,   119,     0,     0,     0,   -95,   -95,   -95,   -95,
     -95,   -95,     0,     0,     0,     0,   -95,   -95,   -95,   -95,
     -95,     0,     0,     0,     0,   -95,     0,   -95,     0,     0,
       0,   -95,   -95,   -95,   -95,   -95,   -95,     0,     0,     0,
       0,   -95,   -95,   -95,   -81,   -81,     0,     0,     0,     0,
       0,     0,   -95,     0,     0,     0,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,     0,   -81,   -81,   -81,   -99,
     -99,     0,     0,     0,     0,     0,     0,   350,     0,     0,
       0,   -99,   -99,   -99,   -99,   -99,   -99,     0,     0,   -98,
     -98,   -99,   -99,   -99,     0,     0,     0,     0,     0,     0,
     -99,   -98,   -98,   -98,   -98,   -98,   -98,     0,     0,  -100,
    -100,   -98,   -98,   -98,     0,     0,     0,     0,     0,     0,
     -98,  -100,  -100,  -100,  -100,  -100,  -100,     0,     0,   -71,
     116,  -100,  -100,  -100,     0,     0,     0,     0,     0,     0,
    -100,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,   -73,
     -73,   -71,   -71,   -71,     0,     0,     0,     0,     0,     0,
     -71,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,   -74,
     -74,   -73,   -73,   -73,     0,     0,     0,     0,     0,     0,
     -73,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,   -82,
     -82,   -74,   -74,   -74,     0,     0,     0,     0,     0,     0,
     -74,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,   -75,
     -75,   -82,   -82,   -82,     0,     0,     0,     0,     0,     0,
     -82,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,   -81,
     -81,   -75,   -75,   -75,     0,     0,     0,     0,     0,     0,
     -75,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,   -76,
     -76,   -81,   -81,   -81,     0,     0,     0,     0,     0,     0,
     -81,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,   -80,
     -80,   -76,   -76,   -76,     0,     0,     0,     0,     0,     0,
     -76,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,   -84,
     -84,   -80,   -80,   -80,     0,     0,     0,     0,     0,     0,
     -80,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,   -83,
     -83,   -84,   -84,   -84,     0,     0,     0,     0,     0,     0,
     -84,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,   -70,
     116,   -83,   -83,   -83,     0,     0,     0,     0,     0,     0,
     -83,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,   -72,
     -72,   -70,   -70,   -70,     0,     0,     0,     0,     0,     0,
     -70,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,   -78,
     -78,   -72,   -72,   -72,     0,     0,     0,     0,     0,     0,
     -72,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,   -79,
     -79,   -78,   -78,   -78,     0,     0,     0,     0,     0,     0,
     -78,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,   -77,
     -77,   -79,   -79,   -79,     0,     0,     0,     0,     0,     0,
     -79,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,   -95,
     -95,   -77,   -77,   -77,     0,     0,     0,     0,     0,     0,
     -77,   -95,   -95,   -95,   -95,   -95,   -95,     0,     0,   251,
       0,   -95,   -95,   -95,     0,     0,     0,     0,     0,     0,
     -95,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,   -98,
     -98,   -68,   -68,   -68,     0,     0,     0,     0,     0,     0,
     -68,   -98,   -98,   -98,   -98,   -98,   -98,  -100,  -100,     0,
       0,   -98,   -98,   -98,     0,     0,     0,     0,     0,  -100,
    -100,  -100,  -100,  -100,  -100,   -71,   116,     0,     0,  -100,
    -100,  -100,     0,     0,     0,     0,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -73,   -73,     0,     0,   -71,   -71,   -71,
       0,     0,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -74,   -74,     0,     0,   -73,   -73,   -73,     0,     0,
       0,     0,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -82,
     -82,     0,     0,   -74,   -74,   -74,     0,     0,     0,     0,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -95,   -95,     0,
       0,   -82,   -82,   -82,     0,     0,     0,     0,     0,   -95,
     -95,   -95,   -95,   -95,   -95,   -75,   -75,     0,     0,   -95,
     -95,   -95,     0,     0,     0,     0,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -81,   -81,     0,     0,   -75,   -75,   -75,
       0,     0,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -76,   -76,     0,     0,   -81,   -81,   -81,     0,     0,
       0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -80,
     -80,     0,     0,   -76,   -76,   -76,     0,     0,     0,     0,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -84,   -84,     0,
       0,   -80,   -80,   -80,     0,     0,     0,     0,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -83,   -83,     0,     0,   -84,
     -84,   -84,     0,     0,     0,     0,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -70,   116,     0,     0,   -83,   -83,   -83,
       0,     0,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -72,   -72,     0,     0,   -70,   -70,   -70,     0,     0,
       0,     0,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -78,
     -78,     0,     0,   -72,   -72,   -72,     0,     0,     0,     0,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -79,   -79,     0,
       0,   -78,   -78,   -78,     0,     0,     0,     0,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -77,   -77,     0,     0,   -79,
     -79,   -79,     0,     0,     0,     0,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   251,     0,     0,     0,   -77,   -77,   -77,
       0,     0,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,
     -69,   251,     0,     0,     0,   -69,   -69,   -69,     0,     0,
       0,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,     0,
       0,     0,     0,   -68,   -68,   -68,   108,   109,   110,   111,
     112,   113,     0,     0,     0,     0,   -66,   -66,   -66,   108,
     109,   110,   111,   112,   113,     0,   -66,     0,   -66,   -67,
     -67,   -67,   108,   109,   110,   111,   112,   113,     0,     0,
       0,   -67,   -66,   -66,   -66,   108,   109,   110,   111,   112,
     113,     0,     0,     0,   -66,   -67,   -67,   -67,   108,   109,
     110,   111,   112,   113,   -67,     0,     0,     0,   -66,   -66,
     -66,   108,   109,   110,   111,   112,   113,   -66,     0,     0,
       0,   -67,   -67,   -67,   108,   109,   110,   111,   112,   113,
       0,     0,     0,     0,   -66,   -66,   -66
};

static const yytype_int16 yycheck[] =
{
       0,    11,     0,    83,   164,    39,   164,     7,    92,     7,
      57,    26,    27,    23,    29,    30,   243,   164,    18,   245,
      20,    31,     5,   187,   164,     1,     0,    31,    11,     5,
       5,     6,     7,    41,    34,   262,     1,    12,   264,    49,
     164,    20,   164,    53,    54,     1,     5,    57,    13,    14,
      15,    16,    11,    57,    42,    34,   164,    13,    14,    15,
      16,    42,   289,    30,    31,   291,    41,    77,    39,    79,
      41,     5,    82,    83,    84,    42,    86,    42,     5,     6,
       7,    91,    92,    93,   164,    12,    42,    13,    14,    15,
      16,     5,     6,     7,     5,   105,   106,   107,    12,     5,
       6,     7,    30,    31,   114,   115,    12,   117,   118,   119,
      42,    39,    30,    31,    41,    26,    42,    28,    29,   209,
      30,    31,   212,   213,    42,    30,    31,    41,    41,    42,
     210,    43,    42,     1,    39,    41,     4,     5,     6,     7,
       8,    30,    31,    32,    12,    13,    14,    15,    16,    17,
      18,    19,    42,    42,   164,   165,     5,   167,    26,    27,
      28,    29,    11,    41,   164,    33,   164,    35,    36,    37,
      38,    30,    31,    41,    41,   339,    44,   187,     5,     6,
       7,   408,    44,    42,   410,    12,   350,     1,     1,    41,
     417,     5,     5,   419,   209,    30,    31,   212,   213,   209,
     210,    41,   212,   213,   219,   209,   370,    42,   212,   213,
      41,     5,     5,    26,    41,    28,    29,     5,    11,   446,
      41,    42,   448,    11,    30,    31,    32,   237,   238,    30,
      31,    32,    26,    31,    28,    29,    42,     1,    39,   249,
      39,     5,     6,     7,     8,    30,    31,     5,    12,   259,
     260,    49,    30,    31,    32,    53,    54,    42,   268,    57,
      30,    31,    26,   310,    28,    29,    41,     5,    26,    33,
      28,    29,    42,   283,   284,   322,    41,    41,    42,    77,
      30,    31,     0,     1,    82,   295,    41,    42,    26,   299,
      28,    29,    42,    91,    92,    13,    14,    15,    16,   309,
     310,     1,   386,   387,   384,     5,   310,    41,   106,   107,
      41,   321,   322,    30,    31,    32,   114,   115,   322,   117,
     118,   119,    39,    39,   334,   335,   336,   337,   338,   339,
       1,     0,     1,    41,     5,     6,     7,     8,     1,    42,
     350,    12,     5,    39,    13,    14,    15,    16,   508,    39,
     508,    30,    31,     5,   364,   365,   366,   367,   368,   369,
     370,   508,    33,    42,    30,    31,   164,   165,   508,    42,
      41,    30,    31,   383,   384,   385,   386,   387,   388,    30,
      31,    40,     5,    42,   508,    41,   508,   397,    42,   187,
       1,    42,    39,   553,    41,   553,   556,   557,   556,   557,
     508,    39,    13,    14,    15,    16,   553,     0,     1,   556,
     557,   209,    44,   553,   212,   213,   556,   557,   508,    39,
      13,    14,    15,    16,    41,    42,    30,    31,   508,   553,
      31,   553,   556,   557,   556,   557,    40,    42,    42,   237,
     238,    39,    30,    31,    34,   553,    30,    31,   556,   557,
      30,   249,    53,    54,    42,    40,    57,    42,    42,    41,
      42,   259,   260,   553,    41,    42,   556,   557,    30,    31,
     268,    72,    30,   553,   554,    42,   556,   557,    40,    42,
      42,    82,    42,    30,    31,   283,   284,    41,    42,     1,
      91,    92,    39,     5,     6,     7,     8,   295,   508,   509,
      12,   511,    42,    30,    31,   106,   107,    39,   508,    41,
     508,   309,   310,   114,   115,    42,   117,   118,   119,     0,
       1,    33,    40,    41,   322,    40,    41,    42,    42,    41,
      30,    31,    13,    14,    15,    16,   334,   335,   336,   337,
     338,   339,    42,   553,   554,    42,   556,   557,   563,    42,
      30,    31,   350,   553,   155,   553,   556,   557,   556,   557,
       0,     1,    42,   164,   165,    30,    31,   365,   366,   367,
     368,   369,   370,    13,    14,    15,    16,    42,    30,    31,
      42,     8,     9,    30,    31,   383,   187,    42,   386,   387,
      42,    42,    39,    20,    21,    22,    23,    24,    25,   397,
      30,    31,    32,    30,    31,    32,    41,    42,   209,    30,
      31,   212,   213,     1,    41,    42,     4,     5,     6,     7,
       8,    42,    41,    42,    12,    13,    14,    15,    16,    17,
      18,    19,    41,    42,    30,    31,    32,   238,    26,    27,
      28,    29,    31,   244,    40,    33,    42,    35,    36,    37,
      38,    30,    31,    41,    30,    31,    44,    30,    31,   260,
      49,    40,   263,    42,    53,    54,    42,    40,    57,    42,
      40,    41,    42,     1,    39,    30,    31,     5,     6,     7,
       8,     0,     1,   284,    12,    40,    42,    42,    77,   290,
      30,    31,     1,    82,    13,    14,    15,    16,    26,    39,
      28,    29,    91,    92,    40,    33,    42,     1,   309,   310,
     508,   509,    39,    41,    42,    30,    31,   106,   107,    30,
      31,   322,    39,    30,    31,   114,   115,    42,   117,   118,
     119,    42,    39,   334,   335,   336,   337,   338,   339,     1,
      39,    30,    31,     5,     6,     7,     8,     0,     1,   350,
      12,    40,    40,    42,    42,   553,    41,    42,   556,   557,
      13,    14,    15,    16,   365,   366,   367,   368,   369,   370,
      39,    33,    30,    31,    39,   164,   165,     8,     9,    41,
      43,    40,   383,    42,    42,   386,   387,    41,    42,    20,
      21,    22,    23,    24,    25,    39,   397,    41,   187,    30,
      31,    32,    30,    31,    31,     1,    30,    31,   409,     5,
       6,     7,     8,    39,    42,     1,    12,   418,    42,    40,
     209,    42,    39,   212,   213,    39,    53,    54,    39,     1,
      57,    41,    42,     5,     6,     7,     8,    33,    30,    31,
      12,    30,    31,    32,    39,    41,   447,     1,   237,   238,
      42,    40,    39,    42,    26,    82,    28,    29,    41,    42,
     249,    33,    30,    31,    91,    92,    30,    31,    39,    41,
      42,   260,    40,    39,    42,    39,    41,    42,     1,   106,
     107,    39,     5,     6,     7,     8,    39,   114,   115,    12,
     117,   118,   119,    39,   283,   284,    30,    31,     0,     1,
      30,    31,    39,    30,    31,    39,   295,   508,   509,    39,
      33,    13,    14,    15,    16,    42,    41,    42,    41,     1,
     309,   310,    39,     5,     6,     7,     8,     0,     1,    40,
      12,    42,    40,   322,    42,    30,    31,   164,   165,    42,
      13,    14,    15,    16,    39,   334,   335,   336,   337,   338,
     339,    33,   553,    30,    31,   556,   557,    41,    42,    41,
     187,   350,    40,     1,    42,    42,    42,     5,     6,     7,
       8,    30,    31,    40,    12,    42,   365,   366,   367,   368,
     369,   370,   209,    42,    42,   212,   213,    40,    26,    42,
      28,    29,    41,    42,   383,    33,    42,   386,   387,    41,
      42,    31,    42,    41,    42,    30,    31,    42,   397,     1,
       5,   238,     5,     5,     6,     7,     8,    42,    30,    31,
      12,    41,    42,    53,    54,    41,    42,    57,    40,     5,
      42,    30,    31,   260,    26,     5,    28,    29,    41,     1,
      39,    33,    42,     5,     6,     7,     8,    39,    10,    41,
      12,    41,    82,    30,    31,    41,    42,   284,    41,     0,
       1,    91,    92,    40,    26,    42,    28,    29,    40,    41,
      42,    33,    13,    14,    15,    16,   106,   107,    34,    41,
      41,    42,   309,   310,   114,   115,     0,     1,   118,   119,
       0,     1,    40,    41,    42,   322,    41,    42,    30,    13,
      14,    15,    16,    13,    14,    15,    16,   334,   335,   336,
     337,   338,   339,    41,    42,    41,    42,    41,    42,   508,
     509,     1,   349,   350,    39,     5,     6,     7,     8,    42,
      10,    42,    12,    41,   164,   165,    41,    42,   365,   366,
     367,   368,   369,   370,    41,    41,    26,    41,    28,    29,
      41,    41,    41,    33,    42,    42,   383,   187,    41,   386,
     387,    41,    41,    41,   553,    31,    41,   556,   557,     1,
     397,    41,    39,     5,     6,     7,     8,    39,    39,   209,
      12,    34,   212,   213,    42,    42,    42,    53,    54,    41,
      41,    57,    30,    31,    26,    41,    28,    29,    41,    39,
      44,    33,    40,    39,    42,    44,     1,    39,   238,    41,
       5,     6,     7,     8,    41,    10,    82,    12,    42,    42,
      41,    41,    41,    41,    30,    91,    92,    42,    42,    39,
     260,    26,    30,    28,    29,    42,     1,    42,    33,    42,
     106,   107,    42,    42,     1,    42,    41,    43,   114,    42,
      42,     1,   118,   119,   284,     5,     6,     7,     8,    42,
      42,     1,    12,    42,    42,     5,     6,     7,     8,    42,
      10,    39,    12,    39,     1,    39,    39,    39,    39,   309,
     310,   508,   509,    33,    39,    39,    26,    39,    28,    29,
       7,    41,   322,    33,    42,    42,    42,    42,   164,   165,
       8,    41,   508,    -1,   334,   335,   336,   337,    -1,   339,
      -1,    -1,    20,    21,    22,    23,    24,    25,   348,    -1,
     350,   187,    30,    31,    32,    -1,   553,    -1,    -1,   556,
     557,    -1,    40,    -1,    42,   365,   366,   367,   368,    -1,
     370,    -1,    -1,   209,    -1,    -1,   212,   213,    -1,    -1,
      -1,    -1,    -1,   383,    31,    -1,   386,   387,    -1,    -1,
      31,    -1,    31,    -1,     1,    -1,    -1,   397,     5,     6,
       7,     8,   238,    -1,    -1,    12,    53,    54,    -1,    -1,
      57,    -1,    53,    54,    53,    54,    57,    -1,    57,    26,
      -1,    28,    29,    -1,   260,    -1,    33,    20,    21,    22,
      23,    24,    25,    -1,    41,    82,    -1,    30,    31,    32,
      -1,    82,    -1,    82,    91,    92,    -1,    40,   284,    42,
      91,    92,    91,    92,    -1,    -1,    -1,     1,    -1,   106,
     107,     5,     6,     7,     8,   106,    -1,    -1,    12,    -1,
      -1,   118,   119,   309,   310,    -1,    -1,   118,   119,   118,
     119,    -1,    26,    -1,    28,    29,   322,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,   334,   335,
     336,    -1,    -1,   339,    -1,    -1,    -1,    -1,   508,   509,
      -1,   347,    -1,    -1,   350,    -1,    -1,   164,   165,    -1,
      53,    54,    -1,   164,   165,   164,   165,    -1,    -1,   365,
     366,   367,    -1,    -1,   370,    -1,    -1,    -1,    -1,    -1,
     187,    -1,    -1,    -1,    -1,    -1,   187,   383,   187,    82,
     386,   387,    -1,   553,    -1,    -1,   556,   557,    91,    92,
      -1,   397,   209,    -1,    -1,   212,   213,    -1,   209,    -1,
     209,   212,   213,   212,   213,    -1,     1,    -1,    -1,    -1,
       5,     6,     7,     8,    -1,   118,   119,    12,    -1,    -1,
      -1,   238,    -1,    -1,    -1,    -1,    -1,   238,    -1,   238,
      -1,    26,    -1,    28,    29,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,   260,    -1,    -1,    41,    -1,     1,   260,
      -1,   260,     5,     6,     7,     8,    -1,    -1,    -1,    12,
      -1,   164,   165,    -1,    -1,    -1,    -1,   284,    -1,    -1,
      -1,    -1,     1,   284,    -1,   284,     5,     6,     7,     8,
      33,    -1,    -1,    12,   187,    -1,    -1,    54,    41,   300,
      -1,    -1,   309,   310,    -1,    -1,    -1,    -1,   309,   310,
     309,   310,   508,   509,    33,   322,    -1,    -1,    -1,    -1,
      -1,   322,    41,   322,    -1,    82,    -1,   334,   335,    86,
      -1,    -1,   339,   334,    91,    92,    -1,    -1,   339,   346,
     339,    -1,    -1,   350,    -1,   238,    -1,    -1,   105,   350,
      -1,   350,    -1,    -1,    -1,    -1,    -1,   553,   365,   366,
     556,   557,   119,   370,   365,    -1,    -1,   260,    -1,   370,
      -1,   370,    -1,    -1,    -1,    -1,   383,    -1,    -1,   386,
     387,    -1,   383,    -1,   383,   386,   387,   386,   387,     8,
     397,   284,    -1,    -1,    -1,    54,   397,    -1,   397,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
     167,    30,    31,    32,    -1,    -1,   309,    -1,    -1,    -1,
      39,    -1,    -1,    82,    -1,    -1,    85,    -1,    87,    88,
     187,    -1,    91,    92,    -1,    -1,     1,    -1,    -1,     4,
       5,     6,     7,     8,    -1,    -1,   339,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,   350,    -1,    -1,
     119,    26,    27,    28,    29,    -1,    -1,    -1,    33,    -1,
      35,    36,    37,    38,    -1,    -1,    41,   370,    -1,    44,
       1,   238,    -1,    -1,     5,     6,     7,     8,    -1,    -1,
     383,    12,    -1,   386,   387,    -1,    -1,    -1,    -1,    -1,
      -1,   508,   509,   260,   397,    -1,    -1,   508,   509,   508,
     509,     1,    33,    -1,    -1,     5,     6,     7,     8,    -1,
      41,    -1,    12,    -1,    -1,    -1,    -1,   284,   187,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    28,    29,
      -1,    -1,   299,    33,    -1,    -1,   553,    -1,    -1,   556,
     557,    41,   553,    -1,   553,   556,   557,   556,   557,    -1,
       1,    -1,    -1,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,   238,
      -1,    -1,   339,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,   350,    35,    36,    37,    38,    -1,    -1,
      41,   260,    -1,    44,    -1,    -1,    -1,   364,    -1,    -1,
      -1,    -1,    -1,   370,    -1,   508,   509,     1,    -1,    -1,
      -1,     5,     6,     7,     8,   284,   383,    -1,    12,   386,
     387,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     397,    -1,    26,    -1,    28,    29,    -1,     1,    -1,    33,
      -1,     5,     6,     7,     8,    -1,    -1,    41,    12,    -1,
     553,    -1,    -1,   556,   557,    -1,    -1,   326,   327,   328,
      -1,    -1,    26,    -1,    28,    29,    -1,     1,    -1,    33,
     339,     5,     6,     7,     8,    -1,    -1,    41,    12,    -1,
      -1,   350,    -1,    -1,   353,   354,   355,   356,   357,   358,
      -1,    -1,    26,    -1,    28,    29,    -1,    -1,    -1,    33,
      -1,   370,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,   383,    -1,    -1,   386,   387,    -1,
       1,    -1,    -1,     4,     5,     6,     7,     8,   397,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,   511,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    -1,     1,    44,    -1,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,   453,   454,   455,    26,    27,    28,
      29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,
      -1,    -1,    41,    -1,    -1,    44,     1,    -1,    -1,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,   496,   497,   498,
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
      -1,    35,    36,    37,    38,    -1,     1,    41,    -1,    43,
       5,     6,     7,     8,    -1,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    -1,    -1,    -1,    33,    -1,
      35,    36,    37,    38,    -1,     1,    41,    -1,    43,     5,
       6,     7,     8,    -1,    -1,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    38,     1,    -1,    41,    -1,     5,     6,     7,
       8,    -1,     1,    -1,    12,    -1,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    26,    -1,
      28,    29,    -1,    -1,    -1,    33,    -1,    26,    -1,    28,
      29,    -1,     1,    41,    33,    -1,     5,     6,     7,     8,
      -1,     1,    41,    12,    -1,     5,     6,     7,     8,    -1,
       1,    -1,    12,    -1,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    -1,     1,    33,    -1,    -1,     5,     6,     7,
       8,    -1,    41,    33,    12,    -1,    -1,    -1,    -1,    -1,
       1,    41,    33,    -1,     5,     6,     7,     8,    -1,    -1,
      41,    12,    -1,     1,    -1,    33,    -1,     5,     6,     7,
       8,    -1,     1,    41,    12,    -1,     5,     6,     7,     8,
      -1,     1,    33,    12,    -1,     5,     6,     7,     8,    -1,
      41,    -1,    12,    -1,     1,    33,    -1,    -1,     5,     6,
       7,     8,    -1,    41,    33,    12,    -1,    -1,    -1,    -1,
      -1,     1,    41,    33,    -1,     5,     6,     7,     8,    -1,
      -1,    41,    12,    -1,     1,    -1,    33,    -1,     5,     6,
       7,     8,    -1,     1,    41,    12,    -1,     5,     6,     7,
       8,    -1,     1,    33,    12,    -1,     5,     6,     7,     8,
      -1,    41,    -1,    12,    -1,     1,    33,    -1,    -1,     5,
       6,     7,     8,    -1,    41,    33,    12,    -1,    -1,    -1,
      -1,    -1,     1,    41,    33,    -1,     5,     6,     7,     8,
      -1,    -1,    41,    12,    -1,     1,    -1,    33,    -1,     5,
       6,     7,     8,    -1,     1,    41,    12,    -1,     5,     6,
       7,     8,    -1,     1,    33,    12,    -1,     5,     6,     7,
       8,    -1,    41,    -1,    12,    -1,     1,    33,    -1,    -1,
       5,     6,     7,     8,    -1,    41,    33,    12,    -1,    -1,
      -1,    -1,    -1,     1,    41,    33,    -1,     5,     6,     7,
       8,    -1,    -1,    41,    12,     8,     9,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    20,    21,    22,
      23,    24,    25,    -1,    -1,    33,    -1,    30,    31,    32,
       8,     9,    -1,    41,    -1,    -1,    -1,    40,    41,    42,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    42,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
       8,     9,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    42,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
       8,     9,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    42,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
       8,     9,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    42,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
       8,     9,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    42,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
       8,     9,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    42,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
       8,     9,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    42,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
       8,     9,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    42,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
       8,     9,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    42,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
       8,     9,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    42,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    42,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
      -1,    34,     8,     9,    -1,    -1,    39,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    30,    31,    32,    -1,    34,     8,
       9,    -1,    -1,    39,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,
      39,    -1,    41,    -1,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,
       9,    -1,    -1,    -1,    -1,    39,    -1,    41,    -1,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,     8,
       9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    20,    21,    22,    23,    24,    25,    -1,    -1,     8,
       9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    20,    21,    22,    23,    24,    25,    -1,    -1,     8,
       9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    20,    21,    22,    23,    24,    25,    -1,    -1,     8,
       9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    20,    21,    22,    23,    24,    25,    -1,    -1,     8,
       9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    20,    21,    22,    23,    24,    25,    -1,    -1,     8,
       9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    20,    21,    22,    23,    24,    25,    -1,    -1,     8,
       9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    20,    21,    22,    23,    24,    25,    -1,    -1,     8,
       9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    20,    21,    22,    23,    24,    25,    -1,    -1,     8,
       9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    20,    21,    22,    23,    24,    25,    -1,    -1,     8,
       9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    20,    21,    22,    23,    24,    25,    -1,    -1,     8,
       9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    20,    21,    22,    23,    24,    25,    -1,    -1,     8,
       9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    20,    21,    22,    23,    24,    25,    -1,    -1,     8,
       9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    20,    21,    22,    23,    24,    25,    -1,    -1,     8,
       9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    20,    21,    22,    23,    24,    25,    -1,    -1,     8,
       9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    20,    21,    22,    23,    24,    25,    -1,    -1,     8,
       9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    20,    21,    22,    23,    24,    25,    -1,    -1,     8,
       9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    20,    21,    22,    23,    24,    25,    -1,    -1,     8,
       9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    20,    21,    22,    23,    24,    25,    -1,    -1,     8,
      -1,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    20,    21,    22,    23,    24,    25,    -1,    -1,     8,
       9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    20,    21,    22,    23,    24,    25,     8,     9,    -1,
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
      25,     8,     9,    -1,    -1,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    25,     8,
       9,    -1,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    23,    24,    25,     8,     9,    -1,
      -1,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    23,    24,    25,     8,     9,    -1,    -1,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,     8,    -1,    -1,    -1,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      25,     8,    -1,    -1,    -1,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    30,    31,    32,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,    20,
      21,    22,    23,    24,    25,    -1,    40,    -1,    42,    30,
      31,    32,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    42,    30,    31,    32,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    42,    30,    31,    32,    20,    21,
      22,    23,    24,    25,    39,    -1,    -1,    -1,    30,    31,
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
      42,    43,    52,    52,    40,    52,    52,     1,     6,     7,
       8,    12,    17,    18,    19,    26,    27,    28,    29,    33,
      35,    36,    37,    38,    41,    49,    53,    54,    55,    56,
      57,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    78,    79,    81,    82,
      51,    41,    41,    41,    41,    41,    41,    41,    41,    74,
      78,    41,    41,    41,     1,    39,    63,    78,     1,    63,
      44,    53,    39,    39,    39,    30,    31,    32,    20,    21,
      22,    23,    24,    25,    75,    79,     9,    80,    34,    41,
      74,    78,    42,     1,    63,    64,    78,     1,    78,     1,
      67,    68,     1,    65,    78,     1,    67,     1,    67,     1,
      10,    63,    76,     1,    63,    76,     1,    78,    39,    42,
      42,    65,    78,    69,    70,    71,    72,    73,    63,     1,
      42,    63,    77,    42,    42,    39,    30,    30,    42,    42,
      42,    42,    42,    42,    42,    42,    42,    42,    42,    42,
      42,    42,    42,    42,    42,    40,    42,    40,    42,     1,
      52,    54,    58,    59,    63,     1,    65,    78,    39,    39,
      39,    39,    39,    39,    39,    39,     1,     1,    77,     4,
      39,    42,    42,    42,    59,    64,     1,    59,    59,    42,
      52,    13,    14,    15,    16,     5,     5,    39,     5,     5,
       5,     6,     7,    12,    26,    28,    29,    33,    41,    65,
      67,    68,    69,    70,    71,    72,    73,    74,    78,    79,
      81,     8,     5,     5,     5,     5,     6,     7,    12,    33,
      41,    69,    70,    71,    72,    73,    74,    78,    79,    81,
       5,    41,     5,    26,    28,    29,     5,     6,     7,    12,
      26,    28,    29,    33,    41,    65,    67,    68,    69,    70,
      71,    72,    73,    74,    78,    79,    81,    39,    41,    30,
      31,    41,     1,    17,    18,    19,    35,    36,    37,    38,
      43,    49,    55,    56,    57,    60,    61,    62,    63,    64,
      66,    82,    43,    52,    54,    78,    41,    41,    41,     5,
      74,    78,     1,    63,    31,    32,    75,    79,    80,    41,
      74,     5,    74,    78,     1,    63,    32,    75,    79,    80,
      41,    74,    42,    41,    41,    41,    41,    41,    41,     5,
      74,    78,     1,    63,    30,    31,    32,    75,    79,    80,
      41,    74,    42,     5,    26,    28,    29,    65,    78,     1,
      69,    42,    39,    41,    41,    41,    41,    41,    41,    39,
      63,    53,    39,    39,    39,    78,    53,    34,     1,    67,
       1,    67,     1,    67,    42,    42,     1,    69,    70,    71,
      72,    73,     1,    42,    77,    42,    42,    70,    71,    72,
      73,     1,    42,    77,     1,    67,     1,    67,     1,    67,
       1,    67,     1,    67,     1,    67,    42,    42,     5,    26,
      28,    29,    65,    78,     1,    69,    70,    71,    72,    73,
       1,    42,    77,    41,    41,    41,     1,    63,    64,     1,
      78,     1,    63,    76,     1,    63,    76,     1,    78,    39,
      44,    39,    44,    63,    42,    42,    42,    42,    42,    42,
      42,    42,    42,    42,    42,    42,    42,    42,    42,    42,
      42,    42,    42,    42,    42,    42,    41,    41,    41,    42,
      42,     1,    67,     1,    67,     1,    67,    42,    42,    39,
      30,    30,    42,    42,    42,    42,    42,    42,    42,    42,
       1,    67,     1,    67,     1,    67,    42,    42,    42,    42,
      42,    42,     1,    58,    59,    63,     1,    65,    78,    39,
      39,    39,    39,    39,    39,    39,    39,    42,    42,    42,
      42,    42,    42,     4,    39,    42,    42,    42,    59,    64,
       1,    59,    59,    42,    52
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    48,    48,    49,    49,    50,
      50,    50,    50,    51,    51,    51,    52,    53,    53,    54,
      54,    54,    54,    54,    54,    54,    54,    55,    55,    55,
      55,    55,    55,    55,    55,    56,    57,    57,    58,    58,
      59,    59,    60,    60,    61,    61,    61,    61,    62,    63,
      63,    64,    65,    65,    65,    65,    65,    65,    66,    66,
      66,    67,    67,    68,    68,    68,    69,    69,    70,    70,
      71,    71,    72,    72,    73,    73,    73,    73,    73,    73,
      73,    74,    74,    74,    74,    75,    75,    75,    75,    75,
      75,    76,    77,    77,    77,    78,    79,    80,    81,    81,
      81,    82,    82,    82,    82
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     2,     6,
       6,     6,     6,     4,     2,     0,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     5,     5,     5,
       5,     5,     5,     5,     5,     9,     5,     5,     1,     3,
       1,     1,     2,     3,     7,     7,     2,     7,     2,     1,
       1,     3,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     3,     3,     3,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     2,     2,     4,     3,     4,
       3,     1,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
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
#line 87 "sintatic/sintatic.y"
                         {
            (yyval.typeNode) = buildNode("program");
            (yyval.typeNode)->childNode = (yyvsp[0].typeNode);
            origin = (yyval.typeNode);
        }
#line 3067 "sintatic.tab.c"
    break;

  case 3: /* list_declaration: list_declaration main_declaration  */
#line 95 "sintatic/sintatic.y"
                                          {
            (yyvsp[-1].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3075 "sintatic.tab.c"
    break;

  case 7: /* var_declaration: tipos var SEMICOLON  */
#line 107 "sintatic/sintatic.y"
                            {
            (yyval.typeNode) = buildNode("var_declaration");
            (yyval.typeNode)->childNode = (yyvsp[-2].typeNode); 
            (yyvsp[-2].typeNode)->brotherNode = (yyvsp[-1].typeNode);  
         
            //char *id, char *typ
            insertItem(&table, (yyvsp[-2].typeNode)->value, (yyvsp[-1].typeNode)->value);
        }
#line 3088 "sintatic.tab.c"
    break;

  case 8: /* var_declaration: error SEMICOLON  */
#line 115 "sintatic/sintatic.y"
                          { (yyval.typeNode) = buildNode("SINTATIC ERR");}
#line 3094 "sintatic.tab.c"
    break;

  case 9: /* func_declaration: tipos var OPEN_PAREN list_args CLS_PAREN blockStmt  */
#line 119 "sintatic/sintatic.y"
                                                           {
            (yyval.typeNode) = buildNode("func_declaration");   
            (yyval.typeNode)->childNode = (yyvsp[-5].typeNode);
            (yyvsp[-5].typeNode)->brotherNode = (yyvsp[-4].typeNode);
            (yyvsp[-4].typeNode)->brotherNode = (yyvsp[-2].typeNode);
            (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);

            insertItem(&table, (yyvsp[-5].typeNode)->value, (yyvsp[-4].typeNode)->value);
        }
#line 3108 "sintatic.tab.c"
    break;

  case 10: /* func_declaration: tipos MAIN OPEN_PAREN list_args CLS_PAREN blockStmt  */
#line 128 "sintatic/sintatic.y"
                                                                           {
            (yyval.typeNode) = buildNode("func_declaration_main");   
            (yyval.typeNode)->childNode = (yyvsp[-5].typeNode);
            (yyvsp[-5].typeNode)->brotherNode = (yyvsp[-2].typeNode);
            (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);

            insertItem(&table, (yyvsp[-5].typeNode)->value, "MAIN");
        }
#line 3121 "sintatic.tab.c"
    break;

  case 11: /* func_declaration: tipos var OPEN_PAREN error CLS_PAREN blockStmt  */
#line 136 "sintatic/sintatic.y"
                                                         {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3129 "sintatic.tab.c"
    break;

  case 12: /* func_declaration: tipos MAIN OPEN_PAREN error CLS_PAREN blockStmt  */
#line 139 "sintatic/sintatic.y"
                                                                 {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3137 "sintatic.tab.c"
    break;

  case 13: /* list_args: tipos var COMMA list_args  */
#line 146 "sintatic/sintatic.y"
                                  {
                (yyval.typeNode) = buildNode("list_args");  
                (yyval.typeNode)->childNode = (yyvsp[-3].typeNode);
                (yyvsp[-3].typeNode)->brotherNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);

                insertItem(&table, (yyvsp[-3].typeNode)->value, (yyvsp[-2].typeNode)->value);
        }
#line 3150 "sintatic.tab.c"
    break;

  case 14: /* list_args: tipos var  */
#line 154 "sintatic/sintatic.y"
                    {
                (yyval.typeNode) = buildNode("list_args"); 
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
                (yyvsp[-1].typeNode)->brotherNode = (yyvsp[0].typeNode);

                insertItem(&table, (yyvsp[-1].typeNode)->value, (yyvsp[0].typeNode)->value);
        }
#line 3162 "sintatic.tab.c"
    break;

  case 15: /* list_args: %empty  */
#line 161 "sintatic/sintatic.y"
                 {
                (yyval.typeNode) = buildNode("no_args"); 
        }
#line 3170 "sintatic.tab.c"
    break;

  case 16: /* blockStmt: OP_CUR_BRACKET list_statements CLS_CUR_BRACKET  */
#line 167 "sintatic/sintatic.y"
                                                       {
                (yyval.typeNode) = (yyvsp[-1].typeNode);
        }
#line 3178 "sintatic.tab.c"
    break;

  case 17: /* list_statements: stmt list_statements  */
#line 173 "sintatic/sintatic.y"
                             {
               (yyval.typeNode) = (yyvsp[-1].typeNode);
               (yyvsp[-1].typeNode)->brotherNode = (yyvsp[0].typeNode); 
        }
#line 3187 "sintatic.tab.c"
    break;

  case 27: /* input_output_expr: CMD_WRITE OPEN_PAREN str_expr CLS_PAREN SEMICOLON  */
#line 192 "sintatic/sintatic.y"
                                                          {
                (yyval.typeNode) = buildNode("CMD_WRITE_STR");
        }
#line 3195 "sintatic.tab.c"
    break;

  case 28: /* input_output_expr: CMD_WRITE OPEN_PAREN expr CLS_PAREN SEMICOLON  */
#line 195 "sintatic/sintatic.y"
                                                        {
                (yyval.typeNode) = buildNode("CMD_WRITE_EXPR");
        }
#line 3203 "sintatic.tab.c"
    break;

  case 29: /* input_output_expr: CMD_WRITELN OPEN_PAREN str_expr CLS_PAREN SEMICOLON  */
#line 198 "sintatic/sintatic.y"
                                                              {
                (yyval.typeNode) = buildNode("CMD_WRITELN_STR");
        }
#line 3211 "sintatic.tab.c"
    break;

  case 30: /* input_output_expr: CMD_WRITELN OPEN_PAREN expr CLS_PAREN SEMICOLON  */
#line 201 "sintatic/sintatic.y"
                                                          {
                (yyval.typeNode) = buildNode("CMD_WRITELN_EXPR");
        }
#line 3219 "sintatic.tab.c"
    break;

  case 31: /* input_output_expr: CMD_READ OPEN_PAREN var CLS_PAREN SEMICOLON  */
#line 204 "sintatic/sintatic.y"
                                                      {
                (yyval.typeNode) = buildNode("CMD_READ_VAR");
        }
#line 3227 "sintatic.tab.c"
    break;

  case 32: /* input_output_expr: CMD_WRITE OPEN_PAREN error CLS_PAREN SEMICOLON  */
#line 207 "sintatic/sintatic.y"
                                                         {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3235 "sintatic.tab.c"
    break;

  case 33: /* input_output_expr: CMD_WRITELN OPEN_PAREN error CLS_PAREN SEMICOLON  */
#line 210 "sintatic/sintatic.y"
                                                           {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3243 "sintatic.tab.c"
    break;

  case 34: /* input_output_expr: CMD_READ OPEN_PAREN error CLS_PAREN SEMICOLON  */
#line 213 "sintatic/sintatic.y"
                                                        {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3251 "sintatic.tab.c"
    break;

  case 35: /* iteration_expr: CMD_FOR OPEN_PAREN assign SEMICOLON expr SEMICOLON assign CLS_PAREN blockStmt  */
#line 219 "sintatic/sintatic.y"
                                                                                      {     
             (yyval.typeNode) = buildNode("for");
             (yyval.typeNode)->childNode = (yyvsp[-6].typeNode);
             (yyvsp[-6].typeNode)->brotherNode = (yyvsp[-4].typeNode);
             (yyvsp[-4].typeNode)->brotherNode = (yyvsp[-2].typeNode);
             (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);  
        
        }
#line 3264 "sintatic.tab.c"
    break;

  case 36: /* condition_expr: CMD_IF OPEN_PAREN expr CLS_PAREN block_cond  */
#line 230 "sintatic/sintatic.y"
                                                     {
                (yyval.typeNode) = buildNode("if");
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3274 "sintatic.tab.c"
    break;

  case 37: /* condition_expr: CMD_IF OPEN_PAREN error CLS_PAREN error  */
#line 235 "sintatic/sintatic.y"
                                                  {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3282 "sintatic.tab.c"
    break;

  case 39: /* block_cond: simple_complex_block_stmt CMD_ELSE simple_complex_block_stmt  */
#line 242 "sintatic/sintatic.y"
                                                                       {
                (yyval.typeNode) = buildNode("if_stmt");
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);

                (yyval.typeNode)->brotherNode = buildNode("else");
                (yyval.typeNode)->brotherNode->childNode = (yyvsp[0].typeNode);
        }
#line 3294 "sintatic.tab.c"
    break;

  case 42: /* return_stmt: CMD_RETURN SEMICOLON  */
#line 257 "sintatic/sintatic.y"
                             {
              (yyval.typeNode) = buildNode("return");  
        }
#line 3302 "sintatic.tab.c"
    break;

  case 43: /* return_stmt: CMD_RETURN expr SEMICOLON  */
#line 260 "sintatic/sintatic.y"
                                     {
                (yyval.typeNode) = buildNode("return");  
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3311 "sintatic.tab.c"
    break;

  case 44: /* set_stmt: CMD_FORALL OPEN_PAREN var IN_OP func_expr CLS_PAREN simple_complex_block_stmt  */
#line 267 "sintatic/sintatic.y"
                                                                                      {
                (yyval.typeNode) = buildNode("forall");  
                (yyval.typeNode)->childNode = (yyvsp[-4].typeNode);
                (yyvsp[-4].typeNode)->brotherNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3322 "sintatic.tab.c"
    break;

  case 45: /* set_stmt: CMD_FORALL OPEN_PAREN var IN_OP var CLS_PAREN simple_complex_block_stmt  */
#line 273 "sintatic/sintatic.y"
                                                                                  {
                (yyval.typeNode) = buildNode("forall");  
                (yyval.typeNode)->childNode = (yyvsp[-4].typeNode);
                (yyvsp[-4].typeNode)->brotherNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3333 "sintatic.tab.c"
    break;

  case 47: /* set_stmt: CMD_FORALL OPEN_PAREN error IN_OP error CLS_PAREN error  */
#line 280 "sintatic/sintatic.y"
                                                                  {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3341 "sintatic.tab.c"
    break;

  case 51: /* assign: var ATRIBUTION expr  */
#line 294 "sintatic/sintatic.y"
                            {
              (yyval.typeNode) = buildNode(" = ");
              (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3351 "sintatic.tab.c"
    break;

  case 52: /* func_expr: ADD_FUNC OPEN_PAREN func_in_expr CLS_PAREN  */
#line 302 "sintatic/sintatic.y"
                                                   {
                (yyval.typeNode) = buildNode(" add ");
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3360 "sintatic.tab.c"
    break;

  case 53: /* func_expr: REMOVE_FUNC OPEN_PAREN func_in_expr CLS_PAREN  */
#line 306 "sintatic/sintatic.y"
                                                        {
                (yyval.typeNode) = buildNode(" remove ");
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3369 "sintatic.tab.c"
    break;

  case 54: /* func_expr: EXIST_FUNC OPEN_PAREN func_in_expr CLS_PAREN  */
#line 310 "sintatic/sintatic.y"
                                                       {
                (yyval.typeNode) = buildNode(" exist ");
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3378 "sintatic.tab.c"
    break;

  case 55: /* func_expr: ADD_FUNC OPEN_PAREN error CLS_PAREN  */
#line 314 "sintatic/sintatic.y"
                                              {
             (yyval.typeNode) = buildNode("SINTATIC ERR!");   
        }
#line 3386 "sintatic.tab.c"
    break;

  case 56: /* func_expr: REMOVE_FUNC OPEN_PAREN error CLS_PAREN  */
#line 317 "sintatic/sintatic.y"
                                                 {
             (yyval.typeNode) = buildNode("SINTATIC ERR!");   
        }
#line 3394 "sintatic.tab.c"
    break;

  case 57: /* func_expr: EXIST_FUNC OPEN_PAREN error CLS_PAREN  */
#line 320 "sintatic/sintatic.y"
                                                {
             (yyval.typeNode) = buildNode("SINTATIC ERR!");    
        }
#line 3402 "sintatic.tab.c"
    break;

  case 58: /* is_set_expr: IS_SET_FUNC OPEN_PAREN var CLS_PAREN  */
#line 326 "sintatic/sintatic.y"
                                             {
              (yyval.typeNode) = buildNode(" is_set ");
              (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3411 "sintatic.tab.c"
    break;

  case 59: /* is_set_expr: IS_SET_FUNC OPEN_PAREN func_expr CLS_PAREN  */
#line 330 "sintatic/sintatic.y"
                                                     {
                (yyval.typeNode) = buildNode(" is_set ");
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3420 "sintatic.tab.c"
    break;

  case 60: /* is_set_expr: IS_SET_FUNC OPEN_PAREN error CLS_PAREN  */
#line 334 "sintatic/sintatic.y"
                                                 {
             (yyval.typeNode) = buildNode("SINTATIC ERR!");    
        }
#line 3428 "sintatic.tab.c"
    break;

  case 61: /* func_in_expr: op_or_expr IN_OP var  */
#line 339 "sintatic/sintatic.y"
                             {
                (yyval.typeNode) = buildNode(" IN ");
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3438 "sintatic.tab.c"
    break;

  case 62: /* func_in_expr: op_or_expr IN_OP func_expr  */
#line 344 "sintatic/sintatic.y"
                                     {
                (yyval.typeNode) = buildNode(" IN ");
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3448 "sintatic.tab.c"
    break;

  case 63: /* op_or_expr: op_or_expr OP_OR op_and_expr  */
#line 352 "sintatic/sintatic.y"
                                     {
              (yyval.typeNode) = buildNode("or");
              (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3458 "sintatic.tab.c"
    break;

  case 66: /* op_and_expr: op_and_expr OP_AND logical_expr  */
#line 362 "sintatic/sintatic.y"
                                        {
              (yyval.typeNode) = buildNode("and");
              (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);  
        }
#line 3468 "sintatic.tab.c"
    break;

  case 68: /* logical_expr: logical_expr logical_ops arithmetic_expr  */
#line 371 "sintatic/sintatic.y"
                                                {
             (yyval.typeNode) = (yyvsp[-1].typeNode);
             (yyvsp[-1].typeNode)->childNode = (yyvsp[-2].typeNode); 
             (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode); 
       }
#line 3478 "sintatic.tab.c"
    break;

  case 70: /* arithmetic_expr: arithmetic_expr adds_op mult_expr  */
#line 380 "sintatic/sintatic.y"
                                          {
              (yyval.typeNode) = (yyvsp[-1].typeNode);
              (yyvsp[-1].typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3488 "sintatic.tab.c"
    break;

  case 72: /* mult_expr: mult_expr mult_ops first_term  */
#line 389 "sintatic/sintatic.y"
                                      {
              (yyval.typeNode) = (yyvsp[-1].typeNode);
              (yyvsp[-1].typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3498 "sintatic.tab.c"
    break;

  case 75: /* first_term: OP_NEG term  */
#line 399 "sintatic/sintatic.y"
                      {
              (yyval.typeNode) = buildNode(" ! ");
              (yyval.typeNode)->childNode = (yyvsp[0].typeNode);
        }
#line 3507 "sintatic.tab.c"
    break;

  case 76: /* first_term: adds_op term  */
#line 403 "sintatic/sintatic.y"
                       {
              (yyval.typeNode) = (yyvsp[-1].typeNode);
              (yyvsp[-1].typeNode)->childNode = (yyvsp[0].typeNode);
        }
#line 3516 "sintatic.tab.c"
    break;

  case 77: /* first_term: var OPEN_PAREN list_expr CLS_PAREN  */
#line 407 "sintatic/sintatic.y"
                                             {
                (yyval.typeNode) = (yyvsp[-3].typeNode);
                (yyvsp[-3].typeNode)->brotherNode = (yyvsp[-1].typeNode);
        }
#line 3525 "sintatic.tab.c"
    break;

  case 79: /* first_term: var OPEN_PAREN error CLS_PAREN  */
#line 412 "sintatic/sintatic.y"
                                         {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3533 "sintatic.tab.c"
    break;

  case 80: /* first_term: error OPEN_PAREN CLS_PAREN  */
#line 415 "sintatic/sintatic.y"
                                      {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3541 "sintatic.tab.c"
    break;

  case 83: /* term: OPEN_PAREN expr CLS_PAREN  */
#line 423 "sintatic/sintatic.y"
                                    {
                (yyval.typeNode) = (yyvsp[-1].typeNode);
        }
#line 3549 "sintatic.tab.c"
    break;

  case 84: /* term: OPEN_PAREN error CLS_PAREN  */
#line 426 "sintatic/sintatic.y"
                                      {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3557 "sintatic.tab.c"
    break;

  case 85: /* logical_ops: LT_OP  */
#line 432 "sintatic/sintatic.y"
              {
                (yyval.typeNode) = buildNode("LT_OP");
        }
#line 3565 "sintatic.tab.c"
    break;

  case 86: /* logical_ops: LTE_OP  */
#line 435 "sintatic/sintatic.y"
                  {
                (yyval.typeNode) = buildNode("LTE_OP");
        }
#line 3573 "sintatic.tab.c"
    break;

  case 87: /* logical_ops: GT_OP  */
#line 438 "sintatic/sintatic.y"
                 {
                (yyval.typeNode) = buildNode("GT_OP");
        }
#line 3581 "sintatic.tab.c"
    break;

  case 88: /* logical_ops: GTE_OP  */
#line 441 "sintatic/sintatic.y"
                  {
                (yyval.typeNode) = buildNode("GTE_OP");
        }
#line 3589 "sintatic.tab.c"
    break;

  case 89: /* logical_ops: NEQ_OP  */
#line 444 "sintatic/sintatic.y"
                  {
                (yyval.typeNode) = buildNode("NEQ_OP");
        }
#line 3597 "sintatic.tab.c"
    break;

  case 90: /* logical_ops: EQUAL_OP  */
#line 447 "sintatic/sintatic.y"
                    {
                (yyval.typeNode) = buildNode("EQUAL_OP");
        }
#line 3605 "sintatic.tab.c"
    break;

  case 91: /* str_expr: STRING  */
#line 453 "sintatic/sintatic.y"
               {
            (yyval.typeNode) = buildNode((yyvsp[0].sval));
            free((yyvsp[0].sval));
        }
#line 3614 "sintatic.tab.c"
    break;

  case 94: /* list_expr: error COMMA error  */
#line 462 "sintatic/sintatic.y"
                            {
             (yyval.typeNode) = buildNode("SINTATIC ERR!");   
        }
#line 3622 "sintatic.tab.c"
    break;

  case 95: /* var: ID  */
#line 468 "sintatic/sintatic.y"
         {
            (yyval.typeNode) = buildNode((yyvsp[0].sval));
            free((yyvsp[0].sval));
       }
#line 3631 "sintatic.tab.c"
    break;

  case 96: /* adds_op: ADD_OP  */
#line 475 "sintatic/sintatic.y"
             {
            (yyval.typeNode) = buildNode((yyvsp[0].sval)); 
            free((yyvsp[0].sval)); 
      }
#line 3640 "sintatic.tab.c"
    break;

  case 97: /* mult_ops: MULT_OP  */
#line 482 "sintatic/sintatic.y"
              {
            (yyval.typeNode) = buildNode((yyvsp[0].sval)); 
            free((yyvsp[0].sval));  
      }
#line 3649 "sintatic.tab.c"
    break;

  case 98: /* num_tipos: FLOAT  */
#line 490 "sintatic/sintatic.y"
              {
              (yyval.typeNode) = buildNode((yyvsp[0].sval));
              free((yyvsp[0].sval));
        }
#line 3658 "sintatic.tab.c"
    break;

  case 99: /* num_tipos: INT  */
#line 494 "sintatic/sintatic.y"
              {
              (yyval.typeNode) = buildNode((yyvsp[0].sval));
              free((yyvsp[0].sval));
        }
#line 3667 "sintatic.tab.c"
    break;

  case 100: /* num_tipos: EMPTY  */
#line 498 "sintatic/sintatic.y"
                {
              (yyval.typeNode) = buildNode("EMPTY");
        }
#line 3675 "sintatic.tab.c"
    break;

  case 101: /* tipos: TYPE_INT  */
#line 504 "sintatic/sintatic.y"
                 {
             (yyval.typeNode) = buildNode("TYPE_INT");
        }
#line 3683 "sintatic.tab.c"
    break;

  case 102: /* tipos: TYPE_FLOAT  */
#line 507 "sintatic/sintatic.y"
                     {
              (yyval.typeNode) = buildNode("TYPE_FLOAT");
        }
#line 3691 "sintatic.tab.c"
    break;

  case 103: /* tipos: TYPE_SET  */
#line 510 "sintatic/sintatic.y"
                    {
              (yyval.typeNode) = buildNode("TYPE_SET");
        }
#line 3699 "sintatic.tab.c"
    break;

  case 104: /* tipos: TYPE_ELEM  */
#line 513 "sintatic/sintatic.y"
                    {
             (yyval.typeNode) = buildNode("TYPE_ELEM");
        }
#line 3707 "sintatic.tab.c"
    break;


#line 3711 "sintatic.tab.c"

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

#line 517 "sintatic/sintatic.y"



int yyerror(const char* errormsg) {
  fprintf(stderr, "%s at line:%d, column:%d,\n", errormsg, yylval.token.line, yylval.token.column);
  return 0;
}

int main(int argc, char ** argv) {

    yyparse();

    showTable(table);
    showTree(origin, 0);

    clearTree(origin);
    freeTable(table);

    yylex_destroy();
    return 0;
}
