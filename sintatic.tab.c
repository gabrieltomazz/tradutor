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
  
  extern FILE *yyin;
  int error = 0;
  char tipo[100];

  NodoArvore* raiz;

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
  YYSYMBOL_num_tipos = 79,                 /* num_tipos  */
  YYSYMBOL_tipos = 80                      /* tipos  */
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
#define YYLAST   5418

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  451

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
       0,    83,    83,    91,    94,    98,    99,   100,   104,   112,
     119,   128,   129,   130,   134,   137,   141,   145,   150,   151,
     152,   153,   154,   155,   156,   158,   162,   165,   168,   171,
     174,   180,   184,   190,   191,   195,   196,   200,   201,   205,
     206,   207,   210,   214,   215,   219,   223,   224,   225,   229,
     230,   233,   234,   238,   241,   242,   246,   249,   253,   258,
     262,   263,   267,   268,   272,   273,   274,   275,   276,   280,
     281,   282,   287,   290,   293,   296,   299,   302,   308,   312,
     313,   317,   323,   324,   325,   329,   332,   335,   338
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
  "INT", "FLOAT", "STRING", "SEMICOLON", "COMMA", "OPEN_PAREN",
  "CLS_PAREN", "OP_CUR_BRACKET", "CLS_CUR_BRACKET", "$accept", "program",
  "list_declaration", "main_declaration", "var_declaration",
  "func_declaration", "list_args", "blockStmt", "list_statements", "stmt",
  "input_output_expr", "iteration_expr", "condition_expr", "block_cond",
  "simple_complex_block_stmt", "return_stmt", "set_stmt", "expr_stmt",
  "expr", "assign", "func_expr", "is_set_expr", "func_in_expr",
  "op_or_expr", "op_and_expr", "logical_expr", "arithmetic_expr",
  "mult_expr", "first_term", "term", "logical_ops", "str_expr",
  "list_expr", "var", "num_tipos", "tipos", YY_NULLPTR
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

