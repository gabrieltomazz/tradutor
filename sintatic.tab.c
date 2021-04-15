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
  Scope* activeScope;

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
  YYSYMBOL_50_1 = 50,                      /* $@1  */
  YYSYMBOL_51_2 = 51,                      /* $@2  */
  YYSYMBOL_many_declaration = 52,          /* many_declaration  */
  YYSYMBOL_func_declaration = 53,          /* func_declaration  */
  YYSYMBOL_54_3 = 54,                      /* $@3  */
  YYSYMBOL_55_4 = 55,                      /* $@4  */
  YYSYMBOL_list_args = 56,                 /* list_args  */
  YYSYMBOL_blockStmt = 57,                 /* blockStmt  */
  YYSYMBOL_list_statements = 58,           /* list_statements  */
  YYSYMBOL_stmt = 59,                      /* stmt  */
  YYSYMBOL_input_output_expr = 60,         /* input_output_expr  */
  YYSYMBOL_iteration_expr = 61,            /* iteration_expr  */
  YYSYMBOL_62_5 = 62,                      /* $@5  */
  YYSYMBOL_condition_expr = 63,            /* condition_expr  */
  YYSYMBOL_64_6 = 64,                      /* $@6  */
  YYSYMBOL_block_cond = 65,                /* block_cond  */
  YYSYMBOL_66_7 = 66,                      /* $@7  */
  YYSYMBOL_simple_complex_block_stmt = 67, /* simple_complex_block_stmt  */
  YYSYMBOL_return_stmt = 68,               /* return_stmt  */
  YYSYMBOL_set_stmt = 69,                  /* set_stmt  */
  YYSYMBOL_70_8 = 70,                      /* $@8  */
  YYSYMBOL_71_9 = 71,                      /* $@9  */
  YYSYMBOL_expr_stmt = 72,                 /* expr_stmt  */
  YYSYMBOL_expr = 73,                      /* expr  */
  YYSYMBOL_assign = 74,                    /* assign  */
  YYSYMBOL_func_expr = 75,                 /* func_expr  */
  YYSYMBOL_is_set_expr = 76,               /* is_set_expr  */
  YYSYMBOL_func_in_expr = 77,              /* func_in_expr  */
  YYSYMBOL_op_or_expr = 78,                /* op_or_expr  */
  YYSYMBOL_op_and_expr = 79,               /* op_and_expr  */
  YYSYMBOL_logical_expr = 80,              /* logical_expr  */
  YYSYMBOL_arithmetic_expr = 81,           /* arithmetic_expr  */
  YYSYMBOL_mult_expr = 82,                 /* mult_expr  */
  YYSYMBOL_first_term = 83,                /* first_term  */
  YYSYMBOL_term = 84,                      /* term  */
  YYSYMBOL_logical_ops = 85,               /* logical_ops  */
  YYSYMBOL_str_expr = 86,                  /* str_expr  */
  YYSYMBOL_list_expr = 87,                 /* list_expr  */
  YYSYMBOL_var = 88,                       /* var  */
  YYSYMBOL_adds_op = 89,                   /* adds_op  */
  YYSYMBOL_mult_ops = 90,                  /* mult_ops  */
  YYSYMBOL_num_tipos = 91,                 /* num_tipos  */
  YYSYMBOL_tipos = 92                      /* tipos  */
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
#define YYLAST   8830

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  122
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  700

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
       0,    91,    91,    99,   102,   103,   107,   108,   112,   112,
     120,   120,   131,   135,   136,   140,   140,   164,   164,   187,
     190,   197,   208,   216,   222,   228,   232,   236,   237,   238,
     239,   240,   241,   242,   243,   247,   251,   255,   259,   263,
     267,   270,   273,   279,   279,   301,   301,   322,   328,   329,
     329,   351,   352,   356,   359,   363,   366,   372,   372,   388,
     388,   404,   405,   408,   411,   416,   417,   424,   425,   429,
     437,   441,   445,   449,   452,   455,   461,   465,   469,   474,
     479,   487,   492,   493,   497,   502,   506,   511,   515,   520,
     524,   529,   533,   534,   538,   542,   546,   547,   550,   556,
     557,   558,   561,   567,   570,   573,   576,   579,   582,   588,
     595,   596,   597,   603,   610,   617,   624,   628,   632,   638,
     641,   644,   647
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
  "list_declaration", "main_declaration", "var_declaration", "$@1", "$@2",
  "many_declaration", "func_declaration", "$@3", "$@4", "list_args",
  "blockStmt", "list_statements", "stmt", "input_output_expr",
  "iteration_expr", "$@5", "condition_expr", "$@6", "block_cond", "$@7",
  "simple_complex_block_stmt", "return_stmt", "set_stmt", "$@8", "$@9",
  "expr_stmt", "expr", "assign", "func_expr", "is_set_expr",
  "func_in_expr", "op_or_expr", "op_and_expr", "logical_expr",
  "arithmetic_expr", "mult_expr", "first_term", "term", "logical_ops",
  "str_expr", "list_expr", "var", "adds_op", "mult_ops", "num_tipos",
  "tipos", YY_NULLPTR
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

