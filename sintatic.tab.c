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

  extern int yylex();
  extern int yylex_destroy();
  extern void yyerror(const char *);
  
//   extern FILE *yyin;
  int error = 0;
//   char tipo[100];

  TreeNodes* raiz;

#line 89 "sintatic.tab.c"

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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5943

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  454

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
       0,    88,    88,    96,    99,   103,   104,   105,   109,   124,
     131,   140,   146,   151,   157,   160,   164,   168,   173,   174,
     175,   176,   177,   178,   179,   181,   185,   188,   191,   194,
     197,   203,   215,   223,   224,   232,   233,   237,   240,   247,
     248,   249,   252,   256,   257,   261,   269,   270,   271,   275,
     276,   279,   280,   284,   289,   290,   294,   299,   303,   308,
     312,   317,   321,   326,   330,   331,   335,   339,   340,   344,
     345,   346,   351,   354,   357,   360,   363,   366,   372,   378,
     379,   383,   389,   395,   402,   405,   408,   414,   417,   420,
     423
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

#define YYPACT_NINF (-183)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-91)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     650,   279,   122,   156,   165,   179,    30,   547,   591,   716,
     736,   201,  -183,   807,    44,    24,    73,    46,   864,    46,
       7,    48,    40,     9,    -9,     9,   962,  4259,  1151,    46,
    1185,  1965,  5233,    69,  5253,    59,    81,    93,   102,   115,
     116,   136,   101,   155,   168,   180,   235,  1130,   750,    13,
    1430,  3219,  3259,  3299,  3339,  3379,  3419,   100,   158,   191,
     192,    12,    16,   836,  1313,   971,  5273,  5293,  5313,  1791,
     101,  5333,   231,   202,  1130,   233,   260,   111,    68,   111,
     111,  5353,  5373,  1053,  1053,   268,  3459,   214,  5133,   239,
    1248,   259,  3499,  3539,  3579,   153,   166,   166,   196,   382,
     402,   419,   561,   636,   166,   166,   685,   166,  1218,   510,
    5393,   261,   264,   278,   286,   293,    -8,    74,   294,   297,
       8,   197,   304,   307,   312,   315,   318,   324,  3619,  5413,
      56,   236,  1077,  2125,  5533,  5433,  5453,   296,  5473,   184,
     330,   467,  1218,    68,   354,   357,   362,   366,   367,   383,
     390,   393,   394,   403,  1543,  5493,  1008,  1176,  3659,  1280,
     406,   417,   427,  3699,  3739,  3779,  3819,  3859,   445,   931,
     233,   931,   931,  3899,   449,  3939,  3979,    11,  4019,   466,
     487,   492,   501,   248,  5106,  5513,  5158,  1747,  2066,  4656,
    4681,   485,   488,   496,   119,  1130,   482,   540,   644,   446,
    5872,  5056,  4706,  4731,  4756,  1906,   119,  4781,   843,   470,
     499,   511,  5183,  5553,  5571,  5589,   208,  1130,   162,  5898,
    5841,  5607,  5625,  5643,  5208,   208,  5661,   507,   389,   509,
     512,   516,  1652,  2255,  4281,  4306,   536,   537,   538,   211,
    1130,   256,   220,   313,    98,  1678,  2112,  4331,  4356,  4381,
    1708,   211,  4406,  4059,   157,   111,  1862,   552,   554,   555,
     556,   560,   576,  1513,  4259,  2022,  2171,  2212,  2307,  2348,
    2390,  2441,   542,   580,   582,   231,  4099,  4259,  4139,  4179,
     590,   111,   111,   111,  4806,  4831,  4856,   584,  1064,  1064,
    1064,  1064,  1064,   626,  4881,  5679,  5697,  5715,   588,   111,
     111,   111,   111,   673,  5733,   111,   111,   111,   111,   111,
     111,  4431,  4456,  4481,   598,   429,  1113,  1113,  1113,  1113,
    1113,   798,  4506,   658,   604,   605,   606,   678,   729,   544,
    1130,   233,   260,  1053,  1053,   268,  2482,   614,   612,  2523,
    2564,  2605,   631,   627,  1130,   759,   767,   805,  4906,   578,
    5885,  5081,  4931,  4956,  4981,   641,  5751,  5911,  5859,  5769,
    5787,  5805,   654,   858,   860,   875,   879,   882,   892,  4531,
     333,   662,   663,   664,   423,   483,   500,  1722,  5006,  4556,
    4581,  4606,   681,   111,   111,   111,   686,   688,   705,   696,
     698,   704,   711,   719,  2646,  2687,  2728,  4219,   730,   733,
     738,   739,  5031,  5823,   431,   468,   680,   340,   376,   479,
     111,   111,   111,  4631,   899,   956,   977,   467,  1218,    68,
     708,   743,   753,   756,   757,  1000,  1024,  1026,  1047,  1054,
    1092,  2769,  2810,   761,   770,   771,  2851,  2892,  2933,  2974,
    3015,   514,   642,   703,   467,   233,   467,   467,  3056,   776,
    3097,  3138,    15,  3179
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -183,  -183,  -183,   812,     4,  -183,     6,   -22,   -42,   -18,
    -139,  -128,  -113,   411,  -145,   -96,   -85,   -70,   481,   -61,
      37,   -49,  1194,  1997,  1837,  1677,  1517,  1319,  1065,   295,
    -182,   -78,  -134,    -6,   553,  -154,   811,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,    48,    10,    20,   156,    49,   157,
      51,    52,    53,   158,   159,    54,    55,    56,    57,    58,
      59,    60,    61,   117,   218,   219,   220,   221,   222,   223,
     104,   124,   140,   224,   225,   107,   226,    72
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,    28,   266,    30,     9,    16,   126,    11,    91,    50,
      26,     9,   276,   267,   113,    24,   256,    21,   290,    21,
     168,    69,   -55,   -55,   173,    22,   175,   176,   268,    21,
      12,    29,    50,   -12,   144,    73,    82,   300,   -55,   -55,
      88,   205,   -55,   -55,    69,   269,    95,    96,   292,    23,
     147,   -55,    27,   183,   277,   -43,   270,    90,   264,   179,
     180,   181,   182,   318,    82,    17,   111,   302,   205,   114,
     115,   271,   119,   227,   -82,   -82,   -82,   205,   205,   127,
     273,   -82,    25,   -81,   196,   -81,   -52,   -52,   -13,   131,
      88,    88,   274,   320,   191,   -52,   192,   193,    88,    88,
      74,    88,    88,   250,   254,   255,   185,    31,    32,   174,
     -82,   196,    18,    34,    19,   118,   212,   213,   214,    33,
     196,   196,    75,   215,   284,   188,   189,   -87,   -54,   -54,
     317,   190,   130,   -87,    76,    69,    88,   162,   -54,    92,
     -54,   275,    47,    77,   216,   265,   241,   278,   250,   278,
     278,   279,   217,   279,   279,   178,    78,    79,   228,   355,
     195,   -88,   323,    69,   280,    69,    69,   -88,   290,   362,
     -90,   186,    31,    32,    33,   300,   -90,    80,    34,   229,
     161,   230,   231,   324,   -89,   325,   326,   382,   286,   205,
     -89,   241,   -54,   -54,   299,   318,    83,    93,   292,    42,
     286,   -74,   -74,   -74,   -74,   302,    14,    47,   -74,    84,
     297,   205,    15,   295,   213,   214,   311,   233,   234,   297,
     215,    85,   338,   235,   154,   320,   -80,   -55,   -55,   -74,
     -44,    94,   196,   313,   205,   343,   209,   -74,   210,   148,
     186,    31,    32,    33,   -11,   313,    50,    34,   328,   217,
     -55,   -55,   240,   128,   196,   390,   392,    88,    69,    50,
     -55,    38,   -55,    40,    41,   211,   -51,   -51,    42,   342,
     387,    69,   432,   227,    86,   -51,    47,   196,   266,    -7,
      -7,   129,   205,   205,   205,   205,   205,   250,   -81,   267,
     -81,   327,    -7,    -7,    -7,    -7,   -44,   250,   -44,   448,
     253,   450,   451,   -16,   268,   266,   141,   266,   266,   375,
     250,   250,   250,   250,   250,   250,   267,   142,   267,   267,
     108,   269,    68,   143,   205,   114,   388,   205,   205,   393,
     241,   268,   270,   268,   268,   -45,   145,    81,   205,   146,
     241,    68,   204,   315,   316,    68,   -78,   271,   269,   149,
     269,   269,   374,   -43,   150,   -43,   273,   151,   241,   270,
     152,   270,   270,   -81,   -81,   110,   153,   196,   274,   204,
     196,   196,   155,   -81,   271,   -81,   271,   271,   204,   204,
     -46,   196,   -46,   273,   449,   273,   273,   -72,   -72,   -72,
     -72,    68,    68,   -46,   -72,   274,   -50,   274,   274,    68,
      68,   -49,    68,    68,   249,   -47,   -48,   -73,   -73,   -73,
     -73,    69,    88,   435,   -73,   -72,   -47,   275,   -47,   -81,
     -81,   265,   163,   -72,   -75,   -75,   -75,   -75,   -81,   164,
     453,   -75,   165,   166,   370,   -73,    68,    68,    69,   280,
      69,    69,   167,   -73,   275,   170,   275,   275,   265,   249,
     265,   265,   -75,   -52,   -52,   371,   434,   372,   373,   171,
     -75,   -46,   -46,   -52,    68,   -52,    68,    68,   256,   172,
     -46,   -87,   184,    31,    32,    33,   -54,   -54,   289,    34,
     179,   180,   181,   182,   257,   258,   259,   -79,   -54,   285,
     204,   177,   -88,    38,    39,    40,    41,   -90,   -47,   -47,
      42,   294,   260,   261,   262,   263,   -89,   -47,    47,   -81,
     264,   296,   204,   -51,   -51,   232,   233,   234,    33,   -48,
     304,   -48,   235,   -51,   -44,   -51,   281,    87,    89,   282,
     -53,   -53,   317,   -81,   312,   204,   236,   283,   237,   238,
     -53,   -81,   -53,   239,   -46,   -46,   322,    -2,     1,   -81,
     305,   240,   138,   306,   -46,   112,   -46,   307,    68,    68,
       2,     3,     4,     5,   123,   125,   -76,   -76,   -76,   -76,
     -55,   -55,    68,   -76,   -53,   -53,   299,   308,   309,   310,
      70,   339,   -55,   204,   204,   204,   204,   204,   249,   137,
     139,    -4,    -4,   330,   -76,   331,   332,   333,   249,    70,
     206,   334,   -76,    70,    -4,    -4,    -4,    -4,   -53,   -53,
     289,   249,   249,   249,   249,   249,   249,   335,   105,   340,
     -53,   341,   272,   160,   344,   204,   348,   206,   204,   204,
     356,   232,   233,   234,    33,   139,   206,   206,   235,   204,
     369,   -77,   -77,   -77,   -77,   383,   384,   385,   -77,    70,
      70,     1,   236,   394,   237,   238,   395,    70,    70,   239,
      70,    70,   251,     2,     3,     4,     5,   240,   354,   -77,
     396,   397,   -47,   -47,   254,   288,   287,   -77,   232,   233,
     234,    33,   -47,   402,   -47,   235,   -43,   105,   -81,   -81,
     -83,   -83,   -83,   -83,    70,    70,   403,   -83,   298,   236,
     -81,   237,   238,   410,   411,   412,   239,   251,   -52,   -52,
     -48,   -48,    68,    68,   240,   361,    -6,    -6,   -83,   -48,
     -52,   314,    70,   413,    70,    70,   -83,   418,   417,    -6,
      -6,    -6,    -6,   -48,   -48,   419,    -5,    -5,   420,    68,
     421,    68,    68,   -48,   337,   -48,   422,   436,   206,    -5,
      -5,    -5,    -5,   423,   291,   -24,   -24,   -24,   -24,   -51,
     -51,   424,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     206,   -51,   -45,   301,   139,   -46,   -24,   -24,   -24,   -24,
     -47,   -48,   437,   -24,   139,   -24,   -24,   -24,   -24,   -55,
     -55,   -24,   438,   206,   -24,   439,   440,   -55,   -55,   319,
     445,   399,   139,   232,   233,   234,    33,    -3,    -3,   400,
     235,   386,   446,   447,   389,   391,    70,    70,   452,    13,
      -3,    -3,    -3,    -3,   236,   398,   237,   238,   431,     0,
      70,   239,     0,     0,     0,   -55,   -55,     0,    71,   240,
     381,   206,   206,   206,   206,   206,   251,   401,   -82,   -82,
     -82,   -82,     0,    71,     0,   -82,   251,    71,   207,     0,
       0,    71,     0,     0,    -8,    -8,   -54,   -54,    97,   251,
     251,   251,   251,   251,   251,   -54,   -82,    -8,    -8,    -8,
      -8,    71,     0,   206,   -82,   207,   206,   206,   -55,   -55,
     -55,   -55,     0,     0,   207,   207,     0,   206,   272,   433,
     404,     0,   405,     0,   291,   -55,   -55,    71,    71,   -55,
     -55,   301,   -55,   -55,     0,    71,    71,   406,    71,    71,
     252,   407,   -55,   -55,   408,   272,     0,   272,   272,   -55,
     -55,   319,   276,     0,   409,     0,   184,    31,    32,    33,
       0,   428,     0,    34,   179,   180,   181,   182,    35,    36,
      37,     0,    71,    71,     0,     0,     0,    38,    39,    40,
      41,     0,   -15,   -15,    42,   252,    43,    44,    45,    46,
      70,    70,    47,     0,   277,   -15,   -15,   -15,   -15,   208,
      71,     0,    71,    71,     0,     0,   -55,   -55,     0,     0,
       0,   -59,   -59,   -59,   -59,   -59,   -59,    70,   429,    70,
      70,   -59,   -59,   -59,     0,   207,   207,   -55,   -55,     0,
     -59,     0,   -36,   -36,   -36,   -36,   -36,   207,     0,   430,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   207,     0,
     -55,   -55,     0,     0,   -36,   -36,   -36,   -36,     0,     0,
       0,   -36,   441,   -36,   -36,   -36,   -36,     0,     0,   -36,
     252,   207,   -36,     0,   -55,   -55,   -55,   -55,   187,   188,
     189,    33,   252,   122,     0,   190,   442,     0,   443,   187,
     188,   189,    33,     0,    71,    71,   190,   -46,   -46,   191,
       0,   192,   193,     0,   -47,   -47,   194,     0,    71,   -46,
       0,     0,    67,     0,   195,     0,   -47,   194,     0,   207,
     207,   207,   207,   207,   252,   195,     0,   -53,   -53,    97,
       0,    67,   203,     0,   252,    67,   -53,     0,   232,   233,
     234,    33,   -48,   -48,     0,   235,     0,   252,   252,   252,
     252,   252,   252,     0,   -48,   187,   188,   189,    33,   203,
       0,   207,   190,     0,   207,   207,   239,     0,   203,   203,
       0,   -10,   -10,     0,   240,   207,   191,     0,   192,   193,
       0,    67,    67,   194,   -10,   -10,   -10,   -10,     0,    67,
      67,   195,   136,    67,   248,     0,     0,     0,     0,     0,
     -35,   -35,   -35,   -35,   -35,    -9,    -9,     0,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,     0,     0,    -9,    -9,
      -9,    -9,   -35,   -35,   -35,   -35,    67,    67,     0,   -35,
       0,   -35,   -35,   -35,   -35,     0,     0,   -35,     0,   248,
     -35,     0,     0,   186,    31,    32,    33,     0,    71,    71,
      34,     0,     0,     0,    67,     0,    67,    67,     0,     0,
       0,   197,     0,     0,    38,     0,    40,    41,   -14,   -14,
       0,    42,     0,     0,     0,    71,     0,    71,    71,    47,
     203,   -14,   -14,   -14,   -14,     0,     0,     0,   197,     0,
       0,   116,     0,   120,   121,     0,     0,   197,   197,     0,
       0,     0,   203,     0,   169,   -33,   -33,   -33,   -33,     0,
       0,     0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
       0,     0,     0,   242,     0,   203,   -33,   -33,   -33,   -33,
       0,     0,     0,   -33,     0,   -33,   -33,   -33,   -33,     0,
       0,   -33,     0,     0,   -33,     0,     0,     0,    67,    67,
       0,     0,     0,    98,    99,   100,   101,   102,   103,     0,
       0,     0,    67,   -57,   -57,   -57,    66,     0,   242,     0,
       0,     0,   -57,   203,   203,   203,   203,   353,   248,     0,
       0,     0,     0,     0,     0,    66,   202,   360,   248,    66,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   248,   248,   248,   248,   380,   248,     0,     0,   197,
       0,     0,     0,   202,     0,   203,     0,     0,   203,   203,
       0,     0,   202,   202,     0,     0,     0,     0,     0,   203,
       0,   197,     0,     0,     0,    66,    66,     0,     0,     0,
       0,     0,     0,    66,   135,     0,     0,    66,   247,     0,
       0,     0,     0,     0,   197,   184,    31,    32,    33,     0,
       0,     0,    34,   179,   180,   181,   182,    35,    36,    37,
       0,     0,     0,     0,     0,     0,    38,    39,    40,    41,
      66,    66,     0,    42,     0,    43,    44,    45,    46,     0,
       0,    47,     0,   247,   -17,   345,   346,   347,     0,     0,
       0,     0,    67,    67,     0,     0,     0,   242,    66,     0,
      66,    66,     0,     0,     0,     0,     0,   242,     0,   363,
     364,   365,   366,   367,   368,     0,     0,     0,     0,    67,
       0,    67,    67,     0,   202,   242,     0,     0,   186,    31,
      32,    33,     0,     0,   197,    34,     0,   197,   197,     0,
       0,     0,     0,     0,     0,     0,   202,     0,   197,    38,
       0,    40,    41,     0,    65,     0,    42,     0,   232,   233,
     234,    33,   336,     0,    47,   235,     0,     0,     0,   202,
       0,     0,     0,    65,   201,     0,     0,    65,     0,   236,
       0,   237,   238,     0,     0,     0,   239,   414,   415,   416,
       0,     0,    66,    66,   240,     0,     0,     0,     0,     0,
       0,   201,     0,     0,     0,     0,    66,     0,     0,     0,
     201,   201,     0,     0,   425,   426,   427,   202,   202,   202,
     352,     0,   247,    65,    65,     0,     0,     0,     0,     0,
     359,   134,   247,     0,     0,    65,   246,     0,     0,     0,
       0,     0,     0,     0,     0,   247,   247,   247,   379,     0,
     247,     0,     0,     0,     0,     0,     0,     0,     0,   202,
       0,     0,   202,   202,     0,     0,     0,     0,    65,    65,
     -81,   -81,     0,   202,     0,     0,     0,     0,     0,     0,
       0,   246,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,
       0,     0,   -81,   -81,   -81,     0,    65,     0,    65,    65,
       0,     0,   -81,   -81,   -81,     0,     0,     0,    98,    99,
     100,   101,   102,   103,    64,     0,     0,     0,   -57,   -57,
     -57,     0,   201,     0,     0,     0,   -69,   -69,   -57,     0,
     -57,     0,     0,    64,   200,     0,     0,    64,   -69,   -69,
     -69,   -69,   -69,   -69,   201,     0,    66,    66,   -69,   -69,
     -69,     0,    98,    99,   100,   101,   102,   103,   -69,   321,
     -69,   200,   -56,   -56,   -56,   -81,   -81,   201,     0,     0,
     200,   200,   -56,    66,   -56,    66,    66,   -81,   -81,   -81,
     -81,   -81,   -81,    64,   133,     0,     0,   -81,   -81,   -81,
      65,    65,     0,     0,     0,    64,   245,     0,   -81,   -81,
       0,     0,     0,     0,    65,     0,     0,     0,     0,   -69,
     -69,     0,     0,     0,     0,   201,   201,   351,     0,     0,
     246,   -69,   -69,   -69,   -69,   -69,   -69,   358,    64,    64,
     246,   -69,   -69,   -69,     0,   108,     0,     0,     0,     0,
     -69,   245,   109,   246,   246,   378,     0,     0,   246,     0,
       0,     0,     0,     0,     0,     0,    64,   201,    64,    64,
     201,   201,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   201,     0,     0,    63,     0,   -15,   -15,   -15,   -15,
     -15,     0,   200,     0,   -15,   -15,   -15,   -15,   -15,   -15,
     -15,   -15,     0,    63,   199,     0,     0,    63,   -15,   -15,
     -15,   -15,     0,     0,   200,   -15,     0,   -15,   -15,   -15,
     -15,     0,     0,   -15,     0,     0,   -15,     0,     0,     0,
       0,   199,     0,     0,   -69,   -69,     0,   200,     0,     0,
     199,   199,     0,     0,     0,     0,   -69,   -69,   -69,   -69,
     -69,   -69,     0,   132,    65,    65,   -69,   -69,   -69,     0,
      64,    64,     0,     0,     0,    63,   244,   293,   -69,     0,
       0,     0,     0,     0,    64,     0,     0,     0,     0,     0,
       0,    65,     0,    65,    65,   200,   350,     0,     0,     0,
     245,     0,     0,   -85,   -85,     0,   357,     0,    63,    63,
     245,     0,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   244,     0,   245,   377,   -85,   -85,   -85,   245,     0,
       0,     0,     0,     0,   -85,     0,    63,   200,    63,    63,
     200,   200,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   200,     0,     0,    62,     0,   -24,   -24,   -24,   -24,
     -24,     0,   199,     0,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,     0,    62,   198,     0,     0,    62,   -24,   -24,
     -24,   -24,     0,     0,   199,   -24,     0,   -24,   -24,   -24,
     -24,     0,     0,   -24,     0,     0,   -24,     0,     0,     0,
       0,   198,     0,     0,   -85,   -85,     0,   199,     0,     0,
     198,   198,     0,     0,     0,     0,   -85,   -85,   -85,   -85,
     -85,   -85,   329,     0,    64,    64,   -85,   -85,   -85,     0,
      63,    63,     0,     0,     0,    62,   243,     0,   -85,     0,
       0,     0,     0,     0,    63,     0,     0,     0,     0,     0,
     208,    64,     0,    64,    64,   349,     0,     0,     0,     0,
     244,     0,   -59,   -59,   -59,   -59,   -59,   -59,    62,    62,
     244,     0,   -59,   -59,   -59,    98,    99,   100,   101,   102,
     103,   243,   -59,   376,   -59,   -56,   -56,   -56,   244,     0,
       0,     0,     0,     0,   -56,     0,    62,   199,    62,    62,
     199,   199,     0,     0,     0,   -21,   -21,   -21,   -21,   -21,
       0,   199,     0,   -21,   -21,   -21,   -21,   -21,   -21,   -21,
     -21,     0,   198,     0,     0,     0,     0,   -21,   -21,   -21,
     -21,     0,     0,     0,   -21,     0,   -21,   -21,   -21,   -21,
       0,     0,   -21,     0,   198,   -21,   -18,   -18,   -18,   -18,
     -18,     0,     0,     0,   -18,   -18,   -18,   -18,   -18,   -18,
     -18,   -18,     0,     0,     0,     0,     0,   198,   -18,   -18,
     -18,   -18,     0,     0,     0,   -18,     0,   -18,   -18,   -18,
     -18,     0,     0,   -18,    63,    63,   -18,     0,     0,     0,
      62,    62,     0,   -85,   -85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    62,   -85,   -85,   -85,   -85,   -85,
     -85,    63,     0,    63,    63,   -85,   -85,   -85,     0,     0,
     243,     0,     0,     0,     0,   -85,     0,   -85,     0,     0,
     243,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -19,   -19,   -19,   -19,   -19,     0,     0,   243,   -19,
     -19,   -19,   -19,   -19,   -19,   -19,   -19,   198,     0,     0,
     198,   198,     0,   -19,   -19,   -19,   -19,     0,     0,     0,
     -19,   198,   -19,   -19,   -19,   -19,     0,     0,   -19,     0,
       0,   -19,   -20,   -20,   -20,   -20,   -20,     0,     0,     0,
     -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,     0,     0,
       0,     0,     0,     0,   -20,   -20,   -20,   -20,     0,     0,
       0,   -20,     0,   -20,   -20,   -20,   -20,     0,     0,   -20,
       0,     0,   -20,     0,   -23,   -23,   -23,   -23,   -23,     0,
       0,     0,   -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,
       0,     0,     0,     0,    62,    62,   -23,   -23,   -23,   -23,
       0,     0,     0,   -23,     0,   -23,   -23,   -23,   -23,     0,
       0,   -23,     0,     0,   -23,     0,     0,     0,     0,     0,
       0,    62,     0,    62,    62,   -22,   -22,   -22,   -22,   -22,
       0,     0,     0,   -22,   -22,   -22,   -22,   -22,   -22,   -22,
     -22,     0,     0,     0,     0,     0,     0,   -22,   -22,   -22,
     -22,     0,     0,     0,   -22,     0,   -22,   -22,   -22,   -22,
       0,     0,   -22,     0,     0,   -22,   -37,   -37,   -37,   -37,
     -37,     0,     0,     0,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,     0,     0,     0,     0,     0,     0,   -37,   -37,
     -37,   -37,     0,     0,     0,   -37,     0,   -37,   -37,   -37,
     -37,     0,     0,   -37,     0,     0,   -37,   -42,   -42,   -42,
     -42,   -42,     0,     0,     0,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,     0,     0,     0,     0,     0,     0,   -42,
     -42,   -42,   -42,     0,     0,     0,   -42,     0,   -42,   -42,
     -42,   -42,     0,     0,   -42,     0,     0,   -42,   -25,   -25,
     -25,   -25,   -25,     0,     0,     0,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,   -25,     0,     0,     0,     0,     0,     0,
     -25,   -25,   -25,   -25,     0,     0,     0,   -25,     0,   -25,
     -25,   -25,   -25,     0,     0,   -25,     0,     0,   -25,   -41,
     -41,   -41,   -41,   -41,     0,     0,     0,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,     0,     0,     0,     0,     0,
       0,   -41,   -41,   -41,   -41,     0,     0,     0,   -41,     0,
     -41,   -41,   -41,   -41,     0,     0,   -41,     0,     0,   -41,
     -38,   -38,   -38,   -38,   -38,     0,     0,     0,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,     0,     0,     0,     0,
       0,     0,   -38,   -38,   -38,   -38,     0,     0,     0,   -38,
       0,   -38,   -38,   -38,   -38,     0,     0,   -38,     0,     0,
     -38,   -14,   -14,   -14,   -14,   -14,     0,     0,     0,   -14,
     -14,   -14,   -14,   -14,   -14,   -14,   -14,     0,     0,     0,
       0,     0,     0,   -14,   -14,   -14,   -14,     0,     0,     0,
     -14,     0,   -14,   -14,   -14,   -14,     0,     0,   -14,     0,
       0,   -14,    -8,    -8,    -8,    -8,    -8,     0,     0,     0,
      -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,     0,     0,
       0,     0,     0,     0,    -8,    -8,    -8,    -8,     0,     0,
       0,    -8,     0,    -8,    -8,    -8,    -8,     0,     0,    -8,
       0,     0,    -8,   -32,   -32,   -32,   -32,   -32,     0,     0,
       0,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,
       0,     0,     0,     0,     0,   -32,   -32,   -32,   -32,     0,
       0,     0,   -32,     0,   -32,   -32,   -32,   -32,     0,     0,
     -32,     0,     0,   -32,   444,   -33,   -33,   -33,   -33,     0,
       0,     0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
       0,     0,     0,     0,     0,     0,   -33,   -33,   -33,   -33,
       0,     0,     0,   -33,     0,   -33,   -33,   -33,   -33,     0,
       0,   -33,     0,     0,   -33,   -27,   -27,   -27,   -27,   -27,
       0,     0,     0,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,     0,     0,     0,     0,     0,     0,   -27,   -27,   -27,
     -27,     0,     0,     0,   -27,     0,   -27,   -27,   -27,   -27,
       0,     0,   -27,     0,     0,   -27,   -26,   -26,   -26,   -26,
     -26,     0,     0,     0,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,     0,     0,     0,     0,     0,     0,   -26,   -26,
     -26,   -26,     0,     0,     0,   -26,     0,   -26,   -26,   -26,
     -26,     0,     0,   -26,     0,     0,   -26,   -29,   -29,   -29,
     -29,   -29,     0,     0,     0,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,     0,     0,     0,     0,     0,     0,   -29,
     -29,   -29,   -29,     0,     0,     0,   -29,     0,   -29,   -29,
     -29,   -29,     0,     0,   -29,     0,     0,   -29,   -28,   -28,
     -28,   -28,   -28,     0,     0,     0,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,     0,     0,     0,     0,     0,     0,
     -28,   -28,   -28,   -28,     0,     0,     0,   -28,     0,   -28,
     -28,   -28,   -28,     0,     0,   -28,     0,     0,   -28,   -30,
     -30,   -30,   -30,   -30,     0,     0,     0,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,     0,     0,     0,     0,     0,
       0,   -30,   -30,   -30,   -30,     0,     0,     0,   -30,     0,
     -30,   -30,   -30,   -30,     0,     0,   -30,     0,     0,   -30,
     -34,   -34,   -34,   -34,   -34,     0,     0,     0,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,     0,     0,     0,     0,
       0,     0,   -34,   -34,   -34,   -34,     0,     0,     0,   -34,
       0,   -34,   -34,   -34,   -34,     0,     0,   -34,     0,     0,
     -34,   -39,   -39,   -39,   -39,   -39,     0,     0,     0,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,     0,     0,     0,
       0,     0,     0,   -39,   -39,   -39,   -39,     0,     0,     0,
     -39,     0,   -39,   -39,   -39,   -39,     0,     0,   -39,     0,
       0,   -39,   -40,   -40,   -40,   -40,   -40,     0,     0,     0,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,     0,     0,
       0,     0,     0,     0,   -40,   -40,   -40,   -40,     0,     0,
       0,   -40,     0,   -40,   -40,   -40,   -40,     0,     0,   -40,
       0,     0,   -40,   -31,   -31,   -31,   -31,   -31,     0,     0,
       0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,
       0,     0,     0,     0,     0,   -31,   -31,   -31,   -31,     0,
       0,     0,   -31,     0,   -31,   -31,   -31,   -31,     0,     0,
     -31,     0,     0,   -31,   -21,   -21,   -21,   -21,     0,     0,
       0,   -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,     0,
       0,     0,     0,     0,     0,   -21,   -21,   -21,   -21,     0,
       0,     0,   -21,     0,   -21,   -21,   -21,   -21,     0,     0,
     -21,     0,     0,   -21,   -18,   -18,   -18,   -18,     0,     0,
       0,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,     0,
       0,     0,     0,     0,     0,   -18,   -18,   -18,   -18,     0,
       0,     0,   -18,     0,   -18,   -18,   -18,   -18,     0,     0,
     -18,     0,     0,   -18,   -19,   -19,   -19,   -19,     0,     0,
       0,   -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,     0,
       0,     0,     0,     0,     0,   -19,   -19,   -19,   -19,     0,
       0,     0,   -19,     0,   -19,   -19,   -19,   -19,     0,     0,
     -19,     0,     0,   -19,   -20,   -20,   -20,   -20,     0,     0,
       0,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,     0,
       0,     0,     0,     0,     0,   -20,   -20,   -20,   -20,     0,
       0,     0,   -20,     0,   -20,   -20,   -20,   -20,     0,     0,
     -20,     0,     0,   -20,   -23,   -23,   -23,   -23,     0,     0,
       0,   -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,     0,
       0,     0,     0,     0,     0,   -23,   -23,   -23,   -23,     0,
       0,     0,   -23,     0,   -23,   -23,   -23,   -23,     0,     0,
     -23,     0,     0,   -23,   -22,   -22,   -22,   -22,     0,     0,
       0,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,     0,
       0,     0,     0,     0,     0,   -22,   -22,   -22,   -22,     0,
       0,     0,   -22,     0,   -22,   -22,   -22,   -22,     0,     0,
     -22,     0,     0,   -22,   -37,   -37,   -37,   -37,     0,     0,
       0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,
       0,     0,     0,     0,     0,   -37,   -37,   -37,   -37,     0,
       0,     0,   -37,     0,   -37,   -37,   -37,   -37,     0,     0,
     -37,     0,     0,   -37,   -42,   -42,   -42,   -42,     0,     0,
       0,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,
       0,     0,     0,     0,     0,   -42,   -42,   -42,   -42,     0,
       0,     0,   -42,     0,   -42,   -42,   -42,   -42,     0,     0,
     -42,     0,     0,   -42,   -25,   -25,   -25,   -25,     0,     0,
       0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,     0,
       0,     0,     0,     0,     0,   -25,   -25,   -25,   -25,     0,
       0,     0,   -25,     0,   -25,   -25,   -25,   -25,     0,     0,
     -25,     0,     0,   -25,   -41,   -41,   -41,   -41,     0,     0,
       0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,     0,
       0,     0,     0,     0,     0,   -41,   -41,   -41,   -41,     0,
       0,     0,   -41,     0,   -41,   -41,   -41,   -41,     0,     0,
     -41,     0,     0,   -41,   -38,   -38,   -38,   -38,     0,     0,
       0,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,
       0,     0,     0,     0,     0,   -38,   -38,   -38,   -38,     0,
       0,     0,   -38,     0,   -38,   -38,   -38,   -38,     0,     0,
     -38,     0,     0,   -38,   -32,   -32,   -32,   -32,     0,     0,
       0,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,
       0,     0,     0,     0,     0,   -32,   -32,   -32,   -32,     0,
       0,     0,   -32,     0,   -32,   -32,   -32,   -32,     0,     0,
     -32,     0,     0,   -32,   -27,   -27,   -27,   -27,     0,     0,
       0,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,     0,
       0,     0,     0,     0,     0,   -27,   -27,   -27,   -27,     0,
       0,     0,   -27,     0,   -27,   -27,   -27,   -27,     0,     0,
     -27,     0,     0,   -27,   -26,   -26,   -26,   -26,     0,     0,
       0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,     0,
       0,     0,     0,     0,     0,   -26,   -26,   -26,   -26,     0,
       0,     0,   -26,     0,   -26,   -26,   -26,   -26,     0,     0,
     -26,     0,     0,   -26,   -29,   -29,   -29,   -29,     0,     0,
       0,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,     0,
       0,     0,     0,     0,     0,   -29,   -29,   -29,   -29,     0,
       0,     0,   -29,     0,   -29,   -29,   -29,   -29,     0,     0,
     -29,     0,     0,   -29,   -28,   -28,   -28,   -28,     0,     0,
       0,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,     0,
       0,     0,     0,     0,     0,   -28,   -28,   -28,   -28,     0,
       0,     0,   -28,     0,   -28,   -28,   -28,   -28,     0,     0,
     -28,     0,     0,   -28,   -30,   -30,   -30,   -30,     0,     0,
       0,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,
       0,     0,     0,     0,     0,   -30,   -30,   -30,   -30,     0,
       0,     0,   -30,     0,   -30,   -30,   -30,   -30,     0,     0,
     -30,     0,     0,   -30,   -34,   -34,   -34,   -34,     0,     0,
       0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,
       0,     0,     0,     0,     0,   -34,   -34,   -34,   -34,     0,
       0,     0,   -34,     0,   -34,   -34,   -34,   -34,     0,     0,
     -34,     0,     0,   -34,   -39,   -39,   -39,   -39,     0,     0,
       0,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,     0,
       0,     0,     0,     0,     0,   -39,   -39,   -39,   -39,     0,
       0,     0,   -39,     0,   -39,   -39,   -39,   -39,     0,     0,
     -39,     0,     0,   -39,   -40,   -40,   -40,   -40,     0,     0,
       0,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,     0,
       0,     0,     0,     0,     0,   -40,   -40,   -40,   -40,     0,
       0,     0,   -40,     0,   -40,   -40,   -40,   -40,     0,     0,
     -40,     0,     0,   -40,   -31,   -31,   -31,   -31,     0,     0,
       0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,
       0,     0,     0,     0,     0,   -31,   -31,   -31,   -31,     0,
       0,     0,   -31,     0,   -31,   -31,   -31,   -31,     0,     0,
     -31,     0,     0,   -31,    -8,    -8,    -8,    -8,     0,     0,
       0,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,     0,
       0,     0,     0,     0,     0,    -8,    -8,    -8,    -8,     0,
       0,     0,    -8,     0,    -8,    -8,    -8,    -8,     0,     0,
      -8,     0,     0,    -8,   -15,   -15,   -15,   -15,     0,     0,
       0,   -15,   -15,   -15,   -15,   -15,   -15,   -15,   -15,     0,
       0,     0,     0,     0,     0,   -15,   -15,   -15,   -15,     0,
       0,     0,   -15,     0,   -15,   -15,   -15,   -15,     0,     0,
     -15,     0,     0,   -15,   -36,   -36,   -36,   -36,     0,     0,
       0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,
       0,     0,     0,     0,     0,   -36,   -36,   -36,   -36,     0,
       0,     0,   -36,     0,   -36,   -36,   -36,   -36,     0,     0,
     -36,     0,     0,   -36,   -35,   -35,   -35,   -35,     0,     0,
       0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,
       0,     0,     0,     0,     0,   -35,   -35,   -35,   -35,     0,
       0,     0,   -35,     0,   -35,   -35,   -35,   -35,     0,     0,
     -35,     0,     0,   -35,   -14,   -14,   -14,   -14,     0,     0,
       0,   -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,     0,
       0,     0,     0,     0,     0,   -14,   -14,   -14,   -14,     0,
       0,     0,   -14,     0,   -14,   -14,   -14,   -14,     0,     0,
     -14,     0,     0,   -14,   184,    31,    32,    33,     0,     0,
       0,    34,   179,   180,   181,   182,    35,    36,    37,     0,
       0,     0,     0,     0,     0,    38,    39,    40,    41,   -84,
     -84,     0,    42,     0,    43,    44,    45,    46,     0,     0,
      47,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,
       0,   -84,   -84,   -84,   -86,   -86,     0,     0,     0,     0,
       0,   -84,     0,   -84,     0,     0,   -86,   -86,   -86,   -86,
     -86,   -86,     0,     0,     0,     0,   -86,   -86,   -86,   -61,
     106,     0,     0,     0,     0,     0,   -86,     0,   -86,     0,
       0,   -61,   -61,   -61,   -61,   -61,   -61,     0,     0,     0,
       0,   -61,   -61,   -61,   -63,   -63,     0,     0,     0,     0,
       0,   -61,     0,   -61,     0,     0,   -63,   -63,   -63,   -63,
     -63,   -63,     0,     0,     0,     0,   -63,   -63,   -63,   -64,
     -64,     0,     0,     0,     0,     0,   -63,     0,   -63,     0,
       0,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,
       0,   -64,   -64,   -64,   -70,   -70,     0,     0,     0,     0,
       0,   -64,     0,   -64,     0,     0,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,     0,   -70,   -70,   -70,   -81,
     -81,     0,     0,     0,     0,     0,   -70,     0,   -70,     0,
       0,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,
       0,   -81,   -81,   -81,   -65,   -65,     0,     0,     0,     0,
       0,   -81,     0,   -81,     0,     0,   -65,   -65,   -65,   -65,
     -65,   -65,     0,     0,     0,     0,   -65,   -65,   -65,   -69,
     -69,     0,     0,     0,     0,     0,   -65,     0,   -65,     0,
       0,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,
       0,   -69,   -69,   -69,   -66,   -66,     0,     0,     0,     0,
       0,   -69,     0,   -69,     0,     0,   -66,   -66,   -66,   -66,
     -66,   -66,     0,     0,     0,     0,   -66,   -66,   -66,   -71,
     -71,     0,     0,     0,     0,     0,   -66,     0,   -66,     0,
       0,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,
       0,   -71,   -71,   -71,   -60,   106,     0,     0,     0,     0,
       0,   -71,     0,   -71,     0,     0,   -60,   -60,   -60,   -60,
     -60,   -60,     0,     0,     0,     0,   -60,   -60,   -60,   -62,
     -62,     0,     0,     0,     0,     0,   -60,     0,   -60,     0,
       0,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,     0,
       0,   -62,   -62,   -62,   -68,   -68,     0,     0,     0,     0,
       0,   -62,     0,   -62,     0,     0,   -68,   -68,   -68,   -68,
     -68,   -68,     0,     0,     0,     0,   -68,   -68,   -68,   -67,
     -67,     0,     0,     0,     0,     0,   -68,     0,   -68,     0,
       0,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,   -67,   -67,   -67,   -84,   -84,     0,     0,     0,     0,
       0,   -67,     0,   -67,     0,     0,   -84,   -84,   -84,   -84,
     -84,   -84,     0,     0,     0,     0,   -84,   -84,   -84,   -86,
     -86,     0,     0,     0,     0,     0,     0,     0,   -84,     0,
       0,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,
       0,   -86,   -86,   -86,   -61,   106,     0,     0,     0,     0,
       0,     0,     0,   -86,     0,     0,   -61,   -61,   -61,   -61,
     -61,   -61,     0,     0,     0,     0,   -61,   -61,   -61,   -63,
     -63,     0,     0,     0,     0,     0,     0,     0,   -61,     0,
       0,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,     0,
       0,   -63,   -63,   -63,   -64,   -64,     0,     0,     0,     0,
       0,     0,     0,   -63,     0,     0,   -64,   -64,   -64,   -64,
     -64,   -64,     0,     0,     0,     0,   -64,   -64,   -64,   -70,
     -70,     0,     0,     0,     0,     0,     0,     0,   -64,     0,
       0,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,
       0,   -70,   -70,   -70,   -81,   -81,     0,     0,     0,     0,
       0,     0,     0,   -70,     0,     0,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,     0,   -81,   -81,   -81,   -65,
     -65,     0,     0,     0,     0,     0,     0,     0,   -81,     0,
       0,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,
       0,   -65,   -65,   -65,   -69,   -69,     0,     0,     0,     0,
       0,     0,     0,   -65,     0,     0,   -69,   -69,   -69,   -69,
     -69,   -69,     0,     0,     0,     0,   -69,   -69,   -69,   -66,
     -66,     0,     0,     0,     0,     0,     0,     0,   -69,     0,
       0,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,
       0,   -66,   -66,   -66,   -71,   -71,     0,     0,     0,     0,
       0,     0,     0,   -66,     0,     0,   -71,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,     0,   -71,   -71,   -71,   -60,
     106,     0,     0,     0,     0,     0,     0,     0,   -71,     0,
       0,   -60,   -60,   -60,   -60,   -60,   -60,     0,     0,     0,
       0,   -60,   -60,   -60,   -62,   -62,     0,     0,     0,     0,
       0,     0,     0,   -60,     0,     0,   -62,   -62,   -62,   -62,
     -62,   -62,     0,     0,     0,     0,   -62,   -62,   -62,   -68,
     -68,     0,     0,     0,     0,     0,     0,     0,   -62,     0,
       0,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,
       0,   -68,   -68,   -68,   208,     0,     0,     0,     0,     0,
       0,     0,     0,   -68,     0,     0,   -58,   -58,   -58,   -58,
     -58,   -58,     0,     0,     0,     0,   -58,   -58,   -58,   -67,
     -67,     0,     0,     0,     0,     0,   -58,     0,   -58,     0,
       0,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,   -67,   -67,   -67,   208,     0,     0,     0,     0,     0,
       0,     0,     0,   -67,     0,     0,   -59,   -59,   -59,   -59,
     -59,   -59,     0,     0,     0,     0,   -59,   -59,   -59,   208,
       0,     0,     0,     0,     0,     0,     0,     0,   -59,     0,
       0,   -58,   -58,   -58,   -58,   -58,   -58,     0,     0,     0,
       0,   -58,   -58,   -58,   -81,   -81,     0,     0,     0,     0,
       0,     0,     0,   -58,     0,     0,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,     0,   -81,   -81,   -81,     0,
     -81,   -69,   -69,     0,     0,   -81,     0,   -81,     0,     0,
       0,     0,     0,   -69,   -69,   -69,   -69,   -69,   -69,     0,
       0,     0,     0,   -69,   -69,   -69,   -81,   -81,     0,     0,
       0,     0,   -69,     0,   109,     0,     0,     0,   -81,   -81,
     -81,   -81,   -81,   -81,     0,     0,     0,     0,   -81,   -81,
     -81,   -81,   -81,     0,     0,     0,     0,   -81,     0,   -81,
       0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,     0,
       0,     0,     0,   -81,   -81,   -81,   -69,   -69,     0,     0,
       0,     0,     0,     0,   -81,     0,     0,     0,   -69,   -69,
     -69,   -69,   -69,   -69,     0,     0,     0,     0,   -69,   -69,
     -69,   -84,   -84,     0,     0,     0,     0,     0,     0,   303,
       0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,     0,
       0,   -86,   -86,   -84,   -84,   -84,     0,     0,     0,     0,
       0,     0,   -84,   -86,   -86,   -86,   -86,   -86,   -86,     0,
       0,   -61,   106,   -86,   -86,   -86,     0,     0,     0,     0,
       0,     0,   -86,   -61,   -61,   -61,   -61,   -61,   -61,     0,
       0,   -63,   -63,   -61,   -61,   -61,     0,     0,     0,     0,
       0,     0,   -61,   -63,   -63,   -63,   -63,   -63,   -63,     0,
       0,   -64,   -64,   -63,   -63,   -63,     0,     0,     0,     0,
       0,     0,   -63,   -64,   -64,   -64,   -64,   -64,   -64,     0,
       0,   -70,   -70,   -64,   -64,   -64,     0,     0,     0,     0,
       0,     0,   -64,   -70,   -70,   -70,   -70,   -70,   -70,     0,
       0,   -65,   -65,   -70,   -70,   -70,     0,     0,     0,     0,
       0,     0,   -70,   -65,   -65,   -65,   -65,   -65,   -65,     0,
       0,   -69,   -69,   -65,   -65,   -65,     0,     0,     0,     0,
       0,     0,   -65,   -69,   -69,   -69,   -69,   -69,   -69,     0,
       0,   -66,   -66,   -69,   -69,   -69,     0,     0,     0,     0,
       0,     0,   -69,   -66,   -66,   -66,   -66,   -66,   -66,     0,
       0,   -71,   -71,   -66,   -66,   -66,     0,     0,     0,     0,
       0,     0,   -66,   -71,   -71,   -71,   -71,   -71,   -71,     0,
       0,   -60,   106,   -71,   -71,   -71,     0,     0,     0,     0,
       0,     0,   -71,   -60,   -60,   -60,   -60,   -60,   -60,     0,
       0,   -62,   -62,   -60,   -60,   -60,     0,     0,     0,     0,
       0,     0,   -60,   -62,   -62,   -62,   -62,   -62,   -62,     0,
       0,   -68,   -68,   -62,   -62,   -62,     0,     0,     0,     0,
       0,     0,   -62,   -68,   -68,   -68,   -68,   -68,   -68,     0,
       0,   -67,   -67,   -68,   -68,   -68,     0,     0,     0,     0,
       0,     0,   -68,   -67,   -67,   -67,   -67,   -67,   -67,     0,
       0,   -81,   -81,   -67,   -67,   -67,     0,     0,     0,     0,
       0,     0,   -67,   -81,   -81,   -81,   -81,   -81,   -81,     0,
       0,   208,     0,   -81,   -81,   -81,     0,     0,     0,     0,
       0,     0,   -81,   -58,   -58,   -58,   -58,   -58,   -58,     0,
       0,   -85,   -85,   -58,   -58,   -58,     0,     0,     0,     0,
       0,     0,   -58,   -85,   -85,   -85,   -85,   -85,   -85,   -84,
     -84,     0,     0,   -85,   -85,   -85,     0,     0,     0,     0,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -86,   -86,     0,
       0,   -84,   -84,   -84,     0,     0,     0,     0,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -61,   106,     0,     0,   -86,
     -86,   -86,     0,     0,     0,     0,     0,   -61,   -61,   -61,
     -61,   -61,   -61,   -63,   -63,     0,     0,   -61,   -61,   -61,
       0,     0,     0,     0,     0,   -63,   -63,   -63,   -63,   -63,
     -63,   -64,   -64,     0,     0,   -63,   -63,   -63,     0,     0,
       0,     0,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -70,
     -70,     0,     0,   -64,   -64,   -64,     0,     0,     0,     0,
       0,   -70,   -70,   -70,   -70,   -70,   -70,   -81,   -81,     0,
       0,   -70,   -70,   -70,     0,     0,     0,     0,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -65,   -65,     0,     0,   -81,
     -81,   -81,     0,     0,     0,     0,     0,   -65,   -65,   -65,
     -65,   -65,   -65,   -69,   -69,     0,     0,   -65,   -65,   -65,
       0,     0,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,
     -69,   -66,   -66,     0,     0,   -69,   -69,   -69,     0,     0,
       0,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -71,
     -71,     0,     0,   -66,   -66,   -66,     0,     0,     0,     0,
       0,   -71,   -71,   -71,   -71,   -71,   -71,   -60,   106,     0,
       0,   -71,   -71,   -71,     0,     0,     0,     0,     0,   -60,
     -60,   -60,   -60,   -60,   -60,   -62,   -62,     0,     0,   -60,
     -60,   -60,     0,     0,     0,     0,     0,   -62,   -62,   -62,
     -62,   -62,   -62,   -68,   -68,     0,     0,   -62,   -62,   -62,
       0,     0,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -67,   -67,     0,     0,   -68,   -68,   -68,     0,     0,
       0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,   208,
       0,     0,     0,   -67,   -67,   -67,     0,     0,     0,     0,
       0,   -59,   -59,   -59,   -59,   -59,   -59,   208,     0,     0,
       0,   -59,   -59,   -59,     0,     0,     0,     0,     0,   -58,
     -58,   -58,   -58,   -58,   -58,     0,     0,     0,     0,   -58,
     -58,   -58,    98,    99,   100,   101,   102,   103,     0,     0,
       0,     0,   -57,   -57,   -57,    98,    99,   100,   101,   102,
     103,     0,     0,     0,   -57,   -56,   -56,   -56,    98,    99,
     100,   101,   102,   103,     0,     0,     0,   -56,   -57,   -57,
     -57,    98,    99,   100,   101,   102,   103,     0,     0,     0,
       0,   -56,   -56,   -56
};

