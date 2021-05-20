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
  char* typeManyDeclaration;
  char* threeAddress;
  char* table;
  
  TreeNodes* origin;
  Scope* activeScope;
  Symbol* funcAux;

#line 101 "sintatic.tab.c"

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
  YYSYMBOL_condition_expr = 68,            /* condition_expr  */
  YYSYMBOL_69_9 = 69,                      /* $@9  */
  YYSYMBOL_block_cond = 70,                /* block_cond  */
  YYSYMBOL_71_10 = 71,                     /* $@10  */
  YYSYMBOL_simple_complex_block_stmt = 72, /* simple_complex_block_stmt  */
  YYSYMBOL_return_stmt = 73,               /* return_stmt  */
  YYSYMBOL_set_stmt = 74,                  /* set_stmt  */
  YYSYMBOL_75_11 = 75,                     /* $@11  */
  YYSYMBOL_76_12 = 76,                     /* $@12  */
  YYSYMBOL_expr_stmt = 77,                 /* expr_stmt  */
  YYSYMBOL_expr = 78,                      /* expr  */
  YYSYMBOL_assign = 79,                    /* assign  */
  YYSYMBOL_func_expr = 80,                 /* func_expr  */
  YYSYMBOL_is_set_expr = 81,               /* is_set_expr  */
  YYSYMBOL_func_in_expr = 82,              /* func_in_expr  */
  YYSYMBOL_op_or_expr = 83,                /* op_or_expr  */
  YYSYMBOL_op_and_expr = 84,               /* op_and_expr  */
  YYSYMBOL_logical_expr = 85,              /* logical_expr  */
  YYSYMBOL_arithmetic_expr = 86,           /* arithmetic_expr  */
  YYSYMBOL_mult_expr = 87,                 /* mult_expr  */
  YYSYMBOL_first_term = 88,                /* first_term  */
  YYSYMBOL_term = 89,                      /* term  */
  YYSYMBOL_logical_ops = 90,               /* logical_ops  */
  YYSYMBOL_str_expr = 91,                  /* str_expr  */
  YYSYMBOL_char_expr = 92,                 /* char_expr  */
  YYSYMBOL_list_expr = 93,                 /* list_expr  */
  YYSYMBOL_var = 94,                       /* var  */
  YYSYMBOL_adds_op = 95,                   /* adds_op  */
  YYSYMBOL_mult_ops = 96,                  /* mult_ops  */
  YYSYMBOL_num_tipos = 97,                 /* num_tipos  */
  YYSYMBOL_tipos = 98                      /* tipos  */
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
#define YYLAST   8918

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  127
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  696

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
       0,   103,   103,   111,   118,   119,   123,   124,   128,   128,
     146,   146,   146,   165,   169,   184,   200,   209,   200,   229,
     237,   229,   259,   263,   271,   291,   309,   315,   318,   324,
     328,   332,   333,   334,   335,   336,   337,   338,   339,   343,
     362,   383,   386,   395,   399,   406,   409,   415,   415,   437,
     437,   458,   465,   466,   466,   488,   489,   493,   496,   527,
     531,   538,   538,   560,   560,   586,   587,   591,   595,   601,
     602,   609,   610,   614,   651,   655,   659,   663,   666,   669,
     675,   684,   688,   694,   705,   718,   769,   770,   774,   827,
     831,   888,   892,   975,   979,  1060,  1064,  1065,  1069,  1074,
    1093,  1108,  1111,  1117,  1124,  1125,  1128,  1131,  1137,  1140,
    1143,  1146,  1149,  1152,  1158,  1168,  1175,  1187,  1199,  1205,
    1212,  1219,  1226,  1236,  1248,  1251,  1254,  1257
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
  "iteration_expr", "$@8", "condition_expr", "$@9", "block_cond", "$@10",
  "simple_complex_block_stmt", "return_stmt", "set_stmt", "$@11", "$@12",
  "expr_stmt", "expr", "assign", "func_expr", "is_set_expr",
  "func_in_expr", "op_or_expr", "op_and_expr", "logical_expr",
  "arithmetic_expr", "mult_expr", "first_term", "term", "logical_ops",
  "str_expr", "char_expr", "list_expr", "var", "adds_op", "mult_ops",
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
     295,   296,   297,   298,   299,   300
};
#endif