#define YYPACT_NINF (-423)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-123)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1018,   428,    38,    89,   103,   179,    16,   646,   752,   799,
     947,   216,  1049,  -423,    30,  1159,   323,    71,   634,    26,
     155,    31,    88,   121,   228,   166,   -14,   147,   228,  1320,
     171,   175,   230,   201,   211,   171,   222,  2617,  1350,   171,
      56,  1389,  1448,   171,    85,  1126,  6237,   328,  6262,   212,
     239,   251,   268,   278,   287,   309,   415,   329,   341,   352,
     989,  1902,  1594,   362,  4215,  4256,  4297,  4338,  4379,  4420,
    4461,    17,   374,    22,   391,    32,    50,   135,   762,  6687,
    6287,  6312,  6337,  1036,   415,  6362,   155,  1465,   228,  1495,
     403,  2137,   452,    90,    52,   885,   253,   310,  6387,  6412,
    1075,  1298,   172,   244,  4502,    51,  1376,   257,   412,  1520,
     417,  4543,  4584,  4625,  4666,   262,   348,   348,   378,   696,
     886,  1196,  1205,  1244,   348,   348,  1419,   348,  2358,   150,
    6437,   357,   427,  6462,   382,   433,   499,   481,   501,   398,
     283,   508,   474,   502,   509,   520,   300,   530,   432,   568,
     525,   540,   545,   590,   550,   558,   596,   624,  4707,  4748,
    4789,  6487,  6512,    86,   100,   630,   163,  6737,  6712,  6537,
    6562,   642,   694,  6587,   304,   681,   683,  5773,   686,   704,
     295,   903,    76,    82,   710,   715,   723,    83,   102,   105,
     136,   725,   757,   779,   785,   803,   806,   810,   846,   790,
    6612,  2489,  6637,  4830,  5812,  2358,   859,   864,   870,   878,
     927,  4871,  4912,  4953,  4994,  5035,  5076,  5117,  5158,   930,
     615,   936,   607,   938,  5199,  1550,   889,  5851,   980,  5851,
    5890,  5929,  5968,   499,  5240,  5281,  5322,  5851,  5851,  5851,
     941,  5363,  5404,  5445,   942,  5486,   650,   982,   986,   994,
     998,   326,  2231,  5527,  6662,  2321,   830,  7307,  7332,  7357,
     965,   968,   983,   453,  2499,   985,   533,   559,   586,  8752,
    7832,  7382,  7407,  7432,  6807,   453,  7457,  1657,   999,  7932,
    8402,  8420,  8438,   486,  2545,   741,  2002,  2800,  8456,  8474,
    8492,  7957,   486,  8510,   993,   997,   122,  1000,  1011,  1014,
    1028,  7882,  7982,  8002,  8022,  1033,  1037,  1043,   658,  2704,
    1047,    -9,    36,  1132,  8778,  8362,  8042,  8062,  8082,  7907,
     658,  8102,  6757,  6832,  6857,  6882,  1054,  1056,  1061,   739,
    6007,   436,   505,   928,   140,  1971,  7482,  6907,  6932,  6957,
    6782,   739,  6982,   155,  1055,  1073,  1070,   386,  1768,  1077,
     441,  1074,  1082,  1084,  1087,  1095,  1097,  1680,  2617,  2038,
    2448,  2663,  2774,  2835,  2902,  2944,   186,  1104,  1113,   155,
    2617,  5568,  5609,  1121,  1848,  1956,  2121,  7507,  7532,  7557,
     665,  1079,  2209,  2209,  2209,  2209,  2209,   366,  7582,  8528,
    8546,  8564,   689,  1119,  1768,  1768,  1768,  1768,   714,  8582,
    7607,  2278,  2287,  2388,  1134,  2397,  2555,  2743,  8122,  8142,
    8162,   747,  1146,   491,  6055,  6055,  6055,  6055,  6055,   769,
    8182,  6077,  6092,  6101,  7007,  7032,  7057,   817,  1148,   601,
    6114,  6114,  6114,  6114,  6114,   815,  7082,   166,  5650,  8600,
     627,  1127,  1164,  1181,   697,   795,  1192,   773,  7107,  2985,
    6016,   452,   180,  1722,  2084,   231,   444,  3026,   187,  1187,
    3067,  3108,  3149,  3190,  1032,  1209,  6046,  1050,   847,  1091,
     893,  1158,  1058,  7632,  7657,  1227,   798,  8765,  7857,  7682,
    7707,   834,  7732,  1229,  8618,  8636,  2736,  2861,  8654,  8672,
     876,  8690,  1231,  1177,  1156,  1194,  1236,  1206,  1288,  8202,
    1219,  1315,  1311,  1325,  1317,  1388,  8222,  8242,   199,  1245,
    1256,  1266,   306,   778,  1283,  8791,  8382,  8262,  8282,  1143,
    8302,  1252,  1351,  1391,  1371,  1485,  1387,  1517,  7132,  7157,
     958,  1268,  1270,  1299,   962,   981,  1302,   865,  8739,  7757,
    7182,  7207,  1174,  7232,  1287,  1308,  6123,  6138,  6153,  1402,
    1307,   499,  1338,  1344,  1412,  1334,  1339,  1414,  1346,  1367,
    1372,  1374,  3231,  3272,  3313,  3354,   155,  1393,  5691,  1392,
    1399,  1405,  1415,  1440,  1452,  1457,  7782,  7807,  8708,  8726,
     185,   232,   245,   248,   273,   379,  1473,  1489,  1500,  1510,
    1531,  1541,  6162,  6175,  6184,  8322,  8342,   460,   514,   565,
     599,   637,   674,  6199,  6214,  6223,  7257,  7282,  5732,  1434,
    1530,  1451,  1551,  1456,  1595,  1523,  5773,  1545,   500,   979,
    1557,  1558,  1564,  1565,  1566,  1585,  1597,  1602,   166,  3395,
    1481,  1603,  1490,  1617,  1504,  1636,  1511,  1669,  1532,  1674,
    1548,  1684,  1694,  1707,  1710,  1723,  1736,  1760,  3436,  5812,
    2358,  1601,  1607,  1611,  1612,  1615,  3477,  3518,  3559,  3600,
    3641,  3682,  3723,  3764,  1605,   891,   910,  1012,  1341,  1356,
    1487,  1080,  1190,  1234,  1239,  1253,  1258,  3805,  3846,  1622,
    5812,  1667,  5812,  5890,  5929,  3887,  5968,   499,  3928,  3969,
    4010,  5812,  5812,  5812,  1628,  4051,  4092,  4133,  1447,  4174
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -423,  -423,  -423,  1666,     3,  -125,  -422,  -332,  -423,  -423,
    -423,   -16,   -26,   -50,   -29,  -203,  -185,  1223,  -168,  1059,
    1040,   996,   -89,  -150,  -112,  1010,  1017,   -97,  1241,  -134,
     925,   -94,  2319,    68,  2207,  1919,  1777,  1555,  1413,   449,
    -249,   -96,  -167,    18,   809,  -240,  1053,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,    62,    22,    33,    25,    10,    28,
      24,    31,   222,    63,   223,    65,    66,   136,    67,   204,
     224,   239,   225,    68,    69,   237,   238,    70,    71,    72,
      73,    74,    75,   141,   285,   286,   287,   288,   289,   290,
     124,   152,   175,   291,   292,   127,   293,    86
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,   360,   178,     9,    38,   155,   344,    11,    64,    42,
       9,   437,    36,    87,   110,   545,    13,    89,   111,   361,
     384,   -83,   -83,   -68,    32,   -14,    34,    23,    32,    18,
     -83,   386,    27,   -83,   221,    64,   362,   395,    26,   -17,
     -17,   -17,   -17,  -119,   -15,   -15,   -15,   -15,   397,  -119,
      40,   -67,   159,   139,   363,    83,   112,   279,   280,   281,
      47,   -68,   -83,   -83,   282,   416,   413,   414,   -17,    12,
     367,   -83,   132,   -15,    99,   -67,   418,   -73,   106,   274,
     115,   116,    83,   -70,   -74,   283,   432,   -80,    32,   -67,
     160,   137,   364,   284,  -120,   278,    88,   434,   -22,   240,
    -120,   -79,    99,   -71,   131,    76,   -75,   365,  -122,   274,
     368,   138,    19,   144,  -122,   -73,   -80,   -80,   274,   274,
     157,   -70,   -74,  -113,   253,   -80,    90,    29,    76,   267,
     -79,   -79,    76,   164,   106,   106,   -82,   -72,   234,   -79,
     236,   -71,   106,   106,   -75,   106,   319,   340,   241,   242,
     243,   172,  -113,  -113,   179,   322,   323,   324,    47,   267,
     246,  -113,   325,    30,   -81,   -82,   -82,   117,   267,   267,
     -82,   -82,   431,   156,   -82,   -72,   326,   294,   327,   328,
     -82,   552,   -82,   329,  -121,   278,   -73,   460,   563,    35,
    -121,   330,   173,   -81,   -81,   117,   312,   333,   372,   210,
     372,   371,   -81,   371,   369,   -10,   664,   359,   372,   372,
     372,   371,   371,   371,    37,   -73,   -73,    39,   245,   340,
     483,    16,    83,   319,   -73,   461,   564,    17,   384,  -113,
    -113,   492,   560,   -70,   628,   251,   294,   395,  -113,   386,
      41,   247,   248,   249,   250,    83,   -74,    83,   397,   -71,
     -13,   373,   521,    91,   145,    83,    83,    83,   279,   280,
     281,    47,   -70,   -70,    43,   282,   416,   296,   544,   333,
     -23,   -70,    76,   312,   -75,   -74,   -74,   418,   -71,   -71,
      92,   379,   274,   158,   -74,    90,   283,   -71,   297,   432,
     298,   299,    93,   379,   284,    76,   206,    76,   295,   161,
     434,   391,   274,   -75,   -75,    76,    76,    76,   459,    94,
     391,   147,   -75,   -83,   -83,   279,   280,   281,    47,    95,
     465,   260,   282,   261,   262,   183,   410,   274,    96,    64,
     -83,   -83,   267,  -114,  -114,  -114,   -80,   -80,   410,   567,
    -114,    64,   188,   283,   201,   -80,  -111,   426,   274,   165,
      97,   284,   267,   255,    45,    46,    47,   556,   559,   426,
      48,    26,  -113,  -113,  -113,   445,  -113,   481,  -113,  -114,
     100,   322,   323,   324,    47,   106,    83,   267,   325,  -105,
     -72,    56,   101,  -105,  -105,  -105,  -105,   464,    83,    61,
    -105,   440,   326,   102,   327,   328,    -8,   343,   267,   329,
     274,   274,   274,   274,   274,   340,   109,   330,   482,   -72,
     -72,  -105,   441,   113,   442,   443,   340,   617,   -72,  -105,
     254,    45,    46,   295,   176,    76,    76,    48,    -5,    -5,
     114,   513,   319,   319,   319,   319,   319,   340,    76,   346,
     182,    -5,    -5,    -5,    -5,   133,   360,   535,   340,   340,
     340,   340,   340,   340,   162,   333,    61,   -43,   377,   257,
     258,   -25,   -83,   -83,   361,   259,   333,    12,   274,   -21,
     553,   274,   274,   561,   190,   177,   -68,   360,   -68,   360,
     449,   362,    90,   562,   274,    90,    82,   333,   360,   360,
     360,   389,   280,   281,   264,   361,   508,   361,   282,   363,
     -73,   651,   -73,   333,   345,    98,   361,   361,   361,    82,
     273,   180,   362,    82,   362,   367,   184,   509,   267,   510,
     511,   267,   267,   362,   362,   362,   260,   284,   261,   262,
     363,   181,   363,   130,   267,   -83,   -83,   364,   347,   348,
     273,   363,   363,   363,   185,   -83,   367,   -83,   367,   273,
     273,   186,   365,   694,   -70,   368,   -70,   367,   367,   367,
     678,   346,   187,   -83,   -83,    82,    82,  -109,   364,   179,
     364,   346,   189,    82,    82,   -83,    82,   318,   339,   364,
     364,   364,   192,   365,    26,   365,   368,   193,   368,   347,
     382,   688,   195,   690,   365,   365,   365,   368,   368,   368,
     196,   -67,   695,   696,   697,   -74,   530,   -74,   -52,   295,
     191,   -52,   -52,   -52,   -52,   -52,   -82,   -82,   383,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   531,   -82,   532,
     533,   295,   194,   -52,   -52,   -52,   -52,   655,   197,   -71,
     -52,   -71,   -52,   -52,   -52,   -52,    -2,    14,   -52,   369,
     339,   -52,   359,    82,   318,   199,   349,  -113,  -113,     2,
       3,     4,     5,   408,   302,   303,   198,    83,   319,  -113,
     304,    90,   699,    -8,    20,    21,    82,   -75,    82,   -75,
     369,   -69,   369,   359,   203,   359,    82,    82,    82,  -113,
    -113,   369,   369,   369,   359,   359,   359,  -103,    83,   309,
      83,  -103,  -103,  -103,  -103,   373,   295,   473,  -103,    83,
      83,    83,   378,   273,   -72,   490,   -72,    76,   312,   322,
     323,   324,    47,   202,   388,   205,   325,   -80,   -80,  -103,
     295,   484,   390,   273,   199,   349,   200,  -103,   128,   -80,
     326,   399,   327,   328,   424,   323,   324,   329,    76,   -78,
      76,   325,    -4,    -4,   -77,   330,   491,   409,   273,    76,
      76,    76,   -76,   -85,   211,    -4,    -4,    -4,    -4,   420,
     519,   -82,   -82,   394,   322,   323,   324,    47,   425,   273,
     330,   325,   118,   119,   120,   121,   122,   123,   295,   506,
     436,   219,   -85,   -85,   -85,   326,   212,   327,   328,    -7,
      -7,   -85,   329,   -81,   -81,   394,    82,    82,   -79,   -79,
     330,   520,    -7,    -7,    -7,    -7,   542,   -79,   213,    82,
     322,   323,   324,    47,   214,   -79,   -79,   325,   -81,   -81,
     383,   273,   273,   273,   273,   273,   339,   -79,  -113,  -113,
     -81,   326,   215,   327,   328,   216,    84,   339,   329,   217,
    -113,  -113,  -113,  -113,  -113,  -113,   330,   543,   295,   528,
    -113,  -113,  -113,   318,   318,   318,   318,   318,   339,    84,
     275,  -113,  -113,    84,   199,   349,   576,   -83,   -83,   339,
     339,   339,   339,   339,   339,   218,   142,  -104,   125,   571,
     294,  -104,  -104,  -104,  -104,   -81,   -81,   431,  -104,   273,
     275,   227,   273,   273,   208,   -81,   228,   -81,   294,   275,
     275,   260,   229,   261,   262,   273,   199,   349,   578,  -104,
     230,   -73,   -73,   -83,   -83,    84,    84,  -104,   233,   260,
     -73,   261,   262,    84,    84,   573,    84,   320,   341,   -51,
     -70,   -70,   -51,   -51,   -51,   -51,   -51,    -6,    -6,   -70,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   429,   430,
      -6,    -6,    -6,    -6,   -51,   -51,   -51,   -51,   -67,   231,
     -67,   -51,  -112,   -51,   -51,   -51,   -51,   125,  -110,   -51,
     653,   235,   -51,   244,   294,   370,   265,  -119,  -113,  -113,
     103,  -120,   -80,   -80,   255,    45,    46,    47,  -113,  -122,
    -113,    48,   -80,  -121,   -80,   260,   374,   261,   262,   375,
     341,   -79,   -79,    84,   320,    52,   265,    54,    55,     1,
     143,   -79,    56,   -79,   376,   265,   265,   -68,   104,  -113,
      61,     2,     3,     4,     5,  -113,    84,   -99,    84,   400,
     163,   401,   -74,   -74,   -99,   -99,    84,    84,    84,   -12,
     -12,   -74,   402,   310,   331,   403,   -99,   -99,   -99,   -99,
     -99,   -99,   -12,   -12,   -12,   -12,   -99,   -99,   -99,   404,
     128,    -8,   566,   275,   405,   -99,   149,   129,   406,   385,
     256,   257,   258,    47,   407,   150,   -68,   259,   -83,   -83,
      85,   346,   570,   275,   438,   421,   396,   422,    82,   318,
     575,   260,   423,   261,   262,   207,   209,  -113,   263,    85,
     -73,   -73,   439,    85,   276,   450,   264,    85,   275,   448,
     -73,   474,   -73,   451,   417,   452,   331,  -117,   453,    82,
     310,    82,   346,   572,  -117,  -117,   454,    85,   455,   275,
      82,    82,    82,   462,   276,   433,  -117,  -117,  -117,  -117,
    -117,  -117,   463,   276,   276,   466,  -117,  -117,  -117,    -3,
      -3,   485,   -82,   -82,   415,  -117,    84,    84,   546,    85,
      85,   -82,    -3,    -3,    -3,    -3,   499,    85,    85,    84,
      85,   321,   342,   199,   349,   595,   -83,   -83,   507,   265,
     529,   275,   275,   275,   275,   275,   341,  -106,   581,   346,
     574,  -106,  -106,  -106,  -106,   547,  -107,   341,  -106,   265,
    -107,  -107,  -107,  -107,   199,   349,   606,  -107,   346,   580,
     -70,   -70,   548,   320,   320,   320,   320,   320,   341,  -106,
     -70,   565,   -70,   346,   265,   346,   582,  -106,  -107,   341,
     341,   341,   341,   341,   341,  -108,  -107,   346,   584,  -108,
    -108,  -108,  -108,   568,   342,   265,  -108,    85,   321,   275,
     346,   586,   275,   275,   -74,   -74,   -83,   -83,   295,   -71,
     -71,   577,   444,   579,   -74,   275,   -74,  -108,   583,   -71,
      85,   -71,    85,   -75,   -75,  -108,   592,   385,   -72,   -72,
      85,    85,    85,   -75,   596,   -75,   396,   593,   -72,   153,
     -72,   105,   108,   256,   257,   258,    47,   594,   150,   603,
     259,   604,   331,   -81,   -81,   415,   276,   276,   -83,   -83,
      -9,    -9,   -81,   331,   260,   417,   261,   262,   276,   607,
     585,   263,   135,    -9,    -9,    -9,    -9,   276,   512,   264,
     605,   151,   154,   349,   331,   -83,   -83,   608,   433,   616,
     -20,   -20,   346,   588,   534,   -83,   -83,   587,   346,   590,
     331,   321,   276,   -20,   -20,   -20,   -20,   589,   618,   171,
     174,   -71,   -71,   321,   619,   265,   621,   -99,   265,   265,
     -71,   622,   342,   276,   -99,   -99,   -75,   -75,   624,   -11,
     -11,   265,   346,   597,   342,   -75,   -99,   -99,   -99,   -99,
     -99,   -99,   -11,   -11,   -11,   -11,   -99,   -99,   -99,   625,
      85,    85,   346,   599,   626,   -99,   627,   129,   -83,   -83,
    -115,   -83,   -83,    85,  -115,  -115,  -115,  -115,   346,   601,
     591,  -115,   629,   598,   -69,   276,   276,   276,   276,   276,
     342,   -73,   174,   295,   615,   366,   226,   -70,   -19,   -19,
      81,   342,  -115,   295,   620,   295,   623,   -74,    84,   320,
    -115,   -19,   -19,   -19,   -19,   -18,   -18,   321,   321,   321,
     321,   321,   342,    81,   272,   346,   642,    81,   -18,   -18,
     -18,   -18,   -71,   342,   342,   342,   342,   342,   342,    84,
     358,    84,   346,   644,   -75,   -16,   -16,   346,   646,   -72,
      84,    84,    84,   276,   272,   381,   276,   276,   -16,   -16,
     -16,   -16,   -73,   272,   272,   -83,   -83,   -72,   -72,   276,
     -24,   -24,   346,   665,   648,   393,   -72,   600,   -70,    81,
      81,   346,   667,   -24,   -24,   -24,   -24,    81,    81,   -74,
     170,   317,   338,   652,   654,   346,   669,   -83,   -83,   -71,
     412,   -48,   346,   671,   232,   -48,   -48,   -48,   -48,   602,
     -83,   -83,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -75,   428,   643,   346,   673,   310,   -48,   -48,   -48,   -48,
     -72,   -83,   -83,   -48,   650,   -48,   -48,   -48,   -48,   346,
     675,   -48,    80,   645,   -48,   -33,   656,   657,   458,   -33,
     -33,   -33,   -33,   658,   659,   660,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   338,    80,   271,    81,   317,    80,
     -33,   -33,   -33,   -33,   661,   -83,   -83,   -33,   174,   -33,
     -33,   -33,   -33,   -83,   -83,   -33,   662,   647,   -33,   174,
      81,   663,    81,   680,   685,   666,   271,   -83,   -83,   681,
      81,    81,    81,   682,   683,   271,   271,   684,  -114,   668,
     174,   687,  -114,  -114,  -114,  -114,   -83,   -83,   689,  -114,
     698,    80,    80,    15,   551,   649,   174,   272,   670,    80,
     169,   456,   693,   316,   337,   255,    45,    46,    47,   677,
    -114,   550,    48,   691,   555,   558,     0,   272,  -114,   -83,
     -83,   692,    85,   321,   -83,   -83,    52,   569,    54,    55,
       0,   672,     0,    56,   -83,   -83,   674,     0,     0,   457,
       0,    61,   272,   554,   -73,   -73,   676,   256,   257,   258,
      47,     0,   150,    85,   259,    85,   -73,   -70,   -70,     0,
     -74,   -74,     0,   272,    85,    85,    85,     0,   260,   -70,
     261,   262,   -74,   -71,   -71,   263,   337,     0,     0,    80,
     316,     0,     0,   264,     0,   -71,   -75,   -75,     0,   446,
      81,    81,     0,   279,   280,   281,    47,     0,   -75,     0,
     282,     0,    80,    81,    80,     0,     0,     0,     0,     0,
     -72,   -72,    80,    80,    80,   272,   272,   272,   272,   480,
     338,   283,   -72,     0,     0,     0,     0,     0,     0,   284,
     489,   338,     0,     0,    79,     0,     0,     0,     0,   271,
       0,     0,     0,     0,     0,     0,     0,   317,   317,   317,
     317,   518,   338,     0,     0,     0,     0,    79,   270,   271,
       0,    79,     0,   338,   338,   338,   338,   541,   338,   467,
       0,     0,     0,   279,   280,   281,    47,     0,     0,     0,
     282,     0,     0,   272,   271,     0,   272,   272,   270,     0,
       0,     0,     0,     0,     0,     0,     0,   270,   270,   272,
       0,   283,     0,     0,     0,   271,     0,     0,     0,   284,
     366,   679,     0,    79,    79,     0,     0,     0,     0,     0,
       0,   168,     0,   107,     0,   315,   336,   256,   257,   258,
      47,     0,    80,    80,   259,     0,     0,     0,     0,     0,
       0,   366,     0,   366,     0,    80,     0,     0,   260,     0,
     261,   262,   366,   366,   366,   263,     0,   271,   271,   271,
     479,     0,   337,   264,     0,     0,     0,     0,     0,     0,
       0,   488,     0,   337,     0,     0,    78,   469,     0,     0,
       0,   279,   280,   281,    47,     0,     0,     0,   282,   316,
     316,   316,   517,     0,   337,     0,     0,     0,   336,    78,
     269,    79,   315,    78,     0,   337,   337,   337,   540,   283,
     337,   118,   119,   120,   121,   122,   123,   284,     0,     0,
       0,   -85,   -85,   -85,    79,   271,    79,     0,   271,   271,
     269,   -85,     0,   -85,    79,    79,    79,     0,     0,   269,
     269,   271,   118,   119,   120,   121,   122,   123,     0,     0,
       0,     0,   -85,   -85,   -85,    78,   167,     0,     0,   -33,
       0,   270,   -33,   -33,   -33,   -33,   -33,   314,   335,     0,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,
       0,   270,    81,   317,   -33,   -33,   -33,   -33,     0,     0,
       0,   -33,     0,   -33,   -33,   -33,   -33,     0,     0,   -33,
       0,     0,   -33,     0,     0,   557,   270,     0,     0,   256,
     257,   258,    47,    81,   150,    81,   259,     0,     0,     0,
       0,     0,     0,     0,    81,    81,    81,   270,     0,     0,
     260,     0,   261,   262,     0,     0,     0,   263,     0,     0,
     335,     0,   471,    78,   314,   264,   279,   280,   281,    47,
       0,     0,     0,   282,    79,    79,     0,     0,   134,     0,
       0,     0,   256,   257,   258,    47,    78,    79,    78,   259,
       0,     0,     0,     0,   283,     0,    78,    78,    78,   270,
     270,   478,   284,   260,   336,   261,   262,     0,     0,     0,
     263,     0,   487,     0,     0,   336,     0,     0,   264,     0,
       0,     0,     0,   269,     0,     0,     0,     0,     0,     0,
       0,   315,   315,   516,     0,     0,   336,     0,     0,     0,
       0,     0,     0,   269,    80,   316,     0,   336,   336,   539,
     475,     0,   336,     0,   256,   257,   258,    47,     0,     0,
       0,   259,     0,     0,     0,     0,     0,   270,   269,     0,
     270,   270,  -113,     0,     0,    80,     0,    80,     0,  -113,
    -113,     0,   263,   270,    77,     0,    80,    80,    80,   269,
     264,  -113,  -113,  -113,  -113,  -113,  -113,     0,     0,     0,
       0,  -113,  -113,  -113,     0,  -113,     0,    77,   268,     0,
    -113,    77,  -113,     0,     0,     0,    78,    78,     0,   493,
       0,     0,     0,   279,   280,   281,    47,     0,   495,    78,
     282,     0,   279,   280,   281,    47,     0,     0,   268,   282,
       0,   269,   477,     0,     0,     0,   335,   268,   268,     0,
       0,   283,     0,   486,     0,     0,     0,   335,     0,   284,
     283,     0,  -113,   166,     0,     0,     0,     0,   284,  -113,
    -113,     0,     0,   314,   515,   313,   334,     0,   335,     0,
       0,  -113,  -113,  -113,  -113,  -113,  -113,     0,     0,   335,
     538,  -113,  -113,  -113,   335,     0,     0,     0,     0,   300,
    -113,     0,  -113,   301,   302,   303,    47,     0,     0,   269,
     304,     0,   269,   269,     0,     0,     0,     0,     0,     0,
     266,     0,     0,     0,   305,   269,   306,   307,     0,   497,
       0,   308,     0,   279,   280,   281,    47,     0,   500,   309,
     282,     0,   279,   280,   281,    47,     0,     0,   334,   282,
     266,    77,   313,   140,     0,   146,   148,     0,     0,   266,
     266,   283,     0,     0,     0,     0,    79,   315,     0,   284,
     283,     0,     0,     0,    77,     0,    77,     0,   284,     0,
       0,     0,     0,     0,    77,    77,    77,   311,   332,   -30,
       0,     0,   -30,   -30,   -30,   -30,   -30,    79,     0,    79,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,    79,    79,
      79,   268,     0,     0,   -30,   -30,   -30,   -30,     0,     0,
       0,   -30,     0,   -30,   -30,   -30,   -30,     0,     0,   -30,
     220,   268,   -30,     0,   322,   323,   324,    47,     0,     0,
     380,   325,     0,     0,   256,   257,   258,    47,     0,     0,
       0,   259,     0,     0,     0,   326,   268,   327,   328,     0,
     332,     0,   329,     0,   311,   260,     0,   261,   262,     0,
     330,     0,   263,     0,     0,     0,     0,   268,     0,     0,
     264,     0,     0,     0,     0,     0,   392,     0,     0,     0,
     256,   257,   258,    47,     0,   447,   502,   259,     0,     0,
     279,   280,   281,    47,    77,    77,     0,   282,    78,   314,
       0,   260,     0,   261,   262,     0,     0,    77,   263,     0,
       0,     0,     0,   266,     0,     0,   264,     0,   283,   476,
       0,     0,     0,     0,   334,     0,   284,     0,     0,    78,
       0,    78,     0,   266,     0,   334,     0,     0,     0,     0,
      78,    78,    78,     0,     0,     0,     0,     0,    44,     0,
       0,   514,   252,    45,    46,    47,   334,     0,   266,    48,
     247,   248,   249,   250,    49,    50,    51,   537,     0,     0,
       0,     0,   334,    52,    53,    54,    55,     0,     0,   266,
      56,     0,    57,    58,    59,    60,     0,   268,    61,     0,
     268,   268,     0,     0,   -27,     0,     0,   -27,   -27,   -27,
     -27,   -27,     0,   268,     0,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,     0,     0,     0,     0,     0,     0,   -27,
     -27,   -27,   -27,   468,   470,   472,   -27,     0,   -27,   -27,
     -27,   -27,     0,     0,   -27,   411,   332,   -27,     0,   256,
     257,   258,    47,     0,     0,     0,   259,   332,     0,     0,
     494,   496,   498,     0,   501,   503,   505,     0,     0,     0,
     260,     0,   261,   262,     0,     0,     0,   263,   332,     0,
     523,   525,   527,     0,   504,   264,     0,     0,   279,   280,
     281,    47,     0,     0,   332,   282,   118,   119,   120,   121,
     122,   123,     0,     0,     0,     0,   -84,   -84,   -84,   266,
       0,     0,   266,   266,     0,   -28,   283,     0,   -28,   -28,
     -28,   -28,   -28,     0,   284,   266,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,     0,     0,     0,     0,     0,     0,
     -28,   -28,   -28,   -28,     0,     0,     0,   -28,   277,   -28,
     -28,   -28,   -28,     0,     0,   -28,     0,     0,   -28,     0,
     -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,     0,
     -87,   -87,   -87,     0,     0,     0,   -29,     0,     0,   -29,
     -29,   -29,   -29,   -29,     0,     0,     0,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,     0,    77,   313,     0,     0,
       0,   -29,   -29,   -29,   -29,   610,   612,   614,   -29,   277,
     -29,   -29,   -29,   -29,     0,     0,   -29,     0,     0,   -29,
       0,   -86,   -86,   -86,   -86,   -86,   -86,    77,     0,    77,
       0,   -86,   -86,   -86,     0,     0,     0,     0,    77,    77,
      77,     0,     0,   -32,     0,     0,   -32,   -32,   -32,   -32,
     -32,   631,   633,   635,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   637,   639,   641,     0,     0,     0,   -32,   -32,
     -32,   -32,     0,     0,     0,   -32,     0,   -32,   -32,   -32,
     -32,     0,     0,   -32,     0,   -31,   -32,     0,   -31,   -31,
     -31,   -31,   -31,     0,     0,     0,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,     0,     0,     0,     0,     0,   311,
     -31,   -31,   -31,   -31,     0,     0,     0,   -31,     0,   -31,
     -31,   -31,   -31,     0,     0,   -31,   -12,     0,   -31,   -12,
     -12,   -12,   -12,   -12,     0,     0,     0,   -12,   -12,   -12,
     -12,   -12,   -12,   -12,   -12,     0,     0,     0,     0,     0,
       0,   -12,   -12,   -12,   -12,     0,     0,     0,   -12,     0,
     -12,   -12,   -12,   -12,     0,     0,   -12,   -53,     0,   -12,
     -53,   -53,   -53,   -53,   -53,     0,     0,     0,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,     0,     0,     0,     0,
       0,     0,   -53,   -53,   -53,   -53,     0,     0,     0,   -53,
       0,   -53,   -53,   -53,   -53,     0,     0,   -53,   -66,     0,
     -53,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,
       0,     0,     0,   -66,   -66,   -66,   -66,     0,     0,     0,
     -66,     0,   -66,   -66,   -66,   -66,     0,     0,   -66,   -65,
       0,   -66,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,
       0,     0,     0,     0,   -65,   -65,   -65,   -65,     0,     0,
       0,   -65,     0,   -65,   -65,   -65,   -65,     0,     0,   -65,
     -34,     0,   -65,   -34,   -34,   -34,   -34,   -34,     0,     0,
       0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,
       0,     0,     0,     0,     0,   -34,   -34,   -34,   -34,     0,
       0,     0,   -34,     0,   -34,   -34,   -34,   -34,     0,     0,
     -34,   -61,     0,   -34,   -61,   -61,   -61,   -61,   -61,     0,
       0,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
       0,     0,     0,     0,     0,     0,   -61,   -61,   -61,   -61,
       0,     0,     0,   -61,     0,   -61,   -61,   -61,   -61,     0,
       0,   -61,   -55,     0,   -61,   -55,   -55,   -55,   -55,   -55,
       0,     0,     0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,     0,     0,     0,     0,     0,     0,   -55,   -55,   -55,
     -55,     0,     0,     0,   -55,     0,   -55,   -55,   -55,   -55,
       0,     0,   -55,   -56,     0,   -55,   -56,   -56,   -56,   -56,
     -56,     0,     0,     0,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,     0,     0,     0,     0,     0,     0,   -56,   -56,
     -56,   -56,     0,     0,     0,   -56,     0,   -56,   -56,   -56,
     -56,     0,     0,   -56,   -54,     0,   -56,   -54,   -54,   -54,
     -54,   -54,     0,     0,     0,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,     0,     0,     0,     0,     0,     0,   -54,
     -54,   -54,   -54,     0,     0,     0,   -54,     0,   -54,   -54,
     -54,   -54,     0,     0,   -54,   -24,     0,   -54,   -24,   -24,
     -24,   -24,   -24,     0,     0,     0,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,     0,     0,     0,     0,     0,     0,
     -24,   -24,   -24,   -24,     0,     0,     0,   -24,     0,   -24,
     -24,   -24,   -24,     0,     0,   -24,    -9,     0,   -24,    -9,
      -9,    -9,    -9,    -9,     0,     0,     0,    -9,    -9,    -9,
      -9,    -9,    -9,    -9,    -9,     0,     0,     0,     0,     0,
       0,    -9,    -9,    -9,    -9,     0,     0,     0,    -9,     0,
      -9,    -9,    -9,    -9,     0,     0,    -9,   -47,     0,    -9,
     -47,   -47,   -47,   -47,   -47,     0,     0,     0,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,     0,     0,     0,     0,
       0,     0,   -47,   -47,   -47,   -47,     0,     0,     0,   -47,
       0,   -47,   -47,   -47,   -47,     0,     0,   -47,   -40,     0,
     -47,   -40,   -40,   -40,   -40,   -40,     0,     0,     0,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,     0,     0,     0,
       0,     0,     0,   -40,   -40,   -40,   -40,     0,     0,     0,
     -40,     0,   -40,   -40,   -40,   -40,     0,     0,   -40,   -36,
       0,   -40,   -36,   -36,   -36,   -36,   -36,     0,     0,     0,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,     0,
       0,     0,     0,     0,   -36,   -36,   -36,   -36,     0,     0,
       0,   -36,     0,   -36,   -36,   -36,   -36,     0,     0,   -36,
     -35,     0,   -36,   -35,   -35,   -35,   -35,   -35,     0,     0,
       0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,
       0,     0,     0,     0,     0,   -35,   -35,   -35,   -35,     0,
       0,     0,   -35,     0,   -35,   -35,   -35,   -35,     0,     0,
     -35,   -41,     0,   -35,   -41,   -41,   -41,   -41,   -41,     0,
       0,     0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
       0,     0,     0,     0,     0,     0,   -41,   -41,   -41,   -41,
       0,     0,     0,   -41,     0,   -41,   -41,   -41,   -41,     0,
       0,   -41,   -38,     0,   -41,   -38,   -38,   -38,   -38,   -38,
       0,     0,     0,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,     0,     0,     0,     0,     0,     0,   -38,   -38,   -38,
     -38,     0,     0,     0,   -38,     0,   -38,   -38,   -38,   -38,
       0,     0,   -38,   -37,     0,   -38,   -37,   -37,   -37,   -37,
     -37,     0,     0,     0,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,     0,     0,     0,     0,     0,     0,   -37,   -37,
     -37,   -37,     0,     0,     0,   -37,     0,   -37,   -37,   -37,
     -37,     0,     0,   -37,   -42,     0,   -37,   -42,   -42,   -42,
     -42,   -42,     0,     0,     0,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,     0,     0,     0,     0,     0,     0,   -42,
     -42,   -42,   -42,     0,     0,     0,   -42,     0,   -42,   -42,
     -42,   -42,     0,     0,   -42,   -39,     0,   -42,   -39,   -39,
     -39,   -39,   -39,     0,     0,     0,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,     0,     0,     0,     0,     0,     0,
     -39,   -39,   -39,   -39,     0,     0,     0,   -39,     0,   -39,
     -39,   -39,   -39,     0,     0,   -39,   -46,     0,   -39,   -46,
     -46,   -46,   -46,   -46,     0,     0,     0,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,     0,     0,     0,     0,     0,
       0,   -46,   -46,   -46,   -46,     0,     0,     0,   -46,     0,
     -46,   -46,   -46,   -46,     0,     0,   -46,   -48,     0,   -46,
     686,   -48,   -48,   -48,   -48,     0,     0,     0,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,     0,     0,     0,     0,
       0,     0,   -48,   -48,   -48,   -48,     0,     0,     0,   -48,
       0,   -48,   -48,   -48,   -48,     0,     0,   -48,   -11,     0,
     -48,   -11,   -11,   -11,   -11,   -11,     0,     0,     0,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,     0,     0,     0,
       0,     0,     0,   -11,   -11,   -11,   -11,     0,     0,     0,
     -11,     0,   -11,   -11,   -11,   -11,     0,     0,   -11,   -62,
       0,   -11,   -62,   -62,   -62,   -62,   -62,     0,     0,     0,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,
       0,     0,     0,     0,   -62,   -62,   -62,   -62,     0,     0,
       0,   -62,     0,   -62,   -62,   -62,   -62,     0,     0,   -62,
     -63,     0,   -62,   -63,   -63,   -63,   -63,   -63,     0,     0,
       0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,
       0,     0,     0,     0,     0,   -63,   -63,   -63,   -63,     0,
       0,     0,   -63,     0,   -63,   -63,   -63,   -63,     0,     0,
     -63,   -64,     0,   -63,   -64,   -64,   -64,   -64,   -64,     0,
       0,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
       0,     0,     0,     0,     0,     0,   -64,   -64,   -64,   -64,
       0,     0,     0,   -64,     0,   -64,   -64,   -64,   -64,     0,
       0,   -64,   -58,     0,   -64,   -58,   -58,   -58,   -58,   -58,
       0,     0,     0,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,     0,     0,     0,     0,     0,     0,   -58,   -58,   -58,
     -58,     0,     0,     0,   -58,     0,   -58,   -58,   -58,   -58,
       0,     0,   -58,   -60,     0,   -58,   -60,   -60,   -60,   -60,
     -60,     0,     0,     0,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,     0,     0,     0,     0,     0,     0,   -60,   -60,
     -60,   -60,     0,     0,     0,   -60,     0,   -60,   -60,   -60,
     -60,     0,     0,   -60,   -50,     0,   -60,   -50,   -50,   -50,
     -50,   -50,     0,     0,     0,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,     0,     0,     0,     0,     0,     0,   -50,
     -50,   -50,   -50,     0,     0,     0,   -50,     0,   -50,   -50,
     -50,   -50,     0,     0,   -50,   -44,     0,   -50,   -44,   -44,
     -44,   -44,   -44,     0,     0,     0,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,     0,     0,     0,     0,     0,     0,
     -44,   -44,   -44,   -44,     0,     0,     0,   -44,     0,   -44,
     -44,   -44,   -44,     0,     0,   -44,    44,     0,   -44,     0,
     252,    45,    46,    47,     0,     0,     0,    48,   247,   248,
     249,   250,    49,    50,    51,     0,     0,     0,     0,     0,
       0,    52,    53,    54,    55,     0,     0,     0,    56,     0,
      57,    58,    59,    60,     0,     0,    61,   -30,     0,   -26,
       0,   -30,   -30,   -30,   -30,     0,     0,     0,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,     0,     0,     0,     0,
       0,     0,   -30,   -30,   -30,   -30,     0,     0,     0,   -30,
       0,   -30,   -30,   -30,   -30,     0,     0,   -30,   -27,     0,
     -30,     0,   -27,   -27,   -27,   -27,     0,     0,     0,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,     0,     0,     0,
       0,     0,     0,   -27,   -27,   -27,   -27,     0,     0,     0,
     -27,     0,   -27,   -27,   -27,   -27,     0,     0,   -27,   -28,
       0,   -27,     0,   -28,   -28,   -28,   -28,     0,     0,     0,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,     0,     0,
       0,     0,     0,     0,   -28,   -28,   -28,   -28,     0,     0,
       0,   -28,     0,   -28,   -28,   -28,   -28,     0,     0,   -28,
     -29,     0,   -28,     0,   -29,   -29,   -29,   -29,     0,     0,
       0,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,     0,
       0,     0,     0,     0,     0,   -29,   -29,   -29,   -29,     0,
       0,     0,   -29,     0,   -29,   -29,   -29,   -29,     0,     0,
     -29,   -32,     0,   -29,     0,   -32,   -32,   -32,   -32,     0,
       0,     0,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
       0,     0,     0,     0,     0,     0,   -32,   -32,   -32,   -32,
       0,     0,     0,   -32,     0,   -32,   -32,   -32,   -32,     0,
       0,   -32,   -31,     0,   -32,     0,   -31,   -31,   -31,   -31,
       0,     0,     0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,     0,     0,     0,     0,     0,     0,   -31,   -31,   -31,
     -31,     0,     0,     0,   -31,     0,   -31,   -31,   -31,   -31,
       0,     0,   -31,   -53,     0,   -31,     0,   -53,   -53,   -53,
     -53,     0,     0,     0,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,     0,     0,     0,     0,     0,     0,   -53,   -53,
     -53,   -53,     0,     0,     0,   -53,     0,   -53,   -53,   -53,
     -53,     0,     0,   -53,   -66,     0,   -53,     0,   -66,   -66,
     -66,   -66,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,     0,     0,   -66,
     -66,   -66,   -66,     0,     0,     0,   -66,     0,   -66,   -66,
     -66,   -66,     0,     0,   -66,   -65,     0,   -66,     0,   -65,
     -65,   -65,   -65,     0,     0,     0,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,     0,     0,     0,     0,     0,     0,
     -65,   -65,   -65,   -65,     0,     0,     0,   -65,     0,   -65,
     -65,   -65,   -65,     0,     0,   -65,   -34,     0,   -65,     0,
     -34,   -34,   -34,   -34,     0,     0,     0,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,     0,     0,     0,     0,     0,
       0,   -34,   -34,   -34,   -34,     0,     0,     0,   -34,     0,
     -34,   -34,   -34,   -34,     0,     0,   -34,   -61,     0,   -34,
       0,   -61,   -61,   -61,   -61,     0,     0,     0,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,     0,     0,     0,     0,
       0,     0,   -61,   -61,   -61,   -61,     0,     0,     0,   -61,
       0,   -61,   -61,   -61,   -61,     0,     0,   -61,   -55,     0,
     -61,     0,   -55,   -55,   -55,   -55,     0,     0,     0,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,     0,     0,     0,
       0,     0,     0,   -55,   -55,   -55,   -55,     0,     0,     0,
     -55,     0,   -55,   -55,   -55,   -55,     0,     0,   -55,   -56,
       0,   -55,     0,   -56,   -56,   -56,   -56,     0,     0,     0,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,     0,     0,
       0,     0,     0,     0,   -56,   -56,   -56,   -56,     0,     0,
       0,   -56,     0,   -56,   -56,   -56,   -56,     0,     0,   -56,
     -54,     0,   -56,     0,   -54,   -54,   -54,   -54,     0,     0,
       0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,     0,
       0,     0,     0,     0,     0,   -54,   -54,   -54,   -54,     0,
       0,     0,   -54,     0,   -54,   -54,   -54,   -54,     0,     0,
     -54,   -47,     0,   -54,     0,   -47,   -47,   -47,   -47,     0,
       0,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
       0,     0,     0,     0,     0,     0,   -47,   -47,   -47,   -47,
       0,     0,     0,   -47,     0,   -47,   -47,   -47,   -47,     0,
       0,   -47,   -40,     0,   -47,     0,   -40,   -40,   -40,   -40,
       0,     0,     0,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,     0,     0,     0,     0,     0,     0,   -40,   -40,   -40,
     -40,     0,     0,     0,   -40,     0,   -40,   -40,   -40,   -40,
       0,     0,   -40,   -36,     0,   -40,     0,   -36,   -36,   -36,
     -36,     0,     0,     0,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,     0,     0,     0,     0,     0,     0,   -36,   -36,
     -36,   -36,     0,     0,     0,   -36,     0,   -36,   -36,   -36,
     -36,     0,     0,   -36,   -35,     0,   -36,     0,   -35,   -35,
     -35,   -35,     0,     0,     0,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,     0,     0,     0,     0,     0,     0,   -35,
     -35,   -35,   -35,     0,     0,     0,   -35,     0,   -35,   -35,
     -35,   -35,     0,     0,   -35,   -41,     0,   -35,     0,   -41,
     -41,   -41,   -41,     0,     0,     0,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,     0,     0,     0,     0,     0,     0,
     -41,   -41,   -41,   -41,     0,     0,     0,   -41,     0,   -41,
     -41,   -41,   -41,     0,     0,   -41,   -38,     0,   -41,     0,
     -38,   -38,   -38,   -38,     0,     0,     0,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,     0,     0,     0,     0,     0,
       0,   -38,   -38,   -38,   -38,     0,     0,     0,   -38,     0,
     -38,   -38,   -38,   -38,     0,     0,   -38,   -37,     0,   -38,
       0,   -37,   -37,   -37,   -37,     0,     0,     0,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,     0,     0,     0,     0,
       0,     0,   -37,   -37,   -37,   -37,     0,     0,     0,   -37,
       0,   -37,   -37,   -37,   -37,     0,     0,   -37,   -42,     0,
     -37,     0,   -42,   -42,   -42,   -42,     0,     0,     0,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,     0,     0,
       0,     0,     0,   -42,   -42,   -42,   -42,     0,     0,     0,
     -42,     0,   -42,   -42,   -42,   -42,     0,     0,   -42,   -39,
       0,   -42,     0,   -39,   -39,   -39,   -39,     0,     0,     0,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,     0,     0,
       0,     0,     0,     0,   -39,   -39,   -39,   -39,     0,     0,
       0,   -39,     0,   -39,   -39,   -39,   -39,     0,     0,   -39,
     -46,     0,   -39,     0,   -46,   -46,   -46,   -46,     0,     0,
       0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,
       0,     0,     0,     0,     0,   -46,   -46,   -46,   -46,     0,
       0,     0,   -46,     0,   -46,   -46,   -46,   -46,     0,     0,
     -46,   -62,     0,   -46,     0,   -62,   -62,   -62,   -62,     0,
       0,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
       0,     0,     0,     0,     0,     0,   -62,   -62,   -62,   -62,
       0,     0,     0,   -62,     0,   -62,   -62,   -62,   -62,     0,
       0,   -62,   -63,     0,   -62,     0,   -63,   -63,   -63,   -63,
       0,     0,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,     0,     0,     0,     0,     0,     0,   -63,   -63,   -63,
     -63,     0,     0,     0,   -63,     0,   -63,   -63,   -63,   -63,
       0,     0,   -63,   -64,     0,   -63,     0,   -64,   -64,   -64,
     -64,     0,     0,     0,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,     0,     0,     0,     0,     0,     0,   -64,   -64,
     -64,   -64,     0,     0,     0,   -64,     0,   -64,   -64,   -64,
     -64,     0,     0,   -64,   -58,     0,   -64,     0,   -58,   -58,
     -58,   -58,     0,     0,     0,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,     0,     0,     0,     0,     0,     0,   -58,
     -58,   -58,   -58,     0,     0,     0,   -58,     0,   -58,   -58,
     -58,   -58,     0,     0,   -58,   -60,     0,   -58,     0,   -60,
     -60,   -60,   -60,     0,     0,     0,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,     0,     0,     0,     0,     0,     0,
     -60,   -60,   -60,   -60,     0,     0,     0,   -60,     0,   -60,
     -60,   -60,   -60,     0,     0,   -60,   -50,     0,   -60,     0,
     -50,   -50,   -50,   -50,     0,     0,     0,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,     0,     0,     0,     0,     0,
       0,   -50,   -50,   -50,   -50,     0,     0,     0,   -50,     0,
     -50,   -50,   -50,   -50,     0,     0,   -50,   -44,     0,   -50,
       0,   -44,   -44,   -44,   -44,     0,     0,     0,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,     0,     0,     0,     0,
       0,     0,   -44,   -44,   -44,   -44,     0,     0,     0,   -44,
       0,   -44,   -44,   -44,   -44,     0,     0,   -44,   -12,     0,
     -44,     0,   -12,   -12,   -12,   -12,     0,     0,     0,   -12,
     -12,   -12,   -12,   -12,   -12,   -12,   -12,     0,     0,     0,
       0,     0,     0,   -12,   -12,   -12,   -12,     0,     0,     0,
     -12,     0,   -12,   -12,   -12,   -12,     0,     0,   -12,   -52,
       0,   -12,     0,   -52,   -52,   -52,   -52,     0,     0,     0,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,     0,     0,
       0,     0,     0,     0,   -52,   -52,   -52,   -52,     0,     0,
       0,   -52,     0,   -52,   -52,   -52,   -52,     0,     0,   -52,
     -51,     0,   -52,     0,   -51,   -51,   -51,   -51,     0,     0,
       0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,     0,
       0,     0,     0,     0,     0,   -51,   -51,   -51,   -51,     0,
       0,     0,   -51,     0,   -51,   -51,   -51,   -51,     0,     0,
     -51,    -9,     0,   -51,     0,    -9,    -9,    -9,    -9,     0,
       0,     0,    -9,    -9,    -9,    -9,    -9,    -9,    -9,    -9,
       0,     0,     0,     0,     0,     0,    -9,    -9,    -9,    -9,
       0,     0,     0,    -9,     0,    -9,    -9,    -9,    -9,     0,
       0,    -9,   -24,     0,    -9,     0,   -24,   -24,   -24,   -24,
       0,     0,     0,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,     0,     0,     0,     0,     0,     0,   -24,   -24,   -24,
     -24,     0,     0,     0,   -24,     0,   -24,   -24,   -24,   -24,
       0,     0,   -24,   -11,     0,   -24,     0,   -11,   -11,   -11,
     -11,     0,     0,     0,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,     0,     0,     0,     0,     0,     0,   -11,   -11,
     -11,   -11,     0,     0,     0,   -11,     0,   -11,   -11,   -11,
     -11,     0,     0,   -11,   -45,     0,   -11,     0,   -45,   -45,
     -45,   -45,     0,     0,     0,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,     0,     0,     0,     0,     0,     0,   -45,
     -45,   -45,   -45,     0,     0,     0,   -45,     0,   -45,   -45,
     -45,   -45,     0,   350,   -45,     0,   -45,   252,    45,    46,
      47,     0,     0,     0,    48,   247,   248,   249,   250,   351,
     352,   353,     0,     0,     0,     0,     0,     0,    52,    53,
      54,    55,     0,     0,     0,    56,     0,   354,   355,   356,
     357,     0,    44,    61,     0,   358,   252,    45,    46,    47,
       0,     0,     0,    48,   247,   248,   249,   250,    49,    50,
      51,     0,     0,     0,     0,     0,     0,    52,    53,    54,
      55,     0,     0,     0,    56,     0,    57,    58,    59,    60,
       0,   -57,    61,     0,   370,   -57,   -57,   -57,   -57,     0,
       0,     0,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
       0,     0,     0,     0,     0,     0,   -57,   -57,   -57,   -57,
       0,     0,     0,   -57,     0,   -57,   -57,   -57,   -57,     0,
     -59,   -57,     0,   -57,   -59,   -59,   -59,   -59,     0,     0,
       0,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,     0,
       0,     0,     0,     0,     0,   -59,   -59,   -59,   -59,     0,
       0,     0,   -59,     0,   -59,   -59,   -59,   -59,     0,   -49,
     -59,     0,   -59,   -49,   -49,   -49,   -49,     0,     0,     0,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,     0,
       0,     0,     0,     0,   -49,   -49,   -49,   -49,     0,     0,
       0,   -49,     0,   -49,   -49,   -49,   -49,     0,   427,   -49,
       0,   -49,   256,   257,   258,    47,     0,   549,     0,   259,
       0,   256,   257,   258,    47,     0,     0,     0,   259,     0,
       0,     0,     0,   260,     0,   261,   262,     0,     0,     0,
     263,     0,   260,     0,   261,   262,     0,   475,   264,   263,
       0,   256,   257,   258,    47,     0,   300,   264,   259,     0,
     301,   302,   303,    47,     0,     0,     0,   304,     0,     0,
       0,     0,   260,     0,   261,   262,     0,     0,   522,   263,
       0,     0,   279,   280,   281,    47,     0,   264,   308,   282,
       0,     0,     0,   524,     0,     0,   309,   279,   280,   281,
      47,     0,   526,     0,   282,     0,   279,   280,   281,    47,
     283,     0,     0,   282,     0,   536,     0,     0,   284,   322,
     323,   324,    47,     0,   609,   283,   325,     0,   279,   280,
     281,    47,     0,   284,   283,   282,     0,     0,     0,   611,
       0,     0,   284,   279,   280,   281,    47,   329,     0,     0,
     282,     0,     0,     0,   613,   330,   283,     0,   279,   280,
     281,    47,     0,   630,   284,   282,     0,   279,   280,   281,
      47,   283,     0,     0,   282,     0,   632,     0,     0,   284,
     279,   280,   281,    47,     0,   634,   283,   282,     0,   279,
     280,   281,    47,     0,   284,   283,   282,     0,     0,     0,
     636,     0,     0,   284,   279,   280,   281,    47,   283,     0,
       0,   282,     0,     0,     0,   638,   284,   283,     0,   279,
     280,   281,    47,     0,   640,   284,   282,     0,   279,   280,
     281,    47,   283,     0,     0,   282,     0,     0,  -116,     0,
     284,     0,     0,     0,     0,  -116,  -116,   283,     0,     0,
       0,     0,     0,     0,     0,   284,   283,  -116,  -116,  -116,
    -116,  -116,  -116,  -118,   284,     0,     0,  -116,  -116,  -116,
    -118,  -118,     0,     0,     0,     0,  -116,     0,     0,     0,
       0,     0,  -118,  -118,  -118,  -118,  -118,  -118,   -89,     0,
       0,     0,  -118,  -118,  -118,   -89,   126,     0,     0,     0,
       0,  -118,     0,     0,     0,     0,     0,   -89,   -89,   -89,
     -89,   -89,   -89,   -91,     0,     0,     0,   -89,   -89,   -89,
     -91,   -91,     0,     0,     0,     0,   -89,     0,     0,     0,
       0,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -92,     0,
       0,     0,   -91,   -91,   -91,   -92,   -92,     0,     0,     0,
       0,   -91,     0,     0,     0,     0,     0,   -92,   -92,   -92,
     -92,   -92,   -92,  -100,     0,     0,     0,   -92,   -92,   -92,
    -100,  -100,     0,     0,     0,     0,   -92,     0,     0,     0,
       0,     0,  -100,  -100,  -100,  -100,  -100,  -100,   -93,     0,
       0,     0,  -100,  -100,  -100,   -93,   -93,     0,     0,     0,
       0,  -100,     0,     0,     0,     0,     0,   -93,   -93,   -93,
     -93,   -93,   -93,   -99,     0,     0,     0,   -93,   -93,   -93,
     -99,   -99,     0,     0,     0,     0,   -93,     0,     0,     0,
       0,     0,   -99,   -99,   -99,   -99,   -99,   -99,   -94,     0,
       0,     0,   -99,   -99,   -99,   -94,   -94,     0,     0,     0,
       0,   -99,     0,     0,     0,     0,     0,   -94,   -94,   -94,
     -94,   -94,   -94,   -98,     0,     0,     0,   -94,   -94,   -94,
     -98,   -98,     0,     0,     0,     0,   -94,     0,     0,     0,
       0,     0,   -98,   -98,   -98,   -98,   -98,   -98,  -102,     0,
       0,     0,   -98,   -98,   -98,  -102,  -102,     0,     0,     0,
       0,   -98,     0,     0,     0,     0,     0,  -102,  -102,  -102,
    -102,  -102,  -102,  -101,     0,     0,     0,  -102,  -102,  -102,
    -101,  -101,     0,     0,     0,     0,  -102,     0,     0,     0,
       0,     0,  -101,  -101,  -101,  -101,  -101,  -101,   -88,     0,
       0,     0,  -101,  -101,  -101,   -88,   126,     0,     0,     0,
       0,  -101,     0,     0,     0,     0,     0,   -88,   -88,   -88,
     -88,   -88,   -88,   -90,     0,     0,     0,   -88,   -88,   -88,
     -90,   -90,     0,     0,     0,     0,   -88,     0,     0,     0,
       0,     0,   -90,   -90,   -90,   -90,   -90,   -90,   -96,     0,
       0,     0,   -90,   -90,   -90,   -96,   -96,     0,     0,     0,
       0,   -90,     0,     0,     0,     0,     0,   -96,   -96,   -96,
     -96,   -96,   -96,   -97,     0,     0,     0,   -96,   -96,   -96,
     -97,   -97,     0,     0,     0,     0,   -96,     0,     0,     0,
       0,     0,   -97,   -97,   -97,   -97,   -97,   -97,   -95,     0,
       0,     0,   -97,   -97,   -97,   -95,   -95,     0,     0,     0,
       0,   -97,     0,     0,     0,     0,     0,   -95,   -95,   -95,
     -95,   -95,   -95,  -113,     0,     0,     0,   -95,   -95,   -95,
    -113,  -113,     0,     0,     0,     0,   -95,     0,     0,     0,
       0,     0,  -113,  -113,  -113,  -113,  -113,  -113,   -87,     0,
       0,     0,  -113,  -113,  -113,   277,     0,     0,     0,     0,
       0,  -113,     0,     0,     0,     0,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -86,     0,     0,     0,   -87,   -87,   -87,
     277,     0,     0,     0,     0,     0,   -87,     0,     0,     0,
       0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -84,     0,
       0,     0,   -86,   -86,   -86,     0,     0,     0,     0,     0,
       0,   -86,     0,     0,     0,     0,     0,   118,   119,   120,
     121,   122,   123,     0,     0,  -113,  -113,   -84,   -84,   -84,
       0,     0,     0,     0,     0,     0,   -84,  -113,  -113,  -113,
    -113,  -113,  -113,     0,     0,     0,     0,  -113,  -113,  -113,
     -99,   -99,     0,     0,     0,     0,     0,  -113,  -113,  -113,
       0,     0,   -99,   -99,   -99,   -99,   -99,   -99,     0,     0,
       0,     0,   -99,   -99,   -99,   -99,   -99,     0,     0,     0,
       0,     0,   -99,   435,   -99,     0,     0,   -99,   -99,   -99,
     -99,   -99,   -99,     0,     0,     0,     0,   -99,   -99,   -99,
    -117,  -117,     0,     0,     0,     0,     0,     0,   387,   -99,
       0,     0,  -117,  -117,  -117,  -117,  -117,  -117,     0,     0,
       0,     0,  -117,  -117,  -117,  -116,  -116,     0,     0,     0,
       0,     0,  -117,     0,  -117,     0,     0,  -116,  -116,  -116,
    -116,  -116,  -116,     0,     0,     0,     0,  -116,  -116,  -116,
    -118,  -118,     0,     0,     0,     0,     0,  -116,     0,  -116,
       0,     0,  -118,  -118,  -118,  -118,  -118,  -118,     0,     0,
       0,     0,  -118,  -118,  -118,   -89,   126,     0,     0,     0,
       0,     0,  -118,     0,  -118,     0,     0,   -89,   -89,   -89,
     -89,   -89,   -89,     0,     0,     0,     0,   -89,   -89,   -89,
     -91,   -91,     0,     0,     0,     0,     0,   -89,     0,   -89,
       0,     0,   -91,   -91,   -91,   -91,   -91,   -91,     0,     0,
       0,     0,   -91,   -91,   -91,   -92,   -92,     0,     0,     0,
       0,     0,   -91,     0,   -91,     0,     0,   -92,   -92,   -92,
     -92,   -92,   -92,     0,     0,     0,     0,   -92,   -92,   -92,
    -100,  -100,     0,     0,     0,     0,     0,   -92,     0,   -92,
       0,     0,  -100,  -100,  -100,  -100,  -100,  -100,     0,     0,
       0,     0,  -100,  -100,  -100,  -113,  -113,     0,     0,     0,
       0,     0,  -100,     0,  -100,     0,     0,  -113,  -113,  -113,
    -113,  -113,  -113,     0,     0,     0,     0,  -113,  -113,  -113,
     -93,   -93,     0,     0,     0,     0,     0,  -113,     0,  -113,
       0,     0,   -93,   -93,   -93,   -93,   -93,   -93,     0,     0,
       0,     0,   -93,   -93,   -93,   -99,   -99,     0,     0,     0,
       0,     0,   -93,     0,   -93,     0,     0,   -99,   -99,   -99,
     -99,   -99,   -99,     0,     0,     0,     0,   -99,   -99,   -99,
     -94,   -94,     0,     0,     0,     0,     0,   -99,     0,   -99,
       0,     0,   -94,   -94,   -94,   -94,   -94,   -94,     0,     0,
       0,     0,   -94,   -94,   -94,   -98,   -98,     0,     0,     0,
       0,     0,   -94,     0,   -94,     0,     0,   -98,   -98,   -98,
     -98,   -98,   -98,     0,     0,     0,     0,   -98,   -98,   -98,
    -102,  -102,     0,     0,     0,     0,     0,   -98,     0,   -98,
       0,     0,  -102,  -102,  -102,  -102,  -102,  -102,     0,     0,
       0,     0,  -102,  -102,  -102,  -101,  -101,     0,     0,     0,
       0,     0,  -102,     0,  -102,     0,     0,  -101,  -101,  -101,
    -101,  -101,  -101,     0,     0,     0,     0,  -101,  -101,  -101,
     -88,   126,     0,     0,     0,     0,     0,  -101,     0,  -101,
       0,     0,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,
       0,     0,   -88,   -88,   -88,   -90,   -90,     0,     0,     0,
       0,     0,   -88,     0,   -88,     0,     0,   -90,   -90,   -90,
     -90,   -90,   -90,     0,     0,     0,     0,   -90,   -90,   -90,
     -96,   -96,     0,     0,     0,     0,     0,   -90,     0,   -90,
       0,     0,   -96,   -96,   -96,   -96,   -96,   -96,     0,     0,
       0,     0,   -96,   -96,   -96,   -97,   -97,     0,     0,     0,
       0,     0,   -96,     0,   -96,     0,     0,   -97,   -97,   -97,
     -97,   -97,   -97,     0,     0,     0,     0,   -97,   -97,   -97,
     -95,   -95,     0,     0,     0,     0,     0,   -97,     0,   -97,
       0,     0,   -95,   -95,   -95,   -95,   -95,   -95,     0,     0,
       0,     0,   -95,   -95,   -95,  -117,  -117,     0,     0,     0,
       0,     0,   -95,     0,   -95,     0,     0,  -117,  -117,  -117,
    -117,  -117,  -117,     0,     0,     0,     0,  -117,  -117,  -117,
    -116,  -116,     0,     0,     0,     0,     0,     0,     0,  -117,
       0,     0,  -116,  -116,  -116,  -116,  -116,  -116,     0,     0,
       0,     0,  -116,  -116,  -116,  -118,  -118,     0,     0,     0,
       0,     0,     0,     0,  -116,     0,     0,  -118,  -118,  -118,
    -118,  -118,  -118,     0,     0,     0,     0,  -118,  -118,  -118,
     -89,   126,     0,     0,     0,     0,     0,     0,     0,  -118,
       0,     0,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,
       0,     0,   -89,   -89,   -89,   -91,   -91,     0,     0,     0,
       0,     0,     0,     0,   -89,     0,     0,   -91,   -91,   -91,
     -91,   -91,   -91,     0,     0,     0,     0,   -91,   -91,   -91,
     -92,   -92,     0,     0,     0,     0,     0,     0,     0,   -91,
       0,     0,   -92,   -92,   -92,   -92,   -92,   -92,     0,     0,
       0,     0,   -92,   -92,   -92,  -100,  -100,     0,     0,     0,
       0,     0,     0,     0,   -92,     0,     0,  -100,  -100,  -100,
    -100,  -100,  -100,     0,     0,     0,     0,  -100,  -100,  -100,
     277,     0,     0,     0,     0,     0,     0,     0,     0,  -100,
       0,     0,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,
       0,     0,   -87,   -87,   -87,  -113,  -113,     0,     0,     0,
       0,     0,   -87,     0,   -87,     0,     0,  -113,  -113,  -113,
    -113,  -113,  -113,     0,     0,     0,     0,  -113,  -113,  -113,
     -93,   -93,     0,     0,     0,     0,     0,     0,     0,  -113,
       0,     0,   -93,   -93,   -93,   -93,   -93,   -93,     0,     0,
       0,     0,   -93,   -93,   -93,   -99,   -99,     0,     0,     0,
       0,     0,     0,     0,   -93,     0,     0,   -99,   -99,   -99,
     -99,   -99,   -99,     0,     0,     0,     0,   -99,   -99,   -99,
     -94,   -94,     0,     0,     0,     0,     0,     0,     0,   -99,
       0,     0,   -94,   -94,   -94,   -94,   -94,   -94,     0,     0,
       0,     0,   -94,   -94,   -94,   -98,   -98,     0,     0,     0,
       0,     0,     0,     0,   -94,     0,     0,   -98,   -98,   -98,
     -98,   -98,   -98,     0,     0,     0,     0,   -98,   -98,   -98,
    -102,  -102,     0,     0,     0,     0,     0,     0,     0,   -98,
       0,     0,  -102,  -102,  -102,  -102,  -102,  -102,     0,     0,
       0,     0,  -102,  -102,  -102,  -101,  -101,     0,     0,     0,
       0,     0,     0,     0,  -102,     0,     0,  -101,  -101,  -101,
    -101,  -101,  -101,     0,     0,     0,     0,  -101,  -101,  -101,
     -88,   126,     0,     0,     0,     0,     0,     0,     0,  -101,
       0,     0,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,
       0,     0,   -88,   -88,   -88,   -90,   -90,     0,     0,     0,
       0,     0,     0,     0,   -88,     0,     0,   -90,   -90,   -90,
     -90,   -90,   -90,     0,     0,     0,     0,   -90,   -90,   -90,
     -96,   -96,     0,     0,     0,     0,     0,     0,     0,   -90,
       0,     0,   -96,   -96,   -96,   -96,   -96,   -96,     0,     0,
       0,     0,   -96,   -96,   -96,   277,     0,     0,     0,     0,
       0,     0,     0,     0,   -96,     0,     0,   -86,   -86,   -86,
     -86,   -86,   -86,     0,     0,     0,     0,   -86,   -86,   -86,
     -97,   -97,     0,     0,     0,     0,     0,   -86,     0,   -86,
       0,     0,   -97,   -97,   -97,   -97,   -97,   -97,     0,     0,
       0,     0,   -97,   -97,   -97,   -95,   -95,     0,     0,     0,
       0,     0,     0,     0,   -97,     0,     0,   -95,   -95,   -95,
     -95,   -95,   -95,     0,     0,     0,     0,   -95,   -95,   -95,
     277,     0,     0,     0,     0,     0,     0,     0,     0,   -95,
       0,     0,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,
       0,     0,   -87,   -87,   -87,   277,     0,     0,     0,     0,
       0,     0,     0,     0,   -87,     0,     0,   -86,   -86,   -86,
     -86,   -86,   -86,     0,     0,     0,     0,   -86,   -86,   -86,
    -113,  -113,     0,     0,     0,     0,     0,     0,     0,   -86,
       0,     0,  -113,  -113,  -113,  -113,  -113,  -113,     0,     0,
       0,     0,  -113,  -113,  -113,   -99,   -99,     0,     0,     0,
       0,  -113,     0,  -113,     0,     0,     0,   -99,   -99,   -99,
     -99,   -99,   -99,     0,     0,     0,     0,   -99,   -99,   -99,
    -113,  -113,     0,     0,     0,     0,   -99,     0,   419,     0,
       0,     0,  -113,  -113,  -113,  -113,  -113,  -113,     0,     0,
       0,     0,  -113,  -113,  -113,   -99,   -99,     0,     0,     0,
       0,     0,     0,  -113,     0,     0,     0,   -99,   -99,   -99,
     -99,   -99,   -99,     0,     0,     0,     0,   -99,   -99,   -99,
    -117,  -117,     0,     0,     0,     0,     0,     0,   398,     0,
       0,     0,  -117,  -117,  -117,  -117,  -117,  -117,     0,     0,
    -116,  -116,  -117,  -117,  -117,     0,     0,     0,     0,     0,
       0,  -117,  -116,  -116,  -116,  -116,  -116,  -116,     0,     0,
    -118,  -118,  -116,  -116,  -116,     0,     0,     0,     0,     0,
       0,  -116,  -118,  -118,  -118,  -118,  -118,  -118,     0,     0,
     -89,   126,  -118,  -118,  -118,     0,     0,     0,     0,     0,
       0,  -118,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,
     -91,   -91,   -89,   -89,   -89,     0,     0,     0,     0,     0,
       0,   -89,   -91,   -91,   -91,   -91,   -91,   -91,     0,     0,
     -92,   -92,   -91,   -91,   -91,     0,     0,     0,     0,     0,
       0,   -91,   -92,   -92,   -92,   -92,   -92,   -92,     0,     0,
    -100,  -100,   -92,   -92,   -92,     0,     0,     0,     0,     0,
       0,   -92,  -100,  -100,  -100,  -100,  -100,  -100,     0,     0,
    -113,  -113,  -100,  -100,  -100,     0,     0,     0,     0,     0,
       0,  -100,  -113,  -113,  -113,  -113,  -113,  -113,     0,     0,
     -93,   -93,  -113,  -113,  -113,     0,     0,     0,     0,     0,
       0,  -113,   -93,   -93,   -93,   -93,   -93,   -93,     0,     0,
     -99,   -99,   -93,   -93,   -93,     0,     0,     0,     0,     0,
       0,   -93,   -99,   -99,   -99,   -99,   -99,   -99,     0,     0,
     -94,   -94,   -99,   -99,   -99,     0,     0,     0,     0,     0,
       0,   -99,   -94,   -94,   -94,   -94,   -94,   -94,     0,     0,
     -98,   -98,   -94,   -94,   -94,     0,     0,     0,     0,     0,
       0,   -94,   -98,   -98,   -98,   -98,   -98,   -98,     0,     0,
    -102,  -102,   -98,   -98,   -98,     0,     0,     0,     0,     0,
       0,   -98,  -102,  -102,  -102,  -102,  -102,  -102,     0,     0,
    -101,  -101,  -102,  -102,  -102,     0,     0,     0,     0,     0,
       0,  -102,  -101,  -101,  -101,  -101,  -101,  -101,     0,     0,
     -88,   126,  -101,  -101,  -101,     0,     0,     0,     0,     0,
       0,  -101,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,
     -90,   -90,   -88,   -88,   -88,     0,     0,     0,     0,     0,
       0,   -88,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,
     -96,   -96,   -90,   -90,   -90,     0,     0,     0,     0,     0,
       0,   -90,   -96,   -96,   -96,   -96,   -96,   -96,     0,     0,
     -97,   -97,   -96,   -96,   -96,     0,     0,     0,     0,     0,
       0,   -96,   -97,   -97,   -97,   -97,   -97,   -97,     0,     0,
     -95,   -95,   -97,   -97,   -97,     0,     0,     0,     0,     0,
       0,   -97,   -95,   -95,   -95,   -95,   -95,   -95,     0,     0,
     277,     0,   -95,   -95,   -95,     0,     0,     0,     0,     0,
       0,   -95,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,
     277,     0,   -87,   -87,   -87,     0,     0,     0,     0,     0,
       0,   -87,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,
    -117,  -117,   -86,   -86,   -86,     0,     0,     0,     0,     0,
       0,   -86,  -117,  -117,  -117,  -117,  -117,  -117,  -116,  -116,
       0,     0,  -117,  -117,  -117,     0,     0,     0,     0,     0,
    -116,  -116,  -116,  -116,  -116,  -116,  -118,  -118,     0,     0,
    -116,  -116,  -116,     0,     0,     0,     0,     0,  -118,  -118,
    -118,  -118,  -118,  -118,   -89,   126,     0,     0,  -118,  -118,
    -118,     0,     0,     0,     0,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -91,   -91,     0,     0,   -89,   -89,   -89,     0,
       0,     0,     0,     0,   -91,   -91,   -91,   -91,   -91,   -91,
     -92,   -92,     0,     0,   -91,   -91,   -91,     0,     0,     0,
       0,     0,   -92,   -92,   -92,   -92,   -92,   -92,  -100,  -100,
       0,     0,   -92,   -92,   -92,     0,     0,     0,     0,     0,
    -100,  -100,  -100,  -100,  -100,  -100,  -113,  -113,     0,     0,
    -100,  -100,  -100,     0,     0,     0,     0,     0,  -113,  -113,
    -113,  -113,  -113,  -113,   -93,   -93,     0,     0,  -113,  -113,
    -113,     0,     0,     0,     0,     0,   -93,   -93,   -93,   -93,
     -93,   -93,   -99,   -99,     0,     0,   -93,   -93,   -93,     0,
       0,     0,     0,     0,   -99,   -99,   -99,   -99,   -99,   -99,
     -94,   -94,     0,     0,   -99,   -99,   -99,     0,     0,     0,
       0,     0,   -94,   -94,   -94,   -94,   -94,   -94,   -98,   -98,
       0,     0,   -94,   -94,   -94,     0,     0,     0,     0,     0,
     -98,   -98,   -98,   -98,   -98,   -98,  -102,  -102,     0,     0,
     -98,   -98,   -98,     0,     0,     0,     0,     0,  -102,  -102,
    -102,  -102,  -102,  -102,  -101,  -101,     0,     0,  -102,  -102,
    -102,     0,     0,     0,     0,     0,  -101,  -101,  -101,  -101,
    -101,  -101,   -88,   126,     0,     0,  -101,  -101,  -101,     0,
       0,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -90,   -90,     0,     0,   -88,   -88,   -88,     0,     0,     0,
       0,     0,   -90,   -90,   -90,   -90,   -90,   -90,   -96,   -96,
       0,     0,   -90,   -90,   -90,     0,     0,     0,     0,     0,
     -96,   -96,   -96,   -96,   -96,   -96,   -97,   -97,     0,     0,
     -96,   -96,   -96,     0,     0,     0,     0,     0,   -97,   -97,
     -97,   -97,   -97,   -97,   -95,   -95,     0,     0,   -97,   -97,
     -97,     0,     0,     0,     0,     0,   -95,   -95,   -95,   -95,
     -95,   -95,     0,     0,     0,     0,   -95,   -95,   -95,   118,
     119,   120,   121,   122,   123,     0,     0,     0,     0,   -84,
     -84,   -84,   118,   119,   120,   121,   122,   123,     0,   -84,
       0,   -84,   -85,   -85,   -85,   118,   119,   120,   121,   122,
     123,     0,     0,     0,   -85,   -84,   -84,   -84,   118,   119,
     120,   121,   122,   123,     0,     0,     0,   -84,   -85,   -85,
     -85,   118,   119,   120,   121,   122,   123,   -85,     0,     0,
       0,   -84,   -84,   -84,     0,     0,     0,     0,     0,     0,
     -84
};

