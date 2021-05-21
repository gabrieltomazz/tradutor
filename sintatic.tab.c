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
  char* typeManyDeclaration;
  char* threeAddress;
  char* table;
  
  TreeNodes* origin;
  Scope* activeScope;
  Symbol* funcAux;

#line 102 "sintatic.tab.c"

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
  YYSYMBOL_condition_expr = 70,            /* condition_expr  */
  YYSYMBOL_71_11 = 71,                     /* $@11  */
  YYSYMBOL_block_cond = 72,                /* block_cond  */
  YYSYMBOL_73_12 = 73,                     /* $@12  */
  YYSYMBOL_simple_complex_block_stmt = 74, /* simple_complex_block_stmt  */
  YYSYMBOL_return_stmt = 75,               /* return_stmt  */
  YYSYMBOL_set_stmt = 76,                  /* set_stmt  */
  YYSYMBOL_77_13 = 77,                     /* $@13  */
  YYSYMBOL_78_14 = 78,                     /* $@14  */
  YYSYMBOL_expr_stmt = 79,                 /* expr_stmt  */
  YYSYMBOL_expr = 80,                      /* expr  */
  YYSYMBOL_assign = 81,                    /* assign  */
  YYSYMBOL_func_expr = 82,                 /* func_expr  */
  YYSYMBOL_is_set_expr = 83,               /* is_set_expr  */
  YYSYMBOL_func_in_expr = 84,              /* func_in_expr  */
  YYSYMBOL_op_or_expr = 85,                /* op_or_expr  */
  YYSYMBOL_op_and_expr = 86,               /* op_and_expr  */
  YYSYMBOL_logical_expr = 87,              /* logical_expr  */
  YYSYMBOL_arithmetic_expr = 88,           /* arithmetic_expr  */
  YYSYMBOL_mult_expr = 89,                 /* mult_expr  */
  YYSYMBOL_first_term = 90,                /* first_term  */
  YYSYMBOL_term = 91,                      /* term  */
  YYSYMBOL_logical_ops = 92,               /* logical_ops  */
  YYSYMBOL_str_expr = 93,                  /* str_expr  */
  YYSYMBOL_char_expr = 94,                 /* char_expr  */
  YYSYMBOL_list_expr = 95,                 /* list_expr  */
  YYSYMBOL_var = 96,                       /* var  */
  YYSYMBOL_adds_op = 97,                   /* adds_op  */
  YYSYMBOL_mult_ops = 98,                  /* mult_ops  */
  YYSYMBOL_num_tipos = 99,                 /* num_tipos  */
  YYSYMBOL_tipos = 100                     /* tipos  */
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
#define YYLAST   9108

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  129
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  700

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
       0,   104,   104,   112,   119,   120,   124,   125,   129,   129,
     147,   147,   147,   166,   170,   185,   201,   210,   201,   230,
     238,   230,   263,   267,   275,   295,   313,   319,   322,   328,
     332,   336,   337,   338,   339,   340,   341,   342,   343,   347,
     366,   387,   407,   429,   433,   440,   443,   449,   455,   458,
     449,   484,   484,   504,   511,   518,   518,   551,   552,   556,
     559,   590,   594,   601,   601,   623,   623,   649,   650,   654,
     658,   664,   665,   672,   673,   677,   723,   727,   731,   735,
     738,   741,   747,   756,   760,   766,   777,   790,   845,   846,
     850,   903,   907,   996,  1000,  1083,  1087,  1167,  1171,  1172,
    1176,  1190,  1211,  1226,  1229,  1235,  1242,  1243,  1246,  1255,
    1261,  1264,  1267,  1270,  1273,  1276,  1282,  1292,  1309,  1321,
    1333,  1339,  1346,  1353,  1360,  1370,  1382,  1385,  1388,  1391
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
  "iteration_expr", "$@8", "$@9", "$@10", "condition_expr", "$@11",
  "block_cond", "$@12", "simple_complex_block_stmt", "return_stmt",
  "set_stmt", "$@13", "$@14", "expr_stmt", "expr", "assign", "func_expr",
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

