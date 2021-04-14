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
  
  TreeNodes* origin;
  Symbol* table;

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
#define YYLAST   7544

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  593

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
       0,    90,    90,    98,   101,   102,   106,   107,   111,   119,
     129,   133,   134,   138,   147,   155,   158,   165,   173,   180,
     186,   192,   196,   200,   201,   202,   203,   204,   205,   206,
     207,   211,   214,   217,   220,   223,   226,   229,   232,   238,
     249,   254,   260,   261,   271,   272,   276,   279,   283,   289,
     295,   301,   302,   305,   308,   313,   317,   318,   322,   330,
     334,   338,   342,   345,   348,   354,   358,   362,   367,   372,
     380,   385,   386,   390,   395,   399,   404,   408,   413,   417,
     422,   426,   427,   431,   435,   439,   440,   443,   449,   450,
     451,   454,   460,   463,   466,   469,   472,   475,   481,   488,
     489,   490,   496,   503,   510,   518,   522,   526,   532,   535,
     538,   541
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

#define YYPACT_NINF (-302)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-112)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     579,   347,    12,    47,   163,   183,    21,   629,   728,   964,
     984,   267,  1027,  -302,    10,  1068,   405,    22,   562,    81,
    1182,    63,    85,    45,    68,   108,    83,   214,    86,   104,
      62,    62,    35,  1271,   115,    62,    62,  5058,  1443,  1669,
     266,  1711,  1831,   100,  6664,  6684,    50,  6704,   135,   151,
     168,   191,   226,   235,   242,    66,   250,   258,   276,   982,
    1751,  3463,   285,  3504,  3545,  3586,  3627,  3668,  3709,  3750,
     316,   319,   330,   350,   254,   659,   587,  7473,  7044,  6724,
    6744,  6764,  6535,    66,  6784,    63,   294,   357,  1871,   345,
     170,   128,    38,   137,   289,  6804,  6824,  1046,  1299,   184,
     179,  3791,   368,  6589,   340,   381,  1838,   384,  3832,  3873,
    3914,    80,   313,   313,   545,   654,   744,   803,   864,  1058,
     313,   313,  1290,   313,  1937,   599,  6844,   325,  6864,   362,
     450,   399,   462,   470,   474,   557,     3,   578,   468,   471,
     475,   605,    17,   608,    95,   642,   496,   503,   505,   662,
     514,   517,   521,   525,  3955,  3996,  6884,  6904,   727,   745,
     530,   633,  7486,  7064,  6924,  6944,   536,  1123,  6964,   264,
     542,   595,  4980,  1937,   207,   396,   549,   583,   592,   597,
     600,   613,   617,   639,   647,   660,   682,   685,   691,   697,
     699,   701,   707,   680,  6984,  5096,  7004,  4037,   233,  1173,
    4078,  1464,   725,   651,   720,   736,   755,   764,  4119,  4160,
    4201,  4242,  4283,  4324,  4365,  4406,   772,   733,   774,  5019,
     345,  5019,   817,  5019,  5019,  5019,  4447,   780,  4488,  4529,
    4570,  4611,  4652,   591,  4693,   820,   823,   879,   881,   808,
     284,  6562,  4734,  7024,  6614,  2037,  5960,  5985,  6010,   790,
     801,   840,   112,  5105,   825,   117,   171,    -5,  7447,  6485,
    6035,  6060,  6085,  5460,   112,  6110,  1373,   860,   858,  1886,
    1137,  7084,  7102,   251,  5135,   762,  7499,  5390,  7120,  7138,
    7156,  6639,   251,  7174,   856,   873,   869,   896,   898,   905,
    5410,  5485,  5510,  5535,   913,   916,   927,   327,  5144,   311,
     125,   426,   120,  7421,  6135,  5560,  5585,  5610,  5435,   327,
    5635,  4775,    63,   875,   198,  1763,   928,   378,   932,   955,
     961,   968,   971,   994,  1329,  5058,  2006,  2069,  2110,  2151,
    2192,  2233,  2274,  1000,  1005,  1016,    63,  5058,  4816,  4857,
    1026,  1802,  5213,  5222,  6160,  6185,  6210,   837,   975,  5231,
    5231,  5231,  5231,  5231,   668,  6235,  7192,  7210,  7228,   885,
    1020,  1763,  1763,  1763,  1763,   706,  7246,  6260,  5244,  5261,
    5274,  5283,  5292,  5305,  5660,  5685,  5710,   909,  1029,   479,
    5322,  5322,  5322,  5322,  5322,   854,  5735,  1041,  7264,   200,
    1047,  1051,  1085,   307,   336,  1099,  1235,  5760,  2315,  5174,
     345,   297,  1506,  1625,   308,   392,  2356,  1057,  1056,  2397,
    2438,  2479,   880,  1065,  5183,   950,   354,   978,   457,  1070,
     472,  6285,  6310,  1101,    -1,  7460,  6510,  6335,  6360,  1212,
    6385,  1076,  7282,  7300,  7512,  7408,  7318,  7336,  1233,  7354,
    1111,  1088,   637,  1108,   675,  1171,   689,  1192,   796,  1196,
     821,  1237,   826,  5785,  5810,   518,  1115,  1129,  1153,   524,
     593,  1162,   502,  7434,  6410,  5835,  5860,  1248,  5885,  1165,
    4898,  5335,  5344,  5353,  1252,  1176,  1183,  1185,  1227,  1276,
    1184,  1234,  1280,  1241,  1257,  1259,  1266,  2520,  2561,  2602,
    2643,    63,  4939,  1270,  1272,  1284,  1287,  1291,  1312,  1314,
    6435,  6460,  7372,  7390,   922,   983,   999,  1059,  1205,  1225,
     410,   419,   432,   443,   481,   484,  5366,  5383,  5396,  5910,
    5935,  1297,   843,  1302,   862,  1304,   925,  1360,  4980,  1937,
     351,   401,  1327,  1328,  1330,  1332,  1333,  1334,  1336,  1337,
    1338,  1311,   951,  1318,   976,  1322,  1006,  1015,  1055,  1077,
    1097,  1142,  1174,  2684,  2725,  2766,  1343,  1341,  1342,  1344,
    1345,  1346,  2807,  2848,  2889,  2930,  2971,  3012,  3053,  3094,
    3135,   723,   765,   793,   799,   876,   918,  4980,   345,  4980,
    1388,  4980,  4980,  4980,  3176,  1355,  3217,  3258,  3299,  3340,
    3381,  1347,  3422
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
       0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -302,  -302,  -302,  1391,     8,  -301,  -302,    -4,   -26,   -50,
      -2,  -169,  -140,  -128,   877,   -42,  -119,  -112,  -102,    33,
     -88,   323,   -52,  1520,  1583,  1457,  1348,  1222,  1050,   878,
     418,  -238,   -92,  -181,    -9,   560,  -236,   752,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,    61,    26,    10,    24,   198,    62,
     199,    64,    65,    66,   200,   201,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,   120,   148,   170,   281,    83,   123,    84,    85
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,   131,    18,   327,    38,    39,   151,    11,     9,    41,
      42,   387,    27,   107,   218,     9,    32,  -108,    29,    25,
     351,    13,    25,  -108,   353,   -71,   -71,   350,    82,   -70,
     -70,   350,   328,   -72,   -72,    63,    86,   -71,   362,   138,
      25,   -70,   364,   284,   329,   177,    96,   -72,   -72,    12,
     103,   263,  -109,   330,    82,  -103,  -103,  -103,  -109,   182,
     331,    63,  -103,    19,   249,   382,   250,   251,   239,   384,
     332,   243,    44,    45,    96,    40,   127,   -18,    47,   263,
     132,   134,    23,   140,   334,   286,    28,    30,   263,   263,
     153,  -103,   102,   105,   235,   236,   237,   238,   235,   236,
     237,   238,   159,   103,   103,    37,   287,    60,   288,   289,
      31,   103,   103,   240,   103,   103,   308,   344,   246,   247,
     335,   130,    33,   -19,   248,   -72,   -72,   -19,    35,   135,
     147,   150,   227,   269,   270,   271,    46,   184,   141,   242,
     272,    87,   269,   270,   271,    46,    36,   -72,   -72,   272,
     -71,   -71,   381,   253,   -11,   -72,   -72,   166,   169,   -72,
     -71,   273,   -71,    82,   103,   -72,   207,   -72,  -111,   274,
     273,   133,   336,   431,  -111,   268,    88,   226,   274,   228,
     326,   230,   231,   232,   440,   152,   308,   351,  -110,   284,
     540,   353,    89,   338,  -110,   338,   362,   338,   338,   338,
     364,   314,   349,   389,   469,   333,   202,   234,   203,    90,
      82,   340,    82,   -56,    82,    82,    82,   339,   154,   339,
      87,   339,   339,   339,   390,   382,   391,   392,   169,   384,
    -102,  -102,    91,   249,   -45,   250,   251,   -45,   -45,   -45,
     -45,   -45,  -102,   346,   263,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -12,    34,   346,   356,   270,   271,   -45,
     -45,   -45,   -45,   272,   358,   263,   -45,    92,   -45,   -45,
     -45,   -45,    16,   358,   -45,   408,    93,   -45,    17,   235,
     236,   237,   238,    94,   -72,   -72,   348,   413,   376,   263,
     143,    97,   274,   -72,   269,   270,   271,    46,   477,    98,
     376,   272,   268,    27,   195,   394,  -100,   360,   -19,   485,
     481,   484,   476,   284,   160,   103,    82,    99,   244,    44,
      45,    46,   273,    63,  -102,    47,  -102,   412,    82,   106,
     274,   378,   374,   291,   292,    63,   -17,   -69,   -69,   293,
     263,   263,   263,   263,   263,   308,    55,    -5,    -5,   -69,
     267,   -57,   557,   -57,    60,   108,   308,   407,   109,   327,
      -5,    -5,    -5,    -5,   311,   312,   -68,   -68,   298,   -57,
     460,   308,   308,   308,   308,   308,   308,   249,   -68,   250,
     251,   285,   156,   254,   -72,   -72,    12,   169,   328,   110,
     263,   132,   478,   263,   263,   486,   495,   205,   169,   128,
     329,   284,   559,   285,   171,   263,   284,   155,   327,   330,
     327,   254,   327,   327,   327,   139,   331,   398,   169,    87,
     254,   254,   249,   157,   250,   251,   332,   249,   -21,   250,
     251,   487,   475,    87,   158,   480,   483,   328,   173,   328,
     334,   328,   328,   328,  -102,  -102,  -102,   493,   299,   329,
     -62,   329,   -62,   329,   329,   329,   379,   380,   330,   -59,
     330,   -59,   330,   330,   330,   331,   -56,   331,   -56,   331,
     331,   331,   -63,    95,   -63,   332,   335,   332,   262,   332,
     332,   332,    27,   -60,   455,   -60,   555,   -72,   -72,   334,
     585,   334,   172,   334,   334,   334,   124,   204,   206,   497,
     174,   126,   -72,   -72,   175,   456,   262,   457,   458,   280,
     178,   280,   280,   179,   499,   262,   262,   180,   299,    82,
     103,   -64,   561,   -64,   -61,   335,   -61,   335,   336,   335,
     335,   335,   -70,   -70,   381,   584,   326,   586,   -98,   588,
     589,   590,   -70,   307,   -70,   186,   -94,   187,  -102,  -102,
     -94,   -94,   -94,   -94,   -69,   -69,   189,   -94,  -102,   190,
    -102,   333,   556,   191,   -69,   592,   -69,   192,    82,   340,
      82,    87,    82,    82,    82,   -58,   254,   336,   -94,   336,
       1,   336,   336,   336,   196,   326,   -94,   326,   -62,   326,
     326,   326,     2,     3,     4,     5,   197,   254,   313,   176,
     167,    20,    21,    22,   290,   291,   292,    46,   314,   315,
     333,   293,   333,   307,   333,   333,   333,   -71,   -71,   113,
     264,   254,   -59,   -68,   -68,   294,   -71,   295,   296,    -2,
      14,   -67,   297,   -68,   337,   -68,   -66,   393,   121,   -65,
     298,   168,     2,     3,     4,     5,   313,   181,   264,   313,
     183,   282,   -63,   282,   282,   -92,   -60,   264,   264,   -92,
     -92,   -92,   -92,   -70,   -70,   113,   -92,   -72,   -72,   429,
     345,   262,   -70,   290,   291,   292,    46,   299,   -64,   505,
     293,   216,   355,   285,   185,   309,   -61,   -92,   299,   111,
     112,   357,   262,   221,   294,   -92,   295,   296,   -56,   208,
     366,   297,   459,   285,   188,   -72,   -72,   438,   299,   298,
     430,   290,   291,   292,    46,   375,   262,   507,   293,   -72,
     -72,   209,   254,   121,   210,   254,   254,   386,    -4,    -4,
     211,   509,   294,   280,   295,   296,   212,   254,   213,   297,
     214,    -4,    -4,    -4,    -4,   -93,   215,   298,   439,   -93,
     -93,   -93,   -93,   -62,   -62,   309,   -93,   -69,   -69,   280,
     280,   280,   222,   -62,   220,   -62,   -69,   262,   262,   262,
     262,   262,   307,   193,   316,   -68,   -68,   -93,   223,   280,
     280,   280,   280,   307,   -68,   -93,   280,   280,   280,   280,
     280,   280,   -71,   -71,   361,   -59,   -59,   224,   307,   307,
     307,   307,   307,   307,   -95,   -59,   225,   -59,   -95,   -95,
     -95,   -95,   265,   264,  -101,   -95,   -99,   262,   229,   352,
     262,   262,   233,   -63,   -63,  -108,   -72,   -72,  -109,   -60,
     -60,   341,   262,   -63,   264,   -63,   -95,   363,   511,   -60,
     265,   -60,   342,   283,   -95,   283,   283,  -102,  -102,   265,
     265,   -72,   -72,   558,   560,   467,   -72,   -72,   264,   290,
     291,   292,    46,   513,   383,   -96,   293,   -57,   515,   -96,
     -96,   -96,   -96,   -72,   -72,   282,   -96,   310,   285,   421,
     294,   343,   295,   296,  -111,   548,  -110,   297,  -102,   280,
     280,   280,   -72,   -72,  -102,   298,   468,   -96,  -102,  -102,
    -102,   282,   282,   282,   550,   -96,   -64,   -64,  -102,   264,
     264,   264,   264,   264,   309,   367,   -64,   388,   -64,   490,
     491,   282,   282,   282,   282,   309,   285,   432,   282,   282,
     282,   282,   282,   282,   280,   280,   280,   368,   261,   369,
     309,   309,   309,   309,   309,   309,   370,   310,   -61,   -61,
     285,   453,   -62,   -62,   371,   -72,   -72,   372,   -61,   264,
     -61,   -62,   264,   264,    -7,    -7,   261,   552,   373,   279,
     397,   279,   279,   399,   264,   261,   261,    -7,    -7,    -7,
      -7,   -72,   -72,   100,    -6,    -6,   352,   244,    44,    45,
      46,   313,   494,   572,    47,   363,   400,    -6,    -6,    -6,
      -6,   165,   401,   306,   265,   265,   -72,   -72,    51,   402,
      53,    54,   403,   -59,   -59,    55,   265,   422,   574,   313,
     496,   101,   -59,    60,   383,   283,   265,   -10,   -10,   -63,
     -63,   282,   282,   282,   283,   404,   -72,   -72,   -63,   409,
     -10,   -10,   -10,   -10,   410,   -62,   -62,   145,   576,   310,
     265,   245,   246,   247,    46,   411,   146,   -62,   248,   -97,
     414,   310,   433,   -97,   -97,   -97,   -97,   283,    -3,    -3,
     -97,   454,   249,   306,   250,   251,   282,   282,   282,   252,
     470,    -3,    -3,    -3,    -3,   -59,   -59,   253,   471,   -60,
     -60,   -97,   472,   283,   283,   283,   488,   -59,   -60,   -97,
     489,   265,   265,   265,   265,   265,   310,   -63,   -63,   492,
     260,   313,   498,   283,   283,   283,   283,   310,   501,   -63,
     283,   283,   283,   283,   283,   283,   473,   -60,   -60,   313,
     504,   261,   310,   310,   310,   310,   310,   310,   260,   -60,
     313,   278,   285,   278,   278,  -106,  -106,   260,   260,   313,
     506,   265,   261,   503,   265,   265,   516,  -106,  -106,  -106,
    -106,  -106,  -106,   193,   316,   194,   265,  -106,  -106,  -106,
     517,   164,   -64,   -64,   -44,   305,   261,   -44,   -44,   -44,
     -44,   -44,    -8,    -8,   -64,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   279,   518,    -8,    -8,    -8,    -8,   -44,
     -44,   -44,   -44,   316,   -61,   -61,   -44,   520,   -44,   -44,
     -44,   -44,   313,   508,   -44,   530,   -61,   -44,   528,   279,
     279,   279,   529,   283,   283,   283,   533,   261,   261,   261,
     261,   428,   306,   313,   510,   -64,   -64,   313,   512,   279,
     279,   279,   437,   306,   -64,   305,   279,   279,   279,   279,
     279,   279,   193,   316,   500,   -61,   -61,   531,   306,   306,
     306,   306,   466,   306,   -61,   -70,   -70,   361,   283,   283,
     283,    -9,    -9,   193,   316,   502,   534,   261,   313,   514,
     261,   261,   259,   536,    -9,    -9,    -9,    -9,   193,   316,
     519,  -104,   261,   285,   527,  -104,  -104,  -104,  -104,   537,
     149,   538,  -104,   260,   245,   246,   247,    46,   539,   146,
     259,   248,   -58,   277,   -62,   277,   277,   285,   532,   259,
     259,   285,   535,  -104,   260,   249,   -59,   250,   251,   -63,
     405,  -104,   252,   -60,   244,    44,    45,    46,   313,   547,
     253,    47,   163,   313,   549,   313,   551,   304,   260,   279,
     279,   279,   313,   571,   -64,    51,   -61,    53,    54,   313,
     573,   553,    55,   313,   575,   278,   562,   563,   406,   564,
      60,   565,   566,   567,  -103,   568,   569,   570,  -103,  -103,
    -103,  -103,   578,   579,   580,  -103,   581,   582,   583,   587,
     325,   278,   278,   278,   279,   279,   279,   591,    15,   260,
     260,   260,   427,     0,   305,   554,  -103,     0,   258,     0,
       0,   278,   278,   436,  -103,   305,     0,   304,   278,   278,
     278,   278,   278,   278,     0,     0,     0,     0,     0,     0,
     305,   305,   305,   465,     0,   305,   258,     0,     0,   276,
       0,   276,   276,   -16,   -16,   258,   258,     0,     0,   260,
       0,     0,   260,   260,     0,     0,   -16,   -16,   -16,   -16,
       0,   162,     0,     0,   260,   -42,     0,     0,   219,   -42,
     -42,   -42,   -42,   303,     0,   259,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,     0,     0,     0,     0,     0,     0,
     -42,   -42,   -42,   -42,     0,     0,   259,   -42,     0,   -42,
     -42,   -42,   -42,     0,     0,   -42,     0,   479,   -42,     0,
       0,   245,   246,   247,    46,     0,   146,   257,   248,     0,
     259,   278,   278,   278,     0,     0,     0,     0,     0,     0,
       0,     0,   249,     0,   250,   251,     0,   277,     0,   252,
       0,     0,     0,   303,     0,   257,     0,   253,   275,     0,
     275,   275,     0,     0,   257,   257,     0,     0,     0,     0,
       0,     0,     0,   277,   277,   277,   278,   278,   278,   161,
       0,   259,   259,   426,     0,     0,   304,     0,     0,     0,
     255,     0,   302,   277,   435,     0,     0,   304,     0,     0,
     277,   277,   277,   277,   277,   277,     0,     0,     0,     0,
       0,   258,   304,   304,   464,     0,     0,   304,   255,     0,
       0,   136,     0,   142,   144,     0,     0,   255,   255,     0,
       0,   259,   258,     0,   259,   259,   482,     0,     0,     0,
     245,   246,   247,    46,     0,   146,   259,   248,     0,     0,
       0,     0,     0,   256,     0,   300,   258,     0,     0,     0,
       0,   249,   302,   250,   251,     0,     0,     0,   252,     0,
       0,     0,     0,   276,     0,     0,   253,     0,     0,   -14,
     -14,   256,     0,     0,   137,     0,   137,   137,     0,     0,
     256,   256,   -14,   -14,   -14,   -14,     0,     0,     0,   276,
     276,   276,     0,   277,   277,   277,     0,   258,   425,     0,
       0,     0,   303,     0,     0,     0,     0,     0,   301,   434,
     257,   -15,   -15,   303,     0,   300,   276,   276,   276,   276,
     276,   276,     0,     0,   -15,   -15,   -15,   -15,   303,   463,
       0,   257,     0,   303,     0,     0,     0,     0,   277,   277,
     277,     0,     0,     0,     0,     0,     0,   258,     0,     0,
     258,   258,   104,     0,     0,   257,   245,   246,   247,    46,
       0,     0,   258,   248,   395,     0,     0,     0,   269,   270,
     271,    46,   396,   255,     0,   272,     0,   249,   301,   250,
     251,     0,     0,     0,   252,     0,     0,     0,     0,     0,
       0,     0,   253,     0,   255,     0,   273,     0,   275,   275,
     275,     0,     0,   415,   274,     0,   424,   269,   270,   271,
      46,   302,     0,     0,   272,     0,     0,     0,   255,   276,
     276,   276,   302,     0,     0,   275,   275,   275,   275,   275,
     275,   -13,   -13,     0,     0,   273,   256,   462,   -20,   -20,
       0,     0,   302,   274,   -13,   -13,   -13,   -13,     0,     0,
       0,   -20,   -20,   -20,   -20,     0,   257,   256,     0,   257,
     257,   416,   418,   420,   276,   276,   276,     0,     0,     0,
       0,   257,   129,     0,   300,     0,   245,   246,   247,    46,
       0,   256,     0,   248,     0,   300,     0,     0,   442,   444,
     446,   448,   450,   452,  -102,  -102,     0,   249,     0,   250,
     251,     0,     0,     0,   252,   300,  -102,  -102,  -102,  -102,
    -102,  -102,   253,     0,     0,     0,  -102,  -102,  -102,   255,
       0,     0,   255,   255,   137,   137,   137,  -102,   275,   275,
     275,     0,     0,     0,   255,     0,     0,   301,   160,     0,
       0,     0,   244,    44,    45,    46,     0,     0,   301,    47,
       0,   137,   137,   137,   137,   137,   137,     0,     0,     0,
       0,     0,     0,    51,     0,    53,    54,     0,   301,     0,
      55,     0,     0,   275,   275,   275,     0,     0,    60,     0,
       0,     0,   256,     0,     0,   256,   256,     0,     0,     0,
       0,   522,   524,   526,     0,     0,     0,   256,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -29,     0,     0,
     -29,   -29,   -29,   -29,   -29,     0,     0,     0,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,     0,     0,     0,     0,
       0,     0,   -29,   -29,   -29,   -29,   542,   544,   546,   -29,
       0,   -29,   -29,   -29,   -29,  -102,  -102,   -29,     0,     0,
     -29,     0,     0,     0,   137,   137,   137,  -102,  -102,  -102,
    -102,  -102,  -102,     0,     0,     0,     0,  -102,  -102,  -102,
     -26,     0,     0,   -26,   -26,   -26,   -26,   -26,  -102,  -102,
       0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,     0,
       0,     0,     0,     0,     0,   -26,   -26,   -26,   -26,   137,
     137,   137,   -26,     0,   -26,   -26,   -26,   -26,     0,     0,
     -26,   -23,     0,   -26,   -23,   -23,   -23,   -23,   -23,     0,
       0,     0,   -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,
       0,     0,     0,     0,     0,     0,   -23,   -23,   -23,   -23,
       0,     0,     0,   -23,     0,   -23,   -23,   -23,   -23,     0,
       0,   -23,   -24,     0,   -23,   -24,   -24,   -24,   -24,   -24,
       0,     0,     0,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,     0,     0,     0,     0,     0,     0,   -24,   -24,   -24,
     -24,     0,     0,     0,   -24,     0,   -24,   -24,   -24,   -24,
       0,     0,   -24,   -25,     0,   -24,   -25,   -25,   -25,   -25,
     -25,     0,     0,     0,   -25,   -25,   -25,   -25,   -25,   -25,
     -25,   -25,     0,     0,     0,     0,     0,     0,   -25,   -25,
     -25,   -25,     0,     0,     0,   -25,     0,   -25,   -25,   -25,
     -25,     0,     0,   -25,   -28,     0,   -25,   -28,   -28,   -28,
     -28,   -28,     0,     0,     0,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,     0,     0,     0,     0,     0,     0,   -28,
     -28,   -28,   -28,     0,     0,     0,   -28,     0,   -28,   -28,
     -28,   -28,     0,     0,   -28,   -27,     0,   -28,   -27,   -27,
     -27,   -27,   -27,     0,     0,     0,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,   -27,     0,     0,     0,     0,     0,     0,
     -27,   -27,   -27,   -27,     0,     0,     0,   -27,     0,   -27,
     -27,   -27,   -27,     0,     0,   -27,   -10,     0,   -27,   -10,
     -10,   -10,   -10,   -10,     0,     0,     0,   -10,   -10,   -10,
     -10,   -10,   -10,   -10,   -10,     0,     0,     0,     0,     0,
       0,   -10,   -10,   -10,   -10,     0,     0,     0,   -10,     0,
     -10,   -10,   -10,   -10,     0,     0,   -10,   -46,     0,   -10,
     -46,   -46,   -46,   -46,   -46,     0,     0,     0,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,     0,     0,     0,     0,
       0,     0,   -46,   -46,   -46,   -46,     0,     0,     0,   -46,
       0,   -46,   -46,   -46,   -46,     0,     0,   -46,   -55,     0,
     -46,   -55,   -55,   -55,   -55,   -55,     0,     0,     0,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,     0,     0,     0,
       0,     0,     0,   -55,   -55,   -55,   -55,     0,     0,     0,
     -55,     0,   -55,   -55,   -55,   -55,     0,     0,   -55,   -30,
       0,   -55,   -30,   -30,   -30,   -30,   -30,     0,     0,     0,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,     0,
       0,     0,     0,     0,   -30,   -30,   -30,   -30,     0,     0,
       0,   -30,     0,   -30,   -30,   -30,   -30,     0,     0,   -30,
     -51,     0,   -30,   -51,   -51,   -51,   -51,   -51,     0,     0,
       0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,     0,
       0,     0,     0,     0,     0,   -51,   -51,   -51,   -51,     0,
       0,     0,   -51,     0,   -51,   -51,   -51,   -51,     0,     0,
     -51,   -48,     0,   -51,   -48,   -48,   -48,   -48,   -48,     0,
       0,     0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
       0,     0,     0,     0,     0,     0,   -48,   -48,   -48,   -48,
       0,     0,     0,   -48,     0,   -48,   -48,   -48,   -48,     0,
       0,   -48,   -47,     0,   -48,   -47,   -47,   -47,   -47,   -47,
       0,     0,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,     0,     0,     0,     0,     0,     0,   -47,   -47,   -47,
     -47,     0,     0,     0,   -47,     0,   -47,   -47,   -47,   -47,
       0,     0,   -47,   -20,     0,   -47,   -20,   -20,   -20,   -20,
     -20,     0,     0,     0,   -20,   -20,   -20,   -20,   -20,   -20,
     -20,   -20,     0,     0,     0,     0,     0,     0,   -20,   -20,
     -20,   -20,     0,     0,     0,   -20,     0,   -20,   -20,   -20,
     -20,     0,     0,   -20,    -8,     0,   -20,    -8,    -8,    -8,
      -8,    -8,     0,     0,     0,    -8,    -8,    -8,    -8,    -8,
      -8,    -8,    -8,     0,     0,     0,     0,     0,     0,    -8,
      -8,    -8,    -8,     0,     0,     0,    -8,     0,    -8,    -8,
      -8,    -8,     0,     0,    -8,   -41,     0,    -8,   -41,   -41,
     -41,   -41,   -41,     0,     0,     0,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,     0,     0,     0,     0,     0,     0,
     -41,   -41,   -41,   -41,     0,     0,     0,   -41,     0,   -41,
     -41,   -41,   -41,     0,     0,   -41,   -40,     0,   -41,   -40,
     -40,   -40,   -40,   -40,     0,     0,     0,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,     0,     0,     0,     0,     0,
       0,   -40,   -40,   -40,   -40,     0,     0,     0,   -40,     0,
     -40,   -40,   -40,   -40,     0,     0,   -40,   -42,     0,   -40,
     577,   -42,   -42,   -42,   -42,     0,     0,     0,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,     0,     0,     0,     0,
       0,     0,   -42,   -42,   -42,   -42,     0,     0,     0,   -42,
       0,   -42,   -42,   -42,   -42,     0,     0,   -42,   -36,     0,
     -42,   -36,   -36,   -36,   -36,   -36,     0,     0,     0,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,     0,     0,
       0,     0,     0,   -36,   -36,   -36,   -36,     0,     0,     0,
     -36,     0,   -36,   -36,   -36,   -36,     0,     0,   -36,   -32,
       0,   -36,   -32,   -32,   -32,   -32,   -32,     0,     0,     0,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,     0,
       0,     0,     0,     0,   -32,   -32,   -32,   -32,     0,     0,
       0,   -32,     0,   -32,   -32,   -32,   -32,     0,     0,   -32,
     -31,     0,   -32,   -31,   -31,   -31,   -31,   -31,     0,     0,
       0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,
       0,     0,     0,     0,     0,   -31,   -31,   -31,   -31,     0,
       0,     0,   -31,     0,   -31,   -31,   -31,   -31,     0,     0,
     -31,   -37,     0,   -31,   -37,   -37,   -37,   -37,   -37,     0,
       0,     0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
       0,     0,     0,     0,     0,     0,   -37,   -37,   -37,   -37,
       0,     0,     0,   -37,     0,   -37,   -37,   -37,   -37,     0,
       0,   -37,   -34,     0,   -37,   -34,   -34,   -34,   -34,   -34,
       0,     0,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,     0,     0,     0,     0,     0,     0,   -34,   -34,   -34,
     -34,     0,     0,     0,   -34,     0,   -34,   -34,   -34,   -34,
       0,     0,   -34,   -33,     0,   -34,   -33,   -33,   -33,   -33,
     -33,     0,     0,     0,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,     0,     0,     0,     0,     0,     0,   -33,   -33,
     -33,   -33,     0,     0,     0,   -33,     0,   -33,   -33,   -33,
     -33,     0,     0,   -33,   -38,     0,   -33,   -38,   -38,   -38,
     -38,   -38,     0,     0,     0,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,     0,     0,     0,     0,     0,     0,   -38,
     -38,   -38,   -38,     0,     0,     0,   -38,     0,   -38,   -38,
     -38,   -38,     0,     0,   -38,   -35,     0,   -38,   -35,   -35,
     -35,   -35,   -35,     0,     0,     0,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,     0,     0,     0,     0,     0,     0,
     -35,   -35,   -35,   -35,     0,     0,     0,   -35,     0,   -35,
     -35,   -35,   -35,     0,     0,   -35,    -9,     0,   -35,    -9,
      -9,    -9,    -9,    -9,     0,     0,     0,    -9,    -9,    -9,
      -9,    -9,    -9,    -9,    -9,     0,     0,     0,     0,     0,
       0,    -9,    -9,    -9,    -9,     0,     0,     0,    -9,     0,
      -9,    -9,    -9,    -9,     0,     0,    -9,   -43,     0,    -9,
     -43,   -43,   -43,   -43,   -43,     0,     0,     0,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,     0,     0,     0,     0,
       0,     0,   -43,   -43,   -43,   -43,     0,     0,     0,   -43,
       0,   -43,   -43,   -43,   -43,     0,     0,   -43,   -52,     0,
     -43,   -52,   -52,   -52,   -52,   -52,     0,     0,     0,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,     0,     0,     0,
       0,     0,     0,   -52,   -52,   -52,   -52,     0,     0,     0,
     -52,     0,   -52,   -52,   -52,   -52,     0,     0,   -52,   -53,
       0,   -52,   -53,   -53,   -53,   -53,   -53,     0,     0,     0,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,     0,     0,
       0,     0,     0,     0,   -53,   -53,   -53,   -53,     0,     0,
       0,   -53,     0,   -53,   -53,   -53,   -53,     0,     0,   -53,
     -54,     0,   -53,   -54,   -54,   -54,   -54,   -54,     0,     0,
       0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,     0,
       0,     0,     0,     0,     0,   -54,   -54,   -54,   -54,     0,
       0,     0,   -54,     0,   -54,   -54,   -54,   -54,     0,     0,
     -54,   -49,     0,   -54,   -49,   -49,   -49,   -49,   -49,     0,
       0,     0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
       0,     0,     0,     0,     0,     0,   -49,   -49,   -49,   -49,
       0,     0,     0,   -49,     0,   -49,   -49,   -49,   -49,     0,
       0,   -49,   -50,     0,   -49,   -50,   -50,   -50,   -50,   -50,
       0,     0,     0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,     0,     0,     0,     0,     0,     0,   -50,   -50,   -50,
     -50,     0,     0,     0,   -50,     0,   -50,   -50,   -50,   -50,
       0,     0,   -50,   -39,     0,   -50,   -39,   -39,   -39,   -39,
     -39,     0,     0,     0,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,     0,     0,     0,     0,     0,     0,   -39,   -39,
     -39,   -39,     0,     0,     0,   -39,     0,   -39,   -39,   -39,
     -39,     0,     0,   -39,   -29,     0,   -39,     0,   -29,   -29,
     -29,   -29,     0,     0,     0,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,     0,     0,     0,     0,     0,     0,   -29,
     -29,   -29,   -29,     0,     0,     0,   -29,     0,   -29,   -29,
     -29,   -29,     0,     0,   -29,    43,     0,   -29,     0,   241,
      44,    45,    46,     0,     0,     0,    47,   235,   236,   237,
     238,    48,    49,    50,     0,     0,     0,     0,     0,     0,
      51,    52,    53,    54,     0,     0,     0,    55,     0,    56,
      57,    58,    59,     0,     0,    60,   -26,     0,   -22,     0,
     -26,   -26,   -26,   -26,     0,     0,     0,   -26,   -26,   -26,
     -26,   -26,   -26,   -26,   -26,     0,     0,     0,     0,     0,
       0,   -26,   -26,   -26,   -26,     0,     0,     0,   -26,     0,
     -26,   -26,   -26,   -26,     0,     0,   -26,   -23,     0,   -26,
       0,   -23,   -23,   -23,   -23,     0,     0,     0,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,   -23,     0,     0,     0,     0,
       0,     0,   -23,   -23,   -23,   -23,     0,     0,     0,   -23,
       0,   -23,   -23,   -23,   -23,     0,     0,   -23,   -24,     0,
     -23,     0,   -24,   -24,   -24,   -24,     0,     0,     0,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,     0,     0,
       0,     0,     0,   -24,   -24,   -24,   -24,     0,     0,     0,
     -24,     0,   -24,   -24,   -24,   -24,     0,     0,   -24,   -25,
       0,   -24,     0,   -25,   -25,   -25,   -25,     0,     0,     0,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,     0,     0,
       0,     0,     0,     0,   -25,   -25,   -25,   -25,     0,     0,
       0,   -25,     0,   -25,   -25,   -25,   -25,     0,     0,   -25,
     -28,     0,   -25,     0,   -28,   -28,   -28,   -28,     0,     0,
       0,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,     0,
       0,     0,     0,     0,     0,   -28,   -28,   -28,   -28,     0,
       0,     0,   -28,     0,   -28,   -28,   -28,   -28,     0,     0,
     -28,   -27,     0,   -28,     0,   -27,   -27,   -27,   -27,     0,
       0,     0,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
       0,     0,     0,     0,     0,     0,   -27,   -27,   -27,   -27,
       0,     0,     0,   -27,     0,   -27,   -27,   -27,   -27,     0,
       0,   -27,   -46,     0,   -27,     0,   -46,   -46,   -46,   -46,
       0,     0,     0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,     0,     0,     0,     0,     0,     0,   -46,   -46,   -46,
     -46,     0,     0,     0,   -46,     0,   -46,   -46,   -46,   -46,
       0,     0,   -46,   -55,     0,   -46,     0,   -55,   -55,   -55,
     -55,     0,     0,     0,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,     0,     0,     0,     0,     0,     0,   -55,   -55,
     -55,   -55,     0,     0,     0,   -55,     0,   -55,   -55,   -55,
     -55,     0,     0,   -55,   -30,     0,   -55,     0,   -30,   -30,
     -30,   -30,     0,     0,     0,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,     0,     0,     0,     0,     0,     0,   -30,
     -30,   -30,   -30,     0,     0,     0,   -30,     0,   -30,   -30,
     -30,   -30,     0,     0,   -30,   -51,     0,   -30,     0,   -51,
     -51,   -51,   -51,     0,     0,     0,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,     0,     0,     0,     0,     0,     0,
     -51,   -51,   -51,   -51,     0,     0,     0,   -51,     0,   -51,
     -51,   -51,   -51,     0,     0,   -51,   -48,     0,   -51,     0,
     -48,   -48,   -48,   -48,     0,     0,     0,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,     0,     0,     0,     0,     0,
       0,   -48,   -48,   -48,   -48,     0,     0,     0,   -48,     0,
     -48,   -48,   -48,   -48,     0,     0,   -48,   -47,     0,   -48,
       0,   -47,   -47,   -47,   -47,     0,     0,     0,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,     0,     0,     0,     0,
       0,     0,   -47,   -47,   -47,   -47,     0,     0,     0,   -47,
       0,   -47,   -47,   -47,   -47,     0,     0,   -47,   -41,     0,
     -47,     0,   -41,   -41,   -41,   -41,     0,     0,     0,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,     0,     0,     0,
       0,     0,     0,   -41,   -41,   -41,   -41,     0,     0,     0,
     -41,     0,   -41,   -41,   -41,   -41,     0,     0,   -41,   -40,
       0,   -41,     0,   -40,   -40,   -40,   -40,     0,     0,     0,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,     0,     0,
       0,     0,     0,     0,   -40,   -40,   -40,   -40,     0,     0,
       0,   -40,     0,   -40,   -40,   -40,   -40,     0,     0,   -40,
     -36,     0,   -40,     0,   -36,   -36,   -36,   -36,     0,     0,
       0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,
       0,     0,     0,     0,     0,   -36,   -36,   -36,   -36,     0,
       0,     0,   -36,     0,   -36,   -36,   -36,   -36,     0,     0,
     -36,   -32,     0,   -36,     0,   -32,   -32,   -32,   -32,     0,
       0,     0,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
       0,     0,     0,     0,     0,     0,   -32,   -32,   -32,   -32,
       0,     0,     0,   -32,     0,   -32,   -32,   -32,   -32,     0,
       0,   -32,   -31,     0,   -32,     0,   -31,   -31,   -31,   -31,
       0,     0,     0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,     0,     0,     0,     0,     0,     0,   -31,   -31,   -31,
     -31,     0,     0,     0,   -31,     0,   -31,   -31,   -31,   -31,
       0,     0,   -31,   -37,     0,   -31,     0,   -37,   -37,   -37,
     -37,     0,     0,     0,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,     0,     0,     0,     0,     0,     0,   -37,   -37,
     -37,   -37,     0,     0,     0,   -37,     0,   -37,   -37,   -37,
     -37,     0,     0,   -37,   -34,     0,   -37,     0,   -34,   -34,
     -34,   -34,     0,     0,     0,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,     0,     0,     0,     0,     0,     0,   -34,
     -34,   -34,   -34,     0,     0,     0,   -34,     0,   -34,   -34,
     -34,   -34,     0,     0,   -34,   -33,     0,   -34,     0,   -33,
     -33,   -33,   -33,     0,     0,     0,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,     0,     0,     0,     0,     0,     0,
     -33,   -33,   -33,   -33,     0,     0,     0,   -33,     0,   -33,
     -33,   -33,   -33,     0,     0,   -33,   -38,     0,   -33,     0,
     -38,   -38,   -38,   -38,     0,     0,     0,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,     0,     0,     0,     0,     0,
       0,   -38,   -38,   -38,   -38,     0,     0,     0,   -38,     0,
     -38,   -38,   -38,   -38,     0,     0,   -38,   -35,     0,   -38,
       0,   -35,   -35,   -35,   -35,     0,     0,     0,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,     0,     0,     0,     0,
       0,     0,   -35,   -35,   -35,   -35,     0,     0,     0,   -35,
       0,   -35,   -35,   -35,   -35,     0,     0,   -35,   -43,     0,
     -35,     0,   -43,   -43,   -43,   -43,     0,     0,     0,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,     0,     0,
       0,     0,     0,   -43,   -43,   -43,   -43,     0,     0,     0,
     -43,     0,   -43,   -43,   -43,   -43,     0,     0,   -43,   -52,
       0,   -43,     0,   -52,   -52,   -52,   -52,     0,     0,     0,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,     0,     0,
       0,     0,     0,     0,   -52,   -52,   -52,   -52,     0,     0,
       0,   -52,     0,   -52,   -52,   -52,   -52,     0,     0,   -52,
     -53,     0,   -52,     0,   -53,   -53,   -53,   -53,     0,     0,
       0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,     0,
       0,     0,     0,     0,     0,   -53,   -53,   -53,   -53,     0,
       0,     0,   -53,     0,   -53,   -53,   -53,   -53,     0,     0,
     -53,   -54,     0,   -53,     0,   -54,   -54,   -54,   -54,     0,
       0,     0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
       0,     0,     0,     0,     0,     0,   -54,   -54,   -54,   -54,
       0,     0,     0,   -54,     0,   -54,   -54,   -54,   -54,     0,
       0,   -54,   -49,     0,   -54,     0,   -49,   -49,   -49,   -49,
       0,     0,     0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,     0,     0,     0,     0,     0,     0,   -49,   -49,   -49,
     -49,     0,     0,     0,   -49,     0,   -49,   -49,   -49,   -49,
       0,     0,   -49,   -50,     0,   -49,     0,   -50,   -50,   -50,
     -50,     0,     0,     0,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,     0,     0,     0,     0,     0,     0,   -50,   -50,
     -50,   -50,     0,     0,     0,   -50,     0,   -50,   -50,   -50,
     -50,     0,     0,   -50,   -39,     0,   -50,     0,   -39,   -39,
     -39,   -39,     0,     0,     0,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,     0,     0,     0,     0,     0,     0,   -39,
     -39,   -39,   -39,     0,     0,     0,   -39,     0,   -39,   -39,
     -39,   -39,     0,     0,   -39,   -10,     0,   -39,     0,   -10,
     -10,   -10,   -10,     0,     0,     0,   -10,   -10,   -10,   -10,
     -10,   -10,   -10,   -10,     0,     0,     0,     0,     0,     0,
     -10,   -10,   -10,   -10,     0,     0,     0,   -10,     0,   -10,
     -10,   -10,   -10,     0,     0,   -10,    -8,     0,   -10,     0,
      -8,    -8,    -8,    -8,     0,     0,     0,    -8,    -8,    -8,
      -8,    -8,    -8,    -8,    -8,     0,     0,     0,     0,     0,
       0,    -8,    -8,    -8,    -8,     0,     0,     0,    -8,     0,
      -8,    -8,    -8,    -8,     0,     0,    -8,   -45,     0,    -8,
       0,   -45,   -45,   -45,   -45,     0,     0,     0,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,     0,     0,     0,     0,
       0,     0,   -45,   -45,   -45,   -45,     0,     0,     0,   -45,
       0,   -45,   -45,   -45,   -45,     0,     0,   -45,   -44,     0,
     -45,     0,   -44,   -44,   -44,   -44,     0,     0,     0,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,     0,     0,
       0,     0,     0,   -44,   -44,   -44,   -44,     0,     0,     0,
     -44,     0,   -44,   -44,   -44,   -44,     0,     0,   -44,    -9,
       0,   -44,     0,    -9,    -9,    -9,    -9,     0,     0,     0,
      -9,    -9,    -9,    -9,    -9,    -9,    -9,    -9,     0,     0,
       0,     0,     0,     0,    -9,    -9,    -9,    -9,     0,     0,
       0,    -9,     0,    -9,    -9,    -9,    -9,     0,     0,    -9,
     -20,     0,    -9,     0,   -20,   -20,   -20,   -20,     0,     0,
       0,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,     0,
       0,     0,     0,     0,     0,   -20,   -20,   -20,   -20,     0,
       0,     0,   -20,     0,   -20,   -20,   -20,   -20,     0,     0,
     -20,   317,     0,   -20,     0,   241,    44,    45,    46,     0,
       0,     0,    47,   235,   236,   237,   238,   318,   319,   320,
       0,     0,     0,     0,     0,     0,    51,    52,    53,    54,
       0,     0,     0,    55,     0,   321,   322,   323,   324,     0,
      43,    60,     0,   325,   241,    44,    45,    46,     0,     0,
       0,    47,   235,   236,   237,   238,    48,    49,    50,     0,
       0,     0,     0,     0,     0,    51,    52,    53,    54,     0,
       0,     0,    55,     0,    56,    57,    58,    59,     0,    43,
      60,     0,   337,   241,    44,    45,    46,     0,     0,     0,
      47,   235,   236,   237,   238,    48,    49,    50,     0,     0,
       0,     0,     0,     0,    51,    52,    53,    54,     0,     0,
       0,    55,     0,    56,    57,    58,    59,   217,     0,    60,
       0,   290,   291,   292,    46,     0,   347,     0,   293,     0,
     245,   246,   247,    46,     0,     0,     0,   248,     0,     0,
       0,     0,   294,     0,   295,   296,     0,     0,     0,   297,
       0,   249,     0,   250,   251,     0,   359,   298,   252,     0,
     245,   246,   247,    46,     0,   377,   253,   248,     0,   245,
     246,   247,    46,     0,     0,     0,   248,     0,     0,     0,
       0,   249,     0,   250,   251,     0,     0,     0,   252,     0,
     249,     0,   250,   251,     0,   474,   253,   252,     0,   245,
     246,   247,    46,     0,   423,   253,   248,     0,   245,   246,
     247,    46,     0,     0,     0,   248,     0,     0,     0,     0,
     249,     0,   250,   251,     0,     0,     0,   252,     0,   249,
       0,   250,   251,     0,   417,   253,   252,     0,   269,   270,
     271,    46,     0,   419,   253,   272,     0,   269,   270,   271,
      46,     0,   423,     0,   272,     0,   245,   246,   247,    46,
       0,     0,     0,   248,     0,   441,   273,     0,     0,   269,
     270,   271,    46,     0,   274,   273,   272,     0,     0,     0,
       0,     0,   443,   274,   252,     0,   269,   270,   271,    46,
       0,     0,   253,   272,     0,   445,     0,   273,     0,   269,
     270,   271,    46,     0,   447,   274,   272,     0,   269,   270,
     271,    46,     0,   449,   273,   272,     0,   269,   270,   271,
      46,     0,   274,     0,   272,     0,   451,   273,     0,     0,
     269,   270,   271,    46,     0,   274,   273,   272,     0,     0,
       0,     0,     0,   461,   274,   273,     0,   290,   291,   292,
      46,     0,     0,   274,   293,     0,   521,     0,   273,     0,
     269,   270,   271,    46,     0,   523,   274,   272,     0,   269,
     270,   271,    46,     0,   525,   297,   272,     0,   269,   270,
     271,    46,     0,   298,     0,   272,     0,   541,   273,     0,
       0,   269,   270,   271,    46,     0,   274,   273,   272,     0,
       0,     0,     0,     0,   543,   274,   273,     0,   269,   270,
     271,    46,     0,     0,   274,   272,     0,   545,   266,   273,
       0,   269,   270,   271,    46,     0,     0,   274,   272,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   273,     0,  -102,  -102,
     -76,   -76,   -76,     0,   274,     0,     0,     0,     0,   273,
    -102,  -102,  -102,  -102,  -102,  -102,     0,   274,     0,     0,
    -102,  -102,  -102,   -88,   -88,     0,     0,     0,     0,     0,
    -102,  -102,  -102,     0,     0,   -88,   -88,   -88,   -88,   -88,
     -88,     0,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,
       0,     0,     0,     0,     0,   -88,   385,   -88,     0,     0,
     -88,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,     0,
     -88,   -88,   -88,  -106,  -106,     0,     0,     0,     0,     0,
       0,   354,   -88,     0,     0,  -106,  -106,  -106,  -106,  -106,
    -106,     0,     0,     0,     0,  -106,  -106,  -106,  -105,  -105,
       0,     0,     0,     0,     0,  -106,     0,  -106,     0,     0,
    -105,  -105,  -105,  -105,  -105,  -105,     0,     0,     0,     0,
    -105,  -105,  -105,  -107,  -107,     0,     0,     0,     0,     0,
    -105,     0,  -105,     0,     0,  -107,  -107,  -107,  -107,  -107,
    -107,     0,     0,     0,     0,  -107,  -107,  -107,   -78,   122,
       0,     0,     0,     0,     0,  -107,     0,  -107,     0,     0,
     -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,     0,
     -78,   -78,   -78,   -80,   -80,     0,     0,     0,     0,     0,
     -78,     0,   -78,     0,     0,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,     0,     0,   -80,   -80,   -80,   -81,   -81,
       0,     0,     0,     0,     0,   -80,     0,   -80,     0,     0,
     -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,
     -81,   -81,   -81,   -89,   -89,     0,     0,     0,     0,     0,
     -81,     0,   -81,     0,     0,   -89,   -89,   -89,   -89,   -89,
     -89,     0,     0,     0,     0,   -89,   -89,   -89,  -102,  -102,
       0,     0,     0,     0,     0,   -89,     0,   -89,     0,     0,
    -102,  -102,  -102,  -102,  -102,  -102,     0,     0,     0,     0,
    -102,  -102,  -102,   -82,   -82,     0,     0,     0,     0,     0,
    -102,     0,  -102,     0,     0,   -82,   -82,   -82,   -82,   -82,
     -82,     0,     0,     0,     0,   -82,   -82,   -82,   -88,   -88,
       0,     0,     0,     0,     0,   -82,     0,   -82,     0,     0,
     -88,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,     0,
     -88,   -88,   -88,   -83,   -83,     0,     0,     0,     0,     0,
     -88,     0,   -88,     0,     0,   -83,   -83,   -83,   -83,   -83,
     -83,     0,     0,     0,     0,   -83,   -83,   -83,   -87,   -87,
       0,     0,     0,     0,     0,   -83,     0,   -83,     0,     0,
     -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,     0,
     -87,   -87,   -87,   -91,   -91,     0,     0,     0,     0,     0,
     -87,     0,   -87,     0,     0,   -91,   -91,   -91,   -91,   -91,
     -91,     0,     0,     0,     0,   -91,   -91,   -91,   -90,   -90,
       0,     0,     0,     0,     0,   -91,     0,   -91,     0,     0,
     -90,   -90,   -90,   -90,   -90,   -90,     0,     0,     0,     0,
     -90,   -90,   -90,   -77,   122,     0,     0,     0,     0,     0,
     -90,     0,   -90,     0,     0,   -77,   -77,   -77,   -77,   -77,
     -77,     0,     0,     0,     0,   -77,   -77,   -77,   -79,   -79,
       0,     0,     0,     0,     0,   -77,     0,   -77,     0,     0,
     -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,     0,
     -79,   -79,   -79,   -85,   -85,     0,     0,     0,     0,     0,
     -79,     0,   -79,     0,     0,   -85,   -85,   -85,   -85,   -85,
     -85,     0,     0,     0,     0,   -85,   -85,   -85,   -86,   -86,
       0,     0,     0,     0,     0,   -85,     0,   -85,     0,     0,
     -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,     0,
     -86,   -86,   -86,   -84,   -84,     0,     0,     0,     0,     0,
     -86,     0,   -86,     0,     0,   -84,   -84,   -84,   -84,   -84,
     -84,     0,     0,     0,     0,   -84,   -84,   -84,  -106,  -106,
       0,     0,     0,     0,     0,   -84,     0,   -84,     0,     0,
    -106,  -106,  -106,  -106,  -106,  -106,     0,     0,     0,     0,
    -106,  -106,  -106,  -105,  -105,     0,     0,     0,     0,     0,
       0,     0,  -106,     0,     0,  -105,  -105,  -105,  -105,  -105,
    -105,     0,     0,     0,     0,  -105,  -105,  -105,  -107,  -107,
       0,     0,     0,     0,     0,     0,     0,  -105,     0,     0,
    -107,  -107,  -107,  -107,  -107,  -107,     0,     0,     0,     0,
    -107,  -107,  -107,   -78,   122,     0,     0,     0,     0,     0,
       0,     0,  -107,     0,     0,   -78,   -78,   -78,   -78,   -78,
     -78,     0,     0,     0,     0,   -78,   -78,   -78,   -80,   -80,
       0,     0,     0,     0,     0,     0,     0,   -78,     0,     0,
     -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,
     -80,   -80,   -80,   -81,   -81,     0,     0,     0,     0,     0,
       0,     0,   -80,     0,     0,   -81,   -81,   -81,   -81,   -81,
     -81,     0,     0,     0,     0,   -81,   -81,   -81,   -89,   -89,
       0,     0,     0,     0,     0,     0,     0,   -81,     0,     0,
     -89,   -89,   -89,   -89,   -89,   -89,     0,     0,     0,     0,
     -89,   -89,   -89,   266,     0,     0,     0,     0,     0,     0,
       0,     0,   -89,     0,     0,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,     0,   -76,   -76,   -76,  -102,  -102,
       0,     0,     0,     0,     0,   -76,     0,   -76,     0,     0,
    -102,  -102,  -102,  -102,  -102,  -102,     0,     0,     0,     0,
    -102,  -102,  -102,   -82,   -82,     0,     0,     0,     0,     0,
       0,     0,  -102,     0,     0,   -82,   -82,   -82,   -82,   -82,
     -82,     0,     0,     0,     0,   -82,   -82,   -82,   -88,   -88,
       0,     0,     0,     0,     0,     0,     0,   -82,     0,     0,
     -88,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,     0,
     -88,   -88,   -88,   -83,   -83,     0,     0,     0,     0,     0,
       0,     0,   -88,     0,     0,   -83,   -83,   -83,   -83,   -83,
     -83,     0,     0,     0,     0,   -83,   -83,   -83,   -87,   -87,
       0,     0,     0,     0,     0,     0,     0,   -83,     0,     0,
     -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,     0,
     -87,   -87,   -87,   -91,   -91,     0,     0,     0,     0,     0,
       0,     0,   -87,     0,     0,   -91,   -91,   -91,   -91,   -91,
     -91,     0,     0,     0,     0,   -91,   -91,   -91,   -90,   -90,
       0,     0,     0,     0,     0,     0,     0,   -91,     0,     0,
     -90,   -90,   -90,   -90,   -90,   -90,     0,     0,     0,     0,
     -90,   -90,   -90,   -77,   122,     0,     0,     0,     0,     0,
       0,     0,   -90,     0,     0,   -77,   -77,   -77,   -77,   -77,
     -77,     0,     0,     0,     0,   -77,   -77,   -77,   -79,   -79,
       0,     0,     0,     0,     0,     0,     0,   -77,     0,     0,
     -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,     0,
     -79,   -79,   -79,   -85,   -85,     0,     0,     0,     0,     0,
       0,     0,   -79,     0,     0,   -85,   -85,   -85,   -85,   -85,
     -85,     0,     0,     0,     0,   -85,   -85,   -85,   266,     0,
       0,     0,     0,     0,     0,     0,     0,   -85,     0,     0,
     -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,     0,
     -75,   -75,   -75,   -86,   -86,     0,     0,     0,     0,     0,
     -75,     0,   -75,     0,     0,   -86,   -86,   -86,   -86,   -86,
     -86,     0,     0,     0,     0,   -86,   -86,   -86,   -84,   -84,
       0,     0,     0,     0,     0,     0,     0,   -86,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,     0,
     -84,   -84,   -84,   266,     0,     0,     0,     0,     0,     0,
       0,     0,   -84,     0,     0,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,     0,   -76,   -76,   -76,   266,     0,
       0,     0,     0,     0,     0,     0,     0,   -76,     0,     0,
     -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,     0,
     -75,   -75,   -75,   -88,   -88,     0,     0,     0,     0,     0,
       0,     0,   -75,     0,     0,   -88,   -88,   -88,   -88,   -88,
     -88,     0,     0,     0,     0,   -88,   -88,   -88,     0,   124,
    -102,  -102,     0,     0,   -88,     0,   125,     0,     0,     0,
       0,     0,  -102,  -102,  -102,  -102,  -102,  -102,     0,     0,
       0,     0,  -102,  -102,  -102,     0,  -102,   -88,   -88,     0,
       0,  -102,     0,  -102,     0,     0,     0,     0,     0,   -88,
     -88,   -88,   -88,   -88,   -88,     0,     0,     0,     0,   -88,
     -88,   -88,  -102,  -102,     0,     0,     0,     0,   -88,     0,
     125,     0,     0,     0,  -102,  -102,  -102,  -102,  -102,  -102,
       0,     0,     0,     0,  -102,  -102,  -102,   -88,   -88,     0,
       0,     0,     0,  -102,     0,  -102,     0,     0,     0,   -88,
     -88,   -88,   -88,   -88,   -88,     0,     0,     0,     0,   -88,
     -88,   -88,  -106,  -106,     0,     0,     0,     0,     0,     0,
     365,     0,     0,     0,  -106,  -106,  -106,  -106,  -106,  -106,
       0,     0,  -105,  -105,  -106,  -106,  -106,     0,     0,     0,
       0,     0,     0,  -106,  -105,  -105,  -105,  -105,  -105,  -105,
       0,     0,  -107,  -107,  -105,  -105,  -105,     0,     0,     0,
       0,     0,     0,  -105,  -107,  -107,  -107,  -107,  -107,  -107,
       0,     0,   -78,   122,  -107,  -107,  -107,     0,     0,     0,
       0,     0,     0,  -107,   -78,   -78,   -78,   -78,   -78,   -78,
       0,     0,   -80,   -80,   -78,   -78,   -78,     0,     0,     0,
       0,     0,     0,   -78,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,   -81,   -81,   -80,   -80,   -80,     0,     0,     0,
       0,     0,     0,   -80,   -81,   -81,   -81,   -81,   -81,   -81,
       0,     0,   -89,   -89,   -81,   -81,   -81,     0,     0,     0,
       0,     0,     0,   -81,   -89,   -89,   -89,   -89,   -89,   -89,
       0,     0,   -82,   -82,   -89,   -89,   -89,     0,     0,     0,
       0,     0,     0,   -89,   -82,   -82,   -82,   -82,   -82,   -82,
       0,     0,   -88,   -88,   -82,   -82,   -82,     0,     0,     0,
       0,     0,     0,   -82,   -88,   -88,   -88,   -88,   -88,   -88,
       0,     0,   -83,   -83,   -88,   -88,   -88,     0,     0,     0,
       0,     0,     0,   -88,   -83,   -83,   -83,   -83,   -83,   -83,
       0,     0,   -87,   -87,   -83,   -83,   -83,     0,     0,     0,
       0,     0,     0,   -83,   -87,   -87,   -87,   -87,   -87,   -87,
       0,     0,   -91,   -91,   -87,   -87,   -87,     0,     0,     0,
       0,     0,     0,   -87,   -91,   -91,   -91,   -91,   -91,   -91,
       0,     0,   -90,   -90,   -91,   -91,   -91,     0,     0,     0,
       0,     0,     0,   -91,   -90,   -90,   -90,   -90,   -90,   -90,
       0,     0,   -77,   122,   -90,   -90,   -90,     0,     0,     0,
       0,     0,     0,   -90,   -77,   -77,   -77,   -77,   -77,   -77,
       0,     0,   -79,   -79,   -77,   -77,   -77,     0,     0,     0,
       0,     0,     0,   -77,   -79,   -79,   -79,   -79,   -79,   -79,
       0,     0,   -85,   -85,   -79,   -79,   -79,     0,     0,     0,
       0,     0,     0,   -79,   -85,   -85,   -85,   -85,   -85,   -85,
       0,     0,   -86,   -86,   -85,   -85,   -85,     0,     0,     0,
       0,     0,     0,   -85,   -86,   -86,   -86,   -86,   -86,   -86,
       0,     0,   -84,   -84,   -86,   -86,   -86,     0,     0,     0,
       0,     0,     0,   -86,   -84,   -84,   -84,   -84,   -84,   -84,
       0,     0,  -102,  -102,   -84,   -84,   -84,     0,     0,     0,
       0,     0,     0,   -84,  -102,  -102,  -102,  -102,  -102,  -102,
       0,     0,   266,     0,  -102,  -102,  -102,     0,     0,     0,
       0,     0,     0,  -102,   -76,   -76,   -76,   -76,   -76,   -76,
       0,     0,   266,     0,   -76,   -76,   -76,     0,     0,     0,
       0,     0,     0,   -76,   -75,   -75,   -75,   -75,   -75,   -75,
       0,     0,  -105,  -105,   -75,   -75,   -75,     0,     0,     0,
       0,     0,     0,   -75,  -105,  -105,  -105,  -105,  -105,  -105,
    -107,  -107,     0,     0,  -105,  -105,  -105,     0,     0,     0,
       0,     0,  -107,  -107,  -107,  -107,  -107,  -107,   -78,   122,
       0,     0,  -107,  -107,  -107,     0,     0,     0,     0,     0,
     -78,   -78,   -78,   -78,   -78,   -78,   -80,   -80,     0,     0,
     -78,   -78,   -78,     0,     0,     0,     0,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -81,   -81,     0,     0,   -80,   -80,
     -80,     0,     0,     0,     0,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -89,   -89,     0,     0,   -81,   -81,   -81,     0,
       0,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,   -89,
    -102,  -102,     0,     0,   -89,   -89,   -89,     0,     0,     0,
       0,     0,  -102,  -102,  -102,  -102,  -102,  -102,   -82,   -82,
       0,     0,  -102,  -102,  -102,     0,     0,     0,     0,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -88,   -88,     0,     0,
     -82,   -82,   -82,     0,     0,     0,     0,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -83,   -83,     0,     0,   -88,   -88,
     -88,     0,     0,     0,     0,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -87,   -87,     0,     0,   -83,   -83,   -83,     0,
       0,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -91,   -91,     0,     0,   -87,   -87,   -87,     0,     0,     0,
       0,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -90,   -90,
       0,     0,   -91,   -91,   -91,     0,     0,     0,     0,     0,
     -90,   -90,   -90,   -90,   -90,   -90,   -77,   122,     0,     0,
     -90,   -90,   -90,     0,     0,     0,     0,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -79,   -79,     0,     0,   -77,   -77,
     -77,     0,     0,     0,     0,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -85,   -85,     0,     0,   -79,   -79,   -79,     0,
       0,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -86,   -86,     0,     0,   -85,   -85,   -85,     0,     0,     0,
       0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -84,   -84,
       0,     0,   -86,   -86,   -86,     0,     0,     0,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   266,     0,     0,     0,
     -84,   -84,   -84,     0,     0,     0,     0,     0,   -75,   -75,
     -75,   -75,   -75,   -75,     0,     0,     0,     0,   -75,   -75,
     -75,   114,   115,   116,   117,   118,   119,     0,     0,     0,
       0,   -74,   -74,   -74,   114,   115,   116,   117,   118,   119,
       0,   -74,     0,   -74,   -73,   -73,   -73,   114,   115,   116,
     117,   118,   119,     0,   -73,     0,   -73,   -74,   -74,   -74,
     114,   115,   116,   117,   118,   119,     0,     0,     0,   -74,
     -73,   -73,   -73,   114,   115,   116,   117,   118,   119,     0,
       0,     0,   -73,   -74,   -74,   -74,   114,   115,   116,   117,
     118,   119,   -74,     0,     0,     0,   -73,   -73,   -73,   114,
     115,   116,   117,   118,   119,   -73,     0,     0,     0,   -74,
     -74,   -74,   114,   115,   116,   117,   118,   119,     0,     0,
       0,     0,   -73,   -73,   -73
};

