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
  #include "tac.h"

  extern int yylex();
  extern int yylex_destroy();
  extern int yyerror(const char *);

  extern FILE *yyin;
  int line = 1;
  int column = 1;
  int isMain = 0;
  int numFuncArgs = 0;
  int numListArgs = 0;   
  int registrador = 0; 
  int globalError = 0;  
  int jumpReg = 5;
  int isReturn = 0;
  int isFor = 0;
  int jumpFor = 0;
  int onMain = 0;
  int onReturn = 0;
  char* typeManyDeclaration;
  char* threeAddress;
  char* table;
  char* tacFor;
  
  
  TreeNodes* origin;
  Scope* activeScope;
  Symbol* funcAux;

#line 109 "sintatic.tab.c"

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
  YYSYMBOL_CHARACTER = 11,                 /* CHARACTER  */
  YYSYMBOL_MAIN = 12,                      /* MAIN  */
  YYSYMBOL_EMPTY = 13,                     /* EMPTY  */
  YYSYMBOL_TYPE_INT = 14,                  /* TYPE_INT  */
  YYSYMBOL_TYPE_FLOAT = 15,                /* TYPE_FLOAT  */
  YYSYMBOL_TYPE_ELEM = 16,                 /* TYPE_ELEM  */
  YYSYMBOL_TYPE_SET = 17,                  /* TYPE_SET  */
  YYSYMBOL_CMD_IF = 18,                    /* CMD_IF  */
  YYSYMBOL_CMD_FOR = 19,                   /* CMD_FOR  */
  YYSYMBOL_CMD_FORALL = 20,                /* CMD_FORALL  */
  YYSYMBOL_GT_OP = 21,                     /* GT_OP  */
  YYSYMBOL_LT_OP = 22,                     /* LT_OP  */
  YYSYMBOL_LTE_OP = 23,                    /* LTE_OP  */
  YYSYMBOL_GTE_OP = 24,                    /* GTE_OP  */
  YYSYMBOL_NEQ_OP = 25,                    /* NEQ_OP  */
  YYSYMBOL_EQUAL_OP = 26,                  /* EQUAL_OP  */
  YYSYMBOL_ADD_FUNC = 27,                  /* ADD_FUNC  */
  YYSYMBOL_IS_SET_FUNC = 28,               /* IS_SET_FUNC  */
  YYSYMBOL_REMOVE_FUNC = 29,               /* REMOVE_FUNC  */
  YYSYMBOL_EXIST_FUNC = 30,                /* EXIST_FUNC  */
  YYSYMBOL_IN_OP = 31,                     /* IN_OP  */
  YYSYMBOL_OP_OR = 32,                     /* OP_OR  */
  YYSYMBOL_OP_AND = 33,                    /* OP_AND  */
  YYSYMBOL_OP_NEG = 34,                    /* OP_NEG  */
  YYSYMBOL_ATRIBUTION = 35,                /* ATRIBUTION  */
  YYSYMBOL_CMD_WRITE = 36,                 /* CMD_WRITE  */
  YYSYMBOL_CMD_WRITELN = 37,               /* CMD_WRITELN  */
  YYSYMBOL_CMD_READ = 38,                  /* CMD_READ  */
  YYSYMBOL_CMD_RETURN = 39,                /* CMD_RETURN  */
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
  YYSYMBOL_51_1 = 51,                      /* $@1  */
  YYSYMBOL_52_2 = 52,                      /* $@2  */
  YYSYMBOL_53_3 = 53,                      /* $@3  */
  YYSYMBOL_many_declaration = 54,          /* many_declaration  */
  YYSYMBOL_func_declaration = 55,          /* func_declaration  */
  YYSYMBOL_56_4 = 56,                      /* $@4  */
  YYSYMBOL_57_5 = 57,                      /* $@5  */
  YYSYMBOL_58_6 = 58,                      /* $@6  */
  YYSYMBOL_59_7 = 59,                      /* $@7  */
  YYSYMBOL_list_args = 60,                 /* list_args  */
  YYSYMBOL_blockStmt = 61,                 /* blockStmt  */
  YYSYMBOL_list_statements = 62,           /* list_statements  */
  YYSYMBOL_stmt = 63,                      /* stmt  */
  YYSYMBOL_input_output_expr = 64,         /* input_output_expr  */
  YYSYMBOL_write_commands = 65,            /* write_commands  */
  YYSYMBOL_iteration_expr = 66,            /* iteration_expr  */
  YYSYMBOL_67_8 = 67,                      /* $@8  */
  YYSYMBOL_68_9 = 68,                      /* $@9  */
  YYSYMBOL_69_10 = 69,                     /* $@10  */
  YYSYMBOL_70_11 = 70,                     /* $@11  */
  YYSYMBOL_condition_expr = 71,            /* condition_expr  */
  YYSYMBOL_72_12 = 72,                     /* $@12  */
  YYSYMBOL_block_cond = 73,                /* block_cond  */
  YYSYMBOL_74_13 = 74,                     /* $@13  */
  YYSYMBOL_simple_complex_block_stmt = 75, /* simple_complex_block_stmt  */
  YYSYMBOL_return_stmt = 76,               /* return_stmt  */
  YYSYMBOL_set_stmt = 77,                  /* set_stmt  */
  YYSYMBOL_78_14 = 78,                     /* $@14  */
  YYSYMBOL_79_15 = 79,                     /* $@15  */
  YYSYMBOL_expr_stmt = 80,                 /* expr_stmt  */
  YYSYMBOL_expr = 81,                      /* expr  */
  YYSYMBOL_assign = 82,                    /* assign  */
  YYSYMBOL_func_expr = 83,                 /* func_expr  */
  YYSYMBOL_is_set_expr = 84,               /* is_set_expr  */
  YYSYMBOL_func_in_expr = 85,              /* func_in_expr  */
  YYSYMBOL_op_or_expr = 86,                /* op_or_expr  */
  YYSYMBOL_op_and_expr = 87,               /* op_and_expr  */
  YYSYMBOL_logical_expr = 88,              /* logical_expr  */
  YYSYMBOL_arithmetic_expr = 89,           /* arithmetic_expr  */
  YYSYMBOL_mult_expr = 90,                 /* mult_expr  */
  YYSYMBOL_first_term = 91,                /* first_term  */
  YYSYMBOL_term = 92,                      /* term  */
  YYSYMBOL_logical_ops = 93,               /* logical_ops  */
  YYSYMBOL_str_expr = 94,                  /* str_expr  */
  YYSYMBOL_char_expr = 95,                 /* char_expr  */
  YYSYMBOL_list_expr = 96,                 /* list_expr  */
  YYSYMBOL_var = 97,                       /* var  */
  YYSYMBOL_adds_op = 98,                   /* adds_op  */
  YYSYMBOL_mult_ops = 99,                  /* mult_ops  */
  YYSYMBOL_num_tipos = 100,                /* num_tipos  */
  YYSYMBOL_tipos = 101                     /* tipos  */
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
#define YYLAST   9114

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  130
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  702

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
static const yytype_int16 yyrline[] =
{
       0,   111,   111,   119,   126,   127,   131,   132,   136,   136,
     159,   159,   159,   182,   186,   200,   215,   224,   215,   250,
     259,   250,   286,   290,   298,   317,   334,   340,   343,   349,
     353,   357,   358,   359,   360,   361,   362,   363,   364,   368,
     387,   408,   428,   450,   454,   461,   464,   470,   476,   481,
     486,   470,   512,   512,   532,   539,   544,   544,   577,   578,
     582,   586,   618,   622,   629,   629,   650,   650,   676,   677,
     681,   685,   691,   692,   699,   700,   704,   759,   763,   767,
     771,   774,   777,   783,   792,   796,   802,   812,   825,   901,
     902,   906,   978,   982,  1153,  1157,  1288,  1292,  1424,  1428,
    1429,  1433,  1452,  1474,  1489,  1492,  1498,  1505,  1506,  1509,
    1518,  1524,  1527,  1530,  1533,  1536,  1539,  1545,  1555,  1572,
    1584,  1596,  1602,  1609,  1616,  1623,  1639,  1658,  1661,  1664,
    1667
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
  "ID", "INT", "FLOAT", "ADD_OP", "MULT_OP", "STRING", "CHARACTER", "MAIN",
  "EMPTY", "TYPE_INT", "TYPE_FLOAT", "TYPE_ELEM", "TYPE_SET", "CMD_IF",
  "CMD_FOR", "CMD_FORALL", "GT_OP", "LT_OP", "LTE_OP", "GTE_OP", "NEQ_OP",
  "EQUAL_OP", "ADD_FUNC", "IS_SET_FUNC", "REMOVE_FUNC", "EXIST_FUNC",
  "IN_OP", "OP_OR", "OP_AND", "OP_NEG", "ATRIBUTION", "CMD_WRITE",
  "CMD_WRITELN", "CMD_READ", "CMD_RETURN", "SEMICOLON", "COMMA",
  "OPEN_PAREN", "CLS_PAREN", "OP_CUR_BRACKET", "CLS_CUR_BRACKET",
  "$accept", "program", "list_declaration", "main_declaration",
  "var_declaration", "$@1", "$@2", "$@3", "many_declaration",
  "func_declaration", "$@4", "$@5", "$@6", "$@7", "list_args", "blockStmt",
  "list_statements", "stmt", "input_output_expr", "write_commands",
  "iteration_expr", "$@8", "$@9", "$@10", "$@11", "condition_expr", "$@12",
  "block_cond", "$@13", "simple_complex_block_stmt", "return_stmt",
  "set_stmt", "$@14", "$@15", "expr_stmt", "expr", "assign", "func_expr",
  "is_set_expr", "func_in_expr", "op_or_expr", "op_and_expr",
  "logical_expr", "arithmetic_expr", "mult_expr", "first_term", "term",
  "logical_ops", "str_expr", "char_expr", "list_expr", "var", "adds_op",
  "mult_ops", "num_tipos", "tipos", YY_NULLPTR
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

#define YYPACT_NINF (-535)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-131)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     642,    96,    29,    87,   137,   221,    13,   897,  1098,  1236,
    1269,   230,  1312,  -535,   -24,  1345,   261,    12,   367,    30,
      31,    60,     2,     8,   184,    58,    52,   184,  1373,    27,
      76,   104,    42,   222,    27,    83,  4326,  1489,    86,   152,
     135,    58,  1778,   101,   218,  2759,  6435,   304,  6461,   139,
     166,   182,   211,   236,   243,   247,   397,   270,   280,   290,
    1378,   668,  1821,  4368,   291,  4410,  4452,   300,  4494,  4536,
    4578,  4620,  4662,    16,   305,    18,   308,    90,   130,    17,
    6929,   941,  6487,  6513,  6539,  1316,   397,  6565,    58,    27,
     184,  1871,   317,    27,   346,  1117,   372,   119,   132,   763,
     177,   486,  6591,  6617,   204,   278,  4704,    22,  1734,   568,
     352,  2051,   366,   263,  4746,  4788,  4830,  4872,   210,   742,
     742,   927,  1302,  1429,  1468,  1712,  2042,   742,   742,  2202,
     742,  1894,   320,  6643,   611,  2096,   355,  2141,  6669,   727,
     383,   428,   426,   454,   790,    -6,   833,   466,   472,   475,
     867,   684,   873,   698,   509,   515,  4914,  4956,  4998,  6695,
    6721,   883,   519,   522,   571,   577,   580,   133,   185,   487,
      54,  6955,  6903,  6747,  6773,   561,   381,  6799,   332,   588,
     634,  6048,   598,   606,   503,   782,    39,    65,   643,   663,
     673,    66,    67,    77,   103,   686,   691,   696,   702,   716,
     718,   759,  6825,  1941,  6851,  5040,  6088,  1985,   724,   730,
     736,   745,   748,  5082,  5124,  5166,  5208,  5250,  5292,   752,
     910,   762,   985,  1058,  5334,  1190,  1894,  6128,   784,  6128,
    6168,  6208,  6248,   767,  5376,  5418,  5460,  6128,  6128,  6128,
     805,  5502,  5544,  5586,   428,   771,  6288,  6128,  5628,   814,
     816,   819,   823,   916,   395,  1500,  5670,  6877,  1818,  7027,
    7573,  7599,  7625,   803,   820,   826,   414,  1994,   813,   722,
     746,   120,  6942,  1024,  7651,  7677,  7703,  7053,   414,  7729,
    2254,   844,  8197,  8649,  8668,  8687,   468,  2146,   635,  3107,
    9010,  8706,  8725,  8744,  8223,   468,  8763,   838,   841,   190,
     852,   865,   881,   889,  8145,  8249,  8269,  8289,   894,   896,
     903,   518,  2193,   977,   136,   140,   -11,  9055,   639,  8309,
    8329,  8349,  8171,   518,  8369,  6975,  7079,  7105,  7131,   978,
     989,   996,   590,  2615,   429,   255,   353,   409,  1553,  7755,
    7157,  7183,  7209,  7001,   590,  7235,    31,  1004,  1001,  1015,
     314,  2270,  1018,   461,  1026,  1047,  1062,  1069,  1697,  5712,
    1260,  1608,  1087,  1651,  2087,  2315,  2804,  3038,   114,  1061,
    1096,    58,  5754,  5796,  5838,  1108,  2366,  2384,  2453,  7781,
    7807,  7833,   954,  1102,  2463,  2463,  2463,  2463,  2463,   363,
    7859,  8782,  8801,  8820,   967,  1105,  2270,  2270,  2270,  2270,
     732,  8839,  7885,  2548,  2564,  2595,  1109,  2674,  2846,  2856,
    8389,  8409,  8429,  1009,  1127,   326,  2878,  2878,  2878,  2878,
    2878,   793,  8449,  2900,  3006,  3136,  7261,  7287,  7313,  1090,
    1133,   558,  6328,  6328,  6328,  6328,  6328,   853,  7339,    58,
    5880,  8858,   794,  1139,  1150,  1157,   799,   807,  1171,   654,
    7365,  3081,  2705,   372,   213,   240,   498,  3146,   117,  3189,
    1115,   424,  3231,  3276,  3318,  3360,  1146,  5922,  1134,  2744,
    1173,   847,  1179,   952,  1196,   994,  7911,  7937,  1183,   594,
    9042,  8119,  7963,  7989,   493,  8015,  1203,  8877,  8896,  9081,
    9029,  8915,  8934,   936,  8953,  1206,  1201,   997,  1229,  1010,
    1249,  1038,  8469,  1280,  1059,  1321,  1085,  1354,  1088,  8489,
    8509,   251,  1212,  1215,  1220,   327,   437,   348,  9068,  8629,
    8529,  8549,  1041,  8569,  1252,  1405,  1118,  1407,  1135,  1415,
    1137,  7391,  7417,   447,  1262,  1264,  1272,   703,   772,  1274,
     559,  6916,  8041,  7443,  7469,  1335,  7495,  1268,    42,  6337,
    6346,  6359,  1436,  1290,   428,  1319,  1361,  1300,  1309,  3402,
    3444,  3486,  3528,  1455,  1366,  1376,  1398,    31,  1414,  5964,
    1402,  1419,  1422,  1425,  1427,  1437,  1439,  8067,  8093,  8972,
    8991,   219,   248,   276,   298,   334,   351,  1445,  1448,  1453,
    1459,  1471,  1480,  6368,  6377,  6390,  8589,  8609,   527,   538,
     565,   658,   666,   678,  6399,  6408,  6421,  7521,  7547,  1501,
    1476,  1140,  1487,  1169,  1494,  1199,  1403,  6048,  1503,   546,
     862,  1519,  1531,  1532,  1541,  1542,  1543,    58,  3570,  1496,
    1202,  1508,  1250,  1511,  1287,  1513,  1289,  1515,  1337,  1526,
    1350,  6006,  1371,  1385,  1395,  1401,  1421,  1424,  3612,  6088,
    1985,  1491,  1523,  1544,  1545,  1549,  3654,  3696,  3738,  3780,
    3822,  3864,    42,   614,   815,   868,  1003,  1095,  1391,   845,
     898,   912,   939,   944,   975,  3906,  3948,  1894,  6088,  1594,
    6088,  6168,  6208,  1559,  6248,  1560,  3990,  4032,  4074,  6088,
    6088,  4116,  6088,   805,  4158,  4200,  4242,   428,  1561,  6288,
    6088,  4284
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -535,  -535,  -535,  1598,     4,  -132,  -338,  -534,   -38,  -535,
    -535,  -535,  -535,  -535,   -18,     9,   -59,   -35,  -194,  -178,
    -173,  1153,   957,   915,   911,  -141,  1000,   969,   935,   -50,
    -123,  -106,   949,   938,   -71,  1240,  -136,  2610,   -56,  2563,
    2246,  2301,  2178,  1832,  1750,  1364,   485,  -257,  1172,  1178,
    -193,    28,   721,  -239,  1128,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,    63,    22,    25,    40,    32,    10,
      27,    43,    24,    38,    30,   222,    64,   223,    66,    67,
      68,   141,   226,   244,   247,    69,   206,   224,   239,   225,
      70,    71,   237,   238,    72,    73,    74,    75,    76,    77,
     146,   288,   289,   290,   291,   292,   293,   127,   165,   166,
     179,   294,   295,   130,   296,    88
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,    65,   347,    92,     9,   182,   112,    11,   439,    35,
     221,     9,   361,    13,   609,   386,    12,   114,   -89,   -75,
     -89,   -89,   417,   157,    31,   -90,   -90,    31,   362,   -89,
      65,    23,   397,   363,  -127,   388,   -10,   187,    37,    18,
     -80,  -127,    28,    42,   -19,   -19,   -19,   -19,   -89,   -89,
     120,    29,   399,    33,    19,   -88,   115,   -89,   -75,    39,
     418,    26,   158,   253,    85,   364,   -77,   -81,   -78,    33,
     369,    36,   136,   -19,   -16,   -16,   -16,   -16,   -82,   -80,
     420,   434,   -11,   365,   103,   -88,   -88,   120,   108,   277,
      31,   -90,  -128,    85,   -88,    34,    -5,    -5,   135,  -128,
     366,   436,   137,   -16,   -79,   -77,   -81,   -78,   245,   254,
      -5,    -5,    -5,    -5,   103,   462,   134,   -82,   560,   -20,
     142,   -90,   -90,   277,   281,   143,   -17,   149,   683,    89,
     -90,   -74,   155,   144,   -87,   367,    12,   282,   283,   284,
      47,   277,  -130,   -79,    93,   285,   168,   108,   108,  -130,
     370,   -89,   -89,   385,   463,   108,   108,   561,   108,   322,
     343,   118,   119,   -89,   -87,   -87,   286,   -90,   -90,   183,
     -74,   415,   416,   -87,   287,    91,   -90,   234,   150,   236,
     -74,    95,   282,   283,   284,    47,   -86,   241,   242,   243,
     285,  -122,   374,    90,   374,   -25,   486,   248,   249,   250,
     251,   252,   374,   374,   374,   154,   371,   495,    96,   297,
     360,   286,   374,   212,   555,   299,   -86,   -86,   281,   287,
     -80,  -122,  -122,   386,    97,   -86,  -129,   -26,   524,   627,
    -122,   343,   397,  -129,    85,    16,   373,   300,   373,   301,
     302,   557,    17,   388,   547,   297,   373,   373,   373,   -77,
     -80,   -80,   399,    98,   322,    85,   373,    85,   256,   -80,
      94,   418,   -15,    41,   161,    85,    85,    85,   259,   260,
     261,    47,   375,   162,   163,    85,   262,   -81,    99,   -77,
     -77,   420,  -122,  -122,   434,   100,   -90,   -90,   -77,   101,
     263,  -122,   264,   265,   381,   277,   -90,   266,   -90,   -78,
     460,  -122,  -122,  -122,   436,   267,   381,   -81,   -81,  -123,
    -123,  -123,   -45,   468,   393,   277,   -81,  -123,   156,   442,
      94,   176,   -46,   393,    65,   325,   326,   327,    47,   -78,
     -78,   511,   104,   328,   568,   -82,   111,    65,   -78,   412,
     277,   443,   113,   444,   445,   116,  -123,   329,   117,   330,
     331,   412,   -79,   512,   332,   513,   514,   -14,   -87,   -87,
     428,   277,   333,   177,   484,   -82,   -82,   -87,   325,   326,
     327,    47,   428,   203,   -82,  -120,   328,   -47,   447,   -88,
     -88,   417,   -79,   -79,   431,   432,   108,    85,   -88,   138,
     329,   -79,   330,   331,   -74,   160,   -74,   332,   -24,   466,
      85,   548,   257,    45,    46,   333,   485,    -8,    20,    21,
      48,   -29,   277,   277,   277,   277,   277,   343,   618,   379,
     260,   261,   201,   352,   202,   563,   181,   262,   343,   259,
     260,   261,    47,   348,   162,   163,  -122,   262,  -122,    61,
     -89,   -89,   433,   516,   322,   322,   322,   322,   322,   343,
     -89,   263,   -89,   264,   265,   361,   267,   184,   266,   538,
     343,   343,   343,   343,   343,   343,   267,    33,   -86,   -86,
     -75,   362,   -75,   391,   283,   284,   363,   -86,  -122,  -122,
     277,   285,   556,   558,   361,   185,   361,   152,  -122,   277,
    -122,   282,   283,   284,    47,   361,   361,   277,   361,   285,
     362,   451,   362,    94,   208,   363,   361,   363,   364,   188,
     287,   362,   362,   369,   362,   189,   363,   363,   190,   363,
     286,    84,   362,   410,   305,   306,   365,   363,   287,    94,
     263,   307,   264,   265,   201,   352,   577,   364,   559,   364,
      94,   102,   369,   366,   369,    84,   276,   651,   364,   364,
      84,   364,   195,   369,   369,   365,   369,   365,   196,   364,
     312,   698,  -117,   533,   369,  -118,   365,   365,   -80,   365,
     -80,   133,   366,   263,   366,   264,   265,   365,   367,   -77,
     276,   -77,   183,   366,   366,   534,   366,   535,   536,   662,
     -88,   -88,   433,   370,   366,   426,   326,   327,   276,   676,
     -88,   -76,   -88,   328,    84,    84,   -81,   367,   -81,   367,
     298,   159,    84,    84,   198,    84,   321,   342,   367,   367,
     199,   367,   370,   200,   370,   -88,   -88,   385,   686,   367,
     688,   204,   333,   370,   370,   205,   370,   -88,   207,   694,
     695,   131,   696,     1,   370,   -80,   -80,   280,   655,   371,
     701,    -8,   346,   360,   -80,    33,     2,     3,     4,     5,
     -94,   -94,   -94,   -94,   -94,   -94,   -89,   -89,   396,   109,
     -94,   -94,   -94,   259,   260,   261,    47,    85,   371,   -94,
     371,   262,   360,   -85,   360,   -88,   -88,   396,   342,   371,
     371,    84,   371,   360,   360,   263,   360,   264,   265,   -78,
     371,   -78,   266,   -84,   360,   322,    85,   -82,    85,   -82,
     267,   321,    84,   -83,    84,   -90,   -90,    85,    85,   -79,
      85,   -79,    84,    84,    84,   375,   213,   192,    85,   -90,
     -90,   214,    84,   493,   -87,   -87,   215,   325,   326,   327,
      47,   194,   216,   169,   -87,   328,   -87,   258,    45,    46,
      47,   380,   276,   -90,   -90,    48,   217,    86,   218,   329,
     219,   330,   331,   390,   147,   -90,   332,   227,   297,   298,
     180,   392,   276,   228,   333,   494,    56,   350,   384,   229,
     401,    86,   278,   210,    61,   235,    86,   297,   230,   -74,
     263,   231,   264,   265,   522,  -121,   411,   276,   325,   326,
     327,    47,   128,   -86,   -86,  -119,   328,   240,   422,   263,
     -49,   264,   265,   -86,   246,   -86,   278,   427,   276,  -127,
     329,  -128,   330,   331,  -130,  -122,  -122,   332,  -129,   438,
     -87,   -87,   349,   186,   278,   333,   523,  -122,   -86,   -86,
      86,    86,   -87,    84,    84,   376,   -77,   -77,    86,    86,
     -86,    86,   323,   344,   545,   -77,   -75,    84,   325,   326,
     327,    47,   377,   653,   350,   351,   328,   297,   378,   276,
     276,   276,   276,   276,   342,  -122,   -80,   -80,   -90,   -90,
     329,  -122,   330,   331,   402,   342,   -80,   332,   -80,   263,
     572,   264,   265,   128,   403,   333,   546,    -2,    14,   -81,
     -81,   321,   321,   321,   321,   321,   342,   404,   -81,   349,
     191,     2,     3,     4,     5,   349,   193,   342,   342,   342,
     342,   342,   342,   405,   344,   298,   197,    86,  -113,   -77,
     -77,   406,  -113,  -113,  -113,  -113,   407,   276,   408,   -77,
    -113,   -77,   -94,   -81,   -81,   409,   276,   323,    86,   280,
      86,   201,   352,   -81,   276,   -81,  -122,  -122,    86,    86,
      86,  -113,   -94,   -94,   -94,   -94,   -94,   -94,    86,  -113,
     -78,   -78,   -94,   -94,   -94,   -82,   -82,   201,   352,   579,
     -78,   -94,   -78,   -90,   -90,   -82,   -59,   -82,   278,   -59,
     -59,   -59,   -59,   -59,   387,   574,   298,   476,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -79,   -79,   278,   298,
     487,   398,   -59,   -59,   -59,   -59,   -79,   -75,   -79,   -59,
     423,   -59,   -59,   -59,   -59,   -90,   -90,   -59,   -90,   -90,
     -59,   424,   280,   278,   -78,   -78,  -122,   576,   425,   419,
     582,   -90,   -90,   -78,   440,   -94,   -94,   -94,   -94,   -94,
     -94,   298,   509,   584,   278,   -94,   -94,   -94,   441,   -58,
     435,   450,   -58,   -58,   -58,   -58,   -58,   -94,   452,   -90,
     -90,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,    86,
      86,   586,   201,   352,   596,   -58,   -58,   -58,   -58,   453,
     -90,   -90,   -58,    86,   -58,   -58,   -58,   -58,    -4,    -4,
     -58,   464,   588,   -58,   454,   278,   278,   278,   278,   278,
     344,   455,    -4,    -4,    -4,    -4,   -90,   -90,   139,   -90,
     -90,   344,   259,   260,   261,    47,   -82,   -82,   590,   461,
     262,   592,   298,   531,    84,   -82,   465,   323,   323,   323,
     323,   323,   344,   469,   263,   477,   264,   265,   488,   -90,
     -90,   266,   502,   344,   344,   344,   344,   344,   344,   267,
     562,   599,   321,    84,    87,    84,   -90,   -90,   -90,   -90,
     510,   -90,   -90,   278,    84,    84,   532,    84,   601,   569,
     603,   549,   278,   643,    87,    84,    -8,   567,    87,   279,
     278,   -55,   550,    87,   232,   -55,   -55,   -55,   -55,   551,
     -90,   -90,   387,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   398,   645,   349,    87,   349,   571,   -55,   -55,   -55,
     -55,   349,   573,   279,   -55,   298,   -55,   -55,   -55,   -55,
     -90,   -90,   -55,   -90,   -90,   -55,    -7,    -7,   349,   575,
     419,   279,   647,   349,   581,   664,   578,    87,    87,   580,
      -7,    -7,    -7,    -7,   593,    87,    87,   594,    87,   324,
     345,   -37,   595,   435,   -37,   -37,   -37,   -37,   -37,    -6,
      -6,   349,   583,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -90,   -90,    -6,    -6,    -6,    -6,   -37,   -37,   -37,
     -37,   349,   585,   666,   -37,   597,   -37,   -37,   -37,   -37,
     107,   110,   -37,  -111,   604,   -37,   605,  -111,  -111,  -111,
    -111,   608,   -13,   -13,   606,  -111,   352,  -106,   -90,   -90,
     -90,   -90,   349,   587,  -106,  -106,   -13,   -13,   -13,   -13,
     668,   345,   670,   617,    87,   140,  -111,  -106,  -106,  -106,
    -106,  -106,  -106,   621,  -111,    -3,    -3,  -106,  -106,  -106,
     619,   131,   622,   164,   324,    87,  -106,    87,   132,    -3,
      -3,    -3,    -3,   349,   589,    87,    87,    87,   -90,   -90,
      86,   175,   178,    -9,    -9,    87,   201,   352,   607,   105,
     672,   -90,   -90,   258,    45,    46,    47,    -9,    -9,    -9,
      -9,    48,   620,   674,   279,   279,   349,   591,   323,    86,
      83,    86,   -80,   -80,   648,    52,   279,    54,    55,   624,
      86,    86,    56,    86,   -80,   279,   -77,   -77,   106,   625,
      61,    86,   -79,   -79,    83,   275,   -81,   -81,   -77,    83,
    -112,   -79,   -78,   -78,  -112,  -112,  -112,  -112,   -81,   324,
     279,   626,  -112,   178,   -78,   -76,   368,   349,   598,   349,
     600,   324,   -82,   -82,   628,   -79,   -79,   349,   602,   275,
     345,   279,   -80,  -112,   -82,   -77,   233,   -79,   -81,  -114,
     -78,  -112,   345,  -114,  -114,  -114,  -114,   275,   298,   616,
     -82,  -114,   -79,    83,    83,   -80,    87,    87,   -77,   -23,
     -23,    83,    83,   -81,   174,   320,   341,   298,   623,   -78,
      87,  -122,  -114,   -23,   -23,   -23,   -23,   383,  -122,  -122,
    -114,   -82,   279,   279,   279,   279,   279,   345,   349,   642,
     -79,  -122,  -122,  -122,  -122,  -122,  -122,   395,   345,   349,
     644,  -122,  -122,  -122,   678,  -122,   349,   646,   349,   663,
    -122,   641,  -122,   650,   324,   324,   324,   324,   324,   345,
     349,   665,   414,   349,   667,   349,   669,   349,   671,   656,
     345,   345,   345,   345,   345,   345,   679,   341,   349,   673,
      83,   657,   658,   430,   121,   122,   123,   124,   125,   126,
     279,   659,   660,   661,   -92,   -92,   -92,   680,   681,   279,
     320,    83,   682,    83,   -92,   687,   -92,   279,   458,   691,
     693,    83,    83,    83,   699,    15,   554,   677,   697,   -34,
     700,    83,   -34,   -34,   -34,   -34,   -34,   649,   675,   692,
     690,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   178,
     689,   275,     0,   565,     0,   -34,   -34,   -34,   -34,   566,
     178,     0,   -34,     0,   -34,   -34,   -34,   -34,     0,     0,
     -34,   275,   -31,   -34,     0,   -31,   -31,   -31,   -31,   -31,
       0,   178,     0,     0,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,     0,     0,     0,     0,   275,   178,   -31,   -31,
     -31,   -31,     0,     0,     0,   -31,     0,   -31,   -31,   -31,
     -31,     0,   553,   -31,     0,     0,   -31,   275,   456,     0,
       0,   564,   258,    45,    46,    47,     0,     0,     0,   570,
      48,     0,     0,  -115,     0,     0,     0,  -115,  -115,  -115,
    -115,     0,    83,    83,    52,  -115,    54,    55,     0,     0,
       0,    56,     0,     0,     0,  -106,    83,   457,     0,    61,
       0,     0,  -106,  -106,     0,     0,  -115,     0,   275,   275,
     275,   275,   483,   341,  -115,  -106,  -106,  -106,  -106,  -106,
    -106,     0,     0,   492,   341,  -106,  -106,  -106,     0,     0,
       0,     0,     0,     0,  -106,     0,   132,    87,   -22,   -22,
     320,   320,   320,   320,   521,   341,    82,     0,     0,     0,
       0,     0,   -22,   -22,   -22,   -22,   341,   341,   341,   341,
     544,   341,     0,     0,     0,   324,    87,     0,    87,     0,
      82,   274,     0,     0,     0,    82,   275,    87,    87,  -122,
      87,   -27,   -27,     0,     0,   275,  -122,  -122,    87,     0,
       0,     0,     0,   275,     0,   -27,   -27,   -27,   -27,  -122,
    -122,  -122,  -122,  -122,  -122,   274,     0,     0,     0,  -122,
    -122,  -122,     0,     0,     0,     0,     0,     0,  -122,     0,
    -122,     0,     0,   274,     0,     0,     0,     0,    81,    82,
      82,   -12,   -12,     0,     0,     0,     0,    82,   173,     0,
       0,   319,   340,     0,     0,   -12,   -12,   -12,   -12,   368,
       0,     0,    81,   273,     0,   303,     0,    81,     0,   304,
     305,   306,    47,     0,     0,     0,     0,   307,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   685,   368,     0,
     368,   308,     0,   309,   310,     0,     0,   273,   311,   368,
     368,     0,   368,     0,     0,     0,   312,     0,     0,     0,
     368,     0,   220,     0,     0,   273,   325,   326,   327,    47,
       0,    81,    81,   340,   328,     0,    82,     0,     0,   172,
       0,     0,     0,   318,   339,     0,     0,     0,   329,     0,
     330,   331,     0,     0,     0,   332,   319,    82,     0,    82,
       0,     0,     0,   333,     0,     0,   -48,    82,    82,    82,
     -48,   -48,   -48,   -48,     0,   382,     0,    82,   -48,   259,
     260,   261,    47,     0,     0,     0,     0,   262,     0,     0,
       0,     0,   -48,    83,   -48,   -48,     0,   274,     0,   -48,
       0,   263,     0,   264,   265,     0,     0,   -48,   266,     0,
       0,     0,     0,     0,     0,   339,   267,   274,    81,     0,
       0,   320,    83,  -116,    83,     0,     0,  -116,  -116,  -116,
    -116,   -28,   -28,    83,    83,  -116,    83,     0,   318,    81,
       0,    81,   274,     0,    83,   -28,   -28,   -28,   -28,    81,
      81,    81,     0,     0,     0,     0,  -116,     0,     0,    81,
       0,     0,     0,   274,  -116,     0,     0,     0,   -32,     0,
       0,   -32,   -32,   -32,   -32,   -32,   -21,   -21,     0,   273,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,    82,    82,
     -21,   -21,   -21,   -21,   -32,   -32,   -32,   -32,     0,   273,
       0,   -32,    82,   -32,   -32,   -32,   -32,     0,     0,   -32,
       0,     0,   -32,     0,   274,   274,   274,   482,     0,   340,
       0,   -18,   -18,     0,   273,     0,     0,   394,   491,     0,
     340,   259,   260,   261,    47,   -18,   -18,   -18,   -18,   262,
       0,     0,     0,     0,     0,   273,   319,   319,   319,   520,
       0,   340,     0,   263,     0,   264,   265,     0,     0,     0,
     266,     0,   340,   340,   340,   543,     0,   340,   267,     0,
      81,    81,     0,     0,   413,     0,     0,     0,   259,   260,
     261,    47,   274,  -124,    81,     0,   262,  -124,  -124,  -124,
    -124,   274,     0,     0,    80,  -124,   273,   273,   481,   274,
     263,   339,   264,   265,     0,     0,     0,   266,     0,   490,
       0,     0,   339,     0,     0,   267,  -124,     0,    80,   272,
       0,     0,     0,    80,  -124,     0,     0,     0,   318,   318,
     519,     0,     0,   339,     0,  -123,     0,     0,     0,  -123,
    -123,  -123,  -123,     0,   339,   339,   542,  -123,     0,   339,
       0,   448,     0,   272,     0,   282,   283,   284,    47,     0,
       0,     0,    78,   285,   273,     0,     0,     0,  -123,     0,
       0,   272,     0,   273,     0,     0,  -123,    80,   171,     0,
       0,   273,     0,     0,   286,     0,    78,   270,     0,   317,
     338,    78,   287,     0,     0,     0,   -33,     0,     0,   -33,
     -33,   -33,   -33,   -33,     0,     0,     0,     0,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,     0,    79,     0,     0,
       0,   270,   -33,   -33,   -33,   -33,     0,     0,     0,   -33,
       0,   -33,   -33,   -33,   -33,     0,     0,   -33,     0,   270,
     -33,    79,   271,     0,     0,     0,    79,   470,     0,     0,
       0,   282,   283,   284,    47,     0,     0,   315,   336,   285,
       0,   338,     0,     0,    80,   472,     0,     0,     0,   282,
     283,   284,    47,     0,     0,     0,   271,   285,     0,    82,
     286,     0,     0,     0,   317,    80,     0,    80,   287,     0,
       0,     0,     0,     0,   271,    80,    80,    80,   286,     0,
     170,     0,     0,     0,     0,    80,   287,   319,    82,     0,
      82,     0,   316,   337,     0,     0,     0,     0,     0,    82,
      82,     0,    82,     0,     0,   272,     0,     0,     0,   336,
      82,     0,    78,     0,   474,     0,     0,     0,   282,   283,
     284,    47,     0,     0,   478,   272,   285,     0,   259,   260,
     261,    47,   315,    78,     0,    78,   262,     0,     0,     0,
       0,    81,     0,    78,    78,    78,     0,   286,     0,     0,
     272,     0,     0,    78,     0,   287,     0,   266,     0,     0,
       0,     0,     0,     0,   337,   267,     0,    79,     0,   318,
      81,   272,    81,   270,     0,     0,     0,     0,     0,     0,
       0,    81,    81,     0,    81,     0,     0,   316,    79,     0,
      79,     0,    81,   270,     0,     0,    80,    80,    79,    79,
      79,     0,     0,     0,     0,     0,     0,     0,    79,   496,
      80,     0,     0,   282,   283,   284,    47,     0,   270,     0,
       0,   285,   272,   480,     0,   498,     0,   338,   271,   282,
     283,   284,    47,     0,   489,     0,     0,   285,   338,   270,
       0,     0,   286,     0,     0,     0,     0,     0,   271,     0,
     287,     0,     0,     0,   317,   518,   500,     0,   286,   338,
     282,   283,   284,    47,    78,    78,   287,     0,   285,     0,
     338,   541,     0,   271,     0,   338,   429,     0,    78,     0,
     259,   260,   261,    47,   269,     0,     0,     0,   262,   286,
     272,     0,     0,     0,   271,   336,     0,   287,     0,   272,
       0,     0,   263,     0,   264,   265,   336,   272,     0,   266,
       0,     0,   449,     0,     0,     0,     0,   267,   269,    79,
      79,   145,     0,   151,   153,     0,     0,   336,     0,     0,
       0,   268,     0,    79,     0,   503,   269,     0,     0,   282,
     283,   284,    47,   336,     0,   479,     0,   285,     0,     0,
     337,     0,     0,     0,   314,   335,     0,     0,   270,     0,
       0,   337,     0,     0,     0,   268,   552,   270,   286,   148,
     259,   260,   261,    47,     0,   270,   287,   517,   262,     0,
       0,     0,   337,   268,     0,     0,     0,     0,   167,     0,
       0,     0,   263,   540,   264,   265,     0,     0,   337,   266,
       0,   313,   334,     0,     0,   478,     0,   267,     0,   259,
     260,   261,    47,   271,     0,     0,     0,   262,     0,     0,
    -126,     0,   271,     0,     0,     0,   335,  -126,  -126,     0,
     271,   263,     0,   264,   265,     0,     0,     0,   266,     0,
    -126,  -126,  -126,  -126,  -126,  -126,   267,     0,     0,   314,
    -126,  -126,  -126,     0,   209,   211,     0,     0,     0,  -126,
       0,     0,     0,     0,     0,   -36,     0,     0,   -36,   -36,
     -36,   -36,   -36,   334,     0,     0,     0,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,     0,     0,    80,     0,     0,
     269,   -36,   -36,   -36,   -36,     0,   313,     0,   -36,     0,
     -36,   -36,   -36,   -36,     0,     0,   -36,   505,     0,   -36,
     269,   282,   283,   284,    47,   317,    80,   507,    80,   285,
       0,   282,   283,   284,    47,     0,     0,    80,    80,   285,
      80,     0,     0,     0,     0,   269,     0,   268,    80,   303,
     286,     0,     0,   304,   305,   306,    47,     0,   287,     0,
     286,   307,     0,     0,     0,    78,   269,   268,   287,     0,
       0,   525,     0,     0,     0,   282,   283,   284,    47,     0,
       0,     0,   311,   285,     0,     0,     0,     0,     0,     0,
     312,     0,   268,   315,    78,     0,    78,     0,     0,     0,
       0,     0,     0,     0,   286,    78,    78,     0,    78,   471,
     473,   475,   287,   268,     0,     0,    78,     0,     0,     0,
      79,     0,   335,     0,     0,     0,     0,     0,     0,     0,
     446,     0,     0,   335,     0,     0,   497,   499,   501,     0,
     504,   506,   508,     0,     0,     0,     0,     0,   316,    79,
       0,    79,     0,     0,   335,     0,   526,   528,   530,     0,
      79,    79,     0,    79,     0,     0,     0,     0,     0,   334,
     335,    79,     0,     0,     0,     0,     0,   527,     0,     0,
     334,   282,   283,   284,    47,   269,     0,     0,     0,   285,
       0,     0,     0,     0,   269,   515,     0,     0,     0,     0,
       0,   334,   269,     0,     0,     0,     0,     0,     0,   -35,
     286,   537,   -35,   -35,   -35,   -35,   -35,   334,   287,     0,
       0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,
       0,     0,   268,     0,     0,   -35,   -35,   -35,   -35,     0,
       0,   268,   -35,     0,   -35,   -35,   -35,   -35,     0,   268,
     -35,     0,   -13,   -35,     0,   -13,   -13,   -13,   -13,   -13,
       0,     0,     0,     0,   -13,   -13,   -13,   -13,   -13,   -13,
     -13,   -13,     0,     0,     0,     0,     0,     0,   -13,   -13,
     -13,   -13,   611,   613,   615,   -13,     0,   -13,   -13,   -13,
     -13,     0,     0,   -13,     0,     0,   -13,     0,   121,   122,
     123,   124,   125,   126,     0,     0,     0,   529,   -92,   -92,
     -92,   282,   283,   284,    47,     0,     0,   -60,     0,   285,
     -60,   -60,   -60,   -60,   -60,     0,   630,   632,   634,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   636,   638,   640,
     286,     0,     0,   -60,   -60,   -60,   -60,     0,   287,     0,
     -60,     0,   -60,   -60,   -60,   -60,     0,     0,   -60,     0,
     -27,   -60,     0,   -27,   -27,   -27,   -27,   -27,     0,     0,
       0,     0,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
       0,     0,     0,     0,     0,     0,   -27,   -27,   -27,   -27,
       0,     0,     0,   -27,     0,   -27,   -27,   -27,   -27,   652,
     654,   -27,   -73,     0,   -27,   -73,   -73,   -73,   -73,   -73,
     314,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,     0,     0,     0,     0,   -73,   -73,
     -73,   -73,     0,     0,     0,   -73,     0,   -73,   -73,   -73,
     -73,     0,     0,   -73,     0,     0,   -73,   -72,     0,     0,
     -72,   -72,   -72,   -72,   -72,     0,     0,   313,     0,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,
       0,     0,     0,   -72,   -72,   -72,   -72,     0,     0,     0,
     -72,     0,   -72,   -72,   -72,   -72,     0,     0,   -72,   -38,
       0,   -72,   -38,   -38,   -38,   -38,   -38,     0,     0,     0,
       0,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,
       0,     0,     0,     0,     0,   -38,   -38,   -38,   -38,     0,
       0,     0,   -38,     0,   -38,   -38,   -38,   -38,     0,     0,
     -38,   -68,     0,   -38,   -68,   -68,   -68,   -68,   -68,     0,
       0,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,     0,     0,     0,     0,     0,     0,   -68,   -68,   -68,
     -68,     0,     0,     0,   -68,     0,   -68,   -68,   -68,   -68,
       0,     0,   -68,   -62,     0,   -68,   -62,   -62,   -62,   -62,
     -62,     0,     0,     0,     0,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,     0,     0,     0,     0,     0,     0,   -62,
     -62,   -62,   -62,     0,     0,     0,   -62,     0,   -62,   -62,
     -62,   -62,     0,     0,   -62,   -63,     0,   -62,   -63,   -63,
     -63,   -63,   -63,     0,     0,     0,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,     0,     0,     0,     0,     0,
       0,   -63,   -63,   -63,   -63,     0,     0,     0,   -63,     0,
     -63,   -63,   -63,   -63,     0,     0,   -63,   -61,     0,   -63,
     -61,   -61,   -61,   -61,   -61,     0,     0,     0,     0,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,     0,     0,
       0,     0,     0,   -61,   -61,   -61,   -61,     0,     0,     0,
     -61,     0,   -61,   -61,   -61,   -61,     0,     0,   -61,   -28,
       0,   -61,   -28,   -28,   -28,   -28,   -28,     0,     0,     0,
       0,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,     0,
       0,     0,     0,     0,     0,   -28,   -28,   -28,   -28,     0,
       0,     0,   -28,     0,   -28,   -28,   -28,   -28,     0,     0,
     -28,    -9,     0,   -28,    -9,    -9,    -9,    -9,    -9,     0,
       0,     0,     0,    -9,    -9,    -9,    -9,    -9,    -9,    -9,
      -9,     0,     0,     0,     0,     0,     0,    -9,    -9,    -9,
      -9,     0,     0,     0,    -9,     0,    -9,    -9,    -9,    -9,
       0,     0,    -9,   -54,     0,    -9,   -54,   -54,   -54,   -54,
     -54,     0,     0,     0,     0,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,     0,     0,     0,     0,     0,     0,   -54,
     -54,   -54,   -54,     0,     0,     0,   -54,     0,   -54,   -54,
     -54,   -54,     0,     0,   -54,   -44,     0,   -54,   -44,   -44,
     -44,   -44,   -44,     0,     0,     0,     0,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,     0,     0,     0,     0,     0,
       0,   -44,   -44,   -44,   -44,     0,     0,     0,   -44,     0,
     -44,   -44,   -44,   -44,     0,     0,   -44,   -42,     0,   -44,
     -42,   -42,   -42,   -42,   -42,     0,     0,     0,     0,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,     0,     0,
       0,     0,     0,   -42,   -42,   -42,   -42,     0,     0,     0,
     -42,     0,   -42,   -42,   -42,   -42,     0,     0,   -42,   -43,
       0,   -42,   -43,   -43,   -43,   -43,   -43,     0,     0,     0,
       0,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,
       0,     0,     0,     0,     0,   -43,   -43,   -43,   -43,     0,
       0,     0,   -43,     0,   -43,   -43,   -43,   -43,     0,     0,
     -43,   -40,     0,   -43,   -40,   -40,   -40,   -40,   -40,     0,
       0,     0,     0,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,     0,     0,     0,     0,     0,     0,   -40,   -40,   -40,
     -40,     0,     0,     0,   -40,     0,   -40,   -40,   -40,   -40,
       0,     0,   -40,   -39,     0,   -40,   -39,   -39,   -39,   -39,
     -39,     0,     0,     0,     0,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,     0,     0,     0,     0,     0,     0,   -39,
     -39,   -39,   -39,     0,     0,     0,   -39,     0,   -39,   -39,
     -39,   -39,     0,     0,   -39,   -41,     0,   -39,   -41,   -41,
     -41,   -41,   -41,     0,     0,     0,     0,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,     0,     0,     0,     0,     0,
       0,   -41,   -41,   -41,   -41,     0,     0,     0,   -41,     0,
     -41,   -41,   -41,   -41,     0,     0,   -41,   -53,     0,   -41,
     -53,   -53,   -53,   -53,   -53,     0,     0,     0,     0,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,     0,     0,     0,
       0,     0,     0,   -53,   -53,   -53,   -53,     0,     0,     0,
     -53,     0,   -53,   -53,   -53,   -53,     0,     0,   -53,   -55,
       0,   -53,   684,   -55,   -55,   -55,   -55,     0,     0,     0,
       0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,     0,
       0,     0,     0,     0,     0,   -55,   -55,   -55,   -55,     0,
       0,     0,   -55,     0,   -55,   -55,   -55,   -55,     0,     0,
     -55,   -69,     0,   -55,   -69,   -69,   -69,   -69,   -69,     0,
       0,     0,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,     0,     0,     0,     0,     0,     0,   -69,   -69,   -69,
     -69,     0,     0,     0,   -69,     0,   -69,   -69,   -69,   -69,
       0,     0,   -69,   -70,     0,   -69,   -70,   -70,   -70,   -70,
     -70,     0,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,     0,     0,   -70,
     -70,   -70,   -70,     0,     0,     0,   -70,     0,   -70,   -70,
     -70,   -70,     0,     0,   -70,   -71,     0,   -70,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,     0,     0,     0,     0,     0,
       0,   -71,   -71,   -71,   -71,     0,     0,     0,   -71,     0,
     -71,   -71,   -71,   -71,     0,     0,   -71,   -12,     0,   -71,
     -12,   -12,   -12,   -12,   -12,     0,     0,     0,     0,   -12,
     -12,   -12,   -12,   -12,   -12,   -12,   -12,     0,     0,     0,
       0,     0,     0,   -12,   -12,   -12,   -12,     0,     0,     0,
     -12,     0,   -12,   -12,   -12,   -12,     0,     0,   -12,   -65,
       0,   -12,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,
       0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,
       0,     0,     0,     0,     0,   -65,   -65,   -65,   -65,     0,
       0,     0,   -65,     0,   -65,   -65,   -65,   -65,     0,     0,
     -65,   -67,     0,   -65,   -67,   -67,   -67,   -67,   -67,     0,
       0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,     0,     0,     0,     0,     0,     0,   -67,   -67,   -67,
     -67,     0,     0,     0,   -67,     0,   -67,   -67,   -67,   -67,
       0,     0,   -67,   -57,     0,   -67,   -57,   -57,   -57,   -57,
     -57,     0,     0,     0,     0,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,     0,     0,     0,     0,     0,     0,   -57,
     -57,   -57,   -57,     0,     0,     0,   -57,     0,   -57,   -57,
     -57,   -57,     0,     0,   -57,   -51,     0,   -57,   -51,   -51,
     -51,   -51,   -51,     0,     0,     0,     0,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,     0,     0,     0,     0,     0,
       0,   -51,   -51,   -51,   -51,     0,     0,     0,   -51,     0,
     -51,   -51,   -51,   -51,     0,     0,   -51,    44,     0,   -51,
       0,   255,    45,    46,    47,     0,     0,     0,     0,    48,
     249,   250,   251,   252,    49,    50,    51,     0,     0,     0,
       0,     0,     0,    52,    53,    54,    55,     0,     0,     0,
      56,     0,    57,    58,    59,    60,     0,     0,    61,   -37,
       0,    62,     0,   -37,   -37,   -37,   -37,     0,     0,     0,
       0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,
       0,     0,     0,     0,     0,   -37,   -37,   -37,   -37,     0,
       0,     0,   -37,     0,   -37,   -37,   -37,   -37,     0,     0,
     -37,    44,     0,   -37,     0,   255,    45,    46,    47,     0,
       0,     0,     0,    48,   249,   250,   251,   252,    49,    50,
      51,     0,     0,     0,     0,     0,     0,    52,    53,    54,
      55,     0,     0,     0,    56,     0,    57,    58,    59,    60,
       0,     0,    61,   -34,     0,   -30,     0,   -34,   -34,   -34,
     -34,     0,     0,     0,     0,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,     0,     0,     0,     0,     0,     0,   -34,
     -34,   -34,   -34,     0,     0,     0,   -34,     0,   -34,   -34,
     -34,   -34,     0,     0,   -34,   -31,     0,   -34,     0,   -31,
     -31,   -31,   -31,     0,     0,     0,     0,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,     0,     0,     0,     0,     0,
       0,   -31,   -31,   -31,   -31,     0,     0,     0,   -31,     0,
     -31,   -31,   -31,   -31,     0,     0,   -31,   -32,     0,   -31,
       0,   -32,   -32,   -32,   -32,     0,     0,     0,     0,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,     0,     0,
       0,     0,     0,   -32,   -32,   -32,   -32,     0,     0,     0,
     -32,     0,   -32,   -32,   -32,   -32,     0,     0,   -32,   -33,
       0,   -32,     0,   -33,   -33,   -33,   -33,     0,     0,     0,
       0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,
       0,     0,     0,     0,     0,   -33,   -33,   -33,   -33,     0,
       0,     0,   -33,     0,   -33,   -33,   -33,   -33,     0,     0,
     -33,   -36,     0,   -33,     0,   -36,   -36,   -36,   -36,     0,
       0,     0,     0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,     0,     0,     0,     0,     0,     0,   -36,   -36,   -36,
     -36,     0,     0,     0,   -36,     0,   -36,   -36,   -36,   -36,
       0,     0,   -36,   -35,     0,   -36,     0,   -35,   -35,   -35,
     -35,     0,     0,     0,     0,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,     0,     0,     0,     0,     0,     0,   -35,
     -35,   -35,   -35,     0,     0,     0,   -35,     0,   -35,   -35,
     -35,   -35,     0,     0,   -35,   -60,     0,   -35,     0,   -60,
     -60,   -60,   -60,     0,     0,     0,     0,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,     0,     0,     0,     0,     0,
       0,   -60,   -60,   -60,   -60,     0,     0,     0,   -60,     0,
     -60,   -60,   -60,   -60,     0,     0,   -60,   -73,     0,   -60,
       0,   -73,   -73,   -73,   -73,     0,     0,     0,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,
       0,     0,     0,   -73,   -73,   -73,   -73,     0,     0,     0,
     -73,     0,   -73,   -73,   -73,   -73,     0,     0,   -73,   -72,
       0,   -73,     0,   -72,   -72,   -72,   -72,     0,     0,     0,
       0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,
       0,     0,     0,     0,     0,   -72,   -72,   -72,   -72,     0,
       0,     0,   -72,     0,   -72,   -72,   -72,   -72,     0,     0,
     -72,   -38,     0,   -72,     0,   -38,   -38,   -38,   -38,     0,
       0,     0,     0,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,     0,     0,     0,     0,     0,     0,   -38,   -38,   -38,
     -38,     0,     0,     0,   -38,     0,   -38,   -38,   -38,   -38,
       0,     0,   -38,   -68,     0,   -38,     0,   -68,   -68,   -68,
     -68,     0,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,     0,   -68,
     -68,   -68,   -68,     0,     0,     0,   -68,     0,   -68,   -68,
     -68,   -68,     0,     0,   -68,   -62,     0,   -68,     0,   -62,
     -62,   -62,   -62,     0,     0,     0,     0,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,     0,     0,     0,     0,     0,
       0,   -62,   -62,   -62,   -62,     0,     0,     0,   -62,     0,
     -62,   -62,   -62,   -62,     0,     0,   -62,   -63,     0,   -62,
       0,   -63,   -63,   -63,   -63,     0,     0,     0,     0,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,     0,
       0,     0,     0,   -63,   -63,   -63,   -63,     0,     0,     0,
     -63,     0,   -63,   -63,   -63,   -63,     0,     0,   -63,   -61,
       0,   -63,     0,   -61,   -61,   -61,   -61,     0,     0,     0,
       0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,
       0,     0,     0,     0,     0,   -61,   -61,   -61,   -61,     0,
       0,     0,   -61,     0,   -61,   -61,   -61,   -61,     0,     0,
     -61,   -54,     0,   -61,     0,   -54,   -54,   -54,   -54,     0,
       0,     0,     0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,     0,     0,     0,     0,     0,     0,   -54,   -54,   -54,
     -54,     0,     0,     0,   -54,     0,   -54,   -54,   -54,   -54,
       0,     0,   -54,   -44,     0,   -54,     0,   -44,   -44,   -44,
     -44,     0,     0,     0,     0,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,     0,     0,     0,     0,     0,     0,   -44,
     -44,   -44,   -44,     0,     0,     0,   -44,     0,   -44,   -44,
     -44,   -44,     0,     0,   -44,   -42,     0,   -44,     0,   -42,
     -42,   -42,   -42,     0,     0,     0,     0,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,     0,     0,     0,     0,     0,
       0,   -42,   -42,   -42,   -42,     0,     0,     0,   -42,     0,
     -42,   -42,   -42,   -42,     0,     0,   -42,   -43,     0,   -42,
       0,   -43,   -43,   -43,   -43,     0,     0,     0,     0,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,     0,     0,
       0,     0,     0,   -43,   -43,   -43,   -43,     0,     0,     0,
     -43,     0,   -43,   -43,   -43,   -43,     0,     0,   -43,   -40,
       0,   -43,     0,   -40,   -40,   -40,   -40,     0,     0,     0,
       0,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,     0,
       0,     0,     0,     0,     0,   -40,   -40,   -40,   -40,     0,
       0,     0,   -40,     0,   -40,   -40,   -40,   -40,     0,     0,
     -40,   -39,     0,   -40,     0,   -39,   -39,   -39,   -39,     0,
       0,     0,     0,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,     0,     0,     0,     0,     0,     0,   -39,   -39,   -39,
     -39,     0,     0,     0,   -39,     0,   -39,   -39,   -39,   -39,
       0,     0,   -39,   -41,     0,   -39,     0,   -41,   -41,   -41,
     -41,     0,     0,     0,     0,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,     0,     0,     0,     0,     0,     0,   -41,
     -41,   -41,   -41,     0,     0,     0,   -41,     0,   -41,   -41,
     -41,   -41,     0,     0,   -41,   -53,     0,   -41,     0,   -53,
     -53,   -53,   -53,     0,     0,     0,     0,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,     0,     0,     0,     0,     0,
       0,   -53,   -53,   -53,   -53,     0,     0,     0,   -53,     0,
     -53,   -53,   -53,   -53,     0,     0,   -53,   -69,     0,   -53,
       0,   -69,   -69,   -69,   -69,     0,     0,     0,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,
       0,     0,     0,   -69,   -69,   -69,   -69,     0,     0,     0,
     -69,     0,   -69,   -69,   -69,   -69,     0,     0,   -69,   -70,
       0,   -69,     0,   -70,   -70,   -70,   -70,     0,     0,     0,
       0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,
       0,     0,     0,     0,     0,   -70,   -70,   -70,   -70,     0,
       0,     0,   -70,     0,   -70,   -70,   -70,   -70,     0,     0,
     -70,   -71,     0,   -70,     0,   -71,   -71,   -71,   -71,     0,
       0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,     0,     0,     0,     0,     0,     0,   -71,   -71,   -71,
     -71,     0,     0,     0,   -71,     0,   -71,   -71,   -71,   -71,
       0,     0,   -71,   -65,     0,   -71,     0,   -65,   -65,   -65,
     -65,     0,     0,     0,     0,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,     0,     0,     0,   -65,
     -65,   -65,   -65,     0,     0,     0,   -65,     0,   -65,   -65,
     -65,   -65,     0,     0,   -65,   -67,     0,   -65,     0,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,     0,     0,     0,     0,     0,
       0,   -67,   -67,   -67,   -67,     0,     0,     0,   -67,     0,
     -67,   -67,   -67,   -67,     0,     0,   -67,   -57,     0,   -67,
       0,   -57,   -57,   -57,   -57,     0,     0,     0,     0,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,     0,     0,     0,
       0,     0,     0,   -57,   -57,   -57,   -57,     0,     0,     0,
     -57,     0,   -57,   -57,   -57,   -57,     0,     0,   -57,   -51,
       0,   -57,     0,   -51,   -51,   -51,   -51,     0,     0,     0,
       0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,     0,
       0,     0,     0,     0,     0,   -51,   -51,   -51,   -51,     0,
       0,     0,   -51,     0,   -51,   -51,   -51,   -51,     0,     0,
     -51,   -13,     0,   -51,     0,   -13,   -13,   -13,   -13,     0,
       0,     0,     0,   -13,   -13,   -13,   -13,   -13,   -13,   -13,
     -13,     0,     0,     0,     0,     0,     0,   -13,   -13,   -13,
     -13,     0,     0,     0,   -13,     0,   -13,   -13,   -13,   -13,
       0,     0,   -13,    44,     0,   -13,     0,   255,    45,    46,
      47,     0,     0,     0,     0,    48,   249,   250,   251,   252,
      49,    50,    51,     0,     0,     0,     0,     0,     0,    52,
      53,    54,    55,     0,     0,     0,    56,     0,    57,    58,
      59,    60,     0,     0,    61,    44,     0,   459,     0,   255,
      45,    46,    47,     0,     0,     0,     0,    48,   249,   250,
     251,   252,    49,    50,    51,     0,     0,     0,     0,     0,
       0,    52,    53,    54,    55,     0,     0,     0,    56,     0,
      57,    58,    59,    60,     0,     0,    61,   -59,     0,   467,
       0,   -59,   -59,   -59,   -59,     0,     0,     0,     0,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,     0,     0,     0,
       0,     0,     0,   -59,   -59,   -59,   -59,     0,     0,     0,
     -59,     0,   -59,   -59,   -59,   -59,     0,     0,   -59,   -58,
       0,   -59,     0,   -58,   -58,   -58,   -58,     0,     0,     0,
       0,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,     0,
       0,     0,     0,     0,     0,   -58,   -58,   -58,   -58,     0,
       0,     0,   -58,     0,   -58,   -58,   -58,   -58,     0,     0,
     -58,    -9,     0,   -58,     0,    -9,    -9,    -9,    -9,     0,
       0,     0,     0,    -9,    -9,    -9,    -9,    -9,    -9,    -9,
      -9,     0,     0,     0,     0,     0,     0,    -9,    -9,    -9,
      -9,     0,     0,     0,    -9,     0,    -9,    -9,    -9,    -9,
       0,     0,    -9,   -27,     0,    -9,     0,   -27,   -27,   -27,
     -27,     0,     0,     0,     0,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,     0,     0,     0,     0,     0,     0,   -27,
     -27,   -27,   -27,     0,     0,     0,   -27,     0,   -27,   -27,
     -27,   -27,     0,     0,   -27,   -28,     0,   -27,     0,   -28,
     -28,   -28,   -28,     0,     0,     0,     0,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,     0,     0,     0,     0,     0,
       0,   -28,   -28,   -28,   -28,     0,     0,     0,   -28,     0,
     -28,   -28,   -28,   -28,     0,     0,   -28,   -12,     0,   -28,
       0,   -12,   -12,   -12,   -12,     0,     0,     0,     0,   -12,
     -12,   -12,   -12,   -12,   -12,   -12,   -12,     0,     0,     0,
       0,     0,     0,   -12,   -12,   -12,   -12,     0,     0,     0,
     -12,     0,   -12,   -12,   -12,   -12,     0,     0,   -12,   -52,
       0,   -12,     0,   -52,   -52,   -52,   -52,     0,     0,     0,
       0,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,     0,
       0,     0,     0,     0,     0,   -52,   -52,   -52,   -52,     0,
       0,     0,   -52,     0,   -52,   -52,   -52,   -52,     0,   353,
     -52,     0,   -52,   255,    45,    46,    47,     0,     0,     0,
       0,    48,   249,   250,   251,   252,   354,   355,   356,     0,
       0,     0,     0,     0,     0,    52,    53,    54,    55,     0,
       0,     0,    56,     0,    57,    58,   357,   358,     0,    44,
      61,     0,   359,   255,    45,    46,    47,     0,     0,     0,
       0,    48,   249,   250,   251,   252,    49,    50,    51,     0,
       0,     0,     0,     0,     0,    52,    53,    54,    55,     0,
       0,     0,    56,     0,    57,    58,    59,    60,     0,   -64,
      61,     0,   372,   -64,   -64,   -64,   -64,     0,     0,     0,
       0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,
       0,     0,     0,     0,     0,   -64,   -64,   -64,   -64,     0,
       0,     0,   -64,     0,   -64,   -64,   -64,   -64,     0,   -66,
     -64,     0,   -64,   -66,   -66,   -66,   -66,     0,     0,     0,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,
       0,     0,     0,     0,     0,   -66,   -66,   -66,   -66,     0,
       0,     0,   -66,     0,   -66,   -66,   -66,   -66,     0,   -56,
     -66,     0,   -66,   -56,   -56,   -56,   -56,     0,     0,     0,
       0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,     0,
       0,     0,     0,     0,     0,   -56,   -56,   -56,   -56,     0,
       0,     0,   -56,     0,   -56,   -56,   -56,   -56,     0,   -50,
     -56,     0,   -56,   -50,   -50,   -50,   -50,     0,     0,     0,
       0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,
       0,     0,     0,     0,     0,   -50,   -50,   -50,   -50,     0,
       0,     0,   -50,     0,   -50,   -50,   -50,   -50,     0,   539,
     -50,     0,   -50,   325,   326,   327,    47,     0,   610,     0,
       0,   328,   282,   283,   284,    47,     0,   612,     0,     0,
     285,   282,   283,   284,    47,     0,     0,     0,     0,   285,
     614,     0,   332,     0,   282,   283,   284,    47,     0,   629,
     333,   286,   285,   282,   283,   284,    47,     0,   631,   287,
     286,   285,   282,   283,   284,    47,     0,     0,   287,     0,
     285,   633,     0,   286,     0,   282,   283,   284,    47,     0,
     635,   287,   286,   285,   282,   283,   284,    47,     0,   637,
     287,   286,   285,   282,   283,   284,    47,     0,     0,   287,
       0,   285,   639,     0,   286,     0,   282,   283,   284,    47,
       0,     0,   287,   286,   285,     0,  -125,     0,     0,     0,
       0,   287,   286,  -125,  -125,     0,     0,     0,     0,     0,
     287,     0,     0,     0,     0,   286,  -125,  -125,  -125,  -125,
    -125,  -125,  -109,   287,     0,     0,  -125,  -125,  -125,  -109,
    -109,     0,     0,     0,     0,  -125,     0,     0,     0,     0,
       0,     0,  -109,  -109,  -109,  -109,  -109,  -109,   -96,     0,
       0,     0,  -109,  -109,  -109,   -96,   129,     0,     0,     0,
       0,  -109,     0,     0,     0,     0,     0,     0,   -96,   -96,
     -96,   -96,   -96,   -96,   -98,     0,     0,     0,   -96,   -96,
     -96,   -98,   -98,     0,     0,     0,     0,   -96,     0,     0,
       0,     0,     0,     0,   -98,   -98,   -98,   -98,   -98,   -98,
     -99,     0,     0,     0,   -98,   -98,   -98,   -99,   -99,     0,
       0,     0,     0,   -98,     0,     0,     0,     0,     0,     0,
     -99,   -99,   -99,   -99,   -99,   -99,  -107,     0,     0,     0,
     -99,   -99,   -99,  -107,  -107,     0,     0,     0,     0,   -99,
       0,     0,     0,     0,     0,     0,  -107,  -107,  -107,  -107,
    -107,  -107,  -100,     0,     0,     0,  -107,  -107,  -107,  -100,
    -100,     0,     0,     0,     0,  -107,     0,     0,     0,     0,
       0,     0,  -100,  -100,  -100,  -100,  -100,  -100,  -106,     0,
       0,     0,  -100,  -100,  -100,  -106,  -106,     0,     0,     0,
       0,  -100,     0,     0,     0,     0,     0,     0,  -106,  -106,
    -106,  -106,  -106,  -106,  -101,     0,     0,     0,  -106,  -106,
    -106,  -101,  -101,     0,     0,     0,     0,  -106,     0,     0,
       0,     0,     0,     0,  -101,  -101,  -101,  -101,  -101,  -101,
    -105,     0,     0,     0,  -101,  -101,  -101,  -105,  -105,     0,
       0,     0,     0,  -101,     0,     0,     0,     0,     0,     0,
    -105,  -105,  -105,  -105,  -105,  -105,  -110,     0,     0,     0,
    -105,  -105,  -105,  -110,  -110,     0,     0,     0,     0,  -105,
       0,     0,     0,     0,     0,     0,  -110,  -110,  -110,  -110,
    -110,  -110,  -108,     0,     0,     0,  -110,  -110,  -110,  -108,
    -108,     0,     0,     0,     0,  -110,     0,     0,     0,     0,
       0,     0,  -108,  -108,  -108,  -108,  -108,  -108,   -95,     0,
       0,     0,  -108,  -108,  -108,   -95,   129,     0,     0,     0,
       0,  -108,     0,     0,     0,     0,     0,     0,   -95,   -95,
     -95,   -95,   -95,   -95,   -97,     0,     0,     0,   -95,   -95,
     -95,   -97,   -97,     0,     0,     0,     0,   -95,     0,     0,
       0,     0,     0,     0,   -97,   -97,   -97,   -97,   -97,   -97,
    -103,     0,     0,     0,   -97,   -97,   -97,  -103,  -103,     0,
       0,     0,     0,   -97,     0,     0,     0,     0,     0,     0,
    -103,  -103,  -103,  -103,  -103,  -103,  -104,     0,     0,     0,
    -103,  -103,  -103,  -104,  -104,     0,     0,     0,     0,  -103,
       0,     0,     0,     0,     0,     0,  -104,  -104,  -104,  -104,
    -104,  -104,  -102,     0,     0,     0,  -104,  -104,  -104,  -102,
    -102,     0,     0,     0,     0,  -104,     0,     0,     0,     0,
       0,     0,  -102,  -102,  -102,  -102,  -102,  -102,  -122,     0,
       0,     0,  -102,  -102,  -102,  -122,  -122,     0,     0,     0,
       0,  -102,     0,     0,     0,     0,     0,     0,  -122,  -122,
    -122,  -122,  -122,  -122,   -93,     0,     0,     0,  -122,  -122,
    -122,   280,     0,     0,     0,     0,     0,  -122,     0,     0,
       0,     0,     0,     0,   -93,   -93,   -93,   -93,   -93,   -93,
     -92,     0,     0,     0,   -93,   -93,   -93,   121,   122,   123,
     124,   125,   126,   -93,     0,     0,     0,   -91,   -91,   -91,
     121,   122,   123,   124,   125,   126,   -91,   -91,     0,   -91,
     -92,   -92,   -92,   121,   122,   123,   124,   125,   126,   -92,
       0,     0,     0,   -92,   -92,   -92,   121,   122,   123,   124,
     125,   126,     0,  -122,  -122,   -92,   -91,   -91,   -91,     0,
       0,     0,     0,     0,     0,   -91,  -122,  -122,  -122,  -122,
    -122,  -122,     0,     0,     0,     0,  -122,  -122,  -122,  -106,
    -106,     0,     0,     0,     0,     0,  -122,  -122,  -122,     0,
       0,     0,  -106,  -106,  -106,  -106,  -106,  -106,     0,     0,
       0,     0,  -106,  -106,  -106,  -122,  -122,     0,     0,     0,
       0,     0,  -106,   437,  -106,     0,     0,     0,  -122,  -122,
    -122,  -122,  -122,  -122,     0,     0,     0,     0,  -122,  -122,
    -122,  -106,  -106,     0,     0,     0,     0,     0,     0,  -122,
    -122,     0,     0,     0,  -106,  -106,  -106,  -106,  -106,  -106,
       0,     0,     0,     0,  -106,  -106,  -106,  -126,  -126,     0,
       0,     0,     0,     0,     0,   389,  -106,     0,     0,     0,
    -126,  -126,  -126,  -126,  -126,  -126,     0,     0,     0,     0,
    -126,  -126,  -126,  -125,  -125,     0,     0,     0,     0,     0,
    -126,     0,  -126,     0,     0,     0,  -125,  -125,  -125,  -125,
    -125,  -125,     0,     0,     0,     0,  -125,  -125,  -125,  -109,
    -109,     0,     0,     0,     0,     0,  -125,     0,  -125,     0,
       0,     0,  -109,  -109,  -109,  -109,  -109,  -109,     0,     0,
       0,     0,  -109,  -109,  -109,   -96,   129,     0,     0,     0,
       0,     0,  -109,     0,  -109,     0,     0,     0,   -96,   -96,
     -96,   -96,   -96,   -96,     0,     0,     0,     0,   -96,   -96,
     -96,   -98,   -98,     0,     0,     0,     0,     0,   -96,     0,
     -96,     0,     0,     0,   -98,   -98,   -98,   -98,   -98,   -98,
       0,     0,     0,     0,   -98,   -98,   -98,   -99,   -99,     0,
       0,     0,     0,     0,   -98,     0,   -98,     0,     0,     0,
     -99,   -99,   -99,   -99,   -99,   -99,     0,     0,     0,     0,
     -99,   -99,   -99,  -107,  -107,     0,     0,     0,     0,     0,
     -99,     0,   -99,     0,     0,     0,  -107,  -107,  -107,  -107,
    -107,  -107,     0,     0,     0,     0,  -107,  -107,  -107,  -122,
    -122,     0,     0,     0,     0,     0,  -107,     0,  -107,     0,
       0,     0,  -122,  -122,  -122,  -122,  -122,  -122,     0,     0,
       0,     0,  -122,  -122,  -122,  -100,  -100,     0,     0,     0,
       0,     0,  -122,     0,  -122,     0,     0,     0,  -100,  -100,
    -100,  -100,  -100,  -100,     0,     0,     0,     0,  -100,  -100,
    -100,  -106,  -106,     0,     0,     0,     0,     0,  -100,     0,
    -100,     0,     0,     0,  -106,  -106,  -106,  -106,  -106,  -106,
       0,     0,     0,     0,  -106,  -106,  -106,  -101,  -101,     0,
       0,     0,     0,     0,  -106,     0,  -106,     0,     0,     0,
    -101,  -101,  -101,  -101,  -101,  -101,     0,     0,     0,     0,
    -101,  -101,  -101,  -105,  -105,     0,     0,     0,     0,     0,
    -101,     0,  -101,     0,     0,     0,  -105,  -105,  -105,  -105,
    -105,  -105,     0,     0,     0,     0,  -105,  -105,  -105,  -110,
    -110,     0,     0,     0,     0,     0,  -105,     0,  -105,     0,
       0,     0,  -110,  -110,  -110,  -110,  -110,  -110,     0,     0,
       0,     0,  -110,  -110,  -110,  -108,  -108,     0,     0,     0,
       0,     0,  -110,     0,  -110,     0,     0,     0,  -108,  -108,
    -108,  -108,  -108,  -108,     0,     0,     0,     0,  -108,  -108,
    -108,   -95,   129,     0,     0,     0,     0,     0,  -108,     0,
    -108,     0,     0,     0,   -95,   -95,   -95,   -95,   -95,   -95,
       0,     0,     0,     0,   -95,   -95,   -95,   -97,   -97,     0,
       0,     0,     0,     0,   -95,     0,   -95,     0,     0,     0,
     -97,   -97,   -97,   -97,   -97,   -97,     0,     0,     0,     0,
     -97,   -97,   -97,  -103,  -103,     0,     0,     0,     0,     0,
     -97,     0,   -97,     0,     0,     0,  -103,  -103,  -103,  -103,
    -103,  -103,     0,     0,     0,     0,  -103,  -103,  -103,  -104,
    -104,     0,     0,     0,     0,     0,  -103,     0,  -103,     0,
       0,     0,  -104,  -104,  -104,  -104,  -104,  -104,     0,     0,
       0,     0,  -104,  -104,  -104,  -102,  -102,     0,     0,     0,
       0,     0,  -104,     0,  -104,     0,     0,     0,  -102,  -102,
    -102,  -102,  -102,  -102,     0,     0,     0,     0,  -102,  -102,
    -102,  -126,  -126,     0,     0,     0,     0,     0,  -102,     0,
    -102,     0,     0,     0,  -126,  -126,  -126,  -126,  -126,  -126,
       0,     0,     0,     0,  -126,  -126,  -126,  -125,  -125,     0,
       0,     0,     0,     0,     0,     0,  -126,     0,     0,     0,
    -125,  -125,  -125,  -125,  -125,  -125,     0,     0,     0,     0,
    -125,  -125,  -125,  -109,  -109,     0,     0,     0,     0,     0,
       0,     0,  -125,     0,     0,     0,  -109,  -109,  -109,  -109,
    -109,  -109,     0,     0,     0,     0,  -109,  -109,  -109,   -96,
     129,     0,     0,     0,     0,     0,     0,     0,  -109,     0,
       0,     0,   -96,   -96,   -96,   -96,   -96,   -96,     0,     0,
       0,     0,   -96,   -96,   -96,   -98,   -98,     0,     0,     0,
       0,     0,     0,     0,   -96,     0,     0,     0,   -98,   -98,
     -98,   -98,   -98,   -98,     0,     0,     0,     0,   -98,   -98,
     -98,   -99,   -99,     0,     0,     0,     0,     0,     0,     0,
     -98,     0,     0,     0,   -99,   -99,   -99,   -99,   -99,   -99,
       0,     0,     0,     0,   -99,   -99,   -99,  -107,  -107,     0,
       0,     0,     0,     0,     0,     0,   -99,     0,     0,     0,
    -107,  -107,  -107,  -107,  -107,  -107,     0,     0,     0,     0,
    -107,  -107,  -107,   280,     0,     0,     0,     0,     0,     0,
       0,     0,  -107,     0,     0,     0,   -94,   -94,   -94,   -94,
     -94,   -94,     0,     0,     0,     0,   -94,   -94,   -94,  -122,
    -122,     0,     0,     0,     0,     0,   -94,     0,   -94,     0,
       0,     0,  -122,  -122,  -122,  -122,  -122,  -122,     0,     0,
       0,     0,  -122,  -122,  -122,  -100,  -100,     0,     0,     0,
       0,     0,     0,     0,  -122,     0,     0,     0,  -100,  -100,
    -100,  -100,  -100,  -100,     0,     0,     0,     0,  -100,  -100,
    -100,  -106,  -106,     0,     0,     0,     0,     0,     0,     0,
    -100,     0,     0,     0,  -106,  -106,  -106,  -106,  -106,  -106,
       0,     0,     0,     0,  -106,  -106,  -106,  -101,  -101,     0,
       0,     0,     0,     0,     0,     0,  -106,     0,     0,     0,
    -101,  -101,  -101,  -101,  -101,  -101,     0,     0,     0,     0,
    -101,  -101,  -101,  -105,  -105,     0,     0,     0,     0,     0,
       0,     0,  -101,     0,     0,     0,  -105,  -105,  -105,  -105,
    -105,  -105,     0,     0,     0,     0,  -105,  -105,  -105,  -110,
    -110,     0,     0,     0,     0,     0,     0,     0,  -105,     0,
       0,     0,  -110,  -110,  -110,  -110,  -110,  -110,     0,     0,
       0,     0,  -110,  -110,  -110,  -108,  -108,     0,     0,     0,
       0,     0,     0,     0,  -110,     0,     0,     0,  -108,  -108,
    -108,  -108,  -108,  -108,     0,     0,     0,     0,  -108,  -108,
    -108,   -95,   129,     0,     0,     0,     0,     0,     0,     0,
    -108,     0,     0,     0,   -95,   -95,   -95,   -95,   -95,   -95,
       0,     0,     0,     0,   -95,   -95,   -95,   -97,   -97,     0,
       0,     0,     0,     0,     0,     0,   -95,     0,     0,     0,
     -97,   -97,   -97,   -97,   -97,   -97,     0,     0,     0,     0,
     -97,   -97,   -97,  -103,  -103,     0,     0,     0,     0,     0,
       0,     0,   -97,     0,     0,     0,  -103,  -103,  -103,  -103,
    -103,  -103,     0,     0,     0,     0,  -103,  -103,  -103,   280,
       0,     0,     0,     0,     0,     0,     0,     0,  -103,     0,
       0,     0,   -93,   -93,   -93,   -93,   -93,   -93,     0,     0,
       0,     0,   -93,   -93,   -93,  -104,  -104,     0,     0,     0,
       0,     0,   -93,     0,   -93,     0,     0,     0,  -104,  -104,
    -104,  -104,  -104,  -104,     0,     0,     0,     0,  -104,  -104,
    -104,  -102,  -102,     0,     0,     0,     0,     0,     0,     0,
    -104,     0,     0,     0,  -102,  -102,  -102,  -102,  -102,  -102,
       0,     0,     0,     0,  -102,  -102,  -102,   280,     0,     0,
       0,     0,     0,     0,     0,     0,  -102,     0,     0,     0,
     -93,   -93,   -93,   -93,   -93,   -93,     0,     0,     0,     0,
     -93,   -93,   -93,  -122,  -122,     0,     0,     0,     0,     0,
       0,     0,   -93,     0,     0,     0,  -122,  -122,  -122,  -122,
    -122,  -122,     0,     0,     0,     0,  -122,  -122,  -122,  -106,
    -106,     0,     0,     0,     0,  -122,     0,  -122,     0,     0,
       0,     0,  -106,  -106,  -106,  -106,  -106,  -106,     0,     0,
       0,     0,  -106,  -106,  -106,  -122,  -122,     0,     0,     0,
       0,  -106,     0,   421,     0,     0,     0,     0,  -122,  -122,
    -122,  -122,  -122,  -122,     0,     0,     0,     0,  -122,  -122,
    -122,  -106,  -106,     0,     0,     0,     0,     0,     0,  -122,
       0,     0,     0,     0,  -106,  -106,  -106,  -106,  -106,  -106,
       0,     0,     0,     0,  -106,  -106,  -106,  -126,  -126,     0,
       0,     0,     0,     0,     0,   400,     0,     0,     0,     0,
    -126,  -126,  -126,  -126,  -126,  -126,     0,  -125,  -125,     0,
    -126,  -126,  -126,     0,     0,     0,     0,     0,     0,  -126,
    -125,  -125,  -125,  -125,  -125,  -125,     0,  -109,  -109,     0,
    -125,  -125,  -125,     0,     0,     0,     0,     0,     0,  -125,
    -109,  -109,  -109,  -109,  -109,  -109,     0,   -96,   129,     0,
    -109,  -109,  -109,     0,     0,     0,     0,     0,     0,  -109,
     -96,   -96,   -96,   -96,   -96,   -96,     0,   -98,   -98,     0,
     -96,   -96,   -96,     0,     0,     0,     0,     0,     0,   -96,
     -98,   -98,   -98,   -98,   -98,   -98,     0,   -99,   -99,     0,
     -98,   -98,   -98,     0,     0,     0,     0,     0,     0,   -98,
     -99,   -99,   -99,   -99,   -99,   -99,     0,  -107,  -107,     0,
     -99,   -99,   -99,     0,     0,     0,     0,     0,     0,   -99,
    -107,  -107,  -107,  -107,  -107,  -107,     0,  -122,  -122,     0,
    -107,  -107,  -107,     0,     0,     0,     0,     0,     0,  -107,
    -122,  -122,  -122,  -122,  -122,  -122,     0,  -100,  -100,     0,
    -122,  -122,  -122,     0,     0,     0,     0,     0,     0,  -122,
    -100,  -100,  -100,  -100,  -100,  -100,     0,  -106,  -106,     0,
    -100,  -100,  -100,     0,     0,     0,     0,     0,     0,  -100,
    -106,  -106,  -106,  -106,  -106,  -106,     0,  -101,  -101,     0,
    -106,  -106,  -106,     0,     0,     0,     0,     0,     0,  -106,
    -101,  -101,  -101,  -101,  -101,  -101,     0,  -105,  -105,     0,
    -101,  -101,  -101,     0,     0,     0,     0,     0,     0,  -101,
    -105,  -105,  -105,  -105,  -105,  -105,     0,  -110,  -110,     0,
    -105,  -105,  -105,     0,     0,     0,     0,     0,     0,  -105,
    -110,  -110,  -110,  -110,  -110,  -110,     0,  -108,  -108,     0,
    -110,  -110,  -110,     0,     0,     0,     0,     0,     0,  -110,
    -108,  -108,  -108,  -108,  -108,  -108,     0,   -95,   129,     0,
    -108,  -108,  -108,     0,     0,     0,     0,     0,     0,  -108,
     -95,   -95,   -95,   -95,   -95,   -95,     0,   -97,   -97,     0,
     -95,   -95,   -95,     0,     0,     0,     0,     0,     0,   -95,
     -97,   -97,   -97,   -97,   -97,   -97,     0,  -103,  -103,     0,
     -97,   -97,   -97,     0,     0,     0,     0,     0,     0,   -97,
    -103,  -103,  -103,  -103,  -103,  -103,     0,  -104,  -104,     0,
    -103,  -103,  -103,     0,     0,     0,     0,     0,     0,  -103,
    -104,  -104,  -104,  -104,  -104,  -104,     0,  -102,  -102,     0,
    -104,  -104,  -104,     0,     0,     0,     0,     0,     0,  -104,
    -102,  -102,  -102,  -102,  -102,  -102,     0,   280,     0,     0,
    -102,  -102,  -102,     0,     0,     0,     0,     0,     0,  -102,
     -93,   -93,   -93,   -93,   -93,   -93,     0,  -126,  -126,     0,
     -93,   -93,   -93,     0,     0,     0,     0,     0,     0,   -93,
    -126,  -126,  -126,  -126,  -126,  -126,  -125,  -125,     0,     0,
    -126,  -126,  -126,     0,     0,     0,     0,     0,     0,  -125,
    -125,  -125,  -125,  -125,  -125,  -109,  -109,     0,     0,  -125,
    -125,  -125,     0,     0,     0,     0,     0,     0,  -109,  -109,
    -109,  -109,  -109,  -109,   -96,   129,     0,     0,  -109,  -109,
    -109,     0,     0,     0,     0,     0,     0,   -96,   -96,   -96,
     -96,   -96,   -96,   -98,   -98,     0,     0,   -96,   -96,   -96,
       0,     0,     0,     0,     0,     0,   -98,   -98,   -98,   -98,
     -98,   -98,   -99,   -99,     0,     0,   -98,   -98,   -98,     0,
       0,     0,     0,     0,     0,   -99,   -99,   -99,   -99,   -99,
     -99,  -107,  -107,     0,     0,   -99,   -99,   -99,     0,     0,
       0,     0,     0,     0,  -107,  -107,  -107,  -107,  -107,  -107,
    -122,  -122,     0,     0,  -107,  -107,  -107,     0,     0,     0,
       0,     0,     0,  -122,  -122,  -122,  -122,  -122,  -122,  -100,
    -100,     0,     0,  -122,  -122,  -122,     0,     0,     0,     0,
       0,     0,  -100,  -100,  -100,  -100,  -100,  -100,  -106,  -106,
       0,     0,  -100,  -100,  -100,     0,     0,     0,     0,     0,
       0,  -106,  -106,  -106,  -106,  -106,  -106,  -101,  -101,     0,
       0,  -106,  -106,  -106,     0,     0,     0,     0,     0,     0,
    -101,  -101,  -101,  -101,  -101,  -101,  -105,  -105,     0,     0,
    -101,  -101,  -101,     0,     0,     0,     0,     0,     0,  -105,
    -105,  -105,  -105,  -105,  -105,  -110,  -110,     0,     0,  -105,
    -105,  -105,     0,     0,     0,     0,     0,     0,  -110,  -110,
    -110,  -110,  -110,  -110,  -108,  -108,     0,     0,  -110,  -110,
    -110,     0,     0,     0,     0,     0,     0,  -108,  -108,  -108,
    -108,  -108,  -108,   -95,   129,     0,     0,  -108,  -108,  -108,
       0,     0,     0,     0,     0,     0,   -95,   -95,   -95,   -95,
     -95,   -95,   -97,   -97,     0,     0,   -95,   -95,   -95,     0,
       0,     0,     0,     0,     0,   -97,   -97,   -97,   -97,   -97,
     -97,  -103,  -103,     0,     0,   -97,   -97,   -97,     0,     0,
       0,     0,     0,     0,  -103,  -103,  -103,  -103,  -103,  -103,
    -104,  -104,     0,     0,  -103,  -103,  -103,     0,     0,     0,
       0,     0,     0,  -104,  -104,  -104,  -104,  -104,  -104,  -102,
    -102,     0,     0,  -104,  -104,  -104,     0,     0,     0,     0,
       0,     0,  -102,  -102,  -102,  -102,  -102,  -102,   280,     0,
       0,     0,  -102,  -102,  -102,     0,     0,     0,     0,     0,
       0,   -94,   -94,   -94,   -94,   -94,   -94,   280,     0,     0,
       0,   -94,   -94,   -94,     0,     0,     0,     0,     0,     0,
     -93,   -93,   -93,   -93,   -93,   -93,     0,     0,     0,     0,
     -93,   -93,   -93,   121,   122,   123,   124,   125,   126,     0,
       0,     0,     0,   -91,   -91,   -91,   121,   122,   123,   124,
     125,   126,     0,     0,     0,   -91,   -92,   -92,   -92,   121,
     122,   123,   124,   125,   126,   -92,     0,     0,     0,   -91,
     -91,   -91,   121,   122,   123,   124,   125,   126,   -91,     0,
       0,     0,   -91,   -91,   -91
};