#define YYPACT_NINF (-182)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-89)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     942,   888,    34,    61,    69,   119,     6,  1340,  1383,  1388,
    1440,   126,  -182,  1544,    -8,   -25,    22,    86,  1718,    86,
     -18,    23,    -7,     7,    74,     7,  1818,  3922,  3991,    86,
    4015,  1097,    46,     2,     8,    15,    31,    39,    62,    67,
      46,   103,   108,   117,    81,  4780,  4793,  1039,  2858,    71,
    2896,  2934,  2972,  3010,  3048,  3086,  3124,   138,   152,   155,
     159,   196,   276,   365,  5119,  5045,  4816,  4829,  4852,  4644,
    4865,   181,   177,  4888,  4901,  1039,   222,   226,   171,    32,
     171,   171,  4924,   760,   760,   229,  3162,   201,  4694,   199,
    4041,   213,  3200,  3238,  3276,    87,   206,   206,   506,   613,
     656,   676,   816,   829,   206,   206,   206,  1115,   532,   235,
     244,   254,   259,   271,   168,    57,   257,   275,   172,   188,
     278,   286,   288,   291,   294,   298,  3314,  4937,   494,   513,
     431,  5132,  5058,  4960,  4973,   267,  4996,    79,   299,   464,
    1115,    32,   305,   309,   314,   332,   335,   336,   337,   343,
     345,   352,  1132,  5009,  1668,  1780,  3352,  1832,   357,   307,
     312,  3390,  3428,  3466,  3504,  3542,   355,  1242,   222,  1242,
    1242,  3580,   363,  3618,  3656,     9,  3694,   408,   410,   411,
     419,   130,  4669,  5032,  4719,  1703,  1561,   185,   316,   388,
     392,   185,  4356,  4374,  1039,   400,   398,   572,    18,  5087,
    1281,  4392,  4410,  4428,  3948,  4446,   407,   418,   424,  4744,
    5155,   251,   251,  5168,  5181,  1039,   113,  1201,  5363,  5194,
    5207,  5220,  4762,  5233,   414,   521,   420,   421,   436,  1529,
    1402,   264,   440,   442,   445,   264,  3966,  3992,  1039,   140,
     110,   147,   210,  1483,  1620,  4018,  4044,  4070,  1593,  4096,
    3732,   104,   171,  1870,   450,   452,   454,   462,   463,   467,
     427,  3922,  1908,  1946,  1984,  2022,  2060,  2098,  2136,   471,
     473,   475,   181,  3770,  3922,  3808,  3846,   492,  4464,  4482,
    4500,   171,   171,   171,  4518,   477,   959,   959,   959,   959,
     959,   702,  5246,  5259,  5272,  5285,   482,   171,   171,   171,
     171,   937,   171,   171,   171,  4122,  4148,  4174,   171,   171,
     171,  4200,   483,   131,  1065,  1065,  1065,  1065,  1065,   981,
     580,   493,   504,   510,   609,   620,   175,  1039,   222,   226,
     760,   760,   229,  2174,   515,   512,  2212,  2250,  2288,   520,
     517,  1039,   625,   632,   638,  4536,   537,  5103,  4626,  4554,
    4572,  4590,   525,  5298,  5389,  5376,  5311,  5324,  5337,   528,
     643,   645,   668,   693,   709,   713,  4226,   236,   536,   539,
     540,   310,   318,   233,  5071,  1730,  4252,  4278,  4304,   541,
     171,   171,   171,   544,   543,   551,   545,   546,   548,   549,
     567,  2326,  2364,  2402,  3884,   569,   571,   573,   575,  4608,
    5350,   596,   677,   810,   204,   211,   237,   171,   171,   171,
    4330,   726,   742,   753,   464,  1115,    32,   587,   600,   637,
     650,   655,   785,   797,   803,   820,   849,   851,  2440,  2478,
     669,   577,   622,  2516,  2554,  2592,  2630,  2668,   360,   489,
     570,   464,   222,   464,   464,  2706,   642,  2744,  2782,    11,
    2820
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
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -182,  -182,  -182,   704,     4,  -182,    13,   -22,   -41,    -2,
    -125,  -112,   -80,   301,  -147,   -75,   -71,   -58,  1187,   -63,
      76,   -13,  1452,  1325,  1152,  1046,   873,   767,   594,   315,
    -181,   -82,  -122,    -6,   488,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,    48,    10,    20,   154,    49,   155,
      51,    52,    53,   156,   157,    54,    55,    56,    57,    58,
      59,    60,    61,   115,   216,   217,   218,   219,   220,   221,
     104,   122,   138,   222,   223,    71
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,    28,   124,    30,     9,    16,    12,    11,    26,    91,
     273,     9,   253,   111,   263,    24,    17,    21,   288,    21,
     171,    69,   173,   174,    23,    50,    74,   264,   181,    21,
     166,   -81,    22,   -81,    74,    25,   298,   224,    88,   -85,
     -85,   204,    72,    75,    69,   -54,   -54,   287,    50,    76,
      27,   183,   274,    31,   261,   188,    77,   189,   190,   265,
     -54,    18,   316,    19,   266,   109,   -86,   -86,   267,   204,
     112,   113,    78,   117,   -88,   -88,   270,   204,   204,   125,
      79,   268,    45,    46,   251,   252,   184,    47,    31,   129,
      88,    88,   225,    32,   177,   178,   179,   180,    88,    88,
      88,    88,   248,    80,    36,   172,    38,    39,    81,   320,
     226,    40,   227,   228,    29,    90,   -12,    45,    46,   152,
      86,   -80,    47,   195,   -87,   -87,   271,   321,   -13,   322,
     323,    14,    15,    69,    88,   160,   367,   -55,   -55,   272,
     -54,   -54,   297,   262,    83,   275,   248,   275,   275,    84,
     -55,   195,   -55,   176,   368,   116,   369,   370,    85,   195,
     195,    69,   277,    69,    69,   276,   288,   276,   276,   352,
     -81,   128,   -81,   298,   313,   314,   209,    92,   210,   359,
     -44,   280,   -44,   211,   239,   280,   206,   -43,   204,   -43,
     278,    93,   186,   316,   -44,   -55,   -55,   379,    94,   -55,
     -55,   212,   -53,   -53,   297,   294,   294,   213,   214,   204,
     142,   184,   215,    31,   145,   -55,   -55,   159,    32,   -11,
     335,   192,   193,   -55,   -55,   307,   194,   207,   239,   307,
     146,   208,   204,   340,   224,   -55,    40,   -54,   -54,   315,
     126,   127,    45,    46,   -46,   325,   -46,    47,   387,   389,
     -54,   -47,   -54,   -47,    88,    69,   292,   -16,   210,    50,
     -53,   -53,   315,   -81,   -81,   384,   339,   429,    69,   305,
     195,   230,    50,   -53,   250,   -53,   -81,   -48,   -81,   -48,
     204,   204,   204,   204,   204,   248,   139,   213,   214,   263,
     107,   195,   215,   140,   445,   248,   447,   448,   141,   143,
     236,   237,   264,    95,    96,   238,   -45,   372,   248,   248,
     248,   248,   248,   248,   195,   -43,   263,   144,   263,   263,
     -78,   204,   112,   385,   204,   204,   390,   324,   147,   264,
     148,   264,   264,   149,   265,   204,   150,   -52,   -52,   266,
     151,   153,    68,   267,   -46,   -51,   -51,    73,   -50,   169,
     -52,   270,   -52,   -49,   170,    82,   268,   281,   -51,    68,
     -51,   265,   203,   265,   265,    68,   266,   239,   266,   266,
     267,   -47,   267,   267,   -48,   161,   162,   239,   270,   446,
     270,   270,   163,   268,   164,   268,   268,   -46,   -46,   371,
     203,   165,   -54,   -54,    97,   239,   168,   -79,   203,   203,
     -46,   271,   -46,   195,   -54,   175,   195,   195,    69,    88,
     432,    68,    68,   -85,   272,   -86,   -88,   195,   262,    68,
      68,    68,    68,   247,   -87,   -55,   -55,   450,   271,   282,
     271,   271,   184,   283,    31,    69,   277,    69,    69,    32,
     -55,   272,   -44,   272,   272,   262,   -81,   262,   262,   -81,
      36,   -81,    38,    39,    68,    68,   -81,    40,   -53,   -53,
      97,   302,   303,    45,    46,   253,   333,   247,    47,   182,
     -53,    31,   177,   178,   179,   180,    32,   304,   254,   255,
     256,   308,    68,   309,    68,    68,   310,    36,    37,    38,
      39,   327,   431,   328,    40,   329,   257,   258,   259,   260,
      45,    46,   279,   330,   331,    47,   284,   261,   332,   203,
     336,   -74,   337,   -74,   338,    70,   -47,   -47,   -74,   345,
      70,   -52,   -52,   341,   353,   366,   293,   295,    70,   -47,
     203,   -47,    70,   -52,   380,   205,   -74,   229,    70,   230,
     -51,   -51,   -74,   -74,   231,   381,   306,   -74,   -81,   -81,
     311,   382,   -51,   203,   391,   232,   392,   233,   234,   393,
     -81,   394,   235,   205,   -53,   -53,   287,   399,   236,   237,
     400,   205,   205,   238,   136,    68,    68,   407,   416,   -53,
     408,   409,   415,   410,    70,    70,   414,   417,   418,    68,
     419,   420,    70,    70,    70,    70,   249,   -48,   -48,   251,
     286,   203,   203,   203,   203,   203,   247,   -81,   -81,   421,
     -48,   -45,   -48,   -46,   -43,   -47,   247,   -48,   -72,   443,
     -72,    67,   -81,   -46,   -46,   -72,   433,    70,    70,   247,
     247,   247,   247,   247,   247,   -46,   -52,   -52,    67,   434,
     249,   202,   203,   -72,    67,   203,   203,   -51,   -51,   -72,
     -72,   -52,   -55,   -55,   -72,    70,   203,    70,    70,   -55,
     -55,   -73,   -51,   -73,   444,   -55,   -55,   396,   -73,   202,
     -55,   -55,   -55,   -55,   397,   205,   435,   202,   202,   205,
     398,   -75,   205,   -75,   449,   401,   -73,   402,   -75,   436,
      67,    67,   -73,   -73,   437,   -55,   -55,   -73,    67,    67,
     134,    67,   246,   205,   -47,   -47,   -75,   229,   442,   230,
     403,    13,   -75,   -75,   231,   428,   -47,   -75,     0,   249,
     -55,   -55,     0,   249,     0,   232,   205,   233,   234,    68,
      68,     0,   235,    67,    67,   404,   -55,   -55,   236,   237,
     -55,   -55,     0,   238,   351,     0,   246,     0,    70,    70,
       0,   405,     0,   -55,   -55,   406,    68,     0,    68,    68,
       0,    67,    70,    67,    67,   185,     0,   186,   425,   -55,
     -55,     0,   187,     0,   205,   205,   205,   205,   205,   249,
     -55,   -55,     0,   188,   426,   189,   190,     0,   202,   249,
     191,     0,     0,     0,    66,   427,   192,   193,   120,     0,
       0,   194,   249,   249,   249,   249,   249,   249,     0,   202,
       0,    66,   -55,   -55,   201,   205,     0,    66,   205,   205,
       0,   -76,     0,   -76,   -55,   -55,     0,   438,   -76,   205,
     -55,   -55,   202,     0,   -77,     0,   -77,   -48,   -48,   439,
       0,   -77,   201,     0,     0,   440,   -76,   -46,   -46,   -48,
     201,   201,   -76,   -76,    67,    67,     0,   -76,     0,   -77,
       0,     0,   -46,    66,    66,   -77,   -77,     0,    67,     0,
     -77,    66,   133,     0,    66,   245,   -47,   -47,   -48,   -48,
     202,   202,   202,   202,   350,   246,     0,     0,    -7,    -7,
       0,   -47,     0,   -48,   357,   246,    -7,    -7,    -7,    -7,
      65,     0,    70,    70,     0,     0,    66,    66,   246,   246,
     246,   246,   377,   246,     0,     0,     0,    65,     0,   245,
     200,   202,     0,    65,   202,   202,     0,     0,     0,    70,
       0,    70,    70,     0,    66,   202,    66,    66,     0,     0,
       0,     0,   229,     1,   230,     0,     0,     0,   200,   231,
       2,     3,     4,     5,     0,     0,   200,   200,     0,     0,
     232,   201,   233,   234,   185,     0,   186,   235,     0,    65,
      65,   187,     0,   236,   237,     0,     0,   132,   238,   358,
      65,   244,   201,     0,     0,     0,   229,     0,   230,   191,
       0,     0,     0,   231,     0,   192,   193,     0,     0,     0,
     194,     0,     0,     0,   232,   201,   233,   234,    67,    67,
       0,   235,    65,    65,     0,     0,     0,   236,   237,     0,
       0,     0,   238,   378,     0,   244,     0,    66,    66,     0,
       0,     0,     0,     0,     0,    67,     0,    67,    67,     0,
      65,    66,    65,    65,   185,     0,   186,     0,     0,     0,
       0,   187,     0,   201,   201,   201,   349,     0,   245,     0,
       0,     0,   188,     0,   189,   190,   356,   200,   245,   191,
     229,     0,   230,    64,     0,   192,   193,   231,     0,     0,
     194,   245,   245,   245,   376,     0,   245,     0,   200,     0,
      64,     0,     0,   199,   201,   235,    64,   201,   201,     0,
       0,   236,   237,     0,     0,     0,   238,     0,   201,   -84,
     -84,   200,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     184,   199,    31,     0,   -84,   -84,   -84,    32,     0,   199,
     199,     0,     0,    65,    65,     0,   -84,   229,    36,   230,
      38,    39,    64,   131,   231,    40,     0,    65,     0,     0,
       0,    45,    46,    64,   243,   232,    47,   233,   234,   200,
     200,   348,   235,     0,   244,     0,     0,     0,   236,   237,
       0,   355,     0,   238,   244,     0,     0,     0,     0,    63,
       0,    66,    66,     0,     0,    64,    64,   244,   244,   375,
       0,     0,   244,     0,     0,     0,    63,     0,   243,   198,
     200,     0,    63,   200,   200,     0,     0,     0,    66,     0,
      66,    66,     0,    64,   200,    64,    64,     0,    98,    99,
     100,   101,   102,   103,     0,     0,     0,   198,   -57,   -57,
     -57,    87,     0,     0,    89,   198,   198,     0,     0,     0,
     199,     0,     0,   273,     0,     0,     0,   182,   130,    31,
     177,   178,   179,   180,    32,     0,    33,    34,    35,    63,
     242,   199,   110,     0,     0,    36,    37,    38,    39,     0,
     121,   123,    40,     0,    41,    42,    43,    44,    45,    46,
       0,     0,     0,    47,   199,   274,     0,    65,    65,     0,
       0,    63,    63,   289,   135,   137,     0,     0,   -59,   -59,
     -59,   -59,   -59,   -59,   242,     0,    64,    64,   -59,   -59,
     -59,     0,     0,     0,    65,     0,    65,    65,     0,    63,
      64,    63,    63,   -59,     0,     0,   269,   158,     0,     0,
       0,     0,   199,   347,     0,     0,     0,   243,     0,   137,
      -2,     1,     0,   354,     0,     0,   198,   243,     2,     3,
       4,     5,    62,     0,     0,     0,     0,     0,     0,     0,
     243,   374,     0,     0,     0,   243,     0,   198,     0,    62,
       0,     0,   197,   199,     0,    62,   199,   199,     0,     0,
       0,   285,     0,    -4,    -4,     0,     0,   199,    -6,    -6,
     198,    -4,    -4,    -4,    -4,     0,    -6,    -6,    -6,    -6,
     197,     0,   296,     0,   326,     0,     0,     0,   197,   197,
       0,     0,    63,    63,   -84,   -84,     0,     0,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   312,    63,     0,     0,   -84,
     -84,   -84,    62,   241,     0,     0,     0,     0,   346,     0,
      -5,    -5,   -84,   242,   -84,     0,     0,   334,    -5,    -5,
      -5,    -5,     0,   242,     0,     0,     0,     0,     0,     0,
      64,    64,     0,     0,    62,    62,   373,     0,     0,     0,
       0,   242,     0,     0,     0,     0,     0,   241,   137,   198,
       0,     0,   198,   198,     0,     0,     0,    64,   137,    64,
      64,     0,    62,   198,    62,    62,     0,     0,     0,   196,
      98,    99,   100,   101,   102,   103,   137,     0,     0,     0,
     -57,   -57,   -57,     0,   383,     0,     0,   386,   388,   197,
       0,     0,     0,   -57,     0,   -57,     0,   196,   395,     0,
     114,     0,   118,   119,     0,   196,   196,     0,     0,     0,
     197,   -81,   -81,     0,    -3,    -3,   -81,   -81,   -81,   -81,
     -81,   -81,    -3,    -3,    -3,    -3,   -81,   -81,   -81,     0,
     240,     0,     0,   197,     0,     0,    63,    63,     0,   -81,
     -81,   -81,     0,   -84,   -84,     0,     0,     0,   -84,   -84,
     -84,   -84,   -84,   -84,     0,    62,    62,     0,   -84,   -84,
     -84,     0,     0,    63,     0,    63,    63,     0,     0,    62,
       0,   269,   430,   -84,   240,   -69,   -69,     0,     0,     0,
     -69,   -69,   -69,   -69,   -69,   -69,   241,     0,     0,     0,
     -69,   -69,   -69,     0,     0,     0,   241,     0,   269,     0,
     269,   269,   317,   -69,   319,   -69,     0,   -59,   -59,   -59,
     -59,   -59,   -59,     0,   241,     0,   196,   -59,   -59,   -59,
       0,     0,   197,     0,     0,   197,   197,     0,     0,     0,
     -59,     0,   -59,     0,     0,     0,   197,   196,     0,     0,
       0,     0,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,
     -36,     0,   -36,   -36,   -36,     0,     0,     0,     0,     0,
     196,   -36,   -36,   -36,   -36,     0,     0,     0,   -36,     0,
     -36,   -36,   -36,   -36,   -36,   -36,     0,     0,     0,   -36,
       0,     0,   -36,     0,     0,   -81,   -81,     0,    -8,    -8,
     -81,   -81,   -81,   -81,   -81,   -81,    -8,    -8,    -8,    -8,
     -81,   -81,   -81,   342,   343,   344,     0,     0,     0,    62,
      62,     0,   317,   240,   -81,   -81,     0,   -58,   -58,   -58,
     -58,   -58,   -58,   240,   360,   361,   362,   -58,   -58,   -58,
     363,   364,   365,     0,     0,     0,    62,     0,    62,    62,
     -58,   240,   -58,     0,     0,     0,     0,     0,     0,   196,
       0,     0,   196,   196,   -35,   -35,     0,   -35,   -35,   -35,
     -35,   -35,   -35,   196,   -35,   -35,   -35,     0,     0,     0,
       0,     0,     0,   -35,   -35,   -35,   -35,     0,     0,     0,
     -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -15,   -15,
       0,   -35,     0,     0,   -35,     0,   -15,   -15,   -15,   -15,
       0,     0,   411,   412,   413,     0,   167,   -33,     0,   -33,
     -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,     0,
       0,     0,     0,     0,     0,   -33,   -33,   -33,   -33,   422,
     423,   424,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,
       0,     0,     0,   -33,   -15,   -15,   -33,   -15,   -15,   -15,
     -15,   -15,   -15,     0,   -15,   -15,   -15,     0,     0,     0,
       0,     0,     0,   -15,   -15,   -15,   -15,     0,     0,     0,
     -15,     0,   -15,   -15,   -15,   -15,   -15,   -15,     0,     0,
       0,   -15,   -24,   -24,   -15,   -24,   -24,   -24,   -24,   -24,
     -24,     0,   -24,   -24,   -24,     0,     0,     0,     0,     0,
       0,   -24,   -24,   -24,   -24,     0,     0,     0,   -24,     0,
     -24,   -24,   -24,   -24,   -24,   -24,     0,     0,     0,   -24,
     -21,   -21,   -24,   -21,   -21,   -21,   -21,   -21,   -21,     0,
     -21,   -21,   -21,     0,     0,     0,     0,     0,     0,   -21,
     -21,   -21,   -21,     0,     0,     0,   -21,     0,   -21,   -21,
     -21,   -21,   -21,   -21,     0,     0,     0,   -21,   -18,   -18,
     -21,   -18,   -18,   -18,   -18,   -18,   -18,     0,   -18,   -18,
     -18,     0,     0,     0,     0,     0,     0,   -18,   -18,   -18,
     -18,     0,     0,     0,   -18,     0,   -18,   -18,   -18,   -18,
     -18,   -18,     0,     0,     0,   -18,   -19,   -19,   -18,   -19,
     -19,   -19,   -19,   -19,   -19,     0,   -19,   -19,   -19,     0,
       0,     0,     0,     0,     0,   -19,   -19,   -19,   -19,     0,
       0,     0,   -19,     0,   -19,   -19,   -19,   -19,   -19,   -19,
       0,     0,     0,   -19,   -20,   -20,   -19,   -20,   -20,   -20,
     -20,   -20,   -20,     0,   -20,   -20,   -20,     0,     0,     0,
       0,     0,     0,   -20,   -20,   -20,   -20,     0,     0,     0,
     -20,     0,   -20,   -20,   -20,   -20,   -20,   -20,     0,     0,
       0,   -20,   -23,   -23,   -20,   -23,   -23,   -23,   -23,   -23,
     -23,     0,   -23,   -23,   -23,     0,     0,     0,     0,     0,
       0,   -23,   -23,   -23,   -23,     0,     0,     0,   -23,     0,
     -23,   -23,   -23,   -23,   -23,   -23,     0,     0,     0,   -23,
     -22,   -22,   -23,   -22,   -22,   -22,   -22,   -22,   -22,     0,
     -22,   -22,   -22,     0,     0,     0,     0,     0,     0,   -22,
     -22,   -22,   -22,     0,     0,     0,   -22,     0,   -22,   -22,
     -22,   -22,   -22,   -22,     0,     0,     0,   -22,   -37,   -37,
     -22,   -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,
     -37,     0,     0,     0,     0,     0,     0,   -37,   -37,   -37,
     -37,     0,     0,     0,   -37,     0,   -37,   -37,   -37,   -37,
     -37,   -37,     0,     0,     0,   -37,   -42,   -42,   -37,   -42,
     -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,   -42,     0,
       0,     0,     0,     0,     0,   -42,   -42,   -42,   -42,     0,
       0,     0,   -42,     0,   -42,   -42,   -42,   -42,   -42,   -42,
       0,     0,     0,   -42,   -25,   -25,   -42,   -25,   -25,   -25,
     -25,   -25,   -25,     0,   -25,   -25,   -25,     0,     0,     0,
       0,     0,     0,   -25,   -25,   -25,   -25,     0,     0,     0,
     -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,     0,     0,
       0,   -25,   -41,   -41,   -25,   -41,   -41,   -41,   -41,   -41,
     -41,     0,   -41,   -41,   -41,     0,     0,     0,     0,     0,
       0,   -41,   -41,   -41,   -41,     0,     0,     0,   -41,     0,
     -41,   -41,   -41,   -41,   -41,   -41,     0,     0,     0,   -41,
     -38,   -38,   -41,   -38,   -38,   -38,   -38,   -38,   -38,     0,
     -38,   -38,   -38,     0,     0,     0,     0,     0,     0,   -38,
     -38,   -38,   -38,     0,     0,     0,   -38,     0,   -38,   -38,
     -38,   -38,   -38,   -38,     0,     0,     0,   -38,   -14,   -14,
     -38,   -14,   -14,   -14,   -14,   -14,   -14,     0,   -14,   -14,
     -14,     0,     0,     0,     0,     0,     0,   -14,   -14,   -14,
     -14,     0,     0,     0,   -14,     0,   -14,   -14,   -14,   -14,
     -14,   -14,     0,     0,     0,   -14,    -8,    -8,   -14,    -8,
      -8,    -8,    -8,    -8,    -8,     0,    -8,    -8,    -8,     0,
       0,     0,     0,     0,     0,    -8,    -8,    -8,    -8,     0,
       0,     0,    -8,     0,    -8,    -8,    -8,    -8,    -8,    -8,
       0,     0,     0,    -8,   -32,   -32,    -8,   -32,   -32,   -32,
     -32,   -32,   -32,     0,   -32,   -32,   -32,     0,     0,     0,
       0,     0,     0,   -32,   -32,   -32,   -32,     0,     0,     0,
     -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,     0,     0,
       0,   -32,   441,   -33,   -32,   -33,   -33,   -33,   -33,   -33,
     -33,     0,   -33,   -33,   -33,     0,     0,     0,     0,     0,
       0,   -33,   -33,   -33,   -33,     0,     0,     0,   -33,     0,
     -33,   -33,   -33,   -33,   -33,   -33,     0,     0,     0,   -33,
     -27,   -27,   -33,   -27,   -27,   -27,   -27,   -27,   -27,     0,
     -27,   -27,   -27,     0,     0,     0,     0,     0,     0,   -27,
     -27,   -27,   -27,     0,     0,     0,   -27,     0,   -27,   -27,
     -27,   -27,   -27,   -27,     0,     0,     0,   -27,   -26,   -26,
     -27,   -26,   -26,   -26,   -26,   -26,   -26,     0,   -26,   -26,
     -26,     0,     0,     0,     0,     0,     0,   -26,   -26,   -26,
     -26,     0,     0,     0,   -26,     0,   -26,   -26,   -26,   -26,
     -26,   -26,     0,     0,     0,   -26,   -29,   -29,   -26,   -29,
     -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,     0,
       0,     0,     0,     0,     0,   -29,   -29,   -29,   -29,     0,
       0,     0,   -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,
       0,     0,     0,   -29,   -28,   -28,   -29,   -28,   -28,   -28,
     -28,   -28,   -28,     0,   -28,   -28,   -28,     0,     0,     0,
       0,     0,     0,   -28,   -28,   -28,   -28,     0,     0,     0,
     -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,     0,     0,
       0,   -28,   -30,   -30,   -28,   -30,   -30,   -30,   -30,   -30,
     -30,     0,   -30,   -30,   -30,     0,     0,     0,     0,     0,
       0,   -30,   -30,   -30,   -30,     0,     0,     0,   -30,     0,
     -30,   -30,   -30,   -30,   -30,   -30,     0,     0,     0,   -30,
     -34,   -34,   -30,   -34,   -34,   -34,   -34,   -34,   -34,     0,
     -34,   -34,   -34,     0,     0,     0,     0,     0,     0,   -34,
     -34,   -34,   -34,     0,     0,     0,   -34,     0,   -34,   -34,
     -34,   -34,   -34,   -34,     0,     0,     0,   -34,   -39,   -39,
     -34,   -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,
     -39,     0,     0,     0,     0,     0,     0,   -39,   -39,   -39,
     -39,     0,     0,     0,   -39,     0,   -39,   -39,   -39,   -39,
     -39,   -39,     0,     0,     0,   -39,   -40,   -40,   -39,   -40,
     -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,   -40,     0,
       0,     0,     0,     0,     0,   -40,   -40,   -40,   -40,     0,
       0,     0,   -40,     0,   -40,   -40,   -40,   -40,   -40,   -40,
       0,     0,     0,   -40,   -31,   -31,   -40,   -31,   -31,   -31,
     -31,   -31,   -31,     0,   -31,   -31,   -31,     0,     0,     0,
       0,     0,     0,   -31,   -31,   -31,   -31,     0,     0,     0,
     -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,
       0,   -31,     0,   -24,   -31,   -24,   -24,   -24,   -24,   -24,
     -24,     0,   -24,   -24,   -24,     0,     0,     0,     0,     0,
       0,   -24,   -24,   -24,   -24,     0,     0,     0,   -24,     0,
     -24,   -24,   -24,   -24,   -24,   -24,     0,     0,     0,   -24,
       0,   182,   -24,    31,   177,   178,   179,   180,    32,     0,
      33,    34,    35,     0,     0,     0,     0,     0,     0,    36,
      37,    38,    39,     0,     0,     0,    40,     0,    41,    42,
      43,    44,    45,    46,     0,     0,     0,    47,     0,   -21,
     -17,   -21,   -21,   -21,   -21,   -21,   -21,     0,   -21,   -21,
     -21,     0,     0,     0,     0,     0,     0,   -21,   -21,   -21,
     -21,     0,     0,     0,   -21,     0,   -21,   -21,   -21,   -21,
     -21,   -21,     0,     0,     0,   -21,     0,   -18,   -21,   -18,
     -18,   -18,   -18,   -18,   -18,     0,   -18,   -18,   -18,     0,
       0,     0,     0,     0,     0,   -18,   -18,   -18,   -18,     0,
       0,     0,   -18,     0,   -18,   -18,   -18,   -18,   -18,   -18,
       0,     0,     0,   -18,     0,   -19,   -18,   -19,   -19,   -19,
     -19,   -19,   -19,     0,   -19,   -19,   -19,     0,     0,     0,
       0,     0,     0,   -19,   -19,   -19,   -19,     0,     0,     0,
     -19,     0,   -19,   -19,   -19,   -19,   -19,   -19,     0,     0,
       0,   -19,     0,   -20,   -19,   -20,   -20,   -20,   -20,   -20,
     -20,     0,   -20,   -20,   -20,     0,     0,     0,     0,     0,
       0,   -20,   -20,   -20,   -20,     0,     0,     0,   -20,     0,
     -20,   -20,   -20,   -20,   -20,   -20,     0,     0,     0,   -20,
       0,   -23,   -20,   -23,   -23,   -23,   -23,   -23,   -23,     0,
     -23,   -23,   -23,     0,     0,     0,     0,     0,     0,   -23,
     -23,   -23,   -23,     0,     0,     0,   -23,     0,   -23,   -23,
     -23,   -23,   -23,   -23,     0,     0,     0,   -23,     0,   -22,
     -23,   -22,   -22,   -22,   -22,   -22,   -22,     0,   -22,   -22,
     -22,     0,     0,     0,     0,     0,     0,   -22,   -22,   -22,
     -22,     0,     0,     0,   -22,     0,   -22,   -22,   -22,   -22,
     -22,   -22,     0,     0,     0,   -22,     0,   -37,   -22,   -37,
     -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,     0,
       0,     0,     0,     0,     0,   -37,   -37,   -37,   -37,     0,
       0,     0,   -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,
       0,     0,     0,   -37,     0,   -42,   -37,   -42,   -42,   -42,
     -42,   -42,   -42,     0,   -42,   -42,   -42,     0,     0,     0,
       0,     0,     0,   -42,   -42,   -42,   -42,     0,     0,     0,
     -42,     0,   -42,   -42,   -42,   -42,   -42,   -42,     0,     0,
       0,   -42,     0,   -25,   -42,   -25,   -25,   -25,   -25,   -25,
     -25,     0,   -25,   -25,   -25,     0,     0,     0,     0,     0,
       0,   -25,   -25,   -25,   -25,     0,     0,     0,   -25,     0,
     -25,   -25,   -25,   -25,   -25,   -25,     0,     0,     0,   -25,
       0,   -41,   -25,   -41,   -41,   -41,   -41,   -41,   -41,     0,
     -41,   -41,   -41,     0,     0,     0,     0,     0,     0,   -41,
     -41,   -41,   -41,     0,     0,     0,   -41,     0,   -41,   -41,
     -41,   -41,   -41,   -41,     0,     0,     0,   -41,     0,   -38,
     -41,   -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,
     -38,     0,     0,     0,     0,     0,     0,   -38,   -38,   -38,
     -38,     0,     0,     0,   -38,     0,   -38,   -38,   -38,   -38,
     -38,   -38,     0,     0,     0,   -38,     0,   -32,   -38,   -32,
     -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,     0,
       0,     0,     0,     0,     0,   -32,   -32,   -32,   -32,     0,
       0,     0,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,
       0,     0,     0,   -32,     0,   -27,   -32,   -27,   -27,   -27,
     -27,   -27,   -27,     0,   -27,   -27,   -27,     0,     0,     0,
       0,     0,     0,   -27,   -27,   -27,   -27,     0,     0,     0,
     -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,     0,     0,
       0,   -27,     0,   -26,   -27,   -26,   -26,   -26,   -26,   -26,
     -26,     0,   -26,   -26,   -26,     0,     0,     0,     0,     0,
       0,   -26,   -26,   -26,   -26,     0,     0,     0,   -26,     0,
     -26,   -26,   -26,   -26,   -26,   -26,     0,     0,     0,   -26,
       0,   -29,   -26,   -29,   -29,   -29,   -29,   -29,   -29,     0,
     -29,   -29,   -29,     0,     0,     0,     0,     0,     0,   -29,
     -29,   -29,   -29,     0,     0,     0,   -29,     0,   -29,   -29,
     -29,   -29,   -29,   -29,     0,     0,     0,   -29,     0,   -28,
     -29,   -28,   -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,
     -28,     0,     0,     0,     0,     0,     0,   -28,   -28,   -28,
     -28,     0,     0,     0,   -28,     0,   -28,   -28,   -28,   -28,
     -28,   -28,     0,     0,     0,   -28,     0,   -30,   -28,   -30,
     -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,     0,
       0,     0,     0,     0,     0,   -30,   -30,   -30,   -30,     0,
       0,     0,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,
       0,     0,     0,   -30,     0,   -34,   -30,   -34,   -34,   -34,
     -34,   -34,   -34,     0,   -34,   -34,   -34,     0,     0,     0,
       0,     0,     0,   -34,   -34,   -34,   -34,     0,     0,     0,
     -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,     0,     0,
       0,   -34,     0,   -39,   -34,   -39,   -39,   -39,   -39,   -39,
     -39,     0,   -39,   -39,   -39,     0,     0,     0,     0,     0,
       0,   -39,   -39,   -39,   -39,     0,     0,     0,   -39,     0,
     -39,   -39,   -39,   -39,   -39,   -39,     0,     0,     0,   -39,
       0,   -40,   -39,   -40,   -40,   -40,   -40,   -40,   -40,     0,
     -40,   -40,   -40,     0,     0,     0,     0,     0,     0,   -40,
     -40,   -40,   -40,     0,     0,     0,   -40,     0,   -40,   -40,
     -40,   -40,   -40,   -40,     0,     0,     0,   -40,     0,   -31,
     -40,   -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,
     -31,     0,     0,     0,     0,     0,     0,   -31,   -31,   -31,
     -31,     0,     0,     0,   -31,     0,   -31,   -31,   -31,   -31,
     -31,   -31,     0,     0,     0,   -31,     0,    -8,   -31,    -8,
      -8,    -8,    -8,    -8,    -8,     0,    -8,    -8,    -8,     0,
       0,     0,     0,     0,     0,    -8,    -8,    -8,    -8,     0,
       0,     0,    -8,     0,    -8,    -8,    -8,    -8,    -8,    -8,
       0,     0,     0,    -8,     0,   -15,    -8,   -15,   -15,   -15,
     -15,   -15,   -15,     0,   -15,   -15,   -15,     0,     0,     0,
       0,     0,     0,   -15,   -15,   -15,   -15,     0,     0,     0,
     -15,     0,   -15,   -15,   -15,   -15,   -15,   -15,     0,     0,
       0,   -15,     0,   -36,   -15,   -36,   -36,   -36,   -36,   -36,
     -36,     0,   -36,   -36,   -36,     0,     0,     0,     0,     0,
       0,   -36,   -36,   -36,   -36,     0,     0,     0,   -36,     0,
     -36,   -36,   -36,   -36,   -36,   -36,     0,     0,     0,   -36,
       0,   -35,   -36,   -35,   -35,   -35,   -35,   -35,   -35,     0,
     -35,   -35,   -35,     0,     0,     0,     0,     0,     0,   -35,
     -35,   -35,   -35,     0,     0,     0,   -35,     0,   -35,   -35,
     -35,   -35,   -35,   -35,     0,     0,     0,   -35,     0,   -14,
     -35,   -14,   -14,   -14,   -14,   -14,   -14,     0,   -14,   -14,
     -14,     0,     0,     0,     0,     0,     0,   -14,   -14,   -14,
     -14,     0,     0,     0,   -14,     0,   -14,   -14,   -14,   -14,
     -14,   -14,     0,     0,     0,   -14,     0,   182,   -14,    31,
     177,   178,   179,   180,    32,     0,    33,    34,    35,     0,
       0,     0,     0,     0,     0,    36,    37,    38,    39,     0,
       0,     0,    40,     0,    41,    42,    43,    44,    45,    46,
     -69,   -69,     0,    47,     0,   -69,   -69,   -69,   -69,   -69,
     -69,     0,     0,     0,     0,   -69,   -69,   -69,   -83,   -83,
       0,     0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   291,
     -69,   -10,   -10,   -83,   -83,   -83,     0,     0,     0,   -10,
     -10,   -10,   -10,     0,   -82,   -82,   -83,     0,   -83,   -82,
     -82,   -82,   -82,   -82,   -82,    -9,    -9,     0,     0,   -82,
     -82,   -82,     0,    -9,    -9,    -9,    -9,     0,     0,     0,
     -61,   318,   -82,     0,   -82,   -61,   -61,   -61,   -61,   -61,
     -61,   -14,   -14,     0,     0,   -61,   -61,   -61,     0,   -14,
     -14,   -14,   -14,     0,     0,     0,   -63,   -63,   -61,     0,
     -61,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,     0,
       0,   -63,   -63,   -63,     0,     0,     0,     0,     0,     0,
       0,     0,   -64,   -64,   -63,     0,   -63,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,     0,   -64,   -64,   -64,
       0,     0,     0,     0,     0,     0,     0,     0,   -70,   -70,
     -64,     0,   -64,   -70,   -70,   -70,   -70,   -70,   -70,     0,
       0,     0,     0,   -70,   -70,   -70,     0,     0,     0,     0,
       0,     0,     0,     0,   -81,   -81,   -70,     0,   -70,   -81,
     -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,   -81,
     -81,   -81,     0,     0,     0,     0,     0,     0,     0,     0,
     -66,   -66,   -81,     0,   -81,   -66,   -66,   -66,   -66,   -66,
     -66,     0,     0,     0,     0,   -66,   -66,   -66,     0,     0,
       0,     0,     0,     0,     0,     0,   -69,   -69,   -66,     0,
     -66,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,
       0,   -69,   -69,   -69,     0,     0,     0,     0,     0,     0,
       0,     0,   -65,   -65,   -69,     0,   -69,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,     0,   -65,   -65,   -65,
       0,     0,     0,     0,     0,     0,     0,     0,   -71,   -71,
     -65,     0,   -65,   -71,   -71,   -71,   -71,   -71,   -71,     0,
       0,     0,     0,   -71,   -71,   -71,     0,     0,     0,     0,
       0,     0,     0,     0,   -60,   318,   -71,     0,   -71,   -60,
     -60,   -60,   -60,   -60,   -60,     0,     0,     0,     0,   -60,
     -60,   -60,     0,     0,     0,     0,     0,     0,     0,     0,
     -62,   -62,   -60,     0,   -60,   -62,   -62,   -62,   -62,   -62,
     -62,     0,     0,     0,     0,   -62,   -62,   -62,     0,     0,
       0,     0,     0,     0,     0,     0,   -68,   -68,   -62,     0,
     -62,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,
       0,   -68,   -68,   -68,     0,     0,     0,     0,     0,     0,
       0,     0,   -67,   -67,   -68,     0,   -68,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,   -67,   -67,   -67,
       0,     0,     0,     0,     0,     0,     0,     0,   -83,   -83,
     -67,     0,   -67,   -83,   -83,   -83,   -83,   -83,   -83,     0,
       0,     0,     0,   -83,   -83,   -83,   -82,   -82,     0,     0,
       0,   -82,   -82,   -82,   -82,   -82,   -82,     0,   -83,     0,
       0,   -82,   -82,   -82,   -61,   290,     0,     0,     0,   -61,
     -61,   -61,   -61,   -61,   -61,     0,   -82,     0,     0,   -61,
     -61,   -61,   -63,   -63,     0,     0,     0,   -63,   -63,   -63,
     -63,   -63,   -63,     0,   -61,     0,     0,   -63,   -63,   -63,
     -64,   -64,     0,     0,     0,   -64,   -64,   -64,   -64,   -64,
     -64,     0,   -63,     0,     0,   -64,   -64,   -64,   -70,   -70,
       0,     0,     0,   -70,   -70,   -70,   -70,   -70,   -70,     0,
     -64,     0,     0,   -70,   -70,   -70,   -81,   -81,     0,     0,
       0,   -81,   -81,   -81,   -81,   -81,   -81,     0,   -70,     0,
       0,   -81,   -81,   -81,   -66,   -66,     0,     0,     0,   -66,
     -66,   -66,   -66,   -66,   -66,     0,   -81,     0,     0,   -66,
     -66,   -66,   -69,   -69,     0,     0,     0,   -69,   -69,   -69,
     -69,   -69,   -69,     0,   -66,     0,     0,   -69,   -69,   -69,
     -65,   -65,     0,     0,     0,   -65,   -65,   -65,   -65,   -65,
     -65,     0,   -69,     0,     0,   -65,   -65,   -65,   -71,   -71,
       0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,     0,
     -65,     0,     0,   -71,   -71,   -71,   -60,   290,     0,     0,
       0,   -60,   -60,   -60,   -60,   -60,   -60,     0,   -71,     0,
       0,   -60,   -60,   -60,   -62,   -62,     0,     0,     0,   -62,
     -62,   -62,   -62,   -62,   -62,     0,   -60,     0,     0,   -62,
     -62,   -62,   -68,   -68,     0,     0,     0,   -68,   -68,   -68,
     -68,   -68,   -68,     0,   -62,     0,     0,   -68,   -68,   -68,
     -67,   -67,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,
     -67,     0,   -68,     0,     0,   -67,   -67,   -67,   289,     0,
       0,     0,     0,   -58,   -58,   -58,   -58,   -58,   -58,     0,
     -67,     0,     0,   -58,   -58,   -58,   -69,   -69,     0,     0,
       0,   -69,   -69,   -69,   -69,   -69,   -69,     0,   -58,     0,
       0,   -69,   -69,   -69,     0,   107,     0,     0,     0,     0,
       0,   -81,   -81,   -69,     0,   108,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,     0,   -81,   -81,   -81,     0,
     -81,     0,     0,     0,     0,     0,   -69,   -69,   -81,     0,
     -81,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,
       0,   -69,   -69,   -69,     0,     0,     0,     0,     0,     0,
       0,   -81,   -81,   -69,     0,   108,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,     0,   -81,   -81,   -81,     0,
       0,     0,     0,     0,     0,     0,   -81,   -81,   -81,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,
       0,   -81,   -81,   -81,   -69,   -69,     0,     0,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -81,     0,     0,     0,   -69,
     -69,   -69,   -83,   -83,     0,     0,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   301,     0,   -82,   -82,   -83,   -83,   -83,
     -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,   -83,
     -82,   -82,   -82,     0,     0,     0,     0,     0,   -61,   106,
       0,     0,   -82,   -61,   -61,   -61,   -61,   -61,   -61,     0,
       0,   -63,   -63,   -61,   -61,   -61,   -63,   -63,   -63,   -63,
     -63,   -63,     0,     0,     0,   -61,   -63,   -63,   -63,     0,
       0,     0,     0,     0,   -64,   -64,     0,     0,   -63,   -64,
     -64,   -64,   -64,   -64,   -64,     0,     0,   -70,   -70,   -64,
     -64,   -64,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,
       0,   -64,   -70,   -70,   -70,     0,     0,     0,     0,     0,
     -66,   -66,     0,     0,   -70,   -66,   -66,   -66,   -66,   -66,
     -66,     0,     0,   -69,   -69,   -66,   -66,   -66,   -69,   -69,
     -69,   -69,   -69,   -69,     0,     0,     0,   -66,   -69,   -69,
     -69,     0,     0,     0,     0,     0,   -65,   -65,     0,     0,
     -69,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,   -71,
     -71,   -65,   -65,   -65,   -71,   -71,   -71,   -71,   -71,   -71,
       0,     0,     0,   -65,   -71,   -71,   -71,     0,     0,     0,
       0,     0,   -60,   106,     0,     0,   -71,   -60,   -60,   -60,
     -60,   -60,   -60,     0,     0,   -62,   -62,   -60,   -60,   -60,
     -62,   -62,   -62,   -62,   -62,   -62,     0,     0,     0,   -60,
     -62,   -62,   -62,     0,     0,     0,     0,     0,   -68,   -68,
       0,     0,   -62,   -68,   -68,   -68,   -68,   -68,   -68,     0,
       0,   -67,   -67,   -68,   -68,   -68,   -67,   -67,   -67,   -67,
     -67,   -67,     0,     0,     0,   -68,   -67,   -67,   -67,     0,
       0,     0,     0,     0,   -81,   -81,     0,     0,   -67,   -81,
     -81,   -81,   -81,   -81,   -81,     0,     0,   105,     0,   -81,
     -81,   -81,   -59,   -59,   -59,   -59,   -59,   -59,     0,     0,
     105,   -81,   -59,   -59,   -59,   -58,   -58,   -58,   -58,   -58,
     -58,     0,     0,     0,   -59,   -58,   -58,   -58,    98,    99,
     100,   101,   102,   103,     0,     0,     0,   -58,   -56,   -56,
     -56,     0,     0,     0,    98,    99,   100,   101,   102,   103,
       0,   -56,     0,   -56,   -57,   -57,   -57,     0,     0,     0,
      98,    99,   100,   101,   102,   103,     0,     0,     0,   -57,
     -56,   -56,   -56,     0,     0,     0,    98,    99,   100,   101,
     102,   103,     0,     0,     0,   -56,   -57,   -57,   -57,    98,
      99,   100,   101,   102,   103,     0,     0,     0,   -57,   -56,
     -56,   -56,     0,     0,     0,     0,     0,   -84,   -84,     0,
       0,   -56,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,
     -83,   -83,   -84,   -84,   -84,   -83,   -83,   -83,   -83,   -83,
     -83,     0,     0,   -82,   -82,   -83,   -83,   -83,   -82,   -82,
     -82,   -82,   -82,   -82,     0,     0,   -61,   300,   -82,   -82,
     -82,   -61,   -61,   -61,   -61,   -61,   -61,     0,     0,   -63,
     -63,   -61,   -61,   -61,   -63,   -63,   -63,   -63,   -63,   -63,
       0,     0,   -64,   -64,   -63,   -63,   -63,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,   -70,   -70,   -64,   -64,   -64,
     -70,   -70,   -70,   -70,   -70,   -70,     0,     0,   -81,   -81,
     -70,   -70,   -70,   -81,   -81,   -81,   -81,   -81,   -81,     0,
       0,   -66,   -66,   -81,   -81,   -81,   -66,   -66,   -66,   -66,
     -66,   -66,     0,     0,   -69,   -69,   -66,   -66,   -66,   -69,
     -69,   -69,   -69,   -69,   -69,     0,     0,   -65,   -65,   -69,
     -69,   -69,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,
     -71,   -71,   -65,   -65,   -65,   -71,   -71,   -71,   -71,   -71,
     -71,     0,     0,   -60,   300,   -71,   -71,   -71,   -60,   -60,
     -60,   -60,   -60,   -60,     0,     0,   -62,   -62,   -60,   -60,
     -60,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,   -68,
     -68,   -62,   -62,   -62,   -68,   -68,   -68,   -68,   -68,   -68,
       0,     0,   -67,   -67,   -68,   -68,   -68,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,   299,     0,   -67,   -67,   -67,
     -59,   -59,   -59,   -59,   -59,   -59,     0,     0,   299,     0,
     -59,   -59,   -59,   -58,   -58,   -58,   -58,   -58,   -58,     0,
       0,     0,     0,   -58,   -58,   -58,    98,    99,   100,   101,
     102,   103,     0,     0,     0,     0,   -56,   -56,   -56
};