static const yytype_int16 yycheck[] =
{
       0,    89,    11,   172,    30,    31,    98,     7,     0,    35,
      36,   312,    21,    63,   195,     7,    25,     5,    22,    19,
     258,     0,    22,    11,   260,    30,    31,    32,    37,    30,
      31,    32,   172,    30,    31,    37,    40,    42,   276,     1,
      40,    42,   278,     5,   172,    42,    55,    30,    31,    39,
      59,    60,     5,   172,    63,     5,     6,     7,    11,    42,
     172,    63,    12,    41,    26,   303,    28,    29,     5,   305,
     172,     5,     6,     7,    83,    40,    85,    42,    12,    88,
      89,    90,     1,    92,   172,     5,     1,    42,    97,    98,
      99,    41,    59,    60,    13,    14,    15,    16,    13,    14,
      15,    16,   111,   112,   113,    43,    26,    41,    28,    29,
      42,   120,   121,     5,   123,   124,   125,     5,     6,     7,
     172,    88,    39,    42,    12,    30,    31,    42,    42,     1,
      97,    98,   220,     5,     6,     7,     8,    42,     1,    39,
      12,    41,     5,     6,     7,     8,    42,    30,    31,    12,
      30,    31,    32,    41,    39,    30,    31,   124,   125,    42,
      40,    33,    42,   172,   173,    40,   175,    42,     5,    41,
      33,     1,   172,   354,    11,     5,    41,   219,    41,   221,
     172,   223,   224,   225,   365,     1,   195,   425,     5,     5,
     491,   427,    41,   219,    11,   221,   434,   223,   224,   225,
     436,    30,    31,     5,   385,   172,   173,   233,     1,    41,
     219,   220,   221,    42,   223,   224,   225,   219,    39,   221,
      41,   223,   224,   225,    26,   463,    28,    29,   195,   465,
      30,    31,    41,    26,     1,    28,    29,     4,     5,     6,
       7,     8,    42,   252,   253,    12,    13,    14,    15,    16,
      17,    18,    19,    39,    40,   264,     5,     6,     7,    26,
      27,    28,    29,    12,   273,   274,    33,    41,    35,    36,
      37,    38,     5,   282,    41,   325,    41,    44,    11,    13,
      14,    15,    16,    41,    30,    31,   253,   337,   297,   298,
       1,    41,    41,    39,     5,     6,     7,     8,     1,    41,
     309,    12,     5,   312,    40,   314,    42,   274,    42,     1,
     402,   403,   400,     5,     1,   324,   325,    41,     5,     6,
       7,     8,    33,   325,    40,    12,    42,   336,   337,    44,
      41,   298,     5,     6,     7,   337,    42,    30,    31,    12,
     349,   350,   351,   352,   353,   354,    33,     0,     1,    42,
       5,    40,     1,    42,    41,    39,   365,   324,    39,   528,
      13,    14,    15,    16,    39,    40,    30,    31,    41,    39,
     379,   380,   381,   382,   383,   384,   385,    26,    42,    28,
      29,    41,    42,    60,    30,    31,    39,   354,   528,    39,
     399,   400,   401,   402,   403,   404,    42,     1,   365,    42,
     528,     5,     1,    41,    42,   414,     5,    39,   577,   528,
     579,    88,   581,   582,   583,    92,   528,    39,   385,    41,
      97,    98,    26,    42,    28,    29,   528,    26,    44,    28,
      29,    39,   399,    41,   111,   402,   403,   577,    39,   579,
     528,   581,   582,   583,    39,    40,    41,   414,   125,   577,
      40,   579,    42,   581,   582,   583,    30,    31,   577,    40,
     579,    42,   581,   582,   583,   577,    40,   579,    42,   581,
     582,   583,    40,    55,    42,   577,   528,   579,    60,   581,
     582,   583,   491,    40,     5,    42,   528,    30,    31,   577,
     578,   579,    42,   581,   582,   583,    34,   174,   175,    42,
      30,    83,    30,    31,    30,    26,    88,    28,    29,    91,
      42,    93,    94,    42,    42,    97,    98,    42,   195,   528,
     529,    40,   531,    42,    40,   577,    42,   579,   528,   581,
     582,   583,    30,    31,    32,   577,   528,   579,    42,   581,
     582,   583,    40,   125,    42,    42,     1,    42,    30,    31,
       5,     6,     7,     8,    30,    31,    42,    12,    40,    42,
      42,   528,   529,    42,    40,   591,    42,    42,   577,   578,
     579,    41,   581,   582,   583,    39,   253,   577,    33,   579,
       1,   581,   582,   583,    42,   577,    41,   579,    39,   581,
     582,   583,    13,    14,    15,    16,     1,   274,    41,    42,
       1,    39,    40,    41,     5,     6,     7,     8,    30,    31,
     577,    12,   579,   195,   581,   582,   583,    30,    31,    32,
      60,   298,    39,    30,    31,    26,    39,    28,    29,     0,
       1,    39,    33,    40,    43,    42,    39,   314,    78,    39,
      41,    42,    13,    14,    15,    16,    41,    42,    88,    41,
      42,    91,    39,    93,    94,     1,    39,    97,    98,     5,
       6,     7,     8,    30,    31,    32,    12,    30,    31,     1,
     252,   253,    39,     5,     6,     7,     8,   354,    39,    42,
      12,     1,   264,    41,    42,   125,    39,    33,   365,    30,
      31,   273,   274,    42,    26,    41,    28,    29,    39,    39,
     282,    33,   379,    41,    42,    30,    31,     1,   385,    41,
      42,     5,     6,     7,     8,   297,   298,    42,    12,    30,
      31,    39,   399,   163,    39,   402,   403,   309,     0,     1,
      39,    42,    26,   315,    28,    29,    39,   414,    39,    33,
      39,    13,    14,    15,    16,     1,    39,    41,    42,     5,
       6,     7,     8,    30,    31,   195,    12,    30,    31,   341,
     342,   343,    42,    40,    39,    42,    39,   349,   350,   351,
     352,   353,   354,    40,    41,    30,    31,    33,    42,   361,
     362,   363,   364,   365,    39,    41,   368,   369,   370,   371,
     372,   373,    30,    31,    32,    30,    31,    42,   380,   381,
     382,   383,   384,   385,     1,    40,    42,    42,     5,     6,
       7,     8,    60,   253,    42,    12,    42,   399,     1,   259,
     402,   403,    42,    30,    31,     5,    30,    31,     5,    30,
      31,    41,   414,    40,   274,    42,    33,   277,    42,    40,
      88,    42,    41,    91,    41,    93,    94,    39,    40,    97,
      98,    30,    31,   530,   531,     1,    30,    31,   298,     5,
       6,     7,     8,    42,   304,     1,    12,    42,    42,     5,
       6,     7,     8,    30,    31,   315,    12,   125,    41,    42,
      26,    41,    28,    29,     5,    42,     5,    33,    30,   471,
     472,   473,    30,    31,    34,    41,    42,    33,    42,    30,
      31,   341,   342,   343,    42,    41,    30,    31,    39,   349,
     350,   351,   352,   353,   354,    42,    40,    42,    42,    39,
      40,   361,   362,   363,   364,   365,    41,    42,   368,   369,
     370,   371,   372,   373,   516,   517,   518,    41,    60,    41,
     380,   381,   382,   383,   384,   385,    41,   195,    30,    31,
      41,    42,    30,    31,    41,    30,    31,    41,    40,   399,
      42,    39,   402,   403,     0,     1,    88,    42,    41,    91,
      42,    93,    94,    41,   414,    97,    98,    13,    14,    15,
      16,    30,    31,     1,     0,     1,   426,     5,     6,     7,
       8,    41,    42,    42,    12,   435,    41,    13,    14,    15,
      16,   123,    41,   125,   252,   253,    30,    31,    26,    41,
      28,    29,    41,    30,    31,    33,   264,    42,    42,    41,
      42,    39,    39,    41,   464,   273,   274,     0,     1,    30,
      31,   471,   472,   473,   282,    41,    30,    31,    39,    39,
      13,    14,    15,    16,    39,    30,    31,     1,    42,   297,
     298,     5,     6,     7,     8,    39,    10,    42,    12,     1,
      34,   309,    42,     5,     6,     7,     8,   315,     0,     1,
      12,    42,    26,   195,    28,    29,   516,   517,   518,    33,
      39,    13,    14,    15,    16,    30,    31,    41,    41,    30,
      31,    33,    41,   341,   342,   343,    39,    42,    39,    41,
      44,   349,   350,   351,   352,   353,   354,    30,    31,    44,
      60,    41,    42,   361,   362,   363,   364,   365,    42,    42,
     368,   369,   370,   371,   372,   373,    41,    30,    31,    41,
      42,   253,   380,   381,   382,   383,   384,   385,    88,    42,
      41,    91,    41,    93,    94,     8,     9,    97,    98,    41,
      42,   399,   274,    42,   402,   403,    41,    20,    21,    22,
      23,    24,    25,    40,    41,    42,   414,    30,    31,    32,
      41,   121,    30,    31,     1,   125,   298,     4,     5,     6,
       7,     8,     0,     1,    42,    12,    13,    14,    15,    16,
      17,    18,    19,   315,    41,    13,    14,    15,    16,    26,
      27,    28,    29,    41,    30,    31,    33,    42,    35,    36,
      37,    38,    41,    42,    41,    30,    42,    44,    42,   341,
     342,   343,    39,   471,   472,   473,    42,   349,   350,   351,
     352,   353,   354,    41,    42,    30,    31,    41,    42,   361,
     362,   363,   364,   365,    39,   195,   368,   369,   370,   371,
     372,   373,    40,    41,    42,    30,    31,    30,   380,   381,
     382,   383,   384,   385,    39,    30,    31,    32,   516,   517,
     518,     0,     1,    40,    41,    42,    42,   399,    41,    42,
     402,   403,    60,    42,    13,    14,    15,    16,    40,    41,
      42,     1,   414,    41,    42,     5,     6,     7,     8,    42,
       1,    42,    12,   253,     5,     6,     7,     8,    42,    10,
      88,    12,    42,    91,    42,    93,    94,    41,    42,    97,
      98,    41,    42,    33,   274,    26,    42,    28,    29,    42,
       1,    41,    33,    42,     5,     6,     7,     8,    41,    42,
      41,    12,   120,    41,    42,    41,    42,   125,   298,   471,
     472,   473,    41,    42,    42,    26,    42,    28,    29,    41,
      42,     1,    33,    41,    42,   315,    39,    39,    39,    39,
      41,    39,    39,    39,     1,    39,    39,    39,     5,     6,
       7,     8,    39,    42,    42,    12,    42,    42,    42,     1,
      43,   341,   342,   343,   516,   517,   518,    42,     7,   349,
     350,   351,   352,    -1,   354,   528,    33,    -1,    60,    -1,
      -1,   361,   362,   363,    41,   365,    -1,   195,   368,   369,
     370,   371,   372,   373,    -1,    -1,    -1,    -1,    -1,    -1,
     380,   381,   382,   383,    -1,   385,    88,    -1,    -1,    91,
      -1,    93,    94,     0,     1,    97,    98,    -1,    -1,   399,
      -1,    -1,   402,   403,    -1,    -1,    13,    14,    15,    16,
      -1,   113,    -1,    -1,   414,     1,    -1,    -1,     4,     5,
       6,     7,     8,   125,    -1,   253,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    -1,    -1,   274,    33,    -1,    35,
      36,    37,    38,    -1,    -1,    41,    -1,     1,    44,    -1,
      -1,     5,     6,     7,     8,    -1,    10,    60,    12,    -1,
     298,   471,   472,   473,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    28,    29,    -1,   315,    -1,    33,
      -1,    -1,    -1,   195,    -1,    88,    -1,    41,    91,    -1,
      93,    94,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   341,   342,   343,   516,   517,   518,   112,
      -1,   349,   350,   351,    -1,    -1,   354,    -1,    -1,    -1,
      60,    -1,   125,   361,   362,    -1,    -1,   365,    -1,    -1,
     368,   369,   370,   371,   372,   373,    -1,    -1,    -1,    -1,
      -1,   253,   380,   381,   382,    -1,    -1,   385,    88,    -1,
      -1,    91,    -1,    93,    94,    -1,    -1,    97,    98,    -1,
      -1,   399,   274,    -1,   402,   403,     1,    -1,    -1,    -1,
       5,     6,     7,     8,    -1,    10,   414,    12,    -1,    -1,
      -1,    -1,    -1,    60,    -1,   125,   298,    -1,    -1,    -1,
      -1,    26,   195,    28,    29,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,   315,    -1,    -1,    41,    -1,    -1,     0,
       1,    88,    -1,    -1,    91,    -1,    93,    94,    -1,    -1,
      97,    98,    13,    14,    15,    16,    -1,    -1,    -1,   341,
     342,   343,    -1,   471,   472,   473,    -1,   349,   350,    -1,
      -1,    -1,   354,    -1,    -1,    -1,    -1,    -1,   125,   361,
     253,     0,     1,   365,    -1,   195,   368,   369,   370,   371,
     372,   373,    -1,    -1,    13,    14,    15,    16,   380,   381,
      -1,   274,    -1,   385,    -1,    -1,    -1,    -1,   516,   517,
     518,    -1,    -1,    -1,    -1,    -1,    -1,   399,    -1,    -1,
     402,   403,     1,    -1,    -1,   298,     5,     6,     7,     8,
      -1,    -1,   414,    12,     1,    -1,    -1,    -1,     5,     6,
       7,     8,   315,   253,    -1,    12,    -1,    26,   195,    28,
      29,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    -1,   274,    -1,    33,    -1,   341,   342,
     343,    -1,    -1,     1,    41,    -1,   349,     5,     6,     7,
       8,   354,    -1,    -1,    12,    -1,    -1,    -1,   298,   471,
     472,   473,   365,    -1,    -1,   368,   369,   370,   371,   372,
     373,     0,     1,    -1,    -1,    33,   253,   380,     0,     1,
      -1,    -1,   385,    41,    13,    14,    15,    16,    -1,    -1,
      -1,    13,    14,    15,    16,    -1,   399,   274,    -1,   402,
     403,   341,   342,   343,   516,   517,   518,    -1,    -1,    -1,
      -1,   414,     1,    -1,   354,    -1,     5,     6,     7,     8,
      -1,   298,    -1,    12,    -1,   365,    -1,    -1,   368,   369,
     370,   371,   372,   373,     8,     9,    -1,    26,    -1,    28,
      29,    -1,    -1,    -1,    33,   385,    20,    21,    22,    23,
      24,    25,    41,    -1,    -1,    -1,    30,    31,    32,   399,
      -1,    -1,   402,   403,   341,   342,   343,    41,   471,   472,
     473,    -1,    -1,    -1,   414,    -1,    -1,   354,     1,    -1,
      -1,    -1,     5,     6,     7,     8,    -1,    -1,   365,    12,
      -1,   368,   369,   370,   371,   372,   373,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    28,    29,    -1,   385,    -1,
      33,    -1,    -1,   516,   517,   518,    -1,    -1,    41,    -1,
      -1,    -1,   399,    -1,    -1,   402,   403,    -1,    -1,    -1,
      -1,   471,   472,   473,    -1,    -1,    -1,   414,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,   516,   517,   518,    33,
      -1,    35,    36,    37,    38,     8,     9,    41,    -1,    -1,
      44,    -1,    -1,    -1,   471,   472,   473,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
       1,    -1,    -1,     4,     5,     6,     7,     8,    41,    42,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,   516,
     517,   518,    33,    -1,    35,    36,    37,    38,    -1,    -1,
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
       1,    41,    -1,    43,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,     1,
      41,    -1,    43,     5,     6,     7,     8,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,     1,    -1,    41,
      -1,     5,     6,     7,     8,    -1,     1,    -1,    12,    -1,
       5,     6,     7,     8,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    26,    -1,    28,    29,    -1,    -1,    -1,    33,
      -1,    26,    -1,    28,    29,    -1,     1,    41,    33,    -1,
       5,     6,     7,     8,    -1,     1,    41,    12,    -1,     5,
       6,     7,     8,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    26,    -1,    28,    29,    -1,    -1,    -1,    33,    -1,
      26,    -1,    28,    29,    -1,     1,    41,    33,    -1,     5,
       6,     7,     8,    -1,     1,    41,    12,    -1,     5,     6,
       7,     8,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      26,    -1,    28,    29,    -1,    -1,    -1,    33,    -1,    26,
      -1,    28,    29,    -1,     1,    41,    33,    -1,     5,     6,
       7,     8,    -1,     1,    41,    12,    -1,     5,     6,     7,
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
       7,     8,    -1,    -1,    41,    12,    -1,     1,     8,    33,
      -1,     5,     6,     7,     8,    -1,    -1,    41,    12,    -1,
      20,    21,    22,    23,    24,    25,    33,    -1,     8,     9,
      30,    31,    32,    -1,    41,    -1,    -1,    -1,    -1,    33,
      20,    21,    22,    23,    24,    25,    -1,    41,    -1,    -1,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,    -1,
      40,    41,    42,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,     9,
      -1,    -1,    -1,    -1,    -1,    40,    41,    42,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    42,    -1,    -1,    20,    21,    22,    23,    24,
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
      25,    -1,    -1,    -1,    -1,    30,    31,    32,    -1,    34,
       8,     9,    -1,    -1,    39,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,    -1,    34,     8,     9,    -1,
      -1,    39,    -1,    41,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      31,    32,     8,     9,    -1,    -1,    -1,    -1,    39,    -1,
      41,    -1,    -1,    -1,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    30,    31,    32,     8,     9,    -1,
      -1,    -1,    -1,    39,    -1,    41,    -1,    -1,    -1,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      31,    32,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    20,    21,    22,    23,    24,    25,
      -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    20,    21,    22,    23,    24,    25,
      -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    20,    21,    22,    23,    24,    25,
      -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    20,    21,    22,    23,    24,    25,
      -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    20,    21,    22,    23,    24,    25,
      -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    20,    21,    22,    23,    24,    25,
      -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    20,    21,    22,    23,    24,    25,
      -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    20,    21,    22,    23,    24,    25,
      -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    20,    21,    22,    23,    24,    25,
      -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    20,    21,    22,    23,    24,    25,
      -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    20,    21,    22,    23,    24,    25,
      -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    20,    21,    22,    23,    24,    25,
      -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    20,    21,    22,    23,    24,    25,
      -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    20,    21,    22,    23,    24,    25,
      -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    20,    21,    22,    23,    24,    25,
      -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    20,    21,    22,    23,    24,    25,
      -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    20,    21,    22,    23,    24,    25,
      -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    20,    21,    22,    23,    24,    25,
      -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    20,    21,    22,    23,    24,    25,
      -1,    -1,     8,    -1,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    20,    21,    22,    23,    24,    25,
      -1,    -1,     8,    -1,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    20,    21,    22,    23,    24,    25,
      -1,    -1,     8,     9,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    20,    21,    22,    23,    24,    25,
       8,     9,    -1,    -1,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    25,     8,     9,
      -1,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    25,     8,     9,    -1,    -1,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,     8,     9,    -1,    -1,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,
      24,    25,     8,     9,    -1,    -1,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,    25,
       8,     9,    -1,    -1,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    25,     8,     9,
      -1,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    25,     8,     9,    -1,    -1,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,     8,     9,    -1,    -1,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,
      24,    25,     8,     9,    -1,    -1,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,    25,
       8,     9,    -1,    -1,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    25,     8,     9,
      -1,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    25,     8,     9,    -1,    -1,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,     8,     9,    -1,    -1,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,
      24,    25,     8,     9,    -1,    -1,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,    25,
       8,     9,    -1,    -1,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    25,     8,     9,
      -1,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    25,     8,    -1,    -1,    -1,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,
      32,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    30,    31,    32,    20,    21,    22,    23,    24,    25,
      -1,    40,    -1,    42,    30,    31,    32,    20,    21,    22,
      23,    24,    25,    -1,    40,    -1,    42,    30,    31,    32,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    42,
      30,    31,    32,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    42,    30,    31,    32,    20,    21,    22,    23,
      24,    25,    39,    -1,    -1,    -1,    30,    31,    32,    20,
      21,    22,    23,    24,    25,    39,    -1,    -1,    -1,    30,
      31,    32,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32
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
       1,    39,    64,    79,     1,    64,    44,    54,    39,    39,
      39,    30,    31,    32,    20,    21,    22,    23,    24,    25,
      76,    80,     9,    81,    34,    41,    75,    79,    42,     1,
      64,    65,    79,     1,    79,     1,    68,    69,     1,    66,
      79,     1,    68,     1,    68,     1,    10,    64,    77,     1,
      64,    77,     1,    79,    39,    39,    42,    42,    66,    79,
       1,    70,    71,    72,    73,    74,    64,     1,    42,    64,
      78,    42,    42,    39,    30,    30,    42,    42,    42,    42,
      42,    42,    42,    42,    42,    42,    42,    42,    42,    42,
      42,    42,    42,    40,    42,    40,    42,     1,    53,    55,
      59,    60,    64,     1,    66,     1,    66,    79,    39,    39,
      39,    39,    39,    39,    39,    39,     1,     1,    78,     4,
      39,    42,    42,    42,    42,    42,    60,    65,    60,     1,
      60,    60,    60,    42,    53,    13,    14,    15,    16,     5,
       5,     5,    39,     5,     5,     5,     6,     7,    12,    26,
      28,    29,    33,    41,    66,    68,    69,    70,    71,    72,
      73,    74,    75,    79,    80,    82,     8,     5,     5,     5,
       6,     7,    12,    33,    41,    70,    71,    72,    73,    74,
      75,    79,    80,    82,     5,    41,     5,    26,    28,    29,
       5,     6,     7,    12,    26,    28,    29,    33,    41,    66,
      68,    69,    70,    71,    72,    73,    74,    75,    79,    80,
      82,    39,    40,    41,    30,    31,    41,     1,    17,    18,
      19,    35,    36,    37,    38,    43,    49,    56,    57,    58,
      61,    62,    63,    64,    65,    67,    83,    43,    53,    55,
      79,    41,    41,    41,     5,    75,    79,     1,    64,    31,
      32,    76,    80,    81,    41,    75,     5,    75,    79,     1,
      64,    32,    76,    80,    81,    41,    75,    42,    41,    41,
      41,    41,    41,    41,     5,    75,    79,     1,    64,    30,
      31,    32,    76,    80,    81,    41,    75,    50,    42,     5,
      26,    28,    29,    66,    79,     1,    70,    42,    39,    41,
      41,    41,    41,    41,    41,     1,    39,    64,    54,    39,
      39,    39,    79,    54,    34,     1,    68,     1,    68,     1,
      68,    42,    42,     1,    70,    71,    72,    73,    74,     1,
      42,    78,    42,    42,    71,    72,    73,    74,     1,    42,
      78,     1,    68,     1,    68,     1,    68,     1,    68,     1,
      68,     1,    68,    42,    42,     5,    26,    28,    29,    66,
      79,     1,    70,    71,    72,    73,    74,     1,    42,    78,
      39,    41,    41,    41,     1,    64,    65,     1,    79,     1,
      64,    77,     1,    64,    77,     1,    79,    39,    39,    44,
      39,    40,    44,    64,    42,    42,    42,    42,    42,    42,
      42,    42,    42,    42,    42,    42,    42,    42,    42,    42,
      42,    42,    42,    42,    42,    42,    41,    41,    41,    42,
      42,     1,    68,     1,    68,     1,    68,    42,    42,    39,
      30,    30,    42,    42,    42,    42,    42,    42,    42,    42,
      50,     1,    68,     1,    68,     1,    68,    42,    42,    42,
      42,    42,    42,     1,    59,    60,    64,     1,    66,     1,
      66,    79,    39,    39,    39,    39,    39,    39,    39,    39,
      39,    42,    42,    42,    42,    42,    42,     4,    39,    42,
      42,    42,    42,    42,    60,    65,    60,     1,    60,    60,
      60,    42,    53
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    47,    48,    48,    49,    49,
      49,    50,    50,    51,    51,    51,    51,    52,    52,    52,
      53,    54,    54,    55,    55,    55,    55,    55,    55,    55,
      55,    56,    56,    56,    56,    56,    56,    56,    56,    57,
      58,    58,    59,    59,    60,    60,    61,    61,    61,    62,
      62,    62,    62,    62,    62,    63,    64,    64,    65,    66,
      66,    66,    66,    66,    66,    67,    67,    67,    68,    68,
      69,    69,    69,    70,    70,    71,    71,    72,    72,    73,
      73,    74,    74,    74,    74,    74,    74,    74,    75,    75,
      75,    75,    76,    76,    76,    76,    76,    76,    77,    78,
      78,    78,    79,    80,    81,    82,    82,    82,    83,    83,
      83,    83
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     5,
       2,     2,     1,     6,     6,     6,     6,     4,     2,     0,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     5,     5,     5,     5,     5,     5,     5,     5,     9,
       5,     5,     1,     3,     1,     1,     2,     3,     3,     7,
       7,     2,     7,     7,     7,     2,     1,     1,     3,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     3,     3,
       3,     1,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     1,     2,     2,     4,     3,     4,     3,     1,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
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
#line 90 "sintatic/sintatic.y"
                         {
            (yyval.typeNode) = buildNode("program");
            (yyval.typeNode)->childNode = (yyvsp[0].typeNode);
            origin = (yyval.typeNode);
        }
#line 3161 "sintatic.tab.c"
    break;

  case 3: /* list_declaration: list_declaration main_declaration  */
#line 98 "sintatic/sintatic.y"
                                          {
            (yyvsp[-1].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3169 "sintatic.tab.c"
    break;

  case 5: /* list_declaration: error  */
#line 102 "sintatic/sintatic.y"
                 { (yyval.typeNode) = buildNode("error program"); }
#line 3175 "sintatic.tab.c"
    break;

  case 8: /* var_declaration: tipos var SEMICOLON  */
#line 111 "sintatic/sintatic.y"
                            {
            (yyval.typeNode) = buildNode("var_declaration");
            (yyval.typeNode)->childNode = (yyvsp[-2].typeNode); 
            (yyvsp[-2].typeNode)->brotherNode = (yyvsp[-1].typeNode);  
         
            //char *id, char *typ
            insertItem(&table, (yyvsp[-2].typeNode)->value, (yyvsp[-1].typeNode)->value);
        }
#line 3188 "sintatic.tab.c"
    break;

  case 9: /* var_declaration: tipos var COMMA many_declaration SEMICOLON  */
#line 119 "sintatic/sintatic.y"
                                                     {
            (yyval.typeNode) = buildNode("var_declaration");
            (yyval.typeNode)->childNode = (yyvsp[-4].typeNode); 
            (yyvsp[-4].typeNode)->brotherNode = (yyvsp[-3].typeNode);  
            (yyvsp[-3].typeNode)->brotherNode = (yyvsp[-1].typeNode); 
         
            //char *id, char *typ
            insertItem(&table, (yyvsp[-4].typeNode)->value, (yyvsp[-3].typeNode)->value);
            insertItem(&table, (yyvsp[-4].typeNode)->value, (yyvsp[-1].typeNode)->value);
        }
#line 3203 "sintatic.tab.c"
    break;

  case 10: /* var_declaration: error SEMICOLON  */
#line 129 "sintatic/sintatic.y"
                          { (yyval.typeNode) = buildNode("SINTATIC ERR");}
#line 3209 "sintatic.tab.c"
    break;

  case 13: /* func_declaration: tipos var OPEN_PAREN list_args CLS_PAREN blockStmt  */
#line 138 "sintatic/sintatic.y"
                                                           {
            (yyval.typeNode) = buildNode("func_declaration");   
            (yyval.typeNode)->childNode = (yyvsp[-5].typeNode);
            (yyvsp[-5].typeNode)->brotherNode = (yyvsp[-4].typeNode);
            (yyvsp[-4].typeNode)->brotherNode = (yyvsp[-2].typeNode);
            (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);

            insertItem(&table, "FUNCTION", (yyvsp[-4].typeNode)->value);
        }
#line 3223 "sintatic.tab.c"
    break;

  case 14: /* func_declaration: tipos MAIN OPEN_PAREN list_args CLS_PAREN blockStmt  */
#line 147 "sintatic/sintatic.y"
                                                                           {
            (yyval.typeNode) = buildNode("func_declaration_main");   
            (yyval.typeNode)->childNode = (yyvsp[-5].typeNode);
            (yyvsp[-5].typeNode)->brotherNode = (yyvsp[-2].typeNode);
            (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);

            insertItem(&table, "FUNCTION", "main");
        }
#line 3236 "sintatic.tab.c"
    break;

  case 15: /* func_declaration: tipos var OPEN_PAREN error CLS_PAREN blockStmt  */
#line 155 "sintatic/sintatic.y"
                                                         {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3244 "sintatic.tab.c"
    break;

  case 16: /* func_declaration: tipos MAIN OPEN_PAREN error CLS_PAREN blockStmt  */
#line 158 "sintatic/sintatic.y"
                                                                 {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3252 "sintatic.tab.c"
    break;

  case 17: /* list_args: tipos var COMMA list_args  */
#line 165 "sintatic/sintatic.y"
                                  {
                (yyval.typeNode) = buildNode("list_args");  
                (yyval.typeNode)->childNode = (yyvsp[-3].typeNode);
                (yyvsp[-3].typeNode)->brotherNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);

                insertItem(&table, (yyvsp[-3].typeNode)->value, (yyvsp[-2].typeNode)->value);
        }
#line 3265 "sintatic.tab.c"
    break;

  case 18: /* list_args: tipos var  */
#line 173 "sintatic/sintatic.y"
                    {
                (yyval.typeNode) = buildNode("list_args"); 
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
                (yyvsp[-1].typeNode)->brotherNode = (yyvsp[0].typeNode);

                insertItem(&table, (yyvsp[-1].typeNode)->value, (yyvsp[0].typeNode)->value);
        }
#line 3277 "sintatic.tab.c"
    break;

  case 19: /* list_args: %empty  */
#line 180 "sintatic/sintatic.y"
                 {
                (yyval.typeNode) = buildNode("no_args"); 
        }
#line 3285 "sintatic.tab.c"
    break;

  case 20: /* blockStmt: OP_CUR_BRACKET list_statements CLS_CUR_BRACKET  */
#line 186 "sintatic/sintatic.y"
                                                       {
                (yyval.typeNode) = (yyvsp[-1].typeNode);
        }
#line 3293 "sintatic.tab.c"
    break;

  case 21: /* list_statements: stmt list_statements  */
#line 192 "sintatic/sintatic.y"
                             {
               (yyval.typeNode) = (yyvsp[-1].typeNode);
               (yyvsp[-1].typeNode)->brotherNode = (yyvsp[0].typeNode); 
        }
#line 3302 "sintatic.tab.c"
    break;

  case 31: /* input_output_expr: CMD_WRITE OPEN_PAREN str_expr CLS_PAREN SEMICOLON  */
#line 211 "sintatic/sintatic.y"
                                                          {
                (yyval.typeNode) = buildNode("CMD_WRITE_STR");
        }
#line 3310 "sintatic.tab.c"
    break;

  case 32: /* input_output_expr: CMD_WRITE OPEN_PAREN expr CLS_PAREN SEMICOLON  */
#line 214 "sintatic/sintatic.y"
                                                        {
                (yyval.typeNode) = buildNode("CMD_WRITE_EXPR");
        }
#line 3318 "sintatic.tab.c"
    break;

  case 33: /* input_output_expr: CMD_WRITELN OPEN_PAREN str_expr CLS_PAREN SEMICOLON  */
#line 217 "sintatic/sintatic.y"
                                                              {
                (yyval.typeNode) = buildNode("CMD_WRITELN_STR");
        }
#line 3326 "sintatic.tab.c"
    break;

  case 34: /* input_output_expr: CMD_WRITELN OPEN_PAREN expr CLS_PAREN SEMICOLON  */
#line 220 "sintatic/sintatic.y"
                                                          {
                (yyval.typeNode) = buildNode("CMD_WRITELN_EXPR");
        }
#line 3334 "sintatic.tab.c"
    break;

  case 35: /* input_output_expr: CMD_READ OPEN_PAREN var CLS_PAREN SEMICOLON  */
#line 223 "sintatic/sintatic.y"
                                                      {
                (yyval.typeNode) = buildNode("CMD_READ_VAR");
        }
#line 3342 "sintatic.tab.c"
    break;

  case 36: /* input_output_expr: CMD_WRITE OPEN_PAREN error CLS_PAREN SEMICOLON  */
#line 226 "sintatic/sintatic.y"
                                                         {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3350 "sintatic.tab.c"
    break;

  case 37: /* input_output_expr: CMD_WRITELN OPEN_PAREN error CLS_PAREN SEMICOLON  */
#line 229 "sintatic/sintatic.y"
                                                           {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3358 "sintatic.tab.c"
    break;

  case 38: /* input_output_expr: CMD_READ OPEN_PAREN error CLS_PAREN SEMICOLON  */
#line 232 "sintatic/sintatic.y"
                                                        {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3366 "sintatic.tab.c"
    break;

  case 39: /* iteration_expr: CMD_FOR OPEN_PAREN assign SEMICOLON expr SEMICOLON assign CLS_PAREN blockStmt  */
#line 238 "sintatic/sintatic.y"
                                                                                      {     
             (yyval.typeNode) = buildNode("for");
             (yyval.typeNode)->childNode = (yyvsp[-6].typeNode);
             (yyvsp[-6].typeNode)->brotherNode = (yyvsp[-4].typeNode);
             (yyvsp[-4].typeNode)->brotherNode = (yyvsp[-2].typeNode);
             (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);  
        
        }
#line 3379 "sintatic.tab.c"
    break;

  case 40: /* condition_expr: CMD_IF OPEN_PAREN expr CLS_PAREN block_cond  */
#line 249 "sintatic/sintatic.y"
                                                     {
                (yyval.typeNode) = buildNode("if");
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3389 "sintatic.tab.c"
    break;

  case 41: /* condition_expr: CMD_IF OPEN_PAREN error CLS_PAREN error  */
#line 254 "sintatic/sintatic.y"
                                                  {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3397 "sintatic.tab.c"
    break;

  case 43: /* block_cond: simple_complex_block_stmt CMD_ELSE simple_complex_block_stmt  */
#line 261 "sintatic/sintatic.y"
                                                                       {
                (yyval.typeNode) = buildNode("if_stmt");
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);

                (yyval.typeNode)->brotherNode = buildNode("else");
                (yyval.typeNode)->brotherNode->childNode = (yyvsp[0].typeNode);
        }
#line 3409 "sintatic.tab.c"
    break;

  case 46: /* return_stmt: CMD_RETURN SEMICOLON  */
#line 276 "sintatic/sintatic.y"
                             {
              (yyval.typeNode) = buildNode("return");  
        }
#line 3417 "sintatic.tab.c"
    break;

  case 47: /* return_stmt: CMD_RETURN expr SEMICOLON  */
#line 279 "sintatic/sintatic.y"
                                     {
                (yyval.typeNode) = buildNode("return");  
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3426 "sintatic.tab.c"
    break;

  case 48: /* return_stmt: CMD_RETURN error SEMICOLON  */
#line 283 "sintatic/sintatic.y"
                                     {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3434 "sintatic.tab.c"
    break;

  case 49: /* set_stmt: CMD_FORALL OPEN_PAREN var IN_OP func_expr CLS_PAREN simple_complex_block_stmt  */
#line 289 "sintatic/sintatic.y"
                                                                                      {
                (yyval.typeNode) = buildNode("forall");  
                (yyval.typeNode)->childNode = (yyvsp[-4].typeNode);
                (yyvsp[-4].typeNode)->brotherNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3445 "sintatic.tab.c"
    break;

  case 50: /* set_stmt: CMD_FORALL OPEN_PAREN var IN_OP var CLS_PAREN simple_complex_block_stmt  */
#line 295 "sintatic/sintatic.y"
                                                                                  {
                (yyval.typeNode) = buildNode("forall");  
                (yyval.typeNode)->childNode = (yyvsp[-4].typeNode);
                (yyvsp[-4].typeNode)->brotherNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3456 "sintatic.tab.c"
    break;

  case 52: /* set_stmt: CMD_FORALL OPEN_PAREN error IN_OP error CLS_PAREN simple_complex_block_stmt  */
#line 302 "sintatic/sintatic.y"
                                                                                      {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3464 "sintatic.tab.c"
    break;

  case 53: /* set_stmt: CMD_FORALL OPEN_PAREN error IN_OP func_expr CLS_PAREN error  */
#line 305 "sintatic/sintatic.y"
                                                                      {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3472 "sintatic.tab.c"
    break;

  case 54: /* set_stmt: CMD_FORALL OPEN_PAREN var IN_OP error CLS_PAREN simple_complex_block_stmt  */
#line 308 "sintatic/sintatic.y"
                                                                                    {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3480 "sintatic.tab.c"
    break;

  case 58: /* assign: var ATRIBUTION expr  */
#line 322 "sintatic/sintatic.y"
                            {
              (yyval.typeNode) = buildNode(" = ");
              (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3490 "sintatic.tab.c"
    break;

  case 59: /* func_expr: ADD_FUNC OPEN_PAREN func_in_expr CLS_PAREN  */
#line 330 "sintatic/sintatic.y"
                                                   {
                (yyval.typeNode) = buildNode(" add ");
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3499 "sintatic.tab.c"
    break;

  case 60: /* func_expr: REMOVE_FUNC OPEN_PAREN func_in_expr CLS_PAREN  */
#line 334 "sintatic/sintatic.y"
                                                        {
                (yyval.typeNode) = buildNode(" remove ");
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3508 "sintatic.tab.c"
    break;

  case 61: /* func_expr: EXIST_FUNC OPEN_PAREN func_in_expr CLS_PAREN  */
#line 338 "sintatic/sintatic.y"
                                                       {
                (yyval.typeNode) = buildNode(" exist ");
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3517 "sintatic.tab.c"
    break;

  case 62: /* func_expr: ADD_FUNC OPEN_PAREN error CLS_PAREN  */
#line 342 "sintatic/sintatic.y"
                                              {
             (yyval.typeNode) = buildNode("SINTATIC ERR!");   
        }
#line 3525 "sintatic.tab.c"
    break;

  case 63: /* func_expr: REMOVE_FUNC OPEN_PAREN error CLS_PAREN  */
#line 345 "sintatic/sintatic.y"
                                                 {
             (yyval.typeNode) = buildNode("SINTATIC ERR!");   
        }
#line 3533 "sintatic.tab.c"
    break;

  case 64: /* func_expr: EXIST_FUNC OPEN_PAREN error CLS_PAREN  */
#line 348 "sintatic/sintatic.y"
                                                {
             (yyval.typeNode) = buildNode("SINTATIC ERR!");    
        }
#line 3541 "sintatic.tab.c"
    break;

  case 65: /* is_set_expr: IS_SET_FUNC OPEN_PAREN var CLS_PAREN  */
#line 354 "sintatic/sintatic.y"
                                             {
              (yyval.typeNode) = buildNode(" is_set ");
              (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3550 "sintatic.tab.c"
    break;

  case 66: /* is_set_expr: IS_SET_FUNC OPEN_PAREN func_expr CLS_PAREN  */
#line 358 "sintatic/sintatic.y"
                                                     {
                (yyval.typeNode) = buildNode(" is_set ");
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3559 "sintatic.tab.c"
    break;

  case 67: /* is_set_expr: IS_SET_FUNC OPEN_PAREN error CLS_PAREN  */
#line 362 "sintatic/sintatic.y"
                                                 {
             (yyval.typeNode) = buildNode("SINTATIC ERR!");    
        }
#line 3567 "sintatic.tab.c"
    break;

  case 68: /* func_in_expr: op_or_expr IN_OP var  */
#line 367 "sintatic/sintatic.y"
                             {
                (yyval.typeNode) = buildNode(" IN ");
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3577 "sintatic.tab.c"
    break;

  case 69: /* func_in_expr: op_or_expr IN_OP func_expr  */
#line 372 "sintatic/sintatic.y"
                                     {
                (yyval.typeNode) = buildNode(" IN ");
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3587 "sintatic.tab.c"
    break;

  case 70: /* op_or_expr: op_or_expr OP_OR op_and_expr  */
#line 380 "sintatic/sintatic.y"
                                     {
              (yyval.typeNode) = buildNode("or");
              (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3597 "sintatic.tab.c"
    break;

  case 73: /* op_and_expr: op_and_expr OP_AND logical_expr  */
#line 390 "sintatic/sintatic.y"
                                        {
              (yyval.typeNode) = buildNode("and");
              (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);  
        }
#line 3607 "sintatic.tab.c"
    break;

  case 75: /* logical_expr: logical_expr logical_ops arithmetic_expr  */
#line 399 "sintatic/sintatic.y"
                                                {
             (yyval.typeNode) = (yyvsp[-1].typeNode);
             (yyvsp[-1].typeNode)->childNode = (yyvsp[-2].typeNode); 
             (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode); 
       }
#line 3617 "sintatic.tab.c"
    break;

  case 77: /* arithmetic_expr: arithmetic_expr adds_op mult_expr  */
#line 408 "sintatic/sintatic.y"
                                          {
              (yyval.typeNode) = (yyvsp[-1].typeNode);
              (yyvsp[-1].typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3627 "sintatic.tab.c"
    break;

  case 79: /* mult_expr: mult_expr mult_ops first_term  */
#line 417 "sintatic/sintatic.y"
                                      {
              (yyval.typeNode) = (yyvsp[-1].typeNode);
              (yyvsp[-1].typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3637 "sintatic.tab.c"
    break;

  case 82: /* first_term: OP_NEG term  */
#line 427 "sintatic/sintatic.y"
                      {
              (yyval.typeNode) = buildNode(" ! ");
              (yyval.typeNode)->childNode = (yyvsp[0].typeNode);
        }
#line 3646 "sintatic.tab.c"
    break;

  case 83: /* first_term: adds_op term  */
#line 431 "sintatic/sintatic.y"
                       {
              (yyval.typeNode) = (yyvsp[-1].typeNode);
              (yyvsp[-1].typeNode)->childNode = (yyvsp[0].typeNode);
        }
#line 3655 "sintatic.tab.c"
    break;

  case 84: /* first_term: var OPEN_PAREN list_expr CLS_PAREN  */
#line 435 "sintatic/sintatic.y"
                                             {
                (yyval.typeNode) = (yyvsp[-3].typeNode);
                (yyvsp[-3].typeNode)->brotherNode = (yyvsp[-1].typeNode);
        }
#line 3664 "sintatic.tab.c"
    break;

  case 86: /* first_term: var OPEN_PAREN error CLS_PAREN  */
#line 440 "sintatic/sintatic.y"
                                         {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3672 "sintatic.tab.c"
    break;

  case 87: /* first_term: error OPEN_PAREN CLS_PAREN  */
#line 443 "sintatic/sintatic.y"
                                      {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3680 "sintatic.tab.c"
    break;

  case 90: /* term: OPEN_PAREN expr CLS_PAREN  */
#line 451 "sintatic/sintatic.y"
                                    {
                (yyval.typeNode) = (yyvsp[-1].typeNode);
        }
#line 3688 "sintatic.tab.c"
    break;

  case 91: /* term: OPEN_PAREN error CLS_PAREN  */
#line 454 "sintatic/sintatic.y"
                                      {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3696 "sintatic.tab.c"
    break;

  case 92: /* logical_ops: LT_OP  */
#line 460 "sintatic/sintatic.y"
              {
                (yyval.typeNode) = buildNode("LT_OP");
        }
#line 3704 "sintatic.tab.c"
    break;

  case 93: /* logical_ops: LTE_OP  */
#line 463 "sintatic/sintatic.y"
                  {
                (yyval.typeNode) = buildNode("LTE_OP");
        }
#line 3712 "sintatic.tab.c"
    break;

  case 94: /* logical_ops: GT_OP  */
#line 466 "sintatic/sintatic.y"
                 {
                (yyval.typeNode) = buildNode("GT_OP");
        }
#line 3720 "sintatic.tab.c"
    break;

  case 95: /* logical_ops: GTE_OP  */
#line 469 "sintatic/sintatic.y"
                  {
                (yyval.typeNode) = buildNode("GTE_OP");
        }
#line 3728 "sintatic.tab.c"
    break;

  case 96: /* logical_ops: NEQ_OP  */
#line 472 "sintatic/sintatic.y"
                  {
                (yyval.typeNode) = buildNode("NEQ_OP");
        }
#line 3736 "sintatic.tab.c"
    break;

  case 97: /* logical_ops: EQUAL_OP  */
#line 475 "sintatic/sintatic.y"
                    {
                (yyval.typeNode) = buildNode("EQUAL_OP");
        }
#line 3744 "sintatic.tab.c"
    break;

  case 98: /* str_expr: STRING  */
#line 481 "sintatic/sintatic.y"
               {
            (yyval.typeNode) = buildNode((yyvsp[0].sval));
            free((yyvsp[0].sval));
        }
#line 3753 "sintatic.tab.c"
    break;

  case 101: /* list_expr: error COMMA error  */
#line 490 "sintatic/sintatic.y"
                            {
             (yyval.typeNode) = buildNode("SINTATIC ERR!");   
        }
#line 3761 "sintatic.tab.c"
    break;

  case 102: /* var: ID  */
#line 496 "sintatic/sintatic.y"
         {
            (yyval.typeNode) = buildNode((yyvsp[0].sval));
            free((yyvsp[0].sval));
       }
#line 3770 "sintatic.tab.c"
    break;

  case 103: /* adds_op: ADD_OP  */
#line 503 "sintatic/sintatic.y"
             {
            (yyval.typeNode) = buildNode((yyvsp[0].sval)); 
            free((yyvsp[0].sval)); 
      }
#line 3779 "sintatic.tab.c"
    break;

  case 104: /* mult_ops: MULT_OP  */
#line 510 "sintatic/sintatic.y"
              {
            (yyval.typeNode) = buildNode((yyvsp[0].sval)); 
            free((yyvsp[0].sval));  
      }
#line 3788 "sintatic.tab.c"
    break;

  case 105: /* num_tipos: FLOAT  */
#line 518 "sintatic/sintatic.y"
              {
              (yyval.typeNode) = buildNode((yyvsp[0].sval));
              free((yyvsp[0].sval));
        }
#line 3797 "sintatic.tab.c"
    break;

  case 106: /* num_tipos: INT  */
#line 522 "sintatic/sintatic.y"
              {
              (yyval.typeNode) = buildNode((yyvsp[0].sval));
              free((yyvsp[0].sval));
        }
#line 3806 "sintatic.tab.c"
    break;

  case 107: /* num_tipos: EMPTY  */
#line 526 "sintatic/sintatic.y"
                {
              (yyval.typeNode) = buildNode("EMPTY");
        }
#line 3814 "sintatic.tab.c"
    break;

  case 108: /* tipos: TYPE_INT  */
#line 532 "sintatic/sintatic.y"
                 {
             (yyval.typeNode) = buildNode("TYPE_INT");
        }
#line 3822 "sintatic.tab.c"
    break;

  case 109: /* tipos: TYPE_FLOAT  */
#line 535 "sintatic/sintatic.y"
                     {
              (yyval.typeNode) = buildNode("TYPE_FLOAT");
        }
#line 3830 "sintatic.tab.c"
    break;

  case 110: /* tipos: TYPE_SET  */
#line 538 "sintatic/sintatic.y"
                    {
              (yyval.typeNode) = buildNode("TYPE_SET");
        }
#line 3838 "sintatic.tab.c"
    break;

  case 111: /* tipos: TYPE_ELEM  */
#line 541 "sintatic/sintatic.y"
                    {
             (yyval.typeNode) = buildNode("TYPE_ELEM");
        }
#line 3846 "sintatic.tab.c"
    break;


#line 3850 "sintatic.tab.c"

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

#line 545 "sintatic/sintatic.y"



int yyerror(const char* errormsg) {
  fprintf(stderr, "%s at line:%d, column:%d,\n", errormsg, yylval.token.line, yylval.token.column);
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