#define YYPACT_NINF (-540)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-130)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     656,    83,    16,    33,   132,   168,    10,   650,   726,   776,
     799,   178,   921,  -540,    18,   985,   843,   -24,   947,    36,
      25,   100,    35,     5,   415,    99,   102,   415,  1053,    69,
     144,   213,   173,    48,    69,   183,  4389,  1109,   244,   195,
     226,    99,  1138,   271,   223,  2837,  6467,   161,  6493,   302,
     308,   317,   339,   348,   357,   374,   447,   395,   405,   408,
    1372,  1653,  1353,  4431,   276,  4473,  4515,   425,  4557,  4599,
    4641,  4683,  4725,    19,   463,    21,   466,    45,   123,    34,
    1509,  1246,  6519,  6545,  6571,   379,   447,  6597,    99,    69,
     415,  1410,   484,    69,   467,  1683,   552,   203,   300,   510,
     525,   848,  6623,  6649,   330,   255,  4767,    22,  1063,    77,
     511,  1462,   528,  1106,  4809,  4851,  4893,  4935,   142,   950,
     950,  1929,  2032,  2363,  2459,  2470,  2484,   950,   950,  2536,
     950,  1838,   152,  6675,   137,  1497,   520,  1655,  6701,   156,
     544,   588,   572,   589,   334,   119,   212,   583,   587,   592,
     590,   153,   658,   219,   595,   611,  4977,  5019,  5061,  6727,
    6753,   671,   626,   637,   647,   651,   660,   160,   208,   604,
     101,  1892,  2085,  6779,  6805,   665,    -1,  6831,   321,   677,
     751,  6111,   699,   722,   201,   567,    46,    55,   719,   732,
     743,    70,    71,    90,    91,   788,   790,   797,   811,   820,
     822,   777,  6857,  1869,  6883,  5103,  6151,  1954,   825,   830,
     845,   855,   864,  5145,  5187,  5229,  5271,  5313,  5355,   869,
     675,   871,  1007,  1221,  5397,  1564,  1838,  6191,   890,  6191,
    6231,  6271,  6311,   879,  5439,  5481,  5523,  6191,  6191,  6191,
     860,  5565,  5607,  5649,   588,   880,  6191,  5691,   941,   954,
     956,   963,   704,   372,   878,  5733,  6909,  1274,  6981,  7527,
    7553,  7579,   910,   930,   937,   577,  1972,   932,   257,   272,
     691,  9010,  8073,  7605,  7631,  7657,  7007,   577,  7683,  2574,
     960,  8177,  3011,  8629,  8648,   600,  2194,   518,  9062,   972,
    8667,  8686,  8705,  8203,   600,  8724,   966,   974,   224,   977,
    1000,  1014,  1021,  8125,  8229,  8249,  8269,  1041,  1051,  1062,
     603,  2226,   999,    -6,    23,   239,  9036,  1296,  8289,  8309,
    8329,  8151,   603,  8349,  6929,  7033,  7059,  7085,  1076,  1092,
    1095,   618,  2268,   393,   438,   515,   279,  8984,  7709,  7111,
    7137,  7163,  6955,   618,  7189,    25,  1018,  1056,  1098,   192,
    2584,  1130,   443,  1145,  1154,  1173,  1179,  1453,  5775,  1607,
    1795,  1181,  2135,  2299,  2877,  3057,  3115,   108,  1192,  1203,
      99,  5817,  5859,  5901,  1184,  2634,  2665,  2674,  7735,  7761,
    7787,   707,  1218,  2687,  2687,  2687,  2687,  2687,   340,  7813,
    8743,  8762,  8781,   769,  1241,  2584,  2584,  2584,  2584,   724,
    8800,  7839,  2726,  2743,  2768,  1258,  2957,  2989,  3004,  8369,
    8389,  8409,   792,  1260,   248,  3046,  3046,  3046,  3046,  3046,
     755,  8429,  3105,  3199,  6351,  7215,  7241,  7267,   805,  1268,
     470,  6360,  6360,  6360,  6360,  6360,   816,  7293,    99,  5943,
    8819,   295,  1204,  1284,  1299,   341,   354,  1302,  1136,  7319,
    3157,  2402,   552,   351,   370,   448,  3210,   124,  3255,  1305,
    1332,  3297,  3339,  3381,  3423,   893,  5985,  1326,  2420,   906,
     377,   989,   549,  1031,   631,  7865,  7891,  1316,   775,  9023,
    8099,  7917,  7943,  1267,  7969,  1304,  8838,  8857,  9075,  8971,
    8876,  8895,  1404,  8914,  1344,  1078,   838,  1141,   846,  1168,
     935,  8449,  1210,   975,  1231,  1047,  1238,  1049,  8469,  8489,
     733,  1356,  1365,  1367,   756,   770,   899,  9049,  8609,  8509,
    8529,  1449,  8549,  1370,  1245,  1113,  1251,  1139,  1288,  1158,
    7345,  7371,   612,  1373,  1377,  1380,   795,   801,  1386,   738,
    8997,  7995,  7397,  7423,  1466,  7449,  1425,   173,  6369,  6382,
    6391,  1313,  1432,   588,  1450,  1455,  1441,  1451,  3465,  3507,
    3549,  3591,  1348,  1456,  1480,  1493,    25,  1335,  6027,  1502,
    1508,  1510,  1512,  1513,  1514,  1518,  8021,  8047,  8933,  8952,
     285,   297,   323,   417,   432,   434,  1522,  1523,  1524,  1526,
    1533,  1534,  6400,  6413,  6422,  8569,  8589,   479,   486,   493,
     501,   558,   574,  6431,  6444,  6453,  7475,  7501,  1535,  1361,
    1160,  1388,  1177,  1394,  1199,  1495,  6111,  1536,   331,   681,
    1545,  1546,  1548,  1549,  1550,  1555,    99,  3633,  1422,  1213,
    1473,  1233,  1483,  1259,  1486,  1303,  1496,  1317,  1501,  1333,
    6069,  1352,  1357,  1362,  1407,  1424,  1457,  3675,  6151,  1954,
    1553,  1554,  1556,  1561,  1562,  3717,  3759,  3801,  3843,  3885,
    3927,   173,   922,  1066,  1068,  1118,  1134,  1162,   874,   933,
     997,  1016,  1019,  1034,  3969,  4011,  1838,  6151,  1551,  6151,
    6231,  6271,  1570,  6311,  1576,  4053,  4095,  4137,  6151,  6151,
    4179,  6151,   860,  4221,  4263,  4305,   588,  1574,  6151,  4347
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
    -540,  -540,  -540,  1611,     4,  -132,  -339,  -539,   -40,  -540,
    -540,  -540,  -540,  -540,   -10,    53,   -62,   -22,  -197,  -193,
    -175,  1167,   979,   938,  -170,  1013,   983,   955,    30,  -113,
    -100,   953,   958,   -77,  1725,  -136,    57,   -30,  2533,  2588,
    2327,  2152,  1826,  1663,  1321,   509,  -259,  1180,  1182,  -187,
       8,   744,  -258,  1086,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,    63,    22,    25,    40,    32,    10,
      27,    43,    24,    38,    30,   222,    64,   223,    66,    67,
      68,   141,   226,   244,    69,   206,   224,   239,   225,    70,
      71,   237,   238,    72,    73,    74,    75,    76,    77,   146,
     287,   288,   289,   290,   291,   292,   127,   165,   166,   179,
     293,   294,   130,   295,    88
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,    92,   346,   112,     9,   182,   438,    11,   608,   360,
      13,     9,   385,   361,    65,   387,   221,    35,    19,    18,
     114,  -126,   -74,   157,    31,   -89,   -89,    31,  -126,   396,
     -10,   362,   398,    33,   -89,   -88,   363,    23,  -127,    39,
     201,   351,   202,    65,    85,  -127,   -89,   -79,    29,    33,
     -19,   -19,   -19,   -19,   414,   415,   -76,   417,    12,   115,
     419,   -74,   158,   -73,   103,   -88,   -88,   120,   108,   276,
     368,   -80,   -77,    85,   -88,    28,   -89,   -89,   433,   -19,
     136,   435,    37,    -5,    -5,   -89,   -79,    42,   -15,    41,
      31,   -81,   -78,   364,   103,   -76,   134,    -5,    -5,    -5,
      -5,    26,   -87,   276,   252,   143,   365,   149,   245,   461,
     -80,   -77,   155,    36,   -16,   -16,   -16,   -16,   267,   297,
     159,   276,   682,    12,   -73,   559,   168,   108,   108,   366,
     -81,   -78,   -87,   -87,   120,   108,   108,  -129,   108,   321,
     342,   -87,   135,   -16,  -129,    34,   137,   298,   462,   183,
     -89,   -89,   267,   176,   118,   119,   148,   324,   325,   326,
      47,   -86,   187,   -73,   560,   327,  -122,  -122,  -122,   299,
     267,   300,   301,  -128,  -122,   167,   369,    -8,   345,   328,
    -128,   329,   330,    16,   -89,   -89,   331,   -20,   312,   333,
      17,   -86,   -86,   212,   332,   177,   192,   441,   297,   180,
     -86,   485,   208,  -122,   142,   373,   370,   373,   280,   -85,
     359,   342,   494,   -11,    85,   373,   373,   373,   253,   442,
     385,   443,   444,   387,   373,  -121,   -17,   626,   262,   396,
     263,   264,   398,   523,   321,    85,    90,    85,   -25,   -85,
     -85,   209,   211,   349,   350,    85,    85,    85,   -85,   546,
     -89,   -89,   374,   510,    85,  -121,  -121,   234,   417,   236,
     333,   419,   194,   255,  -121,    94,    91,   241,   242,   243,
     -88,   -88,   416,   380,   276,   511,   247,   512,   513,   -88,
     372,   433,   372,   312,   435,   380,   -79,    89,   -89,   -89,
     372,   372,   372,   392,   276,   156,   459,    94,   -76,   372,
     -89,   144,   392,   349,   383,   281,   282,   283,    47,   467,
     -88,   -88,   432,   284,    93,   -73,   -79,   -79,   411,   276,
     -88,   111,   -88,   267,   -80,   -79,  -121,  -121,   -76,   -76,
     411,   154,   650,   567,   285,   296,    65,   -76,  -121,   427,
     276,   483,   286,   267,    95,   324,   325,   326,    47,    65,
      96,   427,   554,   327,   -80,   -80,   280,   446,   262,    97,
     263,   264,   203,   -80,  -119,   108,    85,   328,   267,   329,
     330,   556,   -86,   -86,   331,   296,   348,   186,   465,    85,
    -105,    98,   332,   484,   -86,   -85,   -85,  -105,  -105,   267,
      99,   276,   276,   276,   276,   276,   342,   -85,   547,   100,
    -105,  -105,  -105,  -105,  -105,  -105,   445,   342,   -89,   -89,
    -105,  -105,  -105,  -121,   131,  -121,   101,   617,   -77,  -105,
     571,   132,   515,   321,   321,   321,   321,   321,   342,   248,
     249,   250,   251,   -81,   -74,   -78,   -74,   -45,   537,   342,
     342,   342,   342,   342,   342,   333,    33,   -46,   -77,   -77,
     104,   360,   256,    45,    46,   361,   333,   -77,   -26,   276,
      48,   555,   557,   -81,   -81,   -78,   -78,   113,   276,   -89,
     -89,   514,   -81,   362,   -78,   532,   276,   333,   363,   -89,
     360,   -89,   360,   450,   361,    94,   361,   536,   558,    61,
      94,   360,   360,   333,   360,   361,   361,   533,   361,   534,
     535,   360,   362,   116,   362,   361,   117,   363,   267,   363,
     138,   147,   368,   362,   362,   296,   362,   267,   363,   363,
     -79,   363,   -79,   362,   -14,   267,   150,   -76,   363,   -76,
     281,   282,   283,    47,   -80,   364,   -80,   262,   284,   263,
     264,   368,   -77,   368,   -77,    84,   430,   431,   365,   -88,
     -88,   395,   368,   368,   160,   368,   -73,   -47,   -73,   285,
     697,   183,   368,   -24,   364,   102,   364,   286,   210,    84,
     275,   366,   296,   -29,    84,   364,   364,   365,   364,   365,
     -89,   -89,   378,   259,   260,   364,   661,   181,   365,   365,
     261,   365,   573,   347,   262,   133,   263,   264,   365,   -81,
     366,   -81,   366,   184,   275,   390,   282,   283,   409,   304,
     305,   366,   366,   284,   366,   -78,   306,   -78,   369,   266,
     185,   366,   275,   425,   325,   326,   188,   654,    84,    84,
     189,   327,   348,   191,    33,   190,    84,    84,   195,    84,
     320,   341,   286,  -121,  -121,   311,    94,   369,   370,   369,
      -2,    14,   359,  -121,   196,  -121,    85,     1,   369,   369,
     332,   369,   -89,   -89,     2,     3,     4,     5,   369,  -116,
       2,     3,     4,     5,   575,   651,   653,   370,   675,   370,
    -117,   359,   652,   359,   321,    85,   296,    85,   370,   370,
     198,   370,   359,   359,   199,   359,    85,    85,   370,    85,
     348,   193,   359,   200,   374,   -75,    85,   685,   262,   687,
     263,   264,   341,   297,   197,    84,   201,   351,   693,   694,
     204,   695,   -88,   -88,   384,   492,    -4,    -4,   699,   324,
     325,   326,    47,   312,   -88,   320,    84,   327,    84,   207,
      -4,    -4,    -4,    -4,  -121,  -121,    84,    84,    84,   297,
     475,   328,   205,   329,   330,    84,   521,   131,   331,   -84,
     324,   325,   326,    47,  -121,  -121,   332,   493,   327,   -87,
     -87,   432,   -83,  -121,   379,   275,    -7,    -7,   219,   -87,
      86,   -87,   328,   -82,   329,   330,   389,   -86,   -86,   331,
      -7,    -7,    -7,    -7,   391,   275,   -86,   332,   522,    -6,
      -6,   -85,   -85,   400,    86,   277,   -87,   -87,   384,    86,
     -85,   297,   486,    -6,    -6,    -6,    -6,   544,   -87,   410,
     275,   324,   325,   326,    47,   128,   -86,   -86,   213,   327,
     214,   421,   -85,   -85,   297,   508,   -86,   215,   -86,   277,
     426,   275,   -85,   328,   -85,   329,   330,   297,   530,   152,
     331,   216,   437,   281,   282,   283,    47,   277,   332,   545,
     217,   284,   218,    86,    86,   -49,    84,    84,   227,   -89,
     -89,    86,    86,   228,    86,   322,   343,   -89,   -89,  -121,
      84,   581,   285,  -121,  -121,  -121,  -121,  -121,   229,   583,
     286,   235,   275,   275,   275,   275,   275,   341,   230,  -121,
    -121,  -121,  -121,  -121,  -121,   -79,   -79,   231,   341,  -121,
    -121,  -121,  -120,  -121,  -118,   -79,   128,   -79,  -121,   240,
    -121,   -13,   -13,   246,   320,   320,   320,   320,   320,   341,
     -87,   -87,   416,    -8,   566,   -13,   -13,   -13,   -13,   -87,
     341,   341,   341,   341,   341,   341,  -126,   343,   348,   570,
      86,   169,   375,   -79,   -79,   257,    45,    46,    47,  -127,
     275,  -129,   -79,    48,   -76,   -76,   -89,   -89,  -128,   275,
     322,    86,   376,    86,   -76,   -74,   -76,   275,   585,   377,
     279,    86,    86,    86,    56,    -3,    -3,    -8,    20,    21,
      86,  -121,    61,   -93,   -93,   -93,   -93,   -93,   -93,    -3,
      -3,    -3,    -3,   -93,   -93,   -93,   -89,   -89,   -58,  -121,
     277,   -58,   -58,   -58,   -58,   -58,   386,   401,   587,   402,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -80,   -80,
     277,   348,   572,   397,   -58,   -58,   -58,   -58,   -80,   -74,
     -80,   -58,   403,   -58,   -58,   -58,   -58,   -77,   -77,   -58,
     -81,   -81,   -58,    -9,    -9,   277,   404,   -77,   439,   -77,
     -81,   418,   -81,   405,  -105,   -78,   -78,    -9,    -9,    -9,
      -9,  -105,  -105,   348,   574,   -78,   277,   -78,   -89,   -89,
     -89,   -89,   434,   406,  -105,  -105,  -105,  -105,  -105,  -105,
     589,  -121,   591,   407,  -105,  -105,  -105,   -76,   -76,   -80,
     -80,    86,    86,  -105,   408,   132,   -76,   161,   -80,   -23,
     -23,   258,   259,   260,    47,    86,   162,   163,   422,   261,
     348,   580,    87,   -23,   -23,   -23,   -23,   277,   277,   277,
     277,   277,   343,   262,   423,   263,   264,   424,   -22,   -22,
     265,   440,    87,   343,   -89,   -89,    87,   278,   266,   -77,
     -77,    87,   -22,   -22,   -22,   -22,   598,    84,   -77,   322,
     322,   322,   322,   322,   343,   -81,   -81,   -87,   -87,   395,
     -89,   -89,    87,   449,   -81,   343,   343,   343,   343,   343,
     343,   278,   600,   348,   582,   320,    84,   451,    84,   -89,
     -89,   -89,   -89,   -78,   -78,   277,   452,    84,    84,   278,
      84,   602,   -78,   642,   277,    87,    87,    84,   -89,   -89,
     348,   584,   277,    87,    87,   453,    87,   323,   344,   468,
     644,   454,   -57,   460,   386,   -57,   -57,   -57,   -57,   -57,
     -89,   -89,   463,   397,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   646,   464,   -89,   -89,   548,   -93,   -57,   -57,
     -57,   -57,   348,   586,   279,   -57,   663,   -57,   -57,   -57,
     -57,   476,   418,   -57,   -89,   -89,   -57,   -93,   -93,   -93,
     -93,   -93,   -93,   348,   588,  -121,   665,   -93,   -93,   -93,
     348,   590,  -121,  -121,   487,   434,   -93,   348,   597,   344,
     -89,   -89,    87,   348,   599,  -121,  -121,  -121,  -121,  -121,
    -121,   501,   667,   509,   279,  -121,  -121,  -121,   201,   351,
     576,   531,   323,    87,  -121,    87,  -121,   -93,   -93,   -93,
     -93,   -93,   -93,    87,    87,    87,   549,   -93,   -93,   -93,
     348,   601,    87,   562,   -89,   -89,   -93,   258,   259,   260,
      47,   550,   162,   163,   348,   261,   669,   577,   -89,   -89,
     561,   278,   278,   -27,   -27,   297,   615,    83,   297,   262,
     671,   263,   264,   278,   -89,   -89,   265,   -27,   -27,   -27,
     -27,   568,   278,   105,   266,   627,   673,   257,    45,    46,
      47,    83,   274,   -79,   -79,    48,    83,   579,   -76,   -76,
     297,   622,    86,   -80,   -80,   -79,   323,   278,   592,    52,
     -76,    54,    55,   348,   641,   -80,    56,   593,   323,   594,
     -12,   -12,   106,   596,    61,   603,   274,   344,   278,   604,
     322,    86,   605,    86,   -12,   -12,   -12,   -12,   351,   344,
     348,   643,    86,    86,   274,    86,   348,   645,   -77,   -77,
      83,    83,    86,    87,    87,   201,   351,   578,    83,    83,
     -77,   174,   319,   340,   455,   -81,   -81,    87,   257,    45,
      46,    47,   -28,   -28,   348,   662,    48,   -81,   607,   278,
     278,   278,   278,   278,   344,   616,   -28,   -28,   -28,   -28,
      52,   618,    54,    55,   620,   344,   619,    56,   -78,   -78,
     201,   351,   595,   456,   621,    61,   647,   -21,   -21,   623,
     -78,   323,   323,   323,   323,   323,   344,   201,   351,   606,
     -91,   -21,   -21,   -21,   -21,   348,   664,   344,   344,   344,
     344,   344,   344,   624,   340,   348,   666,    83,   348,   668,
     121,   122,   123,   124,   125,   126,   625,   278,   348,   670,
     -91,   -91,   -91,   348,   672,   -75,   278,   319,    83,   -91,
      83,   -79,   686,   -76,   278,   -80,   -77,   -81,    83,    83,
      83,   -78,   -79,   -76,   -80,   -54,   -77,    83,   232,   -54,
     -54,   -54,   -54,   -81,   -78,   640,   649,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   655,   656,   274,   657,   658,
     659,   -54,   -54,   -54,   -54,   660,   677,   678,   -54,   679,
     -54,   -54,   -54,   -54,   680,   681,   -54,   274,   -37,   -54,
     690,   -37,   -37,   -37,   -37,   -37,   692,   698,    15,   553,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   676,   648,
     696,   674,   274,   688,   -37,   -37,   -37,   -37,   691,   689,
     564,   -37,   565,   -37,   -37,   -37,   -37,     0,     0,   -37,
       0,     0,   -37,   274,   109,   -18,   -18,     0,   258,   259,
     260,    47,     0,     0,     0,     0,   261,     0,     0,   -18,
     -18,   -18,   -18,     0,     0,     0,     0,     0,    83,    83,
     262,     0,   263,   264,   139,     0,     0,   265,   258,   259,
     260,    47,    83,     0,     0,   266,   261,     0,     0,    82,
       0,     0,     0,     0,   274,   274,   274,   274,   482,   340,
     262,     0,   263,   264,     0,     0,     0,   265,     0,   491,
     340,     0,     0,    82,   273,   266,     0,     0,    82,     0,
       0,     0,     0,     0,    87,     0,   319,   319,   319,   319,
     520,   340,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   340,   340,   340,   340,   543,   340,   273,     0,
       0,     0,   323,    87,     0,    87,     0,     0,     0,     0,
       0,     0,   274,     0,    87,    87,   273,    87,     0,     0,
       0,   274,    82,    82,    87,   107,   110,     0,     0,   274,
      82,   173,     0,     0,   318,   339,   -34,     0,     0,   -34,
     -34,   -34,   -34,   -34,     0,     0,     0,     0,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,     0,     0,     0,     0,
     140,     0,   -34,   -34,   -34,   -34,     0,     0,     0,   -34,
       0,   -34,   -34,   -34,   -34,     0,     0,   -34,   164,   302,
     -34,     0,     0,   303,   304,   305,    47,     0,     0,     0,
       0,   306,     0,     0,     0,     0,   175,   178,     0,     0,
       0,     0,    81,     0,     0,   307,   339,   308,   309,    82,
     220,     0,   310,     0,   324,   325,   326,    47,     0,     0,
     311,     0,   327,     0,     0,     0,    81,   272,     0,   318,
      82,    81,    82,   -90,     0,     0,   328,     0,   329,   330,
      82,    82,    82,   331,     0,     0,     0,     0,     0,    82,
       0,   332,     0,   121,   122,   123,   124,   125,   126,     0,
       0,   272,     0,   -90,   -90,   -90,     0,     0,   178,   273,
    -112,   367,   -90,     0,  -112,  -112,  -112,  -112,     0,   272,
       0,     0,  -112,     0,     0,    81,    81,     0,     0,   273,
       0,   233,     0,   172,     0,   -48,     0,   317,   338,   -48,
     -48,   -48,   -48,  -112,     0,     0,     0,   -48,     0,    83,
       0,  -112,     0,   381,   273,     0,     0,   258,   259,   260,
      47,   -48,     0,   -48,   -48,   261,     0,     0,   -48,     0,
       0,   382,     0,     0,     0,   273,   -48,   319,    83,   262,
      83,   263,   264,     0,     0,     0,   265,     0,     0,    83,
      83,   394,    83,     0,   266,     0,     0,     0,     0,    83,
      82,    82,     0,     0,     0,     0,     0,     0,     0,   338,
       0,     0,    81,  -110,    82,     0,   413,  -110,  -110,  -110,
    -110,     0,     0,     0,     0,  -110,   273,   273,   273,   481,
       0,   339,   317,    81,     0,    81,     0,   429,     0,     0,
     490,     0,   339,    81,    81,    81,  -110,     0,     0,     0,
       0,     0,    81,     0,  -110,     0,     0,     0,   318,   318,
     318,   519,   457,   339,     0,     0,   -92,     0,     0,     0,
       0,     0,   272,   279,   339,   339,   339,   542,     0,   339,
       0,     0,     0,     0,     0,     0,   -92,   -92,   -92,   -92,
     -92,   -92,   272,   178,   273,     0,   -92,   -92,   -92,     0,
       0,     0,     0,   273,   178,   -92,     0,     0,     0,     0,
       0,   273,     0,     0,     0,     0,   -31,   272,     0,   -31,
     -31,   -31,   -31,   -31,     0,   178,     0,     0,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,     0,     0,   272,     0,
       0,   178,   -31,   -31,   -31,   -31,     0,     0,     0,   -31,
       0,   -31,   -31,   -31,   -31,     0,   552,   -31,     0,     0,
     -31,     0,     0,    81,    81,   563,     0,     0,    80,     0,
       0,     0,     0,   569,     0,   393,     0,    81,     0,   258,
     259,   260,    47,     0,     0,     0,     0,   261,     0,   272,
     272,   480,    80,   271,   338,     0,     0,    80,     0,     0,
       0,   262,   489,   263,   264,   338,     0,   412,   265,     0,
       0,   258,   259,   260,    47,     0,   266,     0,     0,   261,
       0,   317,   317,   518,     0,     0,   338,   271,     0,     0,
       0,     0,     0,   262,     0,   263,   264,   338,   338,   541,
     265,     0,   338,     0,     0,   271,     0,     0,   266,   428,
       0,    80,   171,   258,   259,   260,    47,   272,     0,     0,
       0,   261,     0,   316,   337,     0,   272,     0,     0,     0,
       0,     0,     0,     0,   272,   262,     0,   263,   264,     0,
     -32,     0,   265,   -32,   -32,   -32,   -32,   -32,     0,     0,
     266,    82,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
       0,     0,     0,     0,     0,     0,   -32,   -32,   -32,   -32,
       0,     0,     0,   -32,     0,   -32,   -32,   -32,   -32,   318,
      82,   -32,    82,     0,   -32,     0,     0,     0,     0,     0,
       0,    82,    82,     0,    82,   337,     0,     0,    80,     0,
       0,    82,     0,    79,  -111,     0,     0,     0,  -111,  -111,
    -111,  -111,     0,   367,     0,     0,  -111,     0,   316,    80,
       0,    80,     0,     0,     0,     0,     0,    79,   270,    80,
      80,    80,    79,     0,     0,     0,     0,  -111,    80,     0,
       0,   684,   367,   551,   367,  -111,     0,   258,   259,   260,
      47,     0,     0,   367,   367,   261,   367,     0,   271,     0,
       0,   477,   270,   367,     0,   258,   259,   260,    47,   262,
       0,   263,   264,   261,     0,     0,   265,     0,   271,     0,
     270,     0,     0,     0,   266,     0,   170,   262,     0,   263,
     264,     0,     0,     0,   265,     0,     0,     0,   315,   336,
    -113,     0,   266,   271,  -113,  -113,  -113,  -113,     0,     0,
       0,  -114,  -113,     0,    81,  -114,  -114,  -114,  -114,     0,
       0,     0,     0,  -114,   271,  -115,     0,     0,     0,  -115,
    -115,  -115,  -115,  -113,     0,     0,     0,  -115,     0,     0,
       0,  -113,   317,    81,  -114,    81,     0,     0,     0,    80,
      80,     0,  -114,     0,    81,    81,     0,    81,  -115,     0,
       0,     0,     0,    80,    81,     0,  -115,     0,     0,     0,
     336,     0,     0,    79,     0,   271,   479,  -123,     0,     0,
     337,  -123,  -123,  -123,  -123,     0,     0,   488,     0,  -123,
       0,   337,     0,   315,    79,     0,    79,     0,     0,     0,
       0,     0,     0,     0,    79,    79,    79,   316,   517,     0,
    -123,     0,   337,    79,     0,  -122,     0,     0,  -123,  -122,
    -122,  -122,  -122,   337,   540,   447,     0,  -122,   337,   281,
     282,   283,    47,   270,   268,     0,     0,   284,     0,     0,
       0,     0,     0,   271,     0,     0,     0,     0,  -122,     0,
       0,     0,   271,   270,     0,     0,  -122,     0,   285,     0,
     271,     0,     0,     0,    78,     0,   286,     0,   268,     0,
       0,   145,     0,   151,   153,   469,     0,     0,   270,   281,
     282,   283,    47,     0,     0,     0,   268,   284,    78,   269,
       0,     0,     0,    78,     0,     0,     0,     0,     0,   270,
       0,     0,     0,     0,   313,   334,   471,     0,   285,     0,
     281,   282,   283,    47,     0,   473,   286,   448,   284,   281,
     282,   283,    47,   269,    79,    79,     0,   284,   477,     0,
       0,     0,   258,   259,   260,    47,     0,     0,    79,   285,
     261,   269,     0,     0,     0,     0,     0,   286,   285,     0,
     478,     0,     0,     0,     0,   336,   286,     0,     0,   314,
     335,   265,     0,     0,     0,     0,   336,   495,     0,   266,
       0,   281,   282,   283,    47,     0,   334,     0,     0,   284,
       0,     0,   516,     0,   497,     0,     0,   336,   281,   282,
     283,    47,     0,     0,     0,     0,   284,     0,   539,   313,
     285,     0,     0,   336,     0,     0,     0,     0,   286,   499,
       0,     0,     0,   281,   282,   283,    47,   285,   270,     0,
       0,   284,     0,     0,     0,   286,     0,   270,     0,     0,
       0,   335,     0,     0,    78,   270,     0,     0,     0,   268,
      80,     0,   285,     0,     0,     0,     0,     0,     0,     0,
     286,     0,     0,     0,   314,    78,     0,    78,     0,   268,
       0,     0,     0,     0,     0,    78,    78,    78,   316,    80,
       0,    80,     0,     0,    78,     0,     0,     0,  -125,     0,
      80,    80,     0,    80,   268,  -125,  -125,     0,     0,     0,
      80,     0,     0,     0,   269,     0,     0,     0,  -125,  -125,
    -125,  -125,  -125,  -125,     0,   268,     0,     0,  -125,  -125,
    -125,     0,     0,     0,   269,     0,     0,  -125,   -33,     0,
       0,   -33,   -33,   -33,   -33,   -33,     0,     0,     0,     0,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,   269,
       0,     0,     0,     0,   -33,   -33,   -33,   -33,   470,   472,
     474,   -33,     0,   -33,   -33,   -33,   -33,     0,     0,   -33,
     269,   334,   -33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   334,     0,     0,   496,   498,   500,     0,   503,
     505,   507,     0,     0,     0,    78,    78,     0,     0,     0,
       0,     0,     0,   334,     0,   525,   527,   529,   502,    78,
       0,     0,   281,   282,   283,    47,     0,     0,     0,   334,
     284,     0,     0,     0,     0,    79,   335,     0,     0,     0,
       0,     0,     0,     0,   268,     0,     0,   335,     0,     0,
     504,   285,     0,   268,   281,   282,   283,    47,     0,   286,
       0,   268,   284,   315,    79,   506,    79,     0,   335,   281,
     282,   283,    47,     0,     0,    79,    79,   284,    79,  -125,
    -125,     0,     0,   285,   335,    79,     0,     0,     0,     0,
       0,   286,  -125,  -125,  -125,  -125,  -125,  -125,   285,   269,
       0,     0,  -125,  -125,  -125,     0,   286,   302,   269,     0,
       0,   303,   304,   305,    47,     0,   269,     0,   -36,   306,
       0,   -36,   -36,   -36,   -36,   -36,     0,     0,     0,     0,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,     0,
     310,   610,   612,   614,   -36,   -36,   -36,   -36,   311,     0,
       0,   -36,     0,   -36,   -36,   -36,   -36,     0,     0,   -36,
       0,     0,   -36,     0,     0,     0,   524,     0,     0,     0,
     281,   282,   283,    47,     0,     0,   -35,     0,   284,   -35,
     -35,   -35,   -35,   -35,     0,   629,   631,   633,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   635,   637,   639,   285,
       0,     0,   -35,   -35,   -35,   -35,     0,   286,     0,   -35,
       0,   -35,   -35,   -35,   -35,     0,     0,   -35,   -13,     0,
     -35,   -13,   -13,   -13,   -13,   -13,     0,     0,     0,     0,
     -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,     0,     0,
       0,     0,     0,     0,   -13,   -13,   -13,   -13,     0,     0,
       0,   -13,     0,   -13,   -13,   -13,   -13,     0,     0,   -13,
     526,     0,   -13,     0,   281,   282,   283,    47,     0,   313,
       0,   -59,   284,     0,   -59,   -59,   -59,   -59,   -59,     0,
       0,     0,     0,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,     0,     0,   285,     0,     0,    78,   -59,   -59,   -59,
     -59,   286,     0,     0,   -59,     0,   -59,   -59,   -59,   -59,
       0,     0,   -59,     0,     0,   -59,   -27,     0,     0,   -27,
     -27,   -27,   -27,   -27,   314,    78,     0,    78,   -27,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,    78,    78,     0,    78,
       0,     0,   -27,   -27,   -27,   -27,    78,     0,     0,   -27,
       0,   -27,   -27,   -27,   -27,     0,     0,   -27,   -72,     0,
     -27,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,
       0,     0,     0,     0,   -72,   -72,   -72,   -72,     0,     0,
       0,   -72,     0,   -72,   -72,   -72,   -72,     0,     0,   -72,
     -71,     0,   -72,   -71,   -71,   -71,   -71,   -71,     0,     0,
       0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
       0,     0,     0,     0,     0,     0,   -71,   -71,   -71,   -71,
       0,     0,     0,   -71,     0,   -71,   -71,   -71,   -71,     0,
       0,   -71,   -38,     0,   -71,   -38,   -38,   -38,   -38,   -38,
       0,     0,     0,     0,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,     0,     0,     0,     0,     0,     0,   -38,   -38,
     -38,   -38,     0,     0,     0,   -38,     0,   -38,   -38,   -38,
     -38,     0,     0,   -38,   -67,     0,   -38,   -67,   -67,   -67,
     -67,   -67,     0,     0,     0,     0,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,     0,     0,     0,     0,     0,     0,
     -67,   -67,   -67,   -67,     0,     0,     0,   -67,     0,   -67,
     -67,   -67,   -67,     0,     0,   -67,   -61,     0,   -67,   -61,
     -61,   -61,   -61,   -61,     0,     0,     0,     0,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,     0,     0,     0,     0,
       0,     0,   -61,   -61,   -61,   -61,     0,     0,     0,   -61,
       0,   -61,   -61,   -61,   -61,     0,     0,   -61,   -62,     0,
     -61,   -62,   -62,   -62,   -62,   -62,     0,     0,     0,     0,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,
       0,     0,     0,     0,   -62,   -62,   -62,   -62,     0,     0,
       0,   -62,     0,   -62,   -62,   -62,   -62,     0,     0,   -62,
     -60,     0,   -62,   -60,   -60,   -60,   -60,   -60,     0,     0,
       0,     0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
       0,     0,     0,     0,     0,     0,   -60,   -60,   -60,   -60,
       0,     0,     0,   -60,     0,   -60,   -60,   -60,   -60,     0,
       0,   -60,   -28,     0,   -60,   -28,   -28,   -28,   -28,   -28,
       0,     0,     0,     0,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,     0,     0,     0,     0,     0,     0,   -28,   -28,
     -28,   -28,     0,     0,     0,   -28,     0,   -28,   -28,   -28,
     -28,     0,     0,   -28,    -9,     0,   -28,    -9,    -9,    -9,
      -9,    -9,     0,     0,     0,     0,    -9,    -9,    -9,    -9,
      -9,    -9,    -9,    -9,     0,     0,     0,     0,     0,     0,
      -9,    -9,    -9,    -9,     0,     0,     0,    -9,     0,    -9,
      -9,    -9,    -9,     0,     0,    -9,   -53,     0,    -9,   -53,
     -53,   -53,   -53,   -53,     0,     0,     0,     0,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,     0,     0,     0,     0,
       0,     0,   -53,   -53,   -53,   -53,     0,     0,     0,   -53,
       0,   -53,   -53,   -53,   -53,     0,     0,   -53,   -44,     0,
     -53,   -44,   -44,   -44,   -44,   -44,     0,     0,     0,     0,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,     0,
       0,     0,     0,     0,   -44,   -44,   -44,   -44,     0,     0,
       0,   -44,     0,   -44,   -44,   -44,   -44,     0,     0,   -44,
     -42,     0,   -44,   -42,   -42,   -42,   -42,   -42,     0,     0,
       0,     0,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
       0,     0,     0,     0,     0,     0,   -42,   -42,   -42,   -42,
       0,     0,     0,   -42,     0,   -42,   -42,   -42,   -42,     0,
       0,   -42,   -43,     0,   -42,   -43,   -43,   -43,   -43,   -43,
       0,     0,     0,     0,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,     0,     0,     0,     0,     0,     0,   -43,   -43,
     -43,   -43,     0,     0,     0,   -43,     0,   -43,   -43,   -43,
     -43,     0,     0,   -43,   -40,     0,   -43,   -40,   -40,   -40,
     -40,   -40,     0,     0,     0,     0,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,     0,     0,     0,     0,     0,     0,
     -40,   -40,   -40,   -40,     0,     0,     0,   -40,     0,   -40,
     -40,   -40,   -40,     0,     0,   -40,   -39,     0,   -40,   -39,
     -39,   -39,   -39,   -39,     0,     0,     0,     0,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,     0,     0,     0,     0,
       0,     0,   -39,   -39,   -39,   -39,     0,     0,     0,   -39,
       0,   -39,   -39,   -39,   -39,     0,     0,   -39,   -41,     0,
     -39,   -41,   -41,   -41,   -41,   -41,     0,     0,     0,     0,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,     0,     0,
       0,     0,     0,     0,   -41,   -41,   -41,   -41,     0,     0,
       0,   -41,     0,   -41,   -41,   -41,   -41,     0,     0,   -41,
     -52,     0,   -41,   -52,   -52,   -52,   -52,   -52,     0,     0,
       0,     0,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
       0,     0,     0,     0,     0,     0,   -52,   -52,   -52,   -52,
       0,     0,     0,   -52,     0,   -52,   -52,   -52,   -52,     0,
       0,   -52,   -54,     0,   -52,   683,   -54,   -54,   -54,   -54,
       0,     0,     0,     0,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,     0,     0,     0,     0,     0,     0,   -54,   -54,
     -54,   -54,     0,     0,     0,   -54,     0,   -54,   -54,   -54,
     -54,     0,     0,   -54,   -68,     0,   -54,   -68,   -68,   -68,
     -68,   -68,     0,     0,     0,     0,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,     0,     0,     0,     0,     0,     0,
     -68,   -68,   -68,   -68,     0,     0,     0,   -68,     0,   -68,
     -68,   -68,   -68,     0,     0,   -68,   -69,     0,   -68,   -69,
     -69,   -69,   -69,   -69,     0,     0,     0,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,     0,
       0,     0,   -69,   -69,   -69,   -69,     0,     0,     0,   -69,
       0,   -69,   -69,   -69,   -69,     0,     0,   -69,   -70,     0,
     -69,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,
       0,     0,     0,     0,   -70,   -70,   -70,   -70,     0,     0,
       0,   -70,     0,   -70,   -70,   -70,   -70,     0,     0,   -70,
     -12,     0,   -70,   -12,   -12,   -12,   -12,   -12,     0,     0,
       0,     0,   -12,   -12,   -12,   -12,   -12,   -12,   -12,   -12,
       0,     0,     0,     0,     0,     0,   -12,   -12,   -12,   -12,
       0,     0,     0,   -12,     0,   -12,   -12,   -12,   -12,     0,
       0,   -12,   -64,     0,   -12,   -64,   -64,   -64,   -64,   -64,
       0,     0,     0,     0,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,     0,     0,     0,     0,     0,     0,   -64,   -64,
     -64,   -64,     0,     0,     0,   -64,     0,   -64,   -64,   -64,
     -64,     0,     0,   -64,   -66,     0,   -64,   -66,   -66,   -66,
     -66,   -66,     0,     0,     0,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,     0,     0,     0,     0,     0,     0,
     -66,   -66,   -66,   -66,     0,     0,     0,   -66,     0,   -66,
     -66,   -66,   -66,     0,     0,   -66,   -56,     0,   -66,   -56,
     -56,   -56,   -56,   -56,     0,     0,     0,     0,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,     0,     0,     0,     0,
       0,     0,   -56,   -56,   -56,   -56,     0,     0,     0,   -56,
       0,   -56,   -56,   -56,   -56,     0,     0,   -56,   -50,     0,
     -56,   -50,   -50,   -50,   -50,   -50,     0,     0,     0,     0,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,     0,
       0,     0,     0,     0,   -50,   -50,   -50,   -50,     0,     0,
       0,   -50,     0,   -50,   -50,   -50,   -50,     0,     0,   -50,
      44,     0,   -50,     0,   254,    45,    46,    47,     0,     0,
       0,     0,    48,   248,   249,   250,   251,    49,    50,    51,
       0,     0,     0,     0,     0,     0,    52,    53,    54,    55,
       0,     0,     0,    56,     0,    57,    58,    59,    60,     0,
       0,    61,   -37,     0,    62,     0,   -37,   -37,   -37,   -37,
       0,     0,     0,     0,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,     0,     0,     0,     0,     0,     0,   -37,   -37,
     -37,   -37,     0,     0,     0,   -37,     0,   -37,   -37,   -37,
     -37,     0,     0,   -37,    44,     0,   -37,     0,   254,    45,
      46,    47,     0,     0,     0,     0,    48,   248,   249,   250,
     251,    49,    50,    51,     0,     0,     0,     0,     0,     0,
      52,    53,    54,    55,     0,     0,     0,    56,     0,    57,
      58,    59,    60,     0,     0,    61,   -34,     0,   -30,     0,
     -34,   -34,   -34,   -34,     0,     0,     0,     0,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,     0,     0,     0,     0,
       0,     0,   -34,   -34,   -34,   -34,     0,     0,     0,   -34,
       0,   -34,   -34,   -34,   -34,     0,     0,   -34,   -31,     0,
     -34,     0,   -31,   -31,   -31,   -31,     0,     0,     0,     0,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,
       0,     0,     0,     0,   -31,   -31,   -31,   -31,     0,     0,
       0,   -31,     0,   -31,   -31,   -31,   -31,     0,     0,   -31,
     -32,     0,   -31,     0,   -32,   -32,   -32,   -32,     0,     0,
       0,     0,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
       0,     0,     0,     0,     0,     0,   -32,   -32,   -32,   -32,
       0,     0,     0,   -32,     0,   -32,   -32,   -32,   -32,     0,
       0,   -32,   -33,     0,   -32,     0,   -33,   -33,   -33,   -33,
       0,     0,     0,     0,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,     0,     0,     0,     0,     0,     0,   -33,   -33,
     -33,   -33,     0,     0,     0,   -33,     0,   -33,   -33,   -33,
     -33,     0,     0,   -33,   -36,     0,   -33,     0,   -36,   -36,
     -36,   -36,     0,     0,     0,     0,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,     0,     0,     0,     0,     0,     0,
     -36,   -36,   -36,   -36,     0,     0,     0,   -36,     0,   -36,
     -36,   -36,   -36,     0,     0,   -36,   -35,     0,   -36,     0,
     -35,   -35,   -35,   -35,     0,     0,     0,     0,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,     0,     0,     0,     0,
       0,     0,   -35,   -35,   -35,   -35,     0,     0,     0,   -35,
       0,   -35,   -35,   -35,   -35,     0,     0,   -35,   -59,     0,
     -35,     0,   -59,   -59,   -59,   -59,     0,     0,     0,     0,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,     0,     0,
       0,     0,     0,     0,   -59,   -59,   -59,   -59,     0,     0,
       0,   -59,     0,   -59,   -59,   -59,   -59,     0,     0,   -59,
     -72,     0,   -59,     0,   -72,   -72,   -72,   -72,     0,     0,
       0,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
       0,     0,     0,     0,     0,     0,   -72,   -72,   -72,   -72,
       0,     0,     0,   -72,     0,   -72,   -72,   -72,   -72,     0,
       0,   -72,   -71,     0,   -72,     0,   -71,   -71,   -71,   -71,
       0,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,     0,     0,     0,   -71,   -71,
     -71,   -71,     0,     0,     0,   -71,     0,   -71,   -71,   -71,
     -71,     0,     0,   -71,   -38,     0,   -71,     0,   -38,   -38,
     -38,   -38,     0,     0,     0,     0,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,     0,     0,     0,     0,     0,     0,
     -38,   -38,   -38,   -38,     0,     0,     0,   -38,     0,   -38,
     -38,   -38,   -38,     0,     0,   -38,   -67,     0,   -38,     0,
     -67,   -67,   -67,   -67,     0,     0,     0,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,     0,
       0,     0,   -67,   -67,   -67,   -67,     0,     0,     0,   -67,
       0,   -67,   -67,   -67,   -67,     0,     0,   -67,   -61,     0,
     -67,     0,   -61,   -61,   -61,   -61,     0,     0,     0,     0,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,     0,
       0,     0,     0,     0,   -61,   -61,   -61,   -61,     0,     0,
       0,   -61,     0,   -61,   -61,   -61,   -61,     0,     0,   -61,
     -62,     0,   -61,     0,   -62,   -62,   -62,   -62,     0,     0,
       0,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
       0,     0,     0,     0,     0,     0,   -62,   -62,   -62,   -62,
       0,     0,     0,   -62,     0,   -62,   -62,   -62,   -62,     0,
       0,   -62,   -60,     0,   -62,     0,   -60,   -60,   -60,   -60,
       0,     0,     0,     0,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,     0,     0,     0,     0,     0,     0,   -60,   -60,
     -60,   -60,     0,     0,     0,   -60,     0,   -60,   -60,   -60,
     -60,     0,     0,   -60,   -53,     0,   -60,     0,   -53,   -53,
     -53,   -53,     0,     0,     0,     0,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,     0,     0,     0,     0,     0,     0,
     -53,   -53,   -53,   -53,     0,     0,     0,   -53,     0,   -53,
     -53,   -53,   -53,     0,     0,   -53,   -44,     0,   -53,     0,
     -44,   -44,   -44,   -44,     0,     0,     0,     0,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,     0,     0,     0,     0,
       0,     0,   -44,   -44,   -44,   -44,     0,     0,     0,   -44,
       0,   -44,   -44,   -44,   -44,     0,     0,   -44,   -42,     0,
     -44,     0,   -42,   -42,   -42,   -42,     0,     0,     0,     0,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,     0,
       0,     0,     0,     0,   -42,   -42,   -42,   -42,     0,     0,
       0,   -42,     0,   -42,   -42,   -42,   -42,     0,     0,   -42,
     -43,     0,   -42,     0,   -43,   -43,   -43,   -43,     0,     0,
       0,     0,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
       0,     0,     0,     0,     0,     0,   -43,   -43,   -43,   -43,
       0,     0,     0,   -43,     0,   -43,   -43,   -43,   -43,     0,
       0,   -43,   -40,     0,   -43,     0,   -40,   -40,   -40,   -40,
       0,     0,     0,     0,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,     0,     0,     0,     0,     0,     0,   -40,   -40,
     -40,   -40,     0,     0,     0,   -40,     0,   -40,   -40,   -40,
     -40,     0,     0,   -40,   -39,     0,   -40,     0,   -39,   -39,
     -39,   -39,     0,     0,     0,     0,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,     0,     0,     0,     0,     0,     0,
     -39,   -39,   -39,   -39,     0,     0,     0,   -39,     0,   -39,
     -39,   -39,   -39,     0,     0,   -39,   -41,     0,   -39,     0,
     -41,   -41,   -41,   -41,     0,     0,     0,     0,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,     0,     0,     0,     0,
       0,     0,   -41,   -41,   -41,   -41,     0,     0,     0,   -41,
       0,   -41,   -41,   -41,   -41,     0,     0,   -41,   -52,     0,
     -41,     0,   -52,   -52,   -52,   -52,     0,     0,     0,     0,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,     0,     0,
       0,     0,     0,     0,   -52,   -52,   -52,   -52,     0,     0,
       0,   -52,     0,   -52,   -52,   -52,   -52,     0,     0,   -52,
     -68,     0,   -52,     0,   -68,   -68,   -68,   -68,     0,     0,
       0,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
       0,     0,     0,     0,     0,     0,   -68,   -68,   -68,   -68,
       0,     0,     0,   -68,     0,   -68,   -68,   -68,   -68,     0,
       0,   -68,   -69,     0,   -68,     0,   -69,   -69,   -69,   -69,
       0,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,     0,     0,     0,     0,     0,     0,   -69,   -69,
     -69,   -69,     0,     0,     0,   -69,     0,   -69,   -69,   -69,
     -69,     0,     0,   -69,   -70,     0,   -69,     0,   -70,   -70,
     -70,   -70,     0,     0,     0,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,     0,     0,     0,     0,     0,     0,
     -70,   -70,   -70,   -70,     0,     0,     0,   -70,     0,   -70,
     -70,   -70,   -70,     0,     0,   -70,   -64,     0,   -70,     0,
     -64,   -64,   -64,   -64,     0,     0,     0,     0,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,     0,
       0,     0,   -64,   -64,   -64,   -64,     0,     0,     0,   -64,
       0,   -64,   -64,   -64,   -64,     0,     0,   -64,   -66,     0,
     -64,     0,   -66,   -66,   -66,   -66,     0,     0,     0,     0,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,
       0,     0,     0,     0,   -66,   -66,   -66,   -66,     0,     0,
       0,   -66,     0,   -66,   -66,   -66,   -66,     0,     0,   -66,
     -56,     0,   -66,     0,   -56,   -56,   -56,   -56,     0,     0,
       0,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
       0,     0,     0,     0,     0,     0,   -56,   -56,   -56,   -56,
       0,     0,     0,   -56,     0,   -56,   -56,   -56,   -56,     0,
       0,   -56,   -50,     0,   -56,     0,   -50,   -50,   -50,   -50,
       0,     0,     0,     0,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,     0,     0,     0,     0,     0,     0,   -50,   -50,
     -50,   -50,     0,     0,     0,   -50,     0,   -50,   -50,   -50,
     -50,     0,     0,   -50,   -13,     0,   -50,     0,   -13,   -13,
     -13,   -13,     0,     0,     0,     0,   -13,   -13,   -13,   -13,
     -13,   -13,   -13,   -13,     0,     0,     0,     0,     0,     0,
     -13,   -13,   -13,   -13,     0,     0,     0,   -13,     0,   -13,
     -13,   -13,   -13,     0,     0,   -13,    44,     0,   -13,     0,
     254,    45,    46,    47,     0,     0,     0,     0,    48,   248,
     249,   250,   251,    49,    50,    51,     0,     0,     0,     0,
       0,     0,    52,    53,    54,    55,     0,     0,     0,    56,
       0,    57,    58,    59,    60,     0,     0,    61,    44,     0,
     458,     0,   254,    45,    46,    47,     0,     0,     0,     0,
      48,   248,   249,   250,   251,    49,    50,    51,     0,     0,
       0,     0,     0,     0,    52,    53,    54,    55,     0,     0,
       0,    56,     0,    57,    58,    59,    60,     0,     0,    61,
     -58,     0,   466,     0,   -58,   -58,   -58,   -58,     0,     0,
       0,     0,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
       0,     0,     0,     0,     0,     0,   -58,   -58,   -58,   -58,
       0,     0,     0,   -58,     0,   -58,   -58,   -58,   -58,     0,
       0,   -58,   -57,     0,   -58,     0,   -57,   -57,   -57,   -57,
       0,     0,     0,     0,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,     0,     0,     0,     0,     0,     0,   -57,   -57,
     -57,   -57,     0,     0,     0,   -57,     0,   -57,   -57,   -57,
     -57,     0,     0,   -57,    -9,     0,   -57,     0,    -9,    -9,
      -9,    -9,     0,     0,     0,     0,    -9,    -9,    -9,    -9,
      -9,    -9,    -9,    -9,     0,     0,     0,     0,     0,     0,
      -9,    -9,    -9,    -9,     0,     0,     0,    -9,     0,    -9,
      -9,    -9,    -9,     0,     0,    -9,   -27,     0,    -9,     0,
     -27,   -27,   -27,   -27,     0,     0,     0,     0,   -27,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,     0,     0,     0,     0,
       0,     0,   -27,   -27,   -27,   -27,     0,     0,     0,   -27,
       0,   -27,   -27,   -27,   -27,     0,     0,   -27,   -28,     0,
     -27,     0,   -28,   -28,   -28,   -28,     0,     0,     0,     0,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,     0,     0,
       0,     0,     0,     0,   -28,   -28,   -28,   -28,     0,     0,
       0,   -28,     0,   -28,   -28,   -28,   -28,     0,     0,   -28,
     -12,     0,   -28,     0,   -12,   -12,   -12,   -12,     0,     0,
       0,     0,   -12,   -12,   -12,   -12,   -12,   -12,   -12,   -12,
       0,     0,     0,     0,     0,     0,   -12,   -12,   -12,   -12,
       0,     0,     0,   -12,     0,   -12,   -12,   -12,   -12,     0,
       0,   -12,   -51,     0,   -12,     0,   -51,   -51,   -51,   -51,
       0,     0,     0,     0,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,     0,     0,     0,     0,     0,     0,   -51,   -51,
     -51,   -51,     0,     0,     0,   -51,     0,   -51,   -51,   -51,
     -51,     0,   352,   -51,     0,   -51,   254,    45,    46,    47,
       0,     0,     0,     0,    48,   248,   249,   250,   251,   353,
     354,   355,     0,     0,     0,     0,     0,     0,    52,    53,
      54,    55,     0,     0,     0,    56,     0,    57,    58,   356,
     357,     0,    44,    61,     0,   358,   254,    45,    46,    47,
       0,     0,     0,     0,    48,   248,   249,   250,   251,    49,
      50,    51,     0,     0,     0,     0,     0,     0,    52,    53,
      54,    55,     0,     0,     0,    56,     0,    57,    58,    59,
      60,     0,   -63,    61,     0,   371,   -63,   -63,   -63,   -63,
       0,     0,     0,     0,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,     0,     0,     0,     0,     0,     0,   -63,   -63,
     -63,   -63,     0,     0,     0,   -63,     0,   -63,   -63,   -63,
     -63,     0,   -65,   -63,     0,   -63,   -65,   -65,   -65,   -65,
       0,     0,     0,     0,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,     0,     0,     0,     0,     0,     0,   -65,   -65,
     -65,   -65,     0,     0,     0,   -65,     0,   -65,   -65,   -65,
     -65,     0,   -55,   -65,     0,   -65,   -55,   -55,   -55,   -55,
       0,     0,     0,     0,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,     0,     0,     0,     0,     0,     0,   -55,   -55,
     -55,   -55,     0,     0,     0,   -55,     0,   -55,   -55,   -55,
     -55,     0,   528,   -55,     0,   -55,   281,   282,   283,    47,
       0,   538,     0,     0,   284,   324,   325,   326,    47,     0,
     609,     0,     0,   327,   281,   282,   283,    47,     0,     0,
       0,     0,   284,   611,     0,   285,     0,   281,   282,   283,
      47,     0,   613,   286,   331,   284,   281,   282,   283,    47,
       0,   628,   332,   285,   284,   281,   282,   283,    47,     0,
       0,   286,     0,   284,   630,     0,   285,     0,   281,   282,
     283,    47,     0,   632,   286,   285,   284,   281,   282,   283,
      47,     0,   634,   286,   285,   284,   281,   282,   283,    47,
       0,     0,   286,     0,   284,   636,     0,   285,     0,   281,
     282,   283,    47,     0,   638,   286,   285,   284,   281,   282,
     283,    47,     0,     0,   286,   285,   284,     0,  -124,     0,
       0,     0,     0,   286,     0,  -124,  -124,     0,   285,     0,
       0,     0,     0,     0,     0,     0,   286,   285,  -124,  -124,
    -124,  -124,  -124,  -124,  -108,   286,     0,     0,  -124,  -124,
    -124,  -108,  -108,     0,     0,     0,     0,  -124,     0,     0,
       0,     0,     0,     0,  -108,  -108,  -108,  -108,  -108,  -108,
     -95,     0,     0,     0,  -108,  -108,  -108,   -95,   129,     0,
       0,     0,     0,  -108,     0,     0,     0,     0,     0,     0,
     -95,   -95,   -95,   -95,   -95,   -95,   -97,     0,     0,     0,
     -95,   -95,   -95,   -97,   -97,     0,     0,     0,     0,   -95,
       0,     0,     0,     0,     0,     0,   -97,   -97,   -97,   -97,
     -97,   -97,   -98,     0,     0,     0,   -97,   -97,   -97,   -98,
     -98,     0,     0,     0,     0,   -97,     0,     0,     0,     0,
       0,     0,   -98,   -98,   -98,   -98,   -98,   -98,  -106,     0,
       0,     0,   -98,   -98,   -98,  -106,  -106,     0,     0,     0,
       0,   -98,     0,     0,     0,     0,     0,     0,  -106,  -106,
    -106,  -106,  -106,  -106,   -99,     0,     0,     0,  -106,  -106,
    -106,   -99,   -99,     0,     0,     0,     0,  -106,     0,     0,
       0,     0,     0,     0,   -99,   -99,   -99,   -99,   -99,   -99,
    -105,     0,     0,     0,   -99,   -99,   -99,  -105,  -105,     0,
       0,     0,     0,   -99,     0,     0,     0,     0,     0,     0,
    -105,  -105,  -105,  -105,  -105,  -105,  -100,     0,     0,     0,
    -105,  -105,  -105,  -100,  -100,     0,     0,     0,     0,  -105,
       0,     0,     0,     0,     0,     0,  -100,  -100,  -100,  -100,
    -100,  -100,  -104,     0,     0,     0,  -100,  -100,  -100,  -104,
    -104,     0,     0,     0,     0,  -100,     0,     0,     0,     0,
       0,     0,  -104,  -104,  -104,  -104,  -104,  -104,  -109,     0,
       0,     0,  -104,  -104,  -104,  -109,  -109,     0,     0,     0,
       0,  -104,     0,     0,     0,     0,     0,     0,  -109,  -109,
    -109,  -109,  -109,  -109,  -107,     0,     0,     0,  -109,  -109,
    -109,  -107,  -107,     0,     0,     0,     0,  -109,     0,     0,
       0,     0,     0,     0,  -107,  -107,  -107,  -107,  -107,  -107,
     -94,     0,     0,     0,  -107,  -107,  -107,   -94,   129,     0,
       0,     0,     0,  -107,     0,     0,     0,     0,     0,     0,
     -94,   -94,   -94,   -94,   -94,   -94,   -96,     0,     0,     0,
     -94,   -94,   -94,   -96,   -96,     0,     0,     0,     0,   -94,
       0,     0,     0,     0,     0,     0,   -96,   -96,   -96,   -96,
     -96,   -96,  -102,     0,     0,     0,   -96,   -96,   -96,  -102,
    -102,     0,     0,     0,     0,   -96,     0,     0,     0,     0,
       0,     0,  -102,  -102,  -102,  -102,  -102,  -102,  -103,     0,
       0,     0,  -102,  -102,  -102,  -103,  -103,     0,     0,     0,
       0,  -102,     0,     0,     0,     0,     0,     0,  -103,  -103,
    -103,  -103,  -103,  -103,  -101,     0,     0,     0,  -103,  -103,
    -103,  -101,  -101,     0,     0,     0,     0,  -103,     0,     0,
       0,     0,     0,     0,  -101,  -101,  -101,  -101,  -101,  -101,
    -121,     0,     0,     0,  -101,  -101,  -101,  -121,  -121,     0,
       0,     0,     0,  -101,     0,     0,     0,     0,     0,     0,
    -121,  -121,  -121,  -121,  -121,  -121,     0,  -121,  -121,     0,
    -121,  -121,  -121,     0,     0,     0,     0,     0,     0,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,     0,     0,     0,     0,
    -121,  -121,  -121,  -105,  -105,     0,     0,     0,     0,     0,
    -121,  -121,  -121,     0,     0,     0,  -105,  -105,  -105,  -105,
    -105,  -105,     0,     0,     0,     0,  -105,  -105,  -105,  -121,
    -121,     0,     0,     0,     0,     0,  -105,   436,  -105,     0,
       0,     0,  -121,  -121,  -121,  -121,  -121,  -121,     0,     0,
       0,     0,  -121,  -121,  -121,  -105,  -105,     0,     0,     0,
       0,     0,     0,  -121,  -121,     0,     0,     0,  -105,  -105,
    -105,  -105,  -105,  -105,     0,     0,     0,     0,  -105,  -105,
    -105,  -125,  -125,     0,     0,     0,     0,     0,     0,   388,
    -105,     0,     0,     0,  -125,  -125,  -125,  -125,  -125,  -125,
       0,     0,     0,     0,  -125,  -125,  -125,  -124,  -124,     0,
       0,     0,     0,     0,  -125,     0,  -125,     0,     0,     0,
    -124,  -124,  -124,  -124,  -124,  -124,     0,     0,     0,     0,
    -124,  -124,  -124,  -108,  -108,     0,     0,     0,     0,     0,
    -124,     0,  -124,     0,     0,     0,  -108,  -108,  -108,  -108,
    -108,  -108,     0,     0,     0,     0,  -108,  -108,  -108,   -95,
     129,     0,     0,     0,     0,     0,  -108,     0,  -108,     0,
       0,     0,   -95,   -95,   -95,   -95,   -95,   -95,     0,     0,
       0,     0,   -95,   -95,   -95,   -97,   -97,     0,     0,     0,
       0,     0,   -95,     0,   -95,     0,     0,     0,   -97,   -97,
     -97,   -97,   -97,   -97,     0,     0,     0,     0,   -97,   -97,
     -97,   -98,   -98,     0,     0,     0,     0,     0,   -97,     0,
     -97,     0,     0,     0,   -98,   -98,   -98,   -98,   -98,   -98,
       0,     0,     0,     0,   -98,   -98,   -98,  -106,  -106,     0,
       0,     0,     0,     0,   -98,     0,   -98,     0,     0,     0,
    -106,  -106,  -106,  -106,  -106,  -106,     0,     0,     0,     0,
    -106,  -106,  -106,  -121,  -121,     0,     0,     0,     0,     0,
    -106,     0,  -106,     0,     0,     0,  -121,  -121,  -121,  -121,
    -121,  -121,     0,     0,     0,     0,  -121,  -121,  -121,   -99,
     -99,     0,     0,     0,     0,     0,  -121,     0,  -121,     0,
       0,     0,   -99,   -99,   -99,   -99,   -99,   -99,     0,     0,
       0,     0,   -99,   -99,   -99,  -105,  -105,     0,     0,     0,
       0,     0,   -99,     0,   -99,     0,     0,     0,  -105,  -105,
    -105,  -105,  -105,  -105,     0,     0,     0,     0,  -105,  -105,
    -105,  -100,  -100,     0,     0,     0,     0,     0,  -105,     0,
    -105,     0,     0,     0,  -100,  -100,  -100,  -100,  -100,  -100,
       0,     0,     0,     0,  -100,  -100,  -100,  -104,  -104,     0,
       0,     0,     0,     0,  -100,     0,  -100,     0,     0,     0,
    -104,  -104,  -104,  -104,  -104,  -104,     0,     0,     0,     0,
    -104,  -104,  -104,  -109,  -109,     0,     0,     0,     0,     0,
    -104,     0,  -104,     0,     0,     0,  -109,  -109,  -109,  -109,
    -109,  -109,     0,     0,     0,     0,  -109,  -109,  -109,  -107,
    -107,     0,     0,     0,     0,     0,  -109,     0,  -109,     0,
       0,     0,  -107,  -107,  -107,  -107,  -107,  -107,     0,     0,
       0,     0,  -107,  -107,  -107,   -94,   129,     0,     0,     0,
       0,     0,  -107,     0,  -107,     0,     0,     0,   -94,   -94,
     -94,   -94,   -94,   -94,     0,     0,     0,     0,   -94,   -94,
     -94,   -96,   -96,     0,     0,     0,     0,     0,   -94,     0,
     -94,     0,     0,     0,   -96,   -96,   -96,   -96,   -96,   -96,
       0,     0,     0,     0,   -96,   -96,   -96,  -102,  -102,     0,
       0,     0,     0,     0,   -96,     0,   -96,     0,     0,     0,
    -102,  -102,  -102,  -102,  -102,  -102,     0,     0,     0,     0,
    -102,  -102,  -102,  -103,  -103,     0,     0,     0,     0,     0,
    -102,     0,  -102,     0,     0,     0,  -103,  -103,  -103,  -103,
    -103,  -103,     0,     0,     0,     0,  -103,  -103,  -103,  -101,
    -101,     0,     0,     0,     0,     0,  -103,     0,  -103,     0,
       0,     0,  -101,  -101,  -101,  -101,  -101,  -101,     0,     0,
       0,     0,  -101,  -101,  -101,  -125,  -125,     0,     0,     0,
       0,     0,  -101,     0,  -101,     0,     0,     0,  -125,  -125,
    -125,  -125,  -125,  -125,     0,     0,     0,     0,  -125,  -125,
    -125,  -124,  -124,     0,     0,     0,     0,     0,     0,     0,
    -125,     0,     0,     0,  -124,  -124,  -124,  -124,  -124,  -124,
       0,     0,     0,     0,  -124,  -124,  -124,  -108,  -108,     0,
       0,     0,     0,     0,     0,     0,  -124,     0,     0,     0,
    -108,  -108,  -108,  -108,  -108,  -108,     0,     0,     0,     0,
    -108,  -108,  -108,   -95,   129,     0,     0,     0,     0,     0,
       0,     0,  -108,     0,     0,     0,   -95,   -95,   -95,   -95,
     -95,   -95,     0,     0,     0,     0,   -95,   -95,   -95,   -97,
     -97,     0,     0,     0,     0,     0,     0,     0,   -95,     0,
       0,     0,   -97,   -97,   -97,   -97,   -97,   -97,     0,     0,
       0,     0,   -97,   -97,   -97,   -98,   -98,     0,     0,     0,
       0,     0,     0,     0,   -97,     0,     0,     0,   -98,   -98,
     -98,   -98,   -98,   -98,     0,     0,     0,     0,   -98,   -98,
     -98,  -106,  -106,     0,     0,     0,     0,     0,     0,     0,
     -98,     0,     0,     0,  -106,  -106,  -106,  -106,  -106,  -106,
       0,     0,     0,     0,  -106,  -106,  -106,   279,     0,     0,
       0,     0,     0,     0,     0,     0,  -106,     0,     0,     0,
     -93,   -93,   -93,   -93,   -93,   -93,     0,     0,     0,     0,
     -93,   -93,   -93,  -121,  -121,     0,     0,     0,     0,     0,
     -93,     0,   -93,     0,     0,     0,  -121,  -121,  -121,  -121,
    -121,  -121,     0,     0,     0,     0,  -121,  -121,  -121,   -99,
     -99,     0,     0,     0,     0,     0,     0,     0,  -121,     0,
       0,     0,   -99,   -99,   -99,   -99,   -99,   -99,     0,     0,
       0,     0,   -99,   -99,   -99,  -105,  -105,     0,     0,     0,
       0,     0,     0,     0,   -99,     0,     0,     0,  -105,  -105,
    -105,  -105,  -105,  -105,     0,     0,     0,     0,  -105,  -105,
    -105,  -100,  -100,     0,     0,     0,     0,     0,     0,     0,
    -105,     0,     0,     0,  -100,  -100,  -100,  -100,  -100,  -100,
       0,     0,     0,     0,  -100,  -100,  -100,  -104,  -104,     0,
       0,     0,     0,     0,     0,     0,  -100,     0,     0,     0,
    -104,  -104,  -104,  -104,  -104,  -104,     0,     0,     0,     0,
    -104,  -104,  -104,  -109,  -109,     0,     0,     0,     0,     0,
       0,     0,  -104,     0,     0,     0,  -109,  -109,  -109,  -109,
    -109,  -109,     0,     0,     0,     0,  -109,  -109,  -109,  -107,
    -107,     0,     0,     0,     0,     0,     0,     0,  -109,     0,
       0,     0,  -107,  -107,  -107,  -107,  -107,  -107,     0,     0,
       0,     0,  -107,  -107,  -107,   -94,   129,     0,     0,     0,
       0,     0,     0,     0,  -107,     0,     0,     0,   -94,   -94,
     -94,   -94,   -94,   -94,     0,     0,     0,     0,   -94,   -94,
     -94,   -96,   -96,     0,     0,     0,     0,     0,     0,     0,
     -94,     0,     0,     0,   -96,   -96,   -96,   -96,   -96,   -96,
       0,     0,     0,     0,   -96,   -96,   -96,  -102,  -102,     0,
       0,     0,     0,     0,     0,     0,   -96,     0,     0,     0,
    -102,  -102,  -102,  -102,  -102,  -102,     0,     0,     0,     0,
    -102,  -102,  -102,   279,     0,     0,     0,     0,     0,     0,
       0,     0,  -102,     0,     0,     0,   -92,   -92,   -92,   -92,
     -92,   -92,     0,     0,     0,     0,   -92,   -92,   -92,  -103,
    -103,     0,     0,     0,     0,     0,   -92,     0,   -92,     0,
       0,     0,  -103,  -103,  -103,  -103,  -103,  -103,     0,     0,
       0,     0,  -103,  -103,  -103,  -101,  -101,     0,     0,     0,
       0,     0,     0,     0,  -103,     0,     0,     0,  -101,  -101,
    -101,  -101,  -101,  -101,     0,     0,     0,     0,  -101,  -101,
    -101,   279,     0,     0,     0,     0,     0,     0,     0,     0,
    -101,     0,     0,     0,   -93,   -93,   -93,   -93,   -93,   -93,
       0,     0,     0,     0,   -93,   -93,   -93,   279,     0,     0,
       0,     0,     0,     0,     0,     0,   -93,     0,     0,     0,
     -92,   -92,   -92,   -92,   -92,   -92,     0,     0,     0,     0,
     -92,   -92,   -92,  -121,  -121,     0,     0,     0,     0,     0,
       0,     0,   -92,     0,     0,     0,  -121,  -121,  -121,  -121,
    -121,  -121,     0,     0,     0,     0,  -121,  -121,  -121,  -105,
    -105,     0,     0,     0,     0,  -121,     0,  -121,     0,     0,
       0,     0,  -105,  -105,  -105,  -105,  -105,  -105,     0,     0,
       0,     0,  -105,  -105,  -105,  -121,  -121,     0,     0,     0,
       0,  -105,     0,   420,     0,     0,     0,     0,  -121,  -121,
    -121,  -121,  -121,  -121,     0,     0,     0,     0,  -121,  -121,
    -121,  -105,  -105,     0,     0,     0,     0,     0,     0,  -121,
       0,     0,     0,     0,  -105,  -105,  -105,  -105,  -105,  -105,
       0,     0,     0,     0,  -105,  -105,  -105,  -125,  -125,     0,
       0,     0,     0,     0,     0,   399,     0,     0,     0,     0,
    -125,  -125,  -125,  -125,  -125,  -125,     0,  -124,  -124,     0,
    -125,  -125,  -125,     0,     0,     0,     0,     0,     0,  -125,
    -124,  -124,  -124,  -124,  -124,  -124,     0,  -108,  -108,     0,
    -124,  -124,  -124,     0,     0,     0,     0,     0,     0,  -124,
    -108,  -108,  -108,  -108,  -108,  -108,     0,   -95,   129,     0,
    -108,  -108,  -108,     0,     0,     0,     0,     0,     0,  -108,
     -95,   -95,   -95,   -95,   -95,   -95,     0,   -97,   -97,     0,
     -95,   -95,   -95,     0,     0,     0,     0,     0,     0,   -95,
     -97,   -97,   -97,   -97,   -97,   -97,     0,   -98,   -98,     0,
     -97,   -97,   -97,     0,     0,     0,     0,     0,     0,   -97,
     -98,   -98,   -98,   -98,   -98,   -98,     0,  -106,  -106,     0,
     -98,   -98,   -98,     0,     0,     0,     0,     0,     0,   -98,
    -106,  -106,  -106,  -106,  -106,  -106,     0,  -121,  -121,     0,
    -106,  -106,  -106,     0,     0,     0,     0,     0,     0,  -106,
    -121,  -121,  -121,  -121,  -121,  -121,     0,   -99,   -99,     0,
    -121,  -121,  -121,     0,     0,     0,     0,     0,     0,  -121,
     -99,   -99,   -99,   -99,   -99,   -99,     0,  -105,  -105,     0,
     -99,   -99,   -99,     0,     0,     0,     0,     0,     0,   -99,
    -105,  -105,  -105,  -105,  -105,  -105,     0,  -100,  -100,     0,
    -105,  -105,  -105,     0,     0,     0,     0,     0,     0,  -105,
    -100,  -100,  -100,  -100,  -100,  -100,     0,  -104,  -104,     0,
    -100,  -100,  -100,     0,     0,     0,     0,     0,     0,  -100,
    -104,  -104,  -104,  -104,  -104,  -104,     0,  -109,  -109,     0,
    -104,  -104,  -104,     0,     0,     0,     0,     0,     0,  -104,
    -109,  -109,  -109,  -109,  -109,  -109,     0,  -107,  -107,     0,
    -109,  -109,  -109,     0,     0,     0,     0,     0,     0,  -109,
    -107,  -107,  -107,  -107,  -107,  -107,     0,   -94,   129,     0,
    -107,  -107,  -107,     0,     0,     0,     0,     0,     0,  -107,
     -94,   -94,   -94,   -94,   -94,   -94,     0,   -96,   -96,     0,
     -94,   -94,   -94,     0,     0,     0,     0,     0,     0,   -94,
     -96,   -96,   -96,   -96,   -96,   -96,     0,  -102,  -102,     0,
     -96,   -96,   -96,     0,     0,     0,     0,     0,     0,   -96,
    -102,  -102,  -102,  -102,  -102,  -102,     0,  -103,  -103,     0,
    -102,  -102,  -102,     0,     0,     0,     0,     0,     0,  -102,
    -103,  -103,  -103,  -103,  -103,  -103,     0,  -101,  -101,     0,
    -103,  -103,  -103,     0,     0,     0,     0,     0,     0,  -103,
    -101,  -101,  -101,  -101,  -101,  -101,     0,   279,     0,     0,
    -101,  -101,  -101,     0,     0,     0,     0,     0,     0,  -101,
     -92,   -92,   -92,   -92,   -92,   -92,     0,  -124,  -124,     0,
     -92,   -92,   -92,     0,     0,     0,     0,     0,     0,   -92,
    -124,  -124,  -124,  -124,  -124,  -124,  -108,  -108,     0,     0,
    -124,  -124,  -124,     0,     0,     0,     0,     0,     0,  -108,
    -108,  -108,  -108,  -108,  -108,   -95,   129,     0,     0,  -108,
    -108,  -108,     0,     0,     0,     0,     0,     0,   -95,   -95,
     -95,   -95,   -95,   -95,   -97,   -97,     0,     0,   -95,   -95,
     -95,     0,     0,     0,     0,     0,     0,   -97,   -97,   -97,
     -97,   -97,   -97,   -98,   -98,     0,     0,   -97,   -97,   -97,
       0,     0,     0,     0,     0,     0,   -98,   -98,   -98,   -98,
     -98,   -98,  -106,  -106,     0,     0,   -98,   -98,   -98,     0,
       0,     0,     0,     0,     0,  -106,  -106,  -106,  -106,  -106,
    -106,  -121,  -121,     0,     0,  -106,  -106,  -106,     0,     0,
       0,     0,     0,     0,  -121,  -121,  -121,  -121,  -121,  -121,
     -99,   -99,     0,     0,  -121,  -121,  -121,     0,     0,     0,
       0,     0,     0,   -99,   -99,   -99,   -99,   -99,   -99,  -105,
    -105,     0,     0,   -99,   -99,   -99,     0,     0,     0,     0,
       0,     0,  -105,  -105,  -105,  -105,  -105,  -105,  -100,  -100,
       0,     0,  -105,  -105,  -105,     0,     0,     0,     0,     0,
       0,  -100,  -100,  -100,  -100,  -100,  -100,  -104,  -104,     0,
       0,  -100,  -100,  -100,     0,     0,     0,     0,     0,     0,
    -104,  -104,  -104,  -104,  -104,  -104,  -109,  -109,     0,     0,
    -104,  -104,  -104,     0,     0,     0,     0,     0,     0,  -109,
    -109,  -109,  -109,  -109,  -109,  -107,  -107,     0,     0,  -109,
    -109,  -109,     0,     0,     0,     0,     0,     0,  -107,  -107,
    -107,  -107,  -107,  -107,   -94,   129,     0,     0,  -107,  -107,
    -107,     0,     0,     0,     0,     0,     0,   -94,   -94,   -94,
     -94,   -94,   -94,   -96,   -96,     0,     0,   -94,   -94,   -94,
       0,     0,     0,     0,     0,     0,   -96,   -96,   -96,   -96,
     -96,   -96,  -102,  -102,     0,     0,   -96,   -96,   -96,     0,
       0,     0,     0,     0,     0,  -102,  -102,  -102,  -102,  -102,
    -102,  -103,  -103,     0,     0,  -102,  -102,  -102,     0,     0,
       0,     0,     0,     0,  -103,  -103,  -103,  -103,  -103,  -103,
    -101,  -101,     0,     0,  -103,  -103,  -103,     0,     0,     0,
       0,     0,     0,  -101,  -101,  -101,  -101,  -101,  -101,   279,
       0,     0,     0,  -101,  -101,  -101,     0,     0,     0,     0,
       0,     0,   -92,   -92,   -92,   -92,   -92,   -92,     0,     0,
       0,     0,   -92,   -92,   -92,   121,   122,   123,   124,   125,
     126,     0,     0,     0,     0,   -91,   -91,   -91,   121,   122,
     123,   124,   125,   126,     0,   -91,     0,   -91,   -90,   -90,
     -90,   121,   122,   123,   124,   125,   126,     0,   -90,     0,
     -90,   -91,   -91,   -91,   121,   122,   123,   124,   125,   126,
       0,     0,     0,   -91,   -90,   -90,   -90,   121,   122,   123,
     124,   125,   126,     0,     0,     0,   -90,   -91,   -91,   -91,
     121,   122,   123,   124,   125,   126,   -91,     0,     0,     0,
     -90,   -90,   -90,   121,   122,   123,   124,   125,   126,   -90,
       0,     0,     0,   -91,   -91,   -91,   121,   122,   123,   124,
     125,   126,     0,     0,     0,     0,   -90,   -90,   -90
};