static const yytype_int16 yycheck[] =
{
       0,   204,   136,     0,    30,   101,   131,     7,    37,    35,
       7,   343,    28,    39,    64,   437,     0,    43,     1,   204,
     269,    30,    31,     1,    24,    39,    40,     1,    28,    11,
      39,   271,     1,     1,   201,    64,   204,   286,    20,    13,
      14,    15,    16,     5,    13,    14,    15,    16,   288,    11,
      32,     1,     1,     1,   204,    37,    39,     5,     6,     7,
       8,    39,    30,    31,    12,   314,    30,    31,    42,    39,
     204,    39,    88,    42,    56,    39,   316,     1,    60,    61,
      30,    31,    64,     1,     1,    33,   335,     1,    88,    39,
      39,     1,   204,    41,     5,     5,    40,   337,    42,   233,
      11,     1,    84,     1,    86,    37,     1,   204,     5,    91,
     204,    93,    41,    95,    11,    39,    30,    31,   100,   101,
     102,    39,    39,     1,    39,    39,    41,    39,    60,    61,
      30,    31,    64,   115,   116,   117,     1,     1,   227,    39,
     229,    39,   124,   125,    39,   127,   128,   129,   237,   238,
     239,     1,    30,    31,   136,     5,     6,     7,     8,    91,
       5,    39,    12,    42,     1,    30,    31,    32,   100,   101,
      30,    31,    32,     1,    39,    39,    26,     5,    28,    29,
      40,     1,    42,    33,     5,     5,     1,     1,     1,    42,
      11,    41,    42,    30,    31,    32,   128,   129,   227,   181,
     229,   227,    39,   229,   204,    39,   628,   204,   237,   238,
     239,   237,   238,   239,    43,    30,    31,    42,   244,   201,
     387,     5,   204,   205,    39,    39,    39,    11,   477,    30,
      31,   398,     1,     1,   566,     5,     5,   486,    39,   479,
      39,    13,    14,    15,    16,   227,     1,   229,   488,     1,
      39,   233,   419,    41,     1,   237,   238,   239,     5,     6,
       7,     8,    30,    31,    42,    12,   515,     5,   435,   201,
      42,    39,   204,   205,     1,    30,    31,   517,    30,    31,
      41,   263,   264,    39,    39,    41,    33,    39,    26,   538,
      28,    29,    41,   275,    41,   227,     1,   229,    41,    42,
     540,   283,   284,    30,    31,   237,   238,   239,   358,    41,
     292,     1,    39,    30,    31,     5,     6,     7,     8,    41,
     370,    26,    12,    28,    29,    42,   308,   309,    41,   358,
      30,    31,   264,     5,     6,     7,    30,    31,   320,   464,
      12,   370,    42,    33,    40,    39,    42,   329,   330,     1,
      41,    41,   284,     5,     6,     7,     8,   453,   454,   341,
      12,   343,    39,    40,    41,   347,    40,     1,    42,    41,
      41,     5,     6,     7,     8,   357,   358,   309,    12,     1,
       1,    33,    41,     5,     6,     7,     8,   369,   370,    41,
      12,     5,    26,    41,    28,    29,    39,    40,   330,    33,
     382,   383,   384,   385,   386,   387,    44,    41,    42,    30,
      31,    33,    26,    39,    28,    29,   398,   551,    39,    41,
       5,     6,     7,    41,    42,   357,   358,    12,     0,     1,
      39,   413,   414,   415,   416,   417,   418,   419,   370,    41,
      42,    13,    14,    15,    16,    42,   649,   429,   430,   431,
     432,   433,   434,   435,    42,   387,    41,     5,     5,     6,
       7,    44,    30,    31,   649,    12,   398,    39,   450,    42,
     452,   453,   454,   455,    42,    42,    40,   680,    42,   682,
      39,   649,    41,    39,   466,    41,    37,   419,   691,   692,
     693,     5,     6,     7,    41,   680,     5,   682,    12,   649,
      40,     1,    42,   435,     5,    56,   691,   692,   693,    60,
      61,    30,   680,    64,   682,   649,    42,    26,   450,    28,
      29,   453,   454,   691,   692,   693,    26,    41,    28,    29,
     680,    30,   682,    84,   466,    30,    31,   649,    30,    31,
      91,   691,   692,   693,    42,    40,   680,    42,   682,   100,
     101,    42,   649,   687,    40,   649,    42,   691,   692,   693,
     649,    41,    42,    30,    31,   116,   117,    42,   680,   551,
     682,    41,    42,   124,   125,    42,   127,   128,   129,   691,
     692,   693,    42,   680,   566,   682,   680,    42,   682,    30,
      31,   680,    42,   682,   691,   692,   693,   691,   692,   693,
      42,    42,   691,   692,   693,    40,     5,    42,     1,    41,
      42,     4,     5,     6,     7,     8,    30,    31,    32,    12,
      13,    14,    15,    16,    17,    18,    19,    26,    42,    28,
      29,    41,    42,    26,    27,    28,    29,   619,    42,    40,
      33,    42,    35,    36,    37,    38,     0,     1,    41,   649,
     201,    44,   649,   204,   205,    40,    41,    30,    31,    13,
      14,    15,    16,     5,     6,     7,    42,   649,   650,    42,
      12,    41,   698,    39,    40,    41,   227,    40,   229,    42,
     680,    39,   682,   680,     1,   682,   237,   238,   239,    39,
      40,   691,   692,   693,   691,   692,   693,     1,   680,    41,
     682,     5,     6,     7,     8,   687,    41,    42,    12,   691,
     692,   693,   263,   264,    40,     1,    42,   649,   650,     5,
       6,     7,     8,    42,   275,    39,    12,    30,    31,    33,
      41,    42,   283,   284,    40,    41,    42,    41,    34,    42,
      26,   292,    28,    29,     5,     6,     7,    33,   680,    39,
     682,    12,     0,     1,    39,    41,    42,   308,   309,   691,
     692,   693,    39,     1,    39,    13,    14,    15,    16,   320,
       1,    30,    31,    32,     5,     6,     7,     8,   329,   330,
      41,    12,    20,    21,    22,    23,    24,    25,    41,    42,
     341,     1,    30,    31,    32,    26,    39,    28,    29,     0,
       1,    39,    33,    30,    31,    32,   357,   358,    30,    31,
      41,    42,    13,    14,    15,    16,     1,    39,    39,   370,
       5,     6,     7,     8,    39,    30,    31,    12,    30,    31,
      32,   382,   383,   384,   385,   386,   387,    42,     8,     9,
      42,    26,    39,    28,    29,    39,    37,   398,    33,    39,
      20,    21,    22,    23,    24,    25,    41,    42,    41,    42,
      30,    31,    32,   414,   415,   416,   417,   418,   419,    60,
      61,    41,    42,    64,    40,    41,    42,    30,    31,   430,
     431,   432,   433,   434,   435,    39,     1,     1,    79,    42,
       5,     5,     6,     7,     8,    30,    31,    32,    12,   450,
      91,    42,   453,   454,     1,    40,    42,    42,     5,   100,
     101,    26,    42,    28,    29,   466,    40,    41,    42,    33,
      42,    30,    31,    30,    31,   116,   117,    41,    39,    26,
      39,    28,    29,   124,   125,    42,   127,   128,   129,     1,
      30,    31,     4,     5,     6,     7,     8,     0,     1,    39,
      12,    13,    14,    15,    16,    17,    18,    19,    30,    31,
      13,    14,    15,    16,    26,    27,    28,    29,    40,    42,
      42,    33,    42,    35,    36,    37,    38,   168,    42,    41,
       1,     1,    44,    42,     5,    43,    61,     5,    30,    31,
       1,     5,    30,    31,     5,     6,     7,     8,    40,     5,
      42,    12,    40,     5,    42,    26,    41,    28,    29,    41,
     201,    30,    31,   204,   205,    26,    91,    28,    29,     1,
      95,    40,    33,    42,    41,   100,   101,    42,    39,    30,
      41,    13,    14,    15,    16,    42,   227,     1,   229,    42,
     115,    41,    30,    31,     8,     9,   237,   238,   239,     0,
       1,    39,    41,   128,   129,    41,    20,    21,    22,    23,
      24,    25,    13,    14,    15,    16,    30,    31,    32,    41,
      34,    39,    40,   264,    41,    39,     1,    41,    41,   270,
       5,     6,     7,     8,    41,    10,    39,    12,    30,    31,
      37,    41,    42,   284,    39,    41,   287,    41,   649,   650,
      42,    26,    41,    28,    29,   180,   181,    34,    33,    56,
      30,    31,    42,    60,    61,    41,    41,    64,   309,    42,
      40,    42,    42,    41,   315,    41,   201,     1,    41,   680,
     205,   682,    41,    42,     8,     9,    41,    84,    41,   330,
     691,   692,   693,    39,    91,   336,    20,    21,    22,    23,
      24,    25,    39,   100,   101,    34,    30,    31,    32,     0,
       1,    42,    30,    31,    32,    39,   357,   358,    41,   116,
     117,    39,    13,    14,    15,    16,    42,   124,   125,   370,
     127,   128,   129,    40,    41,    42,    30,    31,    42,   264,
      42,   382,   383,   384,   385,   386,   387,     1,    42,    41,
      42,     5,     6,     7,     8,    41,     1,   398,    12,   284,
       5,     6,     7,     8,    40,    41,    42,    12,    41,    42,
      30,    31,    41,   414,   415,   416,   417,   418,   419,    33,
      40,    44,    42,    41,   309,    41,    42,    41,    33,   430,
     431,   432,   433,   434,   435,     1,    41,    41,    42,     5,
       6,     7,     8,    44,   201,   330,    12,   204,   205,   450,
      41,    42,   453,   454,    30,    31,    30,    31,    41,    30,
      31,    42,   347,    42,    40,   466,    42,    33,    42,    40,
     227,    42,   229,    30,    31,    41,    41,   478,    30,    31,
     237,   238,   239,    40,    42,    42,   487,    41,    40,     1,
      42,    60,    61,     5,     6,     7,     8,    41,    10,    41,
      12,    41,   387,    30,    31,    32,   263,   264,    30,    31,
       0,     1,    39,   398,    26,   516,    28,    29,   275,    42,
      42,    33,    91,    13,    14,    15,    16,   284,   413,    41,
      41,   100,   101,    41,   419,    30,    31,    39,   539,    42,
       0,     1,    41,    42,   429,    30,    31,    42,    41,    42,
     435,   308,   309,    13,    14,    15,    16,    42,    30,   128,
     129,    30,    31,   320,    30,   450,    42,     1,   453,   454,
      39,    42,   329,   330,     8,     9,    30,    31,    42,     0,
       1,   466,    41,    42,   341,    39,    20,    21,    22,    23,
      24,    25,    13,    14,    15,    16,    30,    31,    32,    42,
     357,   358,    41,    42,    42,    39,    42,    41,    30,    31,
       1,    30,    31,   370,     5,     6,     7,     8,    41,    42,
      42,    12,    39,    42,    42,   382,   383,   384,   385,   386,
     387,    42,   201,    41,    42,   204,   205,    42,     0,     1,
      37,   398,    33,    41,    42,    41,    42,    42,   649,   650,
      41,    13,    14,    15,    16,     0,     1,   414,   415,   416,
     417,   418,   419,    60,    61,    41,    42,    64,    13,    14,
      15,    16,    42,   430,   431,   432,   433,   434,   435,   680,
      43,   682,    41,    42,    42,     0,     1,    41,    42,    42,
     691,   692,   693,   450,    91,   264,   453,   454,    13,    14,
      15,    16,    39,   100,   101,    30,    31,    30,    31,   466,
       0,     1,    41,    42,     1,   284,    39,    42,    39,   116,
     117,    41,    42,    13,    14,    15,    16,   124,   125,    39,
     127,   128,   129,   618,   619,    41,    42,    30,    31,    39,
     309,     1,    41,    42,     4,     5,     6,     7,     8,    42,
      30,    31,    12,    13,    14,    15,    16,    17,    18,    19,
      39,   330,    42,    41,    42,   650,    26,    27,    28,    29,
      39,    30,    31,    33,    39,    35,    36,    37,    38,    41,
      42,    41,    37,    42,    44,     1,    39,    39,   357,     5,
       6,     7,     8,    39,    39,    39,    12,    13,    14,    15,
      16,    17,    18,    19,   201,    60,    61,   204,   205,    64,
      26,    27,    28,    29,    39,    30,    31,    33,   387,    35,
      36,    37,    38,    30,    31,    41,    39,    42,    44,   398,
     227,    39,   229,    42,    39,    42,    91,    30,    31,    42,
     237,   238,   239,    42,    42,   100,   101,    42,     1,    42,
     419,    39,     5,     6,     7,     8,    30,    31,     1,    12,
      42,   116,   117,     7,   451,   616,   435,   264,    42,   124,
     125,     1,   686,   128,   129,     5,     6,     7,     8,   649,
      33,   450,    12,   683,   453,   454,    -1,   284,    41,    30,
      31,   684,   649,   650,    30,    31,    26,   466,    28,    29,
      -1,    42,    -1,    33,    30,    31,    42,    -1,    -1,    39,
      -1,    41,   309,     1,    30,    31,    42,     5,     6,     7,
       8,    -1,    10,   680,    12,   682,    42,    30,    31,    -1,
      30,    31,    -1,   330,   691,   692,   693,    -1,    26,    42,
      28,    29,    42,    30,    31,    33,   201,    -1,    -1,   204,
     205,    -1,    -1,    41,    -1,    42,    30,    31,    -1,     1,
     357,   358,    -1,     5,     6,     7,     8,    -1,    42,    -1,
      12,    -1,   227,   370,   229,    -1,    -1,    -1,    -1,    -1,
      30,    31,   237,   238,   239,   382,   383,   384,   385,   386,
     387,    33,    42,    -1,    -1,    -1,    -1,    -1,    -1,    41,
     397,   398,    -1,    -1,    37,    -1,    -1,    -1,    -1,   264,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   414,   415,   416,
     417,   418,   419,    -1,    -1,    -1,    -1,    60,    61,   284,
      -1,    64,    -1,   430,   431,   432,   433,   434,   435,     1,
      -1,    -1,    -1,     5,     6,     7,     8,    -1,    -1,    -1,
      12,    -1,    -1,   450,   309,    -1,   453,   454,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,   101,   466,
      -1,    33,    -1,    -1,    -1,   330,    -1,    -1,    -1,    41,
     649,   650,    -1,   116,   117,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,     1,    -1,   128,   129,     5,     6,     7,
       8,    -1,   357,   358,    12,    -1,    -1,    -1,    -1,    -1,
      -1,   680,    -1,   682,    -1,   370,    -1,    -1,    26,    -1,
      28,    29,   691,   692,   693,    33,    -1,   382,   383,   384,
     385,    -1,   387,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   396,    -1,   398,    -1,    -1,    37,     1,    -1,    -1,
      -1,     5,     6,     7,     8,    -1,    -1,    -1,    12,   414,
     415,   416,   417,    -1,   419,    -1,    -1,    -1,   201,    60,
      61,   204,   205,    64,    -1,   430,   431,   432,   433,    33,
     435,    20,    21,    22,    23,    24,    25,    41,    -1,    -1,
      -1,    30,    31,    32,   227,   450,   229,    -1,   453,   454,
      91,    40,    -1,    42,   237,   238,   239,    -1,    -1,   100,
     101,   466,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,   116,   117,    -1,    -1,     1,
      -1,   264,     4,     5,     6,     7,     8,   128,   129,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,   284,   649,   650,    26,    27,    28,    29,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,     1,   309,    -1,    -1,     5,
       6,     7,     8,   680,    10,   682,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   691,   692,   693,   330,    -1,    -1,
      26,    -1,    28,    29,    -1,    -1,    -1,    33,    -1,    -1,
     201,    -1,     1,   204,   205,    41,     5,     6,     7,     8,
      -1,    -1,    -1,    12,   357,   358,    -1,    -1,     1,    -1,
      -1,    -1,     5,     6,     7,     8,   227,   370,   229,    12,
      -1,    -1,    -1,    -1,    33,    -1,   237,   238,   239,   382,
     383,   384,    41,    26,   387,    28,    29,    -1,    -1,    -1,
      33,    -1,   395,    -1,    -1,   398,    -1,    -1,    41,    -1,
      -1,    -1,    -1,   264,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   414,   415,   416,    -1,    -1,   419,    -1,    -1,    -1,
      -1,    -1,    -1,   284,   649,   650,    -1,   430,   431,   432,
       1,    -1,   435,    -1,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,   450,   309,    -1,
     453,   454,     1,    -1,    -1,   680,    -1,   682,    -1,     8,
       9,    -1,    33,   466,    37,    -1,   691,   692,   693,   330,
      41,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    30,    31,    32,    -1,    34,    -1,    60,    61,    -1,
      39,    64,    41,    -1,    -1,    -1,   357,   358,    -1,     1,
      -1,    -1,    -1,     5,     6,     7,     8,    -1,     1,   370,
      12,    -1,     5,     6,     7,     8,    -1,    -1,    91,    12,
      -1,   382,   383,    -1,    -1,    -1,   387,   100,   101,    -1,
      -1,    33,    -1,   394,    -1,    -1,    -1,   398,    -1,    41,
      33,    -1,     1,   116,    -1,    -1,    -1,    -1,    41,     8,
       9,    -1,    -1,   414,   415,   128,   129,    -1,   419,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,   430,
     431,    30,    31,    32,   435,    -1,    -1,    -1,    -1,     1,
      39,    -1,    41,     5,     6,     7,     8,    -1,    -1,   450,
      12,    -1,   453,   454,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    26,   466,    28,    29,    -1,     1,
      -1,    33,    -1,     5,     6,     7,     8,    -1,     1,    41,
      12,    -1,     5,     6,     7,     8,    -1,    -1,   201,    12,
      91,   204,   205,    94,    -1,    96,    97,    -1,    -1,   100,
     101,    33,    -1,    -1,    -1,    -1,   649,   650,    -1,    41,
      33,    -1,    -1,    -1,   227,    -1,   229,    -1,    41,    -1,
      -1,    -1,    -1,    -1,   237,   238,   239,   128,   129,     1,
      -1,    -1,     4,     5,     6,     7,     8,   680,    -1,   682,
      12,    13,    14,    15,    16,    17,    18,    19,   691,   692,
     693,   264,    -1,    -1,    26,    27,    28,    29,    -1,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,    41,
       1,   284,    44,    -1,     5,     6,     7,     8,    -1,    -1,
       1,    12,    -1,    -1,     5,     6,     7,     8,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    26,   309,    28,    29,    -1,
     201,    -1,    33,    -1,   205,    26,    -1,    28,    29,    -1,
      41,    -1,    33,    -1,    -1,    -1,    -1,   330,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,
       5,     6,     7,     8,    -1,   348,     1,    12,    -1,    -1,
       5,     6,     7,     8,   357,   358,    -1,    12,   649,   650,
      -1,    26,    -1,    28,    29,    -1,    -1,   370,    33,    -1,
      -1,    -1,    -1,   264,    -1,    -1,    41,    -1,    33,   382,
      -1,    -1,    -1,    -1,   387,    -1,    41,    -1,    -1,   680,
      -1,   682,    -1,   284,    -1,   398,    -1,    -1,    -1,    -1,
     691,   692,   693,    -1,    -1,    -1,    -1,    -1,     1,    -1,
      -1,   414,     5,     6,     7,     8,   419,    -1,   309,    12,
      13,    14,    15,    16,    17,    18,    19,   430,    -1,    -1,
      -1,    -1,   435,    26,    27,    28,    29,    -1,    -1,   330,
      33,    -1,    35,    36,    37,    38,    -1,   450,    41,    -1,
     453,   454,    -1,    -1,     1,    -1,    -1,     4,     5,     6,
       7,     8,    -1,   466,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,   374,   375,   376,    33,    -1,    35,    36,
      37,    38,    -1,    -1,    41,     1,   387,    44,    -1,     5,
       6,     7,     8,    -1,    -1,    -1,    12,   398,    -1,    -1,
     401,   402,   403,    -1,   405,   406,   407,    -1,    -1,    -1,
      26,    -1,    28,    29,    -1,    -1,    -1,    33,   419,    -1,
     421,   422,   423,    -1,     1,    41,    -1,    -1,     5,     6,
       7,     8,    -1,    -1,   435,    12,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,   450,
      -1,    -1,   453,   454,    -1,     1,    33,    -1,     4,     5,
       6,     7,     8,    -1,    41,   466,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    -1,    -1,    -1,    33,     8,    35,
      36,    37,    38,    -1,    -1,    41,    -1,    -1,    44,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    31,    32,    -1,    -1,    -1,     1,    -1,    -1,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,   649,   650,    -1,    -1,
      -1,    26,    27,    28,    29,   546,   547,   548,    33,     8,
      35,    36,    37,    38,    -1,    -1,    41,    -1,    -1,    44,
      -1,    20,    21,    22,    23,    24,    25,   680,    -1,   682,
      -1,    30,    31,    32,    -1,    -1,    -1,    -1,   691,   692,
     693,    -1,    -1,     1,    -1,    -1,     4,     5,     6,     7,
       8,   592,   593,   594,    12,    13,    14,    15,    16,    17,
      18,    19,   603,   604,   605,    -1,    -1,    -1,    26,    27,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    41,    -1,     1,    44,    -1,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,   650,
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
      38,    -1,    -1,    41,     1,    -1,    44,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    -1,    -1,    41,     1,    -1,    44,     4,     5,
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
      37,    38,    -1,     1,    41,    -1,    43,     5,     6,     7,
       8,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    -1,     1,    41,    -1,    43,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,
      -1,     1,    41,    -1,    43,     5,     6,     7,     8,    -1,
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
      -1,    33,    -1,    35,    36,    37,    38,    -1,     1,    41,
      -1,    43,     5,     6,     7,     8,    -1,     1,    -1,    12,
      -1,     5,     6,     7,     8,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    26,    -1,    28,    29,    -1,    -1,    -1,
      33,    -1,    26,    -1,    28,    29,    -1,     1,    41,    33,
      -1,     5,     6,     7,     8,    -1,     1,    41,    12,    -1,
       5,     6,     7,     8,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    26,    -1,    28,    29,    -1,    -1,     1,    33,
      -1,    -1,     5,     6,     7,     8,    -1,    41,    33,    12,
      -1,    -1,    -1,     1,    -1,    -1,    41,     5,     6,     7,
       8,    -1,     1,    -1,    12,    -1,     5,     6,     7,     8,
      33,    -1,    -1,    12,    -1,     1,    -1,    -1,    41,     5,
       6,     7,     8,    -1,     1,    33,    12,    -1,     5,     6,
       7,     8,    -1,    41,    33,    12,    -1,    -1,    -1,     1,
      -1,    -1,    41,     5,     6,     7,     8,    33,    -1,    -1,
      12,    -1,    -1,    -1,     1,    41,    33,    -1,     5,     6,
       7,     8,    -1,     1,    41,    12,    -1,     5,     6,     7,
       8,    33,    -1,    -1,    12,    -1,     1,    -1,    -1,    41,
       5,     6,     7,     8,    -1,     1,    33,    12,    -1,     5,
       6,     7,     8,    -1,    41,    33,    12,    -1,    -1,    -1,
       1,    -1,    -1,    41,     5,     6,     7,     8,    33,    -1,
      -1,    12,    -1,    -1,    -1,     1,    41,    33,    -1,     5,
       6,     7,     8,    -1,     1,    41,    12,    -1,     5,     6,
       7,     8,    33,    -1,    -1,    12,    -1,    -1,     1,    -1,
      41,    -1,    -1,    -1,    -1,     8,     9,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    33,    20,    21,    22,
      23,    24,    25,     1,    41,    -1,    -1,    30,    31,    32,
       8,     9,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    25,     1,    -1,
      -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,     1,    -1,    -1,    -1,    30,    31,    32,
       8,     9,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    25,     1,    -1,
      -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,     1,    -1,    -1,    -1,    30,    31,    32,
       8,     9,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    25,     1,    -1,
      -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,     1,    -1,    -1,    -1,    30,    31,    32,
       8,     9,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    25,     1,    -1,
      -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,     1,    -1,    -1,    -1,    30,    31,    32,
       8,     9,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    25,     1,    -1,
      -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,     1,    -1,    -1,    -1,    30,    31,    32,
       8,     9,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    25,     1,    -1,
      -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,     1,    -1,    -1,    -1,    30,    31,    32,
       8,     9,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    25,     1,    -1,
      -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,     1,    -1,    -1,    -1,    30,    31,    32,
       8,     9,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    25,     1,    -1,
      -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,     1,    -1,    -1,    -1,    30,    31,    32,
       8,     9,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    25,     1,    -1,
      -1,    -1,    30,    31,    32,     8,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,     1,    -1,    -1,    -1,    30,    31,    32,
       8,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    25,     1,    -1,
      -1,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,     8,     9,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
       8,     9,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,
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
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
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
      -1,    -1,    30,    31,    32,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
       8,     9,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,
      -1,    39,    -1,    41,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
       8,     9,    -1,    -1,    -1,    -1,    39,    -1,    41,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
       8,     9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    20,    21,    22,    23,    24,    25,    -1,    -1,
       8,     9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    20,    21,    22,    23,    24,    25,    -1,    -1,
       8,     9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    20,    21,    22,    23,    24,    25,    -1,    -1,
       8,     9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    20,    21,    22,    23,    24,    25,    -1,    -1,
       8,     9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    20,    21,    22,    23,    24,    25,    -1,    -1,
       8,     9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    20,    21,    22,    23,    24,    25,    -1,    -1,
       8,     9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    20,    21,    22,    23,    24,    25,    -1,    -1,
       8,     9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    20,    21,    22,    23,    24,    25,    -1,    -1,
       8,     9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    20,    21,    22,    23,    24,    25,    -1,    -1,
       8,     9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    20,    21,    22,    23,    24,    25,    -1,    -1,
       8,     9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    20,    21,    22,    23,    24,    25,    -1,    -1,
       8,     9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    20,    21,    22,    23,    24,    25,    -1,    -1,
       8,     9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    20,    21,    22,    23,    24,    25,    -1,    -1,
       8,     9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    20,    21,    22,    23,    24,    25,    -1,    -1,
       8,     9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    20,    21,    22,    23,    24,    25,    -1,    -1,
       8,     9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    20,    21,    22,    23,    24,    25,    -1,    -1,
       8,     9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    20,    21,    22,    23,    24,    25,    -1,    -1,
       8,     9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    20,    21,    22,    23,    24,    25,    -1,    -1,
       8,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    20,    21,    22,    23,    24,    25,    -1,    -1,
       8,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    20,    21,    22,    23,    24,    25,    -1,    -1,
       8,     9,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    20,    21,    22,    23,    24,    25,     8,     9,
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
      22,    23,    24,    25,     8,     9,    -1,    -1,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      31,    32,    20,    21,    22,    23,    24,    25,    -1,    40,
      -1,    42,    30,    31,    32,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    42,    30,    31,    32,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    42,    30,    31,
      32,    20,    21,    22,    23,    24,    25,    39,    -1,    -1,
      -1,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    13,    14,    15,    16,    46,    47,    48,    49,
      53,    92,    39,     0,     1,    48,     5,    11,    88,    41,
      40,    41,    50,     1,    55,    52,    88,     1,    54,    39,
      42,    56,    92,    51,    40,    42,    56,    43,    57,    42,
      88,    39,    57,    42,     1,     6,     7,     8,    12,    17,
      18,    19,    26,    27,    28,    29,    33,    35,    36,    37,
      38,    41,    49,    58,    59,    60,    61,    63,    68,    69,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    88,    89,    91,    92,    57,    40,    57,
      41,    41,    41,    41,    41,    41,    41,    41,    84,    88,
      41,    41,    41,     1,    39,    73,    88,     1,    73,    44,
      58,     1,    39,    39,    39,    30,    31,    32,    20,    21,
      22,    23,    24,    25,    85,    89,     9,    90,    34,    41,
      84,    88,    56,    42,     1,    73,    62,     1,    88,     1,
      77,    78,     1,    75,    88,     1,    77,     1,    77,     1,
      10,    73,    86,     1,    73,    86,     1,    88,    39,     1,
      39,    42,    42,    75,    88,     1,    79,    80,    81,    82,
      83,    73,     1,    42,    73,    87,    42,    42,    74,    88,
      30,    30,    42,    42,    42,    42,    42,    42,    42,    42,
      42,    42,    42,    42,    42,    42,    42,    42,    42,    40,
      42,    40,    42,     1,    64,    39,     1,    75,     1,    75,
      88,    39,    39,    39,    39,    39,    39,    39,    39,     1,
       1,    87,    57,    59,    65,    67,    73,    42,    42,    42,
      42,    42,     4,    39,    67,     1,    67,    70,    71,    66,
      74,    67,    67,    67,    42,    57,     5,    13,    14,    15,
      16,     5,     5,    39,     5,     5,     5,     6,     7,    12,
      26,    28,    29,    33,    41,    75,    77,    78,    79,    80,
      81,    82,    83,    84,    88,    89,    91,     8,     5,     5,
       6,     7,    12,    33,    41,    79,    80,    81,    82,    83,
      84,    88,    89,    91,     5,    41,     5,    26,    28,    29,
       1,     5,     6,     7,    12,    26,    28,    29,    33,    41,
      75,    77,    78,    79,    80,    81,    82,    83,    84,    88,
      89,    91,     5,     6,     7,    12,    26,    28,    29,    33,
      41,    75,    77,    78,    79,    80,    81,    82,    83,    84,
      88,    89,    91,    40,    50,     5,    41,    30,    31,    41,
       1,    17,    18,    19,    35,    36,    37,    38,    43,    49,
      60,    61,    63,    68,    69,    72,    73,    74,    76,    92,
      43,    57,    59,    88,    41,    41,    41,     5,    84,    88,
       1,    73,    31,    32,    85,    89,    90,    41,    84,     5,
      84,    88,     1,    73,    32,    85,    89,    90,    41,    84,
      42,    41,    41,    41,    41,    41,    41,    41,     5,    84,
      88,     1,    73,    30,    31,    32,    85,    89,    90,    41,
      84,    41,    41,    41,     5,    84,    88,     1,    73,    30,
      31,    32,    85,    89,    90,    41,    84,    52,    39,    42,
       5,    26,    28,    29,    75,    88,     1,    79,    42,    39,
      41,    41,    41,    41,    41,    41,     1,    39,    73,    58,
       1,    39,    39,    39,    88,    58,    34,     1,    77,     1,
      77,     1,    77,    42,    42,     1,    79,    80,    81,    82,
      83,     1,    42,    87,    42,    42,    80,    81,    82,    83,
       1,    42,    87,     1,    77,     1,    77,     1,    77,    42,
       1,    77,     1,    77,     1,    77,    42,    42,     5,    26,
      28,    29,    75,    88,    79,    80,    81,    82,    83,     1,
      42,    87,     1,    77,     1,    77,     1,    77,    42,    42,
       5,    26,    28,    29,    75,    88,     1,    79,    80,    81,
      82,    83,     1,    42,    87,    51,    41,    41,    41,     1,
      73,    62,     1,    88,     1,    73,    86,     1,    73,    86,
       1,    88,    39,     1,    39,    44,    40,    50,    44,    73,
      42,    42,    42,    42,    42,    42,    42,    42,    42,    42,
      42,    42,    42,    42,    42,    42,    42,    42,    42,    42,
      42,    42,    41,    41,    41,    42,    42,    42,    42,    42,
      42,    42,    42,    41,    41,    41,    42,    42,    39,     1,
      77,     1,    77,     1,    77,    42,    42,    74,    30,    30,
      42,    42,    42,    42,    42,    42,    42,    42,    52,    39,
       1,    77,     1,    77,     1,    77,     1,    77,     1,    77,
       1,    77,    42,    42,    42,    42,    42,    42,     1,    64,
      39,     1,    75,     1,    75,    88,    39,    39,    39,    39,
      39,    39,    39,    39,    51,    42,    42,    42,    42,    42,
      42,    42,    42,    42,    42,    42,    42,    65,    67,    73,
      42,    42,    42,    42,    42,    39,     4,    39,    67,     1,
      67,    70,    71,    66,    74,    67,    67,    67,    42,    57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    47,    48,    48,    50,    49,
      51,    49,    49,    52,    52,    54,    53,    55,    53,    53,
      53,    56,    56,    56,    57,    58,    58,    59,    59,    59,
      59,    59,    59,    59,    59,    60,    60,    60,    60,    60,
      60,    60,    60,    62,    61,    64,    63,    63,    65,    66,
      65,    67,    67,    68,    68,    68,    68,    70,    69,    71,
      69,    69,    69,    69,    69,    72,    72,    73,    73,    74,
      75,    75,    75,    75,    75,    75,    76,    76,    76,    77,
      77,    78,    78,    78,    79,    79,    80,    80,    81,    81,
      82,    82,    83,    83,    83,    83,    83,    83,    83,    84,
      84,    84,    84,    85,    85,    85,    85,    85,    85,    86,
      87,    87,    87,    88,    89,    90,    91,    91,    91,    92,
      92,    92,    92
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     0,     4,
       0,     6,     2,     2,     1,     0,     7,     0,     7,     6,
       6,     4,     2,     0,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     5,     5,     5,     5,     5,
       5,     5,     5,     0,    10,     0,     6,     5,     1,     0,
       4,     1,     1,     2,     3,     3,     3,     0,     8,     0,
       8,     2,     7,     7,     7,     2,     2,     1,     1,     3,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     3,
       3,     3,     1,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     1,     2,     2,     4,     3,     4,     3,     1,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1
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
#line 91 "sintatic/sintatic.y"
                         {
            (yyval.typeNode) = buildNode("program");
            (yyval.typeNode)->childNode = (yyvsp[0].typeNode);
            origin = (yyval.typeNode);
        }
#line 3466 "sintatic.tab.c"
    break;

  case 3: /* list_declaration: list_declaration main_declaration  */
#line 99 "sintatic/sintatic.y"
                                          {
            (yyvsp[-1].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3474 "sintatic.tab.c"
    break;

  case 5: /* list_declaration: error  */
#line 103 "sintatic/sintatic.y"
                 { (yyval.typeNode) = buildNode("error program"); }
#line 3480 "sintatic.tab.c"
    break;

  case 8: /* $@1: %empty  */
#line 112 "sintatic/sintatic.y"
                  {
            Symbol *aux = createItem((yyvsp[-1].typeNode)->value, (yyvsp[0].typeNode)->value, line);
            insertItem(activeScope, aux);
        }
#line 3489 "sintatic.tab.c"
    break;

  case 9: /* var_declaration: tipos var $@1 SEMICOLON  */
#line 115 "sintatic/sintatic.y"
                    {
            (yyval.typeNode) = buildNode("var_declaration");
            (yyval.typeNode)->childNode = (yyvsp[-3].typeNode); 
            (yyvsp[-3].typeNode)->brotherNode = (yyvsp[-2].typeNode);  
        }
#line 3499 "sintatic.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 120 "sintatic/sintatic.y"
                                           {
            Symbol *aux = createItem((yyvsp[-3].typeNode)->value, (yyvsp[-2].typeNode)->value, line);
            insertItem(activeScope, aux);
            Symbol *aux2 = createItem((yyvsp[-3].typeNode)->value, (yyvsp[0].typeNode)->value, line);
            insertItem(activeScope, aux2);
        }
#line 3510 "sintatic.tab.c"
    break;

  case 11: /* var_declaration: tipos var COMMA many_declaration $@2 SEMICOLON  */
#line 125 "sintatic/sintatic.y"
                    {
            (yyval.typeNode) = buildNode("var_declaration");
            (yyval.typeNode)->childNode = (yyvsp[-5].typeNode); 
            (yyvsp[-5].typeNode)->brotherNode = (yyvsp[-4].typeNode);  
            (yyvsp[-4].typeNode)->brotherNode = (yyvsp[-2].typeNode); 
        }
#line 3521 "sintatic.tab.c"
    break;

  case 12: /* var_declaration: error SEMICOLON  */
#line 131 "sintatic/sintatic.y"
                          { (yyval.typeNode) = buildNode("SINTATIC ERR");}
#line 3527 "sintatic.tab.c"
    break;

  case 15: /* $@3: %empty  */
#line 140 "sintatic/sintatic.y"
                             {
            
            // criar o simbolos no escopo atual
            Symbol *aux = createItem("FUNCTION", (yyvsp[-1].typeNode)->value, line);
            insertItem(activeScope, aux); 
            
            // novo Scopo
            Scope *newScope = buildScope((yyvsp[-1].typeNode)->value);
            newScope->parentScope = activeScope; 
            activeScope = newScope;
            
        }
#line 3544 "sintatic.tab.c"
    break;

  case 16: /* func_declaration: tipos var OPEN_PAREN $@3 list_args CLS_PAREN blockStmt  */
#line 151 "sintatic/sintatic.y"
                                         {
            (yyval.typeNode) = buildNode("func_declaration");   
            (yyval.typeNode)->childNode = (yyvsp[-6].typeNode);
            (yyvsp[-6].typeNode)->brotherNode = (yyvsp[-5].typeNode);
            (yyvsp[-5].typeNode)->brotherNode = (yyvsp[-2].typeNode);
            (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
            
            // fecha o Scopo
            showScope(activeScope);
            Scope *auxScope = activeScope->parentScope;
            freeScope(activeScope);
            activeScope = auxScope;
        }
#line 3562 "sintatic.tab.c"
    break;

  case 17: /* $@4: %empty  */
#line 164 "sintatic/sintatic.y"
                                {
            // insere simbolos no escopo atual
            Symbol *aux = createItem("FUNCTION", "main", line);
            insertItem(activeScope, aux); 

            // novo Scopo
            Scope *newScope = buildScope("main"); 
            newScope->parentScope = activeScope; 
            activeScope = newScope;

        }
#line 3578 "sintatic.tab.c"
    break;

  case 18: /* func_declaration: tipos MAIN OPEN_PAREN $@4 list_args CLS_PAREN blockStmt  */
#line 174 "sintatic/sintatic.y"
                                                     {
            (yyval.typeNode) = buildNode("func_declaration_main");   
            (yyval.typeNode)->childNode = (yyvsp[-6].typeNode);
            (yyvsp[-6].typeNode)->brotherNode = (yyvsp[-2].typeNode);
            (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
            
            // printf("Chegou scope: %s \n", activeScope->scopeName);
            showScope(activeScope);
            Scope *auxScope = activeScope->parentScope;
            freeScope(activeScope);
            activeScope = auxScope;
            
        }
#line 3596 "sintatic.tab.c"
    break;

  case 19: /* func_declaration: tipos var OPEN_PAREN error CLS_PAREN blockStmt  */
#line 187 "sintatic/sintatic.y"
                                                         {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3604 "sintatic.tab.c"
    break;

  case 20: /* func_declaration: tipos MAIN OPEN_PAREN error CLS_PAREN blockStmt  */
#line 190 "sintatic/sintatic.y"
                                                                 {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3612 "sintatic.tab.c"
    break;

  case 21: /* list_args: tipos var COMMA list_args  */
#line 197 "sintatic/sintatic.y"
                                  {
                (yyval.typeNode) = buildNode("list_args");  
                (yyval.typeNode)->childNode = (yyvsp[-3].typeNode);
                (yyvsp[-3].typeNode)->brotherNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
                
                // cria simbolos no escopo atual
                Symbol *aux = createItem((yyvsp[-3].typeNode)->value, (yyvsp[-2].typeNode)->value, line);
                insertItem(activeScope, aux); 
                
        }
#line 3628 "sintatic.tab.c"
    break;

  case 22: /* list_args: tipos var  */
#line 208 "sintatic/sintatic.y"
                    {
                (yyval.typeNode) = buildNode("list_args"); 
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
                (yyvsp[-1].typeNode)->brotherNode = (yyvsp[0].typeNode);

                Symbol *aux = createItem((yyvsp[-1].typeNode)->value, (yyvsp[0].typeNode)->value, line);
                insertItem(activeScope, aux); 
        }
#line 3641 "sintatic.tab.c"
    break;

  case 23: /* list_args: %empty  */
#line 216 "sintatic/sintatic.y"
                 {
                (yyval.typeNode) = buildNode("no_args"); 
        }
#line 3649 "sintatic.tab.c"
    break;

  case 24: /* blockStmt: OP_CUR_BRACKET list_statements CLS_CUR_BRACKET  */
#line 222 "sintatic/sintatic.y"
                                                       {
                (yyval.typeNode) = (yyvsp[-1].typeNode);
        }
#line 3657 "sintatic.tab.c"
    break;

  case 25: /* list_statements: stmt list_statements  */
#line 228 "sintatic/sintatic.y"
                             {
               (yyval.typeNode) = (yyvsp[-1].typeNode);
               (yyvsp[-1].typeNode)->brotherNode = (yyvsp[0].typeNode); 
        }
#line 3666 "sintatic.tab.c"
    break;

  case 35: /* input_output_expr: CMD_WRITE OPEN_PAREN str_expr CLS_PAREN SEMICOLON  */
#line 247 "sintatic/sintatic.y"
                                                          {
                (yyval.typeNode) = buildNode("CMD_WRITE_STR");
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
        }
#line 3675 "sintatic.tab.c"
    break;

  case 36: /* input_output_expr: CMD_WRITE OPEN_PAREN expr CLS_PAREN SEMICOLON  */
#line 251 "sintatic/sintatic.y"
                                                        {
                (yyval.typeNode) = buildNode("CMD_WRITE_EXPR");
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
        }
#line 3684 "sintatic.tab.c"
    break;

  case 37: /* input_output_expr: CMD_WRITELN OPEN_PAREN str_expr CLS_PAREN SEMICOLON  */
#line 255 "sintatic/sintatic.y"
                                                              {
                (yyval.typeNode) = buildNode("CMD_WRITELN_STR");
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
        }
#line 3693 "sintatic.tab.c"
    break;

  case 38: /* input_output_expr: CMD_WRITELN OPEN_PAREN expr CLS_PAREN SEMICOLON  */
#line 259 "sintatic/sintatic.y"
                                                          {
                (yyval.typeNode) = buildNode("CMD_WRITELN_EXPR");
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
        }
#line 3702 "sintatic.tab.c"
    break;

  case 39: /* input_output_expr: CMD_READ OPEN_PAREN var CLS_PAREN SEMICOLON  */
#line 263 "sintatic/sintatic.y"
                                                      {
                (yyval.typeNode) = buildNode("CMD_READ_VAR");
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
        }
#line 3711 "sintatic.tab.c"
    break;

  case 40: /* input_output_expr: CMD_WRITE OPEN_PAREN error CLS_PAREN SEMICOLON  */
#line 267 "sintatic/sintatic.y"
                                                         {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3719 "sintatic.tab.c"
    break;

  case 41: /* input_output_expr: CMD_WRITELN OPEN_PAREN error CLS_PAREN SEMICOLON  */
#line 270 "sintatic/sintatic.y"
                                                           {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3727 "sintatic.tab.c"
    break;

  case 42: /* input_output_expr: CMD_READ OPEN_PAREN error CLS_PAREN SEMICOLON  */
#line 273 "sintatic/sintatic.y"
                                                        {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3735 "sintatic.tab.c"
    break;

  case 43: /* $@5: %empty  */
#line 279 "sintatic/sintatic.y"
                           {
            // novo Scopo    
            Scope *newScope = buildScope("Block FOR");
            newScope->parentScope = activeScope; 
            activeScope = newScope;
            
        }
#line 3747 "sintatic.tab.c"
    break;

  case 44: /* iteration_expr: CMD_FOR OPEN_PAREN $@5 assign SEMICOLON expr SEMICOLON assign CLS_PAREN blockStmt  */
#line 285 "sintatic/sintatic.y"
                                                                     {     
             (yyval.typeNode) = buildNode("for");
             (yyval.typeNode)->childNode = (yyvsp[-6].typeNode);
             (yyvsp[-6].typeNode)->brotherNode = (yyvsp[-4].typeNode);
             (yyvsp[-4].typeNode)->brotherNode = (yyvsp[-2].typeNode);
             (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);  

             // fecha o Scopo
             showScope(activeScope);
             Scope *auxScope = activeScope->parentScope;
             freeScope(activeScope);
             activeScope = auxScope;
        }
#line 3765 "sintatic.tab.c"
    break;

  case 45: /* $@6: %empty  */
#line 301 "sintatic/sintatic.y"
                                         {
            // novo Scopo
            //     char* scopeName;
            //     scopeName = malloc(sizeof(activeScope->scopeName)+21);
            //     strcpy(scopeName, "Block IF from Scope: ");
            //     strcat(scopeName, activeScope->scopeName);
            
            Scope *newScope = buildScope("Block IF ");
            newScope->parentScope = activeScope; 
            activeScope = newScope;
        }
#line 3781 "sintatic.tab.c"
    break;

  case 46: /* condition_expr: CMD_IF OPEN_PAREN expr CLS_PAREN $@6 block_cond  */
#line 311 "sintatic/sintatic.y"
                     {
                (yyval.typeNode) = buildNode("if");
                (yyval.typeNode)->childNode = (yyvsp[-3].typeNode);
                (yyvsp[-3].typeNode)->brotherNode = (yyvsp[0].typeNode);

                // fecha o Scopo
                showScope(activeScope);
                Scope *auxScope = activeScope->parentScope;
                freeScope(activeScope);
                activeScope = auxScope;
        }
#line 3797 "sintatic.tab.c"
    break;

  case 47: /* condition_expr: CMD_IF OPEN_PAREN error CLS_PAREN error  */
#line 322 "sintatic/sintatic.y"
                                                  {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3805 "sintatic.tab.c"
    break;

  case 49: /* $@7: %empty  */
#line 329 "sintatic/sintatic.y"
                                             {
            // novo Scopo    
            Scope *newScope = buildScope("Block ELSE");
            newScope->parentScope = activeScope; 
            activeScope = newScope;

        }
#line 3817 "sintatic.tab.c"
    break;

  case 50: /* block_cond: simple_complex_block_stmt CMD_ELSE $@7 simple_complex_block_stmt  */
#line 335 "sintatic/sintatic.y"
                                    {
                (yyval.typeNode) = buildNode("if_stmt");
                (yyval.typeNode)->childNode = (yyvsp[-3].typeNode);

                (yyval.typeNode)->brotherNode = buildNode("else");
                (yyval.typeNode)->brotherNode->childNode = (yyvsp[0].typeNode);

                // fecha o Scopo
                showScope(activeScope);
                Scope *auxScope = activeScope->parentScope;
                freeScope(activeScope);
                activeScope = auxScope;
        }
#line 3835 "sintatic.tab.c"
    break;

  case 53: /* return_stmt: CMD_RETURN SEMICOLON  */
#line 356 "sintatic/sintatic.y"
                             {
              (yyval.typeNode) = buildNode("return");  
        }
#line 3843 "sintatic.tab.c"
    break;

  case 54: /* return_stmt: CMD_RETURN expr SEMICOLON  */
#line 359 "sintatic/sintatic.y"
                                     {
                (yyval.typeNode) = buildNode("return");  
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3852 "sintatic.tab.c"
    break;

  case 55: /* return_stmt: CMD_RETURN error SEMICOLON  */
#line 363 "sintatic/sintatic.y"
                                     {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3860 "sintatic.tab.c"
    break;

  case 56: /* return_stmt: CMD_RETURN expr error  */
#line 366 "sintatic/sintatic.y"
                                {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3868 "sintatic.tab.c"
    break;

  case 57: /* $@8: %empty  */
#line 372 "sintatic/sintatic.y"
                                                            {
                Scope *newScope = buildScope("Block FORALL ");
                newScope->parentScope = activeScope;
                activeScope = newScope; 
        }
#line 3878 "sintatic.tab.c"
    break;

  case 58: /* set_stmt: CMD_FORALL OPEN_PAREN var IN_OP func_expr CLS_PAREN $@8 simple_complex_block_stmt  */
#line 376 "sintatic/sintatic.y"
                                    {
                (yyval.typeNode) = buildNode("forall");  
                (yyval.typeNode)->childNode = (yyvsp[-5].typeNode);
                (yyvsp[-5].typeNode)->brotherNode = (yyvsp[-3].typeNode);
                (yyvsp[-3].typeNode)->brotherNode = (yyvsp[0].typeNode);

                // fecha o Scopo
                showScope(activeScope);
                Scope *auxScope = activeScope->parentScope;
                freeScope(activeScope);
                activeScope = auxScope;
        }
#line 3895 "sintatic.tab.c"
    break;

  case 59: /* $@9: %empty  */
#line 388 "sintatic/sintatic.y"
                                                        {
                Scope *newScope = buildScope("Block FORALL ");
                newScope->parentScope = activeScope;
                activeScope = newScope; 
        }
#line 3905 "sintatic.tab.c"
    break;

  case 60: /* set_stmt: CMD_FORALL OPEN_PAREN var IN_OP var CLS_PAREN $@9 simple_complex_block_stmt  */
#line 392 "sintatic/sintatic.y"
                                    {
                (yyval.typeNode) = buildNode("forall");  
                (yyval.typeNode)->childNode = (yyvsp[-5].typeNode);
                (yyvsp[-5].typeNode)->brotherNode = (yyvsp[-3].typeNode);
                (yyvsp[-3].typeNode)->brotherNode = (yyvsp[0].typeNode);

                // fecha o Scopo
                showScope(activeScope);
                Scope *auxScope = activeScope->parentScope;
                freeScope(activeScope);
                activeScope = auxScope;
        }
#line 3922 "sintatic.tab.c"
    break;

  case 62: /* set_stmt: CMD_FORALL OPEN_PAREN error IN_OP error CLS_PAREN simple_complex_block_stmt  */
#line 405 "sintatic/sintatic.y"
                                                                                      {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3930 "sintatic.tab.c"
    break;

  case 63: /* set_stmt: CMD_FORALL OPEN_PAREN error IN_OP func_expr CLS_PAREN error  */
#line 408 "sintatic/sintatic.y"
                                                                      {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3938 "sintatic.tab.c"
    break;

  case 64: /* set_stmt: CMD_FORALL OPEN_PAREN var IN_OP error CLS_PAREN simple_complex_block_stmt  */
#line 411 "sintatic/sintatic.y"
                                                                                    {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3946 "sintatic.tab.c"
    break;

  case 66: /* expr_stmt: expr error  */
#line 417 "sintatic/sintatic.y"
                     {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3954 "sintatic.tab.c"
    break;

  case 69: /* assign: var ATRIBUTION expr  */
#line 429 "sintatic/sintatic.y"
                            {
              (yyval.typeNode) = buildNode(" = ");
              (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 3964 "sintatic.tab.c"
    break;

  case 70: /* func_expr: ADD_FUNC OPEN_PAREN func_in_expr CLS_PAREN  */
#line 437 "sintatic/sintatic.y"
                                                   {
                (yyval.typeNode) = buildNode(" add ");
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3973 "sintatic.tab.c"
    break;

  case 71: /* func_expr: REMOVE_FUNC OPEN_PAREN func_in_expr CLS_PAREN  */
#line 441 "sintatic/sintatic.y"
                                                        {
                (yyval.typeNode) = buildNode(" remove ");
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3982 "sintatic.tab.c"
    break;

  case 72: /* func_expr: EXIST_FUNC OPEN_PAREN func_in_expr CLS_PAREN  */
#line 445 "sintatic/sintatic.y"
                                                       {
                (yyval.typeNode) = buildNode(" exist ");
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3991 "sintatic.tab.c"
    break;

  case 73: /* func_expr: ADD_FUNC OPEN_PAREN error CLS_PAREN  */
#line 449 "sintatic/sintatic.y"
                                              {
             (yyval.typeNode) = buildNode("SINTATIC ERR!");   
        }
#line 3999 "sintatic.tab.c"
    break;

  case 74: /* func_expr: REMOVE_FUNC OPEN_PAREN error CLS_PAREN  */
#line 452 "sintatic/sintatic.y"
                                                 {
             (yyval.typeNode) = buildNode("SINTATIC ERR!");   
        }
#line 4007 "sintatic.tab.c"
    break;

  case 75: /* func_expr: EXIST_FUNC OPEN_PAREN error CLS_PAREN  */
#line 455 "sintatic/sintatic.y"
                                                {
             (yyval.typeNode) = buildNode("SINTATIC ERR!");    
        }
#line 4015 "sintatic.tab.c"
    break;

  case 76: /* is_set_expr: IS_SET_FUNC OPEN_PAREN var CLS_PAREN  */
#line 461 "sintatic/sintatic.y"
                                             {
              (yyval.typeNode) = buildNode(" is_set ");
              (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 4024 "sintatic.tab.c"
    break;

  case 77: /* is_set_expr: IS_SET_FUNC OPEN_PAREN func_expr CLS_PAREN  */
#line 465 "sintatic/sintatic.y"
                                                     {
                (yyval.typeNode) = buildNode(" is_set ");
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 4033 "sintatic.tab.c"
    break;

  case 78: /* is_set_expr: IS_SET_FUNC OPEN_PAREN error CLS_PAREN  */
#line 469 "sintatic/sintatic.y"
                                                 {
             (yyval.typeNode) = buildNode("SINTATIC ERR!");    
        }
#line 4041 "sintatic.tab.c"
    break;

  case 79: /* func_in_expr: op_or_expr IN_OP var  */
#line 474 "sintatic/sintatic.y"
                             {
                (yyval.typeNode) = buildNode(" IN ");
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 4051 "sintatic.tab.c"
    break;

  case 80: /* func_in_expr: op_or_expr IN_OP func_expr  */
#line 479 "sintatic/sintatic.y"
                                     {
                (yyval.typeNode) = buildNode(" IN ");
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 4061 "sintatic.tab.c"
    break;

  case 81: /* op_or_expr: op_or_expr OP_OR op_and_expr  */
#line 487 "sintatic/sintatic.y"
                                     {
              (yyval.typeNode) = buildNode("or");
              (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 4071 "sintatic.tab.c"
    break;

  case 84: /* op_and_expr: op_and_expr OP_AND logical_expr  */
#line 497 "sintatic/sintatic.y"
                                        {
              (yyval.typeNode) = buildNode("and");
              (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);  
        }
#line 4081 "sintatic.tab.c"
    break;

  case 86: /* logical_expr: logical_expr logical_ops arithmetic_expr  */
#line 506 "sintatic/sintatic.y"
                                                {
             (yyval.typeNode) = (yyvsp[-1].typeNode);
             (yyvsp[-1].typeNode)->childNode = (yyvsp[-2].typeNode); 
             (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode); 
       }
#line 4091 "sintatic.tab.c"
    break;

  case 88: /* arithmetic_expr: arithmetic_expr adds_op mult_expr  */
#line 515 "sintatic/sintatic.y"
                                          {
              (yyval.typeNode) = (yyvsp[-1].typeNode);
              (yyvsp[-1].typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 4101 "sintatic.tab.c"
    break;

  case 90: /* mult_expr: mult_expr mult_ops first_term  */
#line 524 "sintatic/sintatic.y"
                                      {
              (yyval.typeNode) = (yyvsp[-1].typeNode);
              (yyvsp[-1].typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 4111 "sintatic.tab.c"
    break;

  case 93: /* first_term: OP_NEG term  */
#line 534 "sintatic/sintatic.y"
                      {
              (yyval.typeNode) = buildNode(" ! ");
              (yyval.typeNode)->childNode = (yyvsp[0].typeNode);
        }
#line 4120 "sintatic.tab.c"
    break;

  case 94: /* first_term: adds_op term  */
#line 538 "sintatic/sintatic.y"
                       {
              (yyval.typeNode) = (yyvsp[-1].typeNode);
              (yyvsp[-1].typeNode)->childNode = (yyvsp[0].typeNode);
        }
#line 4129 "sintatic.tab.c"
    break;

  case 95: /* first_term: var OPEN_PAREN list_expr CLS_PAREN  */
#line 542 "sintatic/sintatic.y"
                                             {
                (yyval.typeNode) = (yyvsp[-3].typeNode);
                (yyvsp[-3].typeNode)->brotherNode = (yyvsp[-1].typeNode);
        }
#line 4138 "sintatic.tab.c"
    break;

  case 97: /* first_term: var OPEN_PAREN error CLS_PAREN  */
#line 547 "sintatic/sintatic.y"
                                         {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 4146 "sintatic.tab.c"
    break;

  case 98: /* first_term: error OPEN_PAREN CLS_PAREN  */
#line 550 "sintatic/sintatic.y"
                                      {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 4154 "sintatic.tab.c"
    break;

  case 101: /* term: OPEN_PAREN expr CLS_PAREN  */
#line 558 "sintatic/sintatic.y"
                                    {
                (yyval.typeNode) = (yyvsp[-1].typeNode);
        }
#line 4162 "sintatic.tab.c"
    break;

  case 102: /* term: OPEN_PAREN error CLS_PAREN  */
#line 561 "sintatic/sintatic.y"
                                      {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 4170 "sintatic.tab.c"
    break;

  case 103: /* logical_ops: LT_OP  */
#line 567 "sintatic/sintatic.y"
              {
                (yyval.typeNode) = buildNode("LT_OP");
        }
#line 4178 "sintatic.tab.c"
    break;

  case 104: /* logical_ops: LTE_OP  */
#line 570 "sintatic/sintatic.y"
                  {
                (yyval.typeNode) = buildNode("LTE_OP");
        }
#line 4186 "sintatic.tab.c"
    break;

  case 105: /* logical_ops: GT_OP  */
#line 573 "sintatic/sintatic.y"
                 {
                (yyval.typeNode) = buildNode("GT_OP");
        }
#line 4194 "sintatic.tab.c"
    break;

  case 106: /* logical_ops: GTE_OP  */
#line 576 "sintatic/sintatic.y"
                  {
                (yyval.typeNode) = buildNode("GTE_OP");
        }
#line 4202 "sintatic.tab.c"
    break;

  case 107: /* logical_ops: NEQ_OP  */
#line 579 "sintatic/sintatic.y"
                  {
                (yyval.typeNode) = buildNode("NEQ_OP");
        }
#line 4210 "sintatic.tab.c"
    break;

  case 108: /* logical_ops: EQUAL_OP  */
#line 582 "sintatic/sintatic.y"
                    {
                (yyval.typeNode) = buildNode("EQUAL_OP");
        }
#line 4218 "sintatic.tab.c"
    break;

  case 109: /* str_expr: STRING  */
#line 588 "sintatic/sintatic.y"
               {
            (yyval.typeNode) = buildNode((yyvsp[0].sval));
            free((yyvsp[0].sval));
        }
#line 4227 "sintatic.tab.c"
    break;

  case 112: /* list_expr: error COMMA error  */
#line 597 "sintatic/sintatic.y"
                            {
             (yyval.typeNode) = buildNode("SINTATIC ERR!");   
        }
#line 4235 "sintatic.tab.c"
    break;

  case 113: /* var: ID  */
#line 603 "sintatic/sintatic.y"
         {
            (yyval.typeNode) = buildNode((yyvsp[0].sval));
            free((yyvsp[0].sval));
       }
#line 4244 "sintatic.tab.c"
    break;

  case 114: /* adds_op: ADD_OP  */
#line 610 "sintatic/sintatic.y"
             {
            (yyval.typeNode) = buildNode((yyvsp[0].sval)); 
            free((yyvsp[0].sval)); 
      }
#line 4253 "sintatic.tab.c"
    break;

  case 115: /* mult_ops: MULT_OP  */
#line 617 "sintatic/sintatic.y"
              {
              (yyval.typeNode) = buildNode((yyvsp[0].sval)); 
              free((yyvsp[0].sval));  
      }
#line 4262 "sintatic.tab.c"
    break;

  case 116: /* num_tipos: FLOAT  */
#line 624 "sintatic/sintatic.y"
              {
              (yyval.typeNode) = buildNode((yyvsp[0].sval));
              free((yyvsp[0].sval));
        }
#line 4271 "sintatic.tab.c"
    break;

  case 117: /* num_tipos: INT  */
#line 628 "sintatic/sintatic.y"
              {
              (yyval.typeNode) = buildNode((yyvsp[0].sval));
              free((yyvsp[0].sval));
        }
#line 4280 "sintatic.tab.c"
    break;

  case 118: /* num_tipos: EMPTY  */
#line 632 "sintatic/sintatic.y"
                {
              (yyval.typeNode) = buildNode("EMPTY");
        }
#line 4288 "sintatic.tab.c"
    break;

  case 119: /* tipos: TYPE_INT  */
#line 638 "sintatic/sintatic.y"
                 {
             (yyval.typeNode) = buildNode("TYPE_INT");
        }
#line 4296 "sintatic.tab.c"
    break;

  case 120: /* tipos: TYPE_FLOAT  */
#line 641 "sintatic/sintatic.y"
                     {
              (yyval.typeNode) = buildNode("TYPE_FLOAT");
        }
#line 4304 "sintatic.tab.c"
    break;

  case 121: /* tipos: TYPE_SET  */
#line 644 "sintatic/sintatic.y"
                    {
              (yyval.typeNode) = buildNode("TYPE_SET");
        }
#line 4312 "sintatic.tab.c"
    break;

  case 122: /* tipos: TYPE_ELEM  */
#line 647 "sintatic/sintatic.y"
                    {
             (yyval.typeNode) = buildNode("TYPE_ELEM");
        }
#line 4320 "sintatic.tab.c"
    break;


#line 4324 "sintatic.tab.c"

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

#line 651 "sintatic/sintatic.y"



int yyerror(const char* errormsg) {
  printf(" ----------------------------- ERROR ---------------------------------------------- \n");
  fprintf(stderr, "%s at line:%d, column:%d,\n", errormsg, line, column);
  printf(" ------------------------------------------------------------------------------------ \n");
  printf("\n");
  return 0;
}

int main(int argc, char *argv[]) {
   
     yyin = fopen(argv[1], "r");
     activeScope = buildScope("GLOBAL SCOPE");  
     yyparse();

     showScope(activeScope);
     freeScope(activeScope);
     showTree(origin, 0); 

     clearTree(origin);
    
    fclose(yyin);
    yylex_destroy();
    return 0;
}
