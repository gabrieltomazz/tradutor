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

  extern FILE *yyin;
  int line = 1;
  int column = 0;
  
  TreeNodes* origin;
  Symbol* table;

#line 91 "sintatic.tab.c"

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
  YYSYMBOL_many_declaration = 50,          /* many_declaration  */
  YYSYMBOL_func_declaration = 51,          /* func_declaration  */
  YYSYMBOL_list_args = 52,                 /* list_args  */
  YYSYMBOL_blockStmt = 53,                 /* blockStmt  */
  YYSYMBOL_list_statements = 54,           /* list_statements  */
  YYSYMBOL_stmt = 55,                      /* stmt  */
  YYSYMBOL_input_output_expr = 56,         /* input_output_expr  */
  YYSYMBOL_iteration_expr = 57,            /* iteration_expr  */
  YYSYMBOL_condition_expr = 58,            /* condition_expr  */
  YYSYMBOL_block_cond = 59,                /* block_cond  */
  YYSYMBOL_simple_complex_block_stmt = 60, /* simple_complex_block_stmt  */
  YYSYMBOL_return_stmt = 61,               /* return_stmt  */
  YYSYMBOL_set_stmt = 62,                  /* set_stmt  */
  YYSYMBOL_expr_stmt = 63,                 /* expr_stmt  */
  YYSYMBOL_expr = 64,                      /* expr  */
  YYSYMBOL_assign = 65,                    /* assign  */
  YYSYMBOL_func_expr = 66,                 /* func_expr  */
  YYSYMBOL_is_set_expr = 67,               /* is_set_expr  */
  YYSYMBOL_func_in_expr = 68,              /* func_in_expr  */
  YYSYMBOL_op_or_expr = 69,                /* op_or_expr  */
  YYSYMBOL_op_and_expr = 70,               /* op_and_expr  */
  YYSYMBOL_logical_expr = 71,              /* logical_expr  */
  YYSYMBOL_arithmetic_expr = 72,           /* arithmetic_expr  */
  YYSYMBOL_mult_expr = 73,                 /* mult_expr  */
  YYSYMBOL_first_term = 74,                /* first_term  */
  YYSYMBOL_term = 75,                      /* term  */
  YYSYMBOL_logical_ops = 76,               /* logical_ops  */
  YYSYMBOL_str_expr = 77,                  /* str_expr  */
  YYSYMBOL_list_expr = 78,                 /* list_expr  */
  YYSYMBOL_var = 79,                       /* var  */
  YYSYMBOL_adds_op = 80,                   /* adds_op  */
  YYSYMBOL_mult_ops = 81,                  /* mult_ops  */
  YYSYMBOL_num_tipos = 82,                 /* num_tipos  */
  YYSYMBOL_tipos = 83                      /* tipos  */
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
#define YYLAST   8721

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  682

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
       0,    92,    92,   100,   103,   104,   108,   109,   113,   121,
     131,   135,   136,   140,   149,   157,   160,   167,   175,   182,
     188,   194,   198,   202,   203,   204,   205,   206,   207,   208,
     209,   213,   216,   219,   222,   225,   228,   231,   234,   240,
     251,   256,   262,   263,   273,   274,   278,   281,   285,   288,
     294,   300,   306,   307,   310,   313,   318,   319,   326,   327,
     331,   339,   343,   347,   351,   354,   357,   363,   367,   371,
     376,   381,   389,   394,   395,   399,   404,   408,   413,   417,
     422,   426,   431,   435,   436,   440,   444,   448,   449,   452,
     458,   459,   460,   463,   469,   472,   475,   478,   481,   484,
     490,   497,   498,   499,   505,   512,   519,   526,   530,   534,
     540,   543,   546,   549
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
  "many_declaration", "func_declaration", "list_args", "blockStmt",
  "list_statements", "stmt", "input_output_expr", "iteration_expr",
  "condition_expr", "block_cond", "simple_complex_block_stmt",
  "return_stmt", "set_stmt", "expr_stmt", "expr", "assign", "func_expr",
  "is_set_expr", "func_in_expr", "op_or_expr", "op_and_expr",
  "logical_expr", "arithmetic_expr", "mult_expr", "first_term", "term",
  "logical_ops", "str_expr", "list_expr", "var", "adds_op", "mult_ops",
  "num_tipos", "tipos", YY_NULLPTR
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