#define YYPACT_NINF (-537)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-128)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     657,   305,   104,   125,   152,   273,     5,   425,   833,   966,
    1013,   297,  1048,  -537,    -7,  1207,   500,    -1,   556,    48,
      31,    82,    17,    51,   218,    95,    68,   218,  1240,    76,
     101,   173,   106,   296,    76,   117,  1259,  1299,   147,   -24,
     116,    95,  1536,   159,   306,  6276,  6302,   468,  6328,   175,
     180,   194,   197,   209,   214,   226,   567,   231,   254,   291,
    1437,  1091,  1609,  2754,   298,  4273,  4315,   323,  4357,  4399,
    4441,  4483,  4525,    13,   341,    29,   354,    12,    81,    27,
     144,  6770,  6354,  6380,  6406,   292,   567,  6432,    95,    76,
     218,  1620,   360,    76,   327,  1566,   385,    11,   121,   478,
     237,   350,  6458,  6484,    83,   345,  4567,    33,  1035,   310,
     364,  1713,   379,  1319,  4609,  4651,  4693,  4735,   247,   863,
     863,   873,  1639,  1650,  1753,  1868,  1965,   863,   863,  2091,
     863,  1738,   772,  6510,   319,  1848,   434,  1903,  6536,   424,
     445,   423,   461,   466,   589,    -6,   691,   457,   460,   491,
     714,     7,   729,   155,   502,   511,  4777,  4819,  4861,  6562,
    6588,   766,   514,   517,   527,   534,   539,   141,   148,   467,
      70,   390,  6796,  6614,  6640,   546,   751,  6666,   471,   551,
     588,  5911,   573,   590,   353,   532,    46,    47,   608,   619,
     625,    53,    65,    78,    91,   629,   640,   643,   648,   687,
     695,   745,  6692,  1797,  6718,  4903,  5951,  1738,   653,   752,
     757,   773,   780,  4945,  4987,  5029,  5071,  5113,  5155,   787,
     900,   795,   725,   917,  5197,  1392,   728,  5991,   842,  5991,
    6031,  6071,  6111,   423,  5239,  5281,  5323,  5991,  5991,  5991,
     815,  5365,  5407,  5449,  5991,  5491,   872,   877,   887,   899,
     963,   488,  1138,  5533,  6744,  1500,  1921,  7388,  7414,  7440,
     867,   910,   934,   628,  1853,   906,   377,   453,   -11,  8820,
    1359,  7466,  7492,  7518,  6868,   628,  7544,  2141,   937,  7986,
    1472,  2265,  8458,   705,  2081,   820,  8872,  2718,  8477,  8496,
    8515,  8012,   705,  8534,   936,   946,   184,   949,   959,   965,
     978,  7934,  8038,  8058,  8078,   982,   984,  1003,   784,  2151,
    1007,   257,   688,   668,  8846,  8418,  8098,  8118,  8138,  7960,
     784,  8158,  6816,  6894,  6920,  6946,  1012,  1034,  1036,   798,
    2233,   559,   151,   595,   672,  8794,  7570,  6972,  6998,  7024,
    6842,   798,  7050,    31,  1054,  1067,  1063,   281,  2203,  1068,
     577,  1071,  1077,  1088,  1109,  1681,  5575,  2691,  2802,  1116,
    2845,  2887,  2929,  2971,  3013,   103,  1108,  1136,    95,  5617,
    5659,  5701,  1139,  2387,  2398,  2418,  7596,  7622,  7648,  1039,
    1140,  2437,  2437,  2437,  2437,  2437,   812,  7674,  8553,  8572,
    8591,  1203,  1147,  2203,  2203,  2203,  2203,   989,  8610,  7700,
    2494,  2537,  2546,  1151,  2555,  2585,  2616,  8178,  8198,  8218,
    1210,  1156,   339,  2632,  2632,  2632,  2632,  2632,  1102,  8238,
    2648,  6151,  6160,  7076,  7102,  7128,  1275,  1171,   366,  6169,
    6169,  6169,  6169,  6169,  1205,  7154,    95,  5743,  8629,   496,
    1137,  1175,  1177,   560,   621,  1186,   881,  7180,  3055,  2327,
     385,   153,   330,   636,  3097,   113,  3139,  1188,  1577,  3181,
    3223,  3265,  3307,  1282,  5785,  1191,  2345,  1314,   813,  1329,
     829,  1361,   885,  7726,  7752,  1196,   414,  8833,  2293,  7778,
    7804,  1009,  7830,  1200,  8648,  8667,  8885,  8781,  8686,  8705,
    1227,  8724,  1206,  1381,   926,  1412,   956,  1446,   974,  8258,
    1449,   990,  1477,  1085,  1496,  1092,  8278,  8298,   734,  1229,
    1252,  1263,   879,   953,   856,  8859,  8438,  8318,  8338,  1242,
    8358,  1248,  1556,  1106,  1574,  1150,  1611,  1166,  7206,  7232,
     693,  1266,  1270,  1286,   907,   929,  1302,   717,  8807,  7856,
    7258,  7284,  1345,  7310,  1309,   106,  6182,  6191,  6200,  1626,
    1321,   423,  1331,  1348,  1333,  1346,  3349,  3391,  3433,  3475,
    1689,  1351,  1358,  1373,    31,  1387,  5827,  1396,  1408,  1413,
    1416,  1425,  1429,  1433,  7882,  7908,  8743,  8762,   188,   259,
     346,   428,   430,   462,  1442,  1459,  1462,  1471,  1489,  1501,
    6213,  6222,  6231,  8378,  8398,   755,   794,   824,   832,   865,
     886,  6244,  6253,  6262,  7336,  7362,  1514,  1705,  1199,  1707,
    1304,  1720,  1308,  1565,  5911,  1529,   655,   578,  1535,  1537,
    1541,  1546,  1554,  1572,    95,  3517,  1727,  1382,  1731,  1404,
    1733,  1431,  1741,  1475,  1748,  1525,  1750,  1527,  5869,  1560,
    1607,  1659,  1666,  1675,  1709,  3559,  5951,  1738,  1562,  1575,
    1588,  1590,  1605,  3601,  3643,  3685,  3727,  3769,  3811,   106,
    1110,  1323,  1401,  1438,  1503,  1582,   932,  1052,  1134,  1184,
    1249,  1278,  3853,  3895,  1630,  5951,  1648,  5951,  6031,  6071,
    1632,  6111,   423,  3937,  3979,  4021,  5951,  5951,  4063,  5951,
    1631,  4105,  4147,  4189,  5951,  4231
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
       0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -537,  -537,  -537,  1672,     4,  -133,  -335,  -536,   -39,  -537,
    -537,  -537,  -537,  -537,   -12,    43,   -62,   -30,  -188,  -164,
    -151,  1233,  -131,  1079,  1050,  1004,   -26,   -99,   -65,  1022,
    1026,   -47,  2000,   -71,  1604,   -32,  2210,  2100,  1836,  1721,
    1606,  1246,  1131,   135,  -246,  1258,  1262,  -193,    20,   656,
    -242,   771,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,    63,    22,    25,    40,    32,    10,
      27,    43,    24,    38,    30,   222,    64,   223,    66,    67,
      68,   141,    69,   206,   224,   239,   225,    70,    71,   237,
     238,    72,    73,    74,    75,    76,    77,   146,   285,   286,
     287,   288,   289,   290,   127,   165,   166,   179,   291,   292,
     130,   293,    88
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,   344,    92,   112,     9,    13,    65,    11,   436,   606,
     221,     9,   142,   -87,   114,    35,   278,    90,   358,   -25,
     -86,   -86,   382,   383,    31,   -87,   -87,    31,   -86,   385,
     -72,    18,   -86,    12,   157,    65,   -10,   187,   -87,   -87,
     394,    19,   359,   -87,   -87,    33,   396,   -77,   -74,    23,
     192,    39,   -87,   115,   -78,   360,    85,    28,   -86,   -86,
     120,    33,   -19,   -19,   -19,   -19,   -75,   -86,   415,   -72,
     182,   -85,    37,   158,   417,   361,   103,    42,   136,   -79,
     108,   274,   -71,    26,   154,    85,   -77,   -74,   294,   431,
      31,   -19,   -76,   -78,    29,   433,   -16,   -16,   -16,   -16,
     250,   -85,   -85,   120,   459,   -75,   103,   362,   134,  -124,
     -85,    34,   118,   119,   557,   274,  -124,   143,   -79,   149,
      36,   -71,   144,   680,   155,   -16,   279,   280,   281,    47,
    -125,   -76,   135,   274,   282,   366,   137,  -125,   168,   108,
     108,   363,   -84,   460,   -20,   -89,   -11,   108,   108,   -83,
     108,   319,   340,   558,   552,   283,    91,  -127,   278,   364,
     -17,   183,   240,   284,  -127,   121,   122,   123,   124,   125,
     126,    84,   -84,   -84,   367,   -89,   -89,   -89,   251,   -83,
     -83,   -84,   -87,   -87,   -89,  -119,   -87,   -87,   -83,   -77,
      89,   102,   -87,   483,   -87,    84,   273,   371,   194,   371,
      84,   234,    93,   236,   492,   212,   368,   371,   371,   371,
     357,   241,   242,   243,   371,  -119,  -119,    95,   245,   -77,
     -77,   133,    96,   340,  -119,   521,    85,   319,   -77,   624,
     273,   383,   246,   247,   248,   249,    97,   385,   150,    98,
     394,   544,   279,   280,   281,    47,   396,    85,   273,    85,
     282,    99,   296,   372,    84,    84,   100,    85,    85,    85,
     -74,   -26,    84,    84,    85,    84,   318,   339,   101,   415,
     370,   283,   370,   -45,   297,   417,   298,   299,  -126,   284,
     370,   370,   370,   378,   274,  -126,   439,   370,   -87,   -87,
     -74,   -74,   431,  -103,   457,   378,   -46,   -87,   433,   -74,
    -103,  -103,    16,   390,   274,    -5,    -5,   465,   440,    17,
     441,   442,   390,  -103,  -103,  -103,  -103,  -103,  -103,    -5,
      -5,    -5,    -5,  -103,  -103,  -103,    65,   131,   409,   274,
     565,   554,  -103,   104,   132,   294,   -15,    41,   339,    65,
     409,    84,   318,   111,   508,    12,   253,   -78,    94,   425,
     274,   152,   295,   159,   208,   279,   280,   281,    47,    -8,
     343,   425,    84,   282,    84,   113,   509,   444,   510,   511,
     138,   530,    84,    84,    84,   108,    85,   -78,   -78,    84,
     260,   116,   261,   262,   283,   156,   -78,    94,   463,    85,
     -47,   -88,   284,   531,   117,   532,   533,   545,   377,   273,
     -14,   274,   274,   274,   274,   274,   340,   160,   -87,   -87,
     387,   121,   122,   123,   124,   125,   126,   340,   389,   273,
     -87,   -88,   -88,   -88,   -29,    -2,    14,   398,   345,   -75,
     -88,   -79,   513,   319,   319,   319,   319,   319,   340,     2,
       3,     4,     5,   408,   273,   -85,   -85,   382,   535,   340,
     340,   340,   340,   340,   340,   419,    33,   -85,   358,   -75,
     -75,   -79,   -79,   -76,   424,   273,   295,   180,   -75,   274,
     -79,   553,   555,  -120,  -120,  -120,   435,   -24,   274,   147,
     615,  -120,   359,   294,   347,   381,   274,   358,   181,   358,
      84,    84,   184,   -76,   -76,   360,   -71,   185,   358,   358,
     188,   358,   -76,   189,    84,   260,   358,   261,   262,    94,
    -120,   359,   203,   359,  -117,   361,   273,   273,   273,   273,
     273,   339,   359,   359,   360,   359,   360,  -119,  -119,  -119,
     359,  -119,   339,   210,   190,   360,   360,   294,   360,  -119,
    -119,  -119,  -119,   360,   361,   195,   361,   362,   318,   318,
     318,   318,   318,   339,   196,   361,   361,  -114,   361,   260,
    -115,   261,   262,   361,   339,   339,   339,   339,   339,   339,
     198,   183,   254,    45,    46,   366,   362,   199,   362,   650,
      48,   363,   200,   294,   273,   659,   -73,   362,   362,   205,
     362,   -84,   -84,   273,   204,   362,    -8,    20,    21,   364,
     -72,   273,   -72,   -84,   366,   260,   366,   261,   262,    61,
     363,   690,   363,   207,   367,   366,   366,   448,   366,    94,
     673,   363,   363,   366,   363,   131,   428,   429,   364,   363,
     364,   346,   186,   376,   257,   258,   -71,   652,   -71,   364,
     364,   259,   364,   367,    33,   367,   368,   364,   -82,   683,
     357,   685,   -83,   -83,   367,   367,   648,   367,     1,   -81,
     691,   692,   367,   693,   -83,   -80,    85,   319,   695,   213,
     264,     2,     3,     4,     5,   368,   556,   368,    94,   357,
     214,   357,   260,   215,   261,   262,   368,   368,   216,   368,
     357,   357,    86,   357,   368,    85,   227,    85,   357,   -86,
     -86,   414,   372,   -86,   -86,   430,    85,    85,   -86,    85,
     388,   280,   281,   -86,    85,   -86,    86,   275,   282,   412,
     413,    86,   347,   348,  -119,  -119,   -56,   217,   -71,   -56,
     -56,   -56,   -56,   -56,  -119,   218,  -119,   128,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   219,   284,   -85,   -85,
     430,   275,   -56,   -56,   -56,   -56,   346,   191,   -85,   -56,
     -85,   -56,   -56,   -56,   -56,  -119,  -119,   -56,   233,   275,
     -56,   346,   193,   176,  -119,    86,    86,   322,   323,   324,
      47,    84,   318,    86,    86,   325,    86,   320,   341,   407,
     302,   303,   201,   349,   202,   228,   -77,   304,   -77,   326,
     229,   327,   328,   423,   323,   324,   329,    87,   295,   197,
      84,   325,    84,   481,   330,   177,   230,   322,   323,   324,
      47,    84,    84,   231,    84,   325,   309,    87,   128,    84,
    -118,    87,   276,    -4,    -4,   -74,    87,   -74,  -116,   326,
     330,   327,   328,   235,   -87,   -87,   329,    -4,    -4,    -4,
      -4,   -86,   -86,   393,   330,   482,   569,    87,   244,   341,
     -87,   -87,    86,   320,   169,   -78,   276,   -78,   255,    45,
      46,    47,   571,   -75,  -110,   -75,    48,  -124,  -110,  -110,
    -110,  -110,  -125,    86,   276,    86,  -110,   -85,   -85,   414,
      87,    87,  -127,    86,    86,    86,   -85,    56,    87,    87,
      86,    87,   321,   342,  -126,    61,   -79,  -110,   -79,   373,
     -84,   -84,   -85,   -85,   393,  -110,   -87,   -87,   -55,   -84,
     275,   -55,   -55,   -55,   -55,   -55,   384,   -76,   573,   -76,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -84,   -84,
     275,   201,   349,   395,   -55,   -55,   -55,   -55,   -84,   -72,
     -84,   -55,   374,   -55,   -55,   -55,   -55,   -87,   -87,   -55,
     -83,   -83,   -55,   -77,   -77,   275,    -7,    -7,  -119,   579,
     -83,   416,   -83,   -77,   342,   -77,   375,    87,   321,  -119,
      -7,    -7,    -7,    -7,   -83,   -83,   275,   -87,   -87,   399,
     490,   400,   432,   -83,   322,   323,   324,    47,    87,   581,
      87,   401,   325,  -119,  -119,   -87,   -87,   402,    87,    87,
      87,    86,    86,    -6,    -6,    87,   326,   583,   327,   328,
     403,   -87,   -87,   329,   404,    86,   405,    -6,    -6,    -6,
      -6,   330,   491,   585,   276,   276,  -103,   275,   275,   275,
     275,   275,   341,  -103,  -103,   406,   276,   -72,   -13,   -13,
     201,   349,   574,   341,   420,   276,  -103,  -103,  -103,  -103,
    -103,  -103,   -13,   -13,   -13,   -13,  -103,  -103,  -103,   320,
     320,   320,   320,   320,   341,  -103,   421,   132,   422,   321,
     276,   295,   473,   -74,   -74,   341,   341,   341,   341,   341,
     341,   321,   109,   -74,   437,   -74,   256,   257,   258,    47,
     342,   276,  -119,   519,   259,   275,   438,   322,   323,   324,
      47,   447,   342,   449,   275,   325,   -87,   -87,   260,   450,
     261,   262,   275,   -87,   -87,   263,    87,    87,   587,   326,
     451,   327,   328,   264,   384,   589,   329,   -87,   -87,  -119,
      87,   -77,   -77,   395,   330,   520,  -119,  -119,   461,   596,
     -77,   452,   276,   276,   276,   276,   276,   342,   458,  -119,
    -119,  -119,  -119,  -119,  -119,   -78,   -78,    83,   342,  -119,
    -119,  -119,   416,  -119,   466,   -78,   462,   -78,  -119,   546,
    -119,   -87,   -87,   474,   321,   321,   321,   321,   321,   342,
     485,    83,   272,   598,   499,   432,    83,   -87,   -87,   507,
     342,   342,   342,   342,   342,   342,   542,    -3,    -3,   600,
     322,   323,   324,    47,   529,   -75,   -75,   547,   325,   548,
     276,    -3,    -3,    -3,    -3,   -75,   272,   -75,   346,   276,
     -87,   -87,   326,   559,   327,   328,   566,   276,   295,   329,
      -9,    -9,   640,   575,   272,   295,   484,   330,   543,   577,
      83,    83,   295,   506,    -9,    -9,    -9,    -9,    83,    83,
      44,   174,   317,   338,   252,    45,    46,    47,   201,   349,
     576,   590,    48,   246,   247,   248,   249,    49,    50,    51,
     -79,   -79,    82,   201,   349,   593,    52,    53,    54,    55,
     -79,   594,   -79,    56,   591,    57,    58,    59,    60,   -23,
     -23,    61,    86,   320,    62,   592,    82,   271,   601,   -76,
     -76,    82,   602,   -23,   -23,   -23,   -23,   295,   528,   -76,
     161,   -76,    -8,   564,   256,   257,   258,    47,   603,   162,
     163,    86,   259,    86,   338,   -87,   -87,    83,   317,   -87,
     -87,   271,    86,    86,   349,    86,   260,   642,   261,   262,
      86,   644,   605,   263,   -74,   -74,   346,   568,    83,   271,
      83,   264,   616,   -74,   614,    82,    82,   277,    83,    83,
      83,   346,   570,    82,   173,    83,   618,   316,   337,   617,
     -91,   -91,   -91,   -91,   -91,   -91,   201,   349,   604,   619,
     -91,   -91,   -91,   -52,   621,   272,   232,   -52,   -52,   -52,
     -52,   622,   -91,   346,   572,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -87,   -87,   272,   623,    87,   321,   -52,
     -52,   -52,   -52,   346,   578,   661,   -52,   625,   -52,   -52,
     -52,   -52,   -78,   -78,   -52,   -87,   -87,   -52,   105,   -73,
     272,   -78,   255,    45,    46,    47,    87,   663,    87,   337,
      48,   -77,    82,   316,   346,   580,   -74,    87,    87,   -78,
      87,   272,   -87,   -87,    52,    87,    54,    55,   -75,   -75,
     -75,    56,   -79,    82,   665,    82,   -76,   106,   -75,    61,
    -123,  -123,   -77,    82,    82,    82,    83,    83,   346,   582,
      82,   346,   584,  -123,  -123,  -123,  -123,  -123,  -123,   -74,
      83,  -119,   -78,  -123,  -123,  -123,   -87,   -87,  -119,  -119,
     271,   -75,   272,   272,   272,   272,   480,   338,   667,   346,
     586,  -119,  -119,  -119,  -119,  -119,  -119,   489,   338,   -79,
     271,  -119,  -119,  -119,   -79,   -79,   -22,   -22,   346,   588,
    -119,   -76,  -119,   -79,   317,   317,   317,   317,   518,   338,
     -22,   -22,   -22,   -22,   638,   271,   -87,   -87,   -87,   -87,
     338,   338,   338,   338,   541,   338,   645,   139,   669,   647,
     671,   256,   257,   258,    47,   653,   271,   654,   560,   259,
     272,   655,   256,   257,   258,    47,   656,   162,   163,   272,
     259,   -77,   -77,   260,   657,   261,   262,   272,   346,   595,
     263,    82,    82,   -77,   260,   675,   261,   262,   264,   -27,
     -27,   263,   658,   -76,   -76,    82,   346,   597,   676,   264,
     -12,   -12,   -76,   -27,   -27,   -27,   -27,   271,   271,   271,
     479,   677,   337,   678,   -12,   -12,   -12,   -12,   -74,   -74,
    -108,   488,    81,   337,  -108,  -108,  -108,  -108,   679,   684,
     -74,  -109,  -108,   346,   599,  -109,  -109,  -109,  -109,   316,
     316,   316,   517,  -109,   337,   265,    81,   270,   295,   613,
     682,    81,   688,  -108,   694,   337,   337,   337,   540,    15,
     337,  -108,   453,   551,  -109,   689,   255,    45,    46,    47,
     -78,   -78,  -109,   646,    48,   271,   672,   -75,   -75,   265,
     686,   270,   -78,   148,   271,   687,   -79,   -79,    52,   -75,
      54,    55,   271,   -28,   -28,    56,   562,   265,   -79,   270,
     563,   454,   167,    61,     0,    81,    81,   -28,   -28,   -28,
     -28,   295,   620,   172,     0,   310,   331,   315,   336,   300,
     -76,   -76,     0,   301,   302,   303,    47,   346,   639,   346,
     641,   304,   -76,     0,  -111,     0,     0,    80,  -111,  -111,
    -111,  -111,   346,   643,     0,   305,  -111,   306,   307,   346,
     660,     0,   308,   346,   662,   346,   664,    83,   317,     0,
     309,    80,   269,   346,   666,     0,    80,  -111,   209,   211,
     346,   668,   346,   670,     0,  -111,     0,     0,   220,     0,
       0,     0,   322,   323,   324,    47,    83,   331,    83,   336,
     325,   310,    81,   315,     0,     0,   269,    83,    83,     0,
      83,     0,     0,     0,   326,    83,   327,   328,     0,     0,
       0,   329,     0,    81,   269,    81,     0,     0,     0,   330,
      80,   171,     0,    81,    81,    81,     0,     0,   -21,   -21,
      81,     0,   314,   335,   379,     0,     0,     0,   256,   257,
     258,    47,   -21,   -21,   -21,   -21,   259,     0,   265,  -112,
     270,     0,    79,  -112,  -112,  -112,  -112,     0,     0,     0,
     260,  -112,   261,   262,     0,     0,     0,   263,   265,     0,
     270,     0,    82,   316,     0,   264,    79,   268,     0,     0,
       0,    79,  -112,   -18,   -18,     0,     0,     0,     0,     0,
    -112,     0,     0,   265,     0,   270,     0,   -18,   -18,   -18,
     -18,    82,     0,    82,   335,     0,     0,    80,   314,  -119,
    -119,   268,    82,    82,   265,    82,   270,     0,     0,     0,
      82,     0,  -119,  -119,  -119,  -119,  -119,  -119,    80,   268,
      80,   443,  -119,  -119,  -119,   170,     0,     0,    80,    80,
      80,    81,    81,  -119,  -119,    80,  -113,   313,   334,     0,
    -113,  -113,  -113,  -113,     0,    81,     0,     0,  -113,     0,
       0,     0,     0,     0,     0,   269,     0,   270,   270,   478,
     331,     0,   336,     0,     0,     0,     0,     0,     0,  -113,
     487,   331,     0,   336,     0,   269,     0,  -113,     0,     0,
       0,     0,     0,     0,     0,     0,   512,     0,     0,   315,
     315,   516,   331,     0,   336,     0,     0,     0,     0,     0,
     269,     0,   534,     0,     0,   336,   336,   539,   331,   334,
     336,     0,    79,   313,     0,     0,     0,     0,     0,     0,
       0,   269,     0,   265,     0,   270,     0,     0,     0,     0,
     107,   110,   265,    79,   270,    79,     0,     0,     0,     0,
     265,     0,   270,    79,    79,    79,    80,    80,     0,     0,
      79,     0,   391,     0,     0,     0,   256,   257,   258,    47,
      80,     0,  -121,     0,   259,   140,  -121,  -121,  -121,  -121,
     268,     0,   269,   477,  -121,     0,     0,   335,   260,     0,
     261,   262,     0,   164,   486,   263,     0,     0,   335,     0,
     268,     0,     0,   264,     0,  -121,     0,     0,     0,     0,
       0,   175,   178,  -121,   314,   515,    78,     0,     0,   335,
       0,     0,  -120,     0,     0,   268,  -120,  -120,  -120,  -120,
     335,   538,   410,     0,  -120,   335,   256,   257,   258,    47,
      78,   267,     0,     0,   259,    78,   268,     0,     0,     0,
     269,     0,     0,     0,     0,  -120,     0,     0,   260,   269,
     261,   262,     0,  -120,   446,   263,     0,   269,     0,     0,
       0,    79,    79,   264,     0,   267,     0,     0,     0,     0,
       0,     0,     0,   178,   445,    79,   365,   226,   279,   280,
     281,    47,     0,   267,     0,     0,   282,   476,     0,     0,
     649,   651,   334,     0,     0,     0,     0,     0,     0,     0,
       0,   312,   333,   334,   426,     0,     0,   283,   256,   257,
     258,    47,     0,     0,     0,   284,   259,     0,     0,   514,
       0,   310,    81,   315,   334,     0,     0,     0,     0,     0,
     260,     0,   261,   262,   380,   537,     0,   263,     0,     0,
     334,   266,     0,  -122,  -122,   264,     0,     0,     0,     0,
       0,    81,     0,    81,   392,   268,  -122,  -122,  -122,  -122,
    -122,  -122,    81,    81,   268,    81,  -122,  -122,  -122,     0,
      81,   277,   268,   333,     0,   266,    78,   312,   145,   411,
     151,   153,     0,     0,   -90,   -90,   -90,   -90,   -90,   -90,
       0,     0,     0,   266,   -90,   -90,   -90,    78,   549,    78,
     427,     0,   256,   257,   258,    47,   -90,    78,    78,    78,
     259,   311,   332,     0,    78,     0,   475,     0,     0,     0,
     256,   257,   258,    47,   260,   455,   261,   262,   259,     0,
       0,   263,     0,     0,   267,     0,     0,    80,   314,   264,
       0,     0,   260,     0,   261,   262,     0,     0,     0,   263,
       0,     0,     0,     0,   267,     0,   178,   264,   467,     0,
       0,     0,   279,   280,   281,    47,    80,   178,    80,   469,
     282,     0,     0,   279,   280,   281,    47,    80,    80,   267,
      80,   282,     0,   332,     0,    80,     0,   311,   178,   471,
       0,   283,     0,   279,   280,   281,    47,     0,     0,   284,
     267,   282,   283,     0,   178,     0,     0,     0,   475,     0,
     284,     0,   256,   257,   258,    47,     0,     0,     0,   550,
     259,     0,   283,     0,     0,    78,    78,     0,   561,     0,
     284,     0,     0,     0,     0,     0,   567,     0,     0,    78,
       0,   263,     0,     0,   266,     0,     0,     0,     0,   264,
       0,     0,    79,   313,     0,     0,   333,     0,     0,     0,
       0,     0,     0,     0,   266,   493,     0,   333,     0,   279,
     280,   281,    47,     0,     0,     0,     0,   282,     0,     0,
       0,    79,     0,    79,     0,     0,     0,     0,   333,   266,
       0,     0,    79,    79,     0,    79,     0,     0,   283,     0,
      79,     0,     0,     0,   333,     0,   284,     0,   495,     0,
     266,     0,   279,   280,   281,    47,     0,   497,     0,   267,
     282,   279,   280,   281,    47,     0,   500,     0,   267,   282,
     279,   280,   281,    47,     0,     0,   267,     0,   282,     0,
       0,   283,     0,     0,     0,     0,     0,     0,     0,   284,
     283,     0,     0,   468,   470,   472,   502,     0,   284,   283,
     279,   280,   281,    47,     0,     0,   332,   284,   282,     0,
       0,     0,     0,     0,     0,     0,     0,   332,     0,     0,
     494,   496,   498,     0,   501,   503,   505,   504,     0,   283,
       0,   279,   280,   281,    47,     0,     0,   284,   332,   282,
     523,   525,   527,   300,     0,     0,     0,   301,   302,   303,
      47,     0,     0,     0,   332,   304,   365,   674,     0,   522,
     283,     0,     0,   279,   280,   281,    47,     0,   284,   266,
       0,   282,     0,     0,     0,     0,   308,     0,   266,     0,
       0,     0,     0,     0,   309,   365,   266,   365,     0,     0,
       0,     0,   283,     0,     0,     0,   365,   365,     0,   365,
     284,     0,   -37,     0,   365,   -37,   -37,   -37,   -37,   -37,
       0,     0,     0,     0,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,     0,     0,     0,     0,     0,     0,   -37,   -37,
     -37,   -37,     0,     0,     0,   -37,   277,   -37,   -37,   -37,
     -37,     0,     0,   -37,     0,     0,   -37,     0,     0,   -91,
     -91,   -91,   -91,   -91,   -91,     0,    78,   312,     0,   -91,
     -91,   -91,     0,     0,     0,   -37,   608,   610,   612,   -37,
     -37,   -37,   -37,     0,     0,     0,     0,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,    78,     0,    78,     0,     0,
       0,   -37,   -37,   -37,   -37,     0,    78,    78,   -37,    78,
     -37,   -37,   -37,   -37,    78,     0,   -37,     0,     0,   -37,
     627,   629,   631,   -34,     0,     0,   -34,   -34,   -34,   -34,
     -34,   633,   635,   637,     0,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,     0,     0,     0,     0,     0,     0,   -34,
     -34,   -34,   -34,     0,     0,     0,   -34,     0,   -34,   -34,
     -34,   -34,     0,     0,   -34,     0,   -31,   -34,     0,   -31,
     -31,   -31,   -31,   -31,     0,     0,     0,   311,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,     0,     0,     0,     0,
       0,     0,   -31,   -31,   -31,   -31,     0,     0,     0,   -31,
       0,   -31,   -31,   -31,   -31,     0,     0,   -31,   -32,     0,
     -31,   -32,   -32,   -32,   -32,   -32,     0,     0,     0,     0,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,     0,
       0,     0,     0,     0,   -32,   -32,   -32,   -32,     0,     0,
       0,   -32,     0,   -32,   -32,   -32,   -32,     0,     0,   -32,
     -33,     0,   -32,   -33,   -33,   -33,   -33,   -33,     0,     0,
       0,     0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
       0,     0,     0,     0,     0,     0,   -33,   -33,   -33,   -33,
       0,     0,     0,   -33,     0,   -33,   -33,   -33,   -33,     0,
       0,   -33,   -36,     0,   -33,   -36,   -36,   -36,   -36,   -36,
       0,     0,     0,     0,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,     0,     0,     0,     0,     0,     0,   -36,   -36,
     -36,   -36,     0,     0,     0,   -36,     0,   -36,   -36,   -36,
     -36,     0,     0,   -36,   -35,     0,   -36,   -35,   -35,   -35,
     -35,   -35,     0,     0,     0,     0,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,     0,     0,     0,     0,     0,     0,
     -35,   -35,   -35,   -35,     0,     0,     0,   -35,     0,   -35,
     -35,   -35,   -35,     0,     0,   -35,   -13,     0,   -35,   -13,
     -13,   -13,   -13,   -13,     0,     0,     0,     0,   -13,   -13,
     -13,   -13,   -13,   -13,   -13,   -13,     0,     0,     0,     0,
       0,     0,   -13,   -13,   -13,   -13,     0,     0,     0,   -13,
       0,   -13,   -13,   -13,   -13,     0,     0,   -13,   -57,     0,
     -13,   -57,   -57,   -57,   -57,   -57,     0,     0,     0,     0,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,     0,     0,
       0,     0,     0,     0,   -57,   -57,   -57,   -57,     0,     0,
       0,   -57,     0,   -57,   -57,   -57,   -57,     0,     0,   -57,
     -27,     0,   -57,   -27,   -27,   -27,   -27,   -27,     0,     0,
       0,     0,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
       0,     0,     0,     0,     0,     0,   -27,   -27,   -27,   -27,
       0,     0,     0,   -27,     0,   -27,   -27,   -27,   -27,     0,
       0,   -27,   -70,     0,   -27,   -70,   -70,   -70,   -70,   -70,
       0,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,     0,     0,     0,   -70,   -70,
     -70,   -70,     0,     0,     0,   -70,     0,   -70,   -70,   -70,
     -70,     0,     0,   -70,   -69,     0,   -70,   -69,   -69,   -69,
     -69,   -69,     0,     0,     0,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,     0,     0,     0,     0,     0,     0,
     -69,   -69,   -69,   -69,     0,     0,     0,   -69,     0,   -69,
     -69,   -69,   -69,     0,     0,   -69,   -38,     0,   -69,   -38,
     -38,   -38,   -38,   -38,     0,     0,     0,     0,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,     0,     0,     0,     0,
       0,     0,   -38,   -38,   -38,   -38,     0,     0,     0,   -38,
       0,   -38,   -38,   -38,   -38,     0,     0,   -38,   -65,     0,
     -38,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,     0,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,
       0,     0,     0,     0,   -65,   -65,   -65,   -65,     0,     0,
       0,   -65,     0,   -65,   -65,   -65,   -65,     0,     0,   -65,
     -59,     0,   -65,   -59,   -59,   -59,   -59,   -59,     0,     0,
       0,     0,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
       0,     0,     0,     0,     0,     0,   -59,   -59,   -59,   -59,
       0,     0,     0,   -59,     0,   -59,   -59,   -59,   -59,     0,
       0,   -59,   -60,     0,   -59,   -60,   -60,   -60,   -60,   -60,
       0,     0,     0,     0,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,     0,     0,     0,     0,     0,     0,   -60,   -60,
     -60,   -60,     0,     0,     0,   -60,     0,   -60,   -60,   -60,
     -60,     0,     0,   -60,   -58,     0,   -60,   -58,   -58,   -58,
     -58,   -58,     0,     0,     0,     0,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,     0,     0,     0,     0,     0,     0,
     -58,   -58,   -58,   -58,     0,     0,     0,   -58,     0,   -58,
     -58,   -58,   -58,     0,     0,   -58,   -28,     0,   -58,   -28,
     -28,   -28,   -28,   -28,     0,     0,     0,     0,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,     0,     0,     0,     0,
       0,     0,   -28,   -28,   -28,   -28,     0,     0,     0,   -28,
       0,   -28,   -28,   -28,   -28,     0,     0,   -28,    -9,     0,
     -28,    -9,    -9,    -9,    -9,    -9,     0,     0,     0,     0,
      -9,    -9,    -9,    -9,    -9,    -9,    -9,    -9,     0,     0,
       0,     0,     0,     0,    -9,    -9,    -9,    -9,     0,     0,
       0,    -9,     0,    -9,    -9,    -9,    -9,     0,     0,    -9,
     -51,     0,    -9,   -51,   -51,   -51,   -51,   -51,     0,     0,
       0,     0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
       0,     0,     0,     0,     0,     0,   -51,   -51,   -51,   -51,
       0,     0,     0,   -51,     0,   -51,   -51,   -51,   -51,     0,
       0,   -51,   -44,     0,   -51,   -44,   -44,   -44,   -44,   -44,
       0,     0,     0,     0,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,     0,     0,     0,     0,     0,     0,   -44,   -44,
     -44,   -44,     0,     0,     0,   -44,     0,   -44,   -44,   -44,
     -44,     0,     0,   -44,   -42,     0,   -44,   -42,   -42,   -42,
     -42,   -42,     0,     0,     0,     0,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,     0,     0,     0,     0,     0,     0,
     -42,   -42,   -42,   -42,     0,     0,     0,   -42,     0,   -42,
     -42,   -42,   -42,     0,     0,   -42,   -43,     0,   -42,   -43,
     -43,   -43,   -43,   -43,     0,     0,     0,     0,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,     0,     0,     0,     0,
       0,     0,   -43,   -43,   -43,   -43,     0,     0,     0,   -43,
       0,   -43,   -43,   -43,   -43,     0,     0,   -43,   -40,     0,
     -43,   -40,   -40,   -40,   -40,   -40,     0,     0,     0,     0,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,     0,     0,
       0,     0,     0,     0,   -40,   -40,   -40,   -40,     0,     0,
       0,   -40,     0,   -40,   -40,   -40,   -40,     0,     0,   -40,
     -39,     0,   -40,   -39,   -39,   -39,   -39,   -39,     0,     0,
       0,     0,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
       0,     0,     0,     0,     0,     0,   -39,   -39,   -39,   -39,
       0,     0,     0,   -39,     0,   -39,   -39,   -39,   -39,     0,
       0,   -39,   -41,     0,   -39,   -41,   -41,   -41,   -41,   -41,
       0,     0,     0,     0,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,     0,     0,     0,     0,     0,     0,   -41,   -41,
     -41,   -41,     0,     0,     0,   -41,     0,   -41,   -41,   -41,
     -41,     0,     0,   -41,   -50,     0,   -41,   -50,   -50,   -50,
     -50,   -50,     0,     0,     0,     0,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,     0,     0,     0,     0,     0,     0,
     -50,   -50,   -50,   -50,     0,     0,     0,   -50,     0,   -50,
     -50,   -50,   -50,     0,     0,   -50,   -52,     0,   -50,   681,
     -52,   -52,   -52,   -52,     0,     0,     0,     0,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,     0,     0,     0,     0,
       0,     0,   -52,   -52,   -52,   -52,     0,     0,     0,   -52,
       0,   -52,   -52,   -52,   -52,     0,     0,   -52,   -66,     0,
     -52,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,     0,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,
       0,     0,     0,     0,   -66,   -66,   -66,   -66,     0,     0,
       0,   -66,     0,   -66,   -66,   -66,   -66,     0,     0,   -66,
     -67,     0,   -66,   -67,   -67,   -67,   -67,   -67,     0,     0,
       0,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
       0,     0,     0,     0,     0,     0,   -67,   -67,   -67,   -67,
       0,     0,     0,   -67,     0,   -67,   -67,   -67,   -67,     0,
       0,   -67,   -68,     0,   -67,   -68,   -68,   -68,   -68,   -68,
       0,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,     0,     0,     0,     0,     0,     0,   -68,   -68,
     -68,   -68,     0,     0,     0,   -68,     0,   -68,   -68,   -68,
     -68,     0,     0,   -68,   -12,     0,   -68,   -12,   -12,   -12,
     -12,   -12,     0,     0,     0,     0,   -12,   -12,   -12,   -12,
     -12,   -12,   -12,   -12,     0,     0,     0,     0,     0,     0,
     -12,   -12,   -12,   -12,     0,     0,     0,   -12,     0,   -12,
     -12,   -12,   -12,     0,     0,   -12,   -62,     0,   -12,   -62,
     -62,   -62,   -62,   -62,     0,     0,     0,     0,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,     0,     0,     0,     0,
       0,     0,   -62,   -62,   -62,   -62,     0,     0,     0,   -62,
       0,   -62,   -62,   -62,   -62,     0,     0,   -62,   -64,     0,
     -62,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,
       0,     0,     0,     0,   -64,   -64,   -64,   -64,     0,     0,
       0,   -64,     0,   -64,   -64,   -64,   -64,     0,     0,   -64,
     -54,     0,   -64,   -54,   -54,   -54,   -54,   -54,     0,     0,
       0,     0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
       0,     0,     0,     0,     0,     0,   -54,   -54,   -54,   -54,
       0,     0,     0,   -54,     0,   -54,   -54,   -54,   -54,     0,
       0,   -54,   -48,     0,   -54,   -48,   -48,   -48,   -48,   -48,
       0,     0,     0,     0,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,     0,     0,     0,     0,     0,     0,   -48,   -48,
     -48,   -48,     0,     0,     0,   -48,     0,   -48,   -48,   -48,
     -48,     0,     0,   -48,    44,     0,   -48,     0,   252,    45,
      46,    47,     0,     0,     0,     0,    48,   246,   247,   248,
     249,    49,    50,    51,     0,     0,     0,     0,     0,     0,
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
       0,   -35,   -35,   -35,   -35,     0,     0,   -35,   -57,     0,
     -35,     0,   -57,   -57,   -57,   -57,     0,     0,     0,     0,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,     0,     0,
       0,     0,     0,     0,   -57,   -57,   -57,   -57,     0,     0,
       0,   -57,     0,   -57,   -57,   -57,   -57,     0,     0,   -57,
     -70,     0,   -57,     0,   -70,   -70,   -70,   -70,     0,     0,
       0,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
       0,     0,     0,     0,     0,     0,   -70,   -70,   -70,   -70,
       0,     0,     0,   -70,     0,   -70,   -70,   -70,   -70,     0,
       0,   -70,   -69,     0,   -70,     0,   -69,   -69,   -69,   -69,
       0,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,     0,     0,     0,     0,     0,     0,   -69,   -69,
     -69,   -69,     0,     0,     0,   -69,     0,   -69,   -69,   -69,
     -69,     0,     0,   -69,   -38,     0,   -69,     0,   -38,   -38,
     -38,   -38,     0,     0,     0,     0,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,     0,     0,     0,     0,     0,     0,
     -38,   -38,   -38,   -38,     0,     0,     0,   -38,     0,   -38,
     -38,   -38,   -38,     0,     0,   -38,   -65,     0,   -38,     0,
     -65,   -65,   -65,   -65,     0,     0,     0,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,     0,
       0,     0,   -65,   -65,   -65,   -65,     0,     0,     0,   -65,
       0,   -65,   -65,   -65,   -65,     0,     0,   -65,   -59,     0,
     -65,     0,   -59,   -59,   -59,   -59,     0,     0,     0,     0,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,     0,     0,
       0,     0,     0,     0,   -59,   -59,   -59,   -59,     0,     0,
       0,   -59,     0,   -59,   -59,   -59,   -59,     0,     0,   -59,
     -60,     0,   -59,     0,   -60,   -60,   -60,   -60,     0,     0,
       0,     0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
       0,     0,     0,     0,     0,     0,   -60,   -60,   -60,   -60,
       0,     0,     0,   -60,     0,   -60,   -60,   -60,   -60,     0,
       0,   -60,   -58,     0,   -60,     0,   -58,   -58,   -58,   -58,
       0,     0,     0,     0,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,     0,     0,     0,     0,     0,     0,   -58,   -58,
     -58,   -58,     0,     0,     0,   -58,     0,   -58,   -58,   -58,
     -58,     0,     0,   -58,   -51,     0,   -58,     0,   -51,   -51,
     -51,   -51,     0,     0,     0,     0,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,     0,     0,     0,     0,     0,     0,
     -51,   -51,   -51,   -51,     0,     0,     0,   -51,     0,   -51,
     -51,   -51,   -51,     0,     0,   -51,   -44,     0,   -51,     0,
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
       0,   -41,   -41,   -41,   -41,     0,     0,   -41,   -50,     0,
     -41,     0,   -50,   -50,   -50,   -50,     0,     0,     0,     0,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,     0,
       0,     0,     0,     0,   -50,   -50,   -50,   -50,     0,     0,
       0,   -50,     0,   -50,   -50,   -50,   -50,     0,     0,   -50,
     -66,     0,   -50,     0,   -66,   -66,   -66,   -66,     0,     0,
       0,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
       0,     0,     0,     0,     0,     0,   -66,   -66,   -66,   -66,
       0,     0,     0,   -66,     0,   -66,   -66,   -66,   -66,     0,
       0,   -66,   -67,     0,   -66,     0,   -67,   -67,   -67,   -67,
       0,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,     0,     0,     0,     0,     0,     0,   -67,   -67,
     -67,   -67,     0,     0,     0,   -67,     0,   -67,   -67,   -67,
     -67,     0,     0,   -67,   -68,     0,   -67,     0,   -68,   -68,
     -68,   -68,     0,     0,     0,     0,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,     0,     0,     0,     0,     0,     0,
     -68,   -68,   -68,   -68,     0,     0,     0,   -68,     0,   -68,
     -68,   -68,   -68,     0,     0,   -68,   -62,     0,   -68,     0,
     -62,   -62,   -62,   -62,     0,     0,     0,     0,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,     0,     0,     0,     0,
       0,     0,   -62,   -62,   -62,   -62,     0,     0,     0,   -62,
       0,   -62,   -62,   -62,   -62,     0,     0,   -62,   -64,     0,
     -62,     0,   -64,   -64,   -64,   -64,     0,     0,     0,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,
       0,     0,     0,     0,   -64,   -64,   -64,   -64,     0,     0,
       0,   -64,     0,   -64,   -64,   -64,   -64,     0,     0,   -64,
     -54,     0,   -64,     0,   -54,   -54,   -54,   -54,     0,     0,
       0,     0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
       0,     0,     0,     0,     0,     0,   -54,   -54,   -54,   -54,
       0,     0,     0,   -54,     0,   -54,   -54,   -54,   -54,     0,
       0,   -54,   -48,     0,   -54,     0,   -48,   -48,   -48,   -48,
       0,     0,     0,     0,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,     0,     0,     0,     0,     0,     0,   -48,   -48,
     -48,   -48,     0,     0,     0,   -48,     0,   -48,   -48,   -48,
     -48,     0,     0,   -48,   -13,     0,   -48,     0,   -13,   -13,
     -13,   -13,     0,     0,     0,     0,   -13,   -13,   -13,   -13,
     -13,   -13,   -13,   -13,     0,     0,     0,     0,     0,     0,
     -13,   -13,   -13,   -13,     0,     0,     0,   -13,     0,   -13,
     -13,   -13,   -13,     0,     0,   -13,    44,     0,   -13,     0,
     252,    45,    46,    47,     0,     0,     0,     0,    48,   246,
     247,   248,   249,    49,    50,    51,     0,     0,     0,     0,
       0,     0,    52,    53,    54,    55,     0,     0,     0,    56,
       0,    57,    58,    59,    60,     0,     0,    61,    44,     0,
     456,     0,   252,    45,    46,    47,     0,     0,     0,     0,
      48,   246,   247,   248,   249,    49,    50,    51,     0,     0,
       0,     0,     0,     0,    52,    53,    54,    55,     0,     0,
       0,    56,     0,    57,    58,    59,    60,     0,     0,    61,
     -56,     0,   464,     0,   -56,   -56,   -56,   -56,     0,     0,
       0,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
       0,     0,     0,     0,     0,     0,   -56,   -56,   -56,   -56,
       0,     0,     0,   -56,     0,   -56,   -56,   -56,   -56,     0,
       0,   -56,   -55,     0,   -56,     0,   -55,   -55,   -55,   -55,
       0,     0,     0,     0,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,     0,     0,     0,     0,     0,     0,   -55,   -55,
     -55,   -55,     0,     0,     0,   -55,     0,   -55,   -55,   -55,
     -55,     0,     0,   -55,    -9,     0,   -55,     0,    -9,    -9,
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
       0,   -12,   -49,     0,   -12,     0,   -49,   -49,   -49,   -49,
       0,     0,     0,     0,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,     0,     0,     0,     0,     0,     0,   -49,   -49,
     -49,   -49,     0,     0,     0,   -49,     0,   -49,   -49,   -49,
     -49,     0,   350,   -49,     0,   -49,   252,    45,    46,    47,
       0,     0,     0,     0,    48,   246,   247,   248,   249,   351,
     352,   353,     0,     0,     0,     0,     0,     0,    52,    53,
      54,    55,     0,     0,     0,    56,     0,    57,    58,   354,
     355,     0,    44,    61,     0,   356,   252,    45,    46,    47,
       0,     0,     0,     0,    48,   246,   247,   248,   249,    49,
      50,    51,     0,     0,     0,     0,     0,     0,    52,    53,
      54,    55,     0,     0,     0,    56,     0,    57,    58,    59,
      60,     0,   -61,    61,     0,   369,   -61,   -61,   -61,   -61,
       0,     0,     0,     0,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,     0,     0,     0,     0,     0,     0,   -61,   -61,
     -61,   -61,     0,     0,     0,   -61,     0,   -61,   -61,   -61,
     -61,     0,   -63,   -61,     0,   -61,   -63,   -63,   -63,   -63,
       0,     0,     0,     0,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,     0,     0,     0,     0,     0,     0,   -63,   -63,
     -63,   -63,     0,     0,     0,   -63,     0,   -63,   -63,   -63,
     -63,     0,   -53,   -63,     0,   -63,   -53,   -53,   -53,   -53,
       0,     0,     0,     0,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,     0,     0,     0,     0,     0,     0,   -53,   -53,
     -53,   -53,     0,     0,     0,   -53,     0,   -53,   -53,   -53,
     -53,     0,   524,   -53,     0,   -53,   279,   280,   281,    47,
       0,   526,     0,     0,   282,   279,   280,   281,    47,     0,
     536,     0,     0,   282,   322,   323,   324,    47,     0,     0,
       0,     0,   325,   607,     0,   283,     0,   279,   280,   281,
      47,     0,   609,   284,   283,   282,   279,   280,   281,    47,
       0,   611,   284,   329,   282,   279,   280,   281,    47,     0,
       0,   330,     0,   282,   626,     0,   283,     0,   279,   280,
     281,    47,     0,   628,   284,   283,   282,   279,   280,   281,
      47,     0,   630,   284,   283,   282,   279,   280,   281,    47,
       0,     0,   284,     0,   282,   632,     0,   283,     0,   279,
     280,   281,    47,     0,   634,   284,   283,   282,   279,   280,
     281,    47,     0,   636,   284,   283,   282,   279,   280,   281,
      47,     0,     0,   284,     0,   282,     0,  -123,   283,     0,
       0,     0,     0,     0,  -123,  -123,   284,   283,     0,     0,
       0,     0,     0,     0,     0,   284,   283,  -123,  -123,  -123,
    -123,  -123,  -123,  -122,   284,     0,     0,  -123,  -123,  -123,
    -122,  -122,     0,     0,     0,     0,  -123,     0,     0,     0,
       0,     0,     0,  -122,  -122,  -122,  -122,  -122,  -122,  -106,
       0,     0,     0,  -122,  -122,  -122,  -106,  -106,     0,     0,
       0,     0,  -122,     0,     0,     0,     0,     0,     0,  -106,
    -106,  -106,  -106,  -106,  -106,   -93,     0,     0,     0,  -106,
    -106,  -106,   -93,   129,     0,     0,     0,     0,  -106,     0,
       0,     0,     0,     0,     0,   -93,   -93,   -93,   -93,   -93,
     -93,   -95,     0,     0,     0,   -93,   -93,   -93,   -95,   -95,
       0,     0,     0,     0,   -93,     0,     0,     0,     0,     0,
       0,   -95,   -95,   -95,   -95,   -95,   -95,   -96,     0,     0,
       0,   -95,   -95,   -95,   -96,   -96,     0,     0,     0,     0,
     -95,     0,     0,     0,     0,     0,     0,   -96,   -96,   -96,
     -96,   -96,   -96,  -104,     0,     0,     0,   -96,   -96,   -96,
    -104,  -104,     0,     0,     0,     0,   -96,     0,     0,     0,
       0,     0,     0,  -104,  -104,  -104,  -104,  -104,  -104,   -97,
       0,     0,     0,  -104,  -104,  -104,   -97,   -97,     0,     0,
       0,     0,  -104,     0,     0,     0,     0,     0,     0,   -97,
     -97,   -97,   -97,   -97,   -97,  -103,     0,     0,     0,   -97,
     -97,   -97,  -103,  -103,     0,     0,     0,     0,   -97,     0,
       0,     0,     0,     0,     0,  -103,  -103,  -103,  -103,  -103,
    -103,   -98,     0,     0,     0,  -103,  -103,  -103,   -98,   -98,
       0,     0,     0,     0,  -103,     0,     0,     0,     0,     0,
       0,   -98,   -98,   -98,   -98,   -98,   -98,  -102,     0,     0,
       0,   -98,   -98,   -98,  -102,  -102,     0,     0,     0,     0,
     -98,     0,     0,     0,     0,     0,     0,  -102,  -102,  -102,
    -102,  -102,  -102,  -107,     0,     0,     0,  -102,  -102,  -102,
    -107,  -107,     0,     0,     0,     0,  -102,     0,     0,     0,
       0,     0,     0,  -107,  -107,  -107,  -107,  -107,  -107,  -105,
       0,     0,     0,  -107,  -107,  -107,  -105,  -105,     0,     0,
       0,     0,  -107,     0,     0,     0,     0,     0,     0,  -105,
    -105,  -105,  -105,  -105,  -105,   -92,     0,     0,     0,  -105,
    -105,  -105,   -92,   129,     0,     0,     0,     0,  -105,     0,
       0,     0,     0,     0,     0,   -92,   -92,   -92,   -92,   -92,
     -92,   -94,     0,     0,     0,   -92,   -92,   -92,   -94,   -94,
       0,     0,     0,     0,   -92,     0,     0,     0,     0,     0,
       0,   -94,   -94,   -94,   -94,   -94,   -94,  -100,     0,     0,
       0,   -94,   -94,   -94,  -100,  -100,     0,     0,     0,     0,
     -94,     0,     0,     0,     0,     0,     0,  -100,  -100,  -100,
    -100,  -100,  -100,  -101,     0,     0,     0,  -100,  -100,  -100,
    -101,  -101,     0,     0,     0,     0,  -100,     0,     0,     0,
       0,     0,     0,  -101,  -101,  -101,  -101,  -101,  -101,   -99,
       0,     0,     0,  -101,  -101,  -101,   -99,   -99,     0,     0,
       0,     0,  -101,     0,     0,     0,     0,     0,     0,   -99,
     -99,   -99,   -99,   -99,   -99,  -119,     0,     0,     0,   -99,
     -99,   -99,  -119,  -119,     0,     0,     0,     0,   -99,     0,
       0,     0,     0,     0,     0,  -119,  -119,  -119,  -119,  -119,
    -119,   -91,     0,     0,     0,  -119,  -119,  -119,   277,     0,
       0,     0,     0,     0,  -119,     0,     0,     0,     0,     0,
       0,   -91,   -91,   -91,   -91,   -91,   -91,   -90,     0,     0,
       0,   -91,   -91,   -91,   277,     0,     0,     0,     0,     0,
     -91,     0,     0,     0,     0,     0,     0,   -90,   -90,   -90,
     -90,   -90,   -90,     0,  -119,  -119,     0,   -90,   -90,   -90,
       0,     0,     0,     0,     0,     0,   -90,  -119,  -119,  -119,
    -119,  -119,  -119,     0,     0,     0,     0,  -119,  -119,  -119,
    -103,  -103,     0,     0,     0,     0,     0,  -119,  -119,  -119,
       0,     0,     0,  -103,  -103,  -103,  -103,  -103,  -103,     0,
       0,     0,     0,  -103,  -103,  -103,  -103,  -103,     0,     0,
       0,     0,     0,  -103,   434,  -103,     0,     0,     0,  -103,
    -103,  -103,  -103,  -103,  -103,     0,     0,     0,     0,  -103,
    -103,  -103,  -123,  -123,     0,     0,     0,     0,     0,     0,
     386,  -103,     0,     0,     0,  -123,  -123,  -123,  -123,  -123,
    -123,     0,     0,     0,     0,  -123,  -123,  -123,  -122,  -122,
       0,     0,     0,     0,     0,  -123,     0,  -123,     0,     0,
       0,  -122,  -122,  -122,  -122,  -122,  -122,     0,     0,     0,
       0,  -122,  -122,  -122,  -106,  -106,     0,     0,     0,     0,
       0,  -122,     0,  -122,     0,     0,     0,  -106,  -106,  -106,
    -106,  -106,  -106,     0,     0,     0,     0,  -106,  -106,  -106,
     -93,   129,     0,     0,     0,     0,     0,  -106,     0,  -106,
       0,     0,     0,   -93,   -93,   -93,   -93,   -93,   -93,     0,
       0,     0,     0,   -93,   -93,   -93,   -95,   -95,     0,     0,
       0,     0,     0,   -93,     0,   -93,     0,     0,     0,   -95,
     -95,   -95,   -95,   -95,   -95,     0,     0,     0,     0,   -95,
     -95,   -95,   -96,   -96,     0,     0,     0,     0,     0,   -95,
       0,   -95,     0,     0,     0,   -96,   -96,   -96,   -96,   -96,
     -96,     0,     0,     0,     0,   -96,   -96,   -96,  -104,  -104,
       0,     0,     0,     0,     0,   -96,     0,   -96,     0,     0,
       0,  -104,  -104,  -104,  -104,  -104,  -104,     0,     0,     0,
       0,  -104,  -104,  -104,  -119,  -119,     0,     0,     0,     0,
       0,  -104,     0,  -104,     0,     0,     0,  -119,  -119,  -119,
    -119,  -119,  -119,     0,     0,     0,     0,  -119,  -119,  -119,
     -97,   -97,     0,     0,     0,     0,     0,  -119,     0,  -119,
       0,     0,     0,   -97,   -97,   -97,   -97,   -97,   -97,     0,
       0,     0,     0,   -97,   -97,   -97,  -103,  -103,     0,     0,
       0,     0,     0,   -97,     0,   -97,     0,     0,     0,  -103,
    -103,  -103,  -103,  -103,  -103,     0,     0,     0,     0,  -103,
    -103,  -103,   -98,   -98,     0,     0,     0,     0,     0,  -103,
       0,  -103,     0,     0,     0,   -98,   -98,   -98,   -98,   -98,
     -98,     0,     0,     0,     0,   -98,   -98,   -98,  -102,  -102,
       0,     0,     0,     0,     0,   -98,     0,   -98,     0,     0,
       0,  -102,  -102,  -102,  -102,  -102,  -102,     0,     0,     0,
       0,  -102,  -102,  -102,  -107,  -107,     0,     0,     0,     0,
       0,  -102,     0,  -102,     0,     0,     0,  -107,  -107,  -107,
    -107,  -107,  -107,     0,     0,     0,     0,  -107,  -107,  -107,
    -105,  -105,     0,     0,     0,     0,     0,  -107,     0,  -107,
       0,     0,     0,  -105,  -105,  -105,  -105,  -105,  -105,     0,
       0,     0,     0,  -105,  -105,  -105,   -92,   129,     0,     0,
       0,     0,     0,  -105,     0,  -105,     0,     0,     0,   -92,
     -92,   -92,   -92,   -92,   -92,     0,     0,     0,     0,   -92,
     -92,   -92,   -94,   -94,     0,     0,     0,     0,     0,   -92,
       0,   -92,     0,     0,     0,   -94,   -94,   -94,   -94,   -94,
     -94,     0,     0,     0,     0,   -94,   -94,   -94,  -100,  -100,
       0,     0,     0,     0,     0,   -94,     0,   -94,     0,     0,
       0,  -100,  -100,  -100,  -100,  -100,  -100,     0,     0,     0,
       0,  -100,  -100,  -100,  -101,  -101,     0,     0,     0,     0,
       0,  -100,     0,  -100,     0,     0,     0,  -101,  -101,  -101,
    -101,  -101,  -101,     0,     0,     0,     0,  -101,  -101,  -101,
     -99,   -99,     0,     0,     0,     0,     0,  -101,     0,  -101,
       0,     0,     0,   -99,   -99,   -99,   -99,   -99,   -99,     0,
       0,     0,     0,   -99,   -99,   -99,  -123,  -123,     0,     0,
       0,     0,     0,   -99,     0,   -99,     0,     0,     0,  -123,
    -123,  -123,  -123,  -123,  -123,     0,     0,     0,     0,  -123,
    -123,  -123,  -122,  -122,     0,     0,     0,     0,     0,     0,
       0,  -123,     0,     0,     0,  -122,  -122,  -122,  -122,  -122,
    -122,     0,     0,     0,     0,  -122,  -122,  -122,  -106,  -106,
       0,     0,     0,     0,     0,     0,     0,  -122,     0,     0,
       0,  -106,  -106,  -106,  -106,  -106,  -106,     0,     0,     0,
       0,  -106,  -106,  -106,   -93,   129,     0,     0,     0,     0,
       0,     0,     0,  -106,     0,     0,     0,   -93,   -93,   -93,
     -93,   -93,   -93,     0,     0,     0,     0,   -93,   -93,   -93,
     -95,   -95,     0,     0,     0,     0,     0,     0,     0,   -93,
       0,     0,     0,   -95,   -95,   -95,   -95,   -95,   -95,     0,
       0,     0,     0,   -95,   -95,   -95,   -96,   -96,     0,     0,
       0,     0,     0,     0,     0,   -95,     0,     0,     0,   -96,
     -96,   -96,   -96,   -96,   -96,     0,     0,     0,     0,   -96,
     -96,   -96,  -104,  -104,     0,     0,     0,     0,     0,     0,
       0,   -96,     0,     0,     0,  -104,  -104,  -104,  -104,  -104,
    -104,     0,     0,     0,     0,  -104,  -104,  -104,   277,     0,
       0,     0,     0,     0,     0,     0,     0,  -104,     0,     0,
       0,   -91,   -91,   -91,   -91,   -91,   -91,     0,     0,     0,
       0,   -91,   -91,   -91,  -119,  -119,     0,     0,     0,     0,
       0,   -91,     0,   -91,     0,     0,     0,  -119,  -119,  -119,
    -119,  -119,  -119,     0,     0,     0,     0,  -119,  -119,  -119,
     -97,   -97,     0,     0,     0,     0,     0,     0,     0,  -119,
       0,     0,     0,   -97,   -97,   -97,   -97,   -97,   -97,     0,
       0,     0,     0,   -97,   -97,   -97,  -103,  -103,     0,     0,
       0,     0,     0,     0,     0,   -97,     0,     0,     0,  -103,
    -103,  -103,  -103,  -103,  -103,     0,     0,     0,     0,  -103,
    -103,  -103,   -98,   -98,     0,     0,     0,     0,     0,     0,
       0,  -103,     0,     0,     0,   -98,   -98,   -98,   -98,   -98,
     -98,     0,     0,     0,     0,   -98,   -98,   -98,  -102,  -102,
       0,     0,     0,     0,     0,     0,     0,   -98,     0,     0,
       0,  -102,  -102,  -102,  -102,  -102,  -102,     0,     0,     0,
       0,  -102,  -102,  -102,  -107,  -107,     0,     0,     0,     0,
       0,     0,     0,  -102,     0,     0,     0,  -107,  -107,  -107,
    -107,  -107,  -107,     0,     0,     0,     0,  -107,  -107,  -107,
    -105,  -105,     0,     0,     0,     0,     0,     0,     0,  -107,
       0,     0,     0,  -105,  -105,  -105,  -105,  -105,  -105,     0,
       0,     0,     0,  -105,  -105,  -105,   -92,   129,     0,     0,
       0,     0,     0,     0,     0,  -105,     0,     0,     0,   -92,
     -92,   -92,   -92,   -92,   -92,     0,     0,     0,     0,   -92,
     -92,   -92,   -94,   -94,     0,     0,     0,     0,     0,     0,
       0,   -92,     0,     0,     0,   -94,   -94,   -94,   -94,   -94,
     -94,     0,     0,     0,     0,   -94,   -94,   -94,  -100,  -100,
       0,     0,     0,     0,     0,     0,     0,   -94,     0,     0,
       0,  -100,  -100,  -100,  -100,  -100,  -100,     0,     0,     0,
       0,  -100,  -100,  -100,   277,     0,     0,     0,     0,     0,
       0,     0,     0,  -100,     0,     0,     0,   -90,   -90,   -90,
     -90,   -90,   -90,     0,     0,     0,     0,   -90,   -90,   -90,
    -101,  -101,     0,     0,     0,     0,     0,   -90,     0,   -90,
       0,     0,     0,  -101,  -101,  -101,  -101,  -101,  -101,     0,
       0,     0,     0,  -101,  -101,  -101,   -99,   -99,     0,     0,
       0,     0,     0,     0,     0,  -101,     0,     0,     0,   -99,
     -99,   -99,   -99,   -99,   -99,     0,     0,     0,     0,   -99,
     -99,   -99,  -119,  -119,     0,     0,     0,     0,     0,     0,
       0,   -99,     0,     0,     0,  -119,  -119,  -119,  -119,  -119,
    -119,     0,     0,     0,     0,  -119,  -119,  -119,  -103,  -103,
       0,     0,     0,     0,  -119,     0,  -119,     0,     0,     0,
       0,  -103,  -103,  -103,  -103,  -103,  -103,     0,     0,     0,
       0,  -103,  -103,  -103,  -119,  -119,     0,     0,     0,     0,
    -103,     0,   418,     0,     0,     0,     0,  -119,  -119,  -119,
    -119,  -119,  -119,     0,     0,     0,     0,  -119,  -119,  -119,
    -103,  -103,     0,     0,     0,     0,     0,     0,  -119,     0,
       0,     0,     0,  -103,  -103,  -103,  -103,  -103,  -103,     0,
       0,     0,     0,  -103,  -103,  -103,  -123,  -123,     0,     0,
       0,     0,     0,     0,   397,     0,     0,     0,     0,  -123,
    -123,  -123,  -123,  -123,  -123,     0,  -122,  -122,     0,  -123,
    -123,  -123,     0,     0,     0,     0,     0,     0,  -123,  -122,
    -122,  -122,  -122,  -122,  -122,     0,  -106,  -106,     0,  -122,
    -122,  -122,     0,     0,     0,     0,     0,     0,  -122,  -106,
    -106,  -106,  -106,  -106,  -106,     0,   -93,   129,     0,  -106,
    -106,  -106,     0,     0,     0,     0,     0,     0,  -106,   -93,
     -93,   -93,   -93,   -93,   -93,     0,   -95,   -95,     0,   -93,
     -93,   -93,     0,     0,     0,     0,     0,     0,   -93,   -95,
     -95,   -95,   -95,   -95,   -95,     0,   -96,   -96,     0,   -95,
     -95,   -95,     0,     0,     0,     0,     0,     0,   -95,   -96,
     -96,   -96,   -96,   -96,   -96,     0,  -104,  -104,     0,   -96,
     -96,   -96,     0,     0,     0,     0,     0,     0,   -96,  -104,
    -104,  -104,  -104,  -104,  -104,     0,  -119,  -119,     0,  -104,
    -104,  -104,     0,     0,     0,     0,     0,     0,  -104,  -119,
    -119,  -119,  -119,  -119,  -119,     0,   -97,   -97,     0,  -119,
    -119,  -119,     0,     0,     0,     0,     0,     0,  -119,   -97,
     -97,   -97,   -97,   -97,   -97,     0,  -103,  -103,     0,   -97,
     -97,   -97,     0,     0,     0,     0,     0,     0,   -97,  -103,
    -103,  -103,  -103,  -103,  -103,     0,   -98,   -98,     0,  -103,
    -103,  -103,     0,     0,     0,     0,     0,     0,  -103,   -98,
     -98,   -98,   -98,   -98,   -98,     0,  -102,  -102,     0,   -98,
     -98,   -98,     0,     0,     0,     0,     0,     0,   -98,  -102,
    -102,  -102,  -102,  -102,  -102,     0,  -107,  -107,     0,  -102,
    -102,  -102,     0,     0,     0,     0,     0,     0,  -102,  -107,
    -107,  -107,  -107,  -107,  -107,     0,  -105,  -105,     0,  -107,
    -107,  -107,     0,     0,     0,     0,     0,     0,  -107,  -105,
    -105,  -105,  -105,  -105,  -105,     0,   -92,   129,     0,  -105,
    -105,  -105,     0,     0,     0,     0,     0,     0,  -105,   -92,
     -92,   -92,   -92,   -92,   -92,     0,   -94,   -94,     0,   -92,
     -92,   -92,     0,     0,     0,     0,     0,     0,   -92,   -94,
     -94,   -94,   -94,   -94,   -94,     0,  -100,  -100,     0,   -94,
     -94,   -94,     0,     0,     0,     0,     0,     0,   -94,  -100,
    -100,  -100,  -100,  -100,  -100,     0,  -101,  -101,     0,  -100,
    -100,  -100,     0,     0,     0,     0,     0,     0,  -100,  -101,
    -101,  -101,  -101,  -101,  -101,     0,   -99,   -99,     0,  -101,
    -101,  -101,     0,     0,     0,     0,     0,     0,  -101,   -99,
     -99,   -99,   -99,   -99,   -99,     0,   277,     0,     0,   -99,
     -99,   -99,     0,     0,     0,     0,     0,     0,   -99,   -91,
     -91,   -91,   -91,   -91,   -91,     0,   277,     0,     0,   -91,
     -91,   -91,     0,     0,     0,     0,     0,     0,   -91,   -90,
     -90,   -90,   -90,   -90,   -90,     0,  -106,  -106,     0,   -90,
     -90,   -90,     0,     0,     0,     0,     0,     0,   -90,  -106,
    -106,  -106,  -106,  -106,  -106,   -93,   129,     0,     0,  -106,
    -106,  -106,     0,     0,     0,     0,     0,     0,   -93,   -93,
     -93,   -93,   -93,   -93,   -95,   -95,     0,     0,   -93,   -93,
     -93,     0,     0,     0,     0,     0,     0,   -95,   -95,   -95,
     -95,   -95,   -95,   -96,   -96,     0,     0,   -95,   -95,   -95,
       0,     0,     0,     0,     0,     0,   -96,   -96,   -96,   -96,
     -96,   -96,  -104,  -104,     0,     0,   -96,   -96,   -96,     0,
       0,     0,     0,     0,     0,  -104,  -104,  -104,  -104,  -104,
    -104,  -119,  -119,     0,     0,  -104,  -104,  -104,     0,     0,
       0,     0,     0,     0,  -119,  -119,  -119,  -119,  -119,  -119,
     -97,   -97,     0,     0,  -119,  -119,  -119,     0,     0,     0,
       0,     0,     0,   -97,   -97,   -97,   -97,   -97,   -97,  -103,
    -103,     0,     0,   -97,   -97,   -97,     0,     0,     0,     0,
       0,     0,  -103,  -103,  -103,  -103,  -103,  -103,   -98,   -98,
       0,     0,  -103,  -103,  -103,     0,     0,     0,     0,     0,
       0,   -98,   -98,   -98,   -98,   -98,   -98,  -102,  -102,     0,
       0,   -98,   -98,   -98,     0,     0,     0,     0,     0,     0,
    -102,  -102,  -102,  -102,  -102,  -102,  -107,  -107,     0,     0,
    -102,  -102,  -102,     0,     0,     0,     0,     0,     0,  -107,
    -107,  -107,  -107,  -107,  -107,  -105,  -105,     0,     0,  -107,
    -107,  -107,     0,     0,     0,     0,     0,     0,  -105,  -105,
    -105,  -105,  -105,  -105,   -92,   129,     0,     0,  -105,  -105,
    -105,     0,     0,     0,     0,     0,     0,   -92,   -92,   -92,
     -92,   -92,   -92,   -94,   -94,     0,     0,   -92,   -92,   -92,
       0,     0,     0,     0,     0,     0,   -94,   -94,   -94,   -94,
     -94,   -94,  -100,  -100,     0,     0,   -94,   -94,   -94,     0,
       0,     0,     0,     0,     0,  -100,  -100,  -100,  -100,  -100,
    -100,  -101,  -101,     0,     0,  -100,  -100,  -100,     0,     0,
       0,     0,     0,     0,  -101,  -101,  -101,  -101,  -101,  -101,
     -99,   -99,     0,     0,  -101,  -101,  -101,     0,     0,     0,
       0,     0,     0,   -99,   -99,   -99,   -99,   -99,   -99,   277,
       0,     0,     0,   -99,   -99,   -99,     0,     0,     0,     0,
       0,     0,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,
       0,     0,   -90,   -90,   -90,   121,   122,   123,   124,   125,
     126,     0,     0,     0,     0,   -89,   -89,   -89,   121,   122,
     123,   124,   125,   126,     0,   -89,     0,   -89,   -88,   -88,
     -88,   121,   122,   123,   124,   125,   126,     0,   -88,     0,
     -88,   -89,   -89,   -89,   121,   122,   123,   124,   125,   126,
       0,     0,     0,   -89,   -88,   -88,   -88,   121,   122,   123,
     124,   125,   126,     0,     0,     0,   -88,   -89,   -89,   -89,
     121,   122,   123,   124,   125,   126,   -89,     0,     0,     0,
     -88,   -88,   -88,   121,   122,   123,   124,   125,   126,   -88,
       0,     0,     0,   -89,   -89,   -89,   121,   122,   123,   124,
     125,   126,     0,     0,     0,     0,   -88,   -88,   -88
};