static const yytype_int16 yycheck[] =
{
       0,    23,   141,    25,     0,    11,    84,     7,    50,    27,
       1,     7,     1,   141,    75,    21,     1,    17,   200,    19,
     154,    27,    30,    31,   169,    19,   171,   172,   141,    29,
       0,    40,    50,    42,    42,    29,    42,   219,    30,    31,
      46,    47,    30,    31,    50,   141,    30,    31,   202,    42,
      42,    39,    43,     5,    43,    39,   141,    44,    43,    13,
      14,    15,    16,   245,    70,    41,    72,   221,    74,    75,
      76,   141,    78,     5,     5,     6,     7,    83,    84,    85,
     141,    12,    42,    39,    47,    41,    30,    31,    42,    95,
      96,    97,   141,   247,    26,    39,    28,    29,   104,   105,
      41,   107,   108,   109,    30,    31,     5,     6,     7,   170,
      41,    74,    39,    12,    41,    78,     5,     6,     7,     8,
      83,    84,    41,    12,     5,     6,     7,     5,    30,    31,
      32,    12,    95,    11,    41,   141,   142,   143,    40,    39,
      42,   141,    41,    41,    33,   141,   109,   169,   154,   171,
     172,   169,    41,   171,   172,   177,    41,    41,     5,   293,
      41,     5,     5,   169,   170,   171,   172,    11,   350,   303,
       5,     5,     6,     7,     8,   357,    11,    41,    12,    26,
     143,    28,    29,    26,     5,    28,    29,   321,   194,   195,
      11,   154,    30,    31,    32,   377,    41,    39,   352,    33,
     206,     5,     6,     7,     8,   359,     5,    41,    12,    41,
     216,   217,    11,     5,     6,     7,     5,     6,     7,   225,
      12,    41,   264,    12,    40,   379,    42,    30,    31,    33,
      39,    39,   195,   239,   240,   277,     5,    41,     5,    42,
       5,     6,     7,     8,    42,   251,   264,    12,   254,    41,
      30,    31,    41,    39,   217,   333,   334,   263,   264,   277,
      40,    26,    42,    28,    29,     5,    30,    31,    33,   275,
     331,   277,   417,     5,    39,    39,    41,   240,   417,     0,
       1,    42,   288,   289,   290,   291,   292,   293,    40,   417,
      42,   254,    13,    14,    15,    16,    40,   303,    42,   444,
      39,   446,   447,    44,   417,   444,    42,   446,   447,   315,
     316,   317,   318,   319,   320,   321,   444,    39,   446,   447,
      34,   417,    27,    30,   330,   331,   332,   333,   334,   335,
     293,   444,   417,   446,   447,    39,    42,    42,   344,    42,
     303,    46,    47,    30,    31,    50,    42,   417,   444,    42,
     446,   447,   315,    40,    42,    42,   417,    42,   321,   444,
      42,   446,   447,    30,    31,    70,    42,   330,   417,    74,
     333,   334,    42,    40,   444,    42,   446,   447,    83,    84,
      40,   344,    42,   444,   445,   446,   447,     5,     6,     7,
       8,    96,    97,    39,    12,   444,    39,   446,   447,   104,
     105,    39,   107,   108,   109,    39,    39,     5,     6,     7,
       8,   417,   418,   419,    12,    33,    40,   417,    42,    30,
      31,   417,    39,    41,     5,     6,     7,     8,    39,    39,
     452,    12,    39,    39,     5,    33,   141,   142,   444,   445,
     446,   447,    39,    41,   444,    39,   446,   447,   444,   154,
     446,   447,    33,    30,    31,    26,   419,    28,    29,    42,
      41,    30,    31,    40,   169,    42,   171,   172,     1,    42,
      39,     5,     5,     6,     7,     8,    30,    31,    32,    12,
      13,    14,    15,    16,    17,    18,    19,    42,    42,   194,
     195,    42,     5,    26,    27,    28,    29,     5,    30,    31,
      33,   206,    35,    36,    37,    38,     5,    39,    41,    39,
      43,   216,   217,    30,    31,     5,     6,     7,     8,    40,
     225,    42,    12,    40,    42,    42,    41,    46,    47,    41,
      30,    31,    32,    34,   239,   240,    26,    41,    28,    29,
      40,    30,    42,    33,    30,    31,   251,     0,     1,    42,
      41,    41,    42,    41,    40,    74,    42,    41,   263,   264,
      13,    14,    15,    16,    83,    84,     5,     6,     7,     8,
      30,    31,   277,    12,    30,    31,    32,    41,    41,    41,
      27,    39,    42,   288,   289,   290,   291,   292,   293,   108,
     109,     0,     1,    41,    33,    41,    41,    41,   303,    46,
      47,    41,    41,    50,    13,    14,    15,    16,    30,    31,
      32,   316,   317,   318,   319,   320,   321,    41,    65,    39,
      42,    39,   141,   142,    34,   330,    42,    74,   333,   334,
      42,     5,     6,     7,     8,   154,    83,    84,    12,   344,
      42,     5,     6,     7,     8,    41,    41,    41,    12,    96,
      97,     1,    26,    39,    28,    29,    44,   104,   105,    33,
     107,   108,   109,    13,    14,    15,    16,    41,    42,    33,
      39,    44,    30,    31,    30,    31,   195,    41,     5,     6,
       7,     8,    40,    42,    42,    12,    42,   134,    30,    31,
       5,     6,     7,     8,   141,   142,    42,    12,   217,    26,
      42,    28,    29,    41,    41,    41,    33,   154,    30,    31,
      30,    31,   417,   418,    41,    42,     0,     1,    33,    39,
      42,   240,   169,    42,   171,   172,    41,    39,    42,    13,
      14,    15,    16,    30,    31,    30,     0,     1,    42,   444,
      42,   446,   447,    40,   263,    42,    42,    39,   195,    13,
      14,    15,    16,    42,   201,     5,     6,     7,     8,    30,
      31,    42,    12,    13,    14,    15,    16,    17,    18,    19,
     217,    42,    42,   220,   293,    42,    26,    27,    28,    29,
      42,    42,    39,    33,   303,    35,    36,    37,    38,    30,
      31,    41,    39,   240,    44,    39,    39,    30,    31,   246,
      39,    42,   321,     5,     6,     7,     8,     0,     1,    42,
      12,   330,    42,    42,   333,   334,   263,   264,    42,     7,
      13,    14,    15,    16,    26,   344,    28,    29,   417,    -1,
     277,    33,    -1,    -1,    -1,    30,    31,    -1,    27,    41,
      42,   288,   289,   290,   291,   292,   293,    42,     5,     6,
       7,     8,    -1,    42,    -1,    12,   303,    46,    47,    -1,
      -1,    50,    -1,    -1,     0,     1,    30,    31,    32,   316,
     317,   318,   319,   320,   321,    39,    33,    13,    14,    15,
      16,    70,    -1,   330,    41,    74,   333,   334,    30,    31,
      30,    31,    -1,    -1,    83,    84,    -1,   344,   417,   418,
      42,    -1,    42,    -1,   351,    30,    31,    96,    97,    30,
      31,   358,    30,    31,    -1,   104,   105,    42,   107,   108,
     109,    42,    30,    31,    42,   444,    -1,   446,   447,    30,
      31,   378,     1,    -1,    42,    -1,     5,     6,     7,     8,
      -1,    42,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,   141,   142,    -1,    -1,    -1,    26,    27,    28,
      29,    -1,     0,     1,    33,   154,    35,    36,    37,    38,
     417,   418,    41,    -1,    43,    13,    14,    15,    16,     8,
     169,    -1,   171,   172,    -1,    -1,    30,    31,    -1,    -1,
      -1,    20,    21,    22,    23,    24,    25,   444,    42,   446,
     447,    30,    31,    32,    -1,   194,   195,    30,    31,    -1,
      39,    -1,     4,     5,     6,     7,     8,   206,    -1,    42,
      12,    13,    14,    15,    16,    17,    18,    19,   217,    -1,
      30,    31,    -1,    -1,    26,    27,    28,    29,    -1,    -1,
      -1,    33,    42,    35,    36,    37,    38,    -1,    -1,    41,
     239,   240,    44,    -1,    30,    31,    30,    31,     5,     6,
       7,     8,   251,    10,    -1,    12,    42,    -1,    42,     5,
       6,     7,     8,    -1,   263,   264,    12,    30,    31,    26,
      -1,    28,    29,    -1,    30,    31,    33,    -1,   277,    42,
      -1,    -1,    27,    -1,    41,    -1,    42,    33,    -1,   288,
     289,   290,   291,   292,   293,    41,    -1,    30,    31,    32,
      -1,    46,    47,    -1,   303,    50,    39,    -1,     5,     6,
       7,     8,    30,    31,    -1,    12,    -1,   316,   317,   318,
     319,   320,   321,    -1,    42,     5,     6,     7,     8,    74,
      -1,   330,    12,    -1,   333,   334,    33,    -1,    83,    84,
      -1,     0,     1,    -1,    41,   344,    26,    -1,    28,    29,
      -1,    96,    97,    33,    13,    14,    15,    16,    -1,   104,
     105,    41,   107,   108,   109,    -1,    -1,    -1,    -1,    -1,
       4,     5,     6,     7,     8,     0,     1,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    13,    14,
      15,    16,    26,    27,    28,    29,   141,   142,    -1,    33,
      -1,    35,    36,    37,    38,    -1,    -1,    41,    -1,   154,
      44,    -1,    -1,     5,     6,     7,     8,    -1,   417,   418,
      12,    -1,    -1,    -1,   169,    -1,   171,   172,    -1,    -1,
      -1,    47,    -1,    -1,    26,    -1,    28,    29,     0,     1,
      -1,    33,    -1,    -1,    -1,   444,    -1,   446,   447,    41,
     195,    13,    14,    15,    16,    -1,    -1,    -1,    74,    -1,
      -1,    77,    -1,    79,    80,    -1,    -1,    83,    84,    -1,
      -1,    -1,   217,    -1,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,   109,    -1,   240,    26,    27,    28,    29,
      -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,
      -1,    41,    -1,    -1,    44,    -1,    -1,    -1,   263,   264,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,   277,    30,    31,    32,    27,    -1,   154,    -1,
      -1,    -1,    39,   288,   289,   290,   291,   292,   293,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,   302,   303,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   316,   317,   318,   319,   320,   321,    -1,    -1,   195,
      -1,    -1,    -1,    74,    -1,   330,    -1,    -1,   333,   334,
      -1,    -1,    83,    84,    -1,    -1,    -1,    -1,    -1,   344,
      -1,   217,    -1,    -1,    -1,    96,    97,    -1,    -1,    -1,
      -1,    -1,    -1,   104,   105,    -1,    -1,   108,   109,    -1,
      -1,    -1,    -1,    -1,   240,     5,     6,     7,     8,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
     141,   142,    -1,    33,    -1,    35,    36,    37,    38,    -1,
      -1,    41,    -1,   154,    44,   281,   282,   283,    -1,    -1,
      -1,    -1,   417,   418,    -1,    -1,    -1,   293,   169,    -1,
     171,   172,    -1,    -1,    -1,    -1,    -1,   303,    -1,   305,
     306,   307,   308,   309,   310,    -1,    -1,    -1,    -1,   444,
      -1,   446,   447,    -1,   195,   321,    -1,    -1,     5,     6,
       7,     8,    -1,    -1,   330,    12,    -1,   333,   334,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   217,    -1,   344,    26,
      -1,    28,    29,    -1,    27,    -1,    33,    -1,     5,     6,
       7,     8,    39,    -1,    41,    12,    -1,    -1,    -1,   240,
      -1,    -1,    -1,    46,    47,    -1,    -1,    50,    -1,    26,
      -1,    28,    29,    -1,    -1,    -1,    33,   383,   384,   385,
      -1,    -1,   263,   264,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    -1,   277,    -1,    -1,    -1,
      83,    84,    -1,    -1,   410,   411,   412,   288,   289,   290,
     291,    -1,   293,    96,    97,    -1,    -1,    -1,    -1,    -1,
     301,   104,   303,    -1,    -1,   108,   109,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   316,   317,   318,   319,    -1,
     321,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   330,
      -1,    -1,   333,   334,    -1,    -1,    -1,    -1,   141,   142,
       8,     9,    -1,   344,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   154,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,    -1,   169,    -1,   171,   172,
      -1,    -1,    40,    41,    42,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,    27,    -1,    -1,    -1,    30,    31,
      32,    -1,   195,    -1,    -1,    -1,     8,     9,    40,    -1,
      42,    -1,    -1,    46,    47,    -1,    -1,    50,    20,    21,
      22,    23,    24,    25,   217,    -1,   417,   418,    30,    31,
      32,    -1,    20,    21,    22,    23,    24,    25,    40,    41,
      42,    74,    30,    31,    32,     8,     9,   240,    -1,    -1,
      83,    84,    40,   444,    42,   446,   447,    20,    21,    22,
      23,    24,    25,    96,    97,    -1,    -1,    30,    31,    32,
     263,   264,    -1,    -1,    -1,   108,   109,    -1,    41,    42,
      -1,    -1,    -1,    -1,   277,    -1,    -1,    -1,    -1,     8,
       9,    -1,    -1,    -1,    -1,   288,   289,   290,    -1,    -1,
     293,    20,    21,    22,    23,    24,    25,   300,   141,   142,
     303,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    -1,
      39,   154,    41,   316,   317,   318,    -1,    -1,   321,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   169,   330,   171,   172,
     333,   334,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   344,    -1,    -1,    27,    -1,     4,     5,     6,     7,
       8,    -1,   195,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    46,    47,    -1,    -1,    50,    26,    27,
      28,    29,    -1,    -1,   217,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    74,    -1,    -1,     8,     9,    -1,   240,    -1,    -1,
      83,    84,    -1,    -1,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    96,   417,   418,    30,    31,    32,    -1,
     263,   264,    -1,    -1,    -1,   108,   109,    41,    42,    -1,
      -1,    -1,    -1,    -1,   277,    -1,    -1,    -1,    -1,    -1,
      -1,   444,    -1,   446,   447,   288,   289,    -1,    -1,    -1,
     293,    -1,    -1,     8,     9,    -1,   299,    -1,   141,   142,
     303,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      25,   154,    -1,   316,   317,    30,    31,    32,   321,    -1,
      -1,    -1,    -1,    -1,    39,    -1,   169,   330,   171,   172,
     333,   334,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   344,    -1,    -1,    27,    -1,     4,     5,     6,     7,
       8,    -1,   195,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    46,    47,    -1,    -1,    50,    26,    27,
      28,    29,    -1,    -1,   217,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    74,    -1,    -1,     8,     9,    -1,   240,    -1,    -1,
      83,    84,    -1,    -1,    -1,    -1,    20,    21,    22,    23,
      24,    25,   255,    -1,   417,   418,    30,    31,    32,    -1,
     263,   264,    -1,    -1,    -1,   108,   109,    -1,    42,    -1,
      -1,    -1,    -1,    -1,   277,    -1,    -1,    -1,    -1,    -1,
       8,   444,    -1,   446,   447,   288,    -1,    -1,    -1,    -1,
     293,    -1,    20,    21,    22,    23,    24,    25,   141,   142,
     303,    -1,    30,    31,    32,    20,    21,    22,    23,    24,
      25,   154,    40,   316,    42,    30,    31,    32,   321,    -1,
      -1,    -1,    -1,    -1,    39,    -1,   169,   330,   171,   172,
     333,   334,    -1,    -1,    -1,     4,     5,     6,     7,     8,
      -1,   344,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,   195,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,
      -1,    -1,    41,    -1,   217,    44,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,   240,    26,    27,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    41,   417,   418,    44,    -1,    -1,    -1,
     263,   264,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   277,    20,    21,    22,    23,    24,
      25,   444,    -1,   446,   447,    30,    31,    32,    -1,    -1,
     293,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,
     303,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,     5,     6,     7,     8,    -1,    -1,   321,    12,
      13,    14,    15,    16,    17,    18,    19,   330,    -1,    -1,
     333,   334,    -1,    26,    27,    28,    29,    -1,    -1,    -1,
      33,   344,    35,    36,    37,    38,    -1,    -1,    41,    -1,
      -1,    44,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,   417,   418,    26,    27,    28,    29,
      -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,
      -1,    41,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,
      -1,   444,    -1,   446,   447,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,
      -1,    -1,    41,    -1,    -1,    44,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    41,    -1,    -1,    44,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    38,    -1,    -1,    41,    -1,    -1,    44,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    -1,    -1,    -1,    33,    -1,
      35,    36,    37,    38,    -1,    -1,    41,    -1,    -1,    44,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    -1,    -1,    -1,    33,
      -1,    35,    36,    37,    38,    -1,    -1,    41,    -1,    -1,
      44,     4,     5,     6,     7,     8,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    38,    -1,    -1,    41,    -1,
      -1,    44,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    -1,    -1,    44,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,
      -1,    41,    -1,    -1,    44,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,
      -1,    -1,    41,    -1,    -1,    44,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    41,    -1,    -1,    44,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    -1,    -1,    41,    -1,    -1,    44,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    38,    -1,    -1,    41,    -1,    -1,    44,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    -1,    -1,    -1,    33,    -1,
      35,    36,    37,    38,    -1,    -1,    41,    -1,    -1,    44,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    -1,    -1,    -1,    33,
      -1,    35,    36,    37,    38,    -1,    -1,    41,    -1,    -1,
      44,     4,     5,     6,     7,     8,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    38,    -1,    -1,    41,    -1,
      -1,    44,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    -1,    -1,    44,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    -1,    -1,    44,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    -1,    -1,    44,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    -1,    -1,    44,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    -1,    -1,    44,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    -1,    -1,    44,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    -1,    -1,    44,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    -1,    -1,    44,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    -1,    -1,    44,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    -1,    -1,    44,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    -1,    -1,    44,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    -1,    -1,    44,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    -1,    -1,    44,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    -1,    -1,    44,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    -1,    -1,    44,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    -1,    -1,    44,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    -1,    -1,    44,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    -1,    -1,    44,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    -1,    -1,    44,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    -1,    -1,    44,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    -1,    -1,    44,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    -1,    -1,    44,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    -1,    -1,    44,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    -1,    -1,    44,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    -1,    -1,    44,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    -1,    -1,    44,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    -1,    -1,    44,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,     8,
       9,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    42,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,
       9,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    42,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,
       9,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    42,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,
       9,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    42,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,
       9,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    42,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,
       9,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    42,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,
       9,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    42,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,
       9,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    42,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    30,    31,    32,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,
       9,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    30,    31,    32,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,    -1,
      34,     8,     9,    -1,    -1,    39,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,
      -1,    -1,    39,    -1,    41,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,
      32,     8,     9,    -1,    -1,    -1,    -1,    39,    -1,    41,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,
      32,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,     8,     9,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    20,    21,    22,    23,    24,    25,    -1,
      -1,     8,     9,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    20,    21,    22,    23,    24,    25,    -1,
      -1,     8,     9,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    20,    21,    22,    23,    24,    25,    -1,
      -1,     8,     9,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    20,    21,    22,    23,    24,    25,    -1,
      -1,     8,     9,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    20,    21,    22,    23,    24,    25,    -1,
      -1,     8,     9,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    20,    21,    22,    23,    24,    25,    -1,
      -1,     8,     9,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    20,    21,    22,    23,    24,    25,    -1,
      -1,     8,     9,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    20,    21,    22,    23,    24,    25,    -1,
      -1,     8,     9,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    20,    21,    22,    23,    24,    25,    -1,
      -1,     8,     9,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    20,    21,    22,    23,    24,    25,    -1,
      -1,     8,     9,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    20,    21,    22,    23,    24,    25,    -1,
      -1,     8,     9,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    20,    21,    22,    23,    24,    25,    -1,
      -1,     8,     9,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    20,    21,    22,    23,    24,    25,    -1,
      -1,     8,     9,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    20,    21,    22,    23,    24,    25,    -1,
      -1,     8,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    20,    21,    22,    23,    24,    25,    -1,
      -1,     8,     9,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    20,    21,    22,    23,    24,    25,     8,
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
      25,     8,     9,    -1,    -1,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    25,     8,
      -1,    -1,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    23,    24,    25,     8,    -1,    -1,
      -1,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      31,    32,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    42,    30,    31,    32,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    42,    30,    31,
      32,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    30,    31,    32
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    13,    14,    15,    16,    46,    47,    48,    49,
      50,    82,     0,    48,     5,    11,    78,    41,    39,    41,
      51,    82,    51,    42,    78,    42,     1,    43,    52,    40,
      52,     6,     7,     8,    12,    17,    18,    19,    26,    27,
      28,    29,    33,    35,    36,    37,    38,    41,    49,    53,
      54,    55,    56,    57,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    78,
      79,    81,    82,    51,    41,    41,    41,    41,    41,    41,
      41,    74,    78,    41,    41,    41,    39,    63,    78,    63,
      44,    53,    39,    39,    39,    30,    31,    32,    20,    21,
      22,    23,    24,    25,    75,    79,     9,    80,    34,    41,
      74,    78,    63,    64,    78,    78,    67,    68,    65,    78,
      67,    67,    10,    63,    76,    63,    76,    78,    39,    42,
      65,    78,    69,    70,    71,    72,    73,    63,    42,    63,
      77,    42,    39,    30,    42,    42,    42,    42,    42,    42,
      42,    42,    42,    42,    40,    42,    52,    54,    58,    59,
      63,    65,    78,    39,    39,    39,    39,    39,    77,     4,
      39,    42,    42,    59,    64,    59,    59,    42,    52,    13,
      14,    15,    16,     5,     5,     5,     5,     5,     6,     7,
      12,    26,    28,    29,    33,    41,    65,    67,    68,    69,
      70,    71,    72,    73,    74,    78,    79,    81,     8,     5,
       5,     5,     5,     6,     7,    12,    33,    41,    69,    70,
      71,    72,    73,    74,    78,    79,    81,     5,     5,    26,
      28,    29,     5,     6,     7,    12,    26,    28,    29,    33,
      41,    65,    67,    68,    69,    70,    71,    72,    73,    74,
      78,    79,    81,    39,    30,    31,     1,    17,    18,    19,
      35,    36,    37,    38,    43,    49,    55,    56,    57,    60,
      61,    62,    63,    64,    66,    82,     1,    43,    52,    54,
      78,    41,    41,    41,     5,    74,    78,    63,    31,    32,
      75,    79,    80,    41,    74,     5,    74,    78,    63,    32,
      75,    79,    80,    41,    74,    41,    41,    41,    41,    41,
      41,     5,    74,    78,    63,    30,    31,    32,    75,    79,
      80,    41,    74,     5,    26,    28,    29,    65,    78,    69,
      41,    41,    41,    41,    41,    41,    39,    63,    53,    39,
      39,    39,    78,    53,    34,    67,    67,    67,    42,    69,
      70,    71,    72,    73,    42,    77,    42,    70,    71,    72,
      73,    42,    77,    67,    67,    67,    67,    67,    67,    42,
       5,    26,    28,    29,    65,    78,    69,    70,    71,    72,
      73,    42,    77,    41,    41,    41,    63,    64,    78,    63,
      76,    63,    76,    78,    39,    44,    39,    44,    63,    42,
      42,    42,    42,    42,    42,    42,    42,    42,    42,    42,
      41,    41,    41,    42,    67,    67,    67,    42,    39,    30,
      42,    42,    42,    42,    42,    67,    67,    67,    42,    42,
      42,    58,    59,    63,    65,    78,    39,    39,    39,    39,
      39,    42,    42,    42,     4,    39,    42,    42,    59,    64,
      59,    59,    42,    52
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    48,    48,    48,    49,    50,
      50,    51,    51,    51,    52,    52,    53,    53,    54,    54,
      54,    54,    54,    54,    54,    54,    55,    55,    55,    55,
      55,    56,    57,    58,    58,    59,    59,    60,    60,    61,
      61,    61,    62,    63,    63,    64,    65,    65,    65,    66,
      66,    67,    67,    68,    68,    68,    69,    69,    70,    70,
      71,    71,    72,    72,    73,    73,    73,    73,    73,    74,
      74,    74,    75,    75,    75,    75,    75,    75,    76,    77,
      77,    78,    79,    80,    81,    81,    81,    82,    82,    82,
      82
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     6,
       6,     4,     2,     0,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     5,     5,     5,     5,
       5,     9,     5,     1,     3,     1,     1,     2,     3,     7,
       7,     2,     2,     1,     1,     3,     4,     4,     4,     4,
       4,     3,     3,     3,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     2,     2,     4,     3,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
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
#line 2791 "sintatic.tab.c"
    break;

  case 3: /* list_declaration: list_declaration main_declaration  */
#line 96 "sintatic/sintatic.y"
                                          {
            (yyvsp[-1].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 2799 "sintatic.tab.c"
    break;

  case 7: /* main_declaration: error  */
#line 105 "sintatic/sintatic.y"
                {}
#line 2805 "sintatic.tab.c"
    break;

  case 8: /* var_declaration: tipos var SEMICOLON  */
#line 109 "sintatic/sintatic.y"
                            {
            (yyval.typeNode) = buildNode("var_declaration");
            (yyval.typeNode)->childNode = (yyvsp[-2].typeNode); 
            (yyvsp[-2].typeNode)->brotherNode = (yyvsp[-1].typeNode);  
        }
#line 2815 "sintatic.tab.c"
    break;

  case 9: /* func_declaration: tipos var OPEN_PAREN list_args CLS_PAREN blockStmt  */
#line 124 "sintatic/sintatic.y"
                                                           {
            (yyval.typeNode) = buildNode("func_declaration");   
            (yyval.typeNode)->childNode = (yyvsp[-5].typeNode);
            (yyvsp[-5].typeNode)->brotherNode = (yyvsp[-4].typeNode);
            (yyvsp[-4].typeNode)->brotherNode = (yyvsp[-2].typeNode);
            (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 2827 "sintatic.tab.c"
    break;

  case 10: /* func_declaration: tipos MAIN OPEN_PAREN list_args CLS_PAREN blockStmt  */
#line 131 "sintatic/sintatic.y"
                                                                           {
            (yyval.typeNode) = buildNode("func_declaration_main");   
            (yyval.typeNode)->childNode = (yyvsp[-5].typeNode);
            (yyvsp[-5].typeNode)->brotherNode = (yyvsp[-2].typeNode);
            (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 2838 "sintatic.tab.c"
    break;

  case 11: /* list_args: tipos var COMMA list_args  */
#line 140 "sintatic/sintatic.y"
                                  {
                (yyval.typeNode) = buildNode("list_args");  
                (yyval.typeNode)->childNode = (yyvsp[-3].typeNode);
                (yyvsp[-3].typeNode)->brotherNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 2849 "sintatic.tab.c"
    break;

  case 12: /* list_args: tipos var  */
#line 146 "sintatic/sintatic.y"
                    {
                (yyval.typeNode) = buildNode("list_args"); 
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
                (yyvsp[-1].typeNode)->brotherNode = (yyvsp[0].typeNode); 
        }
#line 2859 "sintatic.tab.c"
    break;

  case 13: /* list_args: %empty  */
#line 151 "sintatic/sintatic.y"
                 {
                (yyval.typeNode) = buildNode("no_args"); 
        }
#line 2867 "sintatic.tab.c"
    break;

  case 14: /* blockStmt: OP_CUR_BRACKET list_statements CLS_CUR_BRACKET  */
#line 157 "sintatic/sintatic.y"
                                                       {
                (yyval.typeNode) = (yyvsp[-1].typeNode);
        }
#line 2875 "sintatic.tab.c"
    break;

  case 15: /* blockStmt: error  */
#line 160 "sintatic/sintatic.y"
                {}
#line 2881 "sintatic.tab.c"
    break;

  case 16: /* list_statements: stmt list_statements  */
#line 164 "sintatic/sintatic.y"
                             {
               (yyval.typeNode) = (yyvsp[-1].typeNode);
               (yyvsp[-1].typeNode)->brotherNode = (yyvsp[0].typeNode); 
        }
#line 2890 "sintatic.tab.c"
    break;

  case 26: /* input_output_expr: CMD_WRITE OPEN_PAREN str_expr CLS_PAREN SEMICOLON  */
#line 185 "sintatic/sintatic.y"
                                                          {
                (yyval.typeNode) = buildNode("CMD_WRITE_STR");
        }
#line 2898 "sintatic.tab.c"
    break;

  case 27: /* input_output_expr: CMD_WRITE OPEN_PAREN expr CLS_PAREN SEMICOLON  */
#line 188 "sintatic/sintatic.y"
                                                        {
                (yyval.typeNode) = buildNode("CMD_WRITE_EXPR");
        }
#line 2906 "sintatic.tab.c"
    break;

  case 28: /* input_output_expr: CMD_WRITELN OPEN_PAREN str_expr CLS_PAREN SEMICOLON  */
#line 191 "sintatic/sintatic.y"
                                                              {
                (yyval.typeNode) = buildNode("CMD_WRITELN_STR");
        }
#line 2914 "sintatic.tab.c"
    break;

  case 29: /* input_output_expr: CMD_WRITELN OPEN_PAREN expr CLS_PAREN SEMICOLON  */
#line 194 "sintatic/sintatic.y"
                                                          {
                (yyval.typeNode) = buildNode("CMD_WRITELN_EXPR");
        }
#line 2922 "sintatic.tab.c"
    break;

  case 30: /* input_output_expr: CMD_READ OPEN_PAREN var CLS_PAREN SEMICOLON  */
#line 197 "sintatic/sintatic.y"
                                                      {
                (yyval.typeNode) = buildNode("CMD_READ_VAR");
        }
#line 2930 "sintatic.tab.c"
    break;

  case 31: /* iteration_expr: CMD_FOR OPEN_PAREN assign SEMICOLON expr SEMICOLON assign CLS_PAREN blockStmt  */
#line 204 "sintatic/sintatic.y"
        {     
             (yyval.typeNode) = buildNode("for");
             (yyval.typeNode)->childNode = (yyvsp[-6].typeNode);
             (yyvsp[-6].typeNode)->brotherNode = (yyvsp[-4].typeNode);
             (yyvsp[-4].typeNode)->brotherNode = (yyvsp[-2].typeNode);
             (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);  
        
        }
#line 2943 "sintatic.tab.c"
    break;

  case 32: /* condition_expr: CMD_IF OPEN_PAREN expr CLS_PAREN block_cond  */
#line 215 "sintatic/sintatic.y"
                                                     {
                (yyval.typeNode) = buildNode("if");
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 2953 "sintatic.tab.c"
    break;

  case 34: /* block_cond: simple_complex_block_stmt CMD_ELSE simple_complex_block_stmt  */
#line 224 "sintatic/sintatic.y"
                                                                       {
                (yyval.typeNode) = buildNode("else");
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 2963 "sintatic.tab.c"
    break;

  case 37: /* return_stmt: CMD_RETURN SEMICOLON  */
#line 237 "sintatic/sintatic.y"
                             {
              (yyval.typeNode) = buildNode("return");  
        }
#line 2971 "sintatic.tab.c"
    break;

  case 38: /* return_stmt: CMD_RETURN expr SEMICOLON  */
#line 240 "sintatic/sintatic.y"
                                     {
                (yyval.typeNode) = buildNode("return");  
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 2980 "sintatic.tab.c"
    break;

  case 45: /* assign: var ATRIBUTION expr  */
#line 261 "sintatic/sintatic.y"
                            {
              (yyval.typeNode) = buildNode(" = ");
              (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 2990 "sintatic.tab.c"
    break;

  case 53: /* op_or_expr: op_or_expr OP_OR op_and_expr  */
#line 284 "sintatic/sintatic.y"
                                     {
              (yyval.typeNode) = buildNode("or");
              (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3000 "sintatic.tab.c"
    break;

  case 56: /* op_and_expr: op_and_expr OP_AND logical_expr  */
#line 294 "sintatic/sintatic.y"
                                        {
              (yyval.typeNode) = buildNode("and");
              (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);  
        }
#line 3010 "sintatic.tab.c"
    break;

  case 58: /* logical_expr: logical_expr logical_ops arithmetic_expr  */
#line 303 "sintatic/sintatic.y"
                                                {
             (yyval.typeNode) = (yyvsp[-1].typeNode);
             (yyvsp[-1].typeNode)->childNode = (yyvsp[-2].typeNode); 
             (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode); 
       }
#line 3020 "sintatic.tab.c"
    break;

  case 60: /* arithmetic_expr: arithmetic_expr adds_op mult_expr  */
#line 312 "sintatic/sintatic.y"
                                          {
              (yyval.typeNode) = (yyvsp[-1].typeNode);
              (yyvsp[-1].typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3030 "sintatic.tab.c"
    break;

  case 62: /* mult_expr: mult_expr mult_ops first_term  */
#line 321 "sintatic/sintatic.y"
                                      {
              (yyval.typeNode) = (yyvsp[-1].typeNode);
              (yyvsp[-1].typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3040 "sintatic.tab.c"
    break;

  case 65: /* first_term: OP_NEG term  */
#line 331 "sintatic/sintatic.y"
                      {
              (yyval.typeNode) = buildNode(" ! ");
              (yyval.typeNode)->childNode = (yyvsp[0].typeNode);
        }
#line 3049 "sintatic.tab.c"
    break;

  case 66: /* first_term: adds_op term  */
#line 335 "sintatic/sintatic.y"
                       {
              (yyval.typeNode) = (yyvsp[-1].typeNode);
              (yyvsp[-1].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3058 "sintatic.tab.c"
    break;

  case 72: /* logical_ops: LT_OP  */
#line 351 "sintatic/sintatic.y"
              {
                (yyval.typeNode) = buildNode("LT_OP");
        }
#line 3066 "sintatic.tab.c"
    break;

  case 73: /* logical_ops: LTE_OP  */
#line 354 "sintatic/sintatic.y"
                  {
                (yyval.typeNode) = buildNode("LTE_OP");
        }
#line 3074 "sintatic.tab.c"
    break;

  case 74: /* logical_ops: GT_OP  */
#line 357 "sintatic/sintatic.y"
                 {
                (yyval.typeNode) = buildNode("GT_OP");
        }
#line 3082 "sintatic.tab.c"
    break;

  case 75: /* logical_ops: GTE_OP  */
#line 360 "sintatic/sintatic.y"
                  {
                (yyval.typeNode) = buildNode("GTE_OP");
        }
#line 3090 "sintatic.tab.c"
    break;

  case 76: /* logical_ops: NEQ_OP  */
#line 363 "sintatic/sintatic.y"
                  {
                (yyval.typeNode) = buildNode("NEQ_OP");
        }
#line 3098 "sintatic.tab.c"
    break;

  case 77: /* logical_ops: EQUAL_OP  */
#line 366 "sintatic/sintatic.y"
                    {
                (yyval.typeNode) = buildNode("EQUAL_OP");
        }
#line 3106 "sintatic.tab.c"
    break;

  case 78: /* str_expr: STRING  */
#line 372 "sintatic/sintatic.y"
               {
            (yyval.typeNode) = buildNode((yyvsp[0].sval));
        }
#line 3114 "sintatic.tab.c"
    break;

  case 81: /* var: ID  */
#line 383 "sintatic/sintatic.y"
         {
            (yyval.typeNode) = buildNode((yyvsp[0].sval));
       }
#line 3122 "sintatic.tab.c"
    break;

  case 82: /* adds_op: ADD_OP  */
#line 389 "sintatic/sintatic.y"
             {
            (yyval.typeNode) = buildNode((yyvsp[0].sval));  
      }
#line 3130 "sintatic.tab.c"
    break;

  case 83: /* mult_ops: MULT_OP  */
#line 395 "sintatic/sintatic.y"
              {
            (yyval.typeNode) = buildNode((yyvsp[0].sval));  
      }
#line 3138 "sintatic.tab.c"
    break;

  case 84: /* num_tipos: FLOAT  */
#line 402 "sintatic/sintatic.y"
              {
              (yyval.typeNode) = buildNode((yyvsp[0].sval));
        }
#line 3146 "sintatic.tab.c"
    break;

  case 85: /* num_tipos: INT  */
#line 405 "sintatic/sintatic.y"
              {
              (yyval.typeNode) = buildNode((yyvsp[0].sval));
        }
#line 3154 "sintatic.tab.c"
    break;

  case 86: /* num_tipos: EMPTY  */
#line 408 "sintatic/sintatic.y"
                {
              (yyval.typeNode) = buildNode("EMPTY");
       }
#line 3162 "sintatic.tab.c"
    break;

  case 87: /* tipos: TYPE_INT  */
#line 414 "sintatic/sintatic.y"
                 {
             (yyval.typeNode) = buildNode("TYPE_INT");
        }
#line 3170 "sintatic.tab.c"
    break;

  case 88: /* tipos: TYPE_FLOAT  */
#line 417 "sintatic/sintatic.y"
                     {
              (yyval.typeNode) = buildNode("TYPE_FLOAT");
        }
#line 3178 "sintatic.tab.c"
    break;

  case 89: /* tipos: TYPE_SET  */
#line 420 "sintatic/sintatic.y"
                    {
              (yyval.typeNode) = buildNode("TYPE_SET");
        }
#line 3186 "sintatic.tab.c"
    break;

  case 90: /* tipos: TYPE_ELEM  */
#line 423 "sintatic/sintatic.y"
                    {
             (yyval.typeNode) = buildNode("TYPE_ELEM");
        }
#line 3194 "sintatic.tab.c"
    break;


#line 3198 "sintatic.tab.c"

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

#line 427 "sintatic/sintatic.y"



void yyerror(const char* msg) {
  fprintf (stderr, "%-15s %d:%-3d - %s\n", "SYNTAX ERROR", yylval.token.line, yylval.token.column, msg);
  error++;
}
/* int yyerror(char *errormsg)
{
     fprintf(stderr, "%s at line:%d, column:%d,\n", errormsg, line, column);
     return 0;
} */

int main(int argc, char ** argv) {
    
    /* escopo.idx = -1;
    escopo.brotherNode = -1; */
    
    yyparse();


    if(error) return 0;

    /* printTabela(indiceTabela); */
    showTree(raiz, 0);

    clearTree(raiz);

    yylex_destroy();
    return 0;
}