#define YYPACT_NINF (-324)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-114)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     492,   331,    31,   143,   166,   232,    62,   807,  1002,  1150,
    1228,   233,  1374,  -324,    -6,  1452,   297,     7,   319,    51,
    1469,   162,    95,    65,   111,   165,   141,   -13,   161,   178,
     187,   187,    15,  1495,   208,   187,   187,  5725,  1524,  1528,
     426,  1560,  1647,   186,  2673,  6130,   380,  6155,   227,   238,
     265,   276,   287,   300,   338,   397,   365,   369,   396,   417,
     728,  2447,   229,  4089,  4130,  4171,  4212,  4253,  4294,  4335,
      19,   286,    20,   344,   130,   142,    38,  6630,  6580,  6180,
    6205,  6230,   458,   397,  6255,   162,   415,   428,  1000,   469,
      77,   740,   775,  1114,  1680,  6280,  6305,  1102,  1353,   210,
     263,  4376,    22,   684,    56,   443,  1798,   468,  4417,  4458,
    4499,  4540,   121,  1703,  1703,  2026,  2642,  2651,  5763,  5772,
    5781,  1703,  1703,  5794,  1703,  1638,    94,  6330,    85,  6355,
      97,   456,   480,   528,   496,   538,   148,    -1,   280,   533,
     539,   556,   347,   133,   352,   253,   378,   559,   564,   583,
     386,   590,   593,   614,   649,  4581,  4622,  4663,  6380,  6405,
     192,   209,   659,   220,  6655,  6605,  6430,  6455,   664,   454,
    6480,   278,   675,   731,  5647,  1638,   235,   865,    33,    36,
     703,   712,   721,    46,    48,    55,    90,   729,   745,   766,
     770,   785,   792,   795,   828,   778,  6505,  1775,  6530,  4704,
     836,   891,  4745,   937,   846,   804,   847,   858,   870,   879,
    4786,  4827,  4868,  4909,  4950,  4991,  5032,  5073,   883,   420,
     906,  5686,   469,  5686,   935,  5686,  5686,  5686,  5114,   918,
    5155,  5196,  5237,  5278,  5319,   784,  5360,   964,   966,   985,
    1014,   673,   334,   599,  5401,  6555,  1173,  6700,  2372,  7225,
    7250,   926,   982,   986,   554,  1963,   998,   546,   597,   562,
    1586,  7725,  7275,  7300,  7325,  6725,   554,  7350,  5811,  1017,
    1026,  7825,  8295,  8313,  8331,   640,  2149,   829,  8676,  2758,
    8349,  8367,  8385,  7850,   640,  8403,  1016,  1023,   241,  1032,
    1040,  1047,  1056,  7775,  7875,  7895,  7915,  1061,  1065,  1072,
     690,  2312,  1077,   102,   284,  1243,  1148,  8255,  7935,  7955,
    7975,  7800,   690,  7995,  1022,  6750,  6775,  6800,  1086,  1096,
    1098,   765,  2350,   491,    88,   611,   154,  8650,  7375,  6825,
    6850,  6875,  6675,   765,  6900,  5442,   162,  1100,   200,  5824,
    1111,   499,  1117,  1142,  1145,  1151,  1158,  1170,  1392,  5725,
    1279,  1733,  2065,  2405,  2594,  2732,  2802,   113,  1152,  1185,
     162,  5725,  5483,  5524,  1155,  5833,  5842,  5855,  7400,  7425,
    7450,   685,  1191,  5872,  5872,  5872,  5872,  5872,   150,  7475,
    8421,  8439,  8457,   747,  1198,  5824,  5824,  5824,  5824,   248,
    8475,  7500,  5885,  5894,  5903,  1203,  5916,  5933,  5946,  8015,
    8035,  8055,   751,  1206,   379,  5955,  5955,  5955,  5955,  5955,
     293,  8075,  5964,  5977,  5994,  6925,  6950,  6975,   834,  1210,
     425,  6007,  6007,  6007,  6007,  6007,   349,  7000,  1216,  8493,
     652,  1218,  1227,  1235,   657,   826,  1261,   968,  7025,  2859,
    2503,   469,   264,  1422,  1593,   281,   505,  2900,   120,  1213,
    2941,  2982,  3023,  3064,   894,  1220,  2542,   938,   848,   972,
     916,  1007,   962,  7525,  7550,  1263,   618,  2019,  7750,  7575,
    7600,  1104,  7625,  1268,  8511,  8529,  8689,  8637,  8547,  8565,
    1166,  8583,  1271,  1036,   990,  1051,  1069,  1135,  1110,  8095,
    1160,  1239,  1189,  1307,  1194,  1336,  8115,  8135,   587,  1277,
    1280,  1283,   786,   808,  1811,  1195,  8275,  8155,  8175,  1329,
    8195,  1284,  1230,  1361,  1237,  1375,  1299,  1407,  7050,  7075,
     688,  1287,  1289,  1293,   713,   760,  1321,   433,  8663,  7650,
    7100,  7125,  1481,  7150,  1322,  5565,  6016,  6025,  6038,  1331,
    1360,  1356,  1377,  1386,  1373,  1380,  1397,  1394,  1404,  1412,
    1420,  1445,  3105,  3146,  3187,  3228,  3269,   162,  5606,  1451,
    1455,  1462,  1470,  1473,  1484,  1521,  7675,  7700,  8601,  8619,
     257,   277,   332,   342,   470,   572,  1425,  1533,  1538,  1541,
    1556,  1563,  6055,  6068,  6077,  8215,  8235,   513,   532,   627,
     635,   644,   841,  6086,  6099,  6116,  7175,  7200,  1430,  1446,
    1448,  1450,  1515,  1522,  1418,  5647,  1638,   608,   956,  1603,
    1612,  1613,  1614,  1616,  1630,  1633,  1636,  1637,  1525,  1562,
    1543,  1607,  1547,  1626,  1549,  1628,  1588,  1660,  1594,  1686,
    1725,  1742,  1792,  1794,  1796,  1809,  3310,  3351,  3392,  1650,
    1544,  1585,  1591,  1623,  1635,  3433,  3474,  3515,  3556,  3597,
    3638,  3679,  3720,  3761,   884,   900,  1314,  1346,  1488,  1584,
     788,   871,   946,  1049,  1094,  1223,  5647,   469,  5647,  1692,
    5647,  5647,  5647,  3802,  1652,  3843,  3884,  3925,  3966,  4007,
    1654,  4048
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
    -324,  -324,  -324,  1688,     8,  -323,  -324,    -8,   -26,   -52,
     -19,  -150,  -143,  -136,  1093,   -81,  -129,  -121,  -114,  2129,
     -88,   899,  -101,  2275,  1921,  1890,  1831,  1499,  1457,  1125,
     389,  -243,   -95,  -191,    -9,   661,  -237,  1035,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,    61,    26,    10,    24,   200,    62,
     201,    64,    65,    66,   202,   203,    67,    68,    69,    70,
      71,    72,    73,    74,   138,   277,   278,   279,   280,   281,
     282,   121,   149,   172,   283,   284,   124,   285,    85
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,   132,    18,   152,    38,    39,   220,    11,     9,    41,
      42,   107,    27,   428,    29,     9,    32,   375,    63,    25,
     108,   -59,    25,   156,   351,   377,   -12,    34,    82,   -74,
     -74,   352,    86,    12,   -64,   386,  -110,   -61,   353,   -73,
      25,   179,  -110,   388,    63,   354,    96,   -65,    19,   -62,
     103,   265,    23,   355,    82,    40,   -66,   -18,   109,   -59,
     356,   157,    13,   407,   237,   238,   239,   240,   -73,   -73,
     114,   409,   -64,   359,    96,   -61,   128,   -73,   134,   265,
     133,   135,   270,   141,   423,   -65,   358,   -62,   265,   265,
     154,   -63,   425,   -19,   -66,   169,    28,   287,   158,   314,
     315,   316,    46,   161,   103,   103,   317,    30,   237,   238,
     239,   240,   103,   103,   450,   103,   311,   332,   -74,   -74,
     318,   553,   319,   320,   335,   336,   288,   321,   -74,   -63,
     -74,   -74,   -74,   -74,   229,   322,   170,   -19,   287,   173,
     228,   -74,   230,   -58,   232,   233,   234,   289,  -111,   290,
     291,   471,   451,    31,  -111,   314,   315,   316,    46,   554,
     -74,   -74,   317,   -74,   -74,    82,   311,   241,   209,   -74,
     242,  -113,   112,   113,   360,   184,   318,  -113,   319,   320,
      33,   -58,   350,   321,   -73,   -73,   422,   473,   332,   337,
     178,   322,   472,   -71,   -73,   362,   -73,   362,   482,   362,
     362,   362,   363,    35,   363,   430,   363,   363,   363,   236,
     -70,   153,    82,   364,    82,   286,    82,    82,    82,   511,
      36,   -72,   -71,   -71,   375,   244,   431,    87,   432,   433,
      37,   -71,   377,   386,   617,   534,   205,  -112,    16,   -70,
     -70,   388,  -104,  -112,    17,   370,   265,   -11,   -70,   480,
     -72,   -72,   114,   314,   315,   316,    46,   370,   -64,   -72,
     317,   251,   407,   252,   253,   542,   382,   265,    88,   270,
     409,  -104,  -104,   106,   318,   382,   319,   320,   -61,    89,
    -104,   321,   550,   -74,   -74,   423,   286,   -64,   -64,   322,
     481,   401,   265,   425,   509,   186,   -64,   449,   314,   315,
     316,    46,   155,   401,    87,   317,    90,   -61,   -61,   455,
     338,   339,   417,   265,   404,   405,   -61,    91,   197,   318,
    -102,   319,   320,   -58,   417,   110,   321,    27,    92,   435,
      63,    -5,    -5,   -65,   322,   510,  -104,  -104,  -104,   103,
      82,    93,    63,   -62,    -5,    -5,    -5,    -5,   546,   549,
     532,   454,    82,   541,   314,   315,   316,    46,    20,    21,
      22,   317,   -65,   -65,   265,   265,   265,   265,   265,   332,
      12,   -65,   -62,   -62,  -104,   318,  -104,   319,   320,    94,
     332,   -62,   321,   111,   498,  -105,  -105,  -105,   337,   183,
     322,   533,  -105,   337,   185,   503,   311,   311,   311,   311,
     311,   332,   245,    44,    45,   499,    97,   500,   501,    47,
      98,   525,   332,   332,   332,   332,   332,   332,   100,   287,
     187,  -105,   246,    44,    45,    46,    81,   287,   190,    47,
     520,   265,   133,   543,   265,   265,   551,    99,    60,   237,
     238,   239,   240,    51,    95,    53,    54,   265,    81,   264,
      55,   521,    81,   522,   523,   351,   101,   -17,    60,   -90,
     195,   340,   352,   -72,   -72,   422,   -90,   -90,   -19,   353,
     129,   -66,   127,   -72,   269,   -72,   354,   264,   -90,   -90,
     -90,   -90,   -90,   -90,   355,   159,   264,   264,   -90,   -90,
     -90,   356,   125,     1,   195,   340,   196,   -90,   174,   126,
     -66,   -66,    81,    81,   359,     2,     3,     4,     5,   -66,
      81,    81,   -21,    81,   310,   331,   351,   358,   351,   175,
     351,   351,   351,   352,   638,   352,   176,   352,   352,   352,
     353,   -59,   353,   -59,   353,   353,   353,   354,   439,   354,
      87,   354,   354,   354,   552,   355,    87,   355,    27,   355,
     355,   355,   356,   -64,   356,   -64,   356,   356,   356,   368,
     248,   249,   125,    81,   310,   359,   250,   359,   177,   359,
     359,   359,   -61,   -63,   -61,   180,   -74,   -74,   358,   674,
     358,   181,   358,   358,   358,   673,   331,   675,   -74,   677,
     678,   679,   -73,   -73,   374,   255,    82,   311,   182,   644,
    -104,  -100,   -63,   -63,   -73,   360,   188,  -104,  -104,   640,
      81,   -63,    81,   350,    81,    81,    81,  -104,  -104,  -104,
    -104,  -104,  -104,  -104,  -104,   189,  -104,   338,   373,  -104,
    -104,  -104,   191,  -104,   251,   192,   252,   253,  -104,   -58,
    -104,   420,   421,   369,   264,   380,   272,   273,   -72,   -72,
     374,   -58,   274,   -58,   681,   379,   193,    82,   364,    82,
     -72,    82,    82,    82,   381,   264,   360,   -65,   360,   -65,
     360,   360,   360,   390,   350,   -62,   350,   -62,   350,   350,
     350,   276,  -104,  -104,   -66,   -90,   -66,   -71,   -71,   400,
     264,   194,   -90,   -90,  -104,   399,   294,   295,    83,   -71,
      87,   411,   296,   -60,   -90,   -90,   -90,   -90,   -90,   -90,
     416,   264,  -104,  -104,   -90,   -90,   -90,   198,  -104,  -104,
      83,   266,   427,   -90,    83,   126,   287,   463,  -104,   104,
    -104,   301,   199,   247,   248,   249,    46,    81,    81,   122,
     250,   136,   -69,   -71,   -71,   271,   272,   273,    46,   266,
      81,   -68,   274,   -71,   251,   -71,   252,   253,   266,   266,
     -67,   254,   264,   264,   264,   264,   264,   331,   210,   255,
     415,   315,   316,   275,    83,    83,   139,   317,   331,   218,
     286,   276,    83,    83,   211,    83,   312,   333,   287,   474,
     -70,   -70,   287,   496,   310,   310,   310,   310,   310,   331,
     -70,   251,   -70,   252,   253,   212,   322,    -2,    14,   213,
     331,   331,   331,   331,   331,   331,   -71,   -71,   -64,   -64,
       2,     3,     4,     5,   214,   -71,   122,   361,   -64,   264,
     -64,   215,   264,   264,   216,    83,   312,   -45,   -70,   -70,
     -45,   -45,   -45,   -45,   -45,   264,   223,   -70,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -70,   -70,   333,   -73,
     -73,   385,   -45,   -45,   -45,   -45,   207,   217,   -70,   -45,
     286,   -45,   -45,   -45,   -45,   287,   518,   -45,   -74,   -74,
     -45,   -63,    83,   -63,    83,   222,    83,    83,    83,   224,
     561,   251,   -44,   252,   253,   -44,   -44,   -44,   -44,   -44,
     225,   -61,   -61,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -61,   226,   -61,   -64,   -64,   266,   -44,   -44,   -44,
     -44,   227,   376,   -64,   -44,  -103,   -44,   -44,   -44,   -44,
     -61,   -61,   -44,   556,   557,   -44,   231,   266,   -42,   -61,
     387,   221,   -42,   -42,   -42,   -42,   -74,   -74,  -101,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   642,   563,   256,
     235,   286,   266,   -42,   -42,   -42,   -42,   365,   408,  -110,
     -42,  -111,   -42,   -42,   -42,   -42,   -65,   -65,   -42,   337,
     560,   -42,   251,   266,   252,   253,   -65,   256,   -65,   424,
    -113,   140,   -74,   -74,    81,   310,   256,   256,   -72,   -72,
     385,   130,    -4,    -4,   565,   247,   248,   249,    46,    83,
      83,   160,   250,   337,   562,    -4,    -4,    -4,    -4,  -112,
     -74,   -74,    83,   366,   302,   323,   251,   367,   252,   253,
    -104,  -104,   571,   254,   266,   266,   266,   266,   266,   333,
     -59,   255,  -104,  -104,  -104,  -104,  -104,  -104,   337,   564,
     333,  -104,  -104,  -104,  -104,    81,  -104,    81,  -104,    81,
      81,    81,  -104,  -104,  -104,   391,   312,   312,   312,   312,
     312,   333,    84,   392,   302,   206,   208,   337,   570,   -62,
     -62,   393,   333,   333,   333,   333,   333,   333,   394,   -62,
      84,   -62,   337,   572,    84,   267,   323,   395,    84,   -74,
     -74,   266,   396,   146,   266,   266,   397,   247,   248,   249,
      46,   573,   147,   398,   250,   142,   -59,   266,    84,   271,
     272,   273,    46,   267,   -66,   -66,   274,   412,   251,   376,
     252,   253,   267,   267,   -66,   254,   -66,   413,   387,   414,
     -74,   -74,   429,   255,   195,   340,   566,   275,    84,    84,
      -7,    -7,   575,   438,   256,   276,    84,    84,   440,    84,
     313,   334,    80,    -7,    -7,    -7,    -7,   408,   115,   116,
     117,   118,   119,   120,  -104,   256,   337,   574,   -76,   -76,
     -76,  -104,  -104,   441,    80,   263,   442,   -76,    80,   456,
     424,   452,   443,  -104,  -104,  -104,  -104,  -104,  -104,   444,
     256,   337,   576,  -104,  -104,  -104,   195,   340,   568,    84,
     313,   445,  -104,   263,  -104,   115,   116,   117,   118,   119,
     120,   256,   263,   263,   453,   -75,   -75,   -75,    -6,    -6,
     337,   578,   334,   464,   -75,   337,   580,   434,    80,    80,
     475,    -6,    -6,    -6,    -6,   489,    80,    80,   497,   167,
     309,   330,   519,   -63,   -63,   535,    84,   555,    84,   536,
      84,    84,    84,   -63,   558,   -63,    83,   312,   537,   -74,
     -74,   337,   587,   -73,   -73,   406,   538,   323,   337,   589,
     -29,   577,   -73,   -29,   -29,   -29,   -29,   -29,   323,   267,
     267,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,    80,
     309,   267,   337,   502,   287,   -29,   -29,   -29,   -29,   323,
     567,   267,   -29,   569,   -29,   -29,   -29,   -29,   582,   524,
     -29,   583,   330,   -29,   584,   323,   586,    83,   593,    83,
     594,    83,    83,    83,   595,   313,   267,   -74,   -74,   256,
     337,   591,   256,   256,   -65,   -65,    80,   313,    80,   579,
      80,    80,    80,   -65,   150,   256,   334,   267,   247,   248,
     249,    46,   340,   147,   597,   250,   -74,   -74,   334,   195,
     340,   585,   287,   604,   -10,   -10,   -62,   -62,   581,   251,
     263,   252,   253,    84,    84,   -62,   254,   -10,   -10,   -10,
     -10,   -74,   -74,   446,   255,   606,    84,   246,    44,    45,
      46,   263,   605,   588,    47,   -74,   -74,   607,   267,   267,
     267,   267,   267,   334,   287,   609,   608,   590,    51,   636,
      53,    54,   610,   544,   334,    55,   263,   247,   248,   249,
      46,   447,   147,    60,   250,   287,   612,   -74,   -74,   611,
     313,   313,   313,   313,   313,   334,   613,   263,   251,   592,
     252,   253,    -3,    -3,   614,   254,   334,   334,   334,   334,
     334,   334,   615,   255,   -64,    -3,    -3,    -3,    -3,    -8,
      -8,   337,   630,    80,    80,   267,   -74,   -74,   267,   267,
     -74,   -74,    -8,    -8,    -8,    -8,    80,   616,   631,   337,
     632,   267,   633,   -60,    79,    -9,    -9,   -64,   263,   263,
     263,   263,   470,   330,   -61,   302,   641,   643,    -9,    -9,
      -9,    -9,   -65,   479,   330,   -62,    79,   262,   -66,   -66,
      79,   195,   340,   596,   -16,   -16,   -66,   -66,   -14,   -14,
     309,   309,   309,   309,   508,   330,    78,   -16,   -16,   -16,
     -16,   -14,   -14,   -14,   -14,   262,   330,   330,   330,   330,
     531,   330,   -74,   -74,   262,   262,   337,   634,    78,   261,
     -15,   -15,    78,   -63,   635,   263,   337,   654,   263,   263,
      79,    79,   -61,   -15,   -15,   -15,   -15,   -65,    79,   166,
     -62,   263,   308,   329,   337,   656,   668,   261,   337,   658,
     337,   660,   -74,   -74,   547,   -66,   261,   261,   247,   248,
     249,    46,   -63,   147,   655,   250,   115,   116,   117,   118,
     119,   120,    78,    78,   -63,   -63,   -76,   -76,   -76,   251,
     165,   252,   253,   -63,   307,   328,   254,   669,   -76,   337,
     662,    79,   308,   670,   255,   337,   664,   -74,   -74,   292,
      84,   313,   645,   293,   294,   295,    46,   -13,   -13,   657,
     296,   646,   647,   648,   329,   649,   -74,   -74,   -74,   -74,
     -13,   -13,   -13,   -13,   297,   671,   298,   299,   659,   650,
     661,   300,   651,    78,   307,   652,   653,   672,    79,   301,
      79,   144,    79,    79,    79,   271,   272,   273,    46,   667,
     -74,   -74,   274,   676,   680,    15,   328,   349,   637,     0,
       0,    84,   663,    84,   162,    84,    84,    84,   246,    44,
      45,    46,   262,   275,     0,    47,   -74,   -74,     0,     0,
      78,   276,    78,     0,    78,    78,    78,     0,   665,     0,
      80,   309,     0,   262,   -26,     0,    55,   -26,   -26,   -26,
     -26,   -26,     0,     0,    60,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,   -26,     0,   261,   -64,   -64,     0,   262,   -26,
     -26,   -26,   -26,     0,     0,     0,   -26,   -64,   -26,   -26,
     -26,   -26,   -61,   -61,   -26,   261,   219,   -26,     0,   262,
     314,   315,   316,    46,   -61,     0,     0,   317,     0,     0,
       0,    80,     0,    80,     0,    80,    80,    80,   -20,   -20,
     261,   318,     0,   319,   320,    79,    79,     0,   321,     0,
       0,   -20,   -20,   -20,   -20,     0,   322,     0,    79,     0,
       0,   261,   -65,   -65,   -62,   -62,   -66,   -66,     0,     0,
     262,   262,   262,   469,   -65,   329,   -62,     0,   -66,   -63,
     -63,   -72,   -72,   406,   478,     0,   329,    78,    78,     0,
     -72,   -63,     0,     0,     0,     0,     0,     0,     0,     0,
      78,     0,   308,   308,   308,   507,     0,   329,    77,     0,
       0,     0,   261,   261,   468,     0,     0,   328,   329,   329,
     329,   530,     0,   329,     0,   477,     0,     0,   328,     0,
      77,   260,     0,     0,    77,     0,     0,   262,     0,     0,
     262,   262,     0,     0,   307,   307,   506,     0,     0,   328,
       0,     0,     0,   262,     0,     0,     0,     0,     0,   260,
     328,   328,   529,     0,     0,   328,     0,    76,   260,   260,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   261,
       0,     0,   261,   261,    77,   164,     0,     0,     0,    76,
     259,     0,     0,    76,     0,   261,   306,   327,    75,     0,
       0,     0,     0,     0,   371,     0,     0,     0,   247,   248,
     249,    46,     0,     0,     0,   250,     0,     0,   259,     0,
      75,   258,     0,     0,    75,     0,     0,   259,   259,   251,
       0,   252,   253,     0,     0,     0,   254,     0,     0,     0,
       0,     0,     0,   163,   255,    77,   306,     0,     0,   258,
       0,     0,     0,     0,     0,   305,   326,     0,   258,   258,
       0,     0,     0,     0,     0,     0,     0,   -96,   327,     0,
       0,   -96,   -96,   -96,   -96,     0,     0,     0,   -96,   115,
     116,   117,   118,   119,   120,     0,   304,   325,     0,   -75,
     -75,   -75,    77,     0,    77,     0,    77,    77,    77,   -96,
       0,   -75,    79,   308,    76,   305,   -23,   -96,     0,   -23,
     -23,   -23,   -23,   -23,     0,     0,     0,   -23,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,     0,   260,   326,     0,     0,
       0,   -23,   -23,   -23,   -23,    75,   304,     0,   -23,     0,
     -23,   -23,   -23,   -23,    78,   307,   -23,   260,     0,   -23,
       0,    76,     0,    76,     0,    76,    76,    76,   325,     0,
       0,     0,     0,    79,     0,    79,     0,    79,    79,    79,
       0,     0,   260,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    75,     0,    75,   259,    75,    75,    75,     0,
     383,     0,     0,   260,   247,   248,   249,    46,     0,     0,
       0,   250,     0,     0,     0,    78,   259,    78,     0,    78,
      78,    78,     0,     0,     0,   251,   258,   252,   253,    77,
      77,     0,   254,     0,     0,     0,     0,     0,   102,   105,
     255,   259,    77,     0,     0,     0,     0,   258,     0,     0,
       0,     0,     0,     0,   260,   467,     0,     0,     0,   327,
       0,     0,   259,     0,     0,     0,   476,   131,     0,     0,
     327,     0,   258,     0,     0,     0,   148,   151,     0,   437,
       0,     0,     0,     0,     0,     0,   306,   505,    76,    76,
       0,   327,     0,   258,     0,     0,     0,     0,     0,     0,
       0,    76,   327,   528,   168,   171,     0,   327,     0,     0,
       0,     0,     0,   466,     0,     0,     0,     0,   326,    75,
      75,   260,     0,     0,   260,   260,     0,     0,     0,   326,
       0,     0,    75,     0,     0,     0,     0,   260,     0,     0,
       0,     0,     0,     0,     0,   504,     0,     0,     0,   325,
     326,     0,     0,   357,   204,     0,     0,     0,     0,     0,
     325,   527,     0,   402,     0,     0,   326,   247,   248,   249,
      46,     0,     0,     0,   250,     0,   171,     0,     0,     0,
     259,   325,     0,   259,   259,   257,     0,     0,   251,     0,
     252,   253,     0,     0,     0,   254,   259,   325,     0,     0,
       0,   418,     0,   255,     0,   247,   248,   249,    46,     0,
       0,   258,   250,   257,   258,   258,   137,     0,   143,   145,
       0,     0,   257,   257,     0,     0,   251,   258,   252,   253,
    -108,  -108,     0,   254,   372,     0,     0,     0,     0,     0,
       0,   255,  -108,  -108,  -108,  -108,  -108,  -108,     0,     0,
     303,   324,  -108,  -108,  -108,   384,   -24,     0,     0,   -24,
     -24,   -24,   -24,   -24,  -108,     0,     0,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,     0,     0,     0,     0,     0,
     403,   -24,   -24,   -24,   -24,     0,    77,   306,   -24,     0,
     -24,   -24,   -24,   -24,     0,     0,   -24,     0,   -29,   -24,
     303,   419,   -29,   -29,   -29,   -29,     0,     0,     0,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,     0,     0,     0,
       0,     0,   324,   -29,   -29,   -29,   -29,   448,     0,     0,
     -29,     0,   -29,   -29,   -29,   -29,     0,     0,   -29,     0,
       0,   -29,     0,     0,     0,    76,   305,    77,     0,    77,
       0,    77,    77,    77,   539,     0,     0,   171,   247,   248,
     249,    46,     0,     0,     0,   250,     0,     0,   171,     0,
       0,     0,     0,     0,     0,     0,    75,   304,     0,   251,
     257,   252,   253,     0,     0,     0,   254,     0,     0,   171,
       0,     0,     0,   465,   255,     0,     0,   247,   248,   249,
      46,   257,     0,     0,   250,   171,    76,     0,    76,     0,
      76,    76,    76,     0,     0,     0,     0,     0,   251,   540,
     252,   253,   545,   548,     0,   254,   257,     0,     0,     0,
       0,     0,     0,   255,     0,   559,     0,    75,     0,    75,
       0,    75,    75,    75,     0,   -25,     0,   257,   -25,   -25,
     -25,   -25,   -25,     0,     0,     0,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,   -25,     0,     0,     0,     0,     0,     0,
     -25,   -25,   -25,   -25,     0,     0,     0,   -25,     0,   -25,
     -25,   -25,   -25,     0,     0,   -25,     0,     0,   -25,     0,
     458,   460,   462,   -94,     0,     0,     0,   -94,   -94,   -94,
     -94,     0,   -95,   324,   -94,     0,   -95,   -95,   -95,   -95,
       0,     0,     0,   -95,   324,     0,     0,   484,   486,   488,
       0,   491,   493,   495,  -108,   -94,     0,     0,     0,     0,
       0,  -108,  -108,   -94,   -95,   324,     0,   513,   515,   517,
       0,     0,   -95,  -108,  -108,  -108,  -108,  -108,  -108,     0,
       0,   324,     0,  -108,  -108,  -108,     0,     0,     0,     0,
       0,     0,  -108,     0,     0,   257,     0,     0,   257,   257,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   257,     0,   -28,   357,   639,   -28,   -28,   -28,   -28,
     -28,     0,     0,     0,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,     0,     0,     0,     0,     0,     0,   -28,   -28,
     -28,   -28,     0,     0,     0,   -28,   268,   -28,   -28,   -28,
     -28,     0,     0,   -28,     0,     0,   -28,     0,   -78,   -78,
     -78,   -78,   -78,   -78,     0,     0,     0,     0,   -78,   -78,
     -78,     0,     0,     0,     0,   357,     0,   357,     0,   357,
     357,   357,     0,   -27,     0,     0,   -27,   -27,   -27,   -27,
     -27,   599,   601,   603,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,     0,     0,     0,     0,     0,     0,   -27,   -27,
     -27,   -27,     0,     0,     0,   -27,     0,   -27,   -27,   -27,
     -27,     0,     0,   -27,     0,     0,   -27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   619,   621,   623,
     -10,     0,     0,   -10,   -10,   -10,   -10,   -10,   625,   627,
     629,   -10,   -10,   -10,   -10,   -10,   -10,   -10,   -10,     0,
       0,   303,     0,     0,     0,   -10,   -10,   -10,   -10,     0,
       0,     0,   -10,     0,   -10,   -10,   -10,   -10,     0,     0,
     -10,   -46,     0,   -10,   -46,   -46,   -46,   -46,   -46,     0,
       0,     0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
       0,     0,     0,     0,     0,     0,   -46,   -46,   -46,   -46,
       0,     0,     0,   -46,     0,   -46,   -46,   -46,   -46,     0,
       0,   -46,   -57,     0,   -46,   -57,   -57,   -57,   -57,   -57,
       0,     0,     0,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,     0,     0,     0,     0,     0,     0,   -57,   -57,   -57,
     -57,     0,     0,     0,   -57,     0,   -57,   -57,   -57,   -57,
       0,     0,   -57,   -56,     0,   -57,   -56,   -56,   -56,   -56,
     -56,     0,     0,     0,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,     0,     0,     0,     0,     0,     0,   -56,   -56,
     -56,   -56,     0,     0,     0,   -56,     0,   -56,   -56,   -56,
     -56,     0,     0,   -56,   -30,     0,   -56,   -30,   -30,   -30,
     -30,   -30,     0,     0,     0,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,     0,     0,     0,     0,     0,     0,   -30,
     -30,   -30,   -30,     0,     0,     0,   -30,     0,   -30,   -30,
     -30,   -30,     0,     0,   -30,   -52,     0,   -30,   -52,   -52,
     -52,   -52,   -52,     0,     0,     0,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,     0,     0,     0,     0,     0,     0,
     -52,   -52,   -52,   -52,     0,     0,     0,   -52,     0,   -52,
     -52,   -52,   -52,     0,     0,   -52,   -48,     0,   -52,   -48,
     -48,   -48,   -48,   -48,     0,     0,     0,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,     0,     0,     0,     0,     0,
       0,   -48,   -48,   -48,   -48,     0,     0,     0,   -48,     0,
     -48,   -48,   -48,   -48,     0,     0,   -48,   -49,     0,   -48,
     -49,   -49,   -49,   -49,   -49,     0,     0,     0,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,     0,     0,     0,     0,
       0,     0,   -49,   -49,   -49,   -49,     0,     0,     0,   -49,
       0,   -49,   -49,   -49,   -49,     0,     0,   -49,   -47,     0,
     -49,   -47,   -47,   -47,   -47,   -47,     0,     0,     0,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,     0,     0,
       0,     0,     0,   -47,   -47,   -47,   -47,     0,     0,     0,
     -47,     0,   -47,   -47,   -47,   -47,     0,     0,   -47,   -20,
       0,   -47,   -20,   -20,   -20,   -20,   -20,     0,     0,     0,
     -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,     0,     0,
       0,     0,     0,     0,   -20,   -20,   -20,   -20,     0,     0,
       0,   -20,     0,   -20,   -20,   -20,   -20,     0,     0,   -20,
      -8,     0,   -20,    -8,    -8,    -8,    -8,    -8,     0,     0,
       0,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,     0,
       0,     0,     0,     0,     0,    -8,    -8,    -8,    -8,     0,
       0,     0,    -8,     0,    -8,    -8,    -8,    -8,     0,     0,
      -8,   -41,     0,    -8,   -41,   -41,   -41,   -41,   -41,     0,
       0,     0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
       0,     0,     0,     0,     0,     0,   -41,   -41,   -41,   -41,
       0,     0,     0,   -41,     0,   -41,   -41,   -41,   -41,     0,
       0,   -41,   -40,     0,   -41,   -40,   -40,   -40,   -40,   -40,
       0,     0,     0,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,     0,     0,     0,     0,     0,     0,   -40,   -40,   -40,
     -40,     0,     0,     0,   -40,     0,   -40,   -40,   -40,   -40,
       0,     0,   -40,   -42,     0,   -40,   666,   -42,   -42,   -42,
     -42,     0,     0,     0,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,     0,     0,     0,     0,     0,     0,   -42,   -42,
     -42,   -42,     0,     0,     0,   -42,     0,   -42,   -42,   -42,
     -42,     0,     0,   -42,   -36,     0,   -42,   -36,   -36,   -36,
     -36,   -36,     0,     0,     0,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,     0,     0,     0,     0,     0,     0,   -36,
     -36,   -36,   -36,     0,     0,     0,   -36,     0,   -36,   -36,
     -36,   -36,     0,     0,   -36,   -32,     0,   -36,   -32,   -32,
     -32,   -32,   -32,     0,     0,     0,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,     0,     0,     0,     0,     0,     0,
     -32,   -32,   -32,   -32,     0,     0,     0,   -32,     0,   -32,
     -32,   -32,   -32,     0,     0,   -32,   -31,     0,   -32,   -31,
     -31,   -31,   -31,   -31,     0,     0,     0,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,     0,     0,     0,     0,     0,
       0,   -31,   -31,   -31,   -31,     0,     0,     0,   -31,     0,
     -31,   -31,   -31,   -31,     0,     0,   -31,   -37,     0,   -31,
     -37,   -37,   -37,   -37,   -37,     0,     0,     0,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,     0,     0,     0,     0,
       0,     0,   -37,   -37,   -37,   -37,     0,     0,     0,   -37,
       0,   -37,   -37,   -37,   -37,     0,     0,   -37,   -34,     0,
     -37,   -34,   -34,   -34,   -34,   -34,     0,     0,     0,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,     0,     0,
       0,     0,     0,   -34,   -34,   -34,   -34,     0,     0,     0,
     -34,     0,   -34,   -34,   -34,   -34,     0,     0,   -34,   -33,
       0,   -34,   -33,   -33,   -33,   -33,   -33,     0,     0,     0,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,
       0,     0,     0,     0,   -33,   -33,   -33,   -33,     0,     0,
       0,   -33,     0,   -33,   -33,   -33,   -33,     0,     0,   -33,
     -38,     0,   -33,   -38,   -38,   -38,   -38,   -38,     0,     0,
       0,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,
       0,     0,     0,     0,     0,   -38,   -38,   -38,   -38,     0,
       0,     0,   -38,     0,   -38,   -38,   -38,   -38,     0,     0,
     -38,   -35,     0,   -38,   -35,   -35,   -35,   -35,   -35,     0,
       0,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
       0,     0,     0,     0,     0,     0,   -35,   -35,   -35,   -35,
       0,     0,     0,   -35,     0,   -35,   -35,   -35,   -35,     0,
       0,   -35,    -9,     0,   -35,    -9,    -9,    -9,    -9,    -9,
       0,     0,     0,    -9,    -9,    -9,    -9,    -9,    -9,    -9,
      -9,     0,     0,     0,     0,     0,     0,    -9,    -9,    -9,
      -9,     0,     0,     0,    -9,     0,    -9,    -9,    -9,    -9,
       0,     0,    -9,   -43,     0,    -9,   -43,   -43,   -43,   -43,
     -43,     0,     0,     0,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,     0,     0,     0,     0,     0,     0,   -43,   -43,
     -43,   -43,     0,     0,     0,   -43,     0,   -43,   -43,   -43,
     -43,     0,     0,   -43,   -53,     0,   -43,   -53,   -53,   -53,
     -53,   -53,     0,     0,     0,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,     0,     0,     0,     0,     0,     0,   -53,
     -53,   -53,   -53,     0,     0,     0,   -53,     0,   -53,   -53,
     -53,   -53,     0,     0,   -53,   -54,     0,   -53,   -54,   -54,
     -54,   -54,   -54,     0,     0,     0,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,     0,     0,     0,     0,     0,     0,
     -54,   -54,   -54,   -54,     0,     0,     0,   -54,     0,   -54,
     -54,   -54,   -54,     0,     0,   -54,   -55,     0,   -54,   -55,
     -55,   -55,   -55,   -55,     0,     0,     0,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,     0,     0,     0,     0,     0,
       0,   -55,   -55,   -55,   -55,     0,     0,     0,   -55,     0,
     -55,   -55,   -55,   -55,     0,     0,   -55,   -50,     0,   -55,
     -50,   -50,   -50,   -50,   -50,     0,     0,     0,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,     0,     0,     0,     0,
       0,     0,   -50,   -50,   -50,   -50,     0,     0,     0,   -50,
       0,   -50,   -50,   -50,   -50,     0,     0,   -50,   -51,     0,
     -50,   -51,   -51,   -51,   -51,   -51,     0,     0,     0,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,     0,     0,     0,
       0,     0,     0,   -51,   -51,   -51,   -51,     0,     0,     0,
     -51,     0,   -51,   -51,   -51,   -51,     0,     0,   -51,   -39,
       0,   -51,   -39,   -39,   -39,   -39,   -39,     0,     0,     0,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,     0,     0,
       0,     0,     0,     0,   -39,   -39,   -39,   -39,     0,     0,
       0,   -39,     0,   -39,   -39,   -39,   -39,     0,     0,   -39,
      43,     0,   -39,     0,   243,    44,    45,    46,     0,     0,
       0,    47,   237,   238,   239,   240,    48,    49,    50,     0,
       0,     0,     0,     0,     0,    51,    52,    53,    54,     0,
       0,     0,    55,     0,    56,    57,    58,    59,     0,     0,
      60,   -26,     0,   -22,     0,   -26,   -26,   -26,   -26,     0,
       0,     0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
       0,     0,     0,     0,     0,     0,   -26,   -26,   -26,   -26,
       0,     0,     0,   -26,     0,   -26,   -26,   -26,   -26,     0,
       0,   -26,   -23,     0,   -26,     0,   -23,   -23,   -23,   -23,
       0,     0,     0,   -23,   -23,   -23,   -23,   -23,   -23,   -23,
     -23,     0,     0,     0,     0,     0,     0,   -23,   -23,   -23,
     -23,     0,     0,     0,   -23,     0,   -23,   -23,   -23,   -23,
       0,     0,   -23,   -24,     0,   -23,     0,   -24,   -24,   -24,
     -24,     0,     0,     0,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,     0,     0,     0,     0,     0,     0,   -24,   -24,
     -24,   -24,     0,     0,     0,   -24,     0,   -24,   -24,   -24,
     -24,     0,     0,   -24,   -25,     0,   -24,     0,   -25,   -25,
     -25,   -25,     0,     0,     0,   -25,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,     0,     0,     0,     0,     0,     0,   -25,
     -25,   -25,   -25,     0,     0,     0,   -25,     0,   -25,   -25,
     -25,   -25,     0,     0,   -25,   -28,     0,   -25,     0,   -28,
     -28,   -28,   -28,     0,     0,     0,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,     0,     0,     0,     0,     0,     0,
     -28,   -28,   -28,   -28,     0,     0,     0,   -28,     0,   -28,
     -28,   -28,   -28,     0,     0,   -28,   -27,     0,   -28,     0,
     -27,   -27,   -27,   -27,     0,     0,     0,   -27,   -27,   -27,
     -27,   -27,   -27,   -27,   -27,     0,     0,     0,     0,     0,
       0,   -27,   -27,   -27,   -27,     0,     0,     0,   -27,     0,
     -27,   -27,   -27,   -27,     0,     0,   -27,   -46,     0,   -27,
       0,   -46,   -46,   -46,   -46,     0,     0,     0,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,     0,     0,     0,     0,
       0,     0,   -46,   -46,   -46,   -46,     0,     0,     0,   -46,
       0,   -46,   -46,   -46,   -46,     0,     0,   -46,   -57,     0,
     -46,     0,   -57,   -57,   -57,   -57,     0,     0,     0,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,     0,     0,     0,
       0,     0,     0,   -57,   -57,   -57,   -57,     0,     0,     0,
     -57,     0,   -57,   -57,   -57,   -57,     0,     0,   -57,   -56,
       0,   -57,     0,   -56,   -56,   -56,   -56,     0,     0,     0,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,     0,     0,
       0,     0,     0,     0,   -56,   -56,   -56,   -56,     0,     0,
       0,   -56,     0,   -56,   -56,   -56,   -56,     0,     0,   -56,
     -30,     0,   -56,     0,   -30,   -30,   -30,   -30,     0,     0,
       0,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,
       0,     0,     0,     0,     0,   -30,   -30,   -30,   -30,     0,
       0,     0,   -30,     0,   -30,   -30,   -30,   -30,     0,     0,
     -30,   -52,     0,   -30,     0,   -52,   -52,   -52,   -52,     0,
       0,     0,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
       0,     0,     0,     0,     0,     0,   -52,   -52,   -52,   -52,
       0,     0,     0,   -52,     0,   -52,   -52,   -52,   -52,     0,
       0,   -52,   -48,     0,   -52,     0,   -48,   -48,   -48,   -48,
       0,     0,     0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,     0,     0,     0,     0,     0,     0,   -48,   -48,   -48,
     -48,     0,     0,     0,   -48,     0,   -48,   -48,   -48,   -48,
       0,     0,   -48,   -49,     0,   -48,     0,   -49,   -49,   -49,
     -49,     0,     0,     0,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,     0,     0,     0,     0,     0,     0,   -49,   -49,
     -49,   -49,     0,     0,     0,   -49,     0,   -49,   -49,   -49,
     -49,     0,     0,   -49,   -47,     0,   -49,     0,   -47,   -47,
     -47,   -47,     0,     0,     0,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,     0,     0,     0,     0,     0,     0,   -47,
     -47,   -47,   -47,     0,     0,     0,   -47,     0,   -47,   -47,
     -47,   -47,     0,     0,   -47,   -41,     0,   -47,     0,   -41,
     -41,   -41,   -41,     0,     0,     0,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,     0,     0,     0,     0,     0,     0,
     -41,   -41,   -41,   -41,     0,     0,     0,   -41,     0,   -41,
     -41,   -41,   -41,     0,     0,   -41,   -40,     0,   -41,     0,
     -40,   -40,   -40,   -40,     0,     0,     0,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,     0,     0,     0,     0,     0,
       0,   -40,   -40,   -40,   -40,     0,     0,     0,   -40,     0,
     -40,   -40,   -40,   -40,     0,     0,   -40,   -36,     0,   -40,
       0,   -36,   -36,   -36,   -36,     0,     0,     0,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,     0,     0,     0,     0,
       0,     0,   -36,   -36,   -36,   -36,     0,     0,     0,   -36,
       0,   -36,   -36,   -36,   -36,     0,     0,   -36,   -32,     0,
     -36,     0,   -32,   -32,   -32,   -32,     0,     0,     0,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,     0,     0,
       0,     0,     0,   -32,   -32,   -32,   -32,     0,     0,     0,
     -32,     0,   -32,   -32,   -32,   -32,     0,     0,   -32,   -31,
       0,   -32,     0,   -31,   -31,   -31,   -31,     0,     0,     0,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,
       0,     0,     0,     0,   -31,   -31,   -31,   -31,     0,     0,
       0,   -31,     0,   -31,   -31,   -31,   -31,     0,     0,   -31,
     -37,     0,   -31,     0,   -37,   -37,   -37,   -37,     0,     0,
       0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,
       0,     0,     0,     0,     0,   -37,   -37,   -37,   -37,     0,
       0,     0,   -37,     0,   -37,   -37,   -37,   -37,     0,     0,
     -37,   -34,     0,   -37,     0,   -34,   -34,   -34,   -34,     0,
       0,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
       0,     0,     0,     0,     0,     0,   -34,   -34,   -34,   -34,
       0,     0,     0,   -34,     0,   -34,   -34,   -34,   -34,     0,
       0,   -34,   -33,     0,   -34,     0,   -33,   -33,   -33,   -33,
       0,     0,     0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,     0,     0,     0,     0,     0,     0,   -33,   -33,   -33,
     -33,     0,     0,     0,   -33,     0,   -33,   -33,   -33,   -33,
       0,     0,   -33,   -38,     0,   -33,     0,   -38,   -38,   -38,
     -38,     0,     0,     0,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,     0,     0,     0,     0,     0,     0,   -38,   -38,
     -38,   -38,     0,     0,     0,   -38,     0,   -38,   -38,   -38,
     -38,     0,     0,   -38,   -35,     0,   -38,     0,   -35,   -35,
     -35,   -35,     0,     0,     0,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,     0,     0,     0,     0,     0,     0,   -35,
     -35,   -35,   -35,     0,     0,     0,   -35,     0,   -35,   -35,
     -35,   -35,     0,     0,   -35,   -43,     0,   -35,     0,   -43,
     -43,   -43,   -43,     0,     0,     0,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,     0,     0,     0,     0,     0,     0,
     -43,   -43,   -43,   -43,     0,     0,     0,   -43,     0,   -43,
     -43,   -43,   -43,     0,     0,   -43,   -53,     0,   -43,     0,
     -53,   -53,   -53,   -53,     0,     0,     0,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,     0,     0,     0,     0,     0,
       0,   -53,   -53,   -53,   -53,     0,     0,     0,   -53,     0,
     -53,   -53,   -53,   -53,     0,     0,   -53,   -54,     0,   -53,
       0,   -54,   -54,   -54,   -54,     0,     0,     0,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,     0,     0,     0,     0,
       0,     0,   -54,   -54,   -54,   -54,     0,     0,     0,   -54,
       0,   -54,   -54,   -54,   -54,     0,     0,   -54,   -55,     0,
     -54,     0,   -55,   -55,   -55,   -55,     0,     0,     0,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,     0,     0,     0,
       0,     0,     0,   -55,   -55,   -55,   -55,     0,     0,     0,
     -55,     0,   -55,   -55,   -55,   -55,     0,     0,   -55,   -50,
       0,   -55,     0,   -50,   -50,   -50,   -50,     0,     0,     0,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,     0,
       0,     0,     0,     0,   -50,   -50,   -50,   -50,     0,     0,
       0,   -50,     0,   -50,   -50,   -50,   -50,     0,     0,   -50,
     -51,     0,   -50,     0,   -51,   -51,   -51,   -51,     0,     0,
       0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,     0,
       0,     0,     0,     0,     0,   -51,   -51,   -51,   -51,     0,
       0,     0,   -51,     0,   -51,   -51,   -51,   -51,     0,     0,
     -51,   -39,     0,   -51,     0,   -39,   -39,   -39,   -39,     0,
       0,     0,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
       0,     0,     0,     0,     0,     0,   -39,   -39,   -39,   -39,
       0,     0,     0,   -39,     0,   -39,   -39,   -39,   -39,     0,
       0,   -39,   -10,     0,   -39,     0,   -10,   -10,   -10,   -10,
       0,     0,     0,   -10,   -10,   -10,   -10,   -10,   -10,   -10,
     -10,     0,     0,     0,     0,     0,     0,   -10,   -10,   -10,
     -10,     0,     0,     0,   -10,     0,   -10,   -10,   -10,   -10,
       0,     0,   -10,    -8,     0,   -10,     0,    -8,    -8,    -8,
      -8,     0,     0,     0,    -8,    -8,    -8,    -8,    -8,    -8,
      -8,    -8,     0,     0,     0,     0,     0,     0,    -8,    -8,
      -8,    -8,     0,     0,     0,    -8,     0,    -8,    -8,    -8,
      -8,     0,     0,    -8,   -45,     0,    -8,     0,   -45,   -45,
     -45,   -45,     0,     0,     0,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,     0,     0,     0,     0,     0,     0,   -45,
     -45,   -45,   -45,     0,     0,     0,   -45,     0,   -45,   -45,
     -45,   -45,     0,     0,   -45,   -44,     0,   -45,     0,   -44,
     -44,   -44,   -44,     0,     0,     0,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,     0,     0,     0,     0,     0,     0,
     -44,   -44,   -44,   -44,     0,     0,     0,   -44,     0,   -44,
     -44,   -44,   -44,     0,     0,   -44,    -9,     0,   -44,     0,
      -9,    -9,    -9,    -9,     0,     0,     0,    -9,    -9,    -9,
      -9,    -9,    -9,    -9,    -9,     0,     0,     0,     0,     0,
       0,    -9,    -9,    -9,    -9,     0,     0,     0,    -9,     0,
      -9,    -9,    -9,    -9,     0,     0,    -9,   -20,     0,    -9,
       0,   -20,   -20,   -20,   -20,     0,     0,     0,   -20,   -20,
     -20,   -20,   -20,   -20,   -20,   -20,     0,     0,     0,     0,
       0,     0,   -20,   -20,   -20,   -20,     0,     0,     0,   -20,
       0,   -20,   -20,   -20,   -20,     0,     0,   -20,   341,     0,
     -20,     0,   243,    44,    45,    46,     0,     0,     0,    47,
     237,   238,   239,   240,   342,   343,   344,     0,     0,     0,
       0,     0,     0,    51,    52,    53,    54,     0,     0,     0,
      55,     0,   345,   346,   347,   348,     0,    43,    60,     0,
     349,   243,    44,    45,    46,     0,     0,     0,    47,   237,
     238,   239,   240,    48,    49,    50,     0,     0,     0,     0,
       0,     0,    51,    52,    53,    54,     0,     0,     0,    55,
       0,    56,    57,    58,    59,     0,    43,    60,     0,   361,
     243,    44,    45,    46,     0,     0,     0,    47,   237,   238,
     239,   240,    48,    49,    50,     0,     0,     0,     0,     0,
       0,    51,    52,    53,    54,     0,     0,     0,    55,     0,
      56,    57,    58,    59,   -97,     0,    60,     0,   -97,   -97,
     -97,   -97,     0,   -98,     0,   -97,     0,   -98,   -98,   -98,
     -98,     0,   -99,     0,   -98,     0,   -99,   -99,   -99,   -99,
       0,     0,     0,   -99,     0,  -106,   -97,     0,     0,  -106,
    -106,  -106,  -106,     0,   -97,   -98,  -106,     0,     0,     0,
       0,     0,  -105,   -98,   -99,     0,  -105,  -105,  -105,  -105,
       0,     0,   -99,  -105,     0,   436,     0,  -106,     0,   271,
     272,   273,    46,     0,   457,  -106,   274,     0,   271,   272,
     273,    46,     0,   459,  -105,   274,     0,   271,   272,   273,
      46,     0,  -105,     0,   274,     0,   461,   275,     0,     0,
     271,   272,   273,    46,     0,   276,   275,   274,     0,     0,
       0,     0,     0,   465,   276,   275,     0,   247,   248,   249,
      46,     0,     0,   276,   250,     0,   483,     0,   275,     0,
     271,   272,   273,    46,     0,   485,   276,   274,     0,   271,
     272,   273,    46,     0,   487,   254,   274,     0,   271,   272,
     273,    46,     0,   255,     0,   274,     0,   490,   275,     0,
       0,   271,   272,   273,    46,     0,   276,   275,   274,     0,
       0,     0,     0,     0,   492,   276,   275,     0,   271,   272,
     273,    46,     0,     0,   276,   274,     0,   494,     0,   275,
       0,   271,   272,   273,    46,     0,   292,   276,   274,     0,
     293,   294,   295,    46,     0,   512,   275,   296,     0,   271,
     272,   273,    46,     0,   276,     0,   274,     0,   514,   275,
       0,     0,   271,   272,   273,    46,     0,   276,   300,   274,
       0,     0,     0,     0,     0,   516,   301,   275,     0,   271,
     272,   273,    46,     0,     0,   276,   274,     0,   526,     0,
     275,     0,   314,   315,   316,    46,     0,   598,   276,   317,
       0,   271,   272,   273,    46,     0,   600,   275,   274,     0,
     271,   272,   273,    46,     0,   276,     0,   274,     0,   602,
     321,     0,     0,   271,   272,   273,    46,     0,   322,   275,
     274,     0,     0,     0,     0,     0,   618,   276,   275,     0,
     271,   272,   273,    46,     0,     0,   276,   274,     0,   620,
       0,   275,     0,   271,   272,   273,    46,     0,   622,   276,
     274,     0,   271,   272,   273,    46,     0,   624,   275,   274,
       0,   271,   272,   273,    46,     0,   276,     0,   274,     0,
     626,   275,     0,     0,   271,   272,   273,    46,     0,   276,
     275,   274,     0,     0,     0,     0,     0,   628,   276,   275,
       0,   271,   272,   273,    46,     0,     0,   276,   274,     0,
       0,  -107,   275,     0,     0,     0,     0,     0,  -107,  -107,
     276,     0,     0,     0,     0,     0,     0,     0,     0,   275,
    -107,  -107,  -107,  -107,  -107,  -107,  -109,   276,     0,     0,
    -107,  -107,  -107,  -109,  -109,     0,     0,     0,     0,  -107,
       0,     0,     0,     0,     0,  -109,  -109,  -109,  -109,  -109,
    -109,   -80,     0,     0,     0,  -109,  -109,  -109,   -80,   123,
       0,     0,     0,     0,  -109,     0,     0,     0,     0,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -82,     0,     0,     0,
     -80,   -80,   -80,   -82,   -82,     0,     0,     0,     0,   -80,
       0,     0,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -83,     0,     0,     0,   -82,   -82,   -82,   -83,   -83,
       0,     0,     0,     0,   -82,     0,     0,     0,     0,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -91,     0,     0,     0,
     -83,   -83,   -83,   -91,   -91,     0,     0,     0,     0,   -83,
       0,     0,     0,     0,     0,   -91,   -91,   -91,   -91,   -91,
     -91,   -84,     0,     0,     0,   -91,   -91,   -91,   -84,   -84,
       0,     0,     0,     0,   -91,     0,     0,     0,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -90,     0,     0,     0,
     -84,   -84,   -84,   -90,   -90,     0,     0,     0,     0,   -84,
       0,     0,     0,     0,     0,   -90,   -90,   -90,   -90,   -90,
     -90,   -85,     0,     0,     0,   -90,   -90,   -90,   -85,   -85,
       0,     0,     0,     0,   -90,     0,     0,     0,     0,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -89,     0,     0,     0,
     -85,   -85,   -85,   -89,   -89,     0,     0,     0,     0,   -85,
       0,     0,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,
     -89,   -93,     0,     0,     0,   -89,   -89,   -89,   -93,   -93,
       0,     0,     0,     0,   -89,     0,     0,     0,     0,     0,
     -93,   -93,   -93,   -93,   -93,   -93,   -92,     0,     0,     0,
     -93,   -93,   -93,   -92,   -92,     0,     0,     0,     0,   -93,
       0,     0,     0,     0,     0,   -92,   -92,   -92,   -92,   -92,
     -92,   -79,     0,     0,     0,   -92,   -92,   -92,   -79,   123,
       0,     0,     0,     0,   -92,     0,     0,     0,     0,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -81,     0,     0,     0,
     -79,   -79,   -79,   -81,   -81,     0,     0,     0,     0,   -79,
       0,     0,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -87,     0,     0,     0,   -81,   -81,   -81,   -87,   -87,
       0,     0,     0,     0,   -81,     0,     0,     0,     0,     0,
     -87,   -87,   -87,   -87,   -87,   -87,   -88,     0,     0,     0,
     -87,   -87,   -87,   -88,   -88,     0,     0,     0,     0,   -87,
       0,     0,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -86,     0,     0,     0,   -88,   -88,   -88,   -86,   -86,
       0,     0,     0,     0,   -88,     0,     0,     0,     0,     0,
     -86,   -86,   -86,   -86,   -86,   -86,  -104,     0,     0,     0,
     -86,   -86,   -86,  -104,  -104,     0,     0,     0,     0,   -86,
       0,     0,     0,     0,     0,  -104,  -104,  -104,  -104,  -104,
    -104,   -78,     0,     0,     0,  -104,  -104,  -104,   268,     0,
       0,     0,     0,     0,  -104,     0,     0,     0,     0,     0,
     -78,   -78,   -78,   -78,   -78,   -78,   -77,     0,     0,     0,
     -78,   -78,   -78,   268,     0,     0,     0,     0,     0,   -78,
       0,     0,     0,     0,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -76,     0,     0,     0,   -77,   -77,   -77,     0,     0,
       0,     0,     0,     0,   -77,     0,     0,     0,     0,     0,
     115,   116,   117,   118,   119,   120,   -75,     0,     0,     0,
     -76,   -76,   -76,     0,     0,     0,     0,     0,     0,   -76,
       0,     0,     0,     0,     0,   115,   116,   117,   118,   119,
     120,     0,     0,   -90,   -90,   -75,   -75,   -75,     0,     0,
       0,     0,     0,     0,   -75,   -90,   -90,   -90,   -90,   -90,
     -90,     0,     0,     0,     0,   -90,   -90,   -90,  -104,  -104,
       0,     0,     0,     0,     0,   -90,   426,   -90,     0,     0,
    -104,  -104,  -104,  -104,  -104,  -104,     0,     0,     0,     0,
    -104,  -104,  -104,   -90,   -90,     0,     0,     0,     0,     0,
       0,  -104,  -104,     0,     0,   -90,   -90,   -90,   -90,   -90,
     -90,     0,     0,     0,     0,   -90,   -90,   -90,  -108,  -108,
       0,     0,     0,     0,     0,     0,   378,   -90,     0,     0,
    -108,  -108,  -108,  -108,  -108,  -108,     0,     0,     0,     0,
    -108,  -108,  -108,  -107,  -107,     0,     0,     0,     0,     0,
    -108,     0,  -108,     0,     0,  -107,  -107,  -107,  -107,  -107,
    -107,     0,     0,     0,     0,  -107,  -107,  -107,  -109,  -109,
       0,     0,     0,     0,     0,  -107,     0,  -107,     0,     0,
    -109,  -109,  -109,  -109,  -109,  -109,     0,     0,     0,     0,
    -109,  -109,  -109,   -80,   123,     0,     0,     0,     0,     0,
    -109,     0,  -109,     0,     0,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,     0,     0,   -80,   -80,   -80,   -82,   -82,
       0,     0,     0,     0,     0,   -80,     0,   -80,     0,     0,
     -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,
     -82,   -82,   -82,   -83,   -83,     0,     0,     0,     0,     0,
     -82,     0,   -82,     0,     0,   -83,   -83,   -83,   -83,   -83,
     -83,     0,     0,     0,     0,   -83,   -83,   -83,   -91,   -91,
       0,     0,     0,     0,     0,   -83,     0,   -83,     0,     0,
     -91,   -91,   -91,   -91,   -91,   -91,     0,     0,     0,     0,
     -91,   -91,   -91,  -104,  -104,     0,     0,     0,     0,     0,
     -91,     0,   -91,     0,     0,  -104,  -104,  -104,  -104,  -104,
    -104,     0,     0,     0,     0,  -104,  -104,  -104,   -84,   -84,
       0,     0,     0,     0,     0,  -104,     0,  -104,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,     0,
     -84,   -84,   -84,   -90,   -90,     0,     0,     0,     0,     0,
     -84,     0,   -84,     0,     0,   -90,   -90,   -90,   -90,   -90,
     -90,     0,     0,     0,     0,   -90,   -90,   -90,   -85,   -85,
       0,     0,     0,     0,     0,   -90,     0,   -90,     0,     0,
     -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,     0,
     -85,   -85,   -85,   -89,   -89,     0,     0,     0,     0,     0,
     -85,     0,   -85,     0,     0,   -89,   -89,   -89,   -89,   -89,
     -89,     0,     0,     0,     0,   -89,   -89,   -89,   -93,   -93,
       0,     0,     0,     0,     0,   -89,     0,   -89,     0,     0,
     -93,   -93,   -93,   -93,   -93,   -93,     0,     0,     0,     0,
     -93,   -93,   -93,   -92,   -92,     0,     0,     0,     0,     0,
     -93,     0,   -93,     0,     0,   -92,   -92,   -92,   -92,   -92,
     -92,     0,     0,     0,     0,   -92,   -92,   -92,   -79,   123,
       0,     0,     0,     0,     0,   -92,     0,   -92,     0,     0,
     -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,     0,
     -79,   -79,   -79,   -81,   -81,     0,     0,     0,     0,     0,
     -79,     0,   -79,     0,     0,   -81,   -81,   -81,   -81,   -81,
     -81,     0,     0,     0,     0,   -81,   -81,   -81,   -87,   -87,
       0,     0,     0,     0,     0,   -81,     0,   -81,     0,     0,
     -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,     0,
     -87,   -87,   -87,   -88,   -88,     0,     0,     0,     0,     0,
     -87,     0,   -87,     0,     0,   -88,   -88,   -88,   -88,   -88,
     -88,     0,     0,     0,     0,   -88,   -88,   -88,   -86,   -86,
       0,     0,     0,     0,     0,   -88,     0,   -88,     0,     0,
     -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,     0,
     -86,   -86,   -86,  -107,  -107,     0,     0,     0,     0,     0,
     -86,     0,   -86,     0,     0,  -107,  -107,  -107,  -107,  -107,
    -107,     0,     0,     0,     0,  -107,  -107,  -107,  -109,  -109,
       0,     0,     0,     0,     0,     0,     0,  -107,     0,     0,
    -109,  -109,  -109,  -109,  -109,  -109,     0,     0,     0,     0,
    -109,  -109,  -109,   -80,   123,     0,     0,     0,     0,     0,
       0,     0,  -109,     0,     0,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,     0,     0,   -80,   -80,   -80,   -82,   -82,
       0,     0,     0,     0,     0,     0,     0,   -80,     0,     0,
     -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,
     -82,   -82,   -82,   -83,   -83,     0,     0,     0,     0,     0,
       0,     0,   -82,     0,     0,   -83,   -83,   -83,   -83,   -83,
     -83,     0,     0,     0,     0,   -83,   -83,   -83,   -91,   -91,
       0,     0,     0,     0,     0,     0,     0,   -83,     0,     0,
     -91,   -91,   -91,   -91,   -91,   -91,     0,     0,     0,     0,
     -91,   -91,   -91,   268,     0,     0,     0,     0,     0,     0,
       0,     0,   -91,     0,     0,   -78,   -78,   -78,   -78,   -78,
     -78,     0,     0,     0,     0,   -78,   -78,   -78,  -104,  -104,
       0,     0,     0,     0,     0,   -78,     0,   -78,     0,     0,
    -104,  -104,  -104,  -104,  -104,  -104,     0,     0,     0,     0,
    -104,  -104,  -104,   -84,   -84,     0,     0,     0,     0,     0,
       0,     0,  -104,     0,     0,   -84,   -84,   -84,   -84,   -84,
     -84,     0,     0,     0,     0,   -84,   -84,   -84,   -90,   -90,
       0,     0,     0,     0,     0,     0,     0,   -84,     0,     0,
     -90,   -90,   -90,   -90,   -90,   -90,     0,     0,     0,     0,
     -90,   -90,   -90,   -85,   -85,     0,     0,     0,     0,     0,
       0,     0,   -90,     0,     0,   -85,   -85,   -85,   -85,   -85,
     -85,     0,     0,     0,     0,   -85,   -85,   -85,   -89,   -89,
       0,     0,     0,     0,     0,     0,     0,   -85,     0,     0,
     -89,   -89,   -89,   -89,   -89,   -89,     0,     0,     0,     0,
     -89,   -89,   -89,   -93,   -93,     0,     0,     0,     0,     0,
       0,     0,   -89,     0,     0,   -93,   -93,   -93,   -93,   -93,
     -93,     0,     0,     0,     0,   -93,   -93,   -93,   -92,   -92,
       0,     0,     0,     0,     0,     0,     0,   -93,     0,     0,
     -92,   -92,   -92,   -92,   -92,   -92,     0,     0,     0,     0,
     -92,   -92,   -92,   -79,   123,     0,     0,     0,     0,     0,
       0,     0,   -92,     0,     0,   -79,   -79,   -79,   -79,   -79,
     -79,     0,     0,     0,     0,   -79,   -79,   -79,   -81,   -81,
       0,     0,     0,     0,     0,     0,     0,   -79,     0,     0,
     -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,
     -81,   -81,   -81,   -87,   -87,     0,     0,     0,     0,     0,
       0,     0,   -81,     0,     0,   -87,   -87,   -87,   -87,   -87,
     -87,     0,     0,     0,     0,   -87,   -87,   -87,   268,     0,
       0,     0,     0,     0,     0,     0,     0,   -87,     0,     0,
     -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,     0,
     -77,   -77,   -77,   -88,   -88,     0,     0,     0,     0,     0,
     -77,     0,   -77,     0,     0,   -88,   -88,   -88,   -88,   -88,
     -88,     0,     0,     0,     0,   -88,   -88,   -88,   -86,   -86,
       0,     0,     0,     0,     0,     0,     0,   -88,     0,     0,
     -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,     0,
     -86,   -86,   -86,   268,     0,     0,     0,     0,     0,     0,
       0,     0,   -86,     0,     0,   -78,   -78,   -78,   -78,   -78,
     -78,     0,     0,     0,     0,   -78,   -78,   -78,   268,     0,
       0,     0,     0,     0,     0,     0,     0,   -78,     0,     0,
     -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,     0,
     -77,   -77,   -77,  -104,  -104,     0,     0,     0,     0,     0,
       0,     0,   -77,     0,     0,  -104,  -104,  -104,  -104,  -104,
    -104,     0,     0,     0,     0,  -104,  -104,  -104,   -90,   -90,
       0,     0,     0,     0,  -104,     0,  -104,     0,     0,     0,
     -90,   -90,   -90,   -90,   -90,   -90,     0,     0,     0,     0,
     -90,   -90,   -90,  -104,  -104,     0,     0,     0,     0,   -90,
       0,   410,     0,     0,     0,  -104,  -104,  -104,  -104,  -104,
    -104,     0,     0,     0,     0,  -104,  -104,  -104,   -90,   -90,
       0,     0,     0,     0,     0,     0,  -104,     0,     0,     0,
     -90,   -90,   -90,   -90,   -90,   -90,     0,     0,     0,     0,
     -90,   -90,   -90,  -108,  -108,     0,     0,     0,     0,     0,
       0,   389,     0,     0,     0,  -108,  -108,  -108,  -108,  -108,
    -108,     0,     0,  -107,  -107,  -108,  -108,  -108,     0,     0,
       0,     0,     0,     0,  -108,  -107,  -107,  -107,  -107,  -107,
    -107,     0,     0,  -109,  -109,  -107,  -107,  -107,     0,     0,
       0,     0,     0,     0,  -107,  -109,  -109,  -109,  -109,  -109,
    -109,     0,     0,   -80,   123,  -109,  -109,  -109,     0,     0,
       0,     0,     0,     0,  -109,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,   -82,   -82,   -80,   -80,   -80,     0,     0,
       0,     0,     0,     0,   -80,   -82,   -82,   -82,   -82,   -82,
     -82,     0,     0,   -83,   -83,   -82,   -82,   -82,     0,     0,
       0,     0,     0,     0,   -82,   -83,   -83,   -83,   -83,   -83,
     -83,     0,     0,   -91,   -91,   -83,   -83,   -83,     0,     0,
       0,     0,     0,     0,   -83,   -91,   -91,   -91,   -91,   -91,
     -91,     0,     0,  -104,  -104,   -91,   -91,   -91,     0,     0,
       0,     0,     0,     0,   -91,  -104,  -104,  -104,  -104,  -104,
    -104,     0,     0,   -84,   -84,  -104,  -104,  -104,     0,     0,
       0,     0,     0,     0,  -104,   -84,   -84,   -84,   -84,   -84,
     -84,     0,     0,   -90,   -90,   -84,   -84,   -84,     0,     0,
       0,     0,     0,     0,   -84,   -90,   -90,   -90,   -90,   -90,
     -90,     0,     0,   -85,   -85,   -90,   -90,   -90,     0,     0,
       0,     0,     0,     0,   -90,   -85,   -85,   -85,   -85,   -85,
     -85,     0,     0,   -89,   -89,   -85,   -85,   -85,     0,     0,
       0,     0,     0,     0,   -85,   -89,   -89,   -89,   -89,   -89,
     -89,     0,     0,   -93,   -93,   -89,   -89,   -89,     0,     0,
       0,     0,     0,     0,   -89,   -93,   -93,   -93,   -93,   -93,
     -93,     0,     0,   -92,   -92,   -93,   -93,   -93,     0,     0,
       0,     0,     0,     0,   -93,   -92,   -92,   -92,   -92,   -92,
     -92,     0,     0,   -79,   123,   -92,   -92,   -92,     0,     0,
       0,     0,     0,     0,   -92,   -79,   -79,   -79,   -79,   -79,
     -79,     0,     0,   -81,   -81,   -79,   -79,   -79,     0,     0,
       0,     0,     0,     0,   -79,   -81,   -81,   -81,   -81,   -81,
     -81,     0,     0,   -87,   -87,   -81,   -81,   -81,     0,     0,
       0,     0,     0,     0,   -81,   -87,   -87,   -87,   -87,   -87,
     -87,     0,     0,   -88,   -88,   -87,   -87,   -87,     0,     0,
       0,     0,     0,     0,   -87,   -88,   -88,   -88,   -88,   -88,
     -88,     0,     0,   -86,   -86,   -88,   -88,   -88,     0,     0,
       0,     0,     0,     0,   -88,   -86,   -86,   -86,   -86,   -86,
     -86,     0,     0,   268,     0,   -86,   -86,   -86,     0,     0,
       0,     0,     0,     0,   -86,   -78,   -78,   -78,   -78,   -78,
     -78,     0,     0,   268,     0,   -78,   -78,   -78,     0,     0,
       0,     0,     0,     0,   -78,   -77,   -77,   -77,   -77,   -77,
     -77,     0,     0,  -108,  -108,   -77,   -77,   -77,     0,     0,
       0,     0,     0,     0,   -77,  -108,  -108,  -108,  -108,  -108,
    -108,  -107,  -107,     0,     0,  -108,  -108,  -108,     0,     0,
       0,     0,     0,  -107,  -107,  -107,  -107,  -107,  -107,  -109,
    -109,     0,     0,  -107,  -107,  -107,     0,     0,     0,     0,
       0,  -109,  -109,  -109,  -109,  -109,  -109,   -80,   123,     0,
       0,  -109,  -109,  -109,     0,     0,     0,     0,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -82,   -82,     0,     0,   -80,
     -80,   -80,     0,     0,     0,     0,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -83,   -83,     0,     0,   -82,   -82,   -82,
       0,     0,     0,     0,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -91,   -91,     0,     0,   -83,   -83,   -83,     0,     0,
       0,     0,     0,   -91,   -91,   -91,   -91,   -91,   -91,  -104,
    -104,     0,     0,   -91,   -91,   -91,     0,     0,     0,     0,
       0,  -104,  -104,  -104,  -104,  -104,  -104,   -84,   -84,     0,
       0,  -104,  -104,  -104,     0,     0,     0,     0,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -90,   -90,     0,     0,   -84,
     -84,   -84,     0,     0,     0,     0,     0,   -90,   -90,   -90,
     -90,   -90,   -90,   -85,   -85,     0,     0,   -90,   -90,   -90,
       0,     0,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -89,   -89,     0,     0,   -85,   -85,   -85,     0,     0,
       0,     0,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -93,
     -93,     0,     0,   -89,   -89,   -89,     0,     0,     0,     0,
       0,   -93,   -93,   -93,   -93,   -93,   -93,   -92,   -92,     0,
       0,   -93,   -93,   -93,     0,     0,     0,     0,     0,   -92,
     -92,   -92,   -92,   -92,   -92,   -79,   123,     0,     0,   -92,
     -92,   -92,     0,     0,     0,     0,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   -81,   -81,     0,     0,   -79,   -79,   -79,
       0,     0,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -87,   -87,     0,     0,   -81,   -81,   -81,     0,     0,
       0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -88,
     -88,     0,     0,   -87,   -87,   -87,     0,     0,     0,     0,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -86,   -86,     0,
       0,   -88,   -88,   -88,     0,     0,     0,     0,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   268,     0,     0,     0,   -86,
     -86,   -86,     0,     0,     0,     0,     0,   -77,   -77,   -77,
     -77,   -77,   -77,     0,     0,     0,     0,   -77,   -77,   -77,
     115,   116,   117,   118,   119,   120,     0,     0,     0,     0,
     -76,   -76,   -76,   115,   116,   117,   118,   119,   120,     0,
     -76,     0,   -76,   -75,   -75,   -75,   115,   116,   117,   118,
     119,   120,     0,   -75,     0,   -75,   -76,   -76,   -76,   115,
     116,   117,   118,   119,   120,     0,     0,     0,     0,   -75,
     -75,   -75
};

