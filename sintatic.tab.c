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
#define YYLAST   7454

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  581

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
       0,    89,    89,    97,   100,   104,   105,   109,   117,   121,
     130,   138,   141,   148,   156,   163,   169,   175,   179,   183,
     184,   185,   186,   187,   188,   189,   190,   194,   197,   200,
     203,   206,   209,   212,   215,   221,   232,   237,   243,   244,
     254,   255,   259,   262,   266,   272,   278,   284,   285,   288,
     291,   296,   300,   301,   305,   313,   317,   321,   325,   328,
     331,   337,   341,   345,   350,   355,   363,   368,   369,   373,
     378,   382,   387,   391,   396,   400,   405,   409,   410,   414,
     418,   422,   423,   426,   432,   433,   434,   437,   443,   446,
     449,   452,   455,   458,   464,   471,   472,   473,   479,   486,
     493,   501,   505,   509,   515,   518,   521,   524
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

#define YYPACT_NINF (-207)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-108)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     624,   -30,    35,    49,    79,    88,    22,   162,   608,   680,
     710,   110,   744,  -207,   796,    93,   -16,   131,    64,   847,
      87,    11,    26,    70,    47,    52,   109,   109,   144,   109,
     109,  5002,   875,   910,   180,   972,   980,   187,   321,  6584,
      25,  6604,    72,    90,   114,   126,   151,   156,   178,    51,
     182,   197,   227,   132,  1151,  1668,   266,  2039,  3530,  3571,
    3612,  3653,  3694,  3735,   241,   279,   286,   289,    97,   382,
     284,  7383,  6944,  6624,  6644,  6664,  6430,    51,  6684,   317,
     305,   319,  1182,   326,     9,   368,   224,   471,   579,  6704,
    6724,   236,   872,    37,   191,  3776,   352,  6484,   213,   353,
    1069,   354,  3817,  3858,  3899,     7,   951,   951,  1361,  1371,
    1724,  1791,  1862,  1922,   951,   951,  5049,   951,  1324,   642,
    6744,   363,  6764,   219,   369,   377,   371,   399,   413,   330,
     -14,   347,   408,   422,   428,   395,   111,   481,   171,   611,
     438,   447,   451,   625,   456,   460,   468,   474,  3940,  3981,
    6784,  6804,   402,   791,   378,   475,  7396,  6964,  6824,  6844,
     510,   315,  6864,   234,   521,   512,  4924,  1324,   205,   258,
     559,   589,   592,   597,   630,   634,   637,   643,   652,   674,
     676,   683,   690,   696,   707,   732,   748,   655,  6884,  1448,
    6904,  4022,  1212,  1539,  4063,  1982,   752,   576,   706,   756,
     762,   766,  4104,  4145,  4186,  4227,  4268,  4309,  4350,  4391,
     776,   734,   784,  4963,   326,  4963,   852,  4963,  4963,  4963,
    4432,   814,  4473,  4514,  4555,  4596,  4637,   821,  4678,   853,
     861,   867,   869,   243,  6457,  4719,  6924,  6509,  5355,   516,
    5880,  5905,   842,   858,   865,   105,  1478,   854,   209,   264,
     357,  7357,  6380,  5930,  5955,  5980,  5380,   105,  6005,  5071,
     864,   860,   882,  6534,  6984,  7002,  7020,   113,  1850,   513,
    7409,  7326,  7038,  7056,  7074,  6559,   113,  7092,   890,   898,
     930,   873,   904,   913,  5305,  5405,  5430,  5455,   921,   937,
     956,   176,  1892,   366,   261,   454,    19,  1237,  6030,  5480,
    5505,  5530,  5330,   176,  5555,  4760,   957,   283,  5086,   966,
     416,   969,   974,   987,   990,   998,  1006,  1093,  5002,  2130,
    2174,  2218,  2259,  2300,  2341,  2382,  1012,  1018,  1039,   317,
    5002,  4801,  4842,  1054,  5095,  5108,  5117,  6055,  6080,  6105,
     709,  1061,  5132,  5132,  5132,  5132,  5132,   735,  6130,  7110,
    7128,  7146,   759,  1064,  5086,  5086,  5086,  5086,   787,  7164,
    6155,  5147,  5156,  5169,  5178,  5193,  5208,  5580,  5605,  5630,
     795,  1075,   389,  5217,  5217,  5217,  5217,  5217,   826,  5655,
    7182,   308,  1079,  1092,  1095,   328,   697,  1102,   701,  5680,
    2423,  2083,   326,   121,   997,  1141,   163,   489,  2464,  1111,
    1080,  2505,  2546,  2587,  1132,  1129,  5040,   798,   723,   801,
     736,   828,   772,  6180,  6205,  1137,   564,  7370,  6405,  6230,
    6255,   935,  6280,  1139,  7200,  7218,  7422,  7344,  7236,  7254,
    1271,  7272,  1149,  1026,   793,  1068,   815,  1144,   891,  1157,
     911,  1210,   940,  1213,  1035,  5705,  5730,   574,  1152,  1168,
    1181,   602,   632,  1195,   522,  1564,  6305,  5755,  5780,  1274,
    5805,  1201,  5230,  5239,  5254,  1255,  1224,  1231,  1248,  1252,
    1259,  1246,  1277,  1267,  1280,  1286,  1295,  1300,  2628,  2669,
    2710,  2751,  4883,  1304,  1307,  1309,  1314,  1318,  1321,  1322,
    6330,  6355,  7290,  7308,   988,  1019,  1056,  1098,  1100,  1250,
     526,   532,   541,   550,   575,   617,  5269,  5278,  5291,  5830,
    5855,  1276,  1060,  1285,  1066,  1292,  1081,  1297,  4924,  1324,
     244,   270,  1332,  1335,  1341,  1342,  1343,  1345,  1346,  1347,
    1298,  1083,  1313,  1085,  1317,  1124,  1134,  1165,  1170,  1172,
    1202,  1204,  2792,  2833,  2874,  1351,  1357,  1359,  1363,  1364,
    1368,  2915,  2956,  2997,  3038,  3079,  3120,  3161,  3202,   672,
     739,   742,   855,   862,   982,  4924,   326,  4924,  1402,  4924,
    4924,  4924,  3243,  1378,  3284,  3325,  3366,  3407,  3448,  1370,
    3489
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
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -207,  -207,  -207,  1414,     8,  -207,   -15,    -3,   -51,   -28,
    -125,  -118,  -111,   905,   -70,  -104,   -96,   -50,    32,   -79,
     235,   -36,  1579,  1735,  1443,  1380,  1256,  1053,   929,   343,
    -206,   -90,  -178,   -10,   573,  -201,   698,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,    55,    10,    22,   192,    56,   193,
      58,    59,    60,   194,   195,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
     114,   142,   164,   275,    77,   117,    78,    79
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,    17,   145,    57,   125,    25,   101,    11,     9,    12,
     127,   212,   280,    28,   262,     9,   -68,   -68,    23,    80,
      23,    76,    13,    32,    33,    18,    35,    36,   171,    57,
     -99,   -99,   -99,   281,    23,   282,   283,   -99,   146,    90,
    -104,   320,   278,    97,   256,   344,  -104,    76,   321,   -67,
     -67,   374,   346,    26,  -105,   322,   236,    38,    39,   -67,
    -105,   -67,   323,    41,   355,    21,   -99,    90,    27,   121,
     324,   357,   256,   126,   128,   233,   134,   229,   230,   231,
     232,   256,   256,   147,  -107,    96,    99,   327,    24,    29,
    -107,   375,    54,  -106,    30,   153,    97,    97,   377,  -106,
     229,   230,   231,   232,    97,    97,   -15,    97,    97,   302,
     337,   239,   240,    82,   124,    15,   325,   241,   349,   264,
     265,    16,   468,   141,   144,   266,   262,   -68,   -68,   -15,
     328,    83,   -98,    94,   -98,   221,   -68,   237,    38,    39,
      40,   -68,   -68,   220,    41,   222,   246,   224,   225,   226,
     160,   163,    31,   176,   268,    84,    76,    97,    45,   201,
      47,    48,    -2,     1,   476,    49,   329,    85,   278,   423,
      19,    95,    20,    54,   319,     2,     3,     4,     5,   302,
     432,   367,   285,   286,    34,   332,   -14,   332,   287,   332,
     332,   332,    86,   229,   230,   231,   232,    87,   326,   196,
     461,   -68,   -68,    76,   333,    76,   197,    76,    76,    76,
     331,   344,   331,   178,   331,   331,   331,   292,   346,    88,
     355,   163,   -15,    91,   228,   132,   235,   357,    81,   278,
     148,   242,    81,   243,   244,   339,   256,   139,    92,   -68,
     -68,   238,   239,   240,    40,   546,   140,   339,   241,   375,
     242,   -68,   243,   244,   279,   150,   377,   351,   256,   199,
     279,   165,   242,   278,   243,   244,   351,   400,    93,   245,
     242,   548,   243,   244,   189,   278,   -96,   246,   341,   405,
     102,   369,   256,   -98,   242,   -98,   243,   244,   381,   247,
      57,   -68,   -68,   369,   307,   342,   242,   386,   243,   244,
     353,   -68,    57,   -68,   472,   475,   -52,    97,    76,   382,
     100,   383,   384,   467,   -67,   -67,   107,   247,   103,   404,
      76,   133,   260,   -67,   371,   -53,   247,   247,   104,  -102,
    -102,   261,   256,   256,   256,   256,   256,   302,   -98,   -98,
     152,  -102,  -102,  -102,  -102,  -102,  -102,   -13,   302,   399,
     -98,  -102,  -102,  -102,   293,   187,   309,   188,   -65,   -65,
    -102,   122,   452,   302,   302,   302,   302,   302,   302,   129,
     -65,   306,   170,   263,   264,   265,    40,   307,   308,   163,
     266,   256,   126,   469,   256,   256,   477,   -67,   -67,   343,
     163,   149,    89,   320,   447,   151,   256,   255,   -17,   -67,
     321,   267,   305,   198,   200,   118,   -53,   322,   -53,   268,
     163,   166,   105,   106,   323,   448,   167,   449,   450,    81,
     120,   -52,   324,   466,   293,   255,   471,   474,   274,   168,
     274,   274,   -65,   -65,   255,   255,   306,   175,   483,   327,
     320,   -65,   320,   169,   320,   320,   320,   321,   544,   321,
     172,   321,   321,   321,   322,   390,   322,    81,   322,   322,
     322,   323,   301,   323,   173,   323,   323,   323,   325,   324,
     174,   324,   135,   324,   324,   324,   263,   264,   265,    40,
     -94,   247,   328,   266,   372,   373,   327,   573,   327,   180,
     327,   327,   327,   181,   -52,   572,   -52,   574,   183,   576,
     577,   578,   184,   247,   267,   -66,   -66,   107,    76,    97,
     185,   550,   268,   191,   -66,   325,   186,   325,   329,   325,
     325,   325,   306,   177,  -102,  -102,   319,   247,   478,   328,
      81,   328,   301,   328,   328,   328,  -102,  -102,  -102,  -102,
    -102,  -102,   385,   -67,   -67,   354,  -102,  -102,  -102,   -54,
     326,   545,   -66,   -66,   374,    76,   333,    76,  -102,    76,
      76,    76,   -66,   190,   -66,   329,   -58,   329,   -58,   329,
     329,   329,   -55,   319,   -55,   319,   580,   319,   319,   319,
     137,   -59,   293,   -59,   263,   264,   265,    40,   338,   255,
     -56,   266,   -56,   293,   -66,   -66,   343,   326,   -58,   326,
     348,   326,   326,   326,   -98,   -98,   -66,   451,    -4,    -4,
     350,   255,   267,   293,   -98,   -60,   -98,   -60,   215,   359,
     268,    -4,    -4,    -4,    -4,     1,   247,   257,   -55,   247,
     247,   -63,   -65,   -65,   368,   255,   -62,     2,     3,     4,
       5,   247,   -65,   161,   -65,   115,   379,   284,   285,   286,
      40,   274,   279,   179,   287,   257,   210,   -57,   276,   -57,
     276,   276,   -64,   -64,   257,   257,   279,   182,   288,   -61,
     289,   290,   -64,   -59,   -64,   291,   -56,   274,   274,   274,
      -6,    -6,   -60,   292,   162,   255,   255,   255,   255,   255,
     301,   -57,   303,    -6,    -6,    -6,    -6,   274,   274,   274,
     274,   301,   -58,   -58,   274,   274,   274,   274,   274,   274,
      -5,    -5,   -58,   202,   -58,   203,   301,   301,   301,   301,
     301,   301,   204,    -5,    -5,    -5,    -5,   -64,   -64,   205,
     115,   -66,   -66,   354,   255,   206,   421,   255,   255,   -64,
     284,   285,   286,    40,    -8,    -8,   207,   287,   216,   255,
     279,   413,   258,   -68,   -68,   547,   549,    -8,    -8,    -8,
      -8,   288,   303,   289,   290,   485,   -68,   -68,   291,   -55,
     -55,   208,   -59,   -59,   187,   309,   292,   422,   487,   -55,
     258,   -55,   -59,   277,   -59,   277,   277,   209,   430,   258,
     258,   214,   284,   285,   286,    40,    -3,    -3,   217,   287,
     279,   424,   -68,   -68,   218,   274,   274,   274,   219,    -3,
      -3,    -3,    -3,   288,   489,   289,   290,   304,   -97,   257,
     291,   -64,   -64,   -68,   -68,   345,   -95,   459,   292,   431,
     -64,   284,   285,   286,    40,   495,   279,   445,   287,   306,
     484,   257,   306,   486,   356,   -68,   -68,    -7,    -7,   274,
     274,   274,   288,   223,   289,   290,   227,   497,  -104,   291,
      -7,    -7,    -7,    -7,   330,   257,  -105,   292,   460,   306,
     488,   376,  -107,   143,  -106,   -12,   -12,   238,   239,   240,
      40,   276,   140,   334,   241,   -56,   -56,   304,   -12,   -12,
     -12,   -12,   -60,   -60,   -98,   -56,   -53,   -56,   242,   335,
     243,   244,   -60,   -98,   -60,   245,   336,   276,   276,   276,
     -10,   -10,   -98,   246,   361,   257,   257,   257,   257,   257,
     303,   -68,   -68,   -10,   -10,   -10,   -10,   276,   276,   276,
     276,   303,   -98,   499,   276,   276,   276,   276,   276,   276,
     360,   -68,   -68,   258,   258,   362,   303,   303,   303,   303,
     303,   303,   154,   501,   363,   258,   237,    38,    39,    40,
     -98,   -98,   364,    41,   257,   277,   258,   257,   257,   -98,
     -68,   -68,   -11,   -11,   277,   187,   309,   490,   365,   257,
      -9,    -9,   503,   254,    49,   -11,   -11,   -11,   -11,   304,
     258,   345,    54,    -9,    -9,    -9,    -9,   366,   470,   380,
     356,   304,   238,   239,   240,    40,   277,   140,   389,   241,
     391,   254,   -57,   -57,   273,   392,   273,   273,   -58,   -58,
     254,   254,   -57,   242,   -57,   243,   244,   -58,   393,   376,
     245,   394,   277,   277,   277,   276,   276,   276,   246,   395,
     258,   258,   258,   258,   258,   304,   159,   396,   300,   -55,
     -55,   401,   277,   277,   277,   277,   304,   402,   -55,   277,
     277,   277,   277,   277,   277,   -68,   -68,   306,   494,   -16,
     -16,   304,   304,   304,   304,   304,   304,   505,   403,   276,
     276,   276,   -16,   -16,   -16,   -16,   -59,   -59,   406,   258,
     -68,   -68,   258,   258,   397,   -59,   -68,   -68,   237,    38,
      39,    40,   537,   414,   258,    41,   425,   253,   539,   306,
     496,   -68,   -68,   -68,   -68,   -68,   -68,   446,   300,    45,
     462,    47,    48,   541,   480,   560,    49,   562,   -56,   -56,
     -60,   -60,   398,   463,    54,   253,   464,   -56,   272,   -60,
     272,   272,   473,   306,   253,   253,   238,   239,   240,    40,
     479,   140,    98,   241,   -68,   -68,   238,   239,   240,    40,
     277,   277,   277,   241,   -58,   -58,   564,   242,   158,   243,
     244,   481,   299,   482,   245,   254,   -58,   242,   279,   243,
     244,   491,   246,   123,   245,   306,   498,   238,   239,   240,
      40,   493,   246,   506,   241,   -55,   -55,   254,   306,   500,
     -59,   -59,   -56,   -56,   277,   277,   277,   -55,   242,   507,
     243,   244,   -59,   -41,   -56,   245,   -41,   -41,   -41,   -41,
     -41,   254,   508,   246,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -60,   -60,   -57,   -57,   309,   273,   -41,   -41,
     -41,   -41,   299,   510,   -60,   -41,   -57,   -41,   -41,   -41,
     -41,   306,   502,   -41,   306,   504,   -41,   108,   109,   110,
     111,   112,   113,   273,   273,   273,   518,   -70,   -70,   -70,
     519,   254,   254,   254,   254,   420,   300,   -70,   520,   -70,
     -57,   -57,   521,   273,   273,   273,   429,   300,   523,   -57,
     273,   273,   273,   273,   273,   273,   279,   517,   542,   253,
     279,   522,   300,   300,   300,   300,   458,   300,   279,   525,
     252,   187,   309,   492,   187,   309,   509,   306,   536,   524,
     254,   253,   526,   254,   254,   154,   306,   538,   527,   237,
      38,    39,    40,   306,   540,   254,    41,   528,   252,   306,
     559,   271,   529,   271,   271,   253,   -54,   252,   252,   -58,
      45,   -55,    47,    48,   306,   561,   -59,    49,   306,   563,
     -56,   272,   -90,   -60,   -57,    54,   -90,   -90,   -90,   -90,
     157,   551,   -88,   -90,   552,   298,   -88,   -88,   -88,   -88,
     553,   554,   555,   -88,   556,   557,   558,   272,   272,   272,
     566,   273,   273,   273,   -90,   253,   253,   253,   419,   567,
     299,   568,   -90,   575,   -88,   569,   570,   272,   272,   428,
     571,   299,   -88,   318,   272,   272,   272,   272,   272,   272,
     579,    14,     0,   543,     0,     0,   299,   299,   299,   457,
       0,   299,     0,     0,   251,   273,   273,   273,     0,     0,
       0,     0,     0,     0,   253,   298,     0,   253,   253,   211,
       0,     0,     0,   284,   285,   286,    40,     0,     0,   253,
     287,     0,   251,     0,     0,   270,     0,   270,   270,     0,
       0,   251,   251,     0,   288,     0,   289,   290,     0,   340,
       0,   291,     0,   238,   239,   240,    40,   156,     0,   292,
     241,     0,     0,     0,     0,     0,     0,   250,     0,   297,
       0,     0,   252,     0,   242,     0,   243,   244,     0,     0,
       0,   245,     0,     0,     0,   272,   272,   272,     0,   246,
       0,     0,     0,     0,   252,   250,     0,     0,   269,     0,
     269,   269,     0,     0,   250,   250,     0,     0,     0,     0,
     -40,     0,     0,   -40,   -40,   -40,   -40,   -40,   252,   155,
       0,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   272,
     272,   272,   296,     0,   271,   -40,   -40,   -40,   -40,   297,
       0,     0,   -40,     0,   -40,   -40,   -40,   -40,     0,     0,
     -40,     0,     0,   -40,   108,   109,   110,   111,   112,   113,
     271,   271,   271,     0,   -69,   -69,   -69,     0,   252,   252,
     418,     0,     0,   298,   -69,     0,   -69,     0,     0,     0,
     271,   427,     0,     0,   298,     0,     0,   271,   271,   271,
     271,   271,   271,     0,     0,     0,   251,     0,     0,   298,
     298,   456,   296,   248,   298,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   252,   251,     0,
     252,   252,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   248,   252,     0,   130,     0,   136,   138,     0,   -25,
     248,   248,   251,   -25,   -25,   -25,   -25,     0,     0,     0,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   270,   250,
       0,     0,     0,     0,   -25,   -25,   -25,   -25,   294,     0,
       0,   -25,     0,   -25,   -25,   -25,   -25,     0,     0,   -25,
       0,   250,   -25,     0,   270,   270,   270,     0,   271,   271,
     271,     0,   251,   417,     0,   -89,     0,   297,     0,   -89,
     -89,   -89,   -89,     0,   426,   250,   -89,     0,   297,     0,
       0,   270,   270,   270,   270,   270,   270,     0,     0,     0,
       0,   388,     0,   297,   455,     0,     0,   -89,   297,     0,
       0,     0,   271,   271,   271,   -89,     0,     0,   294,     0,
       0,   251,     0,     0,   251,   251,     0,   269,   269,   269,
       0,     0,     0,     0,     0,   416,   251,     0,     0,   249,
     296,     0,   -91,     0,     0,     0,   -91,   -91,   -91,   -91,
       0,   296,     0,   -91,   269,   269,   269,   269,   269,   269,
       0,     0,     0,     0,     0,     0,   454,   249,     0,     0,
     131,   296,   131,   131,   -91,   248,   249,   249,     0,     0,
       0,     0,   -91,     0,   250,     0,     0,   250,   250,     0,
       0,     0,   270,   270,   270,     0,     0,   248,     0,   250,
       0,   352,     0,     0,   295,   238,   239,   240,    40,     0,
       0,     0,   241,   -92,     0,     0,     0,   -92,   -92,   -92,
     -92,   248,     0,     0,   -92,     0,   242,     0,   243,   244,
       0,     0,     0,   245,     0,     0,   270,   270,   270,     0,
       0,   246,     0,   370,     0,   -92,     0,   238,   239,   240,
      40,     0,     0,   -92,   241,   269,   269,   269,     0,     0,
       0,     0,     0,   408,   410,   412,     0,     0,   242,     0,
     243,   244,     0,   -93,   295,   245,   294,   -93,   -93,   -93,
     -93,     0,     0,   246,   -93,     0,     0,   294,     0,     0,
     434,   436,   438,   440,   442,   444,     0,     0,     0,   269,
     269,   269,     0,     0,     0,   -93,     0,   294,     0,     0,
       0,     0,     0,   -93,     0,     0,     0,     0,     0,     0,
     248,     0,     0,   248,   248,     0,     0,     0,     0,     0,
       0,   249,     0,   -38,     0,   248,   213,   -38,   -38,   -38,
     -38,     0,     0,     0,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,     0,   249,     0,     0,     0,     0,   -38,   -38,
     -38,   -38,     0,     0,     0,   -38,     0,   -38,   -38,   -38,
     -38,     0,     0,   -38,     0,     0,   -38,   249,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      37,   512,   514,   516,   234,    38,    39,    40,     0,     0,
       0,    41,   229,   230,   231,   232,    42,    43,    44,     0,
       0,     0,     0,     0,     0,    45,    46,    47,    48,   131,
     131,   131,    49,     0,    50,    51,    52,    53,     0,     0,
      54,     0,   295,   -18,   465,   531,   533,   535,   238,   239,
     240,    40,     0,   295,     0,   241,   131,   131,   131,   131,
     131,   131,     0,     0,     0,     0,     0,     0,     0,   242,
       0,   243,   244,   295,     0,     0,   245,     0,     0,     0,
       0,     0,     0,     0,   246,     0,   249,     0,     0,   249,
     249,   -25,     0,     0,   -25,   -25,   -25,   -25,   -25,     0,
       0,   249,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
       0,     0,     0,     0,     0,     0,   -25,   -25,   -25,   -25,
       0,     0,     0,   -25,     0,   -25,   -25,   -25,   -25,     0,
       0,   -25,     0,     0,   -25,   -22,     0,     0,   -22,   -22,
     -22,   -22,   -22,     0,     0,     0,   -22,   -22,   -22,   -22,
     -22,   -22,   -22,   -22,     0,     0,     0,   131,   131,   131,
     -22,   -22,   -22,   -22,     0,     0,     0,   -22,     0,   -22,
     -22,   -22,   -22,     0,     0,   -22,     0,     0,   -22,   -19,
       0,     0,   -19,   -19,   -19,   -19,   -19,     0,     0,     0,
     -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,     0,     0,
       0,   131,   131,   131,   -19,   -19,   -19,   -19,     0,     0,
       0,   -19,     0,   -19,   -19,   -19,   -19,     0,     0,   -19,
     -20,     0,   -19,   -20,   -20,   -20,   -20,   -20,     0,     0,
       0,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,     0,
       0,     0,     0,     0,     0,   -20,   -20,   -20,   -20,     0,
       0,     0,   -20,     0,   -20,   -20,   -20,   -20,     0,     0,
     -20,   -21,     0,   -20,   -21,   -21,   -21,   -21,   -21,     0,
       0,     0,   -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,
       0,     0,     0,     0,     0,     0,   -21,   -21,   -21,   -21,
       0,     0,     0,   -21,     0,   -21,   -21,   -21,   -21,     0,
       0,   -21,   -24,     0,   -21,   -24,   -24,   -24,   -24,   -24,
       0,     0,     0,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,     0,     0,     0,     0,     0,     0,   -24,   -24,   -24,
     -24,     0,     0,     0,   -24,     0,   -24,   -24,   -24,   -24,
       0,     0,   -24,   -23,     0,   -24,   -23,   -23,   -23,   -23,
     -23,     0,     0,     0,   -23,   -23,   -23,   -23,   -23,   -23,
     -23,   -23,     0,     0,     0,     0,     0,     0,   -23,   -23,
     -23,   -23,     0,     0,     0,   -23,     0,   -23,   -23,   -23,
     -23,     0,     0,   -23,    -8,     0,   -23,    -8,    -8,    -8,
      -8,    -8,     0,     0,     0,    -8,    -8,    -8,    -8,    -8,
      -8,    -8,    -8,     0,     0,     0,     0,     0,     0,    -8,
      -8,    -8,    -8,     0,     0,     0,    -8,     0,    -8,    -8,
      -8,    -8,     0,     0,    -8,   -42,     0,    -8,   -42,   -42,
     -42,   -42,   -42,     0,     0,     0,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,     0,     0,     0,     0,     0,     0,
     -42,   -42,   -42,   -42,     0,     0,     0,   -42,     0,   -42,
     -42,   -42,   -42,     0,     0,   -42,   -51,     0,   -42,   -51,
     -51,   -51,   -51,   -51,     0,     0,     0,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,     0,     0,     0,     0,     0,
       0,   -51,   -51,   -51,   -51,     0,     0,     0,   -51,     0,
     -51,   -51,   -51,   -51,     0,     0,   -51,   -26,     0,   -51,
     -26,   -26,   -26,   -26,   -26,     0,     0,     0,   -26,   -26,
     -26,   -26,   -26,   -26,   -26,   -26,     0,     0,     0,     0,
       0,     0,   -26,   -26,   -26,   -26,     0,     0,     0,   -26,
       0,   -26,   -26,   -26,   -26,     0,     0,   -26,   -47,     0,
     -26,   -47,   -47,   -47,   -47,   -47,     0,     0,     0,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,     0,     0,
       0,     0,     0,   -47,   -47,   -47,   -47,     0,     0,     0,
     -47,     0,   -47,   -47,   -47,   -47,     0,     0,   -47,   -44,
       0,   -47,   -44,   -44,   -44,   -44,   -44,     0,     0,     0,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,     0,
       0,     0,     0,     0,   -44,   -44,   -44,   -44,     0,     0,
       0,   -44,     0,   -44,   -44,   -44,   -44,     0,     0,   -44,
     -43,     0,   -44,   -43,   -43,   -43,   -43,   -43,     0,     0,
       0,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,
       0,     0,     0,     0,     0,   -43,   -43,   -43,   -43,     0,
       0,     0,   -43,     0,   -43,   -43,   -43,   -43,     0,     0,
     -43,   -16,     0,   -43,   -16,   -16,   -16,   -16,   -16,     0,
       0,     0,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,
       0,     0,     0,     0,     0,     0,   -16,   -16,   -16,   -16,
       0,     0,     0,   -16,     0,   -16,   -16,   -16,   -16,     0,
       0,   -16,    -7,     0,   -16,    -7,    -7,    -7,    -7,    -7,
       0,     0,     0,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,     0,     0,     0,     0,     0,     0,    -7,    -7,    -7,
      -7,     0,     0,     0,    -7,     0,    -7,    -7,    -7,    -7,
       0,     0,    -7,   -37,     0,    -7,   -37,   -37,   -37,   -37,
     -37,     0,     0,     0,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,     0,     0,     0,     0,     0,     0,   -37,   -37,
     -37,   -37,     0,     0,     0,   -37,     0,   -37,   -37,   -37,
     -37,     0,     0,   -37,   -36,     0,   -37,   -36,   -36,   -36,
     -36,   -36,     0,     0,     0,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,     0,     0,     0,     0,     0,     0,   -36,
     -36,   -36,   -36,     0,     0,     0,   -36,     0,   -36,   -36,
     -36,   -36,     0,     0,   -36,   -38,     0,   -36,   565,   -38,
     -38,   -38,   -38,     0,     0,     0,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,     0,     0,     0,     0,     0,     0,
     -38,   -38,   -38,   -38,     0,     0,     0,   -38,     0,   -38,
     -38,   -38,   -38,     0,     0,   -38,   -32,     0,   -38,   -32,
     -32,   -32,   -32,   -32,     0,     0,     0,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,     0,     0,     0,     0,     0,
       0,   -32,   -32,   -32,   -32,     0,     0,     0,   -32,     0,
     -32,   -32,   -32,   -32,     0,     0,   -32,   -28,     0,   -32,
     -28,   -28,   -28,   -28,   -28,     0,     0,     0,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,     0,     0,     0,     0,
       0,     0,   -28,   -28,   -28,   -28,     0,     0,     0,   -28,
       0,   -28,   -28,   -28,   -28,     0,     0,   -28,   -27,     0,
     -28,   -27,   -27,   -27,   -27,   -27,     0,     0,     0,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,     0,     0,     0,
       0,     0,     0,   -27,   -27,   -27,   -27,     0,     0,     0,
     -27,     0,   -27,   -27,   -27,   -27,     0,     0,   -27,   -33,
       0,   -27,   -33,   -33,   -33,   -33,   -33,     0,     0,     0,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,
       0,     0,     0,     0,   -33,   -33,   -33,   -33,     0,     0,
       0,   -33,     0,   -33,   -33,   -33,   -33,     0,     0,   -33,
     -30,     0,   -33,   -30,   -30,   -30,   -30,   -30,     0,     0,
       0,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,
       0,     0,     0,     0,     0,   -30,   -30,   -30,   -30,     0,
       0,     0,   -30,     0,   -30,   -30,   -30,   -30,     0,     0,
     -30,   -29,     0,   -30,   -29,   -29,   -29,   -29,   -29,     0,
       0,     0,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
       0,     0,     0,     0,     0,     0,   -29,   -29,   -29,   -29,
       0,     0,     0,   -29,     0,   -29,   -29,   -29,   -29,     0,
       0,   -29,   -34,     0,   -29,   -34,   -34,   -34,   -34,   -34,
       0,     0,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,     0,     0,     0,     0,     0,     0,   -34,   -34,   -34,
     -34,     0,     0,     0,   -34,     0,   -34,   -34,   -34,   -34,
       0,     0,   -34,   -31,     0,   -34,   -31,   -31,   -31,   -31,
     -31,     0,     0,     0,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,     0,     0,     0,     0,     0,     0,   -31,   -31,
     -31,   -31,     0,     0,     0,   -31,     0,   -31,   -31,   -31,
     -31,     0,     0,   -31,   -39,     0,   -31,   -39,   -39,   -39,
     -39,   -39,     0,     0,     0,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,     0,     0,     0,     0,     0,     0,   -39,
     -39,   -39,   -39,     0,     0,     0,   -39,     0,   -39,   -39,
     -39,   -39,     0,     0,   -39,   -48,     0,   -39,   -48,   -48,
     -48,   -48,   -48,     0,     0,     0,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,     0,     0,     0,     0,     0,     0,
     -48,   -48,   -48,   -48,     0,     0,     0,   -48,     0,   -48,
     -48,   -48,   -48,     0,     0,   -48,   -49,     0,   -48,   -49,
     -49,   -49,   -49,   -49,     0,     0,     0,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,     0,     0,     0,     0,     0,
       0,   -49,   -49,   -49,   -49,     0,     0,     0,   -49,     0,
     -49,   -49,   -49,   -49,     0,     0,   -49,   -50,     0,   -49,
     -50,   -50,   -50,   -50,   -50,     0,     0,     0,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,     0,     0,     0,     0,
       0,     0,   -50,   -50,   -50,   -50,     0,     0,     0,   -50,
       0,   -50,   -50,   -50,   -50,     0,     0,   -50,   -45,     0,
     -50,   -45,   -45,   -45,   -45,   -45,     0,     0,     0,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,     0,     0,     0,
       0,     0,     0,   -45,   -45,   -45,   -45,     0,     0,     0,
     -45,     0,   -45,   -45,   -45,   -45,     0,     0,   -45,   -46,
       0,   -45,   -46,   -46,   -46,   -46,   -46,     0,     0,     0,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,     0,
       0,     0,     0,     0,   -46,   -46,   -46,   -46,     0,     0,
       0,   -46,     0,   -46,   -46,   -46,   -46,     0,     0,   -46,
     -35,     0,   -46,   -35,   -35,   -35,   -35,   -35,     0,     0,
       0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,
       0,     0,     0,     0,     0,   -35,   -35,   -35,   -35,     0,
       0,     0,   -35,     0,   -35,   -35,   -35,   -35,     0,     0,
     -35,   -22,     0,   -35,     0,   -22,   -22,   -22,   -22,     0,
       0,     0,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,
       0,     0,     0,     0,     0,     0,   -22,   -22,   -22,   -22,
       0,     0,     0,   -22,     0,   -22,   -22,   -22,   -22,     0,
       0,   -22,   -19,     0,   -22,     0,   -19,   -19,   -19,   -19,
       0,     0,     0,   -19,   -19,   -19,   -19,   -19,   -19,   -19,
     -19,     0,     0,     0,     0,     0,     0,   -19,   -19,   -19,
     -19,     0,     0,     0,   -19,     0,   -19,   -19,   -19,   -19,
       0,     0,   -19,   -20,     0,   -19,     0,   -20,   -20,   -20,
     -20,     0,     0,     0,   -20,   -20,   -20,   -20,   -20,   -20,
     -20,   -20,     0,     0,     0,     0,     0,     0,   -20,   -20,
     -20,   -20,     0,     0,     0,   -20,     0,   -20,   -20,   -20,
     -20,     0,     0,   -20,   -21,     0,   -20,     0,   -21,   -21,
     -21,   -21,     0,     0,     0,   -21,   -21,   -21,   -21,   -21,
     -21,   -21,   -21,     0,     0,     0,     0,     0,     0,   -21,
     -21,   -21,   -21,     0,     0,     0,   -21,     0,   -21,   -21,
     -21,   -21,     0,     0,   -21,   -24,     0,   -21,     0,   -24,
     -24,   -24,   -24,     0,     0,     0,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,     0,     0,     0,     0,     0,     0,
     -24,   -24,   -24,   -24,     0,     0,     0,   -24,     0,   -24,
     -24,   -24,   -24,     0,     0,   -24,   -23,     0,   -24,     0,
     -23,   -23,   -23,   -23,     0,     0,     0,   -23,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,     0,     0,     0,     0,     0,
       0,   -23,   -23,   -23,   -23,     0,     0,     0,   -23,     0,
     -23,   -23,   -23,   -23,     0,     0,   -23,   -42,     0,   -23,
       0,   -42,   -42,   -42,   -42,     0,     0,     0,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,     0,     0,     0,     0,
       0,     0,   -42,   -42,   -42,   -42,     0,     0,     0,   -42,
       0,   -42,   -42,   -42,   -42,     0,     0,   -42,   -51,     0,
     -42,     0,   -51,   -51,   -51,   -51,     0,     0,     0,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,     0,     0,     0,
       0,     0,     0,   -51,   -51,   -51,   -51,     0,     0,     0,
     -51,     0,   -51,   -51,   -51,   -51,     0,     0,   -51,   -26,
       0,   -51,     0,   -26,   -26,   -26,   -26,     0,     0,     0,
     -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,     0,     0,
       0,     0,     0,     0,   -26,   -26,   -26,   -26,     0,     0,
       0,   -26,     0,   -26,   -26,   -26,   -26,     0,     0,   -26,
     -47,     0,   -26,     0,   -47,   -47,   -47,   -47,     0,     0,
       0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,
       0,     0,     0,     0,     0,   -47,   -47,   -47,   -47,     0,
       0,     0,   -47,     0,   -47,   -47,   -47,   -47,     0,     0,
     -47,   -44,     0,   -47,     0,   -44,   -44,   -44,   -44,     0,
       0,     0,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
       0,     0,     0,     0,     0,     0,   -44,   -44,   -44,   -44,
       0,     0,     0,   -44,     0,   -44,   -44,   -44,   -44,     0,
       0,   -44,   -43,     0,   -44,     0,   -43,   -43,   -43,   -43,
       0,     0,     0,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,     0,     0,     0,     0,     0,     0,   -43,   -43,   -43,
     -43,     0,     0,     0,   -43,     0,   -43,   -43,   -43,   -43,
       0,     0,   -43,   -37,     0,   -43,     0,   -37,   -37,   -37,
     -37,     0,     0,     0,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,     0,     0,     0,     0,     0,     0,   -37,   -37,
     -37,   -37,     0,     0,     0,   -37,     0,   -37,   -37,   -37,
     -37,     0,     0,   -37,   -36,     0,   -37,     0,   -36,   -36,
     -36,   -36,     0,     0,     0,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,     0,     0,     0,     0,     0,     0,   -36,
     -36,   -36,   -36,     0,     0,     0,   -36,     0,   -36,   -36,
     -36,   -36,     0,     0,   -36,   -32,     0,   -36,     0,   -32,
     -32,   -32,   -32,     0,     0,     0,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,     0,     0,     0,     0,     0,     0,
     -32,   -32,   -32,   -32,     0,     0,     0,   -32,     0,   -32,
     -32,   -32,   -32,     0,     0,   -32,   -28,     0,   -32,     0,
     -28,   -28,   -28,   -28,     0,     0,     0,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,     0,     0,     0,     0,     0,
       0,   -28,   -28,   -28,   -28,     0,     0,     0,   -28,     0,
     -28,   -28,   -28,   -28,     0,     0,   -28,   -27,     0,   -28,
       0,   -27,   -27,   -27,   -27,     0,     0,     0,   -27,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,     0,     0,     0,     0,
       0,     0,   -27,   -27,   -27,   -27,     0,     0,     0,   -27,
       0,   -27,   -27,   -27,   -27,     0,     0,   -27,   -33,     0,
     -27,     0,   -33,   -33,   -33,   -33,     0,     0,     0,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,     0,
       0,     0,     0,   -33,   -33,   -33,   -33,     0,     0,     0,
     -33,     0,   -33,   -33,   -33,   -33,     0,     0,   -33,   -30,
       0,   -33,     0,   -30,   -30,   -30,   -30,     0,     0,     0,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,     0,
       0,     0,     0,     0,   -30,   -30,   -30,   -30,     0,     0,
       0,   -30,     0,   -30,   -30,   -30,   -30,     0,     0,   -30,
     -29,     0,   -30,     0,   -29,   -29,   -29,   -29,     0,     0,
       0,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,     0,
       0,     0,     0,     0,     0,   -29,   -29,   -29,   -29,     0,
       0,     0,   -29,     0,   -29,   -29,   -29,   -29,     0,     0,
     -29,   -34,     0,   -29,     0,   -34,   -34,   -34,   -34,     0,
       0,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
       0,     0,     0,     0,     0,     0,   -34,   -34,   -34,   -34,
       0,     0,     0,   -34,     0,   -34,   -34,   -34,   -34,     0,
       0,   -34,   -31,     0,   -34,     0,   -31,   -31,   -31,   -31,
       0,     0,     0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,     0,     0,     0,     0,     0,     0,   -31,   -31,   -31,
     -31,     0,     0,     0,   -31,     0,   -31,   -31,   -31,   -31,
       0,     0,   -31,   -39,     0,   -31,     0,   -39,   -39,   -39,
     -39,     0,     0,     0,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,     0,     0,     0,     0,     0,     0,   -39,   -39,
     -39,   -39,     0,     0,     0,   -39,     0,   -39,   -39,   -39,
     -39,     0,     0,   -39,   -48,     0,   -39,     0,   -48,   -48,
     -48,   -48,     0,     0,     0,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,     0,     0,     0,     0,     0,     0,   -48,
     -48,   -48,   -48,     0,     0,     0,   -48,     0,   -48,   -48,
     -48,   -48,     0,     0,   -48,   -49,     0,   -48,     0,   -49,
     -49,   -49,   -49,     0,     0,     0,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,     0,     0,     0,     0,     0,     0,
     -49,   -49,   -49,   -49,     0,     0,     0,   -49,     0,   -49,
     -49,   -49,   -49,     0,     0,   -49,   -50,     0,   -49,     0,
     -50,   -50,   -50,   -50,     0,     0,     0,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,     0,     0,     0,     0,     0,
       0,   -50,   -50,   -50,   -50,     0,     0,     0,   -50,     0,
     -50,   -50,   -50,   -50,     0,     0,   -50,   -45,     0,   -50,
       0,   -45,   -45,   -45,   -45,     0,     0,     0,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,     0,     0,     0,     0,
       0,     0,   -45,   -45,   -45,   -45,     0,     0,     0,   -45,
       0,   -45,   -45,   -45,   -45,     0,     0,   -45,   -46,     0,
     -45,     0,   -46,   -46,   -46,   -46,     0,     0,     0,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,     0,     0,
       0,     0,     0,   -46,   -46,   -46,   -46,     0,     0,     0,
     -46,     0,   -46,   -46,   -46,   -46,     0,     0,   -46,   -35,
       0,   -46,     0,   -35,   -35,   -35,   -35,     0,     0,     0,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,     0,
       0,     0,     0,     0,   -35,   -35,   -35,   -35,     0,     0,
       0,   -35,     0,   -35,   -35,   -35,   -35,     0,     0,   -35,
      -8,     0,   -35,     0,    -8,    -8,    -8,    -8,     0,     0,
       0,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,     0,
       0,     0,     0,     0,     0,    -8,    -8,    -8,    -8,     0,
       0,     0,    -8,     0,    -8,    -8,    -8,    -8,     0,     0,
      -8,    -7,     0,    -8,     0,    -7,    -7,    -7,    -7,     0,
       0,     0,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
       0,     0,     0,     0,     0,     0,    -7,    -7,    -7,    -7,
       0,     0,     0,    -7,     0,    -7,    -7,    -7,    -7,     0,
       0,    -7,   -41,     0,    -7,     0,   -41,   -41,   -41,   -41,
       0,     0,     0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,     0,     0,     0,     0,     0,     0,   -41,   -41,   -41,
     -41,     0,     0,     0,   -41,     0,   -41,   -41,   -41,   -41,
       0,     0,   -41,   -40,     0,   -41,     0,   -40,   -40,   -40,
     -40,     0,     0,     0,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,     0,     0,     0,     0,     0,     0,   -40,   -40,
     -40,   -40,     0,     0,     0,   -40,     0,   -40,   -40,   -40,
     -40,     0,     0,   -40,   -16,     0,   -40,     0,   -16,   -16,
     -16,   -16,     0,     0,     0,   -16,   -16,   -16,   -16,   -16,
     -16,   -16,   -16,     0,     0,     0,     0,     0,     0,   -16,
     -16,   -16,   -16,     0,     0,     0,   -16,     0,   -16,   -16,
     -16,   -16,     0,     0,   -16,   310,     0,   -16,     0,   234,
      38,    39,    40,     0,     0,     0,    41,   229,   230,   231,
     232,   311,   312,   313,     0,     0,     0,     0,     0,     0,
      45,    46,    47,    48,     0,     0,     0,    49,     0,   314,
     315,   316,   317,     0,    37,    54,     0,   318,   234,    38,
      39,    40,     0,     0,     0,    41,   229,   230,   231,   232,
      42,    43,    44,     0,     0,     0,     0,     0,     0,    45,
      46,    47,    48,     0,     0,     0,    49,     0,    50,    51,
      52,    53,     0,    37,    54,     0,   330,   234,    38,    39,
      40,     0,     0,     0,    41,   229,   230,   231,   232,    42,
      43,    44,     0,     0,     0,     0,     0,     0,    45,    46,
      47,    48,     0,     0,     0,    49,     0,    50,    51,    52,
      53,   415,     0,    54,     0,   238,   239,   240,    40,     0,
    -100,     0,   241,     0,  -100,  -100,  -100,  -100,     0,     0,
       0,  -100,     0,     0,     0,     0,   242,     0,   243,   244,
       0,     0,   -99,   245,     0,     0,   -99,   -99,   -99,   -99,
       0,   246,  -100,   -99,     0,     0,     0,   387,     0,     0,
    -100,   263,   264,   265,    40,     0,   407,     0,   266,     0,
     263,   264,   265,    40,   -99,     0,     0,   266,     0,   409,
       0,     0,   -99,   263,   264,   265,    40,     0,   411,   267,
     266,     0,   263,   264,   265,    40,     0,   268,   267,   266,
       0,     0,     0,   415,     0,     0,   268,   238,   239,   240,
      40,   267,     0,     0,   241,     0,     0,     0,   433,   268,
     267,     0,   263,   264,   265,    40,     0,   435,   268,   266,
       0,   263,   264,   265,    40,   245,     0,     0,   266,     0,
     437,     0,     0,   246,   263,   264,   265,    40,     0,   439,
     267,   266,     0,   263,   264,   265,    40,     0,   268,   267,
     266,     0,     0,     0,   441,     0,     0,   268,   263,   264,
     265,    40,   267,     0,     0,   266,     0,     0,     0,   443,
     268,   267,     0,   263,   264,   265,    40,     0,   453,   268,
     266,     0,   284,   285,   286,    40,   267,     0,     0,   287,
       0,   511,     0,     0,   268,   263,   264,   265,    40,     0,
     513,   267,   266,     0,   263,   264,   265,    40,     0,   268,
     291,   266,     0,     0,     0,   515,     0,     0,   292,   263,
     264,   265,    40,   267,     0,     0,   266,     0,     0,     0,
     530,   268,   267,     0,   263,   264,   265,    40,     0,   532,
     268,   266,     0,   263,   264,   265,    40,   267,     0,     0,
     266,     0,   534,     0,     0,   268,   263,   264,   265,    40,
       0,     0,   267,   266,     0,     0,     0,     0,     0,     0,
     268,   267,     0,   -98,   -98,     0,     0,     0,     0,   268,
       0,     0,     0,     0,   267,   -98,   -98,   -98,   -98,   -98,
     -98,     0,   268,     0,     0,   -98,   -98,   -98,   -84,   -84,
       0,     0,     0,     0,     0,   -98,   -98,   -98,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,     0,
     -84,   -84,   -84,   -98,   -98,     0,     0,     0,     0,     0,
     -84,   378,   -84,     0,     0,   -98,   -98,   -98,   -98,   -98,
     -98,     0,     0,     0,     0,   -98,   -98,   -98,   -84,   -84,
       0,     0,     0,     0,     0,     0,   -98,   -98,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,     0,
     -84,   -84,   -84,  -102,  -102,     0,     0,     0,     0,     0,
       0,   347,   -84,     0,     0,  -102,  -102,  -102,  -102,  -102,
    -102,     0,     0,     0,     0,  -102,  -102,  -102,  -101,  -101,
       0,     0,     0,     0,     0,  -102,     0,  -102,     0,     0,
    -101,  -101,  -101,  -101,  -101,  -101,     0,     0,     0,     0,
    -101,  -101,  -101,  -103,  -103,     0,     0,     0,     0,     0,
    -101,     0,  -101,     0,     0,  -103,  -103,  -103,  -103,  -103,
    -103,     0,     0,     0,     0,  -103,  -103,  -103,   -74,   116,
       0,     0,     0,     0,     0,  -103,     0,  -103,     0,     0,
     -74,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,     0,
     -74,   -74,   -74,   -76,   -76,     0,     0,     0,     0,     0,
     -74,     0,   -74,     0,     0,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,     0,   -76,   -76,   -76,   -77,   -77,
       0,     0,     0,     0,     0,   -76,     0,   -76,     0,     0,
     -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,     0,
     -77,   -77,   -77,   -85,   -85,     0,     0,     0,     0,     0,
     -77,     0,   -77,     0,     0,   -85,   -85,   -85,   -85,   -85,
     -85,     0,     0,     0,     0,   -85,   -85,   -85,   -98,   -98,
       0,     0,     0,     0,     0,   -85,     0,   -85,     0,     0,
     -98,   -98,   -98,   -98,   -98,   -98,     0,     0,     0,     0,
     -98,   -98,   -98,   -78,   -78,     0,     0,     0,     0,     0,
     -98,     0,   -98,     0,     0,   -78,   -78,   -78,   -78,   -78,
     -78,     0,     0,     0,     0,   -78,   -78,   -78,   -84,   -84,
       0,     0,     0,     0,     0,   -78,     0,   -78,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,     0,
     -84,   -84,   -84,   -79,   -79,     0,     0,     0,     0,     0,
     -84,     0,   -84,     0,     0,   -79,   -79,   -79,   -79,   -79,
     -79,     0,     0,     0,     0,   -79,   -79,   -79,   -83,   -83,
       0,     0,     0,     0,     0,   -79,     0,   -79,     0,     0,
     -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,     0,
     -83,   -83,   -83,   -87,   -87,     0,     0,     0,     0,     0,
     -83,     0,   -83,     0,     0,   -87,   -87,   -87,   -87,   -87,
     -87,     0,     0,     0,     0,   -87,   -87,   -87,   -86,   -86,
       0,     0,     0,     0,     0,   -87,     0,   -87,     0,     0,
     -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,     0,
     -86,   -86,   -86,   -73,   116,     0,     0,     0,     0,     0,
     -86,     0,   -86,     0,     0,   -73,   -73,   -73,   -73,   -73,
     -73,     0,     0,     0,     0,   -73,   -73,   -73,   -75,   -75,
       0,     0,     0,     0,     0,   -73,     0,   -73,     0,     0,
     -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,     0,
     -75,   -75,   -75,   -81,   -81,     0,     0,     0,     0,     0,
     -75,     0,   -75,     0,     0,   -81,   -81,   -81,   -81,   -81,
     -81,     0,     0,     0,     0,   -81,   -81,   -81,   -82,   -82,
       0,     0,     0,     0,     0,   -81,     0,   -81,     0,     0,
     -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,
     -82,   -82,   -82,   -80,   -80,     0,     0,     0,     0,     0,
     -82,     0,   -82,     0,     0,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,     0,     0,   -80,   -80,   -80,  -101,  -101,
       0,     0,     0,     0,     0,   -80,     0,   -80,     0,     0,
    -101,  -101,  -101,  -101,  -101,  -101,     0,     0,     0,     0,
    -101,  -101,  -101,  -103,  -103,     0,     0,     0,     0,     0,
       0,     0,  -101,     0,     0,  -103,  -103,  -103,  -103,  -103,
    -103,     0,     0,     0,     0,  -103,  -103,  -103,   -74,   116,
       0,     0,     0,     0,     0,     0,     0,  -103,     0,     0,
     -74,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,     0,
     -74,   -74,   -74,   -76,   -76,     0,     0,     0,     0,     0,
       0,     0,   -74,     0,     0,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,     0,   -76,   -76,   -76,   -77,   -77,
       0,     0,     0,     0,     0,     0,     0,   -76,     0,     0,
     -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,     0,
     -77,   -77,   -77,   -85,   -85,     0,     0,     0,     0,     0,
       0,     0,   -77,     0,     0,   -85,   -85,   -85,   -85,   -85,
     -85,     0,     0,     0,     0,   -85,   -85,   -85,   259,     0,
       0,     0,     0,     0,     0,     0,     0,   -85,     0,     0,
     -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,
     -72,   -72,   -72,   -98,   -98,     0,     0,     0,     0,     0,
     -72,     0,   -72,     0,     0,   -98,   -98,   -98,   -98,   -98,
     -98,     0,     0,     0,     0,   -98,   -98,   -98,   -78,   -78,
       0,     0,     0,     0,     0,     0,     0,   -98,     0,     0,
     -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,     0,
     -78,   -78,   -78,   -84,   -84,     0,     0,     0,     0,     0,
       0,     0,   -78,     0,     0,   -84,   -84,   -84,   -84,   -84,
     -84,     0,     0,     0,     0,   -84,   -84,   -84,   -79,   -79,
       0,     0,     0,     0,     0,     0,     0,   -84,     0,     0,
     -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,     0,
     -79,   -79,   -79,   -83,   -83,     0,     0,     0,     0,     0,
       0,     0,   -79,     0,     0,   -83,   -83,   -83,   -83,   -83,
     -83,     0,     0,     0,     0,   -83,   -83,   -83,   -87,   -87,
       0,     0,     0,     0,     0,     0,     0,   -83,     0,     0,
     -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,     0,
     -87,   -87,   -87,   -86,   -86,     0,     0,     0,     0,     0,
       0,     0,   -87,     0,     0,   -86,   -86,   -86,   -86,   -86,
     -86,     0,     0,     0,     0,   -86,   -86,   -86,   -73,   116,
       0,     0,     0,     0,     0,     0,     0,   -86,     0,     0,
     -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,
     -73,   -73,   -73,   -75,   -75,     0,     0,     0,     0,     0,
       0,     0,   -73,     0,     0,   -75,   -75,   -75,   -75,   -75,
     -75,     0,     0,     0,     0,   -75,   -75,   -75,   -81,   -81,
       0,     0,     0,     0,     0,     0,     0,   -75,     0,     0,
     -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,
     -81,   -81,   -81,   259,     0,     0,     0,     0,     0,     0,
       0,     0,   -81,     0,     0,   -71,   -71,   -71,   -71,   -71,
     -71,     0,     0,     0,     0,   -71,   -71,   -71,   -82,   -82,
       0,     0,     0,     0,     0,   -71,     0,   -71,     0,     0,
     -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,
     -82,   -82,   -82,   -80,   -80,     0,     0,     0,     0,     0,
       0,     0,   -82,     0,     0,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,     0,     0,   -80,   -80,   -80,   259,     0,
       0,     0,     0,     0,     0,     0,     0,   -80,     0,     0,
     -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,
     -72,   -72,   -72,   259,     0,     0,     0,     0,     0,     0,
       0,     0,   -72,     0,     0,   -71,   -71,   -71,   -71,   -71,
     -71,     0,     0,     0,     0,   -71,   -71,   -71,   -84,   -84,
       0,     0,     0,     0,     0,     0,     0,   -71,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,     0,
     -84,   -84,   -84,     0,   118,   -98,   -98,     0,     0,   -84,
       0,   119,     0,     0,     0,     0,     0,   -98,   -98,   -98,
     -98,   -98,   -98,     0,     0,     0,     0,   -98,   -98,   -98,
       0,   -98,   -84,   -84,     0,     0,   -98,     0,   -98,     0,
       0,     0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,
       0,     0,     0,     0,   -84,   -84,   -84,   -98,   -98,     0,
       0,     0,     0,   -84,     0,   119,     0,     0,     0,   -98,
     -98,   -98,   -98,   -98,   -98,     0,     0,     0,     0,   -98,
     -98,   -98,   -98,   -98,     0,     0,     0,     0,   -98,     0,
     -98,     0,     0,     0,   -98,   -98,   -98,   -98,   -98,   -98,
       0,     0,     0,     0,   -98,   -98,   -98,   -84,   -84,     0,
       0,     0,     0,     0,     0,   -98,     0,     0,     0,   -84,
     -84,   -84,   -84,   -84,   -84,     0,     0,     0,     0,   -84,
     -84,   -84,  -101,  -101,     0,     0,     0,     0,     0,     0,
     358,     0,     0,     0,  -101,  -101,  -101,  -101,  -101,  -101,
       0,     0,  -103,  -103,  -101,  -101,  -101,     0,     0,     0,
       0,     0,     0,  -101,  -103,  -103,  -103,  -103,  -103,  -103,
       0,     0,   -74,   116,  -103,  -103,  -103,     0,     0,     0,
       0,     0,     0,  -103,   -74,   -74,   -74,   -74,   -74,   -74,
       0,     0,   -76,   -76,   -74,   -74,   -74,     0,     0,     0,
       0,     0,     0,   -74,   -76,   -76,   -76,   -76,   -76,   -76,
       0,     0,   -77,   -77,   -76,   -76,   -76,     0,     0,     0,
       0,     0,     0,   -76,   -77,   -77,   -77,   -77,   -77,   -77,
       0,     0,   -85,   -85,   -77,   -77,   -77,     0,     0,     0,
       0,     0,     0,   -77,   -85,   -85,   -85,   -85,   -85,   -85,
       0,     0,   -78,   -78,   -85,   -85,   -85,     0,     0,     0,
       0,     0,     0,   -85,   -78,   -78,   -78,   -78,   -78,   -78,
       0,     0,   -84,   -84,   -78,   -78,   -78,     0,     0,     0,
       0,     0,     0,   -78,   -84,   -84,   -84,   -84,   -84,   -84,
       0,     0,   -79,   -79,   -84,   -84,   -84,     0,     0,     0,
       0,     0,     0,   -84,   -79,   -79,   -79,   -79,   -79,   -79,
       0,     0,   -83,   -83,   -79,   -79,   -79,     0,     0,     0,
       0,     0,     0,   -79,   -83,   -83,   -83,   -83,   -83,   -83,
       0,     0,   -87,   -87,   -83,   -83,   -83,     0,     0,     0,
       0,     0,     0,   -83,   -87,   -87,   -87,   -87,   -87,   -87,
       0,     0,   -86,   -86,   -87,   -87,   -87,     0,     0,     0,
       0,     0,     0,   -87,   -86,   -86,   -86,   -86,   -86,   -86,
       0,     0,   -73,   116,   -86,   -86,   -86,     0,     0,     0,
       0,     0,     0,   -86,   -73,   -73,   -73,   -73,   -73,   -73,
       0,     0,   -75,   -75,   -73,   -73,   -73,     0,     0,     0,
       0,     0,     0,   -73,   -75,   -75,   -75,   -75,   -75,   -75,
       0,     0,   -81,   -81,   -75,   -75,   -75,     0,     0,     0,
       0,     0,     0,   -75,   -81,   -81,   -81,   -81,   -81,   -81,
       0,     0,   -82,   -82,   -81,   -81,   -81,     0,     0,     0,
       0,     0,     0,   -81,   -82,   -82,   -82,   -82,   -82,   -82,
       0,     0,   -80,   -80,   -82,   -82,   -82,     0,     0,     0,
       0,     0,     0,   -82,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,   -98,   -98,   -80,   -80,   -80,     0,     0,     0,
       0,     0,     0,   -80,   -98,   -98,   -98,   -98,   -98,   -98,
       0,     0,   259,     0,   -98,   -98,   -98,     0,     0,     0,
       0,     0,     0,   -98,   -72,   -72,   -72,   -72,   -72,   -72,
       0,     0,   259,     0,   -72,   -72,   -72,     0,     0,     0,
       0,     0,     0,   -72,   -71,   -71,   -71,   -71,   -71,   -71,
       0,     0,  -102,  -102,   -71,   -71,   -71,     0,     0,     0,
       0,     0,     0,   -71,  -102,  -102,  -102,  -102,  -102,  -102,
    -101,  -101,     0,     0,  -102,  -102,  -102,     0,     0,     0,
       0,     0,  -101,  -101,  -101,  -101,  -101,  -101,  -103,  -103,
       0,     0,  -101,  -101,  -101,     0,     0,     0,     0,     0,
    -103,  -103,  -103,  -103,  -103,  -103,   -74,   116,     0,     0,
    -103,  -103,  -103,     0,     0,     0,     0,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -76,   -76,     0,     0,   -74,   -74,
     -74,     0,     0,     0,     0,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -77,   -77,     0,     0,   -76,   -76,   -76,     0,
       0,     0,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -85,   -85,     0,     0,   -77,   -77,   -77,     0,     0,     0,
       0,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -98,   -98,
       0,     0,   -85,   -85,   -85,     0,     0,     0,     0,     0,
     -98,   -98,   -98,   -98,   -98,   -98,   -78,   -78,     0,     0,
     -98,   -98,   -98,     0,     0,     0,     0,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -84,   -84,     0,     0,   -78,   -78,
     -78,     0,     0,     0,     0,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -79,   -79,     0,     0,   -84,   -84,   -84,     0,
       0,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -83,   -83,     0,     0,   -79,   -79,   -79,     0,     0,     0,
       0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -87,   -87,
       0,     0,   -83,   -83,   -83,     0,     0,     0,     0,     0,
     -87,   -87,   -87,   -87,   -87,   -87,   -86,   -86,     0,     0,
     -87,   -87,   -87,     0,     0,     0,     0,     0,   -86,   -86,
     -86,   -86,   -86,   -86,   -73,   116,     0,     0,   -86,   -86,
     -86,     0,     0,     0,     0,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -75,   -75,     0,     0,   -73,   -73,   -73,     0,
       0,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -81,   -81,     0,     0,   -75,   -75,   -75,     0,     0,     0,
       0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -82,   -82,
       0,     0,   -81,   -81,   -81,     0,     0,     0,     0,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -80,   -80,     0,     0,
     -82,   -82,   -82,     0,     0,     0,     0,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   259,     0,     0,     0,   -80,   -80,
     -80,     0,     0,     0,     0,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   259,     0,     0,     0,   -72,   -72,   -72,     0,
       0,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,
       0,     0,     0,     0,   -71,   -71,   -71,   108,   109,   110,
     111,   112,   113,     0,     0,     0,     0,   -70,   -70,   -70,
     108,   109,   110,   111,   112,   113,     0,     0,     0,   -70,
     -69,   -69,   -69,   108,   109,   110,   111,   112,   113,     0,
       0,     0,   -69,   -70,   -70,   -70,   108,   109,   110,   111,
     112,   113,   -70,     0,     0,     0,   -69,   -69,   -69,   108,
     109,   110,   111,   112,   113,   -69,     0,     0,     0,   -70,
     -70,   -70,   108,   109,   110,   111,   112,   113,     0,     0,
       0,     0,   -69,   -69,   -69
};