static const yytype_int16 yycheck[] =
{
       0,   134,    41,    65,     0,     0,    36,     7,   343,   545,
     203,     7,     1,     1,     1,    27,     5,    41,   206,    43,
      31,    32,    33,   269,    24,    31,    32,    27,     1,   271,
       1,    11,    43,    40,     1,    65,     5,    43,    31,    32,
     286,    42,   206,    31,    32,    25,   288,     1,     1,     1,
      43,    31,    40,    40,     1,   206,    36,    40,    31,    32,
      33,    41,    14,    15,    16,    17,     1,    40,   314,    40,
     141,     1,    29,    40,   316,   206,    56,    34,    90,     1,
      60,    61,     1,     1,     1,    65,    40,    40,     5,   335,
      90,    43,     1,    40,    43,   337,    14,    15,    16,    17,
       5,    31,    32,    33,     1,    40,    86,   206,    88,     5,
      40,    43,    31,    32,     1,    95,    12,    97,    40,    99,
      44,    40,     1,   659,   104,    43,     5,     6,     7,     8,
       5,    40,    89,   113,    13,   206,    93,    12,   118,   119,
     120,   206,     1,    40,    43,     1,    40,   127,   128,     1,
     130,   131,   132,    40,     1,    34,    40,     5,     5,   206,
      43,   141,   233,    42,    12,    21,    22,    23,    24,    25,
      26,    36,    31,    32,   206,    31,    32,    33,     5,    31,
      32,    40,    31,    32,    40,     1,    31,    32,    40,     1,
      43,    56,    41,   386,    43,    60,    61,   227,    43,   229,
      65,   227,    43,   229,   397,   185,   206,   237,   238,   239,
     206,   237,   238,   239,   244,    31,    32,    42,   244,    31,
      32,    86,    42,   203,    40,   418,   206,   207,    40,   564,
      95,   477,    14,    15,    16,    17,    42,   479,     1,    42,
     486,   434,     5,     6,     7,     8,   488,   227,   113,   229,
      13,    42,     5,   233,   119,   120,    42,   237,   238,   239,
       1,    43,   127,   128,   244,   130,   131,   132,    42,   515,
     227,    34,   229,    42,    27,   517,    29,    30,     5,    42,
     237,   238,   239,   263,   264,    12,     5,   244,    31,    32,
      31,    32,   538,     1,   356,   275,    42,    40,   540,    40,
       8,     9,     5,   283,   284,     0,     1,   369,    27,    12,
      29,    30,   292,    21,    22,    23,    24,    25,    26,    14,
      15,    16,    17,    31,    32,    33,   356,    35,   308,   309,
     463,     1,    40,    42,    42,     5,    40,    41,   203,   369,
     320,   206,   207,    45,     5,    40,    40,     1,    42,   329,
     330,     1,    42,    43,     1,     5,     6,     7,     8,    40,
      41,   341,   227,    13,   229,    42,    27,   347,    29,    30,
      43,     5,   237,   238,   239,   355,   356,    31,    32,   244,
      27,    40,    29,    30,    34,    40,    40,    42,   368,   369,
       5,     1,    42,    27,    40,    29,    30,   436,   263,   264,
      40,   381,   382,   383,   384,   385,   386,    43,    31,    32,
     275,    21,    22,    23,    24,    25,    26,   397,   283,   284,
      43,    31,    32,    33,    45,     0,     1,   292,     5,     1,
      40,     1,   412,   413,   414,   415,   416,   417,   418,    14,
      15,    16,    17,   308,   309,    31,    32,    33,   428,   429,
     430,   431,   432,   433,   434,   320,   436,    43,   646,    31,
      32,    31,    32,     1,   329,   330,    42,    43,    40,   449,
      40,   451,   452,     5,     6,     7,   341,    43,   458,     1,
     551,    13,   646,     5,    31,    32,   466,   675,    43,   677,
     355,   356,    31,    31,    32,   646,    43,    31,   686,   687,
      43,   689,    40,    43,   369,    27,   694,    29,    30,    42,
      42,   675,    41,   677,    43,   646,   381,   382,   383,   384,
     385,   386,   686,   687,   675,   689,   677,    31,    32,    41,
     694,    43,   397,     1,    43,   686,   687,     5,   689,    43,
      40,    41,    42,   694,   675,    43,   677,   646,   413,   414,
     415,   416,   417,   418,    43,   686,   687,    43,   689,    27,
      43,    29,    30,   694,   429,   430,   431,   432,   433,   434,
      43,   551,     5,     6,     7,   646,   675,    43,   677,     1,
      13,   646,    43,     5,   449,   624,    40,   686,   687,     1,
     689,    31,    32,   458,    43,   694,    40,    41,    42,   646,
      41,   466,    43,    43,   675,    27,   677,    29,    30,    42,
     675,   682,   677,    40,   646,   686,   687,    40,   689,    42,
     646,   686,   687,   694,   689,    35,    31,    32,   675,   694,
     677,    42,    43,     5,     6,     7,    41,   617,    43,   686,
     687,    13,   689,   675,   624,   677,   646,   694,    40,   675,
     646,   677,    31,    32,   686,   687,     1,   689,     1,    40,
     686,   687,   694,   689,    43,    40,   646,   647,   694,    40,
      42,    14,    15,    16,    17,   675,    40,   677,    42,   675,
      40,   677,    27,    40,    29,    30,   686,   687,    40,   689,
     686,   687,    36,   689,   694,   675,    43,   677,   694,    31,
      32,    33,   682,    31,    32,    33,   686,   687,    40,   689,
       5,     6,     7,    41,   694,    43,    60,    61,    13,    31,
      32,    65,    31,    32,    31,    32,     1,    40,    40,     4,
       5,     6,     7,     8,    41,    40,    43,    81,    13,    14,
      15,    16,    17,    18,    19,    20,     1,    42,    31,    32,
      33,    95,    27,    28,    29,    30,    42,    43,    41,    34,
      43,    36,    37,    38,    39,    31,    32,    42,    40,   113,
      45,    42,    43,     1,    40,   119,   120,     5,     6,     7,
       8,   646,   647,   127,   128,    13,   130,   131,   132,     5,
       6,     7,    41,    42,    43,    43,    41,    13,    43,    27,
      43,    29,    30,     5,     6,     7,    34,    36,    42,    43,
     675,    13,   677,     1,    42,    43,    43,     5,     6,     7,
       8,   686,   687,    43,   689,    13,    42,    56,   172,   694,
      43,    60,    61,     0,     1,    41,    65,    43,    43,    27,
      42,    29,    30,     1,    31,    32,    34,    14,    15,    16,
      17,    31,    32,    33,    42,    43,    43,    86,    43,   203,
      31,    32,   206,   207,     1,    41,    95,    43,     5,     6,
       7,     8,    43,    41,     1,    43,    13,     5,     5,     6,
       7,     8,     5,   227,   113,   229,    13,    31,    32,    33,
     119,   120,     5,   237,   238,   239,    40,    34,   127,   128,
     244,   130,   131,   132,     5,    42,    41,    34,    43,    42,
      31,    32,    31,    32,    33,    42,    31,    32,     1,    40,
     264,     4,     5,     6,     7,     8,   270,    41,    43,    43,
      13,    14,    15,    16,    17,    18,    19,    20,    31,    32,
     284,    41,    42,   287,    27,    28,    29,    30,    41,    43,
      43,    34,    42,    36,    37,    38,    39,    31,    32,    42,
      31,    32,    45,    31,    32,   309,     0,     1,    31,    43,
      41,   315,    43,    41,   203,    43,    42,   206,   207,    43,
      14,    15,    16,    17,    31,    32,   330,    31,    32,    43,
       1,    42,   336,    40,     5,     6,     7,     8,   227,    43,
     229,    42,    13,    40,    41,    31,    32,    42,   237,   238,
     239,   355,   356,     0,     1,   244,    27,    43,    29,    30,
      42,    31,    32,    34,    42,   369,    42,    14,    15,    16,
      17,    42,    43,    43,   263,   264,     1,   381,   382,   383,
     384,   385,   386,     8,     9,    42,   275,    40,     0,     1,
      41,    42,    43,   397,    42,   284,    21,    22,    23,    24,
      25,    26,    14,    15,    16,    17,    31,    32,    33,   413,
     414,   415,   416,   417,   418,    40,    42,    42,    42,   308,
     309,    42,    43,    31,    32,   429,   430,   431,   432,   433,
     434,   320,     1,    41,    40,    43,     5,     6,     7,     8,
     329,   330,    35,     1,    13,   449,    43,     5,     6,     7,
       8,    43,   341,    42,   458,    13,    31,    32,    27,    42,
      29,    30,   466,    31,    32,    34,   355,   356,    43,    27,
      42,    29,    30,    42,   478,    43,    34,    31,    32,     1,
     369,    31,    32,   487,    42,    43,     8,     9,    40,    43,
      40,    42,   381,   382,   383,   384,   385,   386,    42,    21,
      22,    23,    24,    25,    26,    31,    32,    36,   397,    31,
      32,    33,   516,    35,    35,    41,    40,    43,    40,    42,
      42,    31,    32,    43,   413,   414,   415,   416,   417,   418,
      43,    60,    61,    43,    43,   539,    65,    31,    32,    43,
     429,   430,   431,   432,   433,   434,     1,     0,     1,    43,
       5,     6,     7,     8,    43,    31,    32,    42,    13,    42,
     449,    14,    15,    16,    17,    41,    95,    43,    42,   458,
      31,    32,    27,    45,    29,    30,    45,   466,    42,    34,
       0,     1,    43,    43,   113,    42,    43,    42,    43,    43,
     119,   120,    42,    43,    14,    15,    16,    17,   127,   128,
       1,   130,   131,   132,     5,     6,     7,     8,    41,    42,
      43,    42,    13,    14,    15,    16,    17,    18,    19,    20,
      31,    32,    36,    41,    42,    43,    27,    28,    29,    30,
      41,    43,    43,    34,    42,    36,    37,    38,    39,     0,
       1,    42,   646,   647,    45,    42,    60,    61,    42,    31,
      32,    65,    42,    14,    15,    16,    17,    42,    43,    41,
       1,    43,    40,    41,     5,     6,     7,     8,    42,    10,
      11,   675,    13,   677,   203,    31,    32,   206,   207,    31,
      32,    95,   686,   687,    42,   689,    27,    43,    29,    30,
     694,    43,    43,    34,    31,    32,    42,    43,   227,   113,
     229,    42,    31,    40,    43,   119,   120,     8,   237,   238,
     239,    42,    43,   127,   128,   244,    43,   131,   132,    31,
      21,    22,    23,    24,    25,    26,    41,    42,    43,    43,
      31,    32,    33,     1,    43,   264,     4,     5,     6,     7,
       8,    43,    43,    42,    43,    13,    14,    15,    16,    17,
      18,    19,    20,    31,    32,   284,    43,   646,   647,    27,
      28,    29,    30,    42,    43,    43,    34,    40,    36,    37,
      38,    39,    31,    32,    42,    31,    32,    45,     1,    43,
     309,    40,     5,     6,     7,     8,   675,    43,   677,   203,
      13,    43,   206,   207,    42,    43,    43,   686,   687,    43,
     689,   330,    31,    32,    27,   694,    29,    30,    43,    31,
      32,    34,    43,   227,    43,   229,    43,    40,    40,    42,
       8,     9,    40,   237,   238,   239,   355,   356,    42,    43,
     244,    42,    43,    21,    22,    23,    24,    25,    26,    40,
     369,     1,    40,    31,    32,    33,    31,    32,     8,     9,
     264,    40,   381,   382,   383,   384,   385,   386,    43,    42,
      43,    21,    22,    23,    24,    25,    26,   396,   397,    40,
     284,    31,    32,    33,    31,    32,     0,     1,    42,    43,
      40,    40,    42,    40,   413,   414,   415,   416,   417,   418,
      14,    15,    16,    17,    40,   309,    31,    32,    31,    32,
     429,   430,   431,   432,   433,   434,     1,     1,    43,    40,
      43,     5,     6,     7,     8,    40,   330,    40,     1,    13,
     449,    40,     5,     6,     7,     8,    40,    10,    11,   458,
      13,    31,    32,    27,    40,    29,    30,   466,    42,    43,
      34,   355,   356,    43,    27,    43,    29,    30,    42,     0,
       1,    34,    40,    31,    32,   369,    42,    43,    43,    42,
       0,     1,    40,    14,    15,    16,    17,   381,   382,   383,
     384,    43,   386,    43,    14,    15,    16,    17,    31,    32,
       1,   395,    36,   397,     5,     6,     7,     8,    43,     1,
      43,     1,    13,    42,    43,     5,     6,     7,     8,   413,
     414,   415,   416,    13,   418,    61,    60,    61,    42,    43,
      40,    65,    40,    34,    43,   429,   430,   431,   432,     7,
     434,    42,     1,   450,    34,   681,     5,     6,     7,     8,
      31,    32,    42,   614,    13,   449,   646,    31,    32,    95,
     678,    95,    43,    99,   458,   679,    31,    32,    27,    43,
      29,    30,   466,     0,     1,    34,   458,   113,    43,   113,
     458,    40,   118,    42,    -1,   119,   120,    14,    15,    16,
      17,    42,    43,   127,    -1,   131,   132,   131,   132,     1,
      31,    32,    -1,     5,     6,     7,     8,    42,    43,    42,
      43,    13,    43,    -1,     1,    -1,    -1,    36,     5,     6,
       7,     8,    42,    43,    -1,    27,    13,    29,    30,    42,
      43,    -1,    34,    42,    43,    42,    43,   646,   647,    -1,
      42,    60,    61,    42,    43,    -1,    65,    34,   184,   185,
      42,    43,    42,    43,    -1,    42,    -1,    -1,     1,    -1,
      -1,    -1,     5,     6,     7,     8,   675,   203,   677,   203,
      13,   207,   206,   207,    -1,    -1,    95,   686,   687,    -1,
     689,    -1,    -1,    -1,    27,   694,    29,    30,    -1,    -1,
      -1,    34,    -1,   227,   113,   229,    -1,    -1,    -1,    42,
     119,   120,    -1,   237,   238,   239,    -1,    -1,     0,     1,
     244,    -1,   131,   132,     1,    -1,    -1,    -1,     5,     6,
       7,     8,    14,    15,    16,    17,    13,    -1,   264,     1,
     264,    -1,    36,     5,     6,     7,     8,    -1,    -1,    -1,
      27,    13,    29,    30,    -1,    -1,    -1,    34,   284,    -1,
     284,    -1,   646,   647,    -1,    42,    60,    61,    -1,    -1,
      -1,    65,    34,     0,     1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,   309,    -1,   309,    -1,    14,    15,    16,
      17,   675,    -1,   677,   203,    -1,    -1,   206,   207,     8,
       9,    95,   686,   687,   330,   689,   330,    -1,    -1,    -1,
     694,    -1,    21,    22,    23,    24,    25,    26,   227,   113,
     229,   347,    31,    32,    33,   119,    -1,    -1,   237,   238,
     239,   355,   356,    42,    43,   244,     1,   131,   132,    -1,
       5,     6,     7,     8,    -1,   369,    -1,    -1,    13,    -1,
      -1,    -1,    -1,    -1,    -1,   264,    -1,   381,   382,   383,
     386,    -1,   386,    -1,    -1,    -1,    -1,    -1,    -1,    34,
     394,   397,    -1,   397,    -1,   284,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   412,    -1,    -1,   413,
     414,   415,   418,    -1,   418,    -1,    -1,    -1,    -1,    -1,
     309,    -1,   428,    -1,    -1,   429,   430,   431,   434,   203,
     434,    -1,   206,   207,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   330,    -1,   449,    -1,   449,    -1,    -1,    -1,    -1,
      60,    61,   458,   227,   458,   229,    -1,    -1,    -1,    -1,
     466,    -1,   466,   237,   238,   239,   355,   356,    -1,    -1,
     244,    -1,     1,    -1,    -1,    -1,     5,     6,     7,     8,
     369,    -1,     1,    -1,    13,    95,     5,     6,     7,     8,
     264,    -1,   381,   382,    13,    -1,    -1,   386,    27,    -1,
      29,    30,    -1,   113,   393,    34,    -1,    -1,   397,    -1,
     284,    -1,    -1,    42,    -1,    34,    -1,    -1,    -1,    -1,
      -1,   131,   132,    42,   413,   414,    36,    -1,    -1,   418,
      -1,    -1,     1,    -1,    -1,   309,     5,     6,     7,     8,
     429,   430,     1,    -1,    13,   434,     5,     6,     7,     8,
      60,    61,    -1,    -1,    13,    65,   330,    -1,    -1,    -1,
     449,    -1,    -1,    -1,    -1,    34,    -1,    -1,    27,   458,
      29,    30,    -1,    42,   348,    34,    -1,   466,    -1,    -1,
      -1,   355,   356,    42,    -1,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   203,     1,   369,   206,   207,     5,     6,
       7,     8,    -1,   113,    -1,    -1,    13,   381,    -1,    -1,
     616,   617,   386,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   131,   132,   397,     1,    -1,    -1,    34,     5,     6,
       7,     8,    -1,    -1,    -1,    42,    13,    -1,    -1,   413,
      -1,   647,   646,   647,   418,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    29,    30,   264,   429,    -1,    34,    -1,    -1,
     434,    61,    -1,     8,     9,    42,    -1,    -1,    -1,    -1,
      -1,   675,    -1,   677,   284,   449,    21,    22,    23,    24,
      25,    26,   686,   687,   458,   689,    31,    32,    33,    -1,
     694,     8,   466,   203,    -1,    95,   206,   207,    98,   309,
     100,   101,    -1,    -1,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,   113,    31,    32,    33,   227,     1,   229,
     330,    -1,     5,     6,     7,     8,    43,   237,   238,   239,
      13,   131,   132,    -1,   244,    -1,     1,    -1,    -1,    -1,
       5,     6,     7,     8,    27,   355,    29,    30,    13,    -1,
      -1,    34,    -1,    -1,   264,    -1,    -1,   646,   647,    42,
      -1,    -1,    27,    -1,    29,    30,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,   284,    -1,   386,    42,     1,    -1,
      -1,    -1,     5,     6,     7,     8,   675,   397,   677,     1,
      13,    -1,    -1,     5,     6,     7,     8,   686,   687,   309,
     689,    13,    -1,   203,    -1,   694,    -1,   207,   418,     1,
      -1,    34,    -1,     5,     6,     7,     8,    -1,    -1,    42,
     330,    13,    34,    -1,   434,    -1,    -1,    -1,     1,    -1,
      42,    -1,     5,     6,     7,     8,    -1,    -1,    -1,   449,
      13,    -1,    34,    -1,    -1,   355,   356,    -1,   458,    -1,
      42,    -1,    -1,    -1,    -1,    -1,   466,    -1,    -1,   369,
      -1,    34,    -1,    -1,   264,    -1,    -1,    -1,    -1,    42,
      -1,    -1,   646,   647,    -1,    -1,   386,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   284,     1,    -1,   397,    -1,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      -1,   675,    -1,   677,    -1,    -1,    -1,    -1,   418,   309,
      -1,    -1,   686,   687,    -1,   689,    -1,    -1,    34,    -1,
     694,    -1,    -1,    -1,   434,    -1,    42,    -1,     1,    -1,
     330,    -1,     5,     6,     7,     8,    -1,     1,    -1,   449,
      13,     5,     6,     7,     8,    -1,     1,    -1,   458,    13,
       5,     6,     7,     8,    -1,    -1,   466,    -1,    13,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      34,    -1,    -1,   373,   374,   375,     1,    -1,    42,    34,
       5,     6,     7,     8,    -1,    -1,   386,    42,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   397,    -1,    -1,
     400,   401,   402,    -1,   404,   405,   406,     1,    -1,    34,
      -1,     5,     6,     7,     8,    -1,    -1,    42,   418,    13,
     420,   421,   422,     1,    -1,    -1,    -1,     5,     6,     7,
       8,    -1,    -1,    -1,   434,    13,   646,   647,    -1,     1,
      34,    -1,    -1,     5,     6,     7,     8,    -1,    42,   449,
      -1,    13,    -1,    -1,    -1,    -1,    34,    -1,   458,    -1,
      -1,    -1,    -1,    -1,    42,   675,   466,   677,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    -1,   686,   687,    -1,   689,
      42,    -1,     1,    -1,   694,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    -1,    -1,    -1,    34,     8,    36,    37,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    21,
      22,    23,    24,    25,    26,    -1,   646,   647,    -1,    31,
      32,    33,    -1,    -1,    -1,     1,   546,   547,   548,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,   675,    -1,   677,    -1,    -1,
      -1,    27,    28,    29,    30,    -1,   686,   687,    34,   689,
      36,    37,    38,    39,   694,    -1,    42,    -1,    -1,    45,
     590,   591,   592,     1,    -1,    -1,     4,     5,     6,     7,
       8,   601,   602,   603,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,
      38,    39,    -1,    -1,    42,    -1,     1,    45,    -1,     4,
       5,     6,     7,     8,    -1,    -1,    -1,   647,    13,    14,
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
       7,     8,    -1,     1,    42,    34,    13,     5,     6,     7,
       8,    -1,    -1,    42,    -1,    13,    -1,     1,    34,    -1,
      -1,    -1,    -1,    -1,     8,     9,    42,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    34,    21,    22,    23,
      24,    25,    26,     1,    42,    -1,    -1,    31,    32,    33,
       8,     9,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    26,     1,
      -1,    -1,    -1,    31,    32,    33,     8,     9,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    26,     1,    -1,    -1,    -1,    31,
      32,    33,     8,     9,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,     1,    -1,    -1,    -1,    31,    32,    33,     8,     9,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,     1,    -1,    -1,
      -1,    31,    32,    33,     8,     9,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    26,     1,    -1,    -1,    -1,    31,    32,    33,
       8,     9,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    26,     1,
      -1,    -1,    -1,    31,    32,    33,     8,     9,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    26,     1,    -1,    -1,    -1,    31,
      32,    33,     8,     9,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,     1,    -1,    -1,    -1,    31,    32,    33,     8,     9,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,     1,    -1,    -1,
      -1,    31,    32,    33,     8,     9,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    26,     1,    -1,    -1,    -1,    31,    32,    33,
       8,     9,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    26,     1,
      -1,    -1,    -1,    31,    32,    33,     8,     9,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    26,     1,    -1,    -1,    -1,    31,
      32,    33,     8,     9,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,     1,    -1,    -1,    -1,    31,    32,    33,     8,     9,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,     1,    -1,    -1,
      -1,    31,    32,    33,     8,     9,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    26,     1,    -1,    -1,    -1,    31,    32,    33,
       8,     9,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    26,     1,
      -1,    -1,    -1,    31,    32,    33,     8,     9,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    26,     1,    -1,    -1,    -1,    31,
      32,    33,     8,     9,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,     1,    -1,    -1,    -1,    31,    32,    33,     8,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,     1,    -1,    -1,
      -1,    31,    32,    33,     8,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    26,    -1,     8,     9,    -1,    31,    32,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,
       8,     9,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    26,    -1,
      -1,    -1,    -1,    31,    32,    33,     8,     9,    -1,    -1,
      -1,    -1,    -1,    41,    42,    43,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,
      32,    33,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    -1,    31,    32,    33,     8,     9,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    43,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      -1,    31,    32,    33,     8,     9,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    43,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,
       8,     9,    -1,    -1,    -1,    -1,    -1,    41,    -1,    43,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    26,    -1,
      -1,    -1,    -1,    31,    32,    33,     8,     9,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    43,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,
      32,    33,     8,     9,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    43,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    -1,    31,    32,    33,     8,     9,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    43,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      -1,    31,    32,    33,     8,     9,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    43,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,
       8,     9,    -1,    -1,    -1,    -1,    -1,    41,    -1,    43,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    26,    -1,
      -1,    -1,    -1,    31,    32,    33,     8,     9,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    43,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,
      32,    33,     8,     9,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    43,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    -1,    31,    32,    33,     8,     9,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    43,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      -1,    31,    32,    33,     8,     9,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    43,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,
       8,     9,    -1,    -1,    -1,    -1,    -1,    41,    -1,    43,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    26,    -1,
      -1,    -1,    -1,    31,    32,    33,     8,     9,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    43,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,
      32,    33,     8,     9,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    43,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    -1,    31,    32,    33,     8,     9,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    43,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      -1,    31,    32,    33,     8,     9,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    43,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,
       8,     9,    -1,    -1,    -1,    -1,    -1,    41,    -1,    43,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    26,    -1,
      -1,    -1,    -1,    31,    32,    33,     8,     9,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    43,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,
      32,    33,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    -1,    31,    32,    33,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      -1,    31,    32,    33,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    26,    -1,
      -1,    -1,    -1,    31,    32,    33,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,
      32,    33,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    -1,    31,    32,    33,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      -1,    31,    32,    33,     8,     9,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    43,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    26,    -1,
      -1,    -1,    -1,    31,    32,    33,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,
      32,    33,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    -1,    31,    32,    33,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      -1,    31,    32,    33,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    26,    -1,
      -1,    -1,    -1,    31,    32,    33,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,
      32,    33,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    -1,    31,    32,    33,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      -1,    31,    32,    33,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,
       8,     9,    -1,    -1,    -1,    -1,    -1,    41,    -1,    43,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    26,    -1,
      -1,    -1,    -1,    31,    32,    33,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,
      32,    33,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    -1,    31,    32,    33,     8,     9,
      -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      -1,    31,    32,    33,     8,     9,    -1,    -1,    -1,    -1,
      40,    -1,    42,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    26,    -1,
      -1,    -1,    -1,    31,    32,    33,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    26,    -1,     8,     9,    -1,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    21,
      22,    23,    24,    25,    26,    -1,     8,     9,    -1,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    21,
      22,    23,    24,    25,    26,    -1,     8,     9,    -1,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    21,
      22,    23,    24,    25,    26,    -1,     8,     9,    -1,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    21,
      22,    23,    24,    25,    26,    -1,     8,     9,    -1,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    21,
      22,    23,    24,    25,    26,    -1,     8,     9,    -1,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    21,
      22,    23,    24,    25,    26,    -1,     8,     9,    -1,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    21,
      22,    23,    24,    25,    26,    -1,     8,     9,    -1,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    21,
      22,    23,    24,    25,    26,    -1,     8,     9,    -1,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    21,
      22,    23,    24,    25,    26,    -1,     8,     9,    -1,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    21,
      22,    23,    24,    25,    26,    -1,     8,     9,    -1,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    21,
      22,    23,    24,    25,    26,    -1,     8,     9,    -1,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    21,
      22,    23,    24,    25,    26,    -1,     8,     9,    -1,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    21,
      22,    23,    24,    25,    26,    -1,     8,     9,    -1,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    21,
      22,    23,    24,    25,    26,    -1,     8,     9,    -1,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    21,
      22,    23,    24,    25,    26,    -1,     8,     9,    -1,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    21,
      22,    23,    24,    25,    26,    -1,     8,     9,    -1,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    21,
      22,    23,    24,    25,    26,    -1,     8,     9,    -1,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    21,
      22,    23,    24,    25,    26,    -1,     8,    -1,    -1,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    21,
      22,    23,    24,    25,    26,    -1,     8,    -1,    -1,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    21,
      22,    23,    24,    25,    26,    -1,     8,     9,    -1,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    21,
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
      55,    98,    40,     0,     1,    49,     5,    12,    94,    42,
      41,    42,    51,     1,    58,    52,     1,    56,    40,    43,
      60,    98,    54,    94,    43,    60,    44,    61,    59,    94,
      53,    41,    61,    57,     1,     6,     7,     8,    13,    18,
      19,    20,    27,    28,    29,    30,    34,    36,    37,    38,
      39,    42,    45,    50,    62,    63,    64,    65,    66,    68,
      73,    74,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    94,    95,    97,    98,    43,
      41,    40,    54,    43,    42,    42,    42,    42,    42,    42,
      42,    42,    89,    94,    42,     1,    40,    78,    94,     1,
      78,    45,    62,    42,     1,    40,    40,    40,    31,    32,
      33,    21,    22,    23,    24,    25,    26,    90,    95,     9,
      96,    35,    42,    89,    94,    61,    60,    61,    43,     1,
      78,    67,     1,    94,     1,    82,    83,     1,    80,    94,
       1,    82,     1,    82,     1,    94,    40,     1,    40,    43,
      43,     1,    10,    11,    78,    91,    92,    80,    94,     1,
      84,    85,    86,    87,    88,    78,     1,    43,    78,    93,
      43,    43,    79,    94,    31,    31,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    41,    43,    41,    43,     1,    69,    40,     1,    80,
       1,    80,    94,    40,    40,    40,    40,    40,    40,     1,
       1,    93,    61,    63,    70,    72,    78,    43,    43,    43,
      43,    43,     4,    40,    72,     1,    72,    75,    76,    71,
      79,    72,    72,    72,    43,    72,    14,    15,    16,    17,
       5,     5,     5,    40,     5,     5,     5,     6,     7,    13,
      27,    29,    30,    34,    42,    80,    82,    83,    84,    85,
      86,    87,    88,    89,    94,    95,    97,     8,     5,     5,
       6,     7,    13,    34,    42,    84,    85,    86,    87,    88,
      89,    94,    95,    97,     5,    42,     5,    27,    29,    30,
       1,     5,     6,     7,    13,    27,    29,    30,    34,    42,
      80,    82,    83,    84,    85,    86,    87,    88,    89,    94,
      95,    97,     5,     6,     7,    13,    27,    29,    30,    34,
      42,    80,    82,    83,    84,    85,    86,    87,    88,    89,
      94,    95,    97,    41,    51,     5,    42,    31,    32,    42,
       1,    18,    19,    20,    38,    39,    44,    50,    64,    65,
      66,    68,    73,    74,    77,    78,    79,    81,    98,    44,
      61,    63,    94,    42,    42,    42,     5,    89,    94,     1,
      78,    32,    33,    90,    95,    96,    42,    89,     5,    89,
      94,     1,    78,    33,    90,    95,    96,    42,    89,    43,
      42,    42,    42,    42,    42,    42,    42,     5,    89,    94,
       1,    78,    31,    32,    33,    90,    95,    96,    42,    89,
      42,    42,    42,     5,    89,    94,     1,    78,    31,    32,
      33,    90,    95,    96,    42,    89,    52,    40,    43,     5,
      27,    29,    30,    80,    94,     1,    84,    43,    40,    42,
      42,    42,    42,     1,    40,    78,    45,    62,    42,     1,
      40,    40,    40,    94,    45,    62,    35,     1,    82,     1,
      82,     1,    82,    43,    43,     1,    84,    85,    86,    87,
      88,     1,    43,    93,    43,    43,    85,    86,    87,    88,
       1,    43,    93,     1,    82,     1,    82,     1,    82,    43,
       1,    82,     1,    82,     1,    82,    43,    43,     5,    27,
      29,    30,    80,    94,    84,    85,    86,    87,    88,     1,
      43,    93,     1,    82,     1,    82,     1,    82,    43,    43,
       5,    27,    29,    30,    80,    94,     1,    84,    85,    86,
      87,    88,     1,    43,    93,    54,    42,    42,    42,     1,
      78,    67,     1,    94,     1,    94,    40,     1,    40,    45,
       1,    78,    91,    92,    41,    51,    45,    78,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      42,    42,    42,    43,    43,    43,    43,    43,    43,    43,
      43,    42,    42,    42,    43,    43,    53,     1,    82,     1,
      82,     1,    82,    43,    43,    79,    31,    31,    43,    43,
      43,    43,    43,    43,    52,    40,     1,    82,     1,    82,
       1,    82,     1,    82,     1,    82,     1,    82,    40,    43,
      43,    43,    43,    43,    43,     1,    69,    40,     1,    80,
       1,    80,    94,    40,    40,    40,    40,    40,    40,    54,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    70,    72,    78,    43,    43,    43,    43,    43,
      53,     4,    40,    72,     1,    72,    75,    76,    40,    71,
      79,    72,    72,    72,    43,    72
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    48,    48,    48,    49,    49,    51,    50,
      52,    53,    50,    50,    54,    54,    56,    57,    55,    58,
      59,    55,    55,    55,    60,    60,    60,    61,    61,    62,
      62,    63,    63,    63,    63,    63,    63,    63,    63,    64,
      64,    64,    64,    64,    64,    65,    65,    67,    66,    69,
      68,    68,    70,    71,    70,    72,    72,    73,    73,    73,
      73,    75,    74,    76,    74,    74,    74,    74,    74,    77,
      77,    78,    78,    79,    80,    80,    80,    80,    80,    80,
      81,    81,    81,    82,    82,    83,    83,    83,    84,    84,
      85,    85,    86,    86,    87,    87,    88,    88,    88,    88,
      88,    88,    88,    89,    89,    89,    89,    89,    90,    90,
      90,    90,    90,    90,    91,    92,    93,    93,    93,    94,
      95,    96,    97,    97,    98,    98,    98,    98
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     0,     4,
       0,     0,     7,     2,     3,     1,     0,     0,     8,     0,
       0,     8,     6,     6,     4,     2,     0,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     5,
       5,     5,     5,     5,     5,     1,     1,     0,    10,     0,
       6,     5,     1,     0,     4,     1,     1,     2,     3,     3,
       3,     0,     8,     0,     8,     2,     7,     7,     7,     2,
       2,     1,     1,     3,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     3,     3,     3,     1,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     1,     2,     2,     4,
       3,     4,     3,     1,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     3,     1,
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
#line 103 "sintatic/sintatic.y"
                         {
            (yyval.typeNode) = buildNode("program", 99);
            (yyval.typeNode)->childNode = (yyvsp[0].typeNode);
            origin = (yyval.typeNode);
        }
#line 3502 "sintatic.tab.c"
    break;

  case 3: /* list_declaration: list_declaration main_declaration  */
#line 111 "sintatic/sintatic.y"
                                          {
            TreeNodes *aux = (yyvsp[-1].typeNode);
            while(aux->brotherNode != NULL) {
                aux = aux->brotherNode;
            }
            aux->brotherNode = (yyvsp[0].typeNode);
        }
#line 3514 "sintatic.tab.c"
    break;

  case 5: /* list_declaration: error  */
#line 119 "sintatic/sintatic.y"
                 { (yyval.typeNode) = buildNode("error program", 99); globalError= globalError+1; }
#line 3520 "sintatic.tab.c"
    break;

  case 8: /* $@1: %empty  */
#line 128 "sintatic/sintatic.y"
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
#line 3539 "sintatic.tab.c"
    break;

  case 9: /* var_declaration: tipos var $@1 SEMICOLON  */
#line 141 "sintatic/sintatic.y"
                    {
            (yyval.typeNode) = buildNode("var_declaration",99);
            (yyval.typeNode)->childNode = (yyvsp[-3].typeNode); 
            (yyvsp[-3].typeNode)->brotherNode = (yyvsp[-2].typeNode);  
        }
#line 3549 "sintatic.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 146 "sintatic/sintatic.y"
                          { typeManyDeclaration = (yyvsp[-2].typeNode)->value; }
#line 3555 "sintatic.tab.c"
    break;

  case 11: /* $@3: %empty  */
#line 146 "sintatic/sintatic.y"
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
#line 3574 "sintatic.tab.c"
    break;

  case 12: /* var_declaration: tipos var COMMA $@2 many_declaration $@3 SEMICOLON  */
#line 159 "sintatic/sintatic.y"
                    {
            (yyval.typeNode) = buildNode("var_declaration",99);
            (yyval.typeNode)->childNode = (yyvsp[-6].typeNode); 
            (yyvsp[-6].typeNode)->brotherNode = (yyvsp[-5].typeNode);  
            (yyvsp[-5].typeNode)->brotherNode = (yyvsp[-2].typeNode); 
        }
#line 3585 "sintatic.tab.c"
    break;

  case 13: /* var_declaration: error SEMICOLON  */
#line 165 "sintatic/sintatic.y"
                          { (yyval.typeNode) = buildNode("SINTATIC ERR",10); globalError= globalError+1;}
#line 3591 "sintatic.tab.c"
    break;

  case 14: /* many_declaration: var COMMA many_declaration  */
#line 169 "sintatic/sintatic.y"
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
#line 3611 "sintatic.tab.c"
    break;

  case 15: /* many_declaration: var  */
#line 184 "sintatic/sintatic.y"
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
#line 3629 "sintatic.tab.c"
    break;

  case 16: /* $@4: %empty  */
#line 200 "sintatic/sintatic.y"
                             {
            // novo Scopo
            Scope *newScope = buildScope((yyvsp[-1].typeNode)->value);
            newScope->parentScope = activeScope; 
            activeScope = newScope;

            threeAddress = alocar_memoria(threeAddress);
            sprintf(threeAddress + strlen(threeAddress), "%s:\n", (yyvsp[-1].typeNode)->value);
        
        }
#line 3644 "sintatic.tab.c"
    break;

  case 17: /* $@5: %empty  */
#line 209 "sintatic/sintatic.y"
                    {
            // criar o simbolos no escopo atual
            Symbol *aux  = createItem((yyvsp[-4].typeNode)->value, (yyvsp[-3].typeNode)->value, line, 1);
            aux->numArgs = numFuncArgs;
            insertItem(activeScope->parentScope, aux); 
            numFuncArgs = 0;
            
        }
#line 3657 "sintatic.tab.c"
    break;

  case 18: /* func_declaration: tipos var OPEN_PAREN $@4 list_args $@5 CLS_PAREN blockStmt  */
#line 216 "sintatic/sintatic.y"
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
#line 3675 "sintatic.tab.c"
    break;

  case 19: /* $@6: %empty  */
#line 229 "sintatic/sintatic.y"
                                {
            // novo Scopo
            Scope *newScope = buildScope("main"); 
            newScope->parentScope = activeScope; 
            activeScope = newScope;

            threeAddress = alocar_memoria(threeAddress);
            sprintf(threeAddress + strlen(threeAddress), "%s:\n", "main");
        }
#line 3689 "sintatic.tab.c"
    break;

  case 20: /* $@7: %empty  */
#line 237 "sintatic/sintatic.y"
                          {
            // insere simbolos no escopo atual
            Symbol *aux = createItem((yyvsp[-4].typeNode)->value, "main", line, 1);
            aux->numArgs = numFuncArgs;
            insertItem(activeScope->parentScope, aux); 
            numFuncArgs = 0;  

            // main 
            isMain = isMain + 1;

        }
#line 3705 "sintatic.tab.c"
    break;

  case 21: /* func_declaration: tipos MAIN OPEN_PAREN $@6 list_args $@7 CLS_PAREN blockStmt  */
#line 247 "sintatic/sintatic.y"
                                     {            
            (yyval.typeNode) = buildNode("func_declaration_main", 99);   
            (yyval.typeNode)->childNode = (yyvsp[-7].typeNode);
            (yyvsp[-7].typeNode)->brotherNode = (yyvsp[-3].typeNode);
            (yyvsp[-3].typeNode)->brotherNode = (yyvsp[0].typeNode);

            showScope(activeScope);
            Scope *auxScope = activeScope->parentScope;
            freeScope(activeScope);
            activeScope = auxScope;
            
        }
#line 3722 "sintatic.tab.c"
    break;

  case 22: /* func_declaration: tipos var OPEN_PAREN error CLS_PAREN blockStmt  */
#line 259 "sintatic/sintatic.y"
                                                         {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
#line 3731 "sintatic.tab.c"
    break;

  case 23: /* func_declaration: tipos MAIN OPEN_PAREN error CLS_PAREN blockStmt  */
#line 263 "sintatic/sintatic.y"
                                                                 {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
#line 3740 "sintatic.tab.c"
    break;

  case 24: /* list_args: tipos var COMMA list_args  */
#line 271 "sintatic/sintatic.y"
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
#line 3765 "sintatic.tab.c"
    break;

  case 25: /* list_args: tipos var  */
#line 291 "sintatic/sintatic.y"
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
#line 3788 "sintatic.tab.c"
    break;

  case 26: /* list_args: %empty  */
#line 309 "sintatic/sintatic.y"
                 {
                (yyval.typeNode) = buildNode("no_args", 99); 
        }
#line 3796 "sintatic.tab.c"
    break;

  case 27: /* blockStmt: OP_CUR_BRACKET CLS_CUR_BRACKET  */
#line 315 "sintatic/sintatic.y"
                                        {
                (yyval.typeNode) = buildNode("empty block", 99); 
        }
#line 3804 "sintatic.tab.c"
    break;

  case 28: /* blockStmt: OP_CUR_BRACKET list_statements CLS_CUR_BRACKET  */
#line 318 "sintatic/sintatic.y"
                                                         {
                (yyval.typeNode) = (yyvsp[-1].typeNode);
        }
#line 3812 "sintatic.tab.c"
    break;

  case 29: /* list_statements: stmt list_statements  */
#line 324 "sintatic/sintatic.y"
                             {
               (yyval.typeNode) = (yyvsp[-1].typeNode);
               (yyvsp[-1].typeNode)->brotherNode = (yyvsp[0].typeNode); 
        }
#line 3821 "sintatic.tab.c"
    break;

  case 39: /* input_output_expr: write_commands OPEN_PAREN str_expr CLS_PAREN SEMICOLON  */
#line 343 "sintatic/sintatic.y"
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
#line 3845 "sintatic.tab.c"
    break;

  case 40: /* input_output_expr: write_commands OPEN_PAREN expr CLS_PAREN SEMICOLON  */
#line 362 "sintatic/sintatic.y"
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
#line 3871 "sintatic.tab.c"
    break;

  case 41: /* input_output_expr: write_commands OPEN_PAREN char_expr CLS_PAREN SEMICOLON  */
#line 383 "sintatic/sintatic.y"
                                                                  {
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
        }
#line 3879 "sintatic.tab.c"
    break;

  case 42: /* input_output_expr: CMD_READ OPEN_PAREN var CLS_PAREN SEMICOLON  */
#line 386 "sintatic/sintatic.y"
                                                      {
                int undeclr;
                undeclr = verifyUnDeclaration(activeScope, (yyvsp[-2].typeNode)->value, line, column);
                if(undeclr == 0){
                    globalError = globalError + 1; 
                }
                (yyval.typeNode) = buildNode("CMD_READ_VAR", 99);
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
        }
#line 3893 "sintatic.tab.c"
    break;

  case 43: /* input_output_expr: write_commands OPEN_PAREN error CLS_PAREN SEMICOLON  */
#line 395 "sintatic/sintatic.y"
                                                              {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
#line 3902 "sintatic.tab.c"
    break;

  case 44: /* input_output_expr: CMD_READ OPEN_PAREN error CLS_PAREN SEMICOLON  */
#line 399 "sintatic/sintatic.y"
                                                        {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
#line 3911 "sintatic.tab.c"
    break;

  case 45: /* write_commands: CMD_WRITE  */
#line 406 "sintatic/sintatic.y"
                 {
              (yyval.typeNode) = buildNode("CMD_WRITE_STR", 99);
      }
#line 3919 "sintatic.tab.c"
    break;

  case 46: /* write_commands: CMD_WRITELN  */
#line 409 "sintatic/sintatic.y"
                    {
              (yyval.typeNode) = buildNode("CMD_WRITELN_STR", 99);
      }
#line 3927 "sintatic.tab.c"
    break;

  case 47: /* $@8: %empty  */
#line 415 "sintatic/sintatic.y"
                           {
            // novo Scopo    
            Scope *newScope = buildScope("Block FOR");
            newScope->parentScope = activeScope; 
            activeScope = newScope;
            
        }
#line 3939 "sintatic.tab.c"
    break;

  case 48: /* iteration_expr: CMD_FOR OPEN_PAREN $@8 assign SEMICOLON expr SEMICOLON assign CLS_PAREN simple_complex_block_stmt  */
#line 421 "sintatic/sintatic.y"
                                                                                     {     
             (yyval.typeNode) = buildNode("for", 99);
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
#line 3957 "sintatic.tab.c"
    break;

  case 49: /* $@9: %empty  */
#line 437 "sintatic/sintatic.y"
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
#line 3973 "sintatic.tab.c"
    break;

  case 50: /* condition_expr: CMD_IF OPEN_PAREN expr CLS_PAREN $@9 block_cond  */
#line 447 "sintatic/sintatic.y"
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
#line 3989 "sintatic.tab.c"
    break;

  case 51: /* condition_expr: CMD_IF OPEN_PAREN error CLS_PAREN error  */
#line 458 "sintatic/sintatic.y"
                                                  {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
#line 3998 "sintatic.tab.c"
    break;

  case 53: /* $@10: %empty  */
#line 466 "sintatic/sintatic.y"
                                             {
            // novo Scopo    
            Scope *newScope = buildScope("Block ELSE");
            newScope->parentScope = activeScope; 
            activeScope = newScope;

        }
#line 4010 "sintatic.tab.c"
    break;

  case 54: /* block_cond: simple_complex_block_stmt CMD_ELSE $@10 simple_complex_block_stmt  */
#line 472 "sintatic/sintatic.y"
                                    {
                (yyval.typeNode) = buildNode("if_stmt", 99);
                (yyval.typeNode)->childNode = (yyvsp[-3].typeNode);

                (yyval.typeNode)->brotherNode = buildNode("else", 99);
                (yyval.typeNode)->brotherNode->childNode = (yyvsp[0].typeNode);

                // fecha o Scopo
                showScope(activeScope);
                Scope *auxScope = activeScope->parentScope;
                freeScope(activeScope);
                activeScope = auxScope;
        }
#line 4028 "sintatic.tab.c"
    break;

  case 57: /* return_stmt: CMD_RETURN SEMICOLON  */
#line 493 "sintatic/sintatic.y"
                             {
              (yyval.typeNode) = buildNode("return", 99);  
        }
#line 4036 "sintatic.tab.c"
    break;

  case 58: /* return_stmt: CMD_RETURN expr SEMICOLON  */
#line 496 "sintatic/sintatic.y"
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
#line 4072 "sintatic.tab.c"
    break;

  case 59: /* return_stmt: CMD_RETURN error SEMICOLON  */
#line 527 "sintatic/sintatic.y"
                                     {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
#line 4081 "sintatic.tab.c"
    break;

  case 60: /* return_stmt: CMD_RETURN expr error  */
#line 531 "sintatic/sintatic.y"
                                {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
#line 4090 "sintatic.tab.c"
    break;

  case 61: /* $@11: %empty  */
#line 538 "sintatic/sintatic.y"
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
#line 4106 "sintatic.tab.c"
    break;

  case 62: /* set_stmt: CMD_FORALL OPEN_PAREN var IN_OP func_expr CLS_PAREN $@11 simple_complex_block_stmt  */
#line 548 "sintatic/sintatic.y"
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
#line 4123 "sintatic.tab.c"
    break;

  case 63: /* $@12: %empty  */
#line 560 "sintatic/sintatic.y"
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
#line 4143 "sintatic.tab.c"
    break;

  case 64: /* set_stmt: CMD_FORALL OPEN_PAREN var IN_OP var CLS_PAREN $@12 simple_complex_block_stmt  */
#line 574 "sintatic/sintatic.y"
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
#line 4160 "sintatic.tab.c"
    break;

  case 66: /* set_stmt: CMD_FORALL OPEN_PAREN error IN_OP error CLS_PAREN simple_complex_block_stmt  */
#line 587 "sintatic/sintatic.y"
                                                                                      {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
#line 4169 "sintatic.tab.c"
    break;

  case 67: /* set_stmt: CMD_FORALL OPEN_PAREN error IN_OP func_expr CLS_PAREN error  */
#line 591 "sintatic/sintatic.y"
                                                                      {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
#line 4178 "sintatic.tab.c"
    break;

  case 68: /* set_stmt: CMD_FORALL OPEN_PAREN var IN_OP error CLS_PAREN simple_complex_block_stmt  */
#line 595 "sintatic/sintatic.y"
                                                                                    {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
#line 4187 "sintatic.tab.c"
    break;

  case 70: /* expr_stmt: expr error  */
#line 602 "sintatic/sintatic.y"
                     {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
                globalError= globalError+1;
        }
#line 4196 "sintatic.tab.c"
    break;

  case 73: /* assign: var ATRIBUTION expr  */
#line 614 "sintatic/sintatic.y"
                            {

              if(strcmp((yyvsp[0].typeNode)->value,"EMPTY") == 0){
                printf("EMPTYYYYY %d %d \n",(yyvsp[-2].typeNode)->type, (yyvsp[0].typeNode)->type);
              }  
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
                     printf(" 2 ERRRRROOOOOOOOOO NO castToSpecificType! \n");   
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
	        sprintf(threeAddress + strlen(threeAddress), "mov $%d, $%d // var %s = %s \n", auxVar->registrador, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                (yyvsp[-2].typeNode)->registrador = auxVar->registrador;
                (yyvsp[-2].typeNode)->regis_tipo = "$";
              }
        }
#line 4235 "sintatic.tab.c"
    break;

  case 74: /* func_expr: ADD_FUNC OPEN_PAREN func_in_expr CLS_PAREN  */
#line 651 "sintatic/sintatic.y"
                                                   {
                (yyval.typeNode) = buildNode(" add ", 99);
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 4244 "sintatic.tab.c"
    break;

  case 75: /* func_expr: REMOVE_FUNC OPEN_PAREN func_in_expr CLS_PAREN  */
#line 655 "sintatic/sintatic.y"
                                                        {
                (yyval.typeNode) = buildNode(" remove ", 99);
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 4253 "sintatic.tab.c"
    break;

  case 76: /* func_expr: EXIST_FUNC OPEN_PAREN func_in_expr CLS_PAREN  */
#line 659 "sintatic/sintatic.y"
                                                       {
                (yyval.typeNode) = buildNode(" exist ", 99);
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 4262 "sintatic.tab.c"
    break;

  case 77: /* func_expr: ADD_FUNC OPEN_PAREN error CLS_PAREN  */
#line 663 "sintatic/sintatic.y"
                                              {
             (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);   
        }
#line 4270 "sintatic.tab.c"
    break;

  case 78: /* func_expr: REMOVE_FUNC OPEN_PAREN error CLS_PAREN  */
#line 666 "sintatic/sintatic.y"
                                                 {
             (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);   
        }
#line 4278 "sintatic.tab.c"
    break;

  case 79: /* func_expr: EXIST_FUNC OPEN_PAREN error CLS_PAREN  */
#line 669 "sintatic/sintatic.y"
                                                {
             (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);    
        }
#line 4286 "sintatic.tab.c"
    break;

  case 80: /* is_set_expr: IS_SET_FUNC OPEN_PAREN var CLS_PAREN  */
#line 675 "sintatic/sintatic.y"
                                             {
              int undeclr;
              undeclr = verifyUnDeclaration(activeScope, (yyvsp[-1].typeNode)->value, line, column);
              if(undeclr == 0){
                globalError = globalError + 1; 
              }
              (yyval.typeNode) = buildNode(" is_set ", 99);
              (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 4300 "sintatic.tab.c"
    break;

  case 81: /* is_set_expr: IS_SET_FUNC OPEN_PAREN func_expr CLS_PAREN  */
#line 684 "sintatic/sintatic.y"
                                                     {
                (yyval.typeNode) = buildNode(" is_set ", 99);
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 4309 "sintatic.tab.c"
    break;

  case 82: /* is_set_expr: IS_SET_FUNC OPEN_PAREN error CLS_PAREN  */
#line 688 "sintatic/sintatic.y"
                                                 {
             (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);   
             globalError= globalError+1; 
        }
#line 4318 "sintatic.tab.c"
    break;

  case 83: /* func_in_expr: op_or_expr IN_OP var  */
#line 694 "sintatic/sintatic.y"
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
#line 4334 "sintatic.tab.c"
    break;

  case 84: /* func_in_expr: op_or_expr IN_OP func_expr  */
#line 705 "sintatic/sintatic.y"
                                     {
                (yyval.typeNode) = buildNode(" IN ", 99);
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 4344 "sintatic.tab.c"
    break;

  case 85: /* op_or_expr: op_or_expr OP_OR op_and_expr  */
#line 718 "sintatic/sintatic.y"
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


        }
#line 4400 "sintatic.tab.c"
    break;

  case 88: /* op_and_expr: op_and_expr OP_AND logical_expr  */
#line 774 "sintatic/sintatic.y"
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
#line 4458 "sintatic.tab.c"
    break;

  case 90: /* logical_expr: logical_expr logical_ops arithmetic_expr  */
#line 831 "sintatic/sintatic.y"
                                                {
              (yyval.typeNode) = (yyvsp[-1].typeNode);
              //      $2->childNode = $1; 
              //      $1->brotherNode = $3;

              if((yyvsp[-2].typeNode)->registrador == -1 && (yyvsp[0].typeNode)->registrador == -1){
                Symbol *aux1 = findItem(activeScope, (yyvsp[-2].typeNode)->value);
                Symbol *aux3 = findItem(activeScope, (yyvsp[0].typeNode)->value);
                        
                threeAddress = alocar_memoria(threeAddress);
                if(aux1 != NULL && aux3 != NULL){
                        sprintf(threeAddress + strlen(threeAddress), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, aux1->registrador, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                } 

              }else if((yyvsp[-2].typeNode)->registrador == -1 && (yyvsp[0].typeNode)->registrador != -1){  
                Symbol *aux1 = findItem(activeScope, (yyvsp[-2].typeNode)->value); 
                threeAddress = alocar_memoria(threeAddress);  
                if(aux1 != NULL){
                        sprintf(threeAddress + strlen(threeAddress), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, aux1->registrador, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                }

              }else if((yyvsp[-2].typeNode)->registrador != -1 && (yyvsp[0].typeNode)->registrador == -1){
                Symbol *aux3 = findItem(activeScope, (yyvsp[-2].typeNode)->value); 
                threeAddress = alocar_memoria(threeAddress);  
                if(aux3 != NULL){
                        sprintf(threeAddress + strlen(threeAddress), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, (yyvsp[-2].typeNode)->registrador, aux3->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
                }     
              }else {
                threeAddress = alocar_memoria(threeAddress);      
                sprintf(threeAddress + strlen(threeAddress), logical_ops_tac((yyvsp[-1].typeNode)->value), registrador, (yyvsp[-2].typeNode)->registrador, (yyvsp[0].typeNode)->registrador, (yyvsp[-2].typeNode)->value, (yyvsp[0].typeNode)->value);
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
#line 4520 "sintatic.tab.c"
    break;

  case 92: /* arithmetic_expr: arithmetic_expr adds_op mult_expr  */
#line 892 "sintatic/sintatic.y"
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
#line 4608 "sintatic.tab.c"
    break;

  case 94: /* mult_expr: mult_expr mult_ops first_term  */
#line 979 "sintatic/sintatic.y"
                                      {

              if((yyvsp[-2].typeNode)->registrador == -1 && (yyvsp[0].typeNode)->registrador == -1){
                Symbol *aux1 = findItem(activeScope, (yyvsp[-2].typeNode)->value);
                Symbol *aux3 = findItem(activeScope, (yyvsp[0].typeNode)->value);
                printf(" %s mul \n",(yyvsp[-1].typeNode)->value);
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
                        printf("5 ERRRRROOOOOOOOOO NO castType");   
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
                        printf("6 ERRRRROOOOOOOOOO NO castType");   
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
#line 4694 "sintatic.tab.c"
    break;

  case 97: /* first_term: OP_NEG term  */
#line 1065 "sintatic/sintatic.y"
                      {
              (yyval.typeNode) = buildNode(" ! ", (yyvsp[0].typeNode)->type);
              (yyval.typeNode)->childNode = (yyvsp[0].typeNode);
        }
#line 4703 "sintatic.tab.c"
    break;

  case 98: /* first_term: adds_op term  */
#line 1069 "sintatic/sintatic.y"
                       {
              (yyval.typeNode) = (yyvsp[-1].typeNode);
              (yyvsp[-1].typeNode)->type = (yyvsp[0].typeNode)->type;
              (yyvsp[-1].typeNode)->childNode = (yyvsp[0].typeNode);
        }
#line 4713 "sintatic.tab.c"
    break;

  case 99: /* first_term: var OPEN_PAREN list_expr CLS_PAREN  */
#line 1074 "sintatic/sintatic.y"
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

                registrador = registrador + 1;
                numListArgs = 0;
                (yyval.typeNode) = (yyvsp[-3].typeNode);
                (yyvsp[-3].typeNode)->type = (yyvsp[-1].typeNode)->type;
                (yyvsp[-3].typeNode)->brotherNode = (yyvsp[-1].typeNode);
        }
#line 4737 "sintatic.tab.c"
    break;

  case 100: /* first_term: var OPEN_PAREN CLS_PAREN  */
#line 1093 "sintatic/sintatic.y"
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
#line 4757 "sintatic.tab.c"
    break;

  case 101: /* first_term: var OPEN_PAREN error CLS_PAREN  */
#line 1108 "sintatic/sintatic.y"
                                         {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
        }
#line 4765 "sintatic.tab.c"
    break;

  case 102: /* first_term: error OPEN_PAREN CLS_PAREN  */
#line 1111 "sintatic/sintatic.y"
                                      {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
        }
#line 4773 "sintatic.tab.c"
    break;

  case 103: /* term: var  */
#line 1117 "sintatic/sintatic.y"
            {
                int undeclr;
                undeclr = verifyUnDeclaration(activeScope, (yyvsp[0].typeNode)->value, line, column);
                if(undeclr == 0){
                   globalError = globalError + 1; 
                }
        }
#line 4785 "sintatic.tab.c"
    break;

  case 105: /* term: OPEN_PAREN expr CLS_PAREN  */
#line 1125 "sintatic/sintatic.y"
                                    {
                (yyval.typeNode) = (yyvsp[-1].typeNode);
        }
#line 4793 "sintatic.tab.c"
    break;

  case 106: /* term: EMPTY  */
#line 1128 "sintatic/sintatic.y"
                {
              (yyval.typeNode) = buildNode("EMPTY 2", 2);
        }
#line 4801 "sintatic.tab.c"
    break;

  case 107: /* term: OPEN_PAREN error CLS_PAREN  */
#line 1131 "sintatic/sintatic.y"
                                      {
                (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);
        }
#line 4809 "sintatic.tab.c"
    break;

  case 108: /* logical_ops: LT_OP  */
#line 1137 "sintatic/sintatic.y"
              {
                (yyval.typeNode) = buildNode("LT_OP", 0);
        }
#line 4817 "sintatic.tab.c"
    break;

  case 109: /* logical_ops: LTE_OP  */
#line 1140 "sintatic/sintatic.y"
                  {
                (yyval.typeNode) = buildNode("LTE_OP", 0);
        }
#line 4825 "sintatic.tab.c"
    break;

  case 110: /* logical_ops: GT_OP  */
#line 1143 "sintatic/sintatic.y"
                 {
                (yyval.typeNode) = buildNode("GT_OP", 0);
        }
#line 4833 "sintatic.tab.c"
    break;

  case 111: /* logical_ops: GTE_OP  */
#line 1146 "sintatic/sintatic.y"
                  {
                (yyval.typeNode) = buildNode("GTE_OP", 0);
        }
#line 4841 "sintatic.tab.c"
    break;

  case 112: /* logical_ops: NEQ_OP  */
#line 1149 "sintatic/sintatic.y"
                  {
                (yyval.typeNode) = buildNode("NEQ_OP", 0);
        }
#line 4849 "sintatic.tab.c"
    break;

  case 113: /* logical_ops: EQUAL_OP  */
#line 1152 "sintatic/sintatic.y"
                    {
                (yyval.typeNode) = buildNode("EQUAL_OP", 0);
        }
#line 4857 "sintatic.tab.c"
    break;

  case 114: /* str_expr: STRING  */
#line 1158 "sintatic/sintatic.y"
               {
            (yyval.typeNode) = buildNode((yyvsp[0].sval), 99);
            table = alocar_memoria(table);
            sprintf(table + strlen(table), " char str_char%d[]=%s \n", registrador, (yyvsp[0].sval));
            (yyval.typeNode)->registrador = registrador;
            free((yyvsp[0].sval));
        }
#line 4869 "sintatic.tab.c"
    break;

  case 115: /* char_expr: CHARACTER  */
#line 1168 "sintatic/sintatic.y"
                  {
            (yyval.typeNode) = buildNode((yyvsp[0].sval), 99);
            free((yyvsp[0].sval));
        }
#line 4878 "sintatic.tab.c"
    break;

  case 116: /* list_expr: expr COMMA list_expr  */
#line 1175 "sintatic/sintatic.y"
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
#line 4895 "sintatic.tab.c"
    break;

  case 117: /* list_expr: expr  */
#line 1187 "sintatic/sintatic.y"
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
#line 4912 "sintatic.tab.c"
    break;

  case 118: /* list_expr: error COMMA error  */
#line 1199 "sintatic/sintatic.y"
                            {
             (yyval.typeNode) = buildNode("SINTATIC ERR!", 10);   
        }
#line 4920 "sintatic.tab.c"
    break;

  case 119: /* var: ID  */
#line 1205 "sintatic/sintatic.y"
         {
            (yyval.typeNode) = buildNode((yyvsp[0].sval), findTypeItem(activeScope,(yyvsp[0].sval)));
            free((yyvsp[0].sval));
       }
#line 4929 "sintatic.tab.c"
    break;

  case 120: /* adds_op: ADD_OP  */
#line 1212 "sintatic/sintatic.y"
             {
            (yyval.typeNode) = buildNode((yyvsp[0].sval), 99); 
            free((yyvsp[0].sval)); 
      }
#line 4938 "sintatic.tab.c"
    break;

  case 121: /* mult_ops: MULT_OP  */
#line 1219 "sintatic/sintatic.y"
              {
              (yyval.typeNode) = buildNode((yyvsp[0].sval), 99); 
              free((yyvsp[0].sval));
      }
#line 4947 "sintatic.tab.c"
    break;

  case 122: /* num_tipos: FLOAT  */
#line 1226 "sintatic/sintatic.y"
              {
              (yyval.typeNode) = buildNode((yyvsp[0].sval), 1);
              (yyval.typeNode)->registrador = registrador;
              (yyval.typeNode)->regis_tipo = "$";
              threeAddress = alocar_memoria(threeAddress);
	      sprintf(threeAddress + strlen(threeAddress), "mov $%d, %s  // num %s\n", registrador, (yyval.typeNode)->value, (yyval.typeNode)->value);
              registrador = registrador + 1;
              free((yyvsp[0].sval));
        
        }
#line 4962 "sintatic.tab.c"
    break;

  case 123: /* num_tipos: INT  */
#line 1236 "sintatic/sintatic.y"
              {
              (yyval.typeNode) = buildNode((yyvsp[0].sval), 0);
              (yyval.typeNode)->registrador = registrador;
              (yyval.typeNode)->regis_tipo = "$";
              threeAddress = alocar_memoria(threeAddress);
	      sprintf(threeAddress + strlen(threeAddress), "mov $%d, %s  // num %s\n", registrador, (yyval.typeNode)->value, (yyval.typeNode)->value);
              registrador = registrador + 1;
              free((yyvsp[0].sval));
        }
#line 4976 "sintatic.tab.c"
    break;

  case 124: /* tipos: TYPE_INT  */
#line 1248 "sintatic/sintatic.y"
                 {
             (yyval.typeNode) = buildNode("TYPE_INT", 0);
        }
#line 4984 "sintatic.tab.c"
    break;

  case 125: /* tipos: TYPE_FLOAT  */
#line 1251 "sintatic/sintatic.y"
                     {
              (yyval.typeNode) = buildNode("TYPE_FLOAT", 1);
        }
#line 4992 "sintatic.tab.c"
    break;

  case 126: /* tipos: TYPE_SET  */
#line 1254 "sintatic/sintatic.y"
                    {
              (yyval.typeNode) = buildNode("TYPE_SET", 2);
        }
#line 5000 "sintatic.tab.c"
    break;

  case 127: /* tipos: TYPE_ELEM  */
#line 1257 "sintatic/sintatic.y"
                    {
             (yyval.typeNode) = buildNode("TYPE_ELEM", 3);
        }
#line 5008 "sintatic.tab.c"
    break;


#line 5012 "sintatic.tab.c"

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

#line 1261 "sintatic/sintatic.y"



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