static const yytype_int16 yycheck[] =
{
       0,    41,   134,    65,     0,   141,   345,     7,   547,   206,
       0,     7,   271,   206,    36,   273,   203,    27,    42,    11,
       1,     5,     1,     1,    24,    31,    32,    27,    12,   288,
       5,   206,   290,    25,    40,     1,   206,     1,     5,    31,
      41,    42,    43,    65,    36,    12,     1,     1,    43,    41,
      14,    15,    16,    17,    31,    32,     1,   316,    40,    40,
     318,    40,    40,    40,    56,    31,    32,    33,    60,    61,
     206,     1,     1,    65,    40,    40,    31,    32,   337,    43,
      90,   339,    29,     0,     1,    40,    40,    34,    40,    41,
      90,     1,     1,   206,    86,    40,    88,    14,    15,    16,
      17,     1,     1,    95,     5,    97,   206,    99,   244,     1,
      40,    40,   104,    44,    14,    15,    16,    17,    61,    42,
      43,   113,   661,    40,     1,     1,   118,   119,   120,   206,
      40,    40,    31,    32,    33,   127,   128,     5,   130,   131,
     132,    40,    89,    43,    12,    43,    93,     5,    40,   141,
      31,    32,    95,     1,    31,    32,    99,     5,     6,     7,
       8,     1,    43,    40,    40,    13,     5,     6,     7,    27,
     113,    29,    30,     5,    13,   118,   206,    40,    41,    27,
      12,    29,    30,     5,    31,    32,    34,    43,   131,   132,
      12,    31,    32,   185,    42,    43,    43,     5,    42,    43,
      40,   388,     1,    42,     1,   227,   206,   229,     5,     1,
     206,   203,   399,    40,   206,   237,   238,   239,     5,    27,
     479,    29,    30,   481,   246,     1,    43,   566,    27,   488,
      29,    30,   490,   420,   226,   227,    41,   229,    43,    31,
      32,   184,   185,    31,    32,   237,   238,   239,    40,   436,
      31,    32,   244,     5,   246,    31,    32,   227,   517,   229,
     203,   519,    43,    40,    40,    42,    40,   237,   238,   239,
      31,    32,    33,   265,   266,    27,   246,    29,    30,    40,
     227,   540,   229,   226,   542,   277,     1,    43,    31,    32,
     237,   238,   239,   285,   286,    40,   358,    42,     1,   246,
      43,     1,   294,    31,    32,     5,     6,     7,     8,   371,
      31,    32,    33,    13,    43,    43,    31,    32,   310,   311,
      41,    45,    43,   266,     1,    40,    31,    32,    31,    32,
     322,     1,     1,   465,    34,     5,   358,    40,    43,   331,
     332,     1,    42,   286,    42,     5,     6,     7,     8,   371,
      42,   343,     1,    13,    31,    32,     5,   349,    27,    42,
      29,    30,    41,    40,    43,   357,   358,    27,   311,    29,
      30,     1,    31,    32,    34,     5,    42,    43,   370,   371,
       1,    42,    42,    43,    43,    31,    32,     8,     9,   332,
      42,   383,   384,   385,   386,   387,   388,    43,   438,    42,
      21,    22,    23,    24,    25,    26,   349,   399,    31,    32,
      31,    32,    33,    41,    35,    43,    42,   553,     1,    40,
      43,    42,   414,   415,   416,   417,   418,   419,   420,    14,
      15,    16,    17,     1,    41,     1,    43,    42,   430,   431,
     432,   433,   434,   435,   436,   388,   438,    42,    31,    32,
      42,   648,     5,     6,     7,   648,   399,    40,    43,   451,
      13,   453,   454,    31,    32,    31,    32,    42,   460,    31,
      32,   414,    40,   648,    40,     5,   468,   420,   648,    41,
     677,    43,   679,    40,   677,    42,   679,   430,    40,    42,
      42,   688,   689,   436,   691,   688,   689,    27,   691,    29,
      30,   698,   677,    40,   679,   698,    40,   677,   451,   679,
      43,     1,   648,   688,   689,     5,   691,   460,   688,   689,
      41,   691,    43,   698,    40,   468,     1,    41,   698,    43,
       5,     6,     7,     8,    41,   648,    43,    27,    13,    29,
      30,   677,    41,   679,    43,    36,    31,    32,   648,    31,
      32,    33,   688,   689,    43,   691,    41,     5,    43,    34,
     696,   553,   698,    43,   677,    56,   679,    42,     1,    60,
      61,   648,     5,    45,    65,   688,   689,   677,   691,   679,
      31,    32,     5,     6,     7,   698,   626,    43,   688,   689,
      13,   691,    43,     5,    27,    86,    29,    30,   698,    41,
     677,    43,   679,    31,    95,     5,     6,     7,     5,     6,
       7,   688,   689,    13,   691,    41,    13,    43,   648,    42,
      31,   698,   113,     5,     6,     7,    43,   619,   119,   120,
      43,    13,    42,    43,   626,    43,   127,   128,    43,   130,
     131,   132,    42,    31,    32,    42,    42,   677,   648,   679,
       0,     1,   648,    41,    43,    43,   648,     1,   688,   689,
      42,   691,    31,    32,    14,    15,    16,    17,   698,    43,
      14,    15,    16,    17,    43,   618,   619,   677,   648,   679,
      43,   677,     1,   679,   676,   677,     5,   679,   688,   689,
      43,   691,   688,   689,    43,   691,   688,   689,   698,   691,
      42,    43,   698,    43,   696,    40,   698,   677,    27,   679,
      29,    30,   203,    42,    43,   206,    41,    42,   688,   689,
      43,   691,    31,    32,    33,     1,     0,     1,   698,     5,
       6,     7,     8,   676,    43,   226,   227,    13,   229,    40,
      14,    15,    16,    17,    40,    41,   237,   238,   239,    42,
      43,    27,     1,    29,    30,   246,     1,    35,    34,    40,
       5,     6,     7,     8,    31,    32,    42,    43,    13,    31,
      32,    33,    40,    40,   265,   266,     0,     1,     1,    41,
      36,    43,    27,    40,    29,    30,   277,    31,    32,    34,
      14,    15,    16,    17,   285,   286,    40,    42,    43,     0,
       1,    31,    32,   294,    60,    61,    31,    32,    33,    65,
      40,    42,    43,    14,    15,    16,    17,     1,    43,   310,
     311,     5,     6,     7,     8,    81,    31,    32,    40,    13,
      40,   322,    31,    32,    42,    43,    41,    40,    43,    95,
     331,   332,    41,    27,    43,    29,    30,    42,    43,     1,
      34,    40,   343,     5,     6,     7,     8,   113,    42,    43,
      40,    13,    40,   119,   120,     5,   357,   358,    43,    31,
      32,   127,   128,    43,   130,   131,   132,    31,    32,     1,
     371,    43,    34,    40,    41,    42,     8,     9,    43,    43,
      42,     1,   383,   384,   385,   386,   387,   388,    43,    21,
      22,    23,    24,    25,    26,    31,    32,    43,   399,    31,
      32,    33,    43,    35,    43,    41,   172,    43,    40,    40,
      42,     0,     1,    43,   415,   416,   417,   418,   419,   420,
      31,    32,    33,    40,    41,    14,    15,    16,    17,    40,
     431,   432,   433,   434,   435,   436,     5,   203,    42,    43,
     206,     1,    42,    31,    32,     5,     6,     7,     8,     5,
     451,     5,    40,    13,    31,    32,    31,    32,     5,   460,
     226,   227,    42,   229,    41,    43,    43,   468,    43,    42,
       8,   237,   238,   239,    34,     0,     1,    40,    41,    42,
     246,    31,    42,    21,    22,    23,    24,    25,    26,    14,
      15,    16,    17,    31,    32,    33,    31,    32,     1,    43,
     266,     4,     5,     6,     7,     8,   272,    43,    43,    42,
      13,    14,    15,    16,    17,    18,    19,    20,    31,    32,
     286,    42,    43,   289,    27,    28,    29,    30,    41,    40,
      43,    34,    42,    36,    37,    38,    39,    31,    32,    42,
      31,    32,    45,     0,     1,   311,    42,    41,    40,    43,
      41,   317,    43,    42,     1,    31,    32,    14,    15,    16,
      17,     8,     9,    42,    43,    41,   332,    43,    31,    32,
      31,    32,   338,    42,    21,    22,    23,    24,    25,    26,
      43,    35,    43,    42,    31,    32,    33,    31,    32,    31,
      32,   357,   358,    40,    42,    42,    40,     1,    40,     0,
       1,     5,     6,     7,     8,   371,    10,    11,    42,    13,
      42,    43,    36,    14,    15,    16,    17,   383,   384,   385,
     386,   387,   388,    27,    42,    29,    30,    42,     0,     1,
      34,    43,    56,   399,    31,    32,    60,    61,    42,    31,
      32,    65,    14,    15,    16,    17,    43,   648,    40,   415,
     416,   417,   418,   419,   420,    31,    32,    31,    32,    33,
      31,    32,    86,    43,    40,   431,   432,   433,   434,   435,
     436,    95,    43,    42,    43,   676,   677,    42,   679,    31,
      32,    31,    32,    31,    32,   451,    42,   688,   689,   113,
     691,    43,    40,    43,   460,   119,   120,   698,    31,    32,
      42,    43,   468,   127,   128,    42,   130,   131,   132,    35,
      43,    42,     1,    42,   480,     4,     5,     6,     7,     8,
      31,    32,    40,   489,    13,    14,    15,    16,    17,    18,
      19,    20,    43,    40,    31,    32,    42,     1,    27,    28,
      29,    30,    42,    43,     8,    34,    43,    36,    37,    38,
      39,    43,   518,    42,    31,    32,    45,    21,    22,    23,
      24,    25,    26,    42,    43,     1,    43,    31,    32,    33,
      42,    43,     8,     9,    43,   541,    40,    42,    43,   203,
      31,    32,   206,    42,    43,    21,    22,    23,    24,    25,
      26,    43,    43,    43,     8,    31,    32,    33,    41,    42,
      43,    43,   226,   227,    40,   229,    42,    21,    22,    23,
      24,    25,    26,   237,   238,   239,    42,    31,    32,    33,
      42,    43,   246,     1,    31,    32,    40,     5,     6,     7,
       8,    42,    10,    11,    42,    13,    43,    43,    31,    32,
      45,   265,   266,     0,     1,    42,    43,    36,    42,    27,
      43,    29,    30,   277,    31,    32,    34,    14,    15,    16,
      17,    45,   286,     1,    42,    40,    43,     5,     6,     7,
       8,    60,    61,    31,    32,    13,    65,    43,    31,    32,
      42,    43,   648,    31,    32,    43,   310,   311,    42,    27,
      43,    29,    30,    42,    43,    43,    34,    42,   322,    42,
       0,     1,    40,    43,    42,    42,    95,   331,   332,    42,
     676,   677,    42,   679,    14,    15,    16,    17,    42,   343,
      42,    43,   688,   689,   113,   691,    42,    43,    31,    32,
     119,   120,   698,   357,   358,    41,    42,    43,   127,   128,
      43,   130,   131,   132,     1,    31,    32,   371,     5,     6,
       7,     8,     0,     1,    42,    43,    13,    43,    43,   383,
     384,   385,   386,   387,   388,    43,    14,    15,    16,    17,
      27,    31,    29,    30,    43,   399,    31,    34,    31,    32,
      41,    42,    43,    40,    43,    42,     1,     0,     1,    43,
      43,   415,   416,   417,   418,   419,   420,    41,    42,    43,
       1,    14,    15,    16,    17,    42,    43,   431,   432,   433,
     434,   435,   436,    43,   203,    42,    43,   206,    42,    43,
      21,    22,    23,    24,    25,    26,    43,   451,    42,    43,
      31,    32,    33,    42,    43,    43,   460,   226,   227,    40,
     229,    43,     1,    43,   468,    43,    43,    43,   237,   238,
     239,    43,    40,    40,    40,     1,    40,   246,     4,     5,
       6,     7,     8,    40,    40,    40,    40,    13,    14,    15,
      16,    17,    18,    19,    20,    40,    40,   266,    40,    40,
      40,    27,    28,    29,    30,    40,    43,    43,    34,    43,
      36,    37,    38,    39,    43,    43,    42,   286,     1,    45,
      40,     4,     5,     6,     7,     8,    40,    43,     7,   452,
      13,    14,    15,    16,    17,    18,    19,    20,   649,   616,
     692,   648,   311,   680,    27,    28,    29,    30,   683,   681,
     460,    34,   460,    36,    37,    38,    39,    -1,    -1,    42,
      -1,    -1,    45,   332,     1,     0,     1,    -1,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    -1,    -1,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,   357,   358,
      27,    -1,    29,    30,     1,    -1,    -1,    34,     5,     6,
       7,     8,   371,    -1,    -1,    42,    13,    -1,    -1,    36,
      -1,    -1,    -1,    -1,   383,   384,   385,   386,   387,   388,
      27,    -1,    29,    30,    -1,    -1,    -1,    34,    -1,   398,
     399,    -1,    -1,    60,    61,    42,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    -1,   648,    -1,   415,   416,   417,   418,
     419,   420,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   431,   432,   433,   434,   435,   436,    95,    -1,
      -1,    -1,   676,   677,    -1,   679,    -1,    -1,    -1,    -1,
      -1,    -1,   451,    -1,   688,   689,   113,   691,    -1,    -1,
      -1,   460,   119,   120,   698,    60,    61,    -1,    -1,   468,
     127,   128,    -1,    -1,   131,   132,     1,    -1,    -1,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      95,    -1,    27,    28,    29,    30,    -1,    -1,    -1,    34,
      -1,    36,    37,    38,    39,    -1,    -1,    42,   113,     1,
      45,    -1,    -1,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    13,    -1,    -1,    -1,    -1,   131,   132,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    27,   203,    29,    30,   206,
       1,    -1,    34,    -1,     5,     6,     7,     8,    -1,    -1,
      42,    -1,    13,    -1,    -1,    -1,    60,    61,    -1,   226,
     227,    65,   229,     1,    -1,    -1,    27,    -1,    29,    30,
     237,   238,   239,    34,    -1,    -1,    -1,    -1,    -1,   246,
      -1,    42,    -1,    21,    22,    23,    24,    25,    26,    -1,
      -1,    95,    -1,    31,    32,    33,    -1,    -1,   203,   266,
       1,   206,    40,    -1,     5,     6,     7,     8,    -1,   113,
      -1,    -1,    13,    -1,    -1,   119,   120,    -1,    -1,   286,
      -1,   226,    -1,   127,    -1,     1,    -1,   131,   132,     5,
       6,     7,     8,    34,    -1,    -1,    -1,    13,    -1,   648,
      -1,    42,    -1,     1,   311,    -1,    -1,     5,     6,     7,
       8,    27,    -1,    29,    30,    13,    -1,    -1,    34,    -1,
      -1,   266,    -1,    -1,    -1,   332,    42,   676,   677,    27,
     679,    29,    30,    -1,    -1,    -1,    34,    -1,    -1,   688,
     689,   286,   691,    -1,    42,    -1,    -1,    -1,    -1,   698,
     357,   358,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,
      -1,    -1,   206,     1,   371,    -1,   311,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,   383,   384,   385,   386,
      -1,   388,   226,   227,    -1,   229,    -1,   332,    -1,    -1,
     397,    -1,   399,   237,   238,   239,    34,    -1,    -1,    -1,
      -1,    -1,   246,    -1,    42,    -1,    -1,    -1,   415,   416,
     417,   418,   357,   420,    -1,    -1,     1,    -1,    -1,    -1,
      -1,    -1,   266,     8,   431,   432,   433,   434,    -1,   436,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,   286,   388,   451,    -1,    31,    32,    33,    -1,
      -1,    -1,    -1,   460,   399,    40,    -1,    -1,    -1,    -1,
      -1,   468,    -1,    -1,    -1,    -1,     1,   311,    -1,     4,
       5,     6,     7,     8,    -1,   420,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,   332,    -1,
      -1,   436,    27,    28,    29,    30,    -1,    -1,    -1,    34,
      -1,    36,    37,    38,    39,    -1,   451,    42,    -1,    -1,
      45,    -1,    -1,   357,   358,   460,    -1,    -1,    36,    -1,
      -1,    -1,    -1,   468,    -1,     1,    -1,   371,    -1,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    -1,   383,
     384,   385,    60,    61,   388,    -1,    -1,    65,    -1,    -1,
      -1,    27,   396,    29,    30,   399,    -1,     1,    34,    -1,
      -1,     5,     6,     7,     8,    -1,    42,    -1,    -1,    13,
      -1,   415,   416,   417,    -1,    -1,   420,    95,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    29,    30,   431,   432,   433,
      34,    -1,   436,    -1,    -1,   113,    -1,    -1,    42,     1,
      -1,   119,   120,     5,     6,     7,     8,   451,    -1,    -1,
      -1,    13,    -1,   131,   132,    -1,   460,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   468,    27,    -1,    29,    30,    -1,
       1,    -1,    34,     4,     5,     6,     7,     8,    -1,    -1,
      42,   648,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,   676,
     677,    42,   679,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      -1,   688,   689,    -1,   691,   203,    -1,    -1,   206,    -1,
      -1,   698,    -1,    36,     1,    -1,    -1,    -1,     5,     6,
       7,     8,    -1,   648,    -1,    -1,    13,    -1,   226,   227,
      -1,   229,    -1,    -1,    -1,    -1,    -1,    60,    61,   237,
     238,   239,    65,    -1,    -1,    -1,    -1,    34,   246,    -1,
      -1,   676,   677,     1,   679,    42,    -1,     5,     6,     7,
       8,    -1,    -1,   688,   689,    13,   691,    -1,   266,    -1,
      -1,     1,    95,   698,    -1,     5,     6,     7,     8,    27,
      -1,    29,    30,    13,    -1,    -1,    34,    -1,   286,    -1,
     113,    -1,    -1,    -1,    42,    -1,   119,    27,    -1,    29,
      30,    -1,    -1,    -1,    34,    -1,    -1,    -1,   131,   132,
       1,    -1,    42,   311,     5,     6,     7,     8,    -1,    -1,
      -1,     1,    13,    -1,   648,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,   332,     1,    -1,    -1,    -1,     5,
       6,     7,     8,    34,    -1,    -1,    -1,    13,    -1,    -1,
      -1,    42,   676,   677,    34,   679,    -1,    -1,    -1,   357,
     358,    -1,    42,    -1,   688,   689,    -1,   691,    34,    -1,
      -1,    -1,    -1,   371,   698,    -1,    42,    -1,    -1,    -1,
     203,    -1,    -1,   206,    -1,   383,   384,     1,    -1,    -1,
     388,     5,     6,     7,     8,    -1,    -1,   395,    -1,    13,
      -1,   399,    -1,   226,   227,    -1,   229,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   237,   238,   239,   415,   416,    -1,
      34,    -1,   420,   246,    -1,     1,    -1,    -1,    42,     5,
       6,     7,     8,   431,   432,     1,    -1,    13,   436,     5,
       6,     7,     8,   266,    61,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,   451,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,   460,   286,    -1,    -1,    42,    -1,    34,    -1,
     468,    -1,    -1,    -1,    36,    -1,    42,    -1,    95,    -1,
      -1,    98,    -1,   100,   101,     1,    -1,    -1,   311,     5,
       6,     7,     8,    -1,    -1,    -1,   113,    13,    60,    61,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,   332,
      -1,    -1,    -1,    -1,   131,   132,     1,    -1,    34,    -1,
       5,     6,     7,     8,    -1,     1,    42,   350,    13,     5,
       6,     7,     8,    95,   357,   358,    -1,    13,     1,    -1,
      -1,    -1,     5,     6,     7,     8,    -1,    -1,   371,    34,
      13,   113,    -1,    -1,    -1,    -1,    -1,    42,    34,    -1,
     383,    -1,    -1,    -1,    -1,   388,    42,    -1,    -1,   131,
     132,    34,    -1,    -1,    -1,    -1,   399,     1,    -1,    42,
      -1,     5,     6,     7,     8,    -1,   203,    -1,    -1,    13,
      -1,    -1,   415,    -1,     1,    -1,    -1,   420,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    -1,   431,   226,
      34,    -1,    -1,   436,    -1,    -1,    -1,    -1,    42,     1,
      -1,    -1,    -1,     5,     6,     7,     8,    34,   451,    -1,
      -1,    13,    -1,    -1,    -1,    42,    -1,   460,    -1,    -1,
      -1,   203,    -1,    -1,   206,   468,    -1,    -1,    -1,   266,
     648,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,   226,   227,    -1,   229,    -1,   286,
      -1,    -1,    -1,    -1,    -1,   237,   238,   239,   676,   677,
      -1,   679,    -1,    -1,   246,    -1,    -1,    -1,     1,    -1,
     688,   689,    -1,   691,   311,     8,     9,    -1,    -1,    -1,
     698,    -1,    -1,    -1,   266,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    26,    -1,   332,    -1,    -1,    31,    32,
      33,    -1,    -1,    -1,   286,    -1,    -1,    40,     1,    -1,
      -1,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,   311,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,   375,   376,
     377,    34,    -1,    36,    37,    38,    39,    -1,    -1,    42,
     332,   388,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   399,    -1,    -1,   402,   403,   404,    -1,   406,
     407,   408,    -1,    -1,    -1,   357,   358,    -1,    -1,    -1,
      -1,    -1,    -1,   420,    -1,   422,   423,   424,     1,   371,
      -1,    -1,     5,     6,     7,     8,    -1,    -1,    -1,   436,
      13,    -1,    -1,    -1,    -1,   648,   388,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   451,    -1,    -1,   399,    -1,    -1,
       1,    34,    -1,   460,     5,     6,     7,     8,    -1,    42,
      -1,   468,    13,   676,   677,     1,   679,    -1,   420,     5,
       6,     7,     8,    -1,    -1,   688,   689,    13,   691,     8,
       9,    -1,    -1,    34,   436,   698,    -1,    -1,    -1,    -1,
      -1,    42,    21,    22,    23,    24,    25,    26,    34,   451,
      -1,    -1,    31,    32,    33,    -1,    42,     1,   460,    -1,
      -1,     5,     6,     7,     8,    -1,   468,    -1,     1,    13,
      -1,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      34,   548,   549,   550,    27,    28,    29,    30,    42,    -1,
      -1,    34,    -1,    36,    37,    38,    39,    -1,    -1,    42,
      -1,    -1,    45,    -1,    -1,    -1,     1,    -1,    -1,    -1,
       5,     6,     7,     8,    -1,    -1,     1,    -1,    13,     4,
       5,     6,     7,     8,    -1,   592,   593,   594,    13,    14,
      15,    16,    17,    18,    19,    20,   603,   604,   605,    34,
      -1,    -1,    27,    28,    29,    30,    -1,    42,    -1,    34,
      -1,    36,    37,    38,    39,    -1,    -1,    42,     1,    -1,
      45,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,    -1,
      -1,    34,    -1,    36,    37,    38,    39,    -1,    -1,    42,
       1,    -1,    45,    -1,     5,     6,     7,     8,    -1,   676,
      -1,     1,    13,    -1,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    34,    -1,    -1,   648,    27,    28,    29,
      30,    42,    -1,    -1,    34,    -1,    36,    37,    38,    39,
      -1,    -1,    42,    -1,    -1,    45,     1,    -1,    -1,     4,
       5,     6,     7,     8,   676,   677,    -1,   679,    13,    14,
      15,    16,    17,    18,    19,    20,   688,   689,    -1,   691,
      -1,    -1,    27,    28,    29,    30,   698,    -1,    -1,    34,
      -1,    36,    37,    38,    39,    -1,    -1,    42,     1,    -1,
      45,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,    -1,
      -1,    34,    -1,    36,    37,    38,    39,    -1,    -1,    42,
       1,    -1,    45,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,
      -1,    42,     1,    -1,    45,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,
      39,    -1,    -1,    42,     1,    -1,    45,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    39,    -1,    -1,    42,     1,    -1,    45,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    -1,    -1,    -1,    34,
      -1,    36,    37,    38,    39,    -1,    -1,    42,     1,    -1,
      45,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,    -1,
      -1,    34,    -1,    36,    37,    38,    39,    -1,    -1,    42,
       1,    -1,    45,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,
      -1,    42,     1,    -1,    45,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,
      39,    -1,    -1,    42,     1,    -1,    45,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    39,    -1,    -1,    42,     1,    -1,    45,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    -1,    -1,    -1,    34,
      -1,    36,    37,    38,    39,    -1,    -1,    42,     1,    -1,
      45,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,    -1,
      -1,    34,    -1,    36,    37,    38,    39,    -1,    -1,    42,
       1,    -1,    45,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,
      -1,    42,     1,    -1,    45,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,
      39,    -1,    -1,    42,     1,    -1,    45,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    39,    -1,    -1,    42,     1,    -1,    45,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    -1,    -1,    -1,    34,
      -1,    36,    37,    38,    39,    -1,    -1,    42,     1,    -1,
      45,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,    -1,
      -1,    34,    -1,    36,    37,    38,    39,    -1,    -1,    42,
       1,    -1,    45,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,
      -1,    42,     1,    -1,    45,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,
      39,    -1,    -1,    42,     1,    -1,    45,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    39,    -1,    -1,    42,     1,    -1,    45,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    -1,    -1,    -1,    34,
      -1,    36,    37,    38,    39,    -1,    -1,    42,     1,    -1,
      45,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,    -1,
      -1,    34,    -1,    36,    37,    38,    39,    -1,    -1,    42,
       1,    -1,    45,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,
      -1,    42,     1,    -1,    45,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,
      39,    -1,    -1,    42,     1,    -1,    45,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    39,    -1,    -1,    42,     1,    -1,    45,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    -1,    -1,    -1,    34,
      -1,    36,    37,    38,    39,    -1,    -1,    42,     1,    -1,
      45,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,    -1,
      -1,    34,    -1,    36,    37,    38,    39,    -1,    -1,    42,
       1,    -1,    45,    -1,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,
      -1,    42,     1,    -1,    45,    -1,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,
      39,    -1,    -1,    42,     1,    -1,    45,    -1,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    39,    -1,    -1,    42,     1,    -1,    45,    -1,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    -1,    -1,    -1,    34,
      -1,    36,    37,    38,    39,    -1,    -1,    42,     1,    -1,
      45,    -1,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,    -1,
      -1,    34,    -1,    36,    37,    38,    39,    -1,    -1,    42,
       1,    -1,    45,    -1,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,
      -1,    42,     1,    -1,    45,    -1,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,
      39,    -1,    -1,    42,     1,    -1,    45,    -1,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    39,    -1,    -1,    42,     1,    -1,    45,    -1,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    -1,    -1,    -1,    34,
      -1,    36,    37,    38,    39,    -1,    -1,    42,     1,    -1,
      45,    -1,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,    -1,
      -1,    34,    -1,    36,    37,    38,    39,    -1,    -1,    42,
       1,    -1,    45,    -1,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,
      -1,    42,     1,    -1,    45,    -1,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,
      39,    -1,    -1,    42,     1,    -1,    45,    -1,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    39,    -1,    -1,    42,     1,    -1,    45,    -1,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    -1,    -1,    -1,    34,
      -1,    36,    37,    38,    39,    -1,    -1,    42,     1,    -1,
      45,    -1,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,    -1,
      -1,    34,    -1,    36,    37,    38,    39,    -1,    -1,    42,
       1,    -1,    45,    -1,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,
      -1,    42,     1,    -1,    45,    -1,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,
      39,    -1,    -1,    42,     1,    -1,    45,    -1,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    39,    -1,    -1,    42,     1,    -1,    45,    -1,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    -1,    -1,    -1,    34,
      -1,    36,    37,    38,    39,    -1,    -1,    42,     1,    -1,
      45,    -1,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,    -1,
      -1,    34,    -1,    36,    37,    38,    39,    -1,    -1,    42,
       1,    -1,    45,    -1,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,
      -1,    42,     1,    -1,    45,    -1,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,
      39,    -1,    -1,    42,     1,    -1,    45,    -1,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    39,    -1,    -1,    42,     1,    -1,    45,    -1,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    -1,    -1,    -1,    34,
      -1,    36,    37,    38,    39,    -1,    -1,    42,     1,    -1,
      45,    -1,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,    -1,
      -1,    34,    -1,    36,    37,    38,    39,    -1,    -1,    42,
       1,    -1,    45,    -1,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,
      -1,    42,     1,    -1,    45,    -1,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,
      39,    -1,    -1,    42,     1,    -1,    45,    -1,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    39,    -1,    -1,    42,     1,    -1,    45,    -1,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    -1,    -1,    -1,    34,
      -1,    36,    37,    38,    39,    -1,    -1,    42,     1,    -1,
      45,    -1,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,    -1,
      -1,    34,    -1,    36,    37,    38,    39,    -1,    -1,    42,
       1,    -1,    45,    -1,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,
      -1,    42,     1,    -1,    45,    -1,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,
      39,    -1,    -1,    42,     1,    -1,    45,    -1,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    39,    -1,    -1,    42,     1,    -1,    45,    -1,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    -1,    -1,    -1,    34,
      -1,    36,    37,    38,    39,    -1,    -1,    42,     1,    -1,
      45,    -1,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,    -1,
      -1,    34,    -1,    36,    37,    38,    39,    -1,    -1,    42,
       1,    -1,    45,    -1,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,
      -1,    42,     1,    -1,    45,    -1,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,
      39,    -1,    -1,    42,     1,    -1,    45,    -1,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    39,    -1,    -1,    42,     1,    -1,    45,    -1,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    -1,    -1,    -1,    34,
      -1,    36,    37,    38,    39,    -1,    -1,    42,     1,    -1,
      45,    -1,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,    -1,
      -1,    34,    -1,    36,    37,    38,    39,    -1,    -1,    42,
       1,    -1,    45,    -1,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,
      -1,    42,     1,    -1,    45,    -1,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,
      39,    -1,     1,    42,    -1,    44,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,
      39,    -1,     1,    42,    -1,    44,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,
      39,    -1,     1,    42,    -1,    44,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,
      39,    -1,     1,    42,    -1,    44,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,
      39,    -1,     1,    42,    -1,    44,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,
      39,    -1,     1,    42,    -1,    44,     5,     6,     7,     8,
      -1,     1,    -1,    -1,    13,     5,     6,     7,     8,    -1,
       1,    -1,    -1,    13,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,     1,    -1,    34,    -1,     5,     6,     7,
       8,    -1,     1,    42,    34,    13,     5,     6,     7,     8,
      -1,     1,    42,    34,    13,     5,     6,     7,     8,    -1,
      -1,    42,    -1,    13,     1,    -1,    34,    -1,     5,     6,
       7,     8,    -1,     1,    42,    34,    13,     5,     6,     7,
       8,    -1,     1,    42,    34,    13,     5,     6,     7,     8,
      -1,    -1,    42,    -1,    13,     1,    -1,    34,    -1,     5,
       6,     7,     8,    -1,     1,    42,    34,    13,     5,     6,
       7,     8,    -1,    -1,    42,    34,    13,    -1,     1,    -1,
      -1,    -1,    -1,    42,    -1,     8,     9,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    34,    21,    22,
      23,    24,    25,    26,     1,    42,    -1,    -1,    31,    32,
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
      33,     8,     9,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,    26,
       1,    -1,    -1,    -1,    31,    32,    33,     8,     9,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    26,    -1,     8,     9,    -1,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,     8,     9,    -1,    -1,    -1,    -1,    -1,
      41,    42,    43,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,     8,
       9,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    42,
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
      -1,    -1,    -1,    -1,    31,    32,    33,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,     8,     9,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    43,    -1,    -1,    -1,    21,    22,    23,    24,
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
      33,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    31,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,    21,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    -1,    31,    32,    33,    21,    22,
      23,    24,    25,    26,    -1,    41,    -1,    43,    31,    32,
      33,    21,    22,    23,    24,    25,    26,    -1,    41,    -1,
      43,    31,    32,    33,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    43,    31,    32,    33,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    43,    31,    32,    33,
      21,    22,    23,    24,    25,    26,    40,    -1,    -1,    -1,
      31,    32,    33,    21,    22,    23,    24,    25,    26,    40,
      -1,    -1,    -1,    31,    32,    33,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    31,    32,    33
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    14,    15,    16,    17,    47,    48,    49,    50,
      55,   100,    40,     0,     1,    49,     5,    12,    96,    42,
      41,    42,    51,     1,    58,    52,     1,    56,    40,    43,
      60,   100,    54,    96,    43,    60,    44,    61,    59,    96,
      53,    41,    61,    57,     1,     6,     7,     8,    13,    18,
      19,    20,    27,    28,    29,    30,    34,    36,    37,    38,
      39,    42,    45,    50,    62,    63,    64,    65,    66,    70,
      75,    76,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    96,    97,    99,   100,    43,
      41,    40,    54,    43,    42,    42,    42,    42,    42,    42,
      42,    42,    91,    96,    42,     1,    40,    80,    96,     1,
      80,    45,    62,    42,     1,    40,    40,    40,    31,    32,
      33,    21,    22,    23,    24,    25,    26,    92,    97,     9,
      98,    35,    42,    91,    96,    61,    60,    61,    43,     1,
      80,    67,     1,    96,     1,    84,    85,     1,    82,    96,
       1,    84,     1,    84,     1,    96,    40,     1,    40,    43,
      43,     1,    10,    11,    80,    93,    94,    82,    96,     1,
      86,    87,    88,    89,    90,    80,     1,    43,    80,    95,
      43,    43,    81,    96,    31,    31,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    41,    43,    41,    43,     1,    71,    40,     1,    82,
       1,    82,    96,    40,    40,    40,    40,    40,    40,     1,
       1,    95,    61,    63,    72,    74,    68,    43,    43,    43,
      43,    43,     4,    80,    74,     1,    74,    77,    78,    73,
      40,    74,    74,    74,    69,    81,    43,    74,    14,    15,
      16,    17,     5,     5,     5,    40,     5,     5,     5,     6,
       7,    13,    27,    29,    30,    34,    42,    82,    84,    85,
      86,    87,    88,    89,    90,    91,    96,    97,    99,     8,
       5,     5,     6,     7,    13,    34,    42,    86,    87,    88,
      89,    90,    91,    96,    97,    99,     5,    42,     5,    27,
      29,    30,     1,     5,     6,     7,    13,    27,    29,    30,
      34,    42,    82,    84,    85,    86,    87,    88,    89,    90,
      91,    96,    97,    99,     5,     6,     7,    13,    27,    29,
      30,    34,    42,    82,    84,    85,    86,    87,    88,    89,
      90,    91,    96,    97,    99,    41,    51,     5,    42,    31,
      32,    42,     1,    18,    19,    20,    38,    39,    44,    50,
      64,    65,    66,    70,    75,    76,    79,    80,    81,    83,
     100,    44,    61,    63,    96,    42,    42,    42,     5,    91,
      96,     1,    80,    32,    33,    92,    97,    98,    42,    91,
       5,    91,    96,     1,    80,    33,    92,    97,    98,    42,
      91,    43,    42,    42,    42,    42,    42,    42,    42,     5,
      91,    96,     1,    80,    31,    32,    33,    92,    97,    98,
      42,    91,    42,    42,    42,     5,    91,    96,     1,    80,
      31,    32,    33,    92,    97,    98,    42,    91,    52,    40,
      43,     5,    27,    29,    30,    82,    96,     1,    86,    43,
      40,    42,    42,    42,    42,     1,    40,    80,    45,    62,
      42,     1,    40,    40,    40,    96,    45,    62,    35,     1,
      84,     1,    84,     1,    84,    43,    43,     1,    86,    87,
      88,    89,    90,     1,    43,    95,    43,    43,    87,    88,
      89,    90,     1,    43,    95,     1,    84,     1,    84,     1,
      84,    43,     1,    84,     1,    84,     1,    84,    43,    43,
       5,    27,    29,    30,    82,    96,    86,    87,    88,    89,
      90,     1,    43,    95,     1,    84,     1,    84,     1,    84,
      43,    43,     5,    27,    29,    30,    82,    96,     1,    86,
      87,    88,    89,    90,     1,    43,    95,    54,    42,    42,
      42,     1,    80,    67,     1,    96,     1,    96,    40,     1,
      40,    45,     1,    80,    93,    94,    41,    51,    45,    80,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    42,    42,    42,    43,    43,    43,    43,    43,
      43,    43,    43,    42,    42,    42,    43,    43,    53,     1,
      84,     1,    84,     1,    84,    43,    43,    81,    31,    31,
      43,    43,    43,    43,    43,    43,    52,    40,     1,    84,
       1,    84,     1,    84,     1,    84,     1,    84,     1,    84,
      40,    43,    43,    43,    43,    43,    43,     1,    71,    40,
       1,    82,     1,    82,    96,    40,    40,    40,    40,    40,
      40,    54,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    72,    74,    68,    43,    43,    43,
      43,    43,    53,     4,    80,    74,     1,    74,    77,    78,
      40,    73,    40,    74,    74,    74,    69,    81,    43,    74
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    48,    48,    48,    49,    49,    51,    50,
      52,    53,    50,    50,    54,    54,    56,    57,    55,    58,
      59,    55,    55,    55,    60,    60,    60,    61,    61,    62,
      62,    63,    63,    63,    63,    63,    63,    63,    63,    64,
      64,    64,    64,    64,    64,    65,    65,    67,    68,    69,
      66,    71,    70,    70,    72,    73,    72,    74,    74,    75,
      75,    75,    75,    77,    76,    78,    76,    76,    76,    76,
      76,    79,    79,    80,    80,    81,    82,    82,    82,    82,
      82,    82,    83,    83,    83,    84,    84,    85,    85,    85,
      86,    86,    87,    87,    88,    88,    89,    89,    90,    90,
      90,    90,    90,    90,    90,    91,    91,    91,    91,    91,
      92,    92,    92,    92,    92,    92,    93,    94,    95,    95,
      95,    96,    97,    98,    99,    99,   100,   100,   100,   100
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     0,     4,
       0,     0,     7,     2,     3,     1,     0,     0,     8,     0,
       0,     8,     6,     6,     4,     2,     0,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     5,
       5,     5,     5,     5,     5,     1,     1,     0,     0,     0,
      12,     0,     6,     5,     1,     0,     4,     1,     1,     2,
       3,     3,     3,     0,     8,     0,     8,     2,     7,     7,
       7,     2,     2,     1,     1,     3,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     3,     3,     3,     1,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     1,     2,
       2,     4,     3,     4,     3,     1,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1
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
#line 104 "sintatic/sintatic.y"
                         {
            (yyval.typeNode) = buildNode("program", 99);
            (yyval.typeNode)->childNode = (yyvsp[0].typeNode);
            origin = (yyval.typeNode);
        }
#line 3543 "sintatic.tab.c"
    break;

  case 3: /* list_declaration: list_declaration main_declaration  */
#line 112 "sintatic/sintatic.y"
                                          {
            TreeNodes *aux = (yyvsp[-1].typeNode);
            while(aux->brotherNode != NULL) {
                aux = aux->brotherNode;
            }
            aux->brotherNode = (yyvsp[0].typeNode);
        }
#line 3555 "sintatic.tab.c"
    break;

  case 5: /* list_declaration: error  */
#line 120 "sintatic/sintatic.y"
                 { (yyval.typeNode) = buildNode("error program", 99); globalError= globalError+1; }
#line 3561 "sintatic.tab.c"
    break;

  case 8: /* $@1: %empty  */
#line 129 "sintatic/sintatic.y"
                  {
            int declr;
            declr = verifyReDeclaration(activeScope, (yyvsp[0].typeNode)->value, line, column);
            if(declr == 1){
                printf(" tipos var ");
                globalError = globalError + 1;
            }
            Symbol *aux = createItem((yyvsp[-1].typeNode)->value, (yyvsp[0].typeNode)->value, line, 0);
            aux->registrador = registrador;
            aux->regis_tipo = "$";
            insertItem(activeScope, aux);
            registrador = registrador + 1;
               
        }
#line 3580 "sintatic.tab.c"
    break;

  case 9: /* var_declaration: tipos var $@1 SEMICOLON  */
#line 142 "sintatic/sintatic.y"
                    {
            (yyval.typeNode) = buildNode("var_declaration",99);
            (yyval.typeNode)->childNode = (yyvsp[-3].typeNode); 
            (yyvsp[-3].typeNode)->brotherNode = (yyvsp[-2].typeNode);  
        }
#line 3590 "sintatic.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 147 "sintatic/sintatic.y"
                          { typeManyDeclaration = (yyvsp[-2].typeNode)->value; }
#line 3596 "sintatic.tab.c"
    break;

  case 11: /* $@3: %empty  */
#line 147 "sintatic/sintatic.y"
                                                                                    {
            int declr;
            declr = verifyReDeclaration(activeScope, (yyvsp[-3].typeNode)->value, line, column);
            if(declr == 1){
                    printf(" tipos var COMMA ");
                    globalError = globalError + 1;
            } 
            Symbol *aux = createItem((yyvsp[-4].typeNode)->value, (yyvsp[-3].typeNode)->value, line, 0);
            aux->registrador = registrador;
            aux->regis_tipo = "$";
            insertItem(activeScope, aux);
            registrador = registrador + 1;

        }
#line 3615 "sintatic.tab.c"
    break;

  case 12: /* var_declaration: tipos var COMMA $@2 many_declaration $@3 SEMICOLON  */
#line 160 "sintatic/sintatic.y"
                    {
            (yyval.typeNode) = buildNode("var_declaration",99);
            (yyval.typeNode)->childNode = (yyvsp[-6].typeNode); 
            (yyvsp[-6].typeNode)->brotherNode = (yyvsp[-5].typeNode);  
            (yyvsp[-5].typeNode)->brotherNode = (yyvsp[-2].typeNode); 
        }
#line 3626 "sintatic.tab.c"
    break;

  case 13: /* var_declaration: error SEMICOLON  */
#line 166 "sintatic/sintatic.y"
                          { (yyval.typeNode) = buildNode("SINTATIC ERR",10); globalError= globalError+1;}
#line 3632 "sintatic.tab.c"
    break;

  case 14: /* many_declaration: var COMMA many_declaration  */
#line 170 "sintatic/sintatic.y"
                                   {
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
                int declr;
                declr = verifyReDeclaration(activeScope, (yyvsp[-2].typeNode)->value, line, column);
                if(declr == 1){
                    printf(" var COMMA many_declaration ");    
                    globalError = globalError + 1;
                } 

                Symbol *aux2 = createItem(typeManyDeclaration, (yyvsp[-2].typeNode)->value, line, 0);
                aux2->registrador = registrador;
                aux2->regis_tipo = "$";
                insertItem(activeScope, aux2);
                registrador =  registrador+1;
        }
#line 3652 "sintatic.tab.c"
    break;

  case 15: /* many_declaration: var  */
#line 185 "sintatic/sintatic.y"
              {
                int declr;
                declr = verifyReDeclaration(activeScope, (yyvsp[0].typeNode)->value, line, column);
                if(declr == 1){
                    printf(" var ");  
                    globalError = globalError + 1;
                } 
                Symbol *aux3 = createItem(typeManyDeclaration, (yyvsp[0].typeNode)->value, line, 0);
                aux3->registrador = registrador;
                aux3->regis_tipo = "$";
                insertItem(activeScope, aux3);
                registrador =  registrador+1;
        }
#line 3670 "sintatic.tab.c"
    break;

  case 16: /* $@4: %empty  */
#line 201 "sintatic/sintatic.y"
                             {
            // novo Scopo
            Scope *newScope = buildScope((yyvsp[-1].typeNode)->value);
            newScope->parentScope = activeScope; 
            activeScope = newScope;

            threeAddress = alocar_memoria(threeAddress);
            sprintf(threeAddress + strlen(threeAddress), "%s:\n", (yyvsp[-1].typeNode)->value);
        
        }
#line 3685 "sintatic.tab.c"
    break;

  case 17: /* $@5: %empty  */
#line 210 "sintatic/sintatic.y"
                    {
            // criar o simbolos no escopo atual
            Symbol *aux  = createItem((yyvsp[-4].typeNode)->value, (yyvsp[-3].typeNode)->value, line, 1);
            aux->numArgs = numFuncArgs;
            insertItem(activeScope->parentScope, aux); 
            numFuncArgs = 0;
            
        }
#line 3698 "sintatic.tab.c"
    break;

  case 18: /* func_declaration: tipos var OPEN_PAREN $@4 list_args $@5 CLS_PAREN blockStmt  */
#line 217 "sintatic/sintatic.y"
                              {
            (yyval.typeNode) = buildNode("func_declaration",99);   
            (yyval.typeNode)->childNode = (yyvsp[-7].typeNode);
            (yyvsp[-7].typeNode)->brotherNode = (yyvsp[-6].typeNode);
            (yyvsp[-6].typeNode)->brotherNode = (yyvsp[-3].typeNode);
            (yyvsp[-3].typeNode)->brotherNode = (yyvsp[0].typeNode);

            // fecha o Scopo
            showScope(activeScope);
            Scope *auxScope = activeScope->parentScope;
            freeScope(activeScope);
            activeScope = auxScope;
        }
#line 3716 "sintatic.tab.c"
    break;

  case 19: /* $@6: %empty  */
#line 230 "sintatic/sintatic.y"
                                {
            // novo Scopo
            Scope *newScope = buildScope("main"); 
            newScope->parentScope = activeScope; 
            activeScope = newScope;

            threeAddress = alocar_memoria(threeAddress);
            sprintf(threeAddress + strlen(threeAddress), "%s:\n", "main");
        }
#line 3730 "sintatic.tab.c"
    break;

  case 20: /* $@7: %empty  */
#line 238 "sintatic/sintatic.y"
                          {
            // insere simbolos no escopo atual
            Symbol *aux = createItem((yyvsp[-4].typeNode)->value, "main", line, 1);
            aux->numArgs = numFuncArgs;
            insertItem(activeScope->parentScope, aux); 
            numFuncArgs = 0;  

            // main 
            isMain = isMain + 1;

        }
#line 3746 "sintatic.tab.c"
    break;

  case 21: /* func_declaration: tipos MAIN OPEN_PAREN $@6 list_args $@7 CLS_PAREN blockStmt  */
#line 248 "sintatic/sintatic.y"
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
            
        }