static const yytype_int16 yycheck[] =
{
       0,    36,   134,    41,     0,   141,    65,     7,   346,    27,
     203,     7,   206,     0,   548,   272,    40,     1,     1,     1,
      31,    32,    33,     1,    24,    31,    32,    27,   206,    40,
      65,     1,   289,   206,     5,   274,     5,    43,    29,    11,
       1,    12,    40,    34,    14,    15,    16,    17,    31,    32,
      33,    43,   291,    25,    42,     1,    40,    40,    40,    31,
     317,     1,    40,     5,    36,   206,     1,     1,     1,    41,
     206,    44,    90,    43,    14,    15,    16,    17,     1,    40,
     319,   338,    40,   206,    56,    31,    32,    33,    60,    61,
      90,     1,     5,    65,    40,    43,     0,     1,    89,    12,
     206,   340,    93,    43,     1,    40,    40,    40,   244,     5,
      14,    15,    16,    17,    86,     1,    88,    40,     1,    43,
       1,    31,    32,    95,     5,    97,    43,    99,   662,    43,
      40,     1,   104,     1,     1,   206,    40,     5,     6,     7,
       8,   113,     5,    40,    43,    13,   118,   119,   120,    12,
     206,    31,    32,    33,    40,   127,   128,    40,   130,   131,
     132,    31,    32,    43,    31,    32,    34,    31,    32,   141,
      40,    31,    32,    40,    42,    40,    40,   227,     1,   229,
      40,    42,     5,     6,     7,     8,     1,   237,   238,   239,
      13,     1,   227,    41,   229,    43,   389,   247,    14,    15,
      16,    17,   237,   238,   239,     1,   206,   400,    42,     5,
     206,    34,   247,   185,     1,     5,    31,    32,     5,    42,
       1,    31,    32,   480,    42,    40,     5,    43,   421,   567,
      40,   203,   489,    12,   206,     5,   227,    27,   229,    29,
      30,     1,    12,   482,   437,     5,   237,   238,   239,     1,
      31,    32,   491,    42,   226,   227,   247,   229,    40,    40,
      42,   518,    40,    41,     1,   237,   238,   239,     5,     6,
       7,     8,   244,    10,    11,   247,    13,     1,    42,    31,
      32,   520,    31,    32,   541,    42,    31,    32,    40,    42,
      27,    40,    29,    30,   266,   267,    41,    34,    43,     1,
     359,    40,    41,    42,   543,    42,   278,    31,    32,     5,
       6,     7,    42,   372,   286,   287,    40,    13,    40,     5,
      42,     1,    42,   295,   359,     5,     6,     7,     8,    31,
      32,     5,    42,    13,   466,     1,    45,   372,    40,   311,
     312,    27,    42,    29,    30,    40,    42,    27,    40,    29,
      30,   323,     1,    27,    34,    29,    30,    40,    31,    32,
     332,   333,    42,    43,     1,    31,    32,    40,     5,     6,
       7,     8,   344,    41,    40,    43,    13,     5,   350,    31,
      32,    33,    31,    32,    31,    32,   358,   359,    40,    43,
      27,    40,    29,    30,    41,    43,    43,    34,    43,   371,
     372,   439,     5,     6,     7,    42,    43,    40,    41,    42,
      13,    45,   384,   385,   386,   387,   388,   389,   554,     5,
       6,     7,    41,    42,    43,     1,    43,    13,   400,     5,
       6,     7,     8,     5,    10,    11,    41,    13,    43,    42,
      31,    32,    33,   415,   416,   417,   418,   419,   420,   421,
      41,    27,    43,    29,    30,   649,    42,    31,    34,   431,
     432,   433,   434,   435,   436,   437,    42,   439,    31,    32,
      41,   649,    43,     5,     6,     7,   649,    40,    31,    32,
     452,    13,   454,   455,   678,    31,   680,     1,    41,   461,
      43,     5,     6,     7,     8,   689,   690,   469,   692,    13,
     678,    40,   680,    42,     1,   678,   700,   680,   649,    43,
      42,   689,   690,   649,   692,    43,   689,   690,    43,   692,
      34,    36,   700,     5,     6,     7,   649,   700,    42,    42,
      27,    13,    29,    30,    41,    42,    43,   678,    40,   680,
      42,    56,   678,   649,   680,    60,    61,     1,   689,   690,
      65,   692,    43,   689,   690,   678,   692,   680,    43,   700,
      42,   697,    43,     5,   700,    43,   689,   690,    41,   692,
      43,    86,   678,    27,   680,    29,    30,   700,   649,    41,
      95,    43,   554,   689,   690,    27,   692,    29,    30,   627,
      31,    32,    33,   649,   700,     5,     6,     7,   113,   649,
      41,    40,    43,    13,   119,   120,    41,   678,    43,   680,
      42,    43,   127,   128,    43,   130,   131,   132,   689,   690,
      43,   692,   678,    43,   680,    31,    32,    33,   678,   700,
     680,    43,    42,   689,   690,     1,   692,    43,    40,   689,
     690,    35,   692,     1,   700,    31,    32,     8,   620,   649,
     700,    40,    41,   649,    40,   627,    14,    15,    16,    17,
      21,    22,    23,    24,    25,    26,    31,    32,    33,     1,
      31,    32,    33,     5,     6,     7,     8,   649,   678,    40,
     680,    13,   678,    40,   680,    31,    32,    33,   203,   689,
     690,   206,   692,   689,   690,    27,   692,    29,    30,    41,
     700,    43,    34,    40,   700,   677,   678,    41,   680,    43,
      42,   226,   227,    40,   229,    31,    32,   689,   690,    41,
     692,    43,   237,   238,   239,   697,    40,    43,   700,    31,
      32,    40,   247,     1,    31,    32,    40,     5,     6,     7,
       8,    43,    40,     1,    41,    13,    43,     5,     6,     7,
       8,   266,   267,    31,    32,    13,    40,    36,    40,    27,
       1,    29,    30,   278,     1,    43,    34,    43,     5,    42,
      43,   286,   287,    43,    42,    43,    34,    31,    32,    43,
     295,    60,    61,     1,    42,     1,    65,     5,    43,    43,
      27,    43,    29,    30,     1,    43,   311,   312,     5,     6,
       7,     8,    81,    31,    32,    43,    13,    40,   323,    27,
       5,    29,    30,    41,    43,    43,    95,   332,   333,     5,
      27,     5,    29,    30,     5,    31,    32,    34,     5,   344,
      31,    32,    42,    43,   113,    42,    43,    43,    31,    32,
     119,   120,    43,   358,   359,    42,    31,    32,   127,   128,
      43,   130,   131,   132,     1,    40,    43,   372,     5,     6,
       7,     8,    42,     1,    31,    32,    13,     5,    42,   384,
     385,   386,   387,   388,   389,    31,    31,    32,    31,    32,
      27,    43,    29,    30,    43,   400,    41,    34,    43,    27,
      43,    29,    30,   172,    42,    42,    43,     0,     1,    31,
      32,   416,   417,   418,   419,   420,   421,    42,    40,    42,
      43,    14,    15,    16,    17,    42,    43,   432,   433,   434,
     435,   436,   437,    42,   203,    42,    43,   206,     1,    31,
      32,    42,     5,     6,     7,     8,    42,   452,    42,    41,
      13,    43,     1,    31,    32,    42,   461,   226,   227,     8,
     229,    41,    42,    41,   469,    43,    40,    41,   237,   238,
     239,    34,    21,    22,    23,    24,    25,    26,   247,    42,
      31,    32,    31,    32,    33,    31,    32,    41,    42,    43,
      41,    40,    43,    31,    32,    41,     1,    43,   267,     4,
       5,     6,     7,     8,   273,    43,    42,    43,    13,    14,
      15,    16,    17,    18,    19,    20,    31,    32,   287,    42,
      43,   290,    27,    28,    29,    30,    41,    40,    43,    34,
      42,    36,    37,    38,    39,    31,    32,    42,    31,    32,
      45,    42,     8,   312,    31,    32,    35,    43,    42,   318,
      43,    31,    32,    40,    40,    21,    22,    23,    24,    25,
      26,    42,    43,    43,   333,    31,    32,    33,    43,     1,
     339,    43,     4,     5,     6,     7,     8,    43,    42,    31,
      32,    13,    14,    15,    16,    17,    18,    19,    20,   358,
     359,    43,    41,    42,    43,    27,    28,    29,    30,    42,
      31,    32,    34,   372,    36,    37,    38,    39,     0,     1,
      42,    40,    43,    45,    42,   384,   385,   386,   387,   388,
     389,    42,    14,    15,    16,    17,    31,    32,     1,    31,
      32,   400,     5,     6,     7,     8,    31,    32,    43,    42,
      13,    43,    42,    43,   649,    40,    40,   416,   417,   418,
     419,   420,   421,    35,    27,    43,    29,    30,    43,    31,
      32,    34,    43,   432,   433,   434,   435,   436,   437,    42,
      45,    43,   677,   678,    36,   680,    31,    32,    31,    32,
      43,    31,    32,   452,   689,   690,    43,   692,    43,    45,
      43,    42,   461,    43,    56,   700,    40,    41,    60,    61,
     469,     1,    42,    65,     4,     5,     6,     7,     8,    42,
      31,    32,   481,    13,    14,    15,    16,    17,    18,    19,
      20,   490,    43,    42,    86,    42,    43,    27,    28,    29,
      30,    42,    43,    95,    34,    42,    36,    37,    38,    39,
      31,    32,    42,    31,    32,    45,     0,     1,    42,    43,
     519,   113,    43,    42,    43,    43,    43,   119,   120,    43,
      14,    15,    16,    17,    42,   127,   128,    42,   130,   131,
     132,     1,    42,   542,     4,     5,     6,     7,     8,     0,
       1,    42,    43,    13,    14,    15,    16,    17,    18,    19,
      20,    31,    32,    14,    15,    16,    17,    27,    28,    29,
      30,    42,    43,    43,    34,    43,    36,    37,    38,    39,
      60,    61,    42,     1,    42,    45,    42,     5,     6,     7,
       8,    43,     0,     1,    42,    13,    42,     1,    31,    32,
      31,    32,    42,    43,     8,     9,    14,    15,    16,    17,
      43,   203,    43,    43,   206,    95,    34,    21,    22,    23,
      24,    25,    26,    43,    42,     0,     1,    31,    32,    33,
      31,    35,    43,   113,   226,   227,    40,   229,    42,    14,
      15,    16,    17,    42,    43,   237,   238,   239,    31,    32,
     649,   131,   132,     0,     1,   247,    41,    42,    43,     1,
      43,    31,    32,     5,     6,     7,     8,    14,    15,    16,
      17,    13,    31,    43,   266,   267,    42,    43,   677,   678,
      36,   680,    31,    32,     1,    27,   278,    29,    30,    43,
     689,   690,    34,   692,    43,   287,    31,    32,    40,    43,
      42,   700,    31,    32,    60,    61,    31,    32,    43,    65,
       1,    40,    31,    32,     5,     6,     7,     8,    43,   311,
     312,    43,    13,   203,    43,    43,   206,    42,    43,    42,
      43,   323,    31,    32,    40,    31,    32,    42,    43,    95,
     332,   333,    43,    34,    43,    43,   226,    43,    43,     1,
      43,    42,   344,     5,     6,     7,     8,   113,    42,    43,
      43,    13,    43,   119,   120,    40,   358,   359,    40,     0,
       1,   127,   128,    40,   130,   131,   132,    42,    43,    40,
     372,     1,    34,    14,    15,    16,    17,   267,     8,     9,
      42,    40,   384,   385,   386,   387,   388,   389,    42,    43,
      40,    21,    22,    23,    24,    25,    26,   287,   400,    42,
      43,    31,    32,    33,    43,    35,    42,    43,    42,    43,
      40,    40,    42,    40,   416,   417,   418,   419,   420,   421,
      42,    43,   312,    42,    43,    42,    43,    42,    43,    40,
     432,   433,   434,   435,   436,   437,    43,   203,    42,    43,
     206,    40,    40,   333,    21,    22,    23,    24,    25,    26,
     452,    40,    40,    40,    31,    32,    33,    43,    43,   461,
     226,   227,    43,   229,    41,     1,    43,   469,   358,    40,
      40,   237,   238,   239,    43,     7,   453,   650,   693,     1,
     699,   247,     4,     5,     6,     7,     8,   617,   649,   684,
     682,    13,    14,    15,    16,    17,    18,    19,    20,   389,
     681,   267,    -1,   461,    -1,    27,    28,    29,    30,   461,
     400,    -1,    34,    -1,    36,    37,    38,    39,    -1,    -1,
      42,   287,     1,    45,    -1,     4,     5,     6,     7,     8,
      -1,   421,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,   312,   437,    27,    28,
      29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,
      39,    -1,   452,    42,    -1,    -1,    45,   333,     1,    -1,
      -1,   461,     5,     6,     7,     8,    -1,    -1,    -1,   469,
      13,    -1,    -1,     1,    -1,    -1,    -1,     5,     6,     7,
       8,    -1,   358,   359,    27,    13,    29,    30,    -1,    -1,
      -1,    34,    -1,    -1,    -1,     1,   372,    40,    -1,    42,
      -1,    -1,     8,     9,    -1,    -1,    34,    -1,   384,   385,
     386,   387,   388,   389,    42,    21,    22,    23,    24,    25,
      26,    -1,    -1,   399,   400,    31,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    42,   649,     0,     1,
     416,   417,   418,   419,   420,   421,    36,    -1,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,   432,   433,   434,   435,
     436,   437,    -1,    -1,    -1,   677,   678,    -1,   680,    -1,
      60,    61,    -1,    -1,    -1,    65,   452,   689,   690,     1,
     692,     0,     1,    -1,    -1,   461,     8,     9,   700,    -1,
      -1,    -1,    -1,   469,    -1,    14,    15,    16,    17,    21,
      22,    23,    24,    25,    26,    95,    -1,    -1,    -1,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      42,    -1,    -1,   113,    -1,    -1,    -1,    -1,    36,   119,
     120,     0,     1,    -1,    -1,    -1,    -1,   127,   128,    -1,
      -1,   131,   132,    -1,    -1,    14,    15,    16,    17,   649,
      -1,    -1,    60,    61,    -1,     1,    -1,    65,    -1,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   677,   678,    -1,
     680,    27,    -1,    29,    30,    -1,    -1,    95,    34,   689,
     690,    -1,   692,    -1,    -1,    -1,    42,    -1,    -1,    -1,
     700,    -1,     1,    -1,    -1,   113,     5,     6,     7,     8,
      -1,   119,   120,   203,    13,    -1,   206,    -1,    -1,   127,
      -1,    -1,    -1,   131,   132,    -1,    -1,    -1,    27,    -1,
      29,    30,    -1,    -1,    -1,    34,   226,   227,    -1,   229,
      -1,    -1,    -1,    42,    -1,    -1,     1,   237,   238,   239,
       5,     6,     7,     8,    -1,     1,    -1,   247,    13,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    27,   649,    29,    30,    -1,   267,    -1,    34,
      -1,    27,    -1,    29,    30,    -1,    -1,    42,    34,    -1,
      -1,    -1,    -1,    -1,    -1,   203,    42,   287,   206,    -1,
      -1,   677,   678,     1,   680,    -1,    -1,     5,     6,     7,
       8,     0,     1,   689,   690,    13,   692,    -1,   226,   227,
      -1,   229,   312,    -1,   700,    14,    15,    16,    17,   237,
     238,   239,    -1,    -1,    -1,    -1,    34,    -1,    -1,   247,
      -1,    -1,    -1,   333,    42,    -1,    -1,    -1,     1,    -1,
      -1,     4,     5,     6,     7,     8,     0,     1,    -1,   267,
      13,    14,    15,    16,    17,    18,    19,    20,   358,   359,
      14,    15,    16,    17,    27,    28,    29,    30,    -1,   287,
      -1,    34,   372,    36,    37,    38,    39,    -1,    -1,    42,
      -1,    -1,    45,    -1,   384,   385,   386,   387,    -1,   389,
      -1,     0,     1,    -1,   312,    -1,    -1,     1,   398,    -1,
     400,     5,     6,     7,     8,    14,    15,    16,    17,    13,
      -1,    -1,    -1,    -1,    -1,   333,   416,   417,   418,   419,
      -1,   421,    -1,    27,    -1,    29,    30,    -1,    -1,    -1,
      34,    -1,   432,   433,   434,   435,    -1,   437,    42,    -1,
     358,   359,    -1,    -1,     1,    -1,    -1,    -1,     5,     6,
       7,     8,   452,     1,   372,    -1,    13,     5,     6,     7,
       8,   461,    -1,    -1,    36,    13,   384,   385,   386,   469,
      27,   389,    29,    30,    -1,    -1,    -1,    34,    -1,   397,
      -1,    -1,   400,    -1,    -1,    42,    34,    -1,    60,    61,
      -1,    -1,    -1,    65,    42,    -1,    -1,    -1,   416,   417,
     418,    -1,    -1,   421,    -1,     1,    -1,    -1,    -1,     5,
       6,     7,     8,    -1,   432,   433,   434,    13,    -1,   437,
      -1,     1,    -1,    95,    -1,     5,     6,     7,     8,    -1,
      -1,    -1,    36,    13,   452,    -1,    -1,    -1,    34,    -1,
      -1,   113,    -1,   461,    -1,    -1,    42,   119,   120,    -1,
      -1,   469,    -1,    -1,    34,    -1,    60,    61,    -1,   131,
     132,    65,    42,    -1,    -1,    -1,     1,    -1,    -1,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    36,    -1,    -1,
      -1,    95,    27,    28,    29,    30,    -1,    -1,    -1,    34,
      -1,    36,    37,    38,    39,    -1,    -1,    42,    -1,   113,
      45,    60,    61,    -1,    -1,    -1,    65,     1,    -1,    -1,
      -1,     5,     6,     7,     8,    -1,    -1,   131,   132,    13,
      -1,   203,    -1,    -1,   206,     1,    -1,    -1,    -1,     5,
       6,     7,     8,    -1,    -1,    -1,    95,    13,    -1,   649,
      34,    -1,    -1,    -1,   226,   227,    -1,   229,    42,    -1,
      -1,    -1,    -1,    -1,   113,   237,   238,   239,    34,    -1,
     119,    -1,    -1,    -1,    -1,   247,    42,   677,   678,    -1,
     680,    -1,   131,   132,    -1,    -1,    -1,    -1,    -1,   689,
     690,    -1,   692,    -1,    -1,   267,    -1,    -1,    -1,   203,
     700,    -1,   206,    -1,     1,    -1,    -1,    -1,     5,     6,
       7,     8,    -1,    -1,     1,   287,    13,    -1,     5,     6,
       7,     8,   226,   227,    -1,   229,    13,    -1,    -1,    -1,
      -1,   649,    -1,   237,   238,   239,    -1,    34,    -1,    -1,
     312,    -1,    -1,   247,    -1,    42,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    42,    -1,   206,    -1,   677,
     678,   333,   680,   267,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   689,   690,    -1,   692,    -1,    -1,   226,   227,    -1,
     229,    -1,   700,   287,    -1,    -1,   358,   359,   237,   238,
     239,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,     1,
     372,    -1,    -1,     5,     6,     7,     8,    -1,   312,    -1,
      -1,    13,   384,   385,    -1,     1,    -1,   389,   267,     5,
       6,     7,     8,    -1,   396,    -1,    -1,    13,   400,   333,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,   287,    -1,
      42,    -1,    -1,    -1,   416,   417,     1,    -1,    34,   421,
       5,     6,     7,     8,   358,   359,    42,    -1,    13,    -1,
     432,   433,    -1,   312,    -1,   437,     1,    -1,   372,    -1,
       5,     6,     7,     8,    61,    -1,    -1,    -1,    13,    34,
     452,    -1,    -1,    -1,   333,   389,    -1,    42,    -1,   461,
      -1,    -1,    27,    -1,    29,    30,   400,   469,    -1,    34,
      -1,    -1,   351,    -1,    -1,    -1,    -1,    42,    95,   358,
     359,    98,    -1,   100,   101,    -1,    -1,   421,    -1,    -1,
      -1,    61,    -1,   372,    -1,     1,   113,    -1,    -1,     5,
       6,     7,     8,   437,    -1,   384,    -1,    13,    -1,    -1,
     389,    -1,    -1,    -1,   131,   132,    -1,    -1,   452,    -1,
      -1,   400,    -1,    -1,    -1,    95,     1,   461,    34,    99,
       5,     6,     7,     8,    -1,   469,    42,   416,    13,    -1,
      -1,    -1,   421,   113,    -1,    -1,    -1,    -1,   118,    -1,
      -1,    -1,    27,   432,    29,    30,    -1,    -1,   437,    34,
      -1,   131,   132,    -1,    -1,     1,    -1,    42,    -1,     5,
       6,     7,     8,   452,    -1,    -1,    -1,    13,    -1,    -1,
       1,    -1,   461,    -1,    -1,    -1,   203,     8,     9,    -1,
     469,    27,    -1,    29,    30,    -1,    -1,    -1,    34,    -1,
      21,    22,    23,    24,    25,    26,    42,    -1,    -1,   226,
      31,    32,    33,    -1,   184,   185,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,     4,     5,
       6,     7,     8,   203,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,   649,    -1,    -1,
     267,    27,    28,    29,    30,    -1,   226,    -1,    34,    -1,
      36,    37,    38,    39,    -1,    -1,    42,     1,    -1,    45,
     287,     5,     6,     7,     8,   677,   678,     1,   680,    13,
      -1,     5,     6,     7,     8,    -1,    -1,   689,   690,    13,
     692,    -1,    -1,    -1,    -1,   312,    -1,   267,   700,     1,
      34,    -1,    -1,     5,     6,     7,     8,    -1,    42,    -1,
      34,    13,    -1,    -1,    -1,   649,   333,   287,    42,    -1,
      -1,     1,    -1,    -1,    -1,     5,     6,     7,     8,    -1,
      -1,    -1,    34,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,   312,   677,   678,    -1,   680,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,   689,   690,    -1,   692,   376,
     377,   378,    42,   333,    -1,    -1,   700,    -1,    -1,    -1,
     649,    -1,   389,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     350,    -1,    -1,   400,    -1,    -1,   403,   404,   405,    -1,
     407,   408,   409,    -1,    -1,    -1,    -1,    -1,   677,   678,
      -1,   680,    -1,    -1,   421,    -1,   423,   424,   425,    -1,
     689,   690,    -1,   692,    -1,    -1,    -1,    -1,    -1,   389,
     437,   700,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,
     400,     5,     6,     7,     8,   452,    -1,    -1,    -1,    13,
      -1,    -1,    -1,    -1,   461,   415,    -1,    -1,    -1,    -1,
      -1,   421,   469,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      34,   431,     4,     5,     6,     7,     8,   437,    42,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,   452,    -1,    -1,    27,    28,    29,    30,    -1,
      -1,   461,    34,    -1,    36,    37,    38,    39,    -1,   469,
      42,    -1,     1,    45,    -1,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,   549,   550,   551,    34,    -1,    36,    37,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,     1,    31,    32,
      33,     5,     6,     7,     8,    -1,    -1,     1,    -1,    13,
       4,     5,     6,     7,     8,    -1,   593,   594,   595,    13,
      14,    15,    16,    17,    18,    19,    20,   604,   605,   606,
      34,    -1,    -1,    27,    28,    29,    30,    -1,    42,    -1,
      34,    -1,    36,    37,    38,    39,    -1,    -1,    42,    -1,
       1,    45,    -1,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,   619,
     620,    42,     1,    -1,    45,     4,     5,     6,     7,     8,
     677,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,     1,    -1,    -1,
       4,     5,     6,     7,     8,    -1,    -1,   677,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    -1,    -1,    -1,
      34,    -1,    36,    37,    38,    39,    -1,    -1,    42,     1,
      -1,    45,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,
      -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,    -1,
      42,     1,    -1,    45,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,
      -1,    -1,    42,     1,    -1,    45,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,
      38,    39,    -1,    -1,    42,     1,    -1,    45,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    -1,    -1,    -1,    34,    -1,
      36,    37,    38,    39,    -1,    -1,    42,     1,    -1,    45,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    -1,    -1,    -1,
      34,    -1,    36,    37,    38,    39,    -1,    -1,    42,     1,
      -1,    45,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,
      -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,    -1,
      42,     1,    -1,    45,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,
      -1,    -1,    42,     1,    -1,    45,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,
      38,    39,    -1,    -1,    42,     1,    -1,    45,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    -1,    -1,    -1,    34,    -1,
      36,    37,    38,    39,    -1,    -1,    42,     1,    -1,    45,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    -1,    -1,    -1,
      34,    -1,    36,    37,    38,    39,    -1,    -1,    42,     1,
      -1,    45,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,
      -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,    -1,
      42,     1,    -1,    45,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,
      -1,    -1,    42,     1,    -1,    45,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,
      38,    39,    -1,    -1,    42,     1,    -1,    45,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    -1,    -1,    -1,    34,    -1,
      36,    37,    38,    39,    -1,    -1,    42,     1,    -1,    45,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    -1,    -1,    -1,
      34,    -1,    36,    37,    38,    39,    -1,    -1,    42,     1,
      -1,    45,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,
      -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,    -1,
      42,     1,    -1,    45,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,
      -1,    -1,    42,     1,    -1,    45,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,
      38,    39,    -1,    -1,    42,     1,    -1,    45,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    -1,    -1,    -1,    34,    -1,
      36,    37,    38,    39,    -1,    -1,    42,     1,    -1,    45,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    -1,    -1,    -1,
      34,    -1,    36,    37,    38,    39,    -1,    -1,    42,     1,
      -1,    45,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,
      -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,    -1,
      42,     1,    -1,    45,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,
      -1,    -1,    42,     1,    -1,    45,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,
      38,    39,    -1,    -1,    42,     1,    -1,    45,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    -1,    -1,    -1,    34,    -1,
      36,    37,    38,    39,    -1,    -1,    42,     1,    -1,    45,
      -1,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    -1,    -1,    -1,
      34,    -1,    36,    37,    38,    39,    -1,    -1,    42,     1,
      -1,    45,    -1,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,
      -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,    -1,
      42,     1,    -1,    45,    -1,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,
      -1,    -1,    42,     1,    -1,    45,    -1,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,
      38,    39,    -1,    -1,    42,     1,    -1,    45,    -1,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    -1,    -1,    -1,    34,    -1,
      36,    37,    38,    39,    -1,    -1,    42,     1,    -1,    45,
      -1,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    -1,    -1,    -1,
      34,    -1,    36,    37,    38,    39,    -1,    -1,    42,     1,
      -1,    45,    -1,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,
      -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,    -1,
      42,     1,    -1,    45,    -1,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,
      -1,    -1,    42,     1,    -1,    45,    -1,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,
      38,    39,    -1,    -1,    42,     1,    -1,    45,    -1,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    -1,    -1,    -1,    34,    -1,
      36,    37,    38,    39,    -1,    -1,    42,     1,    -1,    45,
      -1,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    -1,    -1,    -1,
      34,    -1,    36,    37,    38,    39,    -1,    -1,    42,     1,
      -1,    45,    -1,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,
      -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,    -1,
      42,     1,    -1,    45,    -1,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,
      -1,    -1,    42,     1,    -1,    45,    -1,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,
      38,    39,    -1,    -1,    42,     1,    -1,    45,    -1,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    -1,    -1,    -1,    34,    -1,
      36,    37,    38,    39,    -1,    -1,    42,     1,    -1,    45,
      -1,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    -1,    -1,    -1,
      34,    -1,    36,    37,    38,    39,    -1,    -1,    42,     1,
      -1,    45,    -1,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,
      -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,    -1,
      42,     1,    -1,    45,    -1,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,
      -1,    -1,    42,     1,    -1,    45,    -1,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,
      38,    39,    -1,    -1,    42,     1,    -1,    45,    -1,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    -1,    -1,    -1,    34,    -1,
      36,    37,    38,    39,    -1,    -1,    42,     1,    -1,    45,
      -1,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    -1,    -1,    -1,
      34,    -1,    36,    37,    38,    39,    -1,    -1,    42,     1,
      -1,    45,    -1,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,
      -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,    -1,
      42,     1,    -1,    45,    -1,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,
      -1,    -1,    42,     1,    -1,    45,    -1,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,
      38,    39,    -1,    -1,    42,     1,    -1,    45,    -1,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    -1,    -1,    -1,    34,    -1,
      36,    37,    38,    39,    -1,    -1,    42,     1,    -1,    45,
      -1,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    -1,    -1,    -1,
      34,    -1,    36,    37,    38,    39,    -1,    -1,    42,     1,
      -1,    45,    -1,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,
      -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,    -1,
      42,     1,    -1,    45,    -1,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,
      -1,    -1,    42,     1,    -1,    45,    -1,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,
      38,    39,    -1,    -1,    42,     1,    -1,    45,    -1,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    -1,    -1,    -1,    34,    -1,
      36,    37,    38,    39,    -1,    -1,    42,     1,    -1,    45,
      -1,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    -1,    -1,    -1,
      34,    -1,    36,    37,    38,    39,    -1,    -1,    42,     1,
      -1,    45,    -1,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,
      -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,    -1,
      42,     1,    -1,    45,    -1,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,
      -1,    -1,    42,     1,    -1,    45,    -1,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,
      38,    39,    -1,    -1,    42,     1,    -1,    45,    -1,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    -1,    -1,    -1,    34,    -1,
      36,    37,    38,    39,    -1,    -1,    42,     1,    -1,    45,
      -1,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    -1,    -1,    -1,
      34,    -1,    36,    37,    38,    39,    -1,    -1,    42,     1,
      -1,    45,    -1,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,
      -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,    -1,
      42,     1,    -1,    45,    -1,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,
      -1,    -1,    42,     1,    -1,    45,    -1,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,
      38,    39,    -1,    -1,    42,     1,    -1,    45,    -1,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    -1,    -1,    -1,    34,    -1,
      36,    37,    38,    39,    -1,    -1,    42,     1,    -1,    45,
      -1,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    -1,    -1,    -1,
      34,    -1,    36,    37,    38,    39,    -1,    -1,    42,     1,
      -1,    45,    -1,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,
      -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,     1,
      42,    -1,    44,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,
      -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,     1,
      42,    -1,    44,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,
      -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,     1,
      42,    -1,    44,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,
      -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,     1,
      42,    -1,    44,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,
      -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,     1,
      42,    -1,    44,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,
      -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,     1,
      42,    -1,    44,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,
      -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,     1,
      42,    -1,    44,     5,     6,     7,     8,    -1,     1,    -1,
      -1,    13,     5,     6,     7,     8,    -1,     1,    -1,    -1,
      13,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,
       1,    -1,    34,    -1,     5,     6,     7,     8,    -1,     1,
      42,    34,    13,     5,     6,     7,     8,    -1,     1,    42,
      34,    13,     5,     6,     7,     8,    -1,    -1,    42,    -1,
      13,     1,    -1,    34,    -1,     5,     6,     7,     8,    -1,
       1,    42,    34,    13,     5,     6,     7,     8,    -1,     1,
      42,    34,    13,     5,     6,     7,     8,    -1,    -1,    42,
      -1,    13,     1,    -1,    34,    -1,     5,     6,     7,     8,
      -1,    -1,    42,    34,    13,    -1,     1,    -1,    -1,    -1,
      -1,    42,    34,     8,     9,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    34,    21,    22,    23,    24,
      25,    26,     1,    42,    -1,    -1,    31,    32,    33,     8,
       9,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    26,     1,    -1,
      -1,    -1,    31,    32,    33,     8,     9,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    26,     1,    -1,    -1,    -1,    31,    32,
      33,     8,     9,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,    26,
       1,    -1,    -1,    -1,    31,    32,    33,     8,     9,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    26,     1,    -1,    -1,    -1,
      31,    32,    33,     8,     9,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,     1,    -1,    -1,    -1,    31,    32,    33,     8,
       9,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    26,     1,    -1,
      -1,    -1,    31,    32,    33,     8,     9,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    26,     1,    -1,    -1,    -1,    31,    32,
      33,     8,     9,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,    26,
       1,    -1,    -1,    -1,    31,    32,    33,     8,     9,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    26,     1,    -1,    -1,    -1,
      31,    32,    33,     8,     9,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,     1,    -1,    -1,    -1,    31,    32,    33,     8,
       9,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    26,     1,    -1,
      -1,    -1,    31,    32,    33,     8,     9,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    26,     1,    -1,    -1,    -1,    31,    32,
      33,     8,     9,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,    26,
       1,    -1,    -1,    -1,    31,    32,    33,     8,     9,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    26,     1,    -1,    -1,    -1,
      31,    32,    33,     8,     9,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,     1,    -1,    -1,    -1,    31,    32,    33,     8,
       9,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    26,     1,    -1,
      -1,    -1,    31,    32,    33,     8,     9,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    26,     1,    -1,    -1,    -1,    31,    32,
      33,     8,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,    26,
       1,    -1,    -1,    -1,    31,    32,    33,    21,    22,    23,
      24,    25,    26,    40,    -1,    -1,    -1,    31,    32,    33,
      21,    22,    23,    24,    25,    26,     1,    41,    -1,    43,
      31,    32,    33,    21,    22,    23,    24,    25,    26,    40,
      -1,    -1,    -1,    31,    32,    33,    21,    22,    23,    24,
      25,    26,    -1,     8,     9,    43,    31,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,     8,
       9,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,     8,     9,    -1,    -1,    -1,
      -1,    -1,    41,    42,    43,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,     8,     9,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    43,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,     8,
       9,    -1,    -1,    -1,    -1,    -1,    41,    -1,    43,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,     8,     9,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    43,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,     8,     9,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      43,    -1,    -1,    -1,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,     8,     9,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    43,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,     8,     9,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    43,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,     8,
       9,    -1,    -1,    -1,    -1,    -1,    41,    -1,    43,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,     8,     9,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    43,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,     8,     9,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      43,    -1,    -1,    -1,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,     8,     9,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    43,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,     8,     9,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    43,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,     8,
       9,    -1,    -1,    -1,    -1,    -1,    41,    -1,    43,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,     8,     9,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    43,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,     8,     9,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      43,    -1,    -1,    -1,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,     8,     9,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    43,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,     8,     9,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    43,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,     8,
       9,    -1,    -1,    -1,    -1,    -1,    41,    -1,    43,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,     8,     9,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    43,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,     8,     9,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      43,    -1,    -1,    -1,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,     8,
       9,    -1,    -1,    -1,    -1,    -1,    41,    -1,    43,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,     8,     9,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    43,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,     8,
       9,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,     8,     9,    -1,    -1,    -1,
      -1,    40,    -1,    42,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    26,    -1,     8,     9,    -1,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      21,    22,    23,    24,    25,    26,    -1,     8,     9,    -1,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      21,    22,    23,    24,    25,    26,    -1,     8,     9,    -1,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      21,    22,    23,    24,    25,    26,    -1,     8,     9,    -1,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      21,    22,    23,    24,    25,    26,    -1,     8,     9,    -1,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      21,    22,    23,    24,    25,    26,    -1,     8,     9,    -1,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      21,    22,    23,    24,    25,    26,    -1,     8,     9,    -1,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      21,    22,    23,    24,    25,    26,    -1,     8,     9,    -1,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      21,    22,    23,    24,    25,    26,    -1,     8,     9,    -1,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      21,    22,    23,    24,    25,    26,    -1,     8,     9,    -1,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      21,    22,    23,    24,    25,    26,    -1,     8,     9,    -1,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      21,    22,    23,    24,    25,    26,    -1,     8,     9,    -1,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      21,    22,    23,    24,    25,    26,    -1,     8,     9,    -1,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      21,    22,    23,    24,    25,    26,    -1,     8,     9,    -1,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      21,    22,    23,    24,    25,    26,    -1,     8,     9,    -1,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      21,    22,    23,    24,    25,    26,    -1,     8,     9,    -1,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      21,    22,    23,    24,    25,    26,    -1,     8,     9,    -1,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      21,    22,    23,    24,    25,    26,    -1,     8,     9,    -1,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      21,    22,    23,    24,    25,    26,    -1,     8,    -1,    -1,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      21,    22,    23,    24,    25,    26,    -1,     8,     9,    -1,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      21,    22,    23,    24,    25,    26,     8,     9,    -1,    -1,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    26,     8,     9,    -1,    -1,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    26,     8,     9,    -1,    -1,    31,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    26,     8,     9,    -1,    -1,    31,    32,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,     8,     9,    -1,    -1,    31,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,     8,     9,    -1,    -1,    31,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,    26,
       8,     9,    -1,    -1,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    26,     8,
       9,    -1,    -1,    31,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    26,     8,     9,
      -1,    -1,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,     8,     9,    -1,
      -1,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    26,     8,     9,    -1,    -1,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    26,     8,     9,    -1,    -1,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    26,     8,     9,    -1,    -1,    31,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    26,     8,     9,    -1,    -1,    31,    32,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,     8,     9,    -1,    -1,    31,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,     8,     9,    -1,    -1,    31,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,    26,
       8,     9,    -1,    -1,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    26,     8,
       9,    -1,    -1,    31,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    26,     8,    -1,
      -1,    -1,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,     8,    -1,    -1,
      -1,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,    21,    22,    23,    24,    25,    26,    -1,
      -1,    -1,    -1,    31,    32,    33,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    43,    31,    32,    33,    21,
      22,    23,    24,    25,    26,    40,    -1,    -1,    -1,    31,
      32,    33,    21,    22,    23,    24,    25,    26,    40,    -1,
      -1,    -1,    31,    32,    33
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    14,    15,    16,    17,    47,    48,    49,    50,
      55,   101,    40,     0,     1,    49,     5,    12,    97,    42,
      41,    42,    51,     1,    58,    52,     1,    56,    40,    43,
      60,   101,    54,    97,    43,    60,    44,    61,    59,    97,
      53,    41,    61,    57,     1,     6,     7,     8,    13,    18,
      19,    20,    27,    28,    29,    30,    34,    36,    37,    38,
      39,    42,    45,    50,    62,    63,    64,    65,    66,    71,
      76,    77,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    97,    98,   100,   101,    43,
      41,    40,    54,    43,    42,    42,    42,    42,    42,    42,
      42,    42,    92,    97,    42,     1,    40,    81,    97,     1,
      81,    45,    62,    42,     1,    40,    40,    40,    31,    32,
      33,    21,    22,    23,    24,    25,    26,    93,    98,     9,
      99,    35,    42,    92,    97,    61,    60,    61,    43,     1,
      81,    67,     1,    97,     1,    85,    86,     1,    83,    97,
       1,    85,     1,    85,     1,    97,    40,     1,    40,    43,
      43,     1,    10,    11,    81,    94,    95,    83,    97,     1,
      87,    88,    89,    90,    91,    81,     1,    43,    81,    96,
      43,    43,    82,    97,    31,    31,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    41,    43,    41,    43,     1,    72,    40,     1,    83,
       1,    83,    97,    40,    40,    40,    40,    40,    40,     1,
       1,    96,    61,    63,    73,    75,    68,    43,    43,    43,
      43,    43,     4,    81,    75,     1,    75,    78,    79,    74,
      40,    75,    75,    75,    69,    82,    43,    70,    75,    14,
      15,    16,    17,     5,     5,     5,    40,     5,     5,     5,
       6,     7,    13,    27,    29,    30,    34,    42,    83,    85,
      86,    87,    88,    89,    90,    91,    92,    97,    98,   100,
       8,     5,     5,     6,     7,    13,    34,    42,    87,    88,
      89,    90,    91,    92,    97,    98,   100,     5,    42,     5,
      27,    29,    30,     1,     5,     6,     7,    13,    27,    29,
      30,    34,    42,    83,    85,    86,    87,    88,    89,    90,
      91,    92,    97,    98,   100,     5,     6,     7,    13,    27,
      29,    30,    34,    42,    83,    85,    86,    87,    88,    89,
      90,    91,    92,    97,    98,   100,    41,    51,     5,    42,
      31,    32,    42,     1,    18,    19,    20,    38,    39,    44,
      50,    64,    65,    66,    71,    76,    77,    80,    81,    82,
      84,   101,    44,    61,    63,    97,    42,    42,    42,     5,
      92,    97,     1,    81,    32,    33,    93,    98,    99,    42,
      92,     5,    92,    97,     1,    81,    33,    93,    98,    99,
      42,    92,    43,    42,    42,    42,    42,    42,    42,    42,
       5,    92,    97,     1,    81,    31,    32,    33,    93,    98,
      99,    42,    92,    42,    42,    42,     5,    92,    97,     1,
      81,    31,    32,    33,    93,    98,    99,    42,    92,    52,
      40,    43,     5,    27,    29,    30,    83,    97,     1,    87,
      43,    40,    42,    42,    42,    42,     1,    40,    81,    45,
      62,    42,     1,    40,    40,    40,    97,    45,    62,    35,
       1,    85,     1,    85,     1,    85,    43,    43,     1,    87,
      88,    89,    90,    91,     1,    43,    96,    43,    43,    88,
      89,    90,    91,     1,    43,    96,     1,    85,     1,    85,
       1,    85,    43,     1,    85,     1,    85,     1,    85,    43,
      43,     5,    27,    29,    30,    83,    97,    87,    88,    89,
      90,    91,     1,    43,    96,     1,    85,     1,    85,     1,
      85,    43,    43,     5,    27,    29,    30,    83,    97,     1,
      87,    88,    89,    90,    91,     1,    43,    96,    54,    42,
      42,    42,     1,    81,    67,     1,    97,     1,    97,    40,
       1,    40,    45,     1,    81,    94,    95,    41,    51,    45,
      81,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    42,    42,    42,    43,    43,    43,    43,
      43,    43,    43,    43,    42,    42,    42,    43,    43,    53,
       1,    85,     1,    85,     1,    85,    43,    43,    82,    31,
      31,    43,    43,    43,    43,    43,    43,    52,    40,     1,
      85,     1,    85,     1,    85,     1,    85,     1,    85,     1,
      85,    40,    43,    43,    43,    43,    43,    43,     1,    72,
      40,     1,    83,     1,    83,    97,    40,    40,    40,    40,
      40,    40,    54,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    73,    75,    68,    43,    43,
      43,    43,    43,    53,     4,    81,    75,     1,    75,    78,
      79,    40,    74,    40,    75,    75,    75,    69,    82,    43,
      70,    75
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    48,    48,    48,    49,    49,    51,    50,
      52,    53,    50,    50,    54,    54,    56,    57,    55,    58,
      59,    55,    55,    55,    60,    60,    60,    61,    61,    62,
      62,    63,    63,    63,    63,    63,    63,    63,    63,    64,
      64,    64,    64,    64,    64,    65,    65,    67,    68,    69,
      70,    66,    72,    71,    71,    73,    74,    73,    75,    75,
      76,    76,    76,    76,    78,    77,    79,    77,    77,    77,
      77,    77,    80,    80,    81,    81,    82,    83,    83,    83,
      83,    83,    83,    84,    84,    84,    85,    85,    86,    86,
      86,    87,    87,    88,    88,    89,    89,    90,    90,    91,
      91,    91,    91,    91,    91,    91,    92,    92,    92,    92,
      92,    93,    93,    93,    93,    93,    93,    94,    95,    96,
      96,    96,    97,    98,    99,   100,   100,   101,   101,   101,
     101
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     0,     4,
       0,     0,     7,     2,     3,     1,     0,     0,     8,     0,
       0,     8,     6,     6,     4,     2,     0,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     5,
       5,     5,     5,     5,     5,     1,     1,     0,     0,     0,
       0,    13,     0,     6,     5,     1,     0,     4,     1,     1,
       2,     3,     3,     3,     0,     8,     0,     8,     2,     7,
       7,     7,     2,     2,     1,     1,     3,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     3,     3,     3,     1,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     1,
       2,     2,     4,     3,     4,     3,     1,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
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
#line 111 "sintatic/sintatic.y"
                         {
            (yyval.typeNode) = buildNode("program", 99);
            (yyval.typeNode)->childNode = (yyvsp[0].typeNode);
            origin = (yyval.typeNode);
        }
#line 3559 "sintatic.tab.c"
    break;

  case 3: /* list_declaration: list_declaration main_declaration  */
#line 119 "sintatic/sintatic.y"
                                          {
            TreeNodes *aux = (yyvsp[-1].typeNode);
            while(aux->brotherNode != NULL) {
                aux = aux->brotherNode;
            }
            aux->brotherNode = (yyvsp[0].typeNode);
        }
#line 3571 "sintatic.tab.c"
    break;

  case 5: /* list_declaration: error  */
#line 127 "sintatic/sintatic.y"
                 { (yyval.typeNode) = buildNode("error program", 99); globalError= globalError+1; }
#line 3577 "sintatic.tab.c"
    break;

  case 8: /* $@1: %empty  */
#line 136 "sintatic/sintatic.y"
                  {
            int declr;
            declr = verifyReDeclaration(activeScope, (yyvsp[0].typeNode)->value, line, column);
            if(declr == 1){
                globalError = globalError + 1;
            }
            Symbol *aux = createItem((yyvsp[-1].typeNode)->value, (yyvsp[0].typeNode)->value, line, 0);
            aux->registrador = registrador;
            aux->regis_tipo = "$";
            insertItem(activeScope, aux);
            if(strcmp(activeScope->scopeName,"GLOBAL SCOPE") == 0){
                registrador = 0;
            }else{
                registrador = registrador + 1;
            }

            
               
        }
#line 3601 "sintatic.tab.c"
    break;

  case 9: /* var_declaration: tipos var $@1 SEMICOLON  */
#line 154 "sintatic/sintatic.y"
                    {
            (yyval.typeNode) = buildNode("var_declaration",99);
            (yyval.typeNode)->childNode = (yyvsp[-3].typeNode); 
            (yyvsp[-3].typeNode)->brotherNode = (yyvsp[-2].typeNode);  
        }
#line 3611 "sintatic.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 159 "sintatic/sintatic.y"
                          { typeManyDeclaration = (yyvsp[-2].typeNode)->value; }
#line 3617 "sintatic.tab.c"
    break;

  case 11: /* $@3: %empty  */
#line 159 "sintatic/sintatic.y"
                                                                                    {
            int declr;
            declr = verifyReDeclaration(activeScope, (yyvsp[-3].typeNode)->value, line, column);
            if(declr == 1){
                    globalError = globalError + 1;
            } 
            Symbol *aux = createItem((yyvsp[-4].typeNode)->value, (yyvsp[-3].typeNode)->value, line, 0);
            aux->registrador = registrador;
            aux->regis_tipo = "$";
            insertItem(activeScope, aux);

            if(strcmp(activeScope->scopeName,"GLOBAL SCOPE") == 0){
                registrador = 0;
            }else{
                registrador = registrador + 1;
            }

        }
#line 3640 "sintatic.tab.c"
    break;

  case 12: /* var_declaration: tipos var COMMA $@2 many_declaration $@3 SEMICOLON  */
#line 176 "sintatic/sintatic.y"
                    {
            (yyval.typeNode) = buildNode("var_declaration",99);
            (yyval.typeNode)->childNode = (yyvsp[-6].typeNode); 
            (yyvsp[-6].typeNode)->brotherNode = (yyvsp[-5].typeNode);  
            (yyvsp[-5].typeNode)->brotherNode = (yyvsp[-2].typeNode); 
        }
#line 3651 "sintatic.tab.c"
    break;

  case 13: /* var_declaration: error SEMICOLON  */
#line 182 "sintatic/sintatic.y"
                          { (yyval.typeNode) = buildNode("SINTATIC ERR",10); globalError= globalError+1;}
#line 3657 "sintatic.tab.c"
    break;

  case 14: /* many_declaration: var COMMA many_declaration  */
#line 186 "sintatic/sintatic.y"
                                   {
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
                int declr;
                declr = verifyReDeclaration(activeScope, (yyvsp[-2].typeNode)->value, line, column);
                if(declr == 1){   
                    globalError = globalError + 1;
                } 

                Symbol *aux2 = createItem(typeManyDeclaration, (yyvsp[-2].typeNode)->value, line, 0);
                aux2->registrador = registrador;
                aux2->regis_tipo = "$";
                insertItem(activeScope, aux2);
                registrador =  registrador+1;
        }
#line 3676 "sintatic.tab.c"
    break;

  case 15: /* many_declaration: var  */
#line 200 "sintatic/sintatic.y"
              {
                int declr;
                declr = verifyReDeclaration(activeScope, (yyvsp[0].typeNode)->value, line, column);
                if(declr == 1){
                    globalError = globalError + 1;
                } 
                Symbol *aux3 = createItem(typeManyDeclaration, (yyvsp[0].typeNode)->value, line, 0);
                aux3->registrador = registrador;
                aux3->regis_tipo = "$";
                insertItem(activeScope, aux3);
                registrador =  registrador+1;
        }
#line 3693 "sintatic.tab.c"
    break;

  case 16: /* $@4: %empty  */
#line 215 "sintatic/sintatic.y"
                             {
            // novo Scopo
            Scope *newScope = buildScope((yyvsp[-1].typeNode)->value);
            newScope->parentScope = activeScope; 
            activeScope = newScope;

            threeAddress = alocar_memoria(threeAddress);
            sprintf(threeAddress + strlen(threeAddress), "%s:\n", (yyvsp[-1].typeNode)->value);
        
        }
#line 3708 "sintatic.tab.c"
    break;

  case 17: /* $@5: %empty  */
#line 224 "sintatic/sintatic.y"
                    {
            // criar o simbolos no escopo atual
            Symbol *aux  = createItem((yyvsp[-4].typeNode)->value, (yyvsp[-3].typeNode)->value, line, 1);
            aux->numArgs = numFuncArgs;
            insertItem(activeScope->parentScope, aux); 
            numFuncArgs = 0;
            
        }
#line 3721 "sintatic.tab.c"
    break;

  case 18: /* func_declaration: tipos var OPEN_PAREN $@4 list_args $@5 CLS_PAREN blockStmt  */
#line 231 "sintatic/sintatic.y"
                              {
            (yyval.typeNode) = buildNode("func_declaration",99);   
            (yyval.typeNode)->childNode = (yyvsp[-7].typeNode);
            (yyvsp[-7].typeNode)->brotherNode = (yyvsp[-6].typeNode);
            (yyvsp[-6].typeNode)->brotherNode = (yyvsp[-3].typeNode);
            (yyvsp[-3].typeNode)->brotherNode = (yyvsp[0].typeNode);

            if(onReturn == 0){
               threeAddress = alocar_memoria(threeAddress);
               sprintf(threeAddress + strlen(threeAddress), "return \n");
            }
            onReturn = 0;    
            // fecha o Scopo
            showScope(activeScope);
            Scope *auxScope = activeScope->parentScope;
            freeScope(activeScope);
            activeScope = auxScope;
            registrador = 0;
        }
#line 3745 "sintatic.tab.c"
    break;

  case 19: /* $@6: %empty  */
#line 250 "sintatic/sintatic.y"
                                {
            // novo Scopo
            onMain = 1;
            Scope *newScope = buildScope("main"); 
            newScope->parentScope = activeScope; 
            activeScope = newScope;

            threeAddress = alocar_memoria(threeAddress);
            sprintf(threeAddress + strlen(threeAddress), "%s:\n", "main");
        }
#line 3760 "sintatic.tab.c"
    break;

  case 20: /* $@7: %empty  */
#line 259 "sintatic/sintatic.y"
                          {
            // insere simbolos no escopo atual
            Symbol *aux = createItem((yyvsp[-4].typeNode)->value, "main", line, 1);
            aux->numArgs = numFuncArgs;
            insertItem(activeScope->parentScope, aux); 
            numFuncArgs = 0;  

            // main 
            isMain = isMain + 1;

        }
#line 3776 "sintatic.tab.c"
    break;

  case 21: /* func_declaration: tipos MAIN OPEN_PAREN $@6 list_args $@7 CLS_PAREN blockStmt  */
#line 269 "sintatic/sintatic.y"
                                     {            
            (yyval.typeNode) = buildNode("func_declaration_main", 99);   
            (yyval.typeNode)->childNode = (yyvsp[-7].typeNode);
            (yyvsp[-7].typeNode)->brotherNode = (yyvsp[-3].typeNode);
            (yyvsp[-3].typeNode)->brotherNode = (yyvsp[0].typeNode);

            showScope(activeScope);
            Scope *auxScope = activeScope->parentScope;
            freeScope(activeScope);
            activeScope = auxScope;
            
            threeAddress = alocar_memoria(threeAddress);
            sprintf(threeAddress + strlen(threeAddress), "nop \n");
            registrador = 0;
            onMain = 0;
            onReturn = 0;   
        }
#line 3798 "sintatic.tab.c"
    break;

  case 22: /* func_declaration: tipos var OPEN_PAREN error CLS_PAREN blockStmt  */
#line 286 "sintatic/sintatic.y"
                                                         {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
#line 3807 "sintatic.tab.c"
    break;

  case 23: /* func_declaration: tipos MAIN OPEN_PAREN error CLS_PAREN blockStmt  */
#line 290 "sintatic/sintatic.y"
                                                                 {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
#line 3816 "sintatic.tab.c"
    break;

  case 24: /* list_args: tipos var COMMA list_args  */
#line 298 "sintatic/sintatic.y"
                                  {
                (yyval.typeNode) = buildNode("list_args", 99);  
                (yyval.typeNode)->childNode = (yyvsp[-3].typeNode);
                (yyvsp[-3].typeNode)->brotherNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
                
                numFuncArgs = numFuncArgs + 1;
                // cria simbolos no escopo atual
                int declr;
                declr = verifyReDeclaration(activeScope, (yyvsp[-2].typeNode)->value, line, column);
                if(declr == 1){ 
                    globalError = globalError + 1;
                }
                Symbol *aux = createItem((yyvsp[-3].typeNode)->value, (yyvsp[-2].typeNode)->value, line, 0);
                aux->registrador = registrador;
                aux->regis_tipo = "#"; 
                insertItem(activeScope, aux); 
                registrador = registrador+1;                
        }
#line 3840 "sintatic.tab.c"
    break;

  case 25: /* list_args: tipos var  */
#line 317 "sintatic/sintatic.y"
                    {
                int declr;
                numFuncArgs = numFuncArgs + 1;
                declr = verifyReDeclaration(activeScope, (yyvsp[0].typeNode)->value, line, column);
                if(declr == 1){     
                    globalError = globalError + 1;
                }
                (yyval.typeNode) = buildNode("list_args", 99); 
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
                (yyvsp[-1].typeNode)->brotherNode = (yyvsp[0].typeNode);

                Symbol *aux = createItem((yyvsp[-1].typeNode)->value, (yyvsp[0].typeNode)->value, line, 0);
                aux->registrador = registrador;
                aux->regis_tipo = "#"; 
                insertItem(activeScope, aux); 
                registrador = registrador+1;
        }
#line 3862 "sintatic.tab.c"
    break;

  case 26: /* list_args: %empty  */
#line 334 "sintatic/sintatic.y"
                 {
                (yyval.typeNode) = buildNode("no_args", 99); 
        }
#line 3870 "sintatic.tab.c"
    break;

  case 27: /* blockStmt: OP_CUR_BRACKET CLS_CUR_BRACKET  */
#line 340 "sintatic/sintatic.y"
                                        {
                (yyval.typeNode) = buildNode("empty block", 99); 
        }
#line 3878 "sintatic.tab.c"
    break;

  case 28: /* blockStmt: OP_CUR_BRACKET list_statements CLS_CUR_BRACKET  */
#line 343 "sintatic/sintatic.y"
                                                         {
                (yyval.typeNode) = (yyvsp[-1].typeNode);
        }
#line 3886 "sintatic.tab.c"
    break;

  case 29: /* list_statements: stmt list_statements  */
#line 349 "sintatic/sintatic.y"
                             {
               (yyval.typeNode) = (yyvsp[-1].typeNode);
               (yyvsp[-1].typeNode)->brotherNode = (yyvsp[0].typeNode); 
        }
#line 3895 "sintatic.tab.c"
    break;

  case 39: /* input_output_expr: write_commands OPEN_PAREN str_expr CLS_PAREN SEMICOLON  */
#line 368 "sintatic/sintatic.y"
                                                               {
                (yyvsp[-4].typeNode)->childNode = (yyvsp[-2].typeNode);
                
                threeAddress = alocar_memoria(threeAddress);
                sprintf(threeAddress + strlen(threeAddress), "mov $%d, &str_char%d  \n", registrador, (yyvsp[-2].typeNode)->registrador);
                
                threeAddress = alocar_memoria(threeAddress);
                sprintf(threeAddress + strlen(threeAddress), "param $%d  \n",registrador);
                
                threeAddress = alocar_memoria(threeAddress);
                if(strcmp((yyvsp[-4].typeNode)->value,"CMD_WRITE_STR") == 0) {
                        sprintf(threeAddress + strlen(threeAddress), "call write_str, 1  \n");
                }else {
                        sprintf(threeAddress + strlen(threeAddress), "call writeln_str, 1 \n"); 
                }

                registrador = registrador+1;
                
        }
#line 3919 "sintatic.tab.c"
    break;

  case 40: /* input_output_expr: write_commands OPEN_PAREN expr CLS_PAREN SEMICOLON  */
#line 387 "sintatic/sintatic.y"
                                                             {
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
                        
                threeAddress = alocar_memoria(threeAddress);
                if((yyvsp[-2].typeNode)->registrador == -1){
                        Symbol *auxVar = findItem(activeScope, (yyvsp[-2].typeNode)->value);
                        if(auxVar != NULL ){ 
                            if(strcmp((yyvsp[-4].typeNode)->value,"CMD_WRITE_STR") == 0) {
                                sprintf(threeAddress + strlen(threeAddress), "print %s%d // print \n", auxVar->regis_tipo, auxVar->registrador);
                            }else {
                                sprintf(threeAddress + strlen(threeAddress), "println %s%d // print \n", auxVar->regis_tipo, auxVar->registrador); 
                            }       
                        } 
                }else{
                        if(strcmp((yyvsp[-4].typeNode)->value,"CMD_WRITE_STR") == 0) {
                             sprintf(threeAddress + strlen(threeAddress), "print %s%d // print \n", (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador);
                        }else {
                              sprintf(threeAddress + strlen(threeAddress), "println %s%d // print \n", (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador); 
                        } 
                }
        }
#line 3945 "sintatic.tab.c"
    break;

  case 41: /* input_output_expr: write_commands OPEN_PAREN char_expr CLS_PAREN SEMICOLON  */
#line 408 "sintatic/sintatic.y"
                                                                  {
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);

                (yyvsp[-4].typeNode)->childNode = (yyvsp[-2].typeNode);
                
                threeAddress = alocar_memoria(threeAddress);
                sprintf(threeAddress + strlen(threeAddress), "mov $%d, &str_char%d  \n", registrador, (yyvsp[-2].typeNode)->registrador);
                
                threeAddress = alocar_memoria(threeAddress);
                sprintf(threeAddress + strlen(threeAddress), "param $%d  \n",registrador);
                
                threeAddress = alocar_memoria(threeAddress);
                if(strcmp((yyvsp[-4].typeNode)->value,"CMD_WRITE_STR") == 0) {
                        sprintf(threeAddress + strlen(threeAddress), "call write_str, 1  \n");
                }else {
                        sprintf(threeAddress + strlen(threeAddress), "call writeln_str, 1 \n"); 
                }

                registrador = registrador+1;
        }
#line 3970 "sintatic.tab.c"
    break;

  case 42: /* input_output_expr: CMD_READ OPEN_PAREN var CLS_PAREN SEMICOLON  */
#line 428 "sintatic/sintatic.y"
                                                      {
                int undeclr;
                undeclr = verifyUnDeclaration(activeScope, (yyvsp[-2].typeNode)->value, line, column);
                if(undeclr == 0){
                    globalError = globalError + 1; 
                }
                (yyval.typeNode) = buildNode("CMD_READ_VAR", 99);
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);

                threeAddress = alocar_memoria(threeAddress);
                Symbol *aux1 = findItem(activeScope, (yyvsp[-2].typeNode)->value);
                if(aux1 != NULL){
                  if((yyvsp[-2].typeNode)->type == 0){
                     sprintf(threeAddress + strlen(threeAddress), "scani $%d \n",aux1->registrador); 
                   }else if((yyvsp[-2].typeNode)->type == 1){    
                     sprintf(threeAddress + strlen(threeAddress), "scanf $%d \n",aux1->registrador); 
                   }
                //    else{
                //      sprintf(threeAddress + strlen(threeAddress), "scani $%d \n",aux1->registrador);       
                //    }
                }
        }
#line 3997 "sintatic.tab.c"
    break;

  case 43: /* input_output_expr: write_commands OPEN_PAREN error CLS_PAREN SEMICOLON  */
#line 450 "sintatic/sintatic.y"
                                                              {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
#line 4006 "sintatic.tab.c"
    break;

  case 44: /* input_output_expr: CMD_READ OPEN_PAREN error CLS_PAREN SEMICOLON  */
#line 454 "sintatic/sintatic.y"
                                                        {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
#line 4015 "sintatic.tab.c"
    break;

  case 45: /* write_commands: CMD_WRITE  */
#line 461 "sintatic/sintatic.y"
                 {
              (yyval.typeNode) = buildNode("CMD_WRITE_STR", 99);
      }
#line 4023 "sintatic.tab.c"
    break;

  case 46: /* write_commands: CMD_WRITELN  */
#line 464 "sintatic/sintatic.y"
                    {
              (yyval.typeNode) = buildNode("CMD_WRITELN_STR", 99);
      }
#line 4031 "sintatic.tab.c"
    break;

  case 47: /* $@8: %empty  */
#line 470 "sintatic/sintatic.y"
                           {
            // novo Scopo    
            Scope *newScope = buildScope("Block FOR");
            newScope->parentScope = activeScope; 
            activeScope = newScope;
            
        }
#line 4043 "sintatic.tab.c"
    break;

  case 48: /* $@9: %empty  */
#line 476 "sintatic/sintatic.y"
                           {
             threeAddress = alocar_memoria(threeAddress);
             sprintf(threeAddress + strlen(threeAddress), "FOR%d: \n",jumpFor);
             activeScope->jump = jumpFor;
             jumpFor = jumpFor+1;
        }
#line 4054 "sintatic.tab.c"
    break;

  case 49: /* $@10: %empty  */
#line 481 "sintatic/sintatic.y"
                         {
             threeAddress = alocar_memoria(threeAddress);
             sprintf(threeAddress + strlen(threeAddress), "brz ENDFOR%d, $%d \n", activeScope->jump, (yyvsp[-1].typeNode)->registrador);   
             isFor = 1;
             
        }
#line 4065 "sintatic.tab.c"
    break;

  case 50: /* $@11: %empty  */
#line 486 "sintatic/sintatic.y"
                           { isFor = 0; }
#line 4071 "sintatic.tab.c"
    break;

  case 51: /* iteration_expr: CMD_FOR OPEN_PAREN $@8 assign SEMICOLON $@9 expr SEMICOLON $@10 assign CLS_PAREN $@11 simple_complex_block_stmt  */
#line 486 "sintatic/sintatic.y"
                                                                    {     
             (yyval.typeNode) = buildNode("for", 99);

             (yyval.typeNode)->childNode = (yyvsp[-9].typeNode);
             (yyvsp[-9].typeNode)->brotherNode = (yyvsp[-6].typeNode);
             (yyvsp[-6].typeNode)->brotherNode = (yyvsp[-3].typeNode);
             (yyvsp[-3].typeNode)->brotherNode = (yyvsp[0].typeNode);
             
             
             threeAddress = merge_tac(threeAddress, tacFor);
             free(tacFor);

             threeAddress = alocar_memoria(threeAddress);
             sprintf(threeAddress + strlen(threeAddress), "jump FOR%d \n",activeScope->jump);
             
             threeAddress = alocar_memoria(threeAddress);
             sprintf(threeAddress + strlen(threeAddress), "ENDFOR%d: \n",activeScope->jump);
             // fecha o Scopo
             showScope(activeScope);
             Scope *auxScope = activeScope->parentScope;
             freeScope(activeScope);
             activeScope = auxScope;
        }
#line 4099 "sintatic.tab.c"
    break;

  case 52: /* $@12: %empty  */
#line 512 "sintatic/sintatic.y"
                                         {
            Scope *newScope = buildScope("Block IF ");
            newScope->parentScope = activeScope; 
            newScope->jump = jumpReg;
            activeScope = newScope;

            threeAddress = alocar_memoria(threeAddress);
            sprintf(threeAddress + strlen(threeAddress), "brz L%d, $%d\n", newScope->jump, (yyvsp[-1].typeNode)->registrador);
            jumpReg = jumpReg+1;
        }
#line 4114 "sintatic.tab.c"
    break;

  case 53: /* condition_expr: CMD_IF OPEN_PAREN expr CLS_PAREN $@12 block_cond  */
#line 521 "sintatic/sintatic.y"
                     {
                (yyval.typeNode) = buildNode("if", 99);
                (yyval.typeNode)->childNode = (yyvsp[-3].typeNode);
                (yyvsp[-3].typeNode)->brotherNode = (yyvsp[0].typeNode);

                // fecha o Scopo
                showScope(activeScope);
                Scope *auxScope = activeScope->parentScope;
                freeScope(activeScope);
                activeScope = auxScope;
        }
#line 4130 "sintatic.tab.c"
    break;

  case 54: /* condition_expr: CMD_IF OPEN_PAREN error CLS_PAREN error  */
#line 532 "sintatic/sintatic.y"
                                                  {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
#line 4139 "sintatic.tab.c"
    break;

  case 55: /* block_cond: simple_complex_block_stmt  */
#line 539 "sintatic/sintatic.y"
                                  {
                
                threeAddress = alocar_memoria(threeAddress);
                sprintf(threeAddress + strlen(threeAddress), "L%d: \n", activeScope->jump);
        }
#line 4149 "sintatic.tab.c"
    break;

  case 56: /* $@13: %empty  */
#line 544 "sintatic/sintatic.y"
                                             {
            // novo Scopo   
            threeAddress = alocar_memoria(threeAddress);
            sprintf(threeAddress + strlen(threeAddress), "jump L%d \n", jumpReg); 
            
            Scope *newScope = buildScope("Block ELSE");
            newScope->parentScope = activeScope; 
            newScope->jump = jumpReg;
            activeScope = newScope;
            
            jumpReg = jumpReg+1;

            threeAddress = alocar_memoria(threeAddress);
            sprintf(threeAddress + strlen(threeAddress), "L%d: \n", activeScope->parentScope->jump); 

        }
#line 4170 "sintatic.tab.c"
    break;

  case 57: /* block_cond: simple_complex_block_stmt CMD_ELSE $@13 simple_complex_block_stmt  */
#line 559 "sintatic/sintatic.y"
                                    {
                (yyval.typeNode) = buildNode("if_stmt", 99);
                (yyval.typeNode)->childNode = (yyvsp[-3].typeNode);

                (yyval.typeNode)->brotherNode = buildNode("else", 99);
                (yyval.typeNode)->brotherNode->childNode = (yyvsp[0].typeNode);
                
                threeAddress = alocar_memoria(threeAddress);
                sprintf(threeAddress + strlen(threeAddress), "L%d: \n", activeScope->jump);
                // fecha o Scopo
                showScope(activeScope);
                Scope *auxScope = activeScope->parentScope;
                freeScope(activeScope);
                activeScope = auxScope;
        }
#line 4190 "sintatic.tab.c"
    break;

  case 60: /* return_stmt: CMD_RETURN SEMICOLON  */
#line 582 "sintatic/sintatic.y"
                             {
              (yyval.typeNode) = buildNode("return", 99);  
              onReturn = onReturn + 1;
        }
#line 4199 "sintatic.tab.c"
    break;

  case 61: /* return_stmt: CMD_RETURN expr SEMICOLON  */
#line 586 "sintatic/sintatic.y"
                                     {
                int tipo;
                tipo = findTypeOfReturnFunc(activeScope);
                (yyval.typeNode) = buildNode("return", tipo);  
                
                if(tipo != (yyvsp[-1].typeNode)->type) {
                   char* cast;
                   cast = castToSpecificType(tipo, (yyvsp[-1].typeNode)->type);
                   if(strcmp(cast,"Cast Error!") == 0){
                        printf(" ------------------------- ERROR: Incompatible type Cast ------------------------------ \n");  
                        globalError = globalError + 1;    
                   }     
                   (yyval.typeNode)->childNode = buildNode(cast, tipo);
                   (yyval.typeNode)->childNode->childNode = (yyvsp[-1].typeNode);
                }else{
                   (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
                }

                if(onMain != 1){
                   onReturn = onReturn + 1;     
                   threeAddress = alocar_memoria(threeAddress);
                   if((yyvsp[-1].typeNode)->registrador == -1){
                      Symbol *auxVar = findItem(activeScope, (yyvsp[-1].typeNode)->value);
                      if(auxVar != NULL ){ 
                        sprintf(threeAddress + strlen(threeAddress), "return $%d // return \n", auxVar->registrador);
                      } 
                   }else{
                      sprintf(threeAddress + strlen(threeAddress), "return $%d // return %s \n", (yyvsp[-1].typeNode)->registrador, (yyvsp[-1].typeNode)->value);
                   }
                }
               
        }
#line 4236 "sintatic.tab.c"
    break;

  case 62: /* return_stmt: CMD_RETURN error SEMICOLON  */
#line 618 "sintatic/sintatic.y"
                                     {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
#line 4245 "sintatic.tab.c"
    break;

  case 63: /* return_stmt: CMD_RETURN expr error  */
#line 622 "sintatic/sintatic.y"
                                {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
#line 4254 "sintatic.tab.c"
    break;

  case 64: /* $@14: %empty  */
#line 629 "sintatic/sintatic.y"
                                                            {
                int undeclr;
                undeclr = verifyUnDeclaration(activeScope, (yyvsp[-3].typeNode)->value, line, column);
                if(undeclr == 0){
                    globalError = globalError + 1; 
                }
                Scope *newScope = buildScope("Block FORALL ");
                newScope->parentScope = activeScope;
                activeScope = newScope; 
        }
#line 4269 "sintatic.tab.c"
    break;

  case 65: /* set_stmt: CMD_FORALL OPEN_PAREN var IN_OP func_expr CLS_PAREN $@14 simple_complex_block_stmt  */
#line 638 "sintatic/sintatic.y"
                                    {
                (yyval.typeNode) = buildNode("forall", 99);  
                (yyval.typeNode)->childNode = (yyvsp[-5].typeNode);
                (yyvsp[-5].typeNode)->brotherNode = (yyvsp[-3].typeNode);
                (yyvsp[-3].typeNode)->brotherNode = (yyvsp[0].typeNode);

                // fecha o Scopo
                showScope(activeScope);
                Scope *auxScope = activeScope->parentScope;
                freeScope(activeScope);
                activeScope = auxScope;
        }
#line 4286 "sintatic.tab.c"
    break;

  case 66: /* $@15: %empty  */
#line 650 "sintatic/sintatic.y"
                                                        {
                int undeclr;
                undeclr = verifyUnDeclaration(activeScope, (yyvsp[-3].typeNode)->value, line, column);
                if(undeclr == 0){
                    globalError = globalError + 1; 
                }
                undeclr = verifyUnDeclaration(activeScope, (yyvsp[-1].typeNode)->value, line, column);
                if(undeclr == 0){
                    globalError = globalError + 1; 
                }
                
                Scope *newScope = buildScope("Block FORALL ");
                newScope->parentScope = activeScope;
                activeScope = newScope; 
        }
#line 4306 "sintatic.tab.c"
    break;

  case 67: /* set_stmt: CMD_FORALL OPEN_PAREN var IN_OP var CLS_PAREN $@15 simple_complex_block_stmt  */
#line 664 "sintatic/sintatic.y"
                                    {
                (yyval.typeNode) = buildNode("forall", 99);  
                (yyval.typeNode)->childNode = (yyvsp[-5].typeNode);
                (yyvsp[-5].typeNode)->brotherNode = (yyvsp[-3].typeNode);
                (yyvsp[-3].typeNode)->brotherNode = (yyvsp[0].typeNode);

                // fecha o Scopo
                showScope(activeScope);
                Scope *auxScope = activeScope->parentScope;
                freeScope(activeScope);
                activeScope = auxScope;
        }
#line 4323 "sintatic.tab.c"
    break;

  case 69: /* set_stmt: CMD_FORALL OPEN_PAREN error IN_OP error CLS_PAREN simple_complex_block_stmt  */
#line 677 "sintatic/sintatic.y"
                                                                                      {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
#line 4332 "sintatic.tab.c"
    break;

  case 70: /* set_stmt: CMD_FORALL OPEN_PAREN error IN_OP func_expr CLS_PAREN error  */
#line 681 "sintatic/sintatic.y"
                                                                      {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
#line 4341 "sintatic.tab.c"
    break;

  case 71: /* set_stmt: CMD_FORALL OPEN_PAREN var IN_OP error CLS_PAREN simple_complex_block_stmt  */
#line 685 "sintatic/sintatic.y"
                                                                                    {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
#line 4350 "sintatic.tab.c"
    break;

  case 73: /* expr_stmt: expr error  */
#line 692 "sintatic/sintatic.y"
                     {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
#line 4359 "sintatic.tab.c"
    break;

  case 76: /* assign: var ATRIBUTION expr  */
#line 704 "sintatic/sintatic.y"
                            {

      
              int undeclr;
              undeclr = verifyUnDeclaration(activeScope, (yyvsp[-2].typeNode)->value, line, column);
              if(undeclr == 0){
                globalError = globalError + 1; 
              }
              (yyval.typeNode) = buildNode(" = ", (yyvsp[-2].typeNode)->type);
              (yyval.typeNode)->childNode = (yyvsp[-2].typeNode); 
              if((yyvsp[-2].typeNode)->type != (yyvsp[0].typeNode)->type) {

                char* cast;
                cast = castToSpecificType((yyvsp[-2].typeNode)->type, (yyvsp[0].typeNode)->type);
                if(strcmp(cast,"Cast Error!") == 0){
                     printf(" ------------------------- ERROR: Incompatible type Cast ------------------------------ \n");  
                     globalError = globalError + 1;    
                }  
                (yyvsp[-2].typeNode)->brotherNode = buildNode(cast, (yyvsp[-2].typeNode)->type);
                (yyvsp[-2].typeNode)->brotherNode->childNode = (yyvsp[0].typeNode);  
              }else{
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
              }
              
                Symbol *auxVar = findItem(activeScope, (yyvsp[-2].typeNode)->value);
                if(auxVar != NULL){
                  if((yyvsp[0].typeNode)->registrador == -1){   
                    Symbol *auxExpr = findItem(activeScope, (yyvsp[0].typeNode)->value); 
                    if(auxExpr != NULL){
                        if(isFor == 1){
                            tacFor = alocar_memoria(tacFor);    
                            sprintf(tacFor + strlen(tacFor), "mov %s%d, %s%d // var %s = %s \n", auxVar->regis_tipo, auxVar->registrador, auxExpr->regis_tipo, auxExpr->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);    
                        }else{
                          threeAddress = alocar_memoria(threeAddress);
                          sprintf(threeAddress + strlen(threeAddress), "mov %s%d, %s%d // var %s = %s \n", auxVar->regis_tipo, auxVar->registrador, auxExpr->regis_tipo, auxExpr->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);        
                        }
                    }
                  }else{
                        if(isFor == 1){
                            tacFor = alocar_memoria(tacFor);    
                            sprintf(tacFor + strlen(tacFor), "mov %s%d, %s%d // var %s = %s \n", auxVar->regis_tipo, auxVar->registrador, (yyvsp[0].typeNode)->regis_tipo, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                        }else{
                           threeAddress = alocar_memoria(threeAddress);     
                           sprintf(threeAddress + strlen(threeAddress), "mov %s%d, %s%d // var %s = %s \n", auxVar->regis_tipo, auxVar->registrador, (yyvsp[0].typeNode)->regis_tipo, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);     
                        }
                  }   
                  
                  (yyvsp[-2].typeNode)->registrador = auxVar->registrador;
                  (yyvsp[-2].typeNode)->regis_tipo = "$";
                }
              
        }
#line 4416 "sintatic.tab.c"
    break;

  case 77: /* func_expr: ADD_FUNC OPEN_PAREN func_in_expr CLS_PAREN  */
#line 759 "sintatic/sintatic.y"
                                                   {
                (yyval.typeNode) = buildNode(" add ", 99);
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 4425 "sintatic.tab.c"
    break;

  case 78: /* func_expr: REMOVE_FUNC OPEN_PAREN func_in_expr CLS_PAREN  */
#line 763 "sintatic/sintatic.y"
                                                        {
                (yyval.typeNode) = buildNode(" remove ", 99);
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 4434 "sintatic.tab.c"
    break;

  case 79: /* func_expr: EXIST_FUNC OPEN_PAREN func_in_expr CLS_PAREN  */
#line 767 "sintatic/sintatic.y"
                                                       {
                (yyval.typeNode) = buildNode(" exist ", 99);
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 4443 "sintatic.tab.c"
    break;

  case 80: /* func_expr: ADD_FUNC OPEN_PAREN error CLS_PAREN  */
#line 771 "sintatic/sintatic.y"
                                              {
             (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);   
        }
#line 4451 "sintatic.tab.c"
    break;

  case 81: /* func_expr: REMOVE_FUNC OPEN_PAREN error CLS_PAREN  */
#line 774 "sintatic/sintatic.y"
                                                 {
             (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);   
        }
#line 4459 "sintatic.tab.c"
    break;

  case 82: /* func_expr: EXIST_FUNC OPEN_PAREN error CLS_PAREN  */
#line 777 "sintatic/sintatic.y"
                                                {
             (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);    
        }
#line 4467 "sintatic.tab.c"
    break;

  case 83: /* is_set_expr: IS_SET_FUNC OPEN_PAREN var CLS_PAREN  */
#line 783 "sintatic/sintatic.y"
                                             {
              int undeclr;
              undeclr = verifyUnDeclaration(activeScope, (yyvsp[-1].typeNode)->value, line, column);
              if(undeclr == 0){
                globalError = globalError + 1; 
              }
              (yyval.typeNode) = buildNode(" is_set ", 99);
              (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 4481 "sintatic.tab.c"
    break;

  case 84: /* is_set_expr: IS_SET_FUNC OPEN_PAREN func_expr CLS_PAREN  */
#line 792 "sintatic/sintatic.y"
                                                     {
                (yyval.typeNode) = buildNode(" is_set ", 99);
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 4490 "sintatic.tab.c"
    break;

  case 85: /* is_set_expr: IS_SET_FUNC OPEN_PAREN error CLS_PAREN  */
#line 796 "sintatic/sintatic.y"
                                                 {
             (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);   
             globalError= globalError+1; 
        }
#line 4499 "sintatic.tab.c"
    break;

  case 86: /* func_in_expr: op_or_expr IN_OP var  */
#line 802 "sintatic/sintatic.y"
                             {
                int undeclr;
                undeclr = verifyUnDeclaration(activeScope, (yyvsp[0].typeNode)->value, line, column);
                if(undeclr == 0){
                        globalError = globalError + 1; 
                }
                (yyval.typeNode) = buildNode(" IN ", 99);
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 4514 "sintatic.tab.c"
    break;

  case 87: /* func_in_expr: op_or_expr IN_OP func_expr  */
#line 812 "sintatic/sintatic.y"
                                     {
                (yyval.typeNode) = buildNode(" IN ", 99);
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 4524 "sintatic.tab.c"
    break;

  case 88: /* op_or_expr: op_or_expr OP_OR op_and_expr  */
#line 825 "sintatic/sintatic.y"
                                     {  
              (yyval.typeNode) = buildNode("or", 0);
              if((yyvsp[-2].typeNode)->type != 0 && (yyvsp[0].typeNode)->type != 0){
                (yyval.typeNode)->childNode = buildNode(castToInt(0, (yyvsp[-2].typeNode)->type), 0);
                (yyval.typeNode)->childNode->childNode = (yyvsp[-2].typeNode);
                TreeNodes *aux = buildNode(castToInt(0, (yyvsp[0].typeNode)->type), 0);
                (yyval.typeNode)->childNode->brotherNode = aux;
                aux->childNode = (yyvsp[0].typeNode);    

              }else if((yyvsp[-2].typeNode)->type != 0){
                (yyval.typeNode)->childNode = buildNode(castToInt(0, (yyvsp[-2].typeNode)->type), 0);
                (yyval.typeNode)->childNode->childNode = (yyvsp[-2].typeNode);
                (yyval.typeNode)->childNode->brotherNode = (yyvsp[0].typeNode);        

              }else if((yyvsp[0].typeNode)->type != 0){
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = buildNode(castToInt(0, (yyvsp[0].typeNode)->type), 0);
                (yyvsp[-2].typeNode)->brotherNode->childNode = (yyvsp[0].typeNode); 
              }else{
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
              }
              
              if((yyvsp[-2].typeNode)->registrador == -1 && (yyvsp[0].typeNode)->registrador == -1){
                Symbol *aux1 = findItem(activeScope, (yyvsp[-2].typeNode)->value);
                Symbol *aux3 = findItem(activeScope, (yyvsp[0].typeNode)->value);
                
                if(aux1 != NULL && aux3 != NULL){
                  if(isFor == 1){
                      tacFor = alocar_memoria(tacFor);       
                      sprintf(tacFor + strlen(tacFor), "and $%d, %s%d, %s%d //  %s ||  %s  \n", registrador, aux1->regis_tipo, aux1->registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);    
                  }else{
                     threeAddress = alocar_memoria(threeAddress);     
                     sprintf(threeAddress + strlen(threeAddress), "and $%d, %s%d, %s%d //  %s ||  %s  \n", registrador, aux1->regis_tipo, aux1->registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);     
                  }      
                  
                }           
              }else if((yyvsp[-2].typeNode)->registrador != -1 && (yyvsp[0].typeNode)->registrador == -1){
                Symbol *aux1 = findItem(activeScope, (yyvsp[-2].typeNode)->value);

                if(aux1 != NULL){
                  if(isFor == 1){
                     tacFor = alocar_memoria(tacFor);         
                     sprintf(tacFor + strlen(tacFor), "and $%d, %s%d, %s%d //  %s ||  %s  \n", registrador, aux1->regis_tipo, aux1->registrador, (yyvsp[0].typeNode)->regis_tipo, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                  }else{
                     threeAddress = alocar_memoria(threeAddress);     
                     sprintf(threeAddress + strlen(threeAddress), "and $%d, %s%d, %s%d ||  %s ||  %s  \n", registrador, aux1->regis_tipo, aux1->registrador, (yyvsp[0].typeNode)->regis_tipo, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                  }      
                }
              }else if((yyvsp[-2].typeNode)->registrador != -1 && (yyvsp[0].typeNode)->registrador == -1){   
                Symbol *aux3 = findItem(activeScope, (yyvsp[-2].typeNode)->value);
                if(aux3 != NULL){
                   if(isFor == 1){
                     tacFor = alocar_memoria(tacFor);      
                     sprintf(tacFor + strlen(tacFor), "and $%d, %s%d, %s%d //  %s &&  %s  \n", registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                   }else{
                      threeAddress = alocar_memoria(threeAddress);     
                      sprintf(threeAddress + strlen(threeAddress), "and $%d, %s%d, %s%d //  %s &&  %s  \n", registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                   }
                }        
              }else{
                if(isFor == 1){
                   tacFor = alocar_memoria(tacFor);        
                   sprintf(tacFor + strlen(tacFor), "and $%d, %s%d, %s%d //  %s &&  %s  \n", registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, (yyvsp[0].typeNode)->regis_tipo, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);     
                }else{
                   threeAddress = alocar_memoria(threeAddress);        
                   sprintf(threeAddress + strlen(threeAddress), "and $%d, %s%d, %s%d //  %s &&  %s  \n", registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, (yyvsp[0].typeNode)->regis_tipo, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                }     
              }   

              (yyval.typeNode)->registrador = registrador;
              (yyval.typeNode)->regis_tipo = "$"; 
              registrador = registrador+1;      


        }
#line 4605 "sintatic.tab.c"
    break;

  case 91: /* op_and_expr: op_and_expr OP_AND logical_expr  */
#line 906 "sintatic/sintatic.y"
                                        {
                (yyval.typeNode) = buildNode("and", 0);

                if((yyvsp[-2].typeNode)->registrador == -1 && (yyvsp[0].typeNode)->registrador == -1){
                  Symbol *aux1 = findItem(activeScope, (yyvsp[-2].typeNode)->value);
                  Symbol *aux3 = findItem(activeScope, (yyvsp[0].typeNode)->value);    
                  if(aux1 != NULL && aux3 != NULL){
                        if(isFor == 1){
                          tacFor = alocar_memoria(tacFor);      
                          sprintf(tacFor + strlen(tacFor), "and $%d, %s%d, %s%d //  %s &&  %s  \n", registrador, aux1->regis_tipo, aux1->registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                        }else{
                          threeAddress = alocar_memoria(threeAddress);      
                          sprintf(threeAddress + strlen(threeAddress), "and $%d, %s%d, %s%d //  %s &&  %s  \n", registrador, aux1->regis_tipo, aux1->registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                        }  
                   }           
                }else if((yyvsp[-2].typeNode)->registrador != -1 && (yyvsp[0].typeNode)->registrador == -1){
                  Symbol *aux1 = findItem(activeScope, (yyvsp[-2].typeNode)->value);
                  if(aux1 != NULL){
                        if(isFor == 1){
                          tacFor = alocar_memoria(tacFor);
                          sprintf(tacFor + strlen(tacFor), "and $%d, %s%d, %s%d //  %s &&  %s  \n", registrador,  aux1->regis_tipo, aux1->registrador, (yyvsp[0].typeNode)->regis_tipo, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                        }else{
                          threeAddress = alocar_memoria(threeAddress);
                          sprintf(threeAddress + strlen(threeAddress), "and $%d, %s%d, %s%d //  %s &&  %s  \n", registrador,  aux1->regis_tipo, aux1->registrador, (yyvsp[0].typeNode)->regis_tipo, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                        }  
                  }
                }else if((yyvsp[-2].typeNode)->registrador != -1 && (yyvsp[0].typeNode)->registrador == -1){   
                  Symbol *aux3 = findItem(activeScope, (yyvsp[-2].typeNode)->value);
                  if(aux3 != NULL){
                        if(isFor == 1){
                          tacFor = alocar_memoria(tacFor);  
                          sprintf(tacFor + strlen(tacFor), "and $%d, %s%d, %s%d //  %s &&  %s  \n", registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                        }else{
                          threeAddress = alocar_memoria(threeAddress);  
                          sprintf(threeAddress + strlen(threeAddress), "and $%d, %s%d, %s%d //  %s &&  %s  \n", registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                        }  
                  }        
                }else{
                  if(isFor == 1){
                    tacFor = alocar_memoria(tacFor);        
                    sprintf(tacFor + strlen(tacFor), "and $%d, %s%d, %s%d //  %s &&  %s  \n", registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, (yyvsp[0].typeNode)->regis_tipo, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);     
                  }else{
                    threeAddress = alocar_memoria(threeAddress);        
                    sprintf(threeAddress + strlen(threeAddress), "and $%d, %s%d, %s%d //  %s &&  %s  \n", registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, (yyvsp[0].typeNode)->regis_tipo, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                  }      
                }     
                
                (yyval.typeNode)->registrador = registrador;
                (yyval.typeNode)->regis_tipo = "$"; 
                registrador = registrador+1;         

                if((yyvsp[-2].typeNode)->type != 0 && (yyvsp[0].typeNode)->type != 0){
                   (yyval.typeNode)->childNode = buildNode(castToInt(0, (yyvsp[-2].typeNode)->type), 0);
                   (yyval.typeNode)->childNode->childNode = (yyvsp[-2].typeNode);
                   TreeNodes *aux = buildNode(castToInt(0, (yyvsp[0].typeNode)->type), 0);
                        (yyval.typeNode)->childNode->brotherNode = aux;
                        aux->childNode = (yyvsp[0].typeNode);    

                }else if((yyvsp[-2].typeNode)->type != 0){
                        (yyval.typeNode)->childNode = buildNode(castToInt(0, (yyvsp[-2].typeNode)->type), 0);
                        (yyval.typeNode)->childNode->childNode = (yyvsp[-2].typeNode);
                        (yyval.typeNode)->childNode->brotherNode = (yyvsp[0].typeNode);        

                }else if((yyvsp[0].typeNode)->type != 0){
                        (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
                        (yyvsp[-2].typeNode)->brotherNode = buildNode(castToInt(0, (yyvsp[0].typeNode)->type), 0);
                        (yyvsp[-2].typeNode)->brotherNode->childNode = (yyvsp[0].typeNode); 
                }else{
                        (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
                        (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
                }
        }
#line 4682 "sintatic.tab.c"
    break;

  case 93: /* logical_expr: logical_expr logical_ops arithmetic_expr  */
#line 982 "sintatic/sintatic.y"
                                                {
              (yyval.typeNode) = (yyvsp[-1].typeNode);
              //      $2->childNode = $1; 
              //      $1->brotherNode = $3;

              if((yyvsp[-2].typeNode)->registrador == -1 && (yyvsp[0].typeNode)->registrador == -1){
                Symbol *aux1 = findItem(activeScope, (yyvsp[-2].typeNode)->value);
                Symbol *aux3 = findItem(activeScope, (yyvsp[0].typeNode)->value);
                        
                if(aux1 != NULL && aux3 != NULL){
                        if(strcmp((yyvsp[-1].typeNode)->value, "GTE_OP") == 0 || strcmp((yyvsp[-1].typeNode)->value, "GT_OP") == 0 ){
                           if(isFor == 1){  
                              tacFor = alocar_memoria(tacFor);   
                              sprintf(tacFor + strlen(tacFor), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, aux3->regis_tipo, aux3->registrador, aux1->regis_tipo, aux1->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                           }else{
                              threeAddress = alocar_memoria(threeAddress);
                              sprintf(threeAddress + strlen(threeAddress), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, aux3->regis_tipo, aux3->registrador, aux1->regis_tipo, aux1->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                           }
                        }else if(strcmp((yyvsp[-1].typeNode)->value, "NEQ_OP") == 0 ){
                           if(isFor == 1){
                              tacFor = alocar_memoria(tacFor);     
                              sprintf(tacFor + strlen(tacFor), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, aux1->regis_tipo, aux1->registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                              tacFor = alocar_memoria(tacFor);
                              sprintf(tacFor + strlen(tacFor), "not $%d, $%d \n", registrador, registrador);
                           }else{
                              threeAddress = alocar_memoria(threeAddress);     
                              sprintf(threeAddress + strlen(threeAddress), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, aux1->regis_tipo, aux1->registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                              threeAddress = alocar_memoria(threeAddress);
                              sprintf(threeAddress + strlen(threeAddress), "not $%d, $%d \n", registrador, registrador);
                           }     
                           
                        }else{
                           if(isFor == 1){
                             tacFor = alocar_memoria(tacFor);      
                             sprintf(tacFor + strlen(tacFor), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, aux1->regis_tipo, aux1->registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                           }else{
                             threeAddress = alocar_memoria(threeAddress);      
                             sprintf(threeAddress + strlen(threeAddress), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, aux1->regis_tipo, aux1->registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                           }     
                        }
                } 

              }else if((yyvsp[-2].typeNode)->registrador == -1 && (yyvsp[0].typeNode)->registrador != -1){  
                Symbol *aux1 = findItem(activeScope, (yyvsp[-2].typeNode)->value); 
                
                if(aux1 != NULL){
                        if(strcmp((yyvsp[-1].typeNode)->value, "GTE_OP") == 0 || strcmp((yyvsp[-1].typeNode)->value, "GT_OP") == 0 ){
                           if(isFor == 1){
                             tacFor = alocar_memoria(tacFor);        
                             sprintf(tacFor + strlen(tacFor), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, (yyvsp[0].typeNode)->regis_tipo, (yyvsp[0].typeNode)->registrador, aux1->regis_tipo, aux1->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);      
                           }else{
                             threeAddress = alocar_memoria(threeAddress);        
                             sprintf(threeAddress + strlen(threeAddress), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, (yyvsp[0].typeNode)->regis_tipo, (yyvsp[0].typeNode)->registrador, aux1->regis_tipo, aux1->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                           }     
                           
                        }else if(strcmp((yyvsp[-1].typeNode)->value, "NEQ_OP") == 0 ){
                           if(isFor == 1){
                             tacFor = alocar_memoria(tacFor);      
                             sprintf(tacFor + strlen(tacFor), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, aux1->regis_tipo, aux1->registrador, (yyvsp[0].typeNode)->regis_tipo, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                             tacFor = alocar_memoria(tacFor);
                             sprintf(tacFor + strlen(tacFor), "not $%d, $%d \n", registrador, registrador);
                           }else{
                             threeAddress = alocar_memoria(threeAddress);      
                             sprintf(threeAddress + strlen(threeAddress), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, aux1->regis_tipo, aux1->registrador, (yyvsp[0].typeNode)->regis_tipo, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                             threeAddress = alocar_memoria(threeAddress);
                             sprintf(threeAddress + strlen(threeAddress), "not $%d, $%d \n", registrador, registrador);
                           }         
                        }else{
                           if(isFor == 1){ 
                             tacFor = alocar_memoria(tacFor);          
                             sprintf(tacFor + strlen(tacFor), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, aux1->regis_tipo, aux1->registrador, (yyvsp[0].typeNode)->regis_tipo, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                           }else{
                             threeAddress = alocar_memoria(threeAddress);          
                             sprintf(threeAddress + strlen(threeAddress), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, aux1->regis_tipo, aux1->registrador, (yyvsp[0].typeNode)->regis_tipo, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);      
                           } 
                        }
                }

              }else if((yyvsp[-2].typeNode)->registrador != -1 && (yyvsp[0].typeNode)->registrador == -1){
                Symbol *aux3 = findItem(activeScope, (yyvsp[-2].typeNode)->value); 
                
                if(aux3 != NULL){
                        if(strcmp((yyvsp[-1].typeNode)->value, "GTE_OP") == 0 || strcmp((yyvsp[-1].typeNode)->value, "GT_OP") == 0 ){
                          if(isFor == 1){ 
                            tacFor = alocar_memoria(tacFor);               
                            sprintf(tacFor + strlen(tacFor), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);      
                          }else{
                            threeAddress = alocar_memoria(threeAddress);               
                            sprintf(threeAddress + strlen(threeAddress), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                          }
                        }else if(strcmp((yyvsp[-1].typeNode)->value, "NEQ_OP") == 0 ){
                           if(isFor == 1){ 
                             tacFor = alocar_memoria(tacFor);            
                             sprintf(tacFor + strlen(tacFor), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);     
                             tacFor = alocar_memoria(tacFor);
                             sprintf(tacFor + strlen(tacFor), "not $%d, $%d \n", registrador, registrador);
                           }else{
                             threeAddress = alocar_memoria(threeAddress);            
                             sprintf(threeAddress + strlen(threeAddress), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);     
                             threeAddress = alocar_memoria(threeAddress);
                             sprintf(threeAddress + strlen(threeAddress), "not $%d, $%d \n", registrador, registrador);
                           }    
                        }else{
                          if(isFor == 1){ 
                            tacFor = alocar_memoria(tacFor);
                            sprintf(tacFor + strlen(tacFor), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                          }else{
                            threeAddress = alocar_memoria(threeAddress);
                            sprintf(threeAddress + strlen(threeAddress), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                          }
                        }
                }     
              }else {
                
                if(strcmp((yyvsp[-1].typeNode)->value, "GTE_OP") == 0 || strcmp((yyvsp[-1].typeNode)->value, "GT_OP") == 0 ){ 
                        if(isFor == 1){ 
                             tacFor = alocar_memoria(tacFor);  
                             sprintf(tacFor + strlen(tacFor), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, (yyvsp[0].typeNode)->regis_tipo, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);   
                        }else{
                             threeAddress = alocar_memoria(threeAddress);  
                             sprintf(threeAddress + strlen(threeAddress), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, (yyvsp[0].typeNode)->regis_tipo, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);   
                        }
                }else if(strcmp((yyvsp[-1].typeNode)->value, "NEQ_OP") == 0 ){
                        if(isFor == 1){
                           tacFor = alocar_memoria(tacFor);
                           sprintf(tacFor + strlen(tacFor), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, (yyvsp[0].typeNode)->regis_tipo, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                           tacFor = alocar_memoria(tacFor);
                           sprintf(tacFor + strlen(tacFor), "not $%d, $%d \n", registrador, registrador);    
                        }else{
                           threeAddress = alocar_memoria(threeAddress);
                           sprintf(threeAddress + strlen(threeAddress), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, (yyvsp[0].typeNode)->regis_tipo, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                           threeAddress = alocar_memoria(threeAddress);
                           sprintf(threeAddress + strlen(threeAddress), "not $%d, $%d \n", registrador, registrador);
                        }
                        
                }else{
                        if(isFor == 1){
                          tacFor = alocar_memoria(tacFor);
                          sprintf(tacFor + strlen(tacFor), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, (yyvsp[0].typeNode)->regis_tipo, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                        }else{
                          threeAddress = alocar_memoria(threeAddress);
                          sprintf(threeAddress + strlen(threeAddress), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, (yyvsp[0].typeNode)->regis_tipo, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                        }
                }
              }

              (yyvsp[-1].typeNode)->registrador = registrador;
              (yyvsp[-1].typeNode)->regis_tipo = "$"; 
              registrador = registrador+1;

              if((yyvsp[-2].typeNode)->type != 0 && (yyvsp[0].typeNode)->type != 0){
                (yyval.typeNode)->childNode = buildNode(castToInt(0, (yyvsp[-2].typeNode)->type), 0);
                (yyval.typeNode)->childNode->childNode = (yyvsp[-2].typeNode);
                TreeNodes *aux = buildNode(castToInt(0, (yyvsp[0].typeNode)->type), 0);
                (yyval.typeNode)->childNode->brotherNode = aux;
                aux->childNode = (yyvsp[0].typeNode);    

              }else if((yyvsp[-2].typeNode)->type != 0){
                (yyval.typeNode)->childNode = buildNode(castToInt(0, (yyvsp[-2].typeNode)->type), 0);
                (yyval.typeNode)->childNode->childNode = (yyvsp[-2].typeNode);
                (yyval.typeNode)->childNode->brotherNode = (yyvsp[0].typeNode);        

              }else if((yyvsp[0].typeNode)->type != 0){
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = buildNode(castToInt(0, (yyvsp[0].typeNode)->type), 0);
                (yyvsp[-2].typeNode)->brotherNode->childNode = (yyvsp[0].typeNode); 
              }else{
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
              } 
       }
#line 4858 "sintatic.tab.c"
    break;

  case 95: /* arithmetic_expr: arithmetic_expr adds_op mult_expr  */
#line 1157 "sintatic/sintatic.y"
                                          {
              
                if((yyvsp[-2].typeNode)->registrador == -1 && (yyvsp[0].typeNode)->registrador == -1){
                        Symbol *aux1 = findItem(activeScope, (yyvsp[-2].typeNode)->value);
                        Symbol *aux3 = findItem(activeScope, (yyvsp[0].typeNode)->value);
                        
                        if(aux1 != NULL && aux3 != NULL){
                            if(strcmp((yyvsp[-1].typeNode)->value, "+") == 0){
                                if(isFor == 1){
                                  tacFor = alocar_memoria(tacFor);  
                                  sprintf(tacFor + strlen(tacFor), "add $%d, %s%d, %s%d // var %s + var %s  \n", registrador, aux1->regis_tipo, aux1->registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);     
                                }else{
                                  threeAddress = alocar_memoria(threeAddress);  
                                  sprintf(threeAddress + strlen(threeAddress), "add $%d, %s%d, %s%d // var %s + var %s  \n", registrador, aux1->regis_tipo, aux1->registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);      
                                }  
                            }else{
                                if(isFor == 1){
                                    tacFor = alocar_memoria(tacFor);
                                    sprintf(tacFor + strlen(tacFor), "sub $%d, %s%d, %s%d // var %s + var %s  \n", registrador, aux1->regis_tipo, aux1->registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value); 
                                }else{
                                   threeAddress = alocar_memoria(threeAddress);
                                   sprintf(threeAddress + strlen(threeAddress), "sub $%d, %s%d, %s%d // var %s + var %s  \n", registrador, aux1->regis_tipo, aux1->registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);     
                                }
                                
                            }
                       }
                }else if((yyvsp[-2].typeNode)->registrador == -1 && (yyvsp[0].typeNode)->registrador != -1){
                        Symbol *aux1 = findItem(activeScope, (yyvsp[-2].typeNode)->value);
                        
                        if(aux1 != NULL){
                            if(strcmp((yyvsp[-1].typeNode)->value, "+") == 0){
                                if(isFor == 1){
                                    tacFor = alocar_memoria(tacFor);
                                    sprintf(tacFor + strlen(tacFor), "add $%d, %s%d, %s%d // var %s + var %s  \n", registrador, aux1->regis_tipo, aux1->registrador, (yyvsp[0].typeNode)->regis_tipo, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                                }else{
                                    threeAddress = alocar_memoria(threeAddress);
                                    sprintf(threeAddress + strlen(threeAddress), "add $%d, %s%d, %s%d // var %s + var %s  \n", registrador, aux1->regis_tipo, aux1->registrador, (yyvsp[0].typeNode)->regis_tipo, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);    
                                }
                            }else{
                                if(isFor == 1){
                                    tacFor = alocar_memoria(tacFor);
                                    sprintf(tacFor + strlen(tacFor), "sub $%d, %s%d, %s%d // var %s + var %s  \n", registrador, aux1->regis_tipo, aux1->registrador, (yyvsp[0].typeNode)->regis_tipo, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);        
                                }else{
                                    threeAddress = alocar_memoria(threeAddress);
                                    sprintf(threeAddress + strlen(threeAddress), "sub $%d, %s%d, %s%d // var %s + var %s  \n", registrador, aux1->regis_tipo, aux1->registrador, (yyvsp[0].typeNode)->regis_tipo, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);     
                                }
                                
                            }
                       }
                }else if((yyvsp[-2].typeNode)->registrador != -1 && (yyvsp[0].typeNode)->registrador == -1){
                        Symbol *aux3 = findItem(activeScope, (yyvsp[0].typeNode)->value);
                        
                        if(aux3 != NULL){
                            if(strcmp((yyvsp[-1].typeNode)->value, "+") == 0){
                                if(isFor == 1){
                                  tacFor = alocar_memoria(tacFor);
                                  sprintf(tacFor + strlen(tacFor), "add $%d, %s%d, %s%d // var %s + var %s  \n", registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                                }else{
                                  threeAddress = alocar_memoria(threeAddress);
                                  sprintf(threeAddress + strlen(threeAddress), "add $%d, %s%d, %s%d // var %s + var %s  \n", registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);        
                                }
                            }else{
                                if(isFor == 1){
                                   tacFor = alocar_memoria(tacFor);
                                   sprintf(tacFor + strlen(tacFor), "sub $%d, %s%d, %s%d // var %s + var %s  \n", registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);     
                                }else{
                                   threeAddress = alocar_memoria(threeAddress);
                                   sprintf(threeAddress + strlen(threeAddress), "sub $%d, %s%d, %s%d // var %s + var %s  \n", registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);     
                                }
                            }
                       }
                }else{   
                        if(strcmp((yyvsp[-1].typeNode)->value, "+") == 0){
                                if(isFor == 1){
                                   tacFor = alocar_memoria(tacFor);     
                                   sprintf(tacFor + strlen(tacFor), "add $%d, %s%d, %s%d // var %s + var %s  \n", registrador, (yyvsp[-2].typeNode)->regis_tipo,  (yyvsp[-2].typeNode)->registrador, (yyvsp[0].typeNode)->regis_tipo,  (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                                }else{ 
                                   threeAddress = alocar_memoria(threeAddress);     
                                   sprintf(threeAddress + strlen(threeAddress), "add $%d, %s%d, %s%d // var %s + var %s  \n", registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, (yyvsp[0].typeNode)->regis_tipo,  (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);        
                                }
                        }else{
                                if(isFor == 1){
                                  tacFor = alocar_memoria(tacFor);
                                  sprintf(tacFor + strlen(tacFor), "sub $%d, %s%d, %s%d // var %s + var %s  \n", registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, (yyvsp[0].typeNode)->regis_tipo,  (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                                }else{
                                  threeAddress = alocar_memoria(threeAddress);
                                  sprintf(threeAddress + strlen(threeAddress), "sub $%d, %s%d, %s%d // var %s + var %s  \n", registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, (yyvsp[0].typeNode)->regis_tipo,  (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);        
                                } 
                        }
                }
              

              (yyvsp[-1].typeNode)->registrador = registrador;
              (yyvsp[-1].typeNode)->regis_tipo = "$"; 
              registrador = registrador+1;

              if((yyvsp[-2].typeNode)->type != (yyvsp[0].typeNode)->type) {
                (yyval.typeNode) = (yyvsp[-1].typeNode);
                (yyvsp[-1].typeNode)->type = typeNodo((yyvsp[-2].typeNode)->type, (yyvsp[0].typeNode)->type);

                // faz o cast a esquerda ou a direita
                if( ((yyvsp[-2].typeNode)->type == 0 && ((yyvsp[0].typeNode)->type == 1 || (yyvsp[0].typeNode)->type == 3)) || ((yyvsp[-2].typeNode)->type == 1 && (yyvsp[0].typeNode)->type == 3) ){
                    char* cast;
                    cast = castType((yyvsp[-2].typeNode)->type, (yyvsp[0].typeNode)->type);
                    if(strcmp(cast,"Cast Error!") == 0){
                        printf(" ------------------------- ERROR: Incompatible type Cast ------------------------------ \n");  
                        globalError = globalError + 1;    
                    }    
                    (yyvsp[-1].typeNode)->childNode = buildNode(cast, typeNodo((yyvsp[-2].typeNode)->type, (yyvsp[0].typeNode)->type));
                    (yyvsp[-1].typeNode)->childNode->childNode = (yyvsp[-2].typeNode);
                    (yyvsp[-1].typeNode)->brotherNode = (yyvsp[0].typeNode);
                }else{
                    (yyvsp[-1].typeNode)->childNode = (yyvsp[-2].typeNode);
                    char* cast;
                    cast = castType((yyvsp[-2].typeNode)->type, (yyvsp[0].typeNode)->type);
                    if(strcmp(cast,"Cast Error!") == 0){
                        printf(" ------------------------- ERROR: Incompatible type Cast ------------------------------ \n");  
                        globalError = globalError + 1;    
                    }
                    (yyvsp[-2].typeNode)->brotherNode = buildNode(cast, typeNodo((yyvsp[-2].typeNode)->type, (yyvsp[0].typeNode)->type));
                    (yyvsp[-2].typeNode)->brotherNode->childNode = (yyvsp[0].typeNode);
                }
                
              }else {
                (yyval.typeNode) = (yyvsp[-1].typeNode);
                (yyvsp[-1].typeNode)->type = (yyvsp[-2].typeNode)->type;
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
                (yyvsp[-1].typeNode)->childNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
              }
        }
#line 4994 "sintatic.tab.c"
    break;

  case 97: /* mult_expr: mult_expr mult_ops first_term  */
#line 1292 "sintatic/sintatic.y"
                                      {

              if((yyvsp[-2].typeNode)->registrador == -1 && (yyvsp[0].typeNode)->registrador == -1){
                Symbol *aux1 = findItem(activeScope, (yyvsp[-2].typeNode)->value);
                Symbol *aux3 = findItem(activeScope, (yyvsp[0].typeNode)->value);
                if(aux1 != NULL && aux3 != NULL){
                        
                        if(strcmp((yyvsp[-1].typeNode)->value, "*") == 0){
                                if(isFor == 1){
                                  tacFor = alocar_memoria(tacFor);
                                  sprintf(tacFor + strlen(tacFor), "mul $%d, %s%d, %s%d // var %s */ var %s  \n", registrador, aux1->regis_tipo, aux1->registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);       
                                }else{
                                  threeAddress = alocar_memoria(threeAddress);
                                  sprintf(threeAddress + strlen(threeAddress), "mul $%d, %s%d, %s%d // var %s */ var %s  \n", registrador, aux1->regis_tipo, aux1->registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);       
                                }
                                  
                        }else{
                                if(isFor == 1){
                                  tacFor = alocar_memoria(tacFor);
                                  sprintf(tacFor + strlen(tacFor), "div $%d, %s%d, %s%d // var %s */ var %s  \n", registrador, aux1->regis_tipo, aux1->registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);        
                                }else{
                                  threeAddress = alocar_memoria(threeAddress);
                                  sprintf(threeAddress + strlen(threeAddress), "div $%d, %s%d, %s%d // var %s */ var %s  \n", registrador, aux1->regis_tipo, aux1->registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                                }
                                
                        } 
                }
              }else if((yyvsp[-2].typeNode)->registrador == -1 && (yyvsp[0].typeNode)->registrador != -1){
                        Symbol *aux1 = findItem(activeScope, (yyvsp[-2].typeNode)->value);
                        
                        if(aux1 != NULL){
                            if(strcmp((yyvsp[-1].typeNode)->value, "*") == 0){
                                if(isFor == 1){
                                  tacFor = alocar_memoria(tacFor); 
                                  sprintf(tacFor + strlen(tacFor), "mul $%d, %s%d, %s%d // var %s * var %s  \n", registrador, aux1->regis_tipo, aux1->registrador, (yyvsp[0].typeNode)->regis_tipo,  (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                                }else{
                                  threeAddress = alocar_memoria(threeAddress); 
                                  sprintf(threeAddress + strlen(threeAddress), "mul $%d, %s%d, %s%d // var %s * var %s  \n", registrador, aux1->regis_tipo, aux1->registrador, (yyvsp[0].typeNode)->regis_tipo, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                                }   
                            }else{
                                if(isFor == 1){
                                  tacFor = alocar_memoria(tacFor);     
                                  sprintf(tacFor + strlen(tacFor), "div $%d, %s%d, %s%d // var %s / var %s  \n", registrador, aux1->regis_tipo, aux1->registrador, (yyvsp[0].typeNode)->regis_tipo, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                                }else{
                                  threeAddress = alocar_memoria(threeAddress);     
                                  sprintf(threeAddress + strlen(threeAddress), "div $%d, %s%d, %s%d // var %s / var %s  \n", registrador, aux1->regis_tipo, aux1->registrador, (yyvsp[0].typeNode)->regis_tipo, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);      
                                }
                            }
                       }
                }else if((yyvsp[-2].typeNode)->registrador != -1 && (yyvsp[0].typeNode)->registrador == -1){
                        Symbol *aux3 = findItem(activeScope, (yyvsp[0].typeNode)->value);
                        
                        if(aux3 != NULL){
                            if(strcmp((yyvsp[-1].typeNode)->value, "*") == 0){
                                if(isFor == 1){
                                   tacFor = alocar_memoria(tacFor);   
                                   sprintf(tacFor + strlen(tacFor), "mul $%d, %s%d, %s%d // var %s * var %s  \n", registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                                }else{
                                  threeAddress = alocar_memoria(threeAddress);   
                                  sprintf(threeAddress + strlen(threeAddress), "mul $%d, %s%d, %s%d // var %s * var %s  \n", registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                                } 
                                
                            }else{
                                if(isFor == 1){
                                  tacFor = alocar_memoria(tacFor);    
                                  sprintf(tacFor + strlen(tacFor), "div $%d, %s%d, %s%d // var %s / var %s  \n", registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                                }else{
                                  threeAddress = alocar_memoria(threeAddress);    
                                  sprintf(threeAddress + strlen(threeAddress), "div $%d, %s%d, %s%d // var %s / var %s  \n", registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                                }
                            }
                       }
                }else{
                         
                        if(strcmp((yyvsp[-1].typeNode)->value, "*") == 0){
                                if(isFor == 1){
                                  tacFor = alocar_memoria(tacFor);  
                                  sprintf(tacFor + strlen(tacFor), "mul $%d, %s%d, %s%d // var %s * var %s  \n", registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, (yyvsp[0].typeNode)->regis_tipo, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                                }else{
                                  threeAddress = alocar_memoria(threeAddress);  
                                  sprintf(threeAddress + strlen(threeAddress), "mul $%d, %s%d, %s%d // var %s * var %s  \n", registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, (yyvsp[0].typeNode)->regis_tipo, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                                }
                                
                        }else{
                                if(isFor == 1){
                                  tacFor = alocar_memoria(tacFor);  
                                  sprintf(tacFor + strlen(tacFor), "div $%d, %s%d, %s%d // var %s / var %s  \n", registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, (yyvsp[0].typeNode)->regis_tipo, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                                }else{
                                  threeAddress = alocar_memoria(threeAddress);  
                                  sprintf(threeAddress + strlen(threeAddress), "div $%d, %s%d, %s%d // var %s / var %s  \n", registrador, (yyvsp[-2].typeNode)->regis_tipo, (yyvsp[-2].typeNode)->registrador, (yyvsp[0].typeNode)->regis_tipo, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                                }
                        }
                }

              (yyvsp[-1].typeNode)->registrador = registrador;
              (yyvsp[-1].typeNode)->regis_tipo = "$"; 
              registrador = registrador+1;
              
              if((yyvsp[-2].typeNode)->type != (yyvsp[0].typeNode)->type) {
                (yyval.typeNode) = (yyvsp[-1].typeNode);
                (yyvsp[-1].typeNode)->type = typeNodo((yyvsp[-2].typeNode)->type, (yyvsp[0].typeNode)->type);

                // faz o cast a esquerda ou a direita
                if(((yyvsp[-2].typeNode)->type == 0 && ((yyvsp[0].typeNode)->type == 1 || (yyvsp[0].typeNode)->type == 3)) || ((yyvsp[-2].typeNode)->type == 1 && (yyvsp[0].typeNode)->type == 3)){
                    char* cast;
                    cast = castType((yyvsp[-2].typeNode)->type, (yyvsp[0].typeNode)->type);
                    if(strcmp(cast, "Cast Error!") == 0){
                        printf(" ------------------------- ERROR: Incompatible type Cast ------------------------------ \n");  
                        globalError = globalError + 1;    
                    }    
                    (yyvsp[-1].typeNode)->childNode = buildNode(cast, typeNodo((yyvsp[-2].typeNode)->type, (yyvsp[0].typeNode)->type));
                    (yyvsp[-1].typeNode)->childNode->childNode = (yyvsp[-2].typeNode);
                    (yyvsp[-1].typeNode)->brotherNode = (yyvsp[0].typeNode);
                }else {
                    (yyvsp[-1].typeNode)->childNode = (yyvsp[-2].typeNode);
                    char* cast;
                    cast = castType((yyvsp[-2].typeNode)->type, (yyvsp[0].typeNode)->type);
                    if(strcmp(cast,"Cast Error!") == 0){
                        printf(" ------------------------- ERROR: Incompatible type Cast ------------------------------ \n");  
                        globalError = globalError + 1;    
                    }  
                    (yyvsp[-2].typeNode)->brotherNode = buildNode(cast, typeNodo((yyvsp[-2].typeNode)->type, (yyvsp[0].typeNode)->type));
                    (yyvsp[-2].typeNode)->brotherNode->childNode = (yyvsp[0].typeNode);
                }
              }else{
                (yyval.typeNode) = (yyvsp[-1].typeNode);
                (yyvsp[-1].typeNode)->type = (yyvsp[-2].typeNode)->type;
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode); 
                (yyvsp[-1].typeNode)->childNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);          
              }
        }
#line 5131 "sintatic.tab.c"
    break;

  case 100: /* first_term: OP_NEG term  */
#line 1429 "sintatic/sintatic.y"
                      {
              (yyval.typeNode) = buildNode(" ! ", (yyvsp[0].typeNode)->type);
              (yyval.typeNode)->childNode = (yyvsp[0].typeNode);
        }
#line 5140 "sintatic.tab.c"
    break;

  case 101: /* first_term: adds_op term  */
#line 1433 "sintatic/sintatic.y"
                       {
              (yyval.typeNode) = (yyvsp[-1].typeNode);
              (yyvsp[-1].typeNode)->type = (yyvsp[0].typeNode)->type;
              (yyvsp[-1].typeNode)->childNode = (yyvsp[0].typeNode);

              if(strcmp((yyvsp[-1].typeNode)->value,"-") == 0){
                if(isFor == 1){
                   tacFor = alocar_memoria(tacFor);
                   sprintf(tacFor + strlen(tacFor), "minus $%d, $%d // - %s \n", registrador,  (yyvsp[0].typeNode)->registrador, (yyvsp[0].typeNode)->value);    
                }else{
                   threeAddress = alocar_memoria(threeAddress);
                   sprintf(threeAddress + strlen(threeAddress), "minus $%d, $%d // - %s \n", registrador,  (yyvsp[0].typeNode)->registrador, (yyvsp[0].typeNode)->value);
                }      
                (yyvsp[-1].typeNode)->registrador = registrador;
                (yyvsp[-1].typeNode)->regis_tipo = "$"; 
                registrador = registrador + 1; 
                  
              }  
        }
#line 5164 "sintatic.tab.c"
    break;

  case 102: /* first_term: var OPEN_PAREN list_expr CLS_PAREN  */
#line 1452 "sintatic/sintatic.y"
                                             {
                int funcDeclr;
                funcDeclr = verifyFuncDeclaration(activeScope, (yyvsp[-3].typeNode)->value, line, column, numListArgs);
                if(funcDeclr == 0){
                   globalError = globalError + 1; 
                }

                threeAddress = alocar_memoria(threeAddress);
	        sprintf(threeAddress + strlen(threeAddress), "call %s, %d // call \n", (yyvsp[-3].typeNode)->value, numListArgs);
                
                threeAddress = alocar_memoria(threeAddress);
                sprintf(threeAddress + strlen(threeAddress), "pop $%d // pop \n", registrador);

                (yyval.typeNode) = (yyvsp[-3].typeNode);
                (yyvsp[-3].typeNode)->type = (yyvsp[-1].typeNode)->type;
                (yyvsp[-3].typeNode)->brotherNode = (yyvsp[-1].typeNode);
                (yyvsp[-3].typeNode)->regis_tipo = "$"; 
                (yyvsp[-3].typeNode)->registrador = registrador;

                registrador = registrador + 1;
                numListArgs = 0;
        }
#line 5191 "sintatic.tab.c"
    break;

  case 103: /* first_term: var OPEN_PAREN CLS_PAREN  */
#line 1474 "sintatic/sintatic.y"
                                   {
                int funcDeclr;
                funcDeclr = verifyFuncDeclaration(activeScope, (yyvsp[-2].typeNode)->value, line, column, 0);
                if(funcDeclr == 0){
                   globalError = globalError + 1; 
                }

                threeAddress = alocar_memoria(threeAddress);
	        sprintf(threeAddress + strlen(threeAddress), "call %s, %d // call \n", (yyvsp[-2].typeNode)->value, numListArgs);
                
                threeAddress = alocar_memoria(threeAddress);
                sprintf(threeAddress + strlen(threeAddress), "pop $%d // pop \n", registrador);

                registrador = registrador + 1;
        }
#line 5211 "sintatic.tab.c"
    break;

  case 104: /* first_term: var OPEN_PAREN error CLS_PAREN  */
#line 1489 "sintatic/sintatic.y"
                                         {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
        }
#line 5219 "sintatic.tab.c"
    break;

  case 105: /* first_term: error OPEN_PAREN CLS_PAREN  */
#line 1492 "sintatic/sintatic.y"
                                      {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
        }
#line 5227 "sintatic.tab.c"
    break;

  case 106: /* term: var  */
#line 1498 "sintatic/sintatic.y"
            {
                int undeclr;
                undeclr = verifyUnDeclaration(activeScope, (yyvsp[0].typeNode)->value, line, column);
                if(undeclr == 0){
                   globalError = globalError + 1; 
                }
        }
#line 5239 "sintatic.tab.c"
    break;

  case 108: /* term: OPEN_PAREN expr CLS_PAREN  */
#line 1506 "sintatic/sintatic.y"
                                    {
                (yyval.typeNode) = (yyvsp[-1].typeNode);
        }
#line 5247 "sintatic.tab.c"
    break;

  case 109: /* term: EMPTY  */
#line 1509 "sintatic/sintatic.y"
                {
              (yyval.typeNode) = buildNode("EMPTY", 2);
              (yyval.typeNode)->registrador = registrador;
              (yyval.typeNode)->regis_tipo = "$";
              
              threeAddress = alocar_memoria(threeAddress);
	      sprintf(threeAddress + strlen(threeAddress), "mov $%d, 0  // empty \n", registrador);
              registrador = registrador + 1;
        }
#line 5261 "sintatic.tab.c"
    break;

  case 110: /* term: OPEN_PAREN error CLS_PAREN  */
#line 1518 "sintatic/sintatic.y"
                                      {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
        }
#line 5269 "sintatic.tab.c"
    break;

  case 111: /* logical_ops: LT_OP  */
#line 1524 "sintatic/sintatic.y"
              {
                (yyval.typeNode) = buildNode("LT_OP", 0);
        }
#line 5277 "sintatic.tab.c"
    break;

  case 112: /* logical_ops: LTE_OP  */
#line 1527 "sintatic/sintatic.y"
                  {
                (yyval.typeNode) = buildNode("LTE_OP", 0);
        }
#line 5285 "sintatic.tab.c"
    break;

  case 113: /* logical_ops: GT_OP  */
#line 1530 "sintatic/sintatic.y"
                 {
                (yyval.typeNode) = buildNode("GT_OP", 0);
        }
#line 5293 "sintatic.tab.c"
    break;

  case 114: /* logical_ops: GTE_OP  */
#line 1533 "sintatic/sintatic.y"
                  {
                (yyval.typeNode) = buildNode("GTE_OP", 0);
        }
#line 5301 "sintatic.tab.c"
    break;

  case 115: /* logical_ops: NEQ_OP  */
#line 1536 "sintatic/sintatic.y"
                  {
                (yyval.typeNode) = buildNode("NEQ_OP", 0);
        }
#line 5309 "sintatic.tab.c"
    break;

  case 116: /* logical_ops: EQUAL_OP  */
#line 1539 "sintatic/sintatic.y"
                    {
                (yyval.typeNode) = buildNode("EQUAL_OP", 0);
        }
#line 5317 "sintatic.tab.c"
    break;

  case 117: /* str_expr: STRING  */
#line 1545 "sintatic/sintatic.y"
               {
            (yyval.typeNode) = buildNode((yyvsp[0].sval), 99);
            table = alocar_memoria(table);
            sprintf(table + strlen(table), " char str_char%d[]=%s \n", registrador, (yyvsp[0].sval));
            (yyval.typeNode)->registrador = registrador;
            free((yyvsp[0].sval));
        }
#line 5329 "sintatic.tab.c"
    break;

  case 118: /* char_expr: CHARACTER  */
#line 1555 "sintatic/sintatic.y"
                  {
            (yyval.typeNode) = buildNode((yyvsp[0].sval), 99);
            table = alocar_memoria(table);
            char* s;
            s = (yyvsp[0].sval);
            for (int i = 0; s[i] != '\0'; i++) {
                if (s[i] == '\'') {
                    s[i] = '"';
                }
            }
            sprintf(table + strlen(table), " char str_char%d[]=%s \n", registrador, s);
            (yyval.typeNode)->registrador = registrador;
            free((yyvsp[0].sval));
        }
#line 5348 "sintatic.tab.c"
    break;

  case 119: /* list_expr: expr COMMA list_expr  */
#line 1572 "sintatic/sintatic.y"
                             {
                numListArgs = numListArgs + 1;
                if((yyvsp[-2].typeNode)->registrador == -1){
                     Symbol *aux1 = findItem(activeScope, (yyvsp[-2].typeNode)->value);
                     threeAddress = alocar_memoria(threeAddress);
                     if(aux1 != NULL){
                        sprintf(threeAddress + strlen(threeAddress), "param $%d // var %s \n", aux1->registrador, (yyvsp[-2].typeNode)->value);
                     }
                }else{
                        sprintf(threeAddress + strlen(threeAddress), "param $%d // var %s \n", (yyvsp[-2].typeNode)->registrador, (yyvsp[-2].typeNode)->value);
                }
        }
#line 5365 "sintatic.tab.c"
    break;

  case 120: /* list_expr: expr  */
#line 1584 "sintatic/sintatic.y"
               {
                numListArgs = numListArgs + 1;
                if((yyvsp[0].typeNode)->registrador == -1){
                     Symbol *aux1 = findItem(activeScope, (yyvsp[0].typeNode)->value);
                     threeAddress = alocar_memoria(threeAddress);
                     if(aux1 != NULL){
                        sprintf(threeAddress + strlen(threeAddress), "param $%d // var %s \n", aux1->registrador, (yyvsp[0].typeNode)->value);
                     }
                }else{
                        sprintf(threeAddress + strlen(threeAddress), "param $%d // var %s \n", (yyvsp[0].typeNode)->registrador, (yyvsp[0].typeNode)->value);
                }
        }
#line 5382 "sintatic.tab.c"
    break;

  case 121: /* list_expr: error COMMA error  */
#line 1596 "sintatic/sintatic.y"
                            {
             (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);   
        }
#line 5390 "sintatic.tab.c"
    break;

  case 122: /* var: ID  */
#line 1602 "sintatic/sintatic.y"
         {
            (yyval.typeNode) = buildNode((yyvsp[0].sval), findTypeItem(activeScope,(yyvsp[0].sval)));
            free((yyvsp[0].sval));
       }
#line 5399 "sintatic.tab.c"
    break;

  case 123: /* adds_op: ADD_OP  */
#line 1609 "sintatic/sintatic.y"
             {
            (yyval.typeNode) = buildNode((yyvsp[0].sval), 99); 
            free((yyvsp[0].sval)); 
      }
#line 5408 "sintatic.tab.c"
    break;

  case 124: /* mult_ops: MULT_OP  */
#line 1616 "sintatic/sintatic.y"
              {
              (yyval.typeNode) = buildNode((yyvsp[0].sval), 99); 
              free((yyvsp[0].sval));
      }
#line 5417 "sintatic.tab.c"
    break;

  case 125: /* num_tipos: FLOAT  */
#line 1623 "sintatic/sintatic.y"
              {
              (yyval.typeNode) = buildNode((yyvsp[0].sval), 1);
              (yyval.typeNode)->registrador = registrador;
              (yyval.typeNode)->regis_tipo = "$";
              if(isFor == 1){
                tacFor = alocar_memoria(tacFor);
	        sprintf(tacFor + strlen(tacFor), "mov $%d, %s  // num %s\n", registrador, (yyval.typeNode)->value, (yyval.typeNode)->value);
              }else{
                threeAddress = alocar_memoria(threeAddress);
	        sprintf(threeAddress + strlen(threeAddress), "mov $%d, %s  // num %s\n", registrador, (yyval.typeNode)->value, (yyval.typeNode)->value);    
              }
              
              registrador = registrador + 1;
              free((yyvsp[0].sval));
        
        }
#line 5438 "sintatic.tab.c"
    break;

  case 126: /* num_tipos: INT  */
#line 1639 "sintatic/sintatic.y"
              {
              (yyval.typeNode) = buildNode((yyvsp[0].sval), 0);
              (yyval.typeNode)->registrador = registrador;
              (yyval.typeNode)->regis_tipo = "$";

              if(isFor == 1){
                tacFor = alocar_memoria(tacFor);
	        sprintf(tacFor + strlen(tacFor), "mov $%d, %s  // num %s\n", registrador, (yyval.typeNode)->value, (yyval.typeNode)->value); 
              }else{
                threeAddress = alocar_memoria(threeAddress);
	        sprintf(threeAddress + strlen(threeAddress), "mov $%d, %s  // num %s\n", registrador, (yyval.typeNode)->value, (yyval.typeNode)->value);        
              }
              
              registrador = registrador + 1;
              free((yyvsp[0].sval));
        }
#line 5459 "sintatic.tab.c"
    break;

  case 127: /* tipos: TYPE_INT  */
#line 1658 "sintatic/sintatic.y"
                 {
             (yyval.typeNode) = buildNode("TYPE_INT", 0);
        }
#line 5467 "sintatic.tab.c"
    break;

  case 128: /* tipos: TYPE_FLOAT  */
#line 1661 "sintatic/sintatic.y"
                     {
              (yyval.typeNode) = buildNode("TYPE_FLOAT", 1);
        }
#line 5475 "sintatic.tab.c"
    break;

  case 129: /* tipos: TYPE_SET  */
#line 1664 "sintatic/sintatic.y"
                    {
              (yyval.typeNode) = buildNode("TYPE_SET", 2);
        }
#line 5483 "sintatic.tab.c"
    break;

  case 130: /* tipos: TYPE_ELEM  */
#line 1667 "sintatic/sintatic.y"
                    {
             (yyval.typeNode) = buildNode("TYPE_ELEM", 3);
        }
#line 5491 "sintatic.tab.c"
    break;


#line 5495 "sintatic.tab.c"

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

#line 1671 "sintatic/sintatic.y"



int yyerror(const char* errormsg) {
  printf(" ----------------------------- SYNTACTIC ERROR ---------------------------------------------- \n");
  fprintf(stderr, " %s at line:%d, column:%d,\n", errormsg, line, column);
  printf(" ------------------------------------------------------------------------------------ \n");
  printf("\n");
  globalError = globalError+1;
  return 0;
}

int main(int argc, char *argv[]) {
   
     yyin = fopen(argv[1], "r");
     activeScope = buildScope("GLOBAL SCOPE");  
     // insere as funcoes
     threeAddress = alocar_memoria(threeAddress);
     threeAddress = func_write(threeAddress);
     threeAddress = func_writeln(threeAddress);

     yyparse();
     
     showScope(activeScope);
     freeScope(activeScope);
     
     if(globalError == 0 && isMain == 1 ){
        FILE *tac;
        tac = fopen("three_address.tac", "w+");
        fprintf(tac, ".table\n"); // constante de string 
        if (table){
          fprintf(tac, "%s", table);
        } 
        fprintf(tac, ".code\n\n");
        fprintf(tac, "%s", threeAddress);
        fclose(tac);
     }

     free(threeAddress);
     
     // erros
     errorMain(isMain);

     showTree(origin, 0); 
     clearTree(origin);
    
     fclose(yyin);
     yylex_destroy();
     return 0;
}