static const yytype_int16 yycheck[] =
{
       0,    11,    92,    31,    83,    20,    57,     7,     0,    39,
       1,   189,     5,    23,     5,     7,    30,    31,    18,    34,
      20,    31,     0,    26,    27,    41,    29,    30,    42,    57,
       5,     6,     7,    26,    34,    28,    29,    12,     1,    49,
       5,   166,     5,    53,    54,   251,    11,    57,   166,    30,
      31,    32,   253,    42,     5,   166,     5,     6,     7,    40,
      11,    42,   166,    12,   270,     1,    41,    77,    42,    79,
     166,   272,    82,    83,    84,     5,    86,    13,    14,    15,
      16,    91,    92,    93,     5,    53,    54,   166,     1,    42,
      11,   297,    41,     5,    42,   105,   106,   107,   299,    11,
      13,    14,    15,    16,   114,   115,    42,   117,   118,   119,
       5,     6,     7,    41,    82,     5,   166,    12,     5,     6,
       7,    11,     1,    91,    92,    12,     5,    30,    31,    42,
     166,    41,    39,     1,    41,   214,    39,     5,     6,     7,
       8,    30,    31,   213,    12,   215,    41,   217,   218,   219,
     118,   119,    43,    42,    41,    41,   166,   167,    26,   169,
      28,    29,     0,     1,     1,    33,   166,    41,     5,   347,
      39,    39,    41,    41,   166,    13,    14,    15,    16,   189,
     358,     5,     6,     7,    40,   213,    42,   215,    12,   217,
     218,   219,    41,    13,    14,    15,    16,    41,   166,   167,
     378,    30,    31,   213,   214,   215,     1,   217,   218,   219,
     213,   417,   215,    42,   217,   218,   219,    41,   419,    41,
     426,   189,    42,    41,   227,     1,    39,   428,    41,     5,
      39,    26,    41,    28,    29,   245,   246,     1,    41,    30,
      31,     5,     6,     7,     8,     1,    10,   257,    12,   455,
      26,    42,    28,    29,    41,    42,   457,   267,   268,     1,
      41,    42,    26,     5,    28,    29,   276,   318,    41,    33,
      26,     1,    28,    29,    40,     5,    42,    41,   246,   330,
      39,   291,   292,    40,    26,    42,    28,    29,     5,    54,
     318,    30,    31,   303,    30,    31,    26,   307,    28,    29,
     268,    40,   330,    42,   394,   395,    42,   317,   318,    26,
      44,    28,    29,   392,    30,    31,    32,    82,    39,   329,
     330,    86,     5,    39,   292,    39,    91,    92,    39,     8,
       9,     5,   342,   343,   344,   345,   346,   347,    30,    31,
     105,    20,    21,    22,    23,    24,    25,    42,   358,   317,
      42,    30,    31,    32,   119,    40,    41,    42,    30,    31,
      39,    42,   372,   373,   374,   375,   376,   377,   378,     1,
      42,    41,    42,     5,     6,     7,     8,    30,    31,   347,
      12,   391,   392,   393,   394,   395,   396,    30,    31,    32,
     358,    39,    49,   518,     5,    42,   406,    54,    44,    42,
     518,    33,    39,   168,   169,    34,    40,   518,    42,    41,
     378,    42,    30,    31,   518,    26,    39,    28,    29,    41,
      77,    39,   518,   391,   189,    82,   394,   395,    85,    30,
      87,    88,    30,    31,    91,    92,    41,    42,   406,   518,
     565,    39,   567,    30,   569,   570,   571,   565,   518,   567,
      42,   569,   570,   571,   565,    39,   567,    41,   569,   570,
     571,   565,   119,   567,    42,   569,   570,   571,   518,   565,
      42,   567,     1,   569,   570,   571,     5,     6,     7,     8,
      42,   246,   518,    12,    30,    31,   565,   566,   567,    42,
     569,   570,   571,    42,    40,   565,    42,   567,    42,   569,
     570,   571,    42,   268,    33,    30,    31,    32,   518,   519,
      42,   521,    41,     1,    39,   565,    42,   567,   518,   569,
     570,   571,    41,    42,     8,     9,   518,   292,    39,   565,
      41,   567,   189,   569,   570,   571,    20,    21,    22,    23,
      24,    25,   307,    30,    31,    32,    30,    31,    32,    39,
     518,   519,    30,    31,    32,   565,   566,   567,    42,   569,
     570,   571,    40,    42,    42,   565,    40,   567,    42,   569,
     570,   571,    40,   565,    42,   567,   579,   569,   570,   571,
       1,    40,   347,    42,     5,     6,     7,     8,   245,   246,
      40,    12,    42,   358,    30,    31,    32,   565,    39,   567,
     257,   569,   570,   571,    30,    31,    42,   372,     0,     1,
     267,   268,    33,   378,    40,    40,    42,    42,    42,   276,
      41,    13,    14,    15,    16,     1,   391,    54,    39,   394,
     395,    39,    30,    31,   291,   292,    39,    13,    14,    15,
      16,   406,    40,     1,    42,    72,   303,     5,     6,     7,
       8,   308,    41,    42,    12,    82,     1,    40,    85,    42,
      87,    88,    30,    31,    91,    92,    41,    42,    26,    39,
      28,    29,    40,    39,    42,    33,    39,   334,   335,   336,
       0,     1,    39,    41,    42,   342,   343,   344,   345,   346,
     347,    39,   119,    13,    14,    15,    16,   354,   355,   356,
     357,   358,    30,    31,   361,   362,   363,   364,   365,   366,
       0,     1,    40,    39,    42,    39,   373,   374,   375,   376,
     377,   378,    39,    13,    14,    15,    16,    30,    31,    39,
     157,    30,    31,    32,   391,    39,     1,   394,   395,    42,
       5,     6,     7,     8,     0,     1,    39,    12,    42,   406,
      41,    42,    54,    30,    31,   520,   521,    13,    14,    15,
      16,    26,   189,    28,    29,    42,    30,    31,    33,    30,
      31,    39,    30,    31,    40,    41,    41,    42,    42,    40,
      82,    42,    40,    85,    42,    87,    88,    39,     1,    91,
      92,    39,     5,     6,     7,     8,     0,     1,    42,    12,
      41,    42,    30,    31,    42,   462,   463,   464,    42,    13,
      14,    15,    16,    26,    42,    28,    29,   119,    42,   246,
      33,    30,    31,    30,    31,   252,    42,     1,    41,    42,
      39,     5,     6,     7,     8,    42,    41,    42,    12,    41,
      42,   268,    41,    42,   271,    30,    31,     0,     1,   506,
     507,   508,    26,     1,    28,    29,    42,    42,     5,    33,
      13,    14,    15,    16,    43,   292,     5,    41,    42,    41,
      42,   298,     5,     1,     5,     0,     1,     5,     6,     7,
       8,   308,    10,    41,    12,    30,    31,   189,    13,    14,
      15,    16,    30,    31,    34,    40,    42,    42,    26,    41,
      28,    29,    40,    39,    42,    33,    41,   334,   335,   336,
       0,     1,    30,    41,    41,   342,   343,   344,   345,   346,
     347,    30,    31,    13,    14,    15,    16,   354,   355,   356,
     357,   358,    42,    42,   361,   362,   363,   364,   365,   366,
      42,    30,    31,   245,   246,    41,   373,   374,   375,   376,
     377,   378,     1,    42,    41,   257,     5,     6,     7,     8,
      30,    31,    41,    12,   391,   267,   268,   394,   395,    39,
      30,    31,     0,     1,   276,    40,    41,    42,    41,   406,
       0,     1,    42,    54,    33,    13,    14,    15,    16,   291,
     292,   418,    41,    13,    14,    15,    16,    41,     1,    42,
     427,   303,     5,     6,     7,     8,   308,    10,    42,    12,
      41,    82,    30,    31,    85,    41,    87,    88,    30,    31,
      91,    92,    40,    26,    42,    28,    29,    39,    41,   456,
      33,    41,   334,   335,   336,   462,   463,   464,    41,    41,
     342,   343,   344,   345,   346,   347,   117,    41,   119,    30,
      31,    39,   354,   355,   356,   357,   358,    39,    39,   361,
     362,   363,   364,   365,   366,    30,    31,    41,    42,     0,
       1,   373,   374,   375,   376,   377,   378,    42,    39,   506,
     507,   508,    13,    14,    15,    16,    30,    31,    34,   391,
      30,    31,   394,   395,     1,    39,    30,    31,     5,     6,
       7,     8,    42,    42,   406,    12,    42,    54,    42,    41,
      42,    30,    31,    30,    31,    30,    31,    42,   189,    26,
      41,    28,    29,    42,    44,    42,    33,    42,    30,    31,
      30,    31,    39,    41,    41,    82,    41,    39,    85,    39,
      87,    88,     1,    41,    91,    92,     5,     6,     7,     8,
      39,    10,     1,    12,    30,    31,     5,     6,     7,     8,
     462,   463,   464,    12,    30,    31,    42,    26,   115,    28,
      29,    39,   119,    44,    33,   246,    42,    26,    41,    28,
      29,    42,    41,     1,    33,    41,    42,     5,     6,     7,
       8,    42,    41,    41,    12,    30,    31,   268,    41,    42,
      30,    31,    30,    31,   506,   507,   508,    42,    26,    41,
      28,    29,    42,     1,    42,    33,     4,     5,     6,     7,
       8,   292,    41,    41,    12,    13,    14,    15,    16,    17,
      18,    19,    30,    31,    30,    31,    41,   308,    26,    27,
      28,    29,   189,    42,    42,    33,    42,    35,    36,    37,
      38,    41,    42,    41,    41,    42,    44,    20,    21,    22,
      23,    24,    25,   334,   335,   336,    42,    30,    31,    32,
      39,   342,   343,   344,   345,   346,   347,    40,    30,    42,
      30,    31,    30,   354,   355,   356,   357,   358,    42,    39,
     361,   362,   363,   364,   365,   366,    41,    42,     1,   246,
      41,    42,   373,   374,   375,   376,   377,   378,    41,    42,
      54,    40,    41,    42,    40,    41,    42,    41,    42,    42,
     391,   268,    42,   394,   395,     1,    41,    42,    42,     5,
       6,     7,     8,    41,    42,   406,    12,    42,    82,    41,
      42,    85,    42,    87,    88,   292,    42,    91,    92,    42,
      26,    42,    28,    29,    41,    42,    42,    33,    41,    42,
      42,   308,     1,    42,    42,    41,     5,     6,     7,     8,
     114,    39,     1,    12,    39,   119,     5,     6,     7,     8,
      39,    39,    39,    12,    39,    39,    39,   334,   335,   336,
      39,   462,   463,   464,    33,   342,   343,   344,   345,    42,
     347,    42,    41,     1,    33,    42,    42,   354,   355,   356,
      42,   358,    41,    43,   361,   362,   363,   364,   365,   366,
      42,     7,    -1,   518,    -1,    -1,   373,   374,   375,   376,
      -1,   378,    -1,    -1,    54,   506,   507,   508,    -1,    -1,
      -1,    -1,    -1,    -1,   391,   189,    -1,   394,   395,     1,
      -1,    -1,    -1,     5,     6,     7,     8,    -1,    -1,   406,
      12,    -1,    82,    -1,    -1,    85,    -1,    87,    88,    -1,
      -1,    91,    92,    -1,    26,    -1,    28,    29,    -1,     1,
      -1,    33,    -1,     5,     6,     7,     8,   107,    -1,    41,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,   119,
      -1,    -1,   246,    -1,    26,    -1,    28,    29,    -1,    -1,
      -1,    33,    -1,    -1,    -1,   462,   463,   464,    -1,    41,
      -1,    -1,    -1,    -1,   268,    82,    -1,    -1,    85,    -1,
      87,    88,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,
       1,    -1,    -1,     4,     5,     6,     7,     8,   292,   106,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,   506,
     507,   508,   119,    -1,   308,    26,    27,    28,    29,   189,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    -1,    -1,    44,    20,    21,    22,    23,    24,    25,
     334,   335,   336,    -1,    30,    31,    32,    -1,   342,   343,
     344,    -1,    -1,   347,    40,    -1,    42,    -1,    -1,    -1,
     354,   355,    -1,    -1,   358,    -1,    -1,   361,   362,   363,
     364,   365,   366,    -1,    -1,    -1,   246,    -1,    -1,   373,
     374,   375,   189,    54,   378,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   391,   268,    -1,
     394,   395,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,   406,    -1,    85,    -1,    87,    88,    -1,     1,
      91,    92,   292,     5,     6,     7,     8,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,   308,   246,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,   119,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,    41,
      -1,   268,    44,    -1,   334,   335,   336,    -1,   462,   463,
     464,    -1,   342,   343,    -1,     1,    -1,   347,    -1,     5,
       6,     7,     8,    -1,   354,   292,    12,    -1,   358,    -1,
      -1,   361,   362,   363,   364,   365,   366,    -1,    -1,    -1,
      -1,   308,    -1,   373,   374,    -1,    -1,    33,   378,    -1,
      -1,    -1,   506,   507,   508,    41,    -1,    -1,   189,    -1,
      -1,   391,    -1,    -1,   394,   395,    -1,   334,   335,   336,
      -1,    -1,    -1,    -1,    -1,   342,   406,    -1,    -1,    54,
     347,    -1,     1,    -1,    -1,    -1,     5,     6,     7,     8,
      -1,   358,    -1,    12,   361,   362,   363,   364,   365,   366,
      -1,    -1,    -1,    -1,    -1,    -1,   373,    82,    -1,    -1,
      85,   378,    87,    88,    33,   246,    91,    92,    -1,    -1,
      -1,    -1,    41,    -1,   391,    -1,    -1,   394,   395,    -1,
      -1,    -1,   462,   463,   464,    -1,    -1,   268,    -1,   406,
      -1,     1,    -1,    -1,   119,     5,     6,     7,     8,    -1,
      -1,    -1,    12,     1,    -1,    -1,    -1,     5,     6,     7,
       8,   292,    -1,    -1,    12,    -1,    26,    -1,    28,    29,
      -1,    -1,    -1,    33,    -1,    -1,   506,   507,   508,    -1,
      -1,    41,    -1,     1,    -1,    33,    -1,     5,     6,     7,
       8,    -1,    -1,    41,    12,   462,   463,   464,    -1,    -1,
      -1,    -1,    -1,   334,   335,   336,    -1,    -1,    26,    -1,
      28,    29,    -1,     1,   189,    33,   347,     5,     6,     7,
       8,    -1,    -1,    41,    12,    -1,    -1,   358,    -1,    -1,
     361,   362,   363,   364,   365,   366,    -1,    -1,    -1,   506,
     507,   508,    -1,    -1,    -1,    33,    -1,   378,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
     391,    -1,    -1,   394,   395,    -1,    -1,    -1,    -1,    -1,
      -1,   246,    -1,     1,    -1,   406,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,   268,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    41,    -1,    -1,    44,   292,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,   462,   463,   464,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,   334,
     335,   336,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    -1,   347,    44,     1,   506,   507,   508,     5,     6,
       7,     8,    -1,   358,    -1,    12,   361,   362,   363,   364,
     365,   366,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    28,    29,   378,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    -1,   391,    -1,    -1,   394,
     395,     1,    -1,    -1,     4,     5,     6,     7,     8,    -1,
      -1,   406,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,
      -1,    41,    -1,    -1,    44,     1,    -1,    -1,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,   462,   463,   464,
      26,    27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,
      36,    37,    38,    -1,    -1,    41,    -1,    -1,    44,     1,
      -1,    -1,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,   506,   507,   508,    26,    27,    28,    29,    -1,    -1,
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
      36,    37,    38,    -1,     1,    41,    -1,    43,     5,     6,
       7,     8,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    -1,     1,    41,    -1,    43,     5,     6,     7,
       8,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,     1,    -1,    41,    -1,     5,     6,     7,     8,    -1,
       1,    -1,    12,    -1,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    26,    -1,    28,    29,
      -1,    -1,     1,    33,    -1,    -1,     5,     6,     7,     8,
      -1,    41,    33,    12,    -1,    -1,    -1,     1,    -1,    -1,
      41,     5,     6,     7,     8,    -1,     1,    -1,    12,    -1,
       5,     6,     7,     8,    33,    -1,    -1,    12,    -1,     1,
      -1,    -1,    41,     5,     6,     7,     8,    -1,     1,    33,
      12,    -1,     5,     6,     7,     8,    -1,    41,    33,    12,
      -1,    -1,    -1,     1,    -1,    -1,    41,     5,     6,     7,
       8,    33,    -1,    -1,    12,    -1,    -1,    -1,     1,    41,
      33,    -1,     5,     6,     7,     8,    -1,     1,    41,    12,
      -1,     5,     6,     7,     8,    33,    -1,    -1,    12,    -1,
       1,    -1,    -1,    41,     5,     6,     7,     8,    -1,     1,
      33,    12,    -1,     5,     6,     7,     8,    -1,    41,    33,
      12,    -1,    -1,    -1,     1,    -1,    -1,    41,     5,     6,
       7,     8,    33,    -1,    -1,    12,    -1,    -1,    -1,     1,
      41,    33,    -1,     5,     6,     7,     8,    -1,     1,    41,
      12,    -1,     5,     6,     7,     8,    33,    -1,    -1,    12,
      -1,     1,    -1,    -1,    41,     5,     6,     7,     8,    -1,
       1,    33,    12,    -1,     5,     6,     7,     8,    -1,    41,
      33,    12,    -1,    -1,    -1,     1,    -1,    -1,    41,     5,
       6,     7,     8,    33,    -1,    -1,    12,    -1,    -1,    -1,
       1,    41,    33,    -1,     5,     6,     7,     8,    -1,     1,
      41,    12,    -1,     5,     6,     7,     8,    33,    -1,    -1,
      12,    -1,     1,    -1,    -1,    41,     5,     6,     7,     8,
      -1,    -1,    33,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    33,    -1,     8,     9,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    33,    20,    21,    22,    23,    24,
      25,    -1,    41,    -1,    -1,    30,    31,    32,     8,     9,
      -1,    -1,    -1,    -1,    -1,    40,    41,    42,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    31,    32,     8,     9,    -1,    -1,    -1,    -1,    -1,
      40,    41,    42,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,
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
      25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
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
      25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    31,    32,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    31,    32,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    31,    32,    -1,    34,     8,     9,    -1,    -1,    39,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
      -1,    34,     8,     9,    -1,    -1,    39,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    30,    31,    32,     8,     9,    -1,
      -1,    -1,    -1,    39,    -1,    41,    -1,    -1,    -1,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      31,    32,     8,     9,    -1,    -1,    -1,    -1,    39,    -1,
      41,    -1,    -1,    -1,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    30,    31,    32,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    20,
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
      20,    21,    22,    23,    24,    25,     8,     9,    -1,    -1,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,     8,    -1,    -1,    -1,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,
      24,    25,     8,    -1,    -1,    -1,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    30,    31,    32,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
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
      10,    63,    76,     1,    63,    76,     1,    78,    39,    39,
      42,    42,    65,    78,     1,    69,    70,    71,    72,    73,
      63,     1,    42,    63,    77,    42,    42,    39,    30,    30,
      42,    42,    42,    42,    42,    42,    42,    42,    42,    42,
      42,    42,    42,    42,    42,    42,    42,    40,    42,    40,
      42,     1,    52,    54,    58,    59,    63,     1,    65,     1,
      65,    78,    39,    39,    39,    39,    39,    39,    39,    39,
       1,     1,    77,     4,    39,    42,    42,    42,    42,    42,
      59,    64,    59,     1,    59,    59,    59,    42,    52,    13,
      14,    15,    16,     5,     5,    39,     5,     5,     5,     6,
       7,    12,    26,    28,    29,    33,    41,    65,    67,    68,
      69,    70,    71,    72,    73,    74,    78,    79,    81,     8,
       5,     5,     5,     5,     6,     7,    12,    33,    41,    69,
      70,    71,    72,    73,    74,    78,    79,    81,     5,    41,
       5,    26,    28,    29,     5,     6,     7,    12,    26,    28,
      29,    33,    41,    65,    67,    68,    69,    70,    71,    72,
      73,    74,    78,    79,    81,    39,    41,    30,    31,    41,
       1,    17,    18,    19,    35,    36,    37,    38,    43,    49,
      55,    56,    57,    60,    61,    62,    63,    64,    66,    82,
      43,    52,    54,    78,    41,    41,    41,     5,    74,    78,
       1,    63,    31,    32,    75,    79,    80,    41,    74,     5,
      74,    78,     1,    63,    32,    75,    79,    80,    41,    74,
      42,    41,    41,    41,    41,    41,    41,     5,    74,    78,
       1,    63,    30,    31,    32,    75,    79,    80,    41,    74,
      42,     5,    26,    28,    29,    65,    78,     1,    69,    42,
      39,    41,    41,    41,    41,    41,    41,     1,    39,    63,
      53,    39,    39,    39,    78,    53,    34,     1,    67,     1,
      67,     1,    67,    42,    42,     1,    69,    70,    71,    72,
      73,     1,    42,    77,    42,    42,    70,    71,    72,    73,
       1,    42,    77,     1,    67,     1,    67,     1,    67,     1,
      67,     1,    67,     1,    67,    42,    42,     5,    26,    28,
      29,    65,    78,     1,    69,    70,    71,    72,    73,     1,
      42,    77,    41,    41,    41,     1,    63,    64,     1,    78,
       1,    63,    76,     1,    63,    76,     1,    78,    39,    39,
      44,    39,    44,    63,    42,    42,    42,    42,    42,    42,
      42,    42,    42,    42,    42,    42,    42,    42,    42,    42,
      42,    42,    42,    42,    42,    42,    41,    41,    41,    42,
      42,     1,    67,     1,    67,     1,    67,    42,    42,    39,
      30,    30,    42,    42,    42,    42,    42,    42,    42,    42,
       1,    67,     1,    67,     1,    67,    42,    42,    42,    42,
      42,    42,     1,    58,    59,    63,     1,    65,     1,    65,
      78,    39,    39,    39,    39,    39,    39,    39,    39,    42,
      42,    42,    42,    42,    42,     4,    39,    42,    42,    42,
      42,    42,    59,    64,    59,     1,    59,    59,    59,    42,
      52
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    48,    48,    49,    49,    50,
      50,    50,    50,    51,    51,    51,    52,    53,    53,    54,
      54,    54,    54,    54,    54,    54,    54,    55,    55,    55,
      55,    55,    55,    55,    55,    56,    57,    57,    58,    58,
      59,    59,    60,    60,    60,    61,    61,    61,    61,    61,
      61,    62,    63,    63,    64,    65,    65,    65,    65,    65,
      65,    66,    66,    66,    67,    67,    68,    68,    68,    69,
      69,    70,    70,    71,    71,    72,    72,    73,    73,    73,
      73,    73,    73,    73,    74,    74,    74,    74,    75,    75,
      75,    75,    75,    75,    76,    77,    77,    77,    78,    79,
      80,    81,    81,    81,    82,    82,    82,    82
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     2,     6,
       6,     6,     6,     4,     2,     0,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     5,     5,     5,
       5,     5,     5,     5,     5,     9,     5,     5,     1,     3,
       1,     1,     2,     3,     3,     7,     7,     2,     7,     7,
       7,     2,     1,     1,     3,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     3,     3,     3,     1,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     1,     2,     2,
       4,     3,     4,     3,     1,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
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
#line 89 "sintatic/sintatic.y"
                         {
            (yyval.typeNode) = buildNode("program");
            (yyval.typeNode)->childNode = (yyvsp[0].typeNode);
            origin = (yyval.typeNode);
        }
#line 3135 "sintatic.tab.c"
    break;

  case 3: /* list_declaration: list_declaration main_declaration  */
#line 97 "sintatic/sintatic.y"
                                          {
            (yyvsp[-1].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3143 "sintatic.tab.c"
    break;

  case 7: /* var_declaration: tipos var SEMICOLON  */
#line 109 "sintatic/sintatic.y"
                            {
            (yyval.typeNode) = buildNode("var_declaration");
            (yyval.typeNode)->childNode = (yyvsp[-2].typeNode); 
            (yyvsp[-2].typeNode)->brotherNode = (yyvsp[-1].typeNode);  
         
            //char *id, char *typ
            insertItem(&table, (yyvsp[-2].typeNode)->value, (yyvsp[-1].typeNode)->value);
        }
#line 3156 "sintatic.tab.c"
    break;

  case 8: /* var_declaration: error SEMICOLON  */
#line 117 "sintatic/sintatic.y"
                          { (yyval.typeNode) = buildNode("SINTATIC ERR");}
#line 3162 "sintatic.tab.c"
    break;

  case 9: /* func_declaration: tipos var OPEN_PAREN list_args CLS_PAREN blockStmt  */
#line 121 "sintatic/sintatic.y"
                                                           {
            (yyval.typeNode) = buildNode("func_declaration");   
            (yyval.typeNode)->childNode = (yyvsp[-5].typeNode);
            (yyvsp[-5].typeNode)->brotherNode = (yyvsp[-4].typeNode);
            (yyvsp[-4].typeNode)->brotherNode = (yyvsp[-2].typeNode);
            (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);

            insertItem(&table, (yyvsp[-5].typeNode)->value, (yyvsp[-4].typeNode)->value);
        }
#line 3176 "sintatic.tab.c"
    break;

  case 10: /* func_declaration: tipos MAIN OPEN_PAREN list_args CLS_PAREN blockStmt  */
#line 130 "sintatic/sintatic.y"
                                                                           {
            (yyval.typeNode) = buildNode("func_declaration_main");   
            (yyval.typeNode)->childNode = (yyvsp[-5].typeNode);
            (yyvsp[-5].typeNode)->brotherNode = (yyvsp[-2].typeNode);
            (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);

            insertItem(&table, (yyvsp[-5].typeNode)->value, "MAIN");
        }
#line 3189 "sintatic.tab.c"
    break;

  case 11: /* func_declaration: tipos var OPEN_PAREN error CLS_PAREN blockStmt  */
#line 138 "sintatic/sintatic.y"
                                                         {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3197 "sintatic.tab.c"
    break;

  case 12: /* func_declaration: tipos MAIN OPEN_PAREN error CLS_PAREN blockStmt  */
#line 141 "sintatic/sintatic.y"
                                                                 {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3205 "sintatic.tab.c"
    break;

  case 13: /* list_args: tipos var COMMA list_args  */
#line 148 "sintatic/sintatic.y"
                                  {
                (yyval.typeNode) = buildNode("list_args");  
                (yyval.typeNode)->childNode = (yyvsp[-3].typeNode);
                (yyvsp[-3].typeNode)->brotherNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);

                insertItem(&table, (yyvsp[-3].typeNode)->value, (yyvsp[-2].typeNode)->value);
        }
#line 3218 "sintatic.tab.c"
    break;

  case 14: /* list_args: tipos var  */
#line 156 "sintatic/sintatic.y"
                    {
                (yyval.typeNode) = buildNode("list_args"); 
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
                (yyvsp[-1].typeNode)->brotherNode = (yyvsp[0].typeNode);

                insertItem(&table, (yyvsp[-1].typeNode)->value, (yyvsp[0].typeNode)->value);
        }
#line 3230 "sintatic.tab.c"
    break;

  case 15: /* list_args: %empty  */
#line 163 "sintatic/sintatic.y"
                 {
                (yyval.typeNode) = buildNode("no_args"); 
        }
#line 3238 "sintatic.tab.c"
    break;

  case 16: /* blockStmt: OP_CUR_BRACKET list_statements CLS_CUR_BRACKET  */
#line 169 "sintatic/sintatic.y"
                                                       {
                (yyval.typeNode) = (yyvsp[-1].typeNode);
        }
#line 3246 "sintatic.tab.c"
    break;

  case 17: /* list_statements: stmt list_statements  */
#line 175 "sintatic/sintatic.y"
                             {
               (yyval.typeNode) = (yyvsp[-1].typeNode);
               (yyvsp[-1].typeNode)->brotherNode = (yyvsp[0].typeNode); 
        }
#line 3255 "sintatic.tab.c"
    break;

  case 27: /* input_output_expr: CMD_WRITE OPEN_PAREN str_expr CLS_PAREN SEMICOLON  */
#line 194 "sintatic/sintatic.y"
                                                          {
                (yyval.typeNode) = buildNode("CMD_WRITE_STR");
        }
#line 3263 "sintatic.tab.c"
    break;

  case 28: /* input_output_expr: CMD_WRITE OPEN_PAREN expr CLS_PAREN SEMICOLON  */
#line 197 "sintatic/sintatic.y"
                                                        {
                (yyval.typeNode) = buildNode("CMD_WRITE_EXPR");
        }
#line 3271 "sintatic.tab.c"
    break;

  case 29: /* input_output_expr: CMD_WRITELN OPEN_PAREN str_expr CLS_PAREN SEMICOLON  */
#line 200 "sintatic/sintatic.y"
                                                              {
                (yyval.typeNode) = buildNode("CMD_WRITELN_STR");
        }
#line 3279 "sintatic.tab.c"
    break;

  case 30: /* input_output_expr: CMD_WRITELN OPEN_PAREN expr CLS_PAREN SEMICOLON  */
#line 203 "sintatic/sintatic.y"
                                                          {
                (yyval.typeNode) = buildNode("CMD_WRITELN_EXPR");
        }
#line 3287 "sintatic.tab.c"
    break;

  case 31: /* input_output_expr: CMD_READ OPEN_PAREN var CLS_PAREN SEMICOLON  */
#line 206 "sintatic/sintatic.y"
                                                      {
                (yyval.typeNode) = buildNode("CMD_READ_VAR");
        }
#line 3295 "sintatic.tab.c"
    break;

  case 32: /* input_output_expr: CMD_WRITE OPEN_PAREN error CLS_PAREN SEMICOLON  */
#line 209 "sintatic/sintatic.y"
                                                         {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3303 "sintatic.tab.c"
    break;

  case 33: /* input_output_expr: CMD_WRITELN OPEN_PAREN error CLS_PAREN SEMICOLON  */
#line 212 "sintatic/sintatic.y"
                                                           {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3311 "sintatic.tab.c"
    break;

  case 34: /* input_output_expr: CMD_READ OPEN_PAREN error CLS_PAREN SEMICOLON  */
#line 215 "sintatic/sintatic.y"
                                                        {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3319 "sintatic.tab.c"
    break;

  case 35: /* iteration_expr: CMD_FOR OPEN_PAREN assign SEMICOLON expr SEMICOLON assign CLS_PAREN blockStmt  */
#line 221 "sintatic/sintatic.y"
                                                                                      {     
             (yyval.typeNode) = buildNode("for");
             (yyval.typeNode)->childNode = (yyvsp[-6].typeNode);
             (yyvsp[-6].typeNode)->brotherNode = (yyvsp[-4].typeNode);
             (yyvsp[-4].typeNode)->brotherNode = (yyvsp[-2].typeNode);
             (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);  
        
        }
#line 3332 "sintatic.tab.c"
    break;

  case 36: /* condition_expr: CMD_IF OPEN_PAREN expr CLS_PAREN block_cond  */
#line 232 "sintatic/sintatic.y"
                                                     {
                (yyval.typeNode) = buildNode("if");
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3342 "sintatic.tab.c"
    break;

  case 37: /* condition_expr: CMD_IF OPEN_PAREN error CLS_PAREN error  */
#line 237 "sintatic/sintatic.y"
                                                  {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3350 "sintatic.tab.c"
    break;

  case 39: /* block_cond: simple_complex_block_stmt CMD_ELSE simple_complex_block_stmt  */
#line 244 "sintatic/sintatic.y"
                                                                       {
                (yyval.typeNode) = buildNode("if_stmt");
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);

                (yyval.typeNode)->brotherNode = buildNode("else");
                (yyval.typeNode)->brotherNode->childNode = (yyvsp[0].typeNode);
        }
#line 3362 "sintatic.tab.c"
    break;

  case 42: /* return_stmt: CMD_RETURN SEMICOLON  */
#line 259 "sintatic/sintatic.y"
                             {
              (yyval.typeNode) = buildNode("return");  
        }
#line 3370 "sintatic.tab.c"
    break;

  case 43: /* return_stmt: CMD_RETURN expr SEMICOLON  */
#line 262 "sintatic/sintatic.y"
                                     {
                (yyval.typeNode) = buildNode("return");  
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3379 "sintatic.tab.c"
    break;

  case 44: /* return_stmt: CMD_RETURN error SEMICOLON  */
#line 266 "sintatic/sintatic.y"
                                     {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3387 "sintatic.tab.c"
    break;

  case 45: /* set_stmt: CMD_FORALL OPEN_PAREN var IN_OP func_expr CLS_PAREN simple_complex_block_stmt  */
#line 272 "sintatic/sintatic.y"
                                                                                      {
                (yyval.typeNode) = buildNode("forall");  
                (yyval.typeNode)->childNode = (yyvsp[-4].typeNode);
                (yyvsp[-4].typeNode)->brotherNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3398 "sintatic.tab.c"
    break;

  case 46: /* set_stmt: CMD_FORALL OPEN_PAREN var IN_OP var CLS_PAREN simple_complex_block_stmt  */
#line 278 "sintatic/sintatic.y"
                                                                                  {
                (yyval.typeNode) = buildNode("forall");  
                (yyval.typeNode)->childNode = (yyvsp[-4].typeNode);
                (yyvsp[-4].typeNode)->brotherNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3409 "sintatic.tab.c"
    break;

  case 48: /* set_stmt: CMD_FORALL OPEN_PAREN error IN_OP error CLS_PAREN simple_complex_block_stmt  */
#line 285 "sintatic/sintatic.y"
                                                                                      {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3417 "sintatic.tab.c"
    break;

  case 49: /* set_stmt: CMD_FORALL OPEN_PAREN error IN_OP func_expr CLS_PAREN error  */
#line 288 "sintatic/sintatic.y"
                                                                      {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3425 "sintatic.tab.c"
    break;

  case 50: /* set_stmt: CMD_FORALL OPEN_PAREN var IN_OP error CLS_PAREN simple_complex_block_stmt  */
#line 291 "sintatic/sintatic.y"
                                                                                    {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3433 "sintatic.tab.c"
    break;

  case 54: /* assign: var ATRIBUTION expr  */
#line 305 "sintatic/sintatic.y"
                            {
              (yyval.typeNode) = buildNode(" = ");
              (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3443 "sintatic.tab.c"
    break;

  case 55: /* func_expr: ADD_FUNC OPEN_PAREN func_in_expr CLS_PAREN  */
#line 313 "sintatic/sintatic.y"
                                                   {
                (yyval.typeNode) = buildNode(" add ");
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3452 "sintatic.tab.c"
    break;

  case 56: /* func_expr: REMOVE_FUNC OPEN_PAREN func_in_expr CLS_PAREN  */
#line 317 "sintatic/sintatic.y"
                                                        {
                (yyval.typeNode) = buildNode(" remove ");
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3461 "sintatic.tab.c"
    break;

  case 57: /* func_expr: EXIST_FUNC OPEN_PAREN func_in_expr CLS_PAREN  */
#line 321 "sintatic/sintatic.y"
                                                       {
                (yyval.typeNode) = buildNode(" exist ");
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3470 "sintatic.tab.c"
    break;

  case 58: /* func_expr: ADD_FUNC OPEN_PAREN error CLS_PAREN  */
#line 325 "sintatic/sintatic.y"
                                              {
             (yyval.typeNode) = buildNode("SINTATIC ERR!");   
        }
#line 3478 "sintatic.tab.c"
    break;

  case 59: /* func_expr: REMOVE_FUNC OPEN_PAREN error CLS_PAREN  */
#line 328 "sintatic/sintatic.y"
                                                 {
             (yyval.typeNode) = buildNode("SINTATIC ERR!");   
        }
#line 3486 "sintatic.tab.c"
    break;

  case 60: /* func_expr: EXIST_FUNC OPEN_PAREN error CLS_PAREN  */
#line 331 "sintatic/sintatic.y"
                                                {
             (yyval.typeNode) = buildNode("SINTATIC ERR!");    
        }
#line 3494 "sintatic.tab.c"
    break;

  case 61: /* is_set_expr: IS_SET_FUNC OPEN_PAREN var CLS_PAREN  */
#line 337 "sintatic/sintatic.y"
                                             {
              (yyval.typeNode) = buildNode(" is_set ");
              (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3503 "sintatic.tab.c"
    break;

  case 62: /* is_set_expr: IS_SET_FUNC OPEN_PAREN func_expr CLS_PAREN  */
#line 341 "sintatic/sintatic.y"
                                                     {
                (yyval.typeNode) = buildNode(" is_set ");
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3512 "sintatic.tab.c"
    break;

  case 63: /* is_set_expr: IS_SET_FUNC OPEN_PAREN error CLS_PAREN  */
#line 345 "sintatic/sintatic.y"
                                                 {
             (yyval.typeNode) = buildNode("SINTATIC ERR!");    
        }
#line 3520 "sintatic.tab.c"
    break;

  case 64: /* func_in_expr: op_or_expr IN_OP var  */
#line 350 "sintatic/sintatic.y"
                             {
                (yyval.typeNode) = buildNode(" IN ");
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3530 "sintatic.tab.c"
    break;

  case 65: /* func_in_expr: op_or_expr IN_OP func_expr  */
#line 355 "sintatic/sintatic.y"
                                     {
                (yyval.typeNode) = buildNode(" IN ");
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3540 "sintatic.tab.c"
    break;

  case 66: /* op_or_expr: op_or_expr OP_OR op_and_expr  */
#line 363 "sintatic/sintatic.y"
                                     {
              (yyval.typeNode) = buildNode("or");
              (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3550 "sintatic.tab.c"
    break;

  case 69: /* op_and_expr: op_and_expr OP_AND logical_expr  */
#line 373 "sintatic/sintatic.y"
                                        {
              (yyval.typeNode) = buildNode("and");
              (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);  
        }
#line 3560 "sintatic.tab.c"
    break;

  case 71: /* logical_expr: logical_expr logical_ops arithmetic_expr  */
#line 382 "sintatic/sintatic.y"
                                                {
             (yyval.typeNode) = (yyvsp[-1].typeNode);
             (yyvsp[-1].typeNode)->childNode = (yyvsp[-2].typeNode); 
             (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode); 
       }
#line 3570 "sintatic.tab.c"
    break;

  case 73: /* arithmetic_expr: arithmetic_expr adds_op mult_expr  */
#line 391 "sintatic/sintatic.y"
                                          {
              (yyval.typeNode) = (yyvsp[-1].typeNode);
              (yyvsp[-1].typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3580 "sintatic.tab.c"
    break;

  case 75: /* mult_expr: mult_expr mult_ops first_term  */
#line 400 "sintatic/sintatic.y"
                                      {
              (yyval.typeNode) = (yyvsp[-1].typeNode);
              (yyvsp[-1].typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3590 "sintatic.tab.c"
    break;

  case 78: /* first_term: OP_NEG term  */
#line 410 "sintatic/sintatic.y"
                      {
              (yyval.typeNode) = buildNode(" ! ");
              (yyval.typeNode)->childNode = (yyvsp[0].typeNode);
        }
#line 3599 "sintatic.tab.c"
    break;

  case 79: /* first_term: adds_op term  */
#line 414 "sintatic/sintatic.y"
                       {
              (yyval.typeNode) = (yyvsp[-1].typeNode);
              (yyvsp[-1].typeNode)->childNode = (yyvsp[0].typeNode);
        }
#line 3608 "sintatic.tab.c"
    break;

  case 80: /* first_term: var OPEN_PAREN list_expr CLS_PAREN  */
#line 418 "sintatic/sintatic.y"
                                             {
                (yyval.typeNode) = (yyvsp[-3].typeNode);
                (yyvsp[-3].typeNode)->brotherNode = (yyvsp[-1].typeNode);
        }
#line 3617 "sintatic.tab.c"
    break;

  case 82: /* first_term: var OPEN_PAREN error CLS_PAREN  */
#line 423 "sintatic/sintatic.y"
                                         {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3625 "sintatic.tab.c"
    break;

  case 83: /* first_term: error OPEN_PAREN CLS_PAREN  */
#line 426 "sintatic/sintatic.y"
                                      {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3633 "sintatic.tab.c"
    break;

  case 86: /* term: OPEN_PAREN expr CLS_PAREN  */
#line 434 "sintatic/sintatic.y"
                                    {
                (yyval.typeNode) = (yyvsp[-1].typeNode);
        }
#line 3641 "sintatic.tab.c"
    break;

  case 87: /* term: OPEN_PAREN error CLS_PAREN  */
#line 437 "sintatic/sintatic.y"
                                      {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3649 "sintatic.tab.c"
    break;

  case 88: /* logical_ops: LT_OP  */
#line 443 "sintatic/sintatic.y"
              {
                (yyval.typeNode) = buildNode("LT_OP");
        }
#line 3657 "sintatic.tab.c"
    break;

  case 89: /* logical_ops: LTE_OP  */
#line 446 "sintatic/sintatic.y"
                  {
                (yyval.typeNode) = buildNode("LTE_OP");
        }
#line 3665 "sintatic.tab.c"
    break;

  case 90: /* logical_ops: GT_OP  */
#line 449 "sintatic/sintatic.y"
                 {
                (yyval.typeNode) = buildNode("GT_OP");
        }
#line 3673 "sintatic.tab.c"
    break;

  case 91: /* logical_ops: GTE_OP  */
#line 452 "sintatic/sintatic.y"
                  {
                (yyval.typeNode) = buildNode("GTE_OP");
        }
#line 3681 "sintatic.tab.c"
    break;

  case 92: /* logical_ops: NEQ_OP  */
#line 455 "sintatic/sintatic.y"
                  {
                (yyval.typeNode) = buildNode("NEQ_OP");
        }
#line 3689 "sintatic.tab.c"
    break;

  case 93: /* logical_ops: EQUAL_OP  */
#line 458 "sintatic/sintatic.y"
                    {
                (yyval.typeNode) = buildNode("EQUAL_OP");
        }
#line 3697 "sintatic.tab.c"
    break;

  case 94: /* str_expr: STRING  */
#line 464 "sintatic/sintatic.y"
               {
            (yyval.typeNode) = buildNode((yyvsp[0].sval));
            free((yyvsp[0].sval));
        }
#line 3706 "sintatic.tab.c"
    break;

  case 97: /* list_expr: error COMMA error  */
#line 473 "sintatic/sintatic.y"
                            {
             (yyval.typeNode) = buildNode("SINTATIC ERR!");   
        }
#line 3714 "sintatic.tab.c"
    break;

  case 98: /* var: ID  */
#line 479 "sintatic/sintatic.y"
         {
            (yyval.typeNode) = buildNode((yyvsp[0].sval));
            free((yyvsp[0].sval));
       }
#line 3723 "sintatic.tab.c"
    break;

  case 99: /* adds_op: ADD_OP  */
#line 486 "sintatic/sintatic.y"
             {
            (yyval.typeNode) = buildNode((yyvsp[0].sval)); 
            free((yyvsp[0].sval)); 
      }
#line 3732 "sintatic.tab.c"
    break;

  case 100: /* mult_ops: MULT_OP  */
#line 493 "sintatic/sintatic.y"
              {
            (yyval.typeNode) = buildNode((yyvsp[0].sval)); 
            free((yyvsp[0].sval));  
      }
#line 3741 "sintatic.tab.c"
    break;

  case 101: /* num_tipos: FLOAT  */
#line 501 "sintatic/sintatic.y"
              {
              (yyval.typeNode) = buildNode((yyvsp[0].sval));
              free((yyvsp[0].sval));
        }
#line 3750 "sintatic.tab.c"
    break;

  case 102: /* num_tipos: INT  */
#line 505 "sintatic/sintatic.y"
              {
              (yyval.typeNode) = buildNode((yyvsp[0].sval));
              free((yyvsp[0].sval));
        }
#line 3759 "sintatic.tab.c"
    break;

  case 103: /* num_tipos: EMPTY  */
#line 509 "sintatic/sintatic.y"
                {
              (yyval.typeNode) = buildNode("EMPTY");
        }
#line 3767 "sintatic.tab.c"
    break;

  case 104: /* tipos: TYPE_INT  */
#line 515 "sintatic/sintatic.y"
                 {
             (yyval.typeNode) = buildNode("TYPE_INT");
        }
#line 3775 "sintatic.tab.c"
    break;

  case 105: /* tipos: TYPE_FLOAT  */
#line 518 "sintatic/sintatic.y"
                     {
              (yyval.typeNode) = buildNode("TYPE_FLOAT");
        }
#line 3783 "sintatic.tab.c"
    break;

  case 106: /* tipos: TYPE_SET  */
#line 521 "sintatic/sintatic.y"
                    {
              (yyval.typeNode) = buildNode("TYPE_SET");
        }
#line 3791 "sintatic.tab.c"
    break;

  case 107: /* tipos: TYPE_ELEM  */
#line 524 "sintatic/sintatic.y"
                    {
             (yyval.typeNode) = buildNode("TYPE_ELEM");
        }
#line 3799 "sintatic.tab.c"
    break;


#line 3803 "sintatic.tab.c"

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

#line 528 "sintatic/sintatic.y"



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