static const yytype_int16 yycheck[] =
{
       0,    89,    11,    98,    30,    31,   197,     7,     0,    35,
      36,    63,    21,   336,    22,     7,    25,   260,    37,    19,
       1,     1,    22,     1,   174,   262,    39,    40,    37,    30,
      31,   174,    40,    39,     1,   278,     5,     1,   174,     1,
      40,    42,    11,   280,    63,   174,    55,     1,    41,     1,
      59,    60,     1,   174,    63,    40,     1,    42,    39,    39,
     174,    39,     0,   306,    13,    14,    15,    16,    30,    31,
      32,   308,    39,   174,    83,    39,    85,    39,     1,    88,
      89,    90,     5,    92,   327,    39,   174,    39,    97,    98,
      99,     1,   329,    42,    39,     1,     1,    41,    42,     5,
       6,     7,     8,   112,   113,   114,    12,    42,    13,    14,
      15,    16,   121,   122,     1,   124,   125,   126,    30,    31,
      26,     1,    28,    29,    39,    40,     5,    33,    40,    39,
      42,     1,    30,    31,   222,    41,    42,    42,    41,    42,
     221,    39,   223,     1,   225,   226,   227,    26,     5,    28,
      29,     1,    39,    42,    11,     5,     6,     7,     8,    39,
      30,    31,    12,    30,    31,   174,   175,     5,   177,    39,
       5,     5,    30,    31,   174,    42,    26,    11,    28,    29,
      39,    39,   174,    33,    30,    31,    32,   378,   197,    41,
      42,    41,    42,     1,    40,   221,    42,   223,   389,   225,
     226,   227,   221,    42,   223,     5,   225,   226,   227,   235,
       1,     1,   221,   222,   223,     5,   225,   226,   227,   410,
      42,     1,    30,    31,   467,    39,    26,    41,    28,    29,
      43,    39,   469,   476,   557,   426,     1,     5,     5,    30,
      31,   478,     1,    11,    11,   254,   255,    39,    39,     1,
      30,    31,    32,     5,     6,     7,     8,   266,     1,    39,
      12,    26,   505,    28,    29,     1,   275,   276,    41,     5,
     507,    30,    31,    44,    26,   284,    28,    29,     1,    41,
      39,    33,     1,    30,    31,   528,     5,    30,    31,    41,
      42,   300,   301,   530,     1,    42,    39,   349,     5,     6,
       7,     8,    39,   312,    41,    12,    41,    30,    31,   361,
      30,    31,   321,   322,    30,    31,    39,    41,    40,    26,
      42,    28,    29,    39,   333,    39,    33,   336,    41,   338,
     349,     0,     1,     1,    41,    42,    39,    40,    41,   348,
     349,    41,   361,     1,    13,    14,    15,    16,   443,   444,
       1,   360,   361,   441,     5,     6,     7,     8,    39,    40,
      41,    12,    30,    31,   373,   374,   375,   376,   377,   378,
      39,    39,    30,    31,    40,    26,    42,    28,    29,    41,
     389,    39,    33,    39,     5,     5,     6,     7,    41,    42,
      41,    42,    12,    41,    42,   404,   405,   406,   407,   408,
     409,   410,     5,     6,     7,    26,    41,    28,    29,    12,
      41,   420,   421,   422,   423,   424,   425,   426,     1,    41,
      42,    41,     5,     6,     7,     8,    37,    41,    42,    12,
       5,   440,   441,   442,   443,   444,   445,    41,    41,    13,
      14,    15,    16,    26,    55,    28,    29,   456,    59,    60,
      33,    26,    63,    28,    29,   605,    39,    42,    41,     1,
      40,    41,   605,    30,    31,    32,     8,     9,    42,   605,
      42,     1,    83,    40,     5,    42,   605,    88,    20,    21,
      22,    23,    24,    25,   605,    42,    97,    98,    30,    31,
      32,   605,    34,     1,    40,    41,    42,    39,    42,    41,
      30,    31,   113,   114,   605,    13,    14,    15,    16,    39,
     121,   122,    44,   124,   125,   126,   666,   605,   668,    39,
     670,   671,   672,   666,   605,   668,    30,   670,   671,   672,
     666,    40,   668,    42,   670,   671,   672,   666,    39,   668,
      41,   670,   671,   672,    39,   666,    41,   668,   557,   670,
     671,   672,   666,    40,   668,    42,   670,   671,   672,     5,
       6,     7,    34,   174,   175,   666,    12,   668,    30,   670,
     671,   672,    40,     1,    42,    42,    30,    31,   666,   667,
     668,    42,   670,   671,   672,   666,   197,   668,    42,   670,
     671,   672,    30,    31,    32,    41,   605,   606,    42,   608,
       1,    42,    30,    31,    42,   605,    42,     8,     9,     1,
     221,    39,   223,   605,   225,   226,   227,    30,    31,    20,
      21,    22,    23,    24,    25,    42,    39,    30,    31,    30,
      31,    32,    42,    34,    26,    42,    28,    29,    39,    42,
      41,    30,    31,   254,   255,     5,     6,     7,    30,    31,
      32,    40,    12,    42,   680,   266,    42,   666,   667,   668,
      42,   670,   671,   672,   275,   276,   666,    40,   668,    42,
     670,   671,   672,   284,   666,    40,   668,    42,   670,   671,
     672,    41,    30,    31,    40,     1,    42,    30,    31,   300,
     301,    42,     8,     9,    42,     5,     6,     7,    37,    42,
      41,   312,    12,    39,    20,    21,    22,    23,    24,    25,
     321,   322,    39,    40,    30,    31,    32,    42,    30,    31,
      59,    60,   333,    39,    63,    41,    41,    42,    40,     1,
      42,    41,     1,     5,     6,     7,     8,   348,   349,    78,
      12,     1,    39,    30,    31,     5,     6,     7,     8,    88,
     361,    39,    12,    40,    26,    42,    28,    29,    97,    98,
      39,    33,   373,   374,   375,   376,   377,   378,    39,    41,
       5,     6,     7,    33,   113,   114,     1,    12,   389,     1,
       5,    41,   121,   122,    39,   124,   125,   126,    41,    42,
      30,    31,    41,    42,   405,   406,   407,   408,   409,   410,
      40,    26,    42,    28,    29,    39,    41,     0,     1,    39,
     421,   422,   423,   424,   425,   426,    30,    31,    30,    31,
      13,    14,    15,    16,    39,    39,   165,    43,    40,   440,
      42,    39,   443,   444,    39,   174,   175,     1,    30,    31,
       4,     5,     6,     7,     8,   456,    42,    39,    12,    13,
      14,    15,    16,    17,    18,    19,    30,    31,   197,    30,
      31,    32,    26,    27,    28,    29,     1,    39,    42,    33,
       5,    35,    36,    37,    38,    41,    42,    41,    30,    31,
      44,    40,   221,    42,   223,    39,   225,   226,   227,    42,
      42,    26,     1,    28,    29,     4,     5,     6,     7,     8,
      42,    30,    31,    12,    13,    14,    15,    16,    17,    18,
      19,    40,    42,    42,    30,    31,   255,    26,    27,    28,
      29,    42,   261,    39,    33,    42,    35,    36,    37,    38,
      30,    31,    41,    39,    40,    44,     1,   276,     1,    39,
     279,     4,     5,     6,     7,     8,    30,    31,    42,    12,
      13,    14,    15,    16,    17,    18,    19,     1,    42,    60,
      42,     5,   301,    26,    27,    28,    29,    41,   307,     5,
      33,     5,    35,    36,    37,    38,    30,    31,    41,    41,
      42,    44,    26,   322,    28,    29,    40,    88,    42,   328,
       5,    92,    30,    31,   605,   606,    97,    98,    30,    31,
      32,     1,     0,     1,    42,     5,     6,     7,     8,   348,
     349,   112,    12,    41,    42,    13,    14,    15,    16,     5,
      30,    31,   361,    41,   125,   126,    26,    41,    28,    29,
       8,     9,    42,    33,   373,   374,   375,   376,   377,   378,
      42,    41,    20,    21,    22,    23,    24,    25,    41,    42,
     389,    34,    30,    31,    32,   666,    30,   668,    42,   670,
     671,   672,    40,    41,    42,    42,   405,   406,   407,   408,
     409,   410,    37,    41,   175,   176,   177,    41,    42,    30,
      31,    41,   421,   422,   423,   424,   425,   426,    41,    40,
      55,    42,    41,    42,    59,    60,   197,    41,    63,    30,
      31,   440,    41,     1,   443,   444,    41,     5,     6,     7,
       8,    42,    10,    41,    12,     1,    39,   456,    83,     5,
       6,     7,     8,    88,    30,    31,    12,    41,    26,   468,
      28,    29,    97,    98,    40,    33,    42,    41,   477,    41,
      30,    31,    42,    41,    40,    41,    42,    33,   113,   114,
       0,     1,    42,    42,   255,    41,   121,   122,    41,   124,
     125,   126,    37,    13,    14,    15,    16,   506,    20,    21,
      22,    23,    24,    25,     1,   276,    41,    42,    30,    31,
      32,     8,     9,    41,    59,    60,    41,    39,    63,    34,
     529,    39,    41,    20,    21,    22,    23,    24,    25,    41,
     301,    41,    42,    30,    31,    32,    40,    41,    42,   174,
     175,    41,    39,    88,    41,    20,    21,    22,    23,    24,
      25,   322,    97,    98,    39,    30,    31,    32,     0,     1,
      41,    42,   197,    42,    39,    41,    42,   338,   113,   114,
      42,    13,    14,    15,    16,    42,   121,   122,    42,   124,
     125,   126,    42,    30,    31,    39,   221,    44,   223,    41,
     225,   226,   227,    40,    44,    42,   605,   606,    41,    30,
      31,    41,    42,    30,    31,    32,    41,   378,    41,    42,
       1,    42,    39,     4,     5,     6,     7,     8,   389,   254,
     255,    12,    13,    14,    15,    16,    17,    18,    19,   174,
     175,   266,    41,   404,    41,    26,    27,    28,    29,   410,
      42,   276,    33,    42,    35,    36,    37,    38,    41,   420,
      41,    41,   197,    44,    41,   426,    42,   666,    41,   668,
      41,   670,   671,   672,    41,   300,   301,    30,    31,   440,
      41,    42,   443,   444,    30,    31,   221,   312,   223,    42,
     225,   226,   227,    39,     1,   456,   321,   322,     5,     6,
       7,     8,    41,    10,    42,    12,    30,    31,   333,    40,
      41,    42,    41,    42,     0,     1,    30,    31,    42,    26,
     255,    28,    29,   348,   349,    39,    33,    13,    14,    15,
      16,    30,    31,     1,    41,    39,   361,     5,     6,     7,
       8,   276,    42,    42,    12,    30,    31,    30,   373,   374,
     375,   376,   377,   378,    41,    42,    30,    42,    26,     1,
      28,    29,    42,     1,   389,    33,   301,     5,     6,     7,
       8,    39,    10,    41,    12,    41,    42,    30,    31,    42,
     405,   406,   407,   408,   409,   410,    42,   322,    26,    42,
      28,    29,     0,     1,    42,    33,   421,   422,   423,   424,
     425,   426,    42,    41,    39,    13,    14,    15,    16,     0,
       1,    41,    42,   348,   349,   440,    30,    31,   443,   444,
      30,    31,    13,    14,    15,    16,   361,    42,    42,    41,
      42,   456,    42,    42,    37,     0,     1,    42,   373,   374,
     375,   376,   377,   378,    42,   606,   607,   608,    13,    14,
      15,    16,    42,   388,   389,    42,    59,    60,    30,    31,
      63,    40,    41,    42,     0,     1,    42,    39,     0,     1,
     405,   406,   407,   408,   409,   410,    37,    13,    14,    15,
      16,    13,    14,    15,    16,    88,   421,   422,   423,   424,
     425,   426,    30,    31,    97,    98,    41,    42,    59,    60,
       0,     1,    63,    42,    42,   440,    41,    42,   443,   444,
     113,   114,    39,    13,    14,    15,    16,    39,   121,   122,
      39,   456,   125,   126,    41,    42,    42,    88,    41,    42,
      41,    42,    30,    31,     1,    39,    97,    98,     5,     6,
       7,     8,    39,    10,    42,    12,    20,    21,    22,    23,
      24,    25,   113,   114,    30,    31,    30,    31,    32,    26,
     121,    28,    29,    39,   125,   126,    33,    42,    42,    41,
      42,   174,   175,    42,    41,    41,    42,    30,    31,     1,
     605,   606,    39,     5,     6,     7,     8,     0,     1,    42,
      12,    39,    39,    39,   197,    39,    30,    31,    30,    31,
      13,    14,    15,    16,    26,    42,    28,    29,    42,    39,
      42,    33,    39,   174,   175,    39,    39,    42,   221,    41,
     223,     1,   225,   226,   227,     5,     6,     7,     8,    39,
      30,    31,    12,     1,    42,     7,   197,    43,   605,    -1,
      -1,   666,    42,   668,     1,   670,   671,   672,     5,     6,
       7,     8,   255,    33,    -1,    12,    30,    31,    -1,    -1,
     221,    41,   223,    -1,   225,   226,   227,    -1,    42,    -1,
     605,   606,    -1,   276,     1,    -1,    33,     4,     5,     6,
       7,     8,    -1,    -1,    41,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,   255,    30,    31,    -1,   301,    26,
      27,    28,    29,    -1,    -1,    -1,    33,    42,    35,    36,
      37,    38,    30,    31,    41,   276,     1,    44,    -1,   322,
       5,     6,     7,     8,    42,    -1,    -1,    12,    -1,    -1,
      -1,   666,    -1,   668,    -1,   670,   671,   672,     0,     1,
     301,    26,    -1,    28,    29,   348,   349,    -1,    33,    -1,
      -1,    13,    14,    15,    16,    -1,    41,    -1,   361,    -1,
      -1,   322,    30,    31,    30,    31,    30,    31,    -1,    -1,
     373,   374,   375,   376,    42,   378,    42,    -1,    42,    30,
      31,    30,    31,    32,   387,    -1,   389,   348,   349,    -1,
      39,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     361,    -1,   405,   406,   407,   408,    -1,   410,    37,    -1,
      -1,    -1,   373,   374,   375,    -1,    -1,   378,   421,   422,
     423,   424,    -1,   426,    -1,   386,    -1,    -1,   389,    -1,
      59,    60,    -1,    -1,    63,    -1,    -1,   440,    -1,    -1,
     443,   444,    -1,    -1,   405,   406,   407,    -1,    -1,   410,
      -1,    -1,    -1,   456,    -1,    -1,    -1,    -1,    -1,    88,
     421,   422,   423,    -1,    -1,   426,    -1,    37,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   440,
      -1,    -1,   443,   444,   113,   114,    -1,    -1,    -1,    59,
      60,    -1,    -1,    63,    -1,   456,   125,   126,    37,    -1,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,     5,     6,
       7,     8,    -1,    -1,    -1,    12,    -1,    -1,    88,    -1,
      59,    60,    -1,    -1,    63,    -1,    -1,    97,    98,    26,
      -1,    28,    29,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    41,   174,   175,    -1,    -1,    88,
      -1,    -1,    -1,    -1,    -1,   125,   126,    -1,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,   197,    -1,
      -1,     5,     6,     7,     8,    -1,    -1,    -1,    12,    20,
      21,    22,    23,    24,    25,    -1,   125,   126,    -1,    30,
      31,    32,   221,    -1,   223,    -1,   225,   226,   227,    33,
      -1,    42,   605,   606,   174,   175,     1,    41,    -1,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,   255,   197,    -1,    -1,
      -1,    26,    27,    28,    29,   174,   175,    -1,    33,    -1,
      35,    36,    37,    38,   605,   606,    41,   276,    -1,    44,
      -1,   221,    -1,   223,    -1,   225,   226,   227,   197,    -1,
      -1,    -1,    -1,   666,    -1,   668,    -1,   670,   671,   672,
      -1,    -1,   301,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   221,    -1,   223,   255,   225,   226,   227,    -1,
       1,    -1,    -1,   322,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    -1,    -1,    -1,   666,   276,   668,    -1,   670,
     671,   672,    -1,    -1,    -1,    26,   255,    28,    29,   348,
     349,    -1,    33,    -1,    -1,    -1,    -1,    -1,    59,    60,
      41,   301,   361,    -1,    -1,    -1,    -1,   276,    -1,    -1,
      -1,    -1,    -1,    -1,   373,   374,    -1,    -1,    -1,   378,
      -1,    -1,   322,    -1,    -1,    -1,   385,    88,    -1,    -1,
     389,    -1,   301,    -1,    -1,    -1,    97,    98,    -1,   339,
      -1,    -1,    -1,    -1,    -1,    -1,   405,   406,   348,   349,
      -1,   410,    -1,   322,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   361,   421,   422,   125,   126,    -1,   426,    -1,    -1,
      -1,    -1,    -1,   373,    -1,    -1,    -1,    -1,   378,   348,
     349,   440,    -1,    -1,   443,   444,    -1,    -1,    -1,   389,
      -1,    -1,   361,    -1,    -1,    -1,    -1,   456,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   405,    -1,    -1,    -1,   378,
     410,    -1,    -1,   174,   175,    -1,    -1,    -1,    -1,    -1,
     389,   421,    -1,     1,    -1,    -1,   426,     5,     6,     7,
       8,    -1,    -1,    -1,    12,    -1,   197,    -1,    -1,    -1,
     440,   410,    -1,   443,   444,    60,    -1,    -1,    26,    -1,
      28,    29,    -1,    -1,    -1,    33,   456,   426,    -1,    -1,
      -1,     1,    -1,    41,    -1,     5,     6,     7,     8,    -1,
      -1,   440,    12,    88,   443,   444,    91,    -1,    93,    94,
      -1,    -1,    97,    98,    -1,    -1,    26,   456,    28,    29,
       8,     9,    -1,    33,   255,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    20,    21,    22,    23,    24,    25,    -1,    -1,
     125,   126,    30,    31,    32,   276,     1,    -1,    -1,     4,
       5,     6,     7,     8,    42,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
     301,    26,    27,    28,    29,    -1,   605,   606,    33,    -1,
      35,    36,    37,    38,    -1,    -1,    41,    -1,     1,    44,
     175,   322,     5,     6,     7,     8,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,   197,    26,    27,    28,    29,   348,    -1,    -1,
      33,    -1,    35,    36,    37,    38,    -1,    -1,    41,    -1,
      -1,    44,    -1,    -1,    -1,   605,   606,   666,    -1,   668,
      -1,   670,   671,   672,     1,    -1,    -1,   378,     5,     6,
       7,     8,    -1,    -1,    -1,    12,    -1,    -1,   389,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   605,   606,    -1,    26,
     255,    28,    29,    -1,    -1,    -1,    33,    -1,    -1,   410,
      -1,    -1,    -1,     1,    41,    -1,    -1,     5,     6,     7,
       8,   276,    -1,    -1,    12,   426,   666,    -1,   668,    -1,
     670,   671,   672,    -1,    -1,    -1,    -1,    -1,    26,   440,
      28,    29,   443,   444,    -1,    33,   301,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,   456,    -1,   666,    -1,   668,
      -1,   670,   671,   672,    -1,     1,    -1,   322,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,
     365,   366,   367,     1,    -1,    -1,    -1,     5,     6,     7,
       8,    -1,     1,   378,    12,    -1,     5,     6,     7,     8,
      -1,    -1,    -1,    12,   389,    -1,    -1,   392,   393,   394,
      -1,   396,   397,   398,     1,    33,    -1,    -1,    -1,    -1,
      -1,     8,     9,    41,    33,   410,    -1,   412,   413,   414,
      -1,    -1,    41,    20,    21,    22,    23,    24,    25,    -1,
      -1,   426,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,   440,    -1,    -1,   443,   444,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   456,    -1,     1,   605,   606,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    -1,    -1,    -1,    33,     8,    35,    36,    37,
      38,    -1,    -1,    41,    -1,    -1,    44,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,
      32,    -1,    -1,    -1,    -1,   666,    -1,   668,    -1,   670,
     671,   672,    -1,     1,    -1,    -1,     4,     5,     6,     7,
       8,   536,   537,   538,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   582,   583,   584,
       1,    -1,    -1,     4,     5,     6,     7,     8,   593,   594,
     595,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,   606,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
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
      33,    -1,    35,    36,    37,    38,    -1,     1,    41,    -1,
      43,     5,     6,     7,     8,    -1,    -1,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    -1,    -1,    -1,    33,
      -1,    35,    36,    37,    38,    -1,     1,    41,    -1,    43,
       5,     6,     7,     8,    -1,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    -1,    -1,    -1,    33,    -1,
      35,    36,    37,    38,     1,    -1,    41,    -1,     5,     6,
       7,     8,    -1,     1,    -1,    12,    -1,     5,     6,     7,
       8,    -1,     1,    -1,    12,    -1,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    -1,     1,    33,    -1,    -1,     5,
       6,     7,     8,    -1,    41,    33,    12,    -1,    -1,    -1,
      -1,    -1,     1,    41,    33,    -1,     5,     6,     7,     8,
      -1,    -1,    41,    12,    -1,     1,    -1,    33,    -1,     5,
       6,     7,     8,    -1,     1,    41,    12,    -1,     5,     6,
       7,     8,    -1,     1,    33,    12,    -1,     5,     6,     7,
       8,    -1,    41,    -1,    12,    -1,     1,    33,    -1,    -1,
       5,     6,     7,     8,    -1,    41,    33,    12,    -1,    -1,
      -1,    -1,    -1,     1,    41,    33,    -1,     5,     6,     7,
       8,    -1,    -1,    41,    12,    -1,     1,    -1,    33,    -1,
       5,     6,     7,     8,    -1,     1,    41,    12,    -1,     5,
       6,     7,     8,    -1,     1,    33,    12,    -1,     5,     6,
       7,     8,    -1,    41,    -1,    12,    -1,     1,    33,    -1,
      -1,     5,     6,     7,     8,    -1,    41,    33,    12,    -1,
      -1,    -1,    -1,    -1,     1,    41,    33,    -1,     5,     6,
       7,     8,    -1,    -1,    41,    12,    -1,     1,    -1,    33,
      -1,     5,     6,     7,     8,    -1,     1,    41,    12,    -1,
       5,     6,     7,     8,    -1,     1,    33,    12,    -1,     5,
       6,     7,     8,    -1,    41,    -1,    12,    -1,     1,    33,
      -1,    -1,     5,     6,     7,     8,    -1,    41,    33,    12,
      -1,    -1,    -1,    -1,    -1,     1,    41,    33,    -1,     5,
       6,     7,     8,    -1,    -1,    41,    12,    -1,     1,    -1,
      33,    -1,     5,     6,     7,     8,    -1,     1,    41,    12,
      -1,     5,     6,     7,     8,    -1,     1,    33,    12,    -1,
       5,     6,     7,     8,    -1,    41,    -1,    12,    -1,     1,
      33,    -1,    -1,     5,     6,     7,     8,    -1,    41,    33,
      12,    -1,    -1,    -1,    -1,    -1,     1,    41,    33,    -1,
       5,     6,     7,     8,    -1,    -1,    41,    12,    -1,     1,
      -1,    33,    -1,     5,     6,     7,     8,    -1,     1,    41,
      12,    -1,     5,     6,     7,     8,    -1,     1,    33,    12,
      -1,     5,     6,     7,     8,    -1,    41,    -1,    12,    -1,
       1,    33,    -1,    -1,     5,     6,     7,     8,    -1,    41,
      33,    12,    -1,    -1,    -1,    -1,    -1,     1,    41,    33,
      -1,     5,     6,     7,     8,    -1,    -1,    41,    12,    -1,
      -1,     1,    33,    -1,    -1,    -1,    -1,    -1,     8,     9,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      20,    21,    22,    23,    24,    25,     1,    41,    -1,    -1,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      25,     1,    -1,    -1,    -1,    30,    31,    32,     8,     9,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    25,     1,    -1,    -1,    -1,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      25,     1,    -1,    -1,    -1,    30,    31,    32,     8,     9,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    25,     1,    -1,    -1,    -1,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      25,     1,    -1,    -1,    -1,    30,    31,    32,     8,     9,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    25,     1,    -1,    -1,    -1,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      25,     1,    -1,    -1,    -1,    30,    31,    32,     8,     9,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    25,     1,    -1,    -1,    -1,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      25,     1,    -1,    -1,    -1,    30,    31,    32,     8,     9,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    25,     1,    -1,    -1,    -1,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      25,     1,    -1,    -1,    -1,    30,    31,    32,     8,     9,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    25,     1,    -1,    -1,    -1,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      25,     1,    -1,    -1,    -1,    30,    31,    32,     8,     9,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    25,     1,    -1,    -1,    -1,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      25,     1,    -1,    -1,    -1,    30,    31,    32,     8,     9,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    25,     1,    -1,    -1,    -1,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      25,     1,    -1,    -1,    -1,    30,    31,    32,     8,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    25,     1,    -1,    -1,    -1,
      30,    31,    32,     8,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      25,     1,    -1,    -1,    -1,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    25,     1,    -1,    -1,    -1,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,     9,
      -1,    -1,    -1,    -1,    -1,    40,    41,    42,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    42,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    42,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,     9,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    42,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,     9,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    42,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,     9,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    42,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,     9,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    42,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,     9,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    42,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,     9,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    42,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,     9,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    42,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,     9,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    42,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,     9,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    42,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    31,    32,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,     9,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    42,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    31,    32,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    20,    21,    22,    23,    24,
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
      25,     8,     9,    -1,    -1,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    25,     8,
       9,    -1,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    23,    24,    25,     8,     9,    -1,
      -1,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    23,    24,    25,     8,    -1,    -1,    -1,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    31,    32,    20,    21,    22,    23,    24,    25,    -1,
      40,    -1,    42,    30,    31,    32,    20,    21,    22,    23,
      24,    25,    -1,    40,    -1,    42,    30,    31,    32,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      31,    32
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    13,    14,    15,    16,    46,    47,    48,    49,
      51,    83,    39,     0,     1,    48,     5,    11,    79,    41,
      39,    40,    41,     1,    52,    83,    50,    79,     1,    52,
      42,    42,    79,    39,    40,    42,    42,    43,    53,    53,
      40,    53,    53,     1,     6,     7,     8,    12,    17,    18,
      19,    26,    27,    28,    29,    33,    35,    36,    37,    38,
      41,    49,    54,    55,    56,    57,    58,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    79,    80,    82,    83,    52,    41,    41,    41,
      41,    41,    41,    41,    41,    75,    79,    41,    41,    41,
       1,    39,    64,    79,     1,    64,    44,    54,     1,    39,
      39,    39,    30,    31,    32,    20,    21,    22,    23,    24,
      25,    76,    80,     9,    81,    34,    41,    75,    79,    42,
       1,    64,    65,    79,     1,    79,     1,    68,    69,     1,
      66,    79,     1,    68,     1,    68,     1,    10,    64,    77,
       1,    64,    77,     1,    79,    39,     1,    39,    42,    42,
      66,    79,     1,    70,    71,    72,    73,    74,    64,     1,
      42,    64,    78,    42,    42,    39,    30,    30,    42,    42,
      42,    42,    42,    42,    42,    42,    42,    42,    42,    42,
      42,    42,    42,    42,    42,    40,    42,    40,    42,     1,
      53,    55,    59,    60,    64,     1,    66,     1,    66,    79,
      39,    39,    39,    39,    39,    39,    39,    39,     1,     1,
      78,     4,    39,    42,    42,    42,    42,    42,    60,    65,
      60,     1,    60,    60,    60,    42,    53,    13,    14,    15,
      16,     5,     5,     5,    39,     5,     5,     5,     6,     7,
      12,    26,    28,    29,    33,    41,    66,    68,    69,    70,
      71,    72,    73,    74,    75,    79,    80,    82,     8,     5,
       5,     5,     6,     7,    12,    33,    41,    70,    71,    72,
      73,    74,    75,    79,    80,    82,     5,    41,     5,    26,
      28,    29,     1,     5,     6,     7,    12,    26,    28,    29,
      33,    41,    66,    68,    69,    70,    71,    72,    73,    74,
      75,    79,    80,    82,     5,     6,     7,    12,    26,    28,
      29,    33,    41,    66,    68,    69,    70,    71,    72,    73,
      74,    75,    79,    80,    82,    39,    40,    41,    30,    31,
      41,     1,    17,    18,    19,    35,    36,    37,    38,    43,
      49,    56,    57,    58,    61,    62,    63,    64,    65,    67,
      83,    43,    53,    55,    79,    41,    41,    41,     5,    75,
      79,     1,    64,    31,    32,    76,    80,    81,    41,    75,
       5,    75,    79,     1,    64,    32,    76,    80,    81,    41,
      75,    42,    41,    41,    41,    41,    41,    41,    41,     5,
      75,    79,     1,    64,    30,    31,    32,    76,    80,    81,
      41,    75,    41,    41,    41,     5,    75,    79,     1,    64,
      30,    31,    32,    76,    80,    81,    41,    75,    50,    42,
       5,    26,    28,    29,    66,    79,     1,    70,    42,    39,
      41,    41,    41,    41,    41,    41,     1,    39,    64,    54,
       1,    39,    39,    39,    79,    54,    34,     1,    68,     1,
      68,     1,    68,    42,    42,     1,    70,    71,    72,    73,
      74,     1,    42,    78,    42,    42,    71,    72,    73,    74,
       1,    42,    78,     1,    68,     1,    68,     1,    68,    42,
       1,    68,     1,    68,     1,    68,    42,    42,     5,    26,
      28,    29,    66,    79,    70,    71,    72,    73,    74,     1,
      42,    78,     1,    68,     1,    68,     1,    68,    42,    42,
       5,    26,    28,    29,    66,    79,     1,    70,    71,    72,
      73,    74,     1,    42,    78,    39,    41,    41,    41,     1,
      64,    65,     1,    79,     1,    64,    77,     1,    64,    77,
       1,    79,    39,     1,    39,    44,    39,    40,    44,    64,
      42,    42,    42,    42,    42,    42,    42,    42,    42,    42,
      42,    42,    42,    42,    42,    42,    42,    42,    42,    42,
      42,    42,    41,    41,    41,    42,    42,    42,    42,    42,
      42,    42,    42,    41,    41,    41,    42,    42,     1,    68,
       1,    68,     1,    68,    42,    42,    39,    30,    30,    42,
      42,    42,    42,    42,    42,    42,    42,    50,     1,    68,
       1,    68,     1,    68,     1,    68,     1,    68,     1,    68,
      42,    42,    42,    42,    42,    42,     1,    59,    60,    64,
       1,    66,     1,    66,    79,    39,    39,    39,    39,    39,
      39,    39,    39,    39,    42,    42,    42,    42,    42,    42,
      42,    42,    42,    42,    42,    42,     4,    39,    42,    42,
      42,    42,    42,    60,    65,    60,     1,    60,    60,    60,
      42,    53
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    47,    48,    48,    49,    49,
      49,    50,    50,    51,    51,    51,    51,    52,    52,    52,
      53,    54,    54,    55,    55,    55,    55,    55,    55,    55,
      55,    56,    56,    56,    56,    56,    56,    56,    56,    57,
      58,    58,    59,    59,    60,    60,    61,    61,    61,    61,
      62,    62,    62,    62,    62,    62,    63,    63,    64,    64,
      65,    66,    66,    66,    66,    66,    66,    67,    67,    67,
      68,    68,    69,    69,    69,    70,    70,    71,    71,    72,
      72,    73,    73,    74,    74,    74,    74,    74,    74,    74,
      75,    75,    75,    75,    76,    76,    76,    76,    76,    76,
      77,    78,    78,    78,    79,    80,    81,    82,    82,    82,
      83,    83,    83,    83
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     5,
       2,     2,     1,     6,     6,     6,     6,     4,     2,     0,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     5,     5,     5,     5,     5,     5,     5,     5,     9,
       5,     5,     1,     3,     1,     1,     2,     3,     3,     3,
       7,     7,     2,     7,     7,     7,     2,     2,     1,     1,
       3,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       3,     3,     3,     1,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     1,     2,     2,     4,     3,     4,     3,
       1,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
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
#line 92 "sintatic/sintatic.y"
                         {
            (yyval.typeNode) = buildNode("program");
            (yyval.typeNode)->childNode = (yyvsp[0].typeNode);
            origin = (yyval.typeNode);
        }
#line 3426 "sintatic.tab.c"
    break;

  case 3: /* list_declaration: list_declaration main_declaration  */
#line 100 "sintatic/sintatic.y"
                                          {
            (yyvsp[-1].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3434 "sintatic.tab.c"
    break;

  case 5: /* list_declaration: error  */
#line 104 "sintatic/sintatic.y"
                 { (yyval.typeNode) = buildNode("error program"); }
#line 3440 "sintatic.tab.c"
    break;

  case 8: /* var_declaration: tipos var SEMICOLON  */
#line 113 "sintatic/sintatic.y"
                            {
            (yyval.typeNode) = buildNode("var_declaration");
            (yyval.typeNode)->childNode = (yyvsp[-2].typeNode); 
            (yyvsp[-2].typeNode)->brotherNode = (yyvsp[-1].typeNode);  
         
            //char *id, char *typ
            insertItem(&table, (yyvsp[-2].typeNode)->value, (yyvsp[-1].typeNode)->value);
        }
#line 3453 "sintatic.tab.c"
    break;

  case 9: /* var_declaration: tipos var COMMA many_declaration SEMICOLON  */
#line 121 "sintatic/sintatic.y"
                                                     {
            (yyval.typeNode) = buildNode("var_declaration");
            (yyval.typeNode)->childNode = (yyvsp[-4].typeNode); 
            (yyvsp[-4].typeNode)->brotherNode = (yyvsp[-3].typeNode);  
            (yyvsp[-3].typeNode)->brotherNode = (yyvsp[-1].typeNode); 
         
            //char *id, char *typ
            insertItem(&table, (yyvsp[-4].typeNode)->value, (yyvsp[-3].typeNode)->value);
            insertItem(&table, (yyvsp[-4].typeNode)->value, (yyvsp[-1].typeNode)->value);
        }
#line 3468 "sintatic.tab.c"
    break;

  case 10: /* var_declaration: error SEMICOLON  */
#line 131 "sintatic/sintatic.y"
                          { (yyval.typeNode) = buildNode("SINTATIC ERR");}
#line 3474 "sintatic.tab.c"
    break;

  case 13: /* func_declaration: tipos var OPEN_PAREN list_args CLS_PAREN blockStmt  */
#line 140 "sintatic/sintatic.y"
                                                           {
            (yyval.typeNode) = buildNode("func_declaration");   
            (yyval.typeNode)->childNode = (yyvsp[-5].typeNode);
            (yyvsp[-5].typeNode)->brotherNode = (yyvsp[-4].typeNode);
            (yyvsp[-4].typeNode)->brotherNode = (yyvsp[-2].typeNode);
            (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);

            insertItem(&table, "FUNCTION", (yyvsp[-4].typeNode)->value);
        }
#line 3488 "sintatic.tab.c"
    break;

  case 14: /* func_declaration: tipos MAIN OPEN_PAREN list_args CLS_PAREN blockStmt  */
#line 149 "sintatic/sintatic.y"
                                                                           {
            (yyval.typeNode) = buildNode("func_declaration_main");   
            (yyval.typeNode)->childNode = (yyvsp[-5].typeNode);
            (yyvsp[-5].typeNode)->brotherNode = (yyvsp[-2].typeNode);
            (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);

            insertItem(&table, "FUNCTION", "main");
        }
#line 3501 "sintatic.tab.c"
    break;

  case 15: /* func_declaration: tipos var OPEN_PAREN error CLS_PAREN blockStmt  */
#line 157 "sintatic/sintatic.y"
                                                         {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3509 "sintatic.tab.c"
    break;

  case 16: /* func_declaration: tipos MAIN OPEN_PAREN error CLS_PAREN blockStmt  */
#line 160 "sintatic/sintatic.y"
                                                                 {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3517 "sintatic.tab.c"
    break;

  case 17: /* list_args: tipos var COMMA list_args  */
#line 167 "sintatic/sintatic.y"
                                  {
                (yyval.typeNode) = buildNode("list_args");  
                (yyval.typeNode)->childNode = (yyvsp[-3].typeNode);
                (yyvsp[-3].typeNode)->brotherNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);

                insertItem(&table, (yyvsp[-3].typeNode)->value, (yyvsp[-2].typeNode)->value);
        }
#line 3530 "sintatic.tab.c"
    break;

  case 18: /* list_args: tipos var  */
#line 175 "sintatic/sintatic.y"
                    {
                (yyval.typeNode) = buildNode("list_args"); 
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
                (yyvsp[-1].typeNode)->brotherNode = (yyvsp[0].typeNode);

                insertItem(&table, (yyvsp[-1].typeNode)->value, (yyvsp[0].typeNode)->value);
        }
#line 3542 "sintatic.tab.c"
    break;

  case 19: /* list_args: %empty  */
#line 182 "sintatic/sintatic.y"
                 {
                (yyval.typeNode) = buildNode("no_args"); 
        }
#line 3550 "sintatic.tab.c"
    break;

  case 20: /* blockStmt: OP_CUR_BRACKET list_statements CLS_CUR_BRACKET  */
#line 188 "sintatic/sintatic.y"
                                                       {
                (yyval.typeNode) = (yyvsp[-1].typeNode);
        }
#line 3558 "sintatic.tab.c"
    break;

  case 21: /* list_statements: stmt list_statements  */
#line 194 "sintatic/sintatic.y"
                             {
               (yyval.typeNode) = (yyvsp[-1].typeNode);
               (yyvsp[-1].typeNode)->brotherNode = (yyvsp[0].typeNode); 
        }
#line 3567 "sintatic.tab.c"
    break;

  case 31: /* input_output_expr: CMD_WRITE OPEN_PAREN str_expr CLS_PAREN SEMICOLON  */
#line 213 "sintatic/sintatic.y"
                                                          {
                (yyval.typeNode) = buildNode("CMD_WRITE_STR");
        }
#line 3575 "sintatic.tab.c"
    break;

  case 32: /* input_output_expr: CMD_WRITE OPEN_PAREN expr CLS_PAREN SEMICOLON  */
#line 216 "sintatic/sintatic.y"
                                                        {
                (yyval.typeNode) = buildNode("CMD_WRITE_EXPR");
        }
#line 3583 "sintatic.tab.c"
    break;

  case 33: /* input_output_expr: CMD_WRITELN OPEN_PAREN str_expr CLS_PAREN SEMICOLON  */
#line 219 "sintatic/sintatic.y"
                                                              {
                (yyval.typeNode) = buildNode("CMD_WRITELN_STR");
        }
#line 3591 "sintatic.tab.c"
    break;

  case 34: /* input_output_expr: CMD_WRITELN OPEN_PAREN expr CLS_PAREN SEMICOLON  */
#line 222 "sintatic/sintatic.y"
                                                          {
                (yyval.typeNode) = buildNode("CMD_WRITELN_EXPR");
        }
#line 3599 "sintatic.tab.c"
    break;

  case 35: /* input_output_expr: CMD_READ OPEN_PAREN var CLS_PAREN SEMICOLON  */
#line 225 "sintatic/sintatic.y"
                                                      {
                (yyval.typeNode) = buildNode("CMD_READ_VAR");
        }
#line 3607 "sintatic.tab.c"
    break;

  case 36: /* input_output_expr: CMD_WRITE OPEN_PAREN error CLS_PAREN SEMICOLON  */
#line 228 "sintatic/sintatic.y"
                                                         {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3615 "sintatic.tab.c"
    break;

  case 37: /* input_output_expr: CMD_WRITELN OPEN_PAREN error CLS_PAREN SEMICOLON  */
#line 231 "sintatic/sintatic.y"
                                                           {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3623 "sintatic.tab.c"
    break;

  case 38: /* input_output_expr: CMD_READ OPEN_PAREN error CLS_PAREN SEMICOLON  */
#line 234 "sintatic/sintatic.y"
                                                        {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3631 "sintatic.tab.c"
    break;

  case 39: /* iteration_expr: CMD_FOR OPEN_PAREN assign SEMICOLON expr SEMICOLON assign CLS_PAREN blockStmt  */
#line 240 "sintatic/sintatic.y"
                                                                                      {     
             (yyval.typeNode) = buildNode("for");
             (yyval.typeNode)->childNode = (yyvsp[-6].typeNode);
             (yyvsp[-6].typeNode)->brotherNode = (yyvsp[-4].typeNode);
             (yyvsp[-4].typeNode)->brotherNode = (yyvsp[-2].typeNode);
             (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);  
        
        }
#line 3644 "sintatic.tab.c"
    break;

  case 40: /* condition_expr: CMD_IF OPEN_PAREN expr CLS_PAREN block_cond  */
#line 251 "sintatic/sintatic.y"
                                                     {
                (yyval.typeNode) = buildNode("if");
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3654 "sintatic.tab.c"
    break;

  case 41: /* condition_expr: CMD_IF OPEN_PAREN error CLS_PAREN error  */
#line 256 "sintatic/sintatic.y"
                                                  {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3662 "sintatic.tab.c"
    break;

  case 43: /* block_cond: simple_complex_block_stmt CMD_ELSE simple_complex_block_stmt  */
#line 263 "sintatic/sintatic.y"
                                                                       {
                (yyval.typeNode) = buildNode("if_stmt");
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);

                (yyval.typeNode)->brotherNode = buildNode("else");
                (yyval.typeNode)->brotherNode->childNode = (yyvsp[0].typeNode);
        }
#line 3674 "sintatic.tab.c"
    break;

  case 46: /* return_stmt: CMD_RETURN SEMICOLON  */
#line 278 "sintatic/sintatic.y"
                             {
              (yyval.typeNode) = buildNode("return");  
        }
#line 3682 "sintatic.tab.c"
    break;

  case 47: /* return_stmt: CMD_RETURN expr SEMICOLON  */
#line 281 "sintatic/sintatic.y"
                                     {
                (yyval.typeNode) = buildNode("return");  
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3691 "sintatic.tab.c"
    break;

  case 48: /* return_stmt: CMD_RETURN error SEMICOLON  */
#line 285 "sintatic/sintatic.y"
                                     {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3699 "sintatic.tab.c"
    break;

  case 49: /* return_stmt: CMD_RETURN expr error  */
#line 288 "sintatic/sintatic.y"
                                {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3707 "sintatic.tab.c"
    break;

  case 50: /* set_stmt: CMD_FORALL OPEN_PAREN var IN_OP func_expr CLS_PAREN simple_complex_block_stmt  */
#line 294 "sintatic/sintatic.y"
                                                                                      {
                (yyval.typeNode) = buildNode("forall");  
                (yyval.typeNode)->childNode = (yyvsp[-4].typeNode);
                (yyvsp[-4].typeNode)->brotherNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3718 "sintatic.tab.c"
    break;

  case 51: /* set_stmt: CMD_FORALL OPEN_PAREN var IN_OP var CLS_PAREN simple_complex_block_stmt  */
#line 300 "sintatic/sintatic.y"
                                                                                  {
                (yyval.typeNode) = buildNode("forall");  
                (yyval.typeNode)->childNode = (yyvsp[-4].typeNode);
                (yyvsp[-4].typeNode)->brotherNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3729 "sintatic.tab.c"
    break;

  case 53: /* set_stmt: CMD_FORALL OPEN_PAREN error IN_OP error CLS_PAREN simple_complex_block_stmt  */
#line 307 "sintatic/sintatic.y"
                                                                                      {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3737 "sintatic.tab.c"
    break;

  case 54: /* set_stmt: CMD_FORALL OPEN_PAREN error IN_OP func_expr CLS_PAREN error  */
#line 310 "sintatic/sintatic.y"
                                                                      {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3745 "sintatic.tab.c"
    break;

  case 55: /* set_stmt: CMD_FORALL OPEN_PAREN var IN_OP error CLS_PAREN simple_complex_block_stmt  */
#line 313 "sintatic/sintatic.y"
                                                                                    {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3753 "sintatic.tab.c"
    break;

  case 57: /* expr_stmt: expr error  */
#line 319 "sintatic/sintatic.y"
                     {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3761 "sintatic.tab.c"
    break;

  case 60: /* assign: var ATRIBUTION expr  */
#line 331 "sintatic/sintatic.y"
                            {
              (yyval.typeNode) = buildNode(" = ");
              (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3771 "sintatic.tab.c"
    break;

  case 61: /* func_expr: ADD_FUNC OPEN_PAREN func_in_expr CLS_PAREN  */
#line 339 "sintatic/sintatic.y"
                                                   {
                (yyval.typeNode) = buildNode(" add ");
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3780 "sintatic.tab.c"
    break;

  case 62: /* func_expr: REMOVE_FUNC OPEN_PAREN func_in_expr CLS_PAREN  */
#line 343 "sintatic/sintatic.y"
                                                        {
                (yyval.typeNode) = buildNode(" remove ");
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3789 "sintatic.tab.c"
    break;

  case 63: /* func_expr: EXIST_FUNC OPEN_PAREN func_in_expr CLS_PAREN  */
#line 347 "sintatic/sintatic.y"
                                                       {
                (yyval.typeNode) = buildNode(" exist ");
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3798 "sintatic.tab.c"
    break;

  case 64: /* func_expr: ADD_FUNC OPEN_PAREN error CLS_PAREN  */
#line 351 "sintatic/sintatic.y"
                                              {
             (yyval.typeNode) = buildNode("SINTATIC ERR!");   
        }
#line 3806 "sintatic.tab.c"
    break;

  case 65: /* func_expr: REMOVE_FUNC OPEN_PAREN error CLS_PAREN  */
#line 354 "sintatic/sintatic.y"
                                                 {
             (yyval.typeNode) = buildNode("SINTATIC ERR!");   
        }
#line 3814 "sintatic.tab.c"
    break;

  case 66: /* func_expr: EXIST_FUNC OPEN_PAREN error CLS_PAREN  */
#line 357 "sintatic/sintatic.y"
                                                {
             (yyval.typeNode) = buildNode("SINTATIC ERR!");    
        }
#line 3822 "sintatic.tab.c"
    break;

  case 67: /* is_set_expr: IS_SET_FUNC OPEN_PAREN var CLS_PAREN  */
#line 363 "sintatic/sintatic.y"
                                             {
              (yyval.typeNode) = buildNode(" is_set ");
              (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3831 "sintatic.tab.c"
    break;

  case 68: /* is_set_expr: IS_SET_FUNC OPEN_PAREN func_expr CLS_PAREN  */
#line 367 "sintatic/sintatic.y"
                                                     {
                (yyval.typeNode) = buildNode(" is_set ");
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3840 "sintatic.tab.c"
    break;

  case 69: /* is_set_expr: IS_SET_FUNC OPEN_PAREN error CLS_PAREN  */
#line 371 "sintatic/sintatic.y"
                                                 {
             (yyval.typeNode) = buildNode("SINTATIC ERR!");    
        }
#line 3848 "sintatic.tab.c"
    break;

  case 70: /* func_in_expr: op_or_expr IN_OP var  */
#line 376 "sintatic/sintatic.y"
                             {
                (yyval.typeNode) = buildNode(" IN ");
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3858 "sintatic.tab.c"
    break;

  case 71: /* func_in_expr: op_or_expr IN_OP func_expr  */
#line 381 "sintatic/sintatic.y"
                                     {
                (yyval.typeNode) = buildNode(" IN ");
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3868 "sintatic.tab.c"
    break;

  case 72: /* op_or_expr: op_or_expr OP_OR op_and_expr  */
#line 389 "sintatic/sintatic.y"
                                     {
              (yyval.typeNode) = buildNode("or");
              (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3878 "sintatic.tab.c"
    break;

  case 75: /* op_and_expr: op_and_expr OP_AND logical_expr  */
#line 399 "sintatic/sintatic.y"
                                        {
              (yyval.typeNode) = buildNode("and");
              (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);  
        }
#line 3888 "sintatic.tab.c"
    break;

  case 77: /* logical_expr: logical_expr logical_ops arithmetic_expr  */
#line 408 "sintatic/sintatic.y"
                                                {
             (yyval.typeNode) = (yyvsp[-1].typeNode);
             (yyvsp[-1].typeNode)->childNode = (yyvsp[-2].typeNode); 
             (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode); 
       }
#line 3898 "sintatic.tab.c"
    break;

  case 79: /* arithmetic_expr: arithmetic_expr adds_op mult_expr  */
#line 417 "sintatic/sintatic.y"
                                          {
              (yyval.typeNode) = (yyvsp[-1].typeNode);
              (yyvsp[-1].typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3908 "sintatic.tab.c"
    break;

  case 81: /* mult_expr: mult_expr mult_ops first_term  */
#line 426 "sintatic/sintatic.y"
                                      {
              (yyval.typeNode) = (yyvsp[-1].typeNode);
              (yyvsp[-1].typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3918 "sintatic.tab.c"
    break;

  case 84: /* first_term: OP_NEG term  */
#line 436 "sintatic/sintatic.y"
                      {
              (yyval.typeNode) = buildNode(" ! ");
              (yyval.typeNode)->childNode = (yyvsp[0].typeNode);
        }
#line 3927 "sintatic.tab.c"
    break;

  case 85: /* first_term: adds_op term  */
#line 440 "sintatic/sintatic.y"
                       {
              (yyval.typeNode) = (yyvsp[-1].typeNode);
              (yyvsp[-1].typeNode)->childNode = (yyvsp[0].typeNode);
        }
#line 3936 "sintatic.tab.c"
    break;

  case 86: /* first_term: var OPEN_PAREN list_expr CLS_PAREN  */
#line 444 "sintatic/sintatic.y"
                                             {
                (yyval.typeNode) = (yyvsp[-3].typeNode);
                (yyvsp[-3].typeNode)->brotherNode = (yyvsp[-1].typeNode);
        }
#line 3945 "sintatic.tab.c"
    break;

  case 88: /* first_term: var OPEN_PAREN error CLS_PAREN  */
#line 449 "sintatic/sintatic.y"
                                         {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3953 "sintatic.tab.c"
    break;

  case 89: /* first_term: error OPEN_PAREN CLS_PAREN  */
#line 452 "sintatic/sintatic.y"
                                      {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3961 "sintatic.tab.c"
    break;

  case 92: /* term: OPEN_PAREN expr CLS_PAREN  */
#line 460 "sintatic/sintatic.y"
                                    {
                (yyval.typeNode) = (yyvsp[-1].typeNode);
        }
#line 3969 "sintatic.tab.c"
    break;

  case 93: /* term: OPEN_PAREN error CLS_PAREN  */
#line 463 "sintatic/sintatic.y"
                                      {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3977 "sintatic.tab.c"
    break;

  case 94: /* logical_ops: LT_OP  */
#line 469 "sintatic/sintatic.y"
              {
                (yyval.typeNode) = buildNode("LT_OP");
        }
#line 3985 "sintatic.tab.c"
    break;

  case 95: /* logical_ops: LTE_OP  */
#line 472 "sintatic/sintatic.y"
                  {
                (yyval.typeNode) = buildNode("LTE_OP");
        }
#line 3993 "sintatic.tab.c"
    break;

  case 96: /* logical_ops: GT_OP  */
#line 475 "sintatic/sintatic.y"
                 {
                (yyval.typeNode) = buildNode("GT_OP");
        }
#line 4001 "sintatic.tab.c"
    break;

  case 97: /* logical_ops: GTE_OP  */
#line 478 "sintatic/sintatic.y"
                  {
                (yyval.typeNode) = buildNode("GTE_OP");
        }
#line 4009 "sintatic.tab.c"
    break;

  case 98: /* logical_ops: NEQ_OP  */
#line 481 "sintatic/sintatic.y"
                  {
                (yyval.typeNode) = buildNode("NEQ_OP");
        }
#line 4017 "sintatic.tab.c"
    break;

  case 99: /* logical_ops: EQUAL_OP  */
#line 484 "sintatic/sintatic.y"
                    {
                (yyval.typeNode) = buildNode("EQUAL_OP");
        }
#line 4025 "sintatic.tab.c"
    break;

  case 100: /* str_expr: STRING  */
#line 490 "sintatic/sintatic.y"
               {
            (yyval.typeNode) = buildNode((yyvsp[0].sval));
            free((yyvsp[0].sval));
        }
#line 4034 "sintatic.tab.c"
    break;

  case 103: /* list_expr: error COMMA error  */
#line 499 "sintatic/sintatic.y"
                            {
             (yyval.typeNode) = buildNode("SINTATIC ERR!");   
        }
#line 4042 "sintatic.tab.c"
    break;

  case 104: /* var: ID  */
#line 505 "sintatic/sintatic.y"
         {
            (yyval.typeNode) = buildNode((yyvsp[0].sval));
            free((yyvsp[0].sval));
       }
#line 4051 "sintatic.tab.c"
    break;

  case 105: /* adds_op: ADD_OP  */
#line 512 "sintatic/sintatic.y"
             {
            (yyval.typeNode) = buildNode((yyvsp[0].sval)); 
            free((yyvsp[0].sval)); 
      }
#line 4060 "sintatic.tab.c"
    break;

  case 106: /* mult_ops: MULT_OP  */
#line 519 "sintatic/sintatic.y"
              {
              (yyval.typeNode) = buildNode((yyvsp[0].sval)); 
              free((yyvsp[0].sval));  
      }
#line 4069 "sintatic.tab.c"
    break;

  case 107: /* num_tipos: FLOAT  */
#line 526 "sintatic/sintatic.y"
              {
              (yyval.typeNode) = buildNode((yyvsp[0].sval));
              free((yyvsp[0].sval));
        }
#line 4078 "sintatic.tab.c"
    break;

  case 108: /* num_tipos: INT  */
#line 530 "sintatic/sintatic.y"
              {
              (yyval.typeNode) = buildNode((yyvsp[0].sval));
              free((yyvsp[0].sval));
        }
#line 4087 "sintatic.tab.c"
    break;

  case 109: /* num_tipos: EMPTY  */
#line 534 "sintatic/sintatic.y"
                {
              (yyval.typeNode) = buildNode("EMPTY");
        }
#line 4095 "sintatic.tab.c"
    break;

  case 110: /* tipos: TYPE_INT  */
#line 540 "sintatic/sintatic.y"
                 {
             (yyval.typeNode) = buildNode("TYPE_INT");
        }
#line 4103 "sintatic.tab.c"
    break;

  case 111: /* tipos: TYPE_FLOAT  */
#line 543 "sintatic/sintatic.y"
                     {
              (yyval.typeNode) = buildNode("TYPE_FLOAT");
        }
#line 4111 "sintatic.tab.c"
    break;

  case 112: /* tipos: TYPE_SET  */
#line 546 "sintatic/sintatic.y"
                    {
              (yyval.typeNode) = buildNode("TYPE_SET");
        }
#line 4119 "sintatic.tab.c"
    break;

  case 113: /* tipos: TYPE_ELEM  */
#line 549 "sintatic/sintatic.y"
                    {
             (yyval.typeNode) = buildNode("TYPE_ELEM");
        }
#line 4127 "sintatic.tab.c"
    break;


#line 4131 "sintatic.tab.c"

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

#line 553 "sintatic/sintatic.y"



int yyerror(const char* errormsg) {
  fprintf(stderr, "%s at line:%d, column:%d,\n", errormsg, line, column);
  return 0;
}

int main(int argc, char *argv[]) {
   
    yyin = fopen(argv[1], "r");
    yyparse();

    showTable(table);
    showTree(origin, 0);

    clearTree(origin);
    freeTable(table);
    
    fclose(yyin);
    yylex_destroy();
    return 0;
}