#line 3766 "sintatic.tab.c"
    break;

  case 22: /* func_declaration: tipos var OPEN_PAREN error CLS_PAREN blockStmt  */
#line 263 "sintatic/sintatic.y"
                                                         {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
#line 3775 "sintatic.tab.c"
    break;

  case 23: /* func_declaration: tipos MAIN OPEN_PAREN error CLS_PAREN blockStmt  */
#line 267 "sintatic/sintatic.y"
                                                                 {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
#line 3784 "sintatic.tab.c"
    break;

  case 24: /* list_args: tipos var COMMA list_args  */
#line 275 "sintatic/sintatic.y"
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
                    printf(" tipos var COMMA list_args ");  
                    globalError = globalError + 1;
                }
                Symbol *aux = createItem((yyvsp[-3].typeNode)->value, (yyvsp[-2].typeNode)->value, line, 0);
                aux->registrador = registrador;
                aux->regis_tipo = "#"; 
                insertItem(activeScope, aux); 
                registrador = registrador+1;                
        }
#line 3809 "sintatic.tab.c"
    break;

  case 25: /* list_args: tipos var  */
#line 295 "sintatic/sintatic.y"
                    {
                int declr;
                numFuncArgs = numFuncArgs + 1;
                declr = verifyReDeclaration(activeScope, (yyvsp[0].typeNode)->value, line, column);
                if(declr == 1){
                    printf(" tipos var ");      
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
#line 3832 "sintatic.tab.c"
    break;

  case 26: /* list_args: %empty  */
#line 313 "sintatic/sintatic.y"
                 {
                (yyval.typeNode) = buildNode("no_args", 99); 
        }
#line 3840 "sintatic.tab.c"
    break;

  case 27: /* blockStmt: OP_CUR_BRACKET CLS_CUR_BRACKET  */
#line 319 "sintatic/sintatic.y"
                                        {
                (yyval.typeNode) = buildNode("empty block", 99); 
        }
#line 3848 "sintatic.tab.c"
    break;

  case 28: /* blockStmt: OP_CUR_BRACKET list_statements CLS_CUR_BRACKET  */
#line 322 "sintatic/sintatic.y"
                                                         {
                (yyval.typeNode) = (yyvsp[-1].typeNode);
        }
#line 3856 "sintatic.tab.c"
    break;

  case 29: /* list_statements: stmt list_statements  */
#line 328 "sintatic/sintatic.y"
                             {
               (yyval.typeNode) = (yyvsp[-1].typeNode);
               (yyvsp[-1].typeNode)->brotherNode = (yyvsp[0].typeNode); 
        }
#line 3865 "sintatic.tab.c"
    break;

  case 39: /* input_output_expr: write_commands OPEN_PAREN str_expr CLS_PAREN SEMICOLON  */
#line 347 "sintatic/sintatic.y"
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
#line 3889 "sintatic.tab.c"
    break;

  case 40: /* input_output_expr: write_commands OPEN_PAREN expr CLS_PAREN SEMICOLON  */
#line 366 "sintatic/sintatic.y"
                                                             {
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
                        
                threeAddress = alocar_memoria(threeAddress);
                if((yyvsp[-2].typeNode)->registrador == -1){
                        Symbol *auxVar = findItem(activeScope, (yyvsp[-2].typeNode)->value);
                        if(auxVar != NULL ){ 
                            if(strcmp((yyvsp[-4].typeNode)->value,"CMD_WRITE_STR") == 0) {
                                sprintf(threeAddress + strlen(threeAddress), "print $%d // print \n", auxVar->registrador);
                            }else {
                                sprintf(threeAddress + strlen(threeAddress), "println $%d // print \n", auxVar->registrador); 
                            }       
                        } 
                }else{
                        if(strcmp((yyvsp[-4].typeNode)->value,"CMD_WRITE_STR") == 0) {
                             sprintf(threeAddress + strlen(threeAddress), "print $%d // print \n", (yyvsp[-2].typeNode)->registrador);
                        }else {
                              sprintf(threeAddress + strlen(threeAddress), "println $%d // print \n", (yyvsp[-2].typeNode)->registrador); 
                        } 
                }
        }
#line 3915 "sintatic.tab.c"
    break;

  case 41: /* input_output_expr: write_commands OPEN_PAREN char_expr CLS_PAREN SEMICOLON  */
#line 387 "sintatic/sintatic.y"
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
#line 3940 "sintatic.tab.c"
    break;

  case 42: /* input_output_expr: CMD_READ OPEN_PAREN var CLS_PAREN SEMICOLON  */
#line 407 "sintatic/sintatic.y"
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
#line 3967 "sintatic.tab.c"
    break;

  case 43: /* input_output_expr: write_commands OPEN_PAREN error CLS_PAREN SEMICOLON  */
#line 429 "sintatic/sintatic.y"
                                                              {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
#line 3976 "sintatic.tab.c"
    break;

  case 44: /* input_output_expr: CMD_READ OPEN_PAREN error CLS_PAREN SEMICOLON  */
#line 433 "sintatic/sintatic.y"
                                                        {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
#line 3985 "sintatic.tab.c"
    break;

  case 45: /* write_commands: CMD_WRITE  */
#line 440 "sintatic/sintatic.y"
                 {
              (yyval.typeNode) = buildNode("CMD_WRITE_STR", 99);
      }
#line 3993 "sintatic.tab.c"
    break;

  case 46: /* write_commands: CMD_WRITELN  */
#line 443 "sintatic/sintatic.y"
                    {
              (yyval.typeNode) = buildNode("CMD_WRITELN_STR", 99);
      }
#line 4001 "sintatic.tab.c"
    break;

  case 47: /* $@8: %empty  */
#line 449 "sintatic/sintatic.y"
                           {
            // novo Scopo    
            Scope *newScope = buildScope("Block FOR");
            newScope->parentScope = activeScope; 
            activeScope = newScope;
            
        }
#line 4013 "sintatic.tab.c"
    break;

  case 48: /* $@9: %empty  */
#line 455 "sintatic/sintatic.y"
                           {
             threeAddress = alocar_memoria(threeAddress);
             sprintf(threeAddress + strlen(threeAddress), "FOR: \n");
        }
#line 4022 "sintatic.tab.c"
    break;

  case 49: /* $@10: %empty  */
#line 458 "sintatic/sintatic.y"
                         {
             threeAddress = alocar_memoria(threeAddress);
             sprintf(threeAddress + strlen(threeAddress), "brz ENDFOR, $%d \n", (yyvsp[-1].typeNode)->registrador);   
             // brz FIMFOR, $3 // i < 10
        }
#line 4032 "sintatic.tab.c"
    break;

  case 50: /* iteration_expr: CMD_FOR OPEN_PAREN $@8 assign SEMICOLON $@9 expr SEMICOLON $@10 assign CLS_PAREN simple_complex_block_stmt  */
#line 462 "sintatic/sintatic.y"
                                                     {     
             (yyval.typeNode) = buildNode("for", 99);

             (yyval.typeNode)->childNode = (yyvsp[-8].typeNode);
             (yyvsp[-8].typeNode)->brotherNode = (yyvsp[-5].typeNode);
             (yyvsp[-5].typeNode)->brotherNode = (yyvsp[-2].typeNode);
             (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);  
             
             threeAddress = alocar_memoria(threeAddress);
             sprintf(threeAddress + strlen(threeAddress), "jump FOR \n");
             
             threeAddress = alocar_memoria(threeAddress);
             sprintf(threeAddress + strlen(threeAddress), "ENDFOR: \n");
             // fecha o Scopo
             showScope(activeScope);
             Scope *auxScope = activeScope->parentScope;
             freeScope(activeScope);
             activeScope = auxScope;
        }
#line 4056 "sintatic.tab.c"
    break;

  case 51: /* $@11: %empty  */
#line 484 "sintatic/sintatic.y"
                                         {
            Scope *newScope = buildScope("Block IF ");
            newScope->parentScope = activeScope; 
            newScope->jump = jumpReg;
            activeScope = newScope;

            threeAddress = alocar_memoria(threeAddress);
            sprintf(threeAddress + strlen(threeAddress), "brz L%d, $%d\n", newScope->jump, (yyvsp[-1].typeNode)->registrador);
            jumpReg = jumpReg+1;
        }
#line 4071 "sintatic.tab.c"
    break;

  case 52: /* condition_expr: CMD_IF OPEN_PAREN expr CLS_PAREN $@11 block_cond  */
#line 493 "sintatic/sintatic.y"
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
#line 4087 "sintatic.tab.c"
    break;

  case 53: /* condition_expr: CMD_IF OPEN_PAREN error CLS_PAREN error  */
#line 504 "sintatic/sintatic.y"
                                                  {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
#line 4096 "sintatic.tab.c"
    break;

  case 54: /* block_cond: simple_complex_block_stmt  */
#line 511 "sintatic/sintatic.y"
                                  {
                
                threeAddress = alocar_memoria(threeAddress);
                sprintf(threeAddress + strlen(threeAddress), "L%d: \n", activeScope->jump);
                
                //printf("AQQUI x L%d: \n",activeScope->jump);
        }
#line 4108 "sintatic.tab.c"
    break;

  case 55: /* $@12: %empty  */
#line 518 "sintatic/sintatic.y"
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
#line 4129 "sintatic.tab.c"
    break;

  case 56: /* block_cond: simple_complex_block_stmt CMD_ELSE $@12 simple_complex_block_stmt  */
#line 533 "sintatic/sintatic.y"
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
#line 4149 "sintatic.tab.c"
    break;

  case 59: /* return_stmt: CMD_RETURN SEMICOLON  */
#line 556 "sintatic/sintatic.y"
                             {
              (yyval.typeNode) = buildNode("return", 99);  
        }
#line 4157 "sintatic.tab.c"
    break;

  case 60: /* return_stmt: CMD_RETURN expr SEMICOLON  */
#line 559 "sintatic/sintatic.y"
                                     {
                int tipo;
                tipo = findTypeOfReturnFunc(activeScope);
                (yyval.typeNode) = buildNode("return", tipo);  
                
                if(tipo != (yyvsp[-1].typeNode)->type) {
                   char* cast;
                   cast = castToSpecificType(tipo, (yyvsp[-1].typeNode)->type);
                   if(strcmp(cast,"Cast Error!") == 0){
                        printf("1 ERRRRROOOOOOOOOO NO castToSpecificType \n");   
                        globalError = globalError + 1;    
                   }     
                   (yyval.typeNode)->childNode = buildNode(cast, tipo);
                   (yyval.typeNode)->childNode->childNode = (yyvsp[-1].typeNode);
                }else{
                   (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
                }

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
#line 4193 "sintatic.tab.c"
    break;

  case 61: /* return_stmt: CMD_RETURN error SEMICOLON  */
#line 590 "sintatic/sintatic.y"
                                     {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
#line 4202 "sintatic.tab.c"
    break;

  case 62: /* return_stmt: CMD_RETURN expr error  */
#line 594 "sintatic/sintatic.y"
                                {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
#line 4211 "sintatic.tab.c"
    break;

  case 63: /* $@13: %empty  */
#line 601 "sintatic/sintatic.y"
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
#line 4227 "sintatic.tab.c"
    break;

  case 64: /* set_stmt: CMD_FORALL OPEN_PAREN var IN_OP func_expr CLS_PAREN $@13 simple_complex_block_stmt  */
#line 611 "sintatic/sintatic.y"
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
#line 4244 "sintatic.tab.c"
    break;

  case 65: /* $@14: %empty  */
#line 623 "sintatic/sintatic.y"
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
#line 4264 "sintatic.tab.c"
    break;

  case 66: /* set_stmt: CMD_FORALL OPEN_PAREN var IN_OP var CLS_PAREN $@14 simple_complex_block_stmt  */
#line 637 "sintatic/sintatic.y"
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
#line 4281 "sintatic.tab.c"
    break;

  case 68: /* set_stmt: CMD_FORALL OPEN_PAREN error IN_OP error CLS_PAREN simple_complex_block_stmt  */
#line 650 "sintatic/sintatic.y"
                                                                                      {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
#line 4290 "sintatic.tab.c"
    break;

  case 69: /* set_stmt: CMD_FORALL OPEN_PAREN error IN_OP func_expr CLS_PAREN error  */
#line 654 "sintatic/sintatic.y"
                                                                      {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
#line 4299 "sintatic.tab.c"
    break;

  case 70: /* set_stmt: CMD_FORALL OPEN_PAREN var IN_OP error CLS_PAREN simple_complex_block_stmt  */
#line 658 "sintatic/sintatic.y"
                                                                                    {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
#line 4308 "sintatic.tab.c"
    break;

  case 72: /* expr_stmt: expr error  */
#line 665 "sintatic/sintatic.y"
                     {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
#line 4317 "sintatic.tab.c"
    break;

  case 75: /* assign: var ATRIBUTION expr  */
#line 677 "sintatic/sintatic.y"
                            {

        //       if(strcmp($3->value,"EMPTY") == 0){
        //         printf("EMPTYYYYY %d %d \n",$1->type, $3->type);
        //       }  
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
                     //printf(" 2 ERRRRROOOOOOOOOO NO castToSpecificType! \n");   
                     globalError = globalError + 1;    
                }  
                (yyvsp[-2].typeNode)->brotherNode = buildNode(cast, (yyvsp[-2].typeNode)->type);
                (yyvsp[-2].typeNode)->brotherNode->childNode = (yyvsp[0].typeNode);  
              }else{
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
              }
              
                Symbol *auxVar = findItem(activeScope, (yyvsp[-2].typeNode)->value);
                if(auxVar != NULL){
                  threeAddress = alocar_memoria(threeAddress);
                  if((yyvsp[0].typeNode)->registrador == -1){   
                    Symbol *auxExpr = findItem(activeScope, (yyvsp[0].typeNode)->value); 
                    if(auxExpr != NULL){
                      sprintf(threeAddress + strlen(threeAddress), "mov $%d, $%d // var %s = %s \n", auxVar->registrador, auxExpr->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);        
                    }
                  }else{
	             sprintf(threeAddress + strlen(threeAddress), "mov $%d, $%d // var %s = %s \n", auxVar->registrador, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                  }   
                  
                  (yyvsp[-2].typeNode)->registrador = auxVar->registrador;
                  (yyvsp[-2].typeNode)->regis_tipo = "$";
                }
              
        }
#line 4365 "sintatic.tab.c"
    break;

  case 76: /* func_expr: ADD_FUNC OPEN_PAREN func_in_expr CLS_PAREN  */
#line 723 "sintatic/sintatic.y"
                                                   {
                (yyval.typeNode) = buildNode(" add ", 99);
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 4374 "sintatic.tab.c"
    break;

  case 77: /* func_expr: REMOVE_FUNC OPEN_PAREN func_in_expr CLS_PAREN  */
#line 727 "sintatic/sintatic.y"
                                                        {
                (yyval.typeNode) = buildNode(" remove ", 99);
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 4383 "sintatic.tab.c"
    break;

  case 78: /* func_expr: EXIST_FUNC OPEN_PAREN func_in_expr CLS_PAREN  */
#line 731 "sintatic/sintatic.y"
                                                       {
                (yyval.typeNode) = buildNode(" exist ", 99);
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 4392 "sintatic.tab.c"
    break;

  case 79: /* func_expr: ADD_FUNC OPEN_PAREN error CLS_PAREN  */
#line 735 "sintatic/sintatic.y"
                                              {
             (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);   
        }
#line 4400 "sintatic.tab.c"
    break;

  case 80: /* func_expr: REMOVE_FUNC OPEN_PAREN error CLS_PAREN  */
#line 738 "sintatic/sintatic.y"
                                                 {
             (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);   
        }
#line 4408 "sintatic.tab.c"
    break;

  case 81: /* func_expr: EXIST_FUNC OPEN_PAREN error CLS_PAREN  */
#line 741 "sintatic/sintatic.y"
                                                {
             (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);    
        }
#line 4416 "sintatic.tab.c"
    break;

  case 82: /* is_set_expr: IS_SET_FUNC OPEN_PAREN var CLS_PAREN  */
#line 747 "sintatic/sintatic.y"
                                             {
              int undeclr;
              undeclr = verifyUnDeclaration(activeScope, (yyvsp[-1].typeNode)->value, line, column);
              if(undeclr == 0){
                globalError = globalError + 1; 
              }
              (yyval.typeNode) = buildNode(" is_set ", 99);
              (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 4430 "sintatic.tab.c"
    break;

  case 83: /* is_set_expr: IS_SET_FUNC OPEN_PAREN func_expr CLS_PAREN  */
#line 756 "sintatic/sintatic.y"
                                                     {
                (yyval.typeNode) = buildNode(" is_set ", 99);
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 4439 "sintatic.tab.c"
    break;

  case 84: /* is_set_expr: IS_SET_FUNC OPEN_PAREN error CLS_PAREN  */
#line 760 "sintatic/sintatic.y"
                                                 {
             (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);   
             globalError= globalError+1; 
        }
#line 4448 "sintatic.tab.c"
    break;

  case 85: /* func_in_expr: op_or_expr IN_OP var  */
#line 766 "sintatic/sintatic.y"
                             {
                int undeclr;
                undeclr = verifyUnDeclaration(activeScope, (yyvsp[0].typeNode)->value, line, column);
                if(undeclr == 0){
                        printf(" op_or_expr IN_OP var ");  
                        globalError = globalError + 1; 
                }
                (yyval.typeNode) = buildNode(" IN ", 99);
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 4464 "sintatic.tab.c"
    break;

  case 86: /* func_in_expr: op_or_expr IN_OP func_expr  */
#line 777 "sintatic/sintatic.y"
                                     {
                (yyval.typeNode) = buildNode(" IN ", 99);
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 4474 "sintatic.tab.c"
    break;

  case 87: /* op_or_expr: op_or_expr OP_OR op_and_expr  */
#line 790 "sintatic/sintatic.y"
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
                
                threeAddress = alocar_memoria(threeAddress);
                if(aux1 != NULL && aux3 != NULL){
                  sprintf(threeAddress + strlen(threeAddress), "and $%d, $%d, $%d //  %s &&  %s  \n", registrador, aux1->registrador, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                }           
              }else if((yyvsp[-2].typeNode)->registrador != -1 && (yyvsp[0].typeNode)->registrador == -1){
                Symbol *aux1 = findItem(activeScope, (yyvsp[-2].typeNode)->value);
                threeAddress = alocar_memoria(threeAddress);

                if(aux1 != NULL){
                  sprintf(threeAddress + strlen(threeAddress), "and $%d, $%d, $%d //  %s &&  %s  \n", registrador,  aux1->registrador ,(yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                }
              }else if((yyvsp[-2].typeNode)->registrador != -1 && (yyvsp[0].typeNode)->registrador == -1){   
                Symbol *aux3 = findItem(activeScope, (yyvsp[-2].typeNode)->value);
                threeAddress = alocar_memoria(threeAddress);
                if(aux3 != NULL){
                   sprintf(threeAddress + strlen(threeAddress), "and $%d, $%d, $%d //  %s &&  %s  \n", registrador, (yyvsp[-2].typeNode)->registrador, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                }        
              }else{
                threeAddress = alocar_memoria(threeAddress);        
                sprintf(threeAddress + strlen(threeAddress), "and $%d, $%d, $%d //  %s &&  %s  \n", registrador, (yyvsp[-2].typeNode)->registrador, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
              }   

              (yyval.typeNode)->registrador = registrador;
              (yyval.typeNode)->regis_tipo = "$"; 
              registrador = registrador+1;      


        }
#line 4534 "sintatic.tab.c"
    break;

  case 90: /* op_and_expr: op_and_expr OP_AND logical_expr  */
#line 850 "sintatic/sintatic.y"
                                        {
                (yyval.typeNode) = buildNode("and", 0);

                if((yyvsp[-2].typeNode)->registrador == -1 && (yyvsp[0].typeNode)->registrador == -1){
                  Symbol *aux1 = findItem(activeScope, (yyvsp[-2].typeNode)->value);
                  Symbol *aux3 = findItem(activeScope, (yyvsp[0].typeNode)->value);
                        
                  threeAddress = alocar_memoria(threeAddress);
                  if(aux1 != NULL && aux3 != NULL){
                        sprintf(threeAddress + strlen(threeAddress), "and $%d, $%d, $%d //  %s &&  %s  \n", registrador, aux1->registrador, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                   }           
                }else if((yyvsp[-2].typeNode)->registrador != -1 && (yyvsp[0].typeNode)->registrador == -1){
                  Symbol *aux1 = findItem(activeScope, (yyvsp[-2].typeNode)->value);
                  threeAddress = alocar_memoria(threeAddress);
                  if(aux1 != NULL){
                        sprintf(threeAddress + strlen(threeAddress), "and $%d, $%d, $%d //  %s &&  %s  \n", registrador,  aux1->registrador ,(yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                  }
                }else if((yyvsp[-2].typeNode)->registrador != -1 && (yyvsp[0].typeNode)->registrador == -1){   
                  Symbol *aux3 = findItem(activeScope, (yyvsp[-2].typeNode)->value);
                  threeAddress = alocar_memoria(threeAddress);
                  if(aux3 != NULL){
                        sprintf(threeAddress + strlen(threeAddress), "and $%d, $%d, $%d //  %s &&  %s  \n", registrador, (yyvsp[-2].typeNode)->registrador, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                  }        
                }else{
                  threeAddress = alocar_memoria(threeAddress);        
                  sprintf(threeAddress + strlen(threeAddress), "and $%d, $%d, $%d //  %s &&  %s  \n", registrador, (yyvsp[-2].typeNode)->registrador, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
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
#line 4592 "sintatic.tab.c"
    break;

  case 92: /* logical_expr: logical_expr logical_ops arithmetic_expr  */
#line 907 "sintatic/sintatic.y"
                                                {
              (yyval.typeNode) = (yyvsp[-1].typeNode);
              //      $2->childNode = $1; 
              //      $1->brotherNode = $3;

              if((yyvsp[-2].typeNode)->registrador == -1 && (yyvsp[0].typeNode)->registrador == -1){
                Symbol *aux1 = findItem(activeScope, (yyvsp[-2].typeNode)->value);
                Symbol *aux3 = findItem(activeScope, (yyvsp[0].typeNode)->value);
                        
                threeAddress = alocar_memoria(threeAddress);
                if(aux1 != NULL && aux3 != NULL){
                        if(strcmp((yyvsp[-1].typeNode)->value, "GTE_OP") == 0 || strcmp((yyvsp[-1].typeNode)->value, "GT_OP") == 0 ){
                           sprintf(threeAddress + strlen(threeAddress), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, aux3->registrador, aux1->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                        }else if(strcmp((yyvsp[-1].typeNode)->value, "NEQ_OP") == 0 ){
                           sprintf(threeAddress + strlen(threeAddress), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, aux1->registrador, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                           threeAddress = alocar_memoria(threeAddress);
                           sprintf(threeAddress + strlen(threeAddress), "not $%d, $%d \n", registrador, registrador);
                        }else{
                           sprintf(threeAddress + strlen(threeAddress), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, aux1->registrador, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                        }
                } 

              }else if((yyvsp[-2].typeNode)->registrador == -1 && (yyvsp[0].typeNode)->registrador != -1){  
                Symbol *aux1 = findItem(activeScope, (yyvsp[-2].typeNode)->value); 
                threeAddress = alocar_memoria(threeAddress);  
                if(aux1 != NULL){
                        if(strcmp((yyvsp[-1].typeNode)->value, "GTE_OP") == 0 || strcmp((yyvsp[-1].typeNode)->value, "GT_OP") == 0 ){
                           sprintf(threeAddress + strlen(threeAddress), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, (yyvsp[0].typeNode)->registrador, aux1->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                        }else if(strcmp((yyvsp[-1].typeNode)->value, "NEQ_OP") == 0 ){
                           sprintf(threeAddress + strlen(threeAddress), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, aux1->registrador, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                           threeAddress = alocar_memoria(threeAddress);
                           sprintf(threeAddress + strlen(threeAddress), "not $%d, $%d \n", registrador, registrador);     
                        }else{
                           sprintf(threeAddress + strlen(threeAddress), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, aux1->registrador, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                        }
                }

              }else if((yyvsp[-2].typeNode)->registrador != -1 && (yyvsp[0].typeNode)->registrador == -1){
                Symbol *aux3 = findItem(activeScope, (yyvsp[-2].typeNode)->value); 
                threeAddress = alocar_memoria(threeAddress);  
                if(aux3 != NULL){
                        if(strcmp((yyvsp[-1].typeNode)->value, "GTE_OP") == 0 || strcmp((yyvsp[-1].typeNode)->value, "GT_OP") == 0 ){
                          sprintf(threeAddress + strlen(threeAddress), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, (yyvsp[-2].typeNode)->registrador, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                        }else if(strcmp((yyvsp[-1].typeNode)->value, "NEQ_OP") == 0 ){
                           sprintf(threeAddress + strlen(threeAddress), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, aux3->registrador, (yyvsp[-2].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);     
                           threeAddress = alocar_memoria(threeAddress);
                           sprintf(threeAddress + strlen(threeAddress), "not $%d, $%d \n", registrador, registrador);     
                        }else{
                          sprintf(threeAddress + strlen(threeAddress), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, aux3->registrador, (yyvsp[-2].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                        }
                }     
              }else {
                threeAddress = alocar_memoria(threeAddress);
                if(strcmp((yyvsp[-1].typeNode)->value, "GTE_OP") == 0 || strcmp((yyvsp[-1].typeNode)->value, "GT_OP") == 0 ){      
                        sprintf(threeAddress + strlen(threeAddress), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                }else if(strcmp((yyvsp[-1].typeNode)->value, "NEQ_OP") == 0 ){
                        sprintf(threeAddress + strlen(threeAddress), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, (yyvsp[-2].typeNode)->registrador, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                        threeAddress = alocar_memoria(threeAddress);
                        sprintf(threeAddress + strlen(threeAddress), "not $%d, $%d \n", registrador, registrador);
                }else{
                        sprintf(threeAddress + strlen(threeAddress), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, (yyvsp[-2].typeNode)->registrador, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
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
#line 4686 "sintatic.tab.c"
    break;

  case 94: /* arithmetic_expr: arithmetic_expr adds_op mult_expr  */
#line 1000 "sintatic/sintatic.y"
                                          {
              
                if((yyvsp[-2].typeNode)->registrador == -1 && (yyvsp[0].typeNode)->registrador == -1){
                        Symbol *aux1 = findItem(activeScope, (yyvsp[-2].typeNode)->value);
                        Symbol *aux3 = findItem(activeScope, (yyvsp[0].typeNode)->value);
                        
                        threeAddress = alocar_memoria(threeAddress);
                        if(aux1 != NULL && aux3 != NULL){
                            if(strcmp((yyvsp[-1].typeNode)->value, "+") == 0){
                                sprintf(threeAddress + strlen(threeAddress), "add $%d, %s%d, %s%d // var %s + var %s  \n", registrador, aux1->regis_tipo, aux1->registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                            }else{
                                sprintf(threeAddress + strlen(threeAddress), "sub $%d, %s%d, %s%d // var %s + var %s  \n", registrador, aux1->regis_tipo, aux1->registrador, aux3->regis_tipo, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                            }
                       }
                }else if((yyvsp[-2].typeNode)->registrador == -1 && (yyvsp[0].typeNode)->registrador != -1){
                        Symbol *aux1 = findItem(activeScope, (yyvsp[-2].typeNode)->value);
                        threeAddress = alocar_memoria(threeAddress);
                        if(aux1 != NULL){
                            if(strcmp((yyvsp[-1].typeNode)->value, "+") == 0){
                                sprintf(threeAddress + strlen(threeAddress), "add $%d, $%d, $%d // var %s + var %s  \n", registrador,  aux1->registrador ,(yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                            }else{
                                sprintf(threeAddress + strlen(threeAddress), "sub $%d, $%d, $%d // var %s + var %s  \n", registrador,  aux1->registrador, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                            }
                       }
                }else if((yyvsp[-2].typeNode)->registrador != -1 && (yyvsp[0].typeNode)->registrador == -1){
                        Symbol *aux3 = findItem(activeScope, (yyvsp[0].typeNode)->value);
                        threeAddress = alocar_memoria(threeAddress);
                        if(aux3 != NULL){
                            if(strcmp((yyvsp[-1].typeNode)->value, "+") == 0){
                                sprintf(threeAddress + strlen(threeAddress), "add $%d, $%d, $%d // var %s + var %s  \n", registrador,  (yyvsp[-2].typeNode)->registrador ,aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                            }else{
                                sprintf(threeAddress + strlen(threeAddress), "sub $%d, $%d, $%d // var %s + var %s  \n", registrador,  (yyvsp[-2].typeNode)->registrador, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                            }
                       }
                }else{
                        threeAddress = alocar_memoria(threeAddress);   
                        if(strcmp((yyvsp[-1].typeNode)->value, "+") == 0){
                                sprintf(threeAddress + strlen(threeAddress), "add $%d, $%d, $%d // var %s + var %s  \n", registrador,  (yyvsp[-2].typeNode)->registrador ,(yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                        }else{
                                sprintf(threeAddress + strlen(threeAddress), "sub $%d, $%d, $%d // var %s + var %s  \n", registrador,  (yyvsp[-2].typeNode)->registrador, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
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
                        printf("3 ERRRRROOOOOOOOOO NO castType ");   
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
                        printf("4 ERRRRROOOOOOOOOO NO castType ");   
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
#line 4774 "sintatic.tab.c"
    break;

  case 96: /* mult_expr: mult_expr mult_ops first_term  */
#line 1087 "sintatic/sintatic.y"
                                      {

              if((yyvsp[-2].typeNode)->registrador == -1 && (yyvsp[0].typeNode)->registrador == -1){
                Symbol *aux1 = findItem(activeScope, (yyvsp[-2].typeNode)->value);
                Symbol *aux3 = findItem(activeScope, (yyvsp[0].typeNode)->value);
                if(aux1 != NULL && aux3 != NULL){
                        threeAddress = alocar_memoria(threeAddress);
                        if(strcmp((yyvsp[-1].typeNode)->value, "*") == 0){
                                sprintf(threeAddress + strlen(threeAddress), "mul $%d, $%d, $%d // var %s */ var %s  \n", registrador, aux1->registrador, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);   
                        }else{
                                sprintf(threeAddress + strlen(threeAddress), "div $%d, $%d, $%d // var %s */ var %s  \n", registrador, aux1->registrador, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                        } 
                }
              }else if((yyvsp[-2].typeNode)->registrador == -1 && (yyvsp[0].typeNode)->registrador != -1){
                        Symbol *aux1 = findItem(activeScope, (yyvsp[-2].typeNode)->value);
                        threeAddress = alocar_memoria(threeAddress);
                        if(aux1 != NULL){
                            if(strcmp((yyvsp[-1].typeNode)->value, "*") == 0){
                                sprintf(threeAddress + strlen(threeAddress), "mul $%d, $%d, $%d // var %s + var %s  \n", registrador,  aux1->registrador ,(yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                            }else{
                                sprintf(threeAddress + strlen(threeAddress), "div $%d, $%d, $%d // var %s + var %s  \n", registrador,  aux1->registrador, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                            }
                       }
                }else if((yyvsp[-2].typeNode)->registrador != -1 && (yyvsp[0].typeNode)->registrador == -1){
                        Symbol *aux3 = findItem(activeScope, (yyvsp[0].typeNode)->value);
                        threeAddress = alocar_memoria(threeAddress);
                        if(aux3 != NULL){
                            if(strcmp((yyvsp[-1].typeNode)->value, "*") == 0){
                                sprintf(threeAddress + strlen(threeAddress), "mul $%d, $%d, $%d // var %s + var %s  \n", registrador,  (yyvsp[-2].typeNode)->registrador ,aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                            }else{
                                sprintf(threeAddress + strlen(threeAddress), "div $%d, $%d, $%d // var %s + var %s  \n", registrador,  (yyvsp[-2].typeNode)->registrador, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                            }
                       }
                }else{
                        threeAddress = alocar_memoria(threeAddress);   
                        if(strcmp((yyvsp[-1].typeNode)->value, "*") == 0){
                                sprintf(threeAddress + strlen(threeAddress), "mul $%d, $%d, $%d // var %s + var %s  \n", registrador,  (yyvsp[-2].typeNode)->registrador ,(yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                        }else{
                                sprintf(threeAddress + strlen(threeAddress), "div $%d, $%d, $%d // var %s + var %s  \n", registrador,  (yyvsp[-2].typeNode)->registrador, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
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
                        // printf("5 ERRRRROOOOOOOOOO NO castType");   
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
                        // printf("6 ERRRRROOOOOOOOOO NO castType");   
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
#line 4859 "sintatic.tab.c"
    break;

  case 99: /* first_term: OP_NEG term  */
#line 1172 "sintatic/sintatic.y"
                      {
              (yyval.typeNode) = buildNode(" ! ", (yyvsp[0].typeNode)->type);
              (yyval.typeNode)->childNode = (yyvsp[0].typeNode);
        }
#line 4868 "sintatic.tab.c"
    break;

  case 100: /* first_term: adds_op term  */
#line 1176 "sintatic/sintatic.y"
                       {
              (yyval.typeNode) = (yyvsp[-1].typeNode);
              (yyvsp[-1].typeNode)->type = (yyvsp[0].typeNode)->type;
              (yyvsp[-1].typeNode)->childNode = (yyvsp[0].typeNode);

              if(strcmp((yyvsp[-1].typeNode)->value,"-") == 0){
                threeAddress = alocar_memoria(threeAddress);
                sprintf(threeAddress + strlen(threeAddress), "minus $%d, $%d // - %s \n", registrador,  (yyvsp[0].typeNode)->registrador, (yyvsp[0].typeNode)->value);
                (yyvsp[-1].typeNode)->registrador = registrador;
                (yyvsp[-1].typeNode)->regis_tipo = "$"; 
                registrador = registrador + 1; 
                  
              }  
        }
#line 4887 "sintatic.tab.c"
    break;

  case 101: /* first_term: var OPEN_PAREN list_expr CLS_PAREN  */
#line 1190 "sintatic/sintatic.y"
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
                (yyvsp[-3].typeNode)->registrador = registrador;

                registrador = registrador + 1;
                numListArgs = 0;
        }
#line 4913 "sintatic.tab.c"
    break;

  case 102: /* first_term: var OPEN_PAREN CLS_PAREN  */
#line 1211 "sintatic/sintatic.y"
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
#line 4933 "sintatic.tab.c"
    break;

  case 103: /* first_term: var OPEN_PAREN error CLS_PAREN  */
#line 1226 "sintatic/sintatic.y"
                                         {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
        }
#line 4941 "sintatic.tab.c"
    break;

  case 104: /* first_term: error OPEN_PAREN CLS_PAREN  */
#line 1229 "sintatic/sintatic.y"
                                      {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
        }
#line 4949 "sintatic.tab.c"
    break;

  case 105: /* term: var  */
#line 1235 "sintatic/sintatic.y"
            {
                int undeclr;
                undeclr = verifyUnDeclaration(activeScope, (yyvsp[0].typeNode)->value, line, column);
                if(undeclr == 0){
                   globalError = globalError + 1; 
                }
        }
#line 4961 "sintatic.tab.c"
    break;

  case 107: /* term: OPEN_PAREN expr CLS_PAREN  */
#line 1243 "sintatic/sintatic.y"
                                    {
                (yyval.typeNode) = (yyvsp[-1].typeNode);
        }
#line 4969 "sintatic.tab.c"
    break;

  case 108: /* term: EMPTY  */
#line 1246 "sintatic/sintatic.y"
                {
              (yyval.typeNode) = buildNode("EMPTY", 2);
              (yyval.typeNode)->registrador = registrador;
              (yyval.typeNode)->regis_tipo = "$";

              threeAddress = alocar_memoria(threeAddress);
	      sprintf(threeAddress + strlen(threeAddress), "mov $%d, 0  // empty \n", registrador);
              registrador = registrador + 1;
        }
#line 4983 "sintatic.tab.c"
    break;

  case 109: /* term: OPEN_PAREN error CLS_PAREN  */
#line 1255 "sintatic/sintatic.y"
                                      {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
        }
#line 4991 "sintatic.tab.c"
    break;

  case 110: /* logical_ops: LT_OP  */
#line 1261 "sintatic/sintatic.y"
              {
                (yyval.typeNode) = buildNode("LT_OP", 0);
        }
#line 4999 "sintatic.tab.c"
    break;

  case 111: /* logical_ops: LTE_OP  */
#line 1264 "sintatic/sintatic.y"
                  {
                (yyval.typeNode) = buildNode("LTE_OP", 0);
        }
#line 5007 "sintatic.tab.c"
    break;

  case 112: /* logical_ops: GT_OP  */
#line 1267 "sintatic/sintatic.y"
                 {
                (yyval.typeNode) = buildNode("GT_OP", 0);
        }
#line 5015 "sintatic.tab.c"
    break;

  case 113: /* logical_ops: GTE_OP  */
#line 1270 "sintatic/sintatic.y"
                  {
                (yyval.typeNode) = buildNode("GTE_OP", 0);
        }
#line 5023 "sintatic.tab.c"
    break;

  case 114: /* logical_ops: NEQ_OP  */
#line 1273 "sintatic/sintatic.y"
                  {
                (yyval.typeNode) = buildNode("NEQ_OP", 0);
        }
#line 5031 "sintatic.tab.c"
    break;

  case 115: /* logical_ops: EQUAL_OP  */
#line 1276 "sintatic/sintatic.y"
                    {
                (yyval.typeNode) = buildNode("EQUAL_OP", 0);
        }
#line 5039 "sintatic.tab.c"
    break;

  case 116: /* str_expr: STRING  */
#line 1282 "sintatic/sintatic.y"
               {
            (yyval.typeNode) = buildNode((yyvsp[0].sval), 99);
            table = alocar_memoria(table);
            sprintf(table + strlen(table), " char str_char%d[]=%s \n", registrador, (yyvsp[0].sval));
            (yyval.typeNode)->registrador = registrador;
            free((yyvsp[0].sval));
        }
#line 5051 "sintatic.tab.c"
    break;

  case 117: /* char_expr: CHARACTER  */
#line 1292 "sintatic/sintatic.y"
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
#line 5070 "sintatic.tab.c"
    break;

  case 118: /* list_expr: expr COMMA list_expr  */
#line 1309 "sintatic/sintatic.y"
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
#line 5087 "sintatic.tab.c"
    break;

  case 119: /* list_expr: expr  */
#line 1321 "sintatic/sintatic.y"
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
#line 5104 "sintatic.tab.c"
    break;

  case 120: /* list_expr: error COMMA error  */
#line 1333 "sintatic/sintatic.y"
                            {
             (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);   
        }
#line 5112 "sintatic.tab.c"
    break;

  case 121: /* var: ID  */
#line 1339 "sintatic/sintatic.y"
         {
            (yyval.typeNode) = buildNode((yyvsp[0].sval), findTypeItem(activeScope,(yyvsp[0].sval)));
            free((yyvsp[0].sval));
       }
#line 5121 "sintatic.tab.c"
    break;

  case 122: /* adds_op: ADD_OP  */
#line 1346 "sintatic/sintatic.y"
             {
            (yyval.typeNode) = buildNode((yyvsp[0].sval), 99); 
            free((yyvsp[0].sval)); 
      }
#line 5130 "sintatic.tab.c"
    break;

  case 123: /* mult_ops: MULT_OP  */
#line 1353 "sintatic/sintatic.y"
              {
              (yyval.typeNode) = buildNode((yyvsp[0].sval), 99); 
              free((yyvsp[0].sval));
      }
#line 5139 "sintatic.tab.c"
    break;

  case 124: /* num_tipos: FLOAT  */
#line 1360 "sintatic/sintatic.y"
              {
              (yyval.typeNode) = buildNode((yyvsp[0].sval), 1);
              (yyval.typeNode)->registrador = registrador;
              (yyval.typeNode)->regis_tipo = "$";
              threeAddress = alocar_memoria(threeAddress);
	      sprintf(threeAddress + strlen(threeAddress), "mov $%d, %s  // num %s\n", registrador, (yyval.typeNode)->value, (yyval.typeNode)->value);
              registrador = registrador + 1;
              free((yyvsp[0].sval));
        
        }
#line 5154 "sintatic.tab.c"
    break;

  case 125: /* num_tipos: INT  */
#line 1370 "sintatic/sintatic.y"
              {
              (yyval.typeNode) = buildNode((yyvsp[0].sval), 0);
              (yyval.typeNode)->registrador = registrador;
              (yyval.typeNode)->regis_tipo = "$";
              threeAddress = alocar_memoria(threeAddress);
	      sprintf(threeAddress + strlen(threeAddress), "mov $%d, %s  // num %s\n", registrador, (yyval.typeNode)->value, (yyval.typeNode)->value);
              registrador = registrador + 1;
              free((yyvsp[0].sval));
        }
#line 5168 "sintatic.tab.c"
    break;

  case 126: /* tipos: TYPE_INT  */
#line 1382 "sintatic/sintatic.y"
                 {
             (yyval.typeNode) = buildNode("TYPE_INT", 0);
        }
#line 5176 "sintatic.tab.c"
    break;

  case 127: /* tipos: TYPE_FLOAT  */
#line 1385 "sintatic/sintatic.y"
                     {
              (yyval.typeNode) = buildNode("TYPE_FLOAT", 1);
        }
#line 5184 "sintatic.tab.c"
    break;

  case 128: /* tipos: TYPE_SET  */
#line 1388 "sintatic/sintatic.y"
                    {
              (yyval.typeNode) = buildNode("TYPE_SET", 2);
        }
#line 5192 "sintatic.tab.c"
    break;

  case 129: /* tipos: TYPE_ELEM  */
#line 1391 "sintatic/sintatic.y"
                    {
             (yyval.typeNode) = buildNode("TYPE_ELEM", 3);
        }
#line 5200 "sintatic.tab.c"
    break;


#line 5204 "sintatic.tab.c"

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

#line 1395 "sintatic/sintatic.y"



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