static const yytype_int16 yycheck[] =
{
       0,    23,    84,    25,     0,    11,     0,     7,     1,    50,
       1,     7,     1,    76,   139,    21,    41,    17,   199,    19,
     167,    27,   169,   170,    42,    27,    32,   139,     5,    29,
     152,    39,    19,    41,    40,    42,   217,     5,    44,     5,
       6,    47,    29,    41,    50,    27,    28,    29,    50,    41,
      43,     5,    43,     7,    43,    23,    41,    25,    26,   139,
      42,    39,   243,    41,   139,    71,     5,     6,   139,    75,
      76,    77,    41,    79,     5,     6,   139,    83,    84,    85,
      41,   139,    36,    37,    27,    28,     5,    41,     7,    95,
      96,    97,     5,    12,     8,     9,    10,    11,   104,   105,
     106,   107,   108,    41,    23,   168,    25,    26,    41,     5,
      23,    30,    25,    26,    40,    44,    42,    36,    37,    40,
      39,    42,    41,    47,     5,     6,   139,    23,    42,    25,
      26,     5,     6,   139,   140,   141,     5,    27,    28,   139,
      27,    28,    29,   139,    41,   167,   152,   169,   170,    41,
      40,    75,    42,   175,    23,    79,    25,    26,    41,    83,
      84,   167,   168,   169,   170,   167,   347,   169,   170,   291,
      40,    95,    42,   354,    27,    28,     5,    39,     7,   301,
      40,   187,    42,    12,   108,   191,     5,    40,   194,    42,
       5,    39,     7,   374,    39,    27,    28,   319,    39,    27,
      28,    30,    27,    28,    29,   211,   212,    36,    37,   215,
      42,     5,    41,     7,    42,    27,    28,   141,    12,    42,
     261,    36,    37,    27,    28,   231,    41,     5,   152,   235,
      42,     5,   238,   274,     5,    39,    30,    27,    28,    29,
      39,    42,    36,    37,    40,   251,    42,    41,   330,   331,
      40,    40,    42,    42,   260,   261,     5,    44,     7,   261,
      27,    28,    29,    27,    28,   328,   272,   414,   274,     5,
     194,     7,   274,    40,    39,    42,    40,    40,    42,    42,
     286,   287,   288,   289,   290,   291,    42,    36,    37,   414,
      31,   215,    41,    39,   441,   301,   443,   444,    27,    42,
      36,    37,   414,    27,    28,    41,    39,   313,   314,   315,
     316,   317,   318,   319,   238,    39,   441,    42,   443,   444,
      42,   327,   328,   329,   330,   331,   332,   251,    42,   441,
      42,   443,   444,    42,   414,   341,    42,    27,    28,   414,
      42,    42,    27,   414,    39,    27,    28,    32,    39,    42,
      40,   414,    42,    39,    42,    40,   414,    41,    40,    44,
      42,   441,    47,   443,   444,    50,   441,   291,   443,   444,
     441,    39,   443,   444,    39,    39,    39,   301,   441,   442,
     443,   444,    39,   441,    39,   443,   444,    27,    28,   313,
      75,    39,    27,    28,    29,   319,    39,    42,    83,    84,
      40,   414,    42,   327,    39,    42,   330,   331,   414,   415,
     416,    96,    97,     5,   414,     5,     5,   341,   414,   104,
     105,   106,   107,   108,     5,    27,    28,   449,   441,    41,
     443,   444,     5,    41,     7,   441,   442,   443,   444,    12,
      42,   441,    42,   443,   444,   441,    39,   443,   444,    31,
      23,    27,    25,    26,   139,   140,    42,    30,    27,    28,
      29,    41,    41,    36,    37,     1,    39,   152,    41,     5,
      39,     7,     8,     9,    10,    11,    12,    41,    14,    15,
      16,    41,   167,    41,   169,   170,    41,    23,    24,    25,
      26,    41,   416,    41,    30,    41,    32,    33,    34,    35,
      36,    37,   187,    41,    41,    41,   191,    43,    41,   194,
      39,     5,    39,     7,    39,    27,    27,    28,    12,    42,
      32,    27,    28,    31,    42,    42,   211,   212,    40,    40,
     215,    42,    44,    39,    41,    47,    30,     5,    50,     7,
      27,    28,    36,    37,    12,    41,   231,    41,    27,    28,
     235,    41,    39,   238,    39,    23,    44,    25,    26,    39,
      39,    44,    30,    75,    27,    28,    29,    42,    36,    37,
      42,    83,    84,    41,    42,   260,   261,    41,    27,    42,
      41,    41,    39,    42,    96,    97,    42,    42,    42,   274,
      42,    42,   104,   105,   106,   107,   108,    27,    28,    27,
      28,   286,   287,   288,   289,   290,   291,    27,    28,    42,
      40,    42,    42,    42,    42,    42,   301,    42,     5,    42,
       7,    27,    42,    27,    28,    12,    39,   139,   140,   314,
     315,   316,   317,   318,   319,    39,    27,    28,    44,    39,
     152,    47,   327,    30,    50,   330,   331,    27,    28,    36,
      37,    42,    27,    28,    41,   167,   341,   169,   170,    27,
      28,     5,    42,     7,    42,    27,    28,    42,    12,    75,
      27,    28,    27,    28,    42,   187,    39,    83,    84,   191,
      42,     5,   194,     7,    42,    42,    30,    42,    12,    39,
      96,    97,    36,    37,    39,    27,    28,    41,   104,   105,
     106,   107,   108,   215,    27,    28,    30,     5,    39,     7,
      42,     7,    36,    37,    12,   414,    39,    41,    -1,   231,
      27,    28,    -1,   235,    -1,    23,   238,    25,    26,   414,
     415,    -1,    30,   139,   140,    42,    27,    28,    36,    37,
      27,    28,    -1,    41,    42,    -1,   152,    -1,   260,   261,
      -1,    42,    -1,    27,    28,    42,   441,    -1,   443,   444,
      -1,   167,   274,   169,   170,     5,    -1,     7,    42,    27,
      28,    -1,    12,    -1,   286,   287,   288,   289,   290,   291,
      27,    28,    -1,    23,    42,    25,    26,    -1,   194,   301,
      30,    -1,    -1,    -1,    27,    42,    36,    37,    38,    -1,
      -1,    41,   314,   315,   316,   317,   318,   319,    -1,   215,
      -1,    44,    27,    28,    47,   327,    -1,    50,   330,   331,
      -1,     5,    -1,     7,    27,    28,    -1,    42,    12,   341,
      27,    28,   238,    -1,     5,    -1,     7,    27,    28,    42,
      -1,    12,    75,    -1,    -1,    42,    30,    27,    28,    39,
      83,    84,    36,    37,   260,   261,    -1,    41,    -1,    30,
      -1,    -1,    42,    96,    97,    36,    37,    -1,   274,    -1,
      41,   104,   105,    -1,   107,   108,    27,    28,    27,    28,
     286,   287,   288,   289,   290,   291,    -1,    -1,     0,     1,
      -1,    42,    -1,    42,   300,   301,     8,     9,    10,    11,
      27,    -1,   414,   415,    -1,    -1,   139,   140,   314,   315,
     316,   317,   318,   319,    -1,    -1,    -1,    44,    -1,   152,
      47,   327,    -1,    50,   330,   331,    -1,    -1,    -1,   441,
      -1,   443,   444,    -1,   167,   341,   169,   170,    -1,    -1,
      -1,    -1,     5,     1,     7,    -1,    -1,    -1,    75,    12,
       8,     9,    10,    11,    -1,    -1,    83,    84,    -1,    -1,
      23,   194,    25,    26,     5,    -1,     7,    30,    -1,    96,
      97,    12,    -1,    36,    37,    -1,    -1,   104,    41,    42,
     107,   108,   215,    -1,    -1,    -1,     5,    -1,     7,    30,
      -1,    -1,    -1,    12,    -1,    36,    37,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    23,   238,    25,    26,   414,   415,
      -1,    30,   139,   140,    -1,    -1,    -1,    36,    37,    -1,
      -1,    -1,    41,    42,    -1,   152,    -1,   260,   261,    -1,
      -1,    -1,    -1,    -1,    -1,   441,    -1,   443,   444,    -1,
     167,   274,   169,   170,     5,    -1,     7,    -1,    -1,    -1,
      -1,    12,    -1,   286,   287,   288,   289,    -1,   291,    -1,
      -1,    -1,    23,    -1,    25,    26,   299,   194,   301,    30,
       5,    -1,     7,    27,    -1,    36,    37,    12,    -1,    -1,
      41,   314,   315,   316,   317,    -1,   319,    -1,   215,    -1,
      44,    -1,    -1,    47,   327,    30,    50,   330,   331,    -1,
      -1,    36,    37,    -1,    -1,    -1,    41,    -1,   341,    12,
      13,   238,    -1,    -1,    17,    18,    19,    20,    21,    22,
       5,    75,     7,    -1,    27,    28,    29,    12,    -1,    83,
      84,    -1,    -1,   260,   261,    -1,    39,     5,    23,     7,
      25,    26,    96,    97,    12,    30,    -1,   274,    -1,    -1,
      -1,    36,    37,   107,   108,    23,    41,    25,    26,   286,
     287,   288,    30,    -1,   291,    -1,    -1,    -1,    36,    37,
      -1,   298,    -1,    41,   301,    -1,    -1,    -1,    -1,    27,
      -1,   414,   415,    -1,    -1,   139,   140,   314,   315,   316,
      -1,    -1,   319,    -1,    -1,    -1,    44,    -1,   152,    47,
     327,    -1,    50,   330,   331,    -1,    -1,    -1,   441,    -1,
     443,   444,    -1,   167,   341,   169,   170,    -1,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    75,    27,    28,
      29,    44,    -1,    -1,    47,    83,    84,    -1,    -1,    -1,
     194,    -1,    -1,     1,    -1,    -1,    -1,     5,    96,     7,
       8,     9,    10,    11,    12,    -1,    14,    15,    16,   107,
     108,   215,    75,    -1,    -1,    23,    24,    25,    26,    -1,
      83,    84,    30,    -1,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    41,   238,    43,    -1,   414,   415,    -1,
      -1,   139,   140,    12,   107,   108,    -1,    -1,    17,    18,
      19,    20,    21,    22,   152,    -1,   260,   261,    27,    28,
      29,    -1,    -1,    -1,   441,    -1,   443,   444,    -1,   167,
     274,   169,   170,    42,    -1,    -1,   139,   140,    -1,    -1,
      -1,    -1,   286,   287,    -1,    -1,    -1,   291,    -1,   152,
       0,     1,    -1,   297,    -1,    -1,   194,   301,     8,     9,
      10,    11,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     314,   315,    -1,    -1,    -1,   319,    -1,   215,    -1,    44,
      -1,    -1,    47,   327,    -1,    50,   330,   331,    -1,    -1,
      -1,   194,    -1,     0,     1,    -1,    -1,   341,     0,     1,
     238,     8,     9,    10,    11,    -1,     8,     9,    10,    11,
      75,    -1,   215,    -1,   252,    -1,    -1,    -1,    83,    84,
      -1,    -1,   260,   261,    12,    13,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,   238,   274,    -1,    -1,    27,
      28,    29,   107,   108,    -1,    -1,    -1,    -1,   286,    -1,
       0,     1,    40,   291,    42,    -1,    -1,   260,     8,     9,
      10,    11,    -1,   301,    -1,    -1,    -1,    -1,    -1,    -1,
     414,   415,    -1,    -1,   139,   140,   314,    -1,    -1,    -1,
      -1,   319,    -1,    -1,    -1,    -1,    -1,   152,   291,   327,
      -1,    -1,   330,   331,    -1,    -1,    -1,   441,   301,   443,
     444,    -1,   167,   341,   169,   170,    -1,    -1,    -1,    47,
      17,    18,    19,    20,    21,    22,   319,    -1,    -1,    -1,
      27,    28,    29,    -1,   327,    -1,    -1,   330,   331,   194,
      -1,    -1,    -1,    40,    -1,    42,    -1,    75,   341,    -1,
      78,    -1,    80,    81,    -1,    83,    84,    -1,    -1,    -1,
     215,    12,    13,    -1,     0,     1,    17,    18,    19,    20,
      21,    22,     8,     9,    10,    11,    27,    28,    29,    -1,
     108,    -1,    -1,   238,    -1,    -1,   414,   415,    -1,    40,
      41,    42,    -1,    12,    13,    -1,    -1,    -1,    17,    18,
      19,    20,    21,    22,    -1,   260,   261,    -1,    27,    28,
      29,    -1,    -1,   441,    -1,   443,   444,    -1,    -1,   274,
      -1,   414,   415,    42,   152,    12,    13,    -1,    -1,    -1,
      17,    18,    19,    20,    21,    22,   291,    -1,    -1,    -1,
      27,    28,    29,    -1,    -1,    -1,   301,    -1,   441,    -1,
     443,   444,    12,    40,    41,    42,    -1,    17,    18,    19,
      20,    21,    22,    -1,   319,    -1,   194,    27,    28,    29,
      -1,    -1,   327,    -1,    -1,   330,   331,    -1,    -1,    -1,
      40,    -1,    42,    -1,    -1,    -1,   341,   215,    -1,    -1,
      -1,    -1,     4,     5,    -1,     7,     8,     9,    10,    11,
      12,    -1,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
     238,    23,    24,    25,    26,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    12,    13,    -1,     0,     1,
      17,    18,    19,    20,    21,    22,     8,     9,    10,    11,
      27,    28,    29,   281,   282,   283,    -1,    -1,    -1,   414,
     415,    -1,    12,   291,    41,    42,    -1,    17,    18,    19,
      20,    21,    22,   301,   302,   303,   304,    27,    28,    29,
     308,   309,   310,    -1,    -1,    -1,   441,    -1,   443,   444,
      40,   319,    42,    -1,    -1,    -1,    -1,    -1,    -1,   327,
      -1,    -1,   330,   331,     4,     5,    -1,     7,     8,     9,
      10,    11,    12,   341,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,     0,     1,
      -1,    41,    -1,    -1,    44,    -1,     8,     9,    10,    11,
      -1,    -1,   380,   381,   382,    -1,     4,     5,    -1,     7,
       8,     9,    10,    11,    12,    -1,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,   407,
     408,   409,    30,    -1,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    41,     4,     5,    44,     7,     8,     9,
      10,    11,    12,    -1,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    41,     4,     5,    44,     7,     8,     9,    10,    11,
      12,    -1,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
       4,     5,    44,     7,     8,     9,    10,    11,    12,    -1,
      14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    41,     4,     5,
      44,     7,     8,     9,    10,    11,    12,    -1,    14,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    41,     4,     5,    44,     7,
       8,     9,    10,    11,    12,    -1,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    41,     4,     5,    44,     7,     8,     9,
      10,    11,    12,    -1,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    41,     4,     5,    44,     7,     8,     9,    10,    11,
      12,    -1,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
       4,     5,    44,     7,     8,     9,    10,    11,    12,    -1,
      14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    41,     4,     5,
      44,     7,     8,     9,    10,    11,    12,    -1,    14,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    41,     4,     5,    44,     7,
       8,     9,    10,    11,    12,    -1,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    41,     4,     5,    44,     7,     8,     9,
      10,    11,    12,    -1,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    41,     4,     5,    44,     7,     8,     9,    10,    11,
      12,    -1,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
       4,     5,    44,     7,     8,     9,    10,    11,    12,    -1,
      14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    41,     4,     5,
      44,     7,     8,     9,    10,    11,    12,    -1,    14,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    41,     4,     5,    44,     7,
       8,     9,    10,    11,    12,    -1,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    41,     4,     5,    44,     7,     8,     9,
      10,    11,    12,    -1,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    41,     4,     5,    44,     7,     8,     9,    10,    11,
      12,    -1,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
       4,     5,    44,     7,     8,     9,    10,    11,    12,    -1,
      14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    41,     4,     5,
      44,     7,     8,     9,    10,    11,    12,    -1,    14,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    41,     4,     5,    44,     7,
       8,     9,    10,    11,    12,    -1,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    41,     4,     5,    44,     7,     8,     9,
      10,    11,    12,    -1,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    41,     4,     5,    44,     7,     8,     9,    10,    11,
      12,    -1,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
       4,     5,    44,     7,     8,     9,    10,    11,    12,    -1,
      14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    41,     4,     5,
      44,     7,     8,     9,    10,    11,    12,    -1,    14,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    41,     4,     5,    44,     7,
       8,     9,    10,    11,    12,    -1,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    41,     4,     5,    44,     7,     8,     9,
      10,    11,    12,    -1,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    41,    -1,     5,    44,     7,     8,     9,    10,    11,
      12,    -1,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      -1,     5,    44,     7,     8,     9,    10,    11,    12,    -1,
      14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    -1,     5,
      44,     7,     8,     9,    10,    11,    12,    -1,    14,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    41,    -1,     5,    44,     7,
       8,     9,    10,    11,    12,    -1,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    41,    -1,     5,    44,     7,     8,     9,
      10,    11,    12,    -1,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    41,    -1,     5,    44,     7,     8,     9,    10,    11,
      12,    -1,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      -1,     5,    44,     7,     8,     9,    10,    11,    12,    -1,
      14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    -1,     5,
      44,     7,     8,     9,    10,    11,    12,    -1,    14,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    41,    -1,     5,    44,     7,
       8,     9,    10,    11,    12,    -1,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    41,    -1,     5,    44,     7,     8,     9,
      10,    11,    12,    -1,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    41,    -1,     5,    44,     7,     8,     9,    10,    11,
      12,    -1,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      -1,     5,    44,     7,     8,     9,    10,    11,    12,    -1,
      14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    -1,     5,
      44,     7,     8,     9,    10,    11,    12,    -1,    14,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    41,    -1,     5,    44,     7,
       8,     9,    10,    11,    12,    -1,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    41,    -1,     5,    44,     7,     8,     9,
      10,    11,    12,    -1,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    41,    -1,     5,    44,     7,     8,     9,    10,    11,
      12,    -1,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      -1,     5,    44,     7,     8,     9,    10,    11,    12,    -1,
      14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    -1,     5,
      44,     7,     8,     9,    10,    11,    12,    -1,    14,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    41,    -1,     5,    44,     7,
       8,     9,    10,    11,    12,    -1,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    41,    -1,     5,    44,     7,     8,     9,
      10,    11,    12,    -1,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    41,    -1,     5,    44,     7,     8,     9,    10,    11,
      12,    -1,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      -1,     5,    44,     7,     8,     9,    10,    11,    12,    -1,
      14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    -1,     5,
      44,     7,     8,     9,    10,    11,    12,    -1,    14,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    41,    -1,     5,    44,     7,
       8,     9,    10,    11,    12,    -1,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    41,    -1,     5,    44,     7,     8,     9,
      10,    11,    12,    -1,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    41,    -1,     5,    44,     7,     8,     9,    10,    11,
      12,    -1,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      -1,     5,    44,     7,     8,     9,    10,    11,    12,    -1,
      14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    -1,     5,
      44,     7,     8,     9,    10,    11,    12,    -1,    14,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    41,    -1,     5,    44,     7,
       8,     9,    10,    11,    12,    -1,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      12,    13,    -1,    41,    -1,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    12,    13,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    41,
      42,     0,     1,    27,    28,    29,    -1,    -1,    -1,     8,
       9,    10,    11,    -1,    12,    13,    40,    -1,    42,    17,
      18,    19,    20,    21,    22,     0,     1,    -1,    -1,    27,
      28,    29,    -1,     8,     9,    10,    11,    -1,    -1,    -1,
      12,    13,    40,    -1,    42,    17,    18,    19,    20,    21,
      22,     0,     1,    -1,    -1,    27,    28,    29,    -1,     8,
       9,    10,    11,    -1,    -1,    -1,    12,    13,    40,    -1,
      42,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    12,    13,    40,    -1,    42,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    13,
      40,    -1,    42,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    13,    40,    -1,    42,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      12,    13,    40,    -1,    42,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    13,    40,    -1,
      42,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    12,    13,    40,    -1,    42,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    13,
      40,    -1,    42,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    13,    40,    -1,    42,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      12,    13,    40,    -1,    42,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    13,    40,    -1,
      42,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    12,    13,    40,    -1,    42,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    13,
      40,    -1,    42,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    27,    28,    29,    12,    13,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    -1,    42,    -1,
      -1,    27,    28,    29,    12,    13,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    -1,    42,    -1,    -1,    27,
      28,    29,    12,    13,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    -1,    42,    -1,    -1,    27,    28,    29,
      12,    13,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    -1,    42,    -1,    -1,    27,    28,    29,    12,    13,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    -1,
      42,    -1,    -1,    27,    28,    29,    12,    13,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    -1,    42,    -1,
      -1,    27,    28,    29,    12,    13,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    -1,    42,    -1,    -1,    27,
      28,    29,    12,    13,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    -1,    42,    -1,    -1,    27,    28,    29,
      12,    13,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    -1,    42,    -1,    -1,    27,    28,    29,    12,    13,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    -1,
      42,    -1,    -1,    27,    28,    29,    12,    13,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    -1,    42,    -1,
      -1,    27,    28,    29,    12,    13,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    -1,    42,    -1,    -1,    27,
      28,    29,    12,    13,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    -1,    42,    -1,    -1,    27,    28,    29,
      12,    13,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    -1,    42,    -1,    -1,    27,    28,    29,    12,    -1,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    -1,
      42,    -1,    -1,    27,    28,    29,    12,    13,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    -1,    42,    -1,
      -1,    27,    28,    29,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    12,    13,    39,    -1,    41,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    12,    13,    39,    -1,
      41,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    12,    13,    39,    -1,    41,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    13,    39,    -1,
      41,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    12,    13,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    41,    -1,    -1,    -1,    27,
      28,    29,    12,    13,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    41,    -1,    12,    13,    27,    28,    29,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    39,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    12,    13,
      -1,    -1,    39,    17,    18,    19,    20,    21,    22,    -1,
      -1,    12,    13,    27,    28,    29,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    39,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    39,    17,
      18,    19,    20,    21,    22,    -1,    -1,    12,    13,    27,
      28,    29,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    39,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      12,    13,    -1,    -1,    39,    17,    18,    19,    20,    21,
      22,    -1,    -1,    12,    13,    27,    28,    29,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    39,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,
      39,    17,    18,    19,    20,    21,    22,    -1,    -1,    12,
      13,    27,    28,    29,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    39,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    12,    13,    -1,    -1,    39,    17,    18,    19,
      20,    21,    22,    -1,    -1,    12,    13,    27,    28,    29,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    39,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    12,    13,
      -1,    -1,    39,    17,    18,    19,    20,    21,    22,    -1,
      -1,    12,    13,    27,    28,    29,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    39,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    39,    17,
      18,    19,    20,    21,    22,    -1,    -1,    12,    -1,    27,
      28,    29,    17,    18,    19,    20,    21,    22,    -1,    -1,
      12,    39,    27,    28,    29,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    39,    27,    28,    29,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    39,    27,    28,
      29,    -1,    -1,    -1,    17,    18,    19,    20,    21,    22,
      -1,    40,    -1,    42,    27,    28,    29,    -1,    -1,    -1,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    42,
      27,    28,    29,    -1,    -1,    -1,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    42,    27,    28,    29,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    39,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    12,    13,    -1,
      -1,    39,    17,    18,    19,    20,    21,    22,    -1,    -1,
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
      13,    27,    28,    29,    17,    18,    19,    20,    21,    22,
      -1,    -1,    12,    13,    27,    28,    29,    17,    18,    19,
      20,    21,    22,    -1,    -1,    12,    -1,    27,    28,    29,
      17,    18,    19,    20,    21,    22,    -1,    -1,    12,    -1,
      27,    28,    29,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    27,    28,    29,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,    28,    29
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     8,     9,    10,    11,    46,    47,    48,    49,
      50,    80,     0,    48,     5,     6,    78,    41,    39,    41,
      51,    80,    51,    42,    78,    42,     1,    43,    52,    40,
      52,     7,    12,    14,    15,    16,    23,    24,    25,    26,
      30,    32,    33,    34,    35,    36,    37,    41,    49,    53,
      54,    55,    56,    57,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    78,
      79,    80,    51,    74,    78,    41,    41,    41,    41,    41,
      41,    41,    74,    41,    41,    41,    39,    63,    78,    63,
      44,    53,    39,    39,    39,    27,    28,    29,    17,    18,
      19,    20,    21,    22,    75,    12,    13,    31,    41,    78,
      63,    64,    78,    78,    67,    68,    65,    78,    67,    67,
      38,    63,    76,    63,    76,    78,    39,    42,    65,    78,
      69,    70,    71,    72,    73,    63,    42,    63,    77,    42,
      39,    27,    42,    42,    42,    42,    42,    42,    42,    42,
      42,    42,    40,    42,    52,    54,    58,    59,    63,    65,
      78,    39,    39,    39,    39,    39,    77,     4,    39,    42,
      42,    59,    64,    59,    59,    42,    52,     8,     9,    10,
      11,     5,     5,     5,     5,     5,     7,    12,    23,    25,
      26,    30,    36,    37,    41,    65,    67,    68,    69,    70,
      71,    72,    73,    74,    78,    79,     5,     5,     5,     5,
       7,    12,    30,    36,    37,    41,    69,    70,    71,    72,
      73,    74,    78,    79,     5,     5,    23,    25,    26,     5,
       7,    12,    23,    25,    26,    30,    36,    37,    41,    65,
      67,    68,    69,    70,    71,    72,    73,    74,    78,    79,
      39,    27,    28,     1,    14,    15,    16,    32,    33,    34,
      35,    43,    49,    55,    56,    57,    60,    61,    62,    63,
      64,    66,    80,     1,    43,    52,    54,    78,     5,    74,
      78,    41,    41,    41,    74,    63,    28,    29,    75,    12,
      13,    41,     5,    74,    78,    74,    63,    29,    75,    12,
      13,    41,    41,    41,    41,     5,    74,    78,    41,    41,
      41,    74,    63,    27,    28,    29,    75,    12,    13,    41,
       5,    23,    25,    26,    65,    78,    69,    41,    41,    41,
      41,    41,    41,    39,    63,    53,    39,    39,    39,    78,
      53,    31,    67,    67,    67,    42,    69,    70,    71,    72,
      73,    42,    77,    42,    70,    71,    72,    73,    42,    77,
      67,    67,    67,    67,    67,    67,    42,     5,    23,    25,
      26,    65,    78,    69,    70,    71,    72,    73,    42,    77,
      41,    41,    41,    63,    64,    78,    63,    76,    63,    76,
      78,    39,    44,    39,    44,    63,    42,    42,    42,    42,
      42,    42,    42,    42,    42,    42,    42,    41,    41,    41,
      42,    67,    67,    67,    42,    39,    27,    42,    42,    42,
      42,    42,    67,    67,    67,    42,    42,    42,    58,    59,
      63,    65,    78,    39,    39,    39,    39,    39,    42,    42,
      42,     4,    39,    42,    42,    59,    64,    59,    59,    42,
      52
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
      77,    78,    79,    79,    79,    80,    80,    80,    80
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
       1,     1,     1,     1,     1,     1,     1,     1,     1
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
#line 83 "sintatic/sintatic.y"
                         {
            (yyval.no) = criarNodo("program");
            (yyval.no)->filho = (yyvsp[0].no);
            raiz = (yyval.no);
        }
#line 2680 "sintatic.tab.c"
    break;

  case 3: /* list_declaration: list_declaration main_declaration  */
#line 91 "sintatic/sintatic.y"
                                          {
            (yyvsp[-1].no)->proximo = (yyvsp[0].no);
        }
#line 2688 "sintatic.tab.c"
    break;

  case 7: /* main_declaration: error  */
#line 100 "sintatic/sintatic.y"
                {}
#line 2694 "sintatic.tab.c"
    break;

  case 8: /* var_declaration: tipos var SEMICOLON  */
#line 104 "sintatic/sintatic.y"
                            {
            (yyval.no) = criarNodo("var_declaration");
            (yyval.no)->filho = (yyvsp[-2].no); 
            (yyvsp[-2].no)->proximo = (yyvsp[-1].no);  
        }
#line 2704 "sintatic.tab.c"
    break;

  case 9: /* func_declaration: tipos var OPEN_PAREN list_args CLS_PAREN blockStmt  */
#line 112 "sintatic/sintatic.y"
                                                           {
            (yyval.no) = criarNodo("func_declaration");   
            (yyval.no)->filho = (yyvsp[-5].no);
            (yyvsp[-5].no)->proximo = (yyvsp[-4].no);
            (yyvsp[-4].no)->proximo = (yyvsp[-2].no);
            (yyvsp[-2].no)->proximo = (yyvsp[0].no);
        }
#line 2716 "sintatic.tab.c"
    break;

  case 10: /* func_declaration: tipos MAIN OPEN_PAREN list_args CLS_PAREN blockStmt  */
#line 119 "sintatic/sintatic.y"
                                                                           {
            (yyval.no) = criarNodo("func_declaration_main");   
            (yyval.no)->filho = (yyvsp[-5].no);
            (yyvsp[-5].no)->proximo = (yyvsp[-2].no);
            (yyvsp[-2].no)->proximo = (yyvsp[0].no);
        }
#line 2727 "sintatic.tab.c"
    break;

  case 14: /* blockStmt: OP_CUR_BRACKET list_statements CLS_CUR_BRACKET  */
#line 134 "sintatic/sintatic.y"
                                                       {
                (yyval.no) = (yyvsp[-1].no);
        }
#line 2735 "sintatic.tab.c"
    break;

  case 15: /* blockStmt: error  */
#line 137 "sintatic/sintatic.y"
                {}
#line 2741 "sintatic.tab.c"
    break;

  case 16: /* list_statements: stmt list_statements  */
#line 141 "sintatic/sintatic.y"
                             {
               (yyval.no) = (yyvsp[-1].no);
               (yyvsp[-1].no)->proximo = (yyvsp[0].no); 
        }
#line 2750 "sintatic.tab.c"
    break;

  case 26: /* input_output_expr: CMD_WRITE OPEN_PAREN str_expr CLS_PAREN SEMICOLON  */
#line 162 "sintatic/sintatic.y"
                                                          {
                (yyval.no) = criarNodo("CMD_WRITE_STR");
        }
#line 2758 "sintatic.tab.c"
    break;

  case 27: /* input_output_expr: CMD_WRITE OPEN_PAREN expr CLS_PAREN SEMICOLON  */
#line 165 "sintatic/sintatic.y"
                                                        {
                (yyval.no) = criarNodo("CMD_WRITE_EXPR");
        }
#line 2766 "sintatic.tab.c"
    break;

  case 28: /* input_output_expr: CMD_WRITELN OPEN_PAREN str_expr CLS_PAREN SEMICOLON  */
#line 168 "sintatic/sintatic.y"
                                                              {
                (yyval.no) = criarNodo("CMD_WRITELN_STR");
        }
#line 2774 "sintatic.tab.c"
    break;

  case 29: /* input_output_expr: CMD_WRITELN OPEN_PAREN expr CLS_PAREN SEMICOLON  */
#line 171 "sintatic/sintatic.y"
                                                          {
                (yyval.no) = criarNodo("CMD_WRITELN_EXPR");
        }
#line 2782 "sintatic.tab.c"
    break;

  case 30: /* input_output_expr: CMD_READ OPEN_PAREN var CLS_PAREN SEMICOLON  */
#line 174 "sintatic/sintatic.y"
                                                      {
                (yyval.no) = criarNodo("CMD_READ_VAR");
        }
#line 2790 "sintatic.tab.c"
    break;

  case 32: /* condition_expr: CMD_IF OPEN_PAREN expr CLS_PAREN block_cond  */
#line 184 "sintatic/sintatic.y"
                                                     {
                (yyval.no) = (yyvsp[-2].no);
        }
#line 2798 "sintatic.tab.c"
    break;

  case 53: /* op_or_expr: op_or_expr OP_OR op_and_expr  */
#line 238 "sintatic/sintatic.y"
                                     {

        }
#line 2806 "sintatic.tab.c"
    break;

  case 56: /* op_and_expr: op_and_expr OP_AND logical_expr  */
#line 246 "sintatic/sintatic.y"
                                        {

        }
#line 2814 "sintatic.tab.c"
    break;

  case 58: /* logical_expr: logical_expr logical_ops arithmetic_expr  */
#line 253 "sintatic/sintatic.y"
                                                {
             (yyval.no) = (yyvsp[-1].no);
             (yyvsp[-1].no)->filho = (yyvsp[-2].no); 
             (yyvsp[-2].no)->proximo = (yyvsp[0].no); 
       }
#line 2824 "sintatic.tab.c"
    break;

  case 72: /* logical_ops: LT_OP  */
#line 287 "sintatic/sintatic.y"
              {
                (yyval.no) = criarNodo("LT_OP");
        }
#line 2832 "sintatic.tab.c"
    break;

  case 73: /* logical_ops: LTE_OP  */
#line 290 "sintatic/sintatic.y"
                  {
                (yyval.no) = criarNodo("LTE_OP");
        }
#line 2840 "sintatic.tab.c"
    break;

  case 74: /* logical_ops: GT_OP  */
#line 293 "sintatic/sintatic.y"
                 {
                (yyval.no) = criarNodo("GT_OP");
        }
#line 2848 "sintatic.tab.c"
    break;

  case 75: /* logical_ops: GTE_OP  */
#line 296 "sintatic/sintatic.y"
                  {
                (yyval.no) = criarNodo("GTE_OP");
        }
#line 2856 "sintatic.tab.c"
    break;

  case 76: /* logical_ops: NEQ_OP  */
#line 299 "sintatic/sintatic.y"
                  {
                (yyval.no) = criarNodo("NEQ_OP");
        }
#line 2864 "sintatic.tab.c"
    break;

  case 77: /* logical_ops: EQUAL_OP  */
#line 302 "sintatic/sintatic.y"
                    {
                (yyval.no) = criarNodo("EQUAL_OP");
        }
#line 2872 "sintatic.tab.c"
    break;

  case 81: /* var: ID  */
#line 317 "sintatic/sintatic.y"
         {
              (yyval.no) = criarNodo((yyvsp[0].sval));
       }
#line 2880 "sintatic.tab.c"
    break;

  case 85: /* tipos: TYPE_INT  */
#line 329 "sintatic/sintatic.y"
                 {
             (yyval.no) = criarNodo("TYPE_INT");
        }
#line 2888 "sintatic.tab.c"
    break;

  case 86: /* tipos: TYPE_FLOAT  */
#line 332 "sintatic/sintatic.y"
                     {
              (yyval.no) = criarNodo("TYPE_FLOAT");
        }
#line 2896 "sintatic.tab.c"
    break;

  case 87: /* tipos: TYPE_SET  */
#line 335 "sintatic/sintatic.y"
                    {
              (yyval.no) = criarNodo("TYPE_SET");
        }
#line 2904 "sintatic.tab.c"
    break;

  case 88: /* tipos: TYPE_ELEM  */
#line 338 "sintatic/sintatic.y"
                    {
             (yyval.no) = criarNodo("TYPE_ELEM");
        }
#line 2912 "sintatic.tab.c"
    break;


#line 2916 "sintatic.tab.c"

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

#line 342 "sintatic/sintatic.y"



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
    escopo.proximo = -1; */
    
    yyparse();


    if(error) return 0;

    /* printTabela(indiceTabela); */
    printArvore(raiz, 0);

    freeArvore(raiz);

    yylex_destroy();
    return 0;
}
