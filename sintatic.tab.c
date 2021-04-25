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
  int column = 1;
  int isMain = 0;
  int numFuncArgs = 0;
  int numListArgs = 0;      
  char* typeManyDeclaration;
  
  TreeNodes* origin;
  Scope* activeScope;
  Symbol* funcAux;

#line 96 "sintatic.tab.c"

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
  YYSYMBOL_list_args = 58,                 /* list_args  */
  YYSYMBOL_blockStmt = 59,                 /* blockStmt  */
  YYSYMBOL_list_statements = 60,           /* list_statements  */
  YYSYMBOL_stmt = 61,                      /* stmt  */
  YYSYMBOL_input_output_expr = 62,         /* input_output_expr  */
  YYSYMBOL_write_commands = 63,            /* write_commands  */
  YYSYMBOL_iteration_expr = 64,            /* iteration_expr  */
  YYSYMBOL_65_6 = 65,                      /* $@6  */
  YYSYMBOL_condition_expr = 66,            /* condition_expr  */
  YYSYMBOL_67_7 = 67,                      /* $@7  */
  YYSYMBOL_block_cond = 68,                /* block_cond  */
  YYSYMBOL_69_8 = 69,                      /* $@8  */
  YYSYMBOL_simple_complex_block_stmt = 70, /* simple_complex_block_stmt  */
  YYSYMBOL_return_stmt = 71,               /* return_stmt  */
  YYSYMBOL_set_stmt = 72,                  /* set_stmt  */
  YYSYMBOL_73_9 = 73,                      /* $@9  */
  YYSYMBOL_74_10 = 74,                     /* $@10  */
  YYSYMBOL_expr_stmt = 75,                 /* expr_stmt  */
  YYSYMBOL_expr = 76,                      /* expr  */
  YYSYMBOL_assign = 77,                    /* assign  */
  YYSYMBOL_func_expr = 78,                 /* func_expr  */
  YYSYMBOL_is_set_expr = 79,               /* is_set_expr  */
  YYSYMBOL_func_in_expr = 80,              /* func_in_expr  */
  YYSYMBOL_op_or_expr = 81,                /* op_or_expr  */
  YYSYMBOL_op_and_expr = 82,               /* op_and_expr  */
  YYSYMBOL_logical_expr = 83,              /* logical_expr  */
  YYSYMBOL_arithmetic_expr = 84,           /* arithmetic_expr  */
  YYSYMBOL_mult_expr = 85,                 /* mult_expr  */
  YYSYMBOL_first_term = 86,                /* first_term  */
  YYSYMBOL_term = 87,                      /* term  */
  YYSYMBOL_logical_ops = 88,               /* logical_ops  */
  YYSYMBOL_str_expr = 89,                  /* str_expr  */
  YYSYMBOL_char_expr = 90,                 /* char_expr  */
  YYSYMBOL_list_expr = 91,                 /* list_expr  */
  YYSYMBOL_var = 92,                       /* var  */
  YYSYMBOL_adds_op = 93,                   /* adds_op  */
  YYSYMBOL_mult_ops = 94,                  /* mult_ops  */
  YYSYMBOL_num_tipos = 95,                 /* num_tipos  */
  YYSYMBOL_tipos = 96                      /* tipos  */
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
#define YYLAST   9064

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  694

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
       0,    98,    98,   106,   113,   114,   118,   119,   123,   123,
     132,   132,   132,   143,   147,   153,   161,   161,   200,   200,
     236,   239,   246,   259,   270,   276,   279,   285,   289,   293,
     294,   295,   296,   297,   298,   299,   300,   304,   307,   310,
     313,   318,   321,   327,   330,   336,   336,   358,   358,   379,
     385,   386,   386,   408,   409,   413,   416,   420,   423,   429,
     429,   446,   446,   464,   465,   468,   471,   476,   477,   484,
     485,   489,   500,   504,   508,   512,   515,   518,   524,   529,
     533,   538,   544,   557,   562,   563,   567,   572,   576,   581,
     585,   590,   594,   599,   603,   604,   608,   612,   617,   620,
     623,   629,   632,   633,   636,   642,   645,   648,   651,   654,
     657,   663,   670,   677,   680,   683,   689,   696,   703,   710,
     714,   718,   724,   727,   730,   733
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
  "func_declaration", "$@4", "$@5", "list_args", "blockStmt",
  "list_statements", "stmt", "input_output_expr", "write_commands",
  "iteration_expr", "$@6", "condition_expr", "$@7", "block_cond", "$@8",
  "simple_complex_block_stmt", "return_stmt", "set_stmt", "$@9", "$@10",
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

#define YYPACT_NINF (-532)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-126)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     781,    95,   108,   177,   241,   268,    36,   511,   822,   896,
     901,   294,   954,  -532,    59,   976,   902,    -1,   938,    43,
     100,    86,    85,    88,   637,   131,    98,   637,  1032,   121,
     125,   172,   147,   173,   121,   167,  3061,  1077,   121,   235,
     159,   131,  1096,   121,    13,  2308,  6385,   351,  6411,   216,
     219,   230,   233,   249,   275,   278,   403,   312,   318,   328,
    1508,  1564,  1240,  4349,   184,  4391,  4433,   343,  4475,  4517,
    4559,  4601,  4643,    34,   256,    37,   348,   113,   148,    32,
    1591,  1250,  6437,  6463,  6489,  1359,   403,  6515,   131,  1529,
     637,  1566,   352,  1654,   386,  1820,   420,    12,   258,   390,
     338,   467,  6541,  6567,    14,   381,  4685,    38,  1720,   293,
     395,  1691,   396,  1075,  4727,  4769,  4811,  4853,   530,   736,
     736,   848,   925,  1066,  1157,  1188,  1688,   736,   736,  2039,
     736,  1946,    41,  6593,   309,   401,  6619,   333,   416,   532,
     440,   546,   339,   -11,   375,   497,   538,   559,   476,   187,
     502,   254,   564,   576,  4895,  4937,  4979,  6645,  6671,   522,
     594,   600,   607,   617,   625,   180,   273,   589,    90,  6853,
    1331,  6697,  6723,   646,   964,  6749,   385,   647,   698,  6029,
     682,   697,   410,   512,    42,    49,   700,   716,   719,    87,
      92,    97,   103,   723,   733,   737,   744,   752,   754,   786,
    6775,  2030,  6801,  5021,  6069,  1946,   758,   760,   767,   799,
     802,  5063,  5105,  5147,  5189,  5231,  5273,   805,   529,   808,
     156,   981,  5315,  1115,   817,  6109,   858,  6109,  6149,  6189,
    6229,   532,  5357,  5399,  5441,  6109,  6109,  6109,   825,  5483,
    5525,  5567,  6109,  5609,   866,   874,   878,   880,   549,   412,
    1462,  5651,  6827,  1757,  6925,  7471,  7497,  7523,   847,   853,
     861,   509,  2142,   876,   297,   624,    -3,  6840,  8017,  7549,
    7575,  7601,  6951,   509,  7627,  2110,   898,  8121,  8573,  8592,
    8611,   588,  2174,  1010,  9018,  8934,  8630,  8649,  8668,  8147,
     588,  8687,   884,   891,   283,   895,   897,   899,   906,  8069,
    8173,  8193,  8213,   914,   916,   924,   603,  2406,   932,    -6,
     671,   446,  1150,  1381,  8233,  8253,  8273,  8095,   603,  8293,
    6873,  6977,  7003,  7029,   933,   939,   970,   627,  2481,   422,
     209,   451,   201,  8966,  7653,  7055,  7081,  7107,  6899,   627,
    7133,   100,   982,   990,   984,   696,  2221,   992,   466,  1017,
    1022,  1042,  1045,  1802,  5693,  1306,  1423,  1057,  1645,  1978,
    2253,  2814,  3015,   166,  1015,  1063,   131,  5735,  5777,  5819,
    1079,  2569,  2584,  2593,  7679,  7705,  7731,   628,  1098,  2623,
    2623,  2623,  2623,  2623,   282,  7757,  8706,  8725,  8744,   725,
    1107,  2221,  2221,  2221,  2221,   801,  8763,  7783,  2721,  2804,
    2859,  1126,  2870,  2919,  2935,  8313,  8333,  8353,   770,  1136,
     704,  2951,  2951,  2951,  2951,  2951,   857,  8373,  2973,  2983,
    6269,  7159,  7185,  7211,   776,  1141,   742,  6278,  6278,  6278,
    6278,  6278,  1023,  7237,   131,  5861,  8782,   684,  1097,  1146,
    1155,   773,   835,  1164,  1030,  7263,  3131,  2492,   420,   141,
     195,   544,  3173,   208,  3215,  1147,  1197,  3257,  3299,  3341,
    3383,   943,  5903,  1166,  2537,  1064,   849,  1084,   919,  1113,
    1008,  7809,  7835,  1181,   123,  8992,  8043,  7861,  7887,  1194,
    7913,  1182,  8801,  8820,  9031,  8953,  8839,  8858,  1354,  8877,
    1207,  1176,  1093,  1200,  1116,  1210,  1189,  8393,  1227,  1235,
    1295,  1256,  1323,  1284,  8413,  8433,   793,  1237,  1249,  1260,
    1058,  1416,  1385,  9005,  8553,  8453,  8473,  1517,  8493,  1234,
    1330,  1298,  1377,  1344,  1380,  1401,  7289,  7315,   535,  1264,
    1266,  1275,   631,   721,  1286,   457,  8979,  7939,  7341,  7367,
    1554,  7393,  1252,   147,  6287,  6300,  6309,  1447,  1255,   532,
    1300,  1315,  1326,  1336,  3425,  3467,  3509,  3551,  1519,  1343,
    1345,  1350,   100,  1371,  5945,  1383,  1402,  1406,  1411,  1415,
    1421,  1426,  7965,  7991,  8896,  8915,   302,   321,   331,   365,
     382,   426,  1434,  1436,  1442,  1452,  1456,  1463,  6318,  6331,
    6340,  8513,  8533,   585,   635,   640,   665,   678,   747,  6349,
    6362,  6371,  7419,  7445,  1465,  1614,  1467,  1634,  1491,  1643,
    1532,  1357,  6029,  1471,   494,   709,  1479,  1484,  1488,  1496,
    1499,  1507,   131,  3593,  1677,  1578,  1689,  1587,  1721,  1596,
    1728,  1604,  1769,  1635,  1781,  1666,  5987,  1668,  1672,  1681,
    1694,  1725,  1741,  3635,  6069,  1946,  1464,  1533,  1536,  1547,
    1556,  3677,  3719,  3761,  3803,  3845,  3887,   147,  1435,  1441,
    1501,  1745,  1760,  1782,   748,   809,   904,  1013,  1253,  1318,
    3929,  3971,  1511,  6069,  1530,  6069,  6149,  6189,  1567,  6229,
     532,  4013,  4055,  4097,  6069,  6069,  4139,  6069,  1568,  4181,
    4223,  4265,  6069,  4307
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
       0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -532,  -532,  -532,  1618,     4,  -131,  -335,  -531,   -40,  -532,
    -532,  -532,   -17,   -20,   -60,     1,  -188,  -182,  -112,  1186,
     -88,  1026,   998,   969,   142,   -70,   -46,  1004,  1011,   -26,
     329,  -137,   136,    73,  2519,  2441,  2326,  2101,  2014,  1674,
    1513,   493,  -215,  1246,  1267,  -193,    20,   833,  -207,  1173,
       0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,    63,    22,    25,    40,    32,    10,
      27,    24,    30,   220,    64,   221,    66,    67,    68,   139,
      69,   204,   222,   237,   223,    70,    71,   235,   236,    72,
      73,    74,    75,    76,    77,   144,   283,   284,   285,   286,
     287,   288,   127,   163,   164,   177,   289,   290,   130,   291,
      88
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,    92,   180,   342,     9,   112,   434,    11,   219,    37,
      35,     9,   604,   140,    42,   152,   356,   276,    89,   292,
     -85,   -85,   357,    93,    31,   -85,   -85,    31,   -84,   -84,
     380,    18,   185,   -84,   -85,   114,    13,    65,   -70,   155,
     -84,    19,   174,   -75,    23,    33,   320,   321,   322,    47,
     -72,    39,   381,   251,   323,    94,    85,   -18,   -18,   -18,
     -18,    33,   383,   -84,   -84,   120,    65,   364,   324,   392,
     325,   326,   -84,   135,   115,   327,   103,   -70,   156,   394,
     108,   272,   -75,   328,   175,    85,   -18,    26,   -76,   -72,
      31,   -83,   358,   -73,   238,    -5,    -5,   413,   -77,    12,
     -16,   -16,   -16,   -16,   -74,   -10,   103,   415,   134,    -5,
      -5,    -5,    -5,  -122,   -85,   272,   359,   141,   429,   147,
    -122,   -83,   -83,   120,   153,    28,   678,   -76,   431,   -16,
     -83,    29,   -73,   272,   360,    12,   248,   -77,   166,   108,
     108,    34,   550,   -74,   -85,   -85,   276,   108,   108,   -69,
     108,   317,   338,   -85,   -83,   -83,   380,   -54,   361,   181,
     -54,   -54,   -54,   -54,   -54,    36,   -83,   457,    38,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   249,   362,   118,
     119,   -82,  -123,   -54,   -54,   -54,   -54,   -11,   -69,  -123,
     -54,   481,   -54,   -54,   -54,   -54,   552,   263,   -54,    91,
     292,   -54,   490,   210,   366,   368,   458,   368,   355,   555,
      43,   -82,   -82,   -15,    41,   368,   368,   368,   -85,   -85,
     -82,   338,   368,   519,    85,   317,   369,   622,   369,   111,
     190,   263,   -84,   -84,   428,   146,   369,   369,   369,   542,
     -85,   -85,   -84,   369,   -84,    85,  -125,    85,   556,   263,
     -85,   370,   -85,  -125,   165,    85,    85,    85,    95,   142,
     381,    96,    85,   277,   278,   279,    47,   308,   329,   392,
     383,   280,    97,  -124,   -81,    98,    90,   365,   -23,   394,
    -124,   376,   272,   479,  -116,   -85,   -85,   320,   321,   322,
      47,    99,   281,   376,   455,   323,   116,   192,   413,    16,
     282,   388,   272,   -75,   -81,   -81,    17,   463,   415,   324,
     388,   325,   326,   -81,  -116,  -116,   327,   100,   207,   209,
     101,   429,   -72,  -116,   328,   480,   407,   272,   -85,   -85,
     563,   431,   -76,   -75,   -75,   293,   157,   329,   407,   148,
     -85,   308,   -75,   277,   278,   279,    47,   423,   272,    -8,
     341,   280,   -72,   -72,   -43,    65,  -117,  -117,  -117,   423,
     -44,   -72,   -76,   -76,  -117,   442,   -73,   232,    65,   234,
     104,   -76,   281,   108,    85,   293,   178,   239,   240,   241,
     282,   344,   184,   -77,   243,   113,   461,    85,   117,   107,
     110,   145,   -14,  -117,   543,   292,   -73,   -73,   263,   272,
     272,   272,   272,   272,   338,   -73,   345,   346,   252,    45,
      46,   206,   613,   -77,   -77,   338,    48,   258,   263,   259,
     260,   154,   -77,    94,   138,   -45,   201,   -74,  -114,   136,
     511,   317,   317,   317,   317,   317,   338,   258,   158,   259,
     260,   -27,   162,   263,   -22,    61,   533,   338,   338,   338,
     338,   338,   338,  -116,    33,  -116,   356,   -74,   -74,   179,
     173,   176,   357,   -70,   263,   -70,   -74,   272,   150,   551,
     553,   182,   277,   278,   279,    47,   272,   -84,   -84,   412,
     280,   441,   426,   427,   272,   356,   -84,   356,   -83,   -83,
     428,   357,   -69,   357,   -69,   646,   356,   356,   -83,   356,
     -83,   281,   357,   357,   356,   357,   446,   364,    94,   282,
     357,    -2,    14,   208,   374,   255,   256,   292,   344,   189,
     329,   258,   257,   259,   260,     2,     3,     4,     5,    84,
     176,   329,   358,   363,   224,   294,   364,   343,   364,   258,
     186,   259,   260,   688,   344,   191,   510,   364,   364,   102,
     364,   262,   329,    84,   271,   364,   359,   295,    84,   296,
     297,   358,   532,   358,   293,   195,  -116,  -116,   329,   181,
     199,   347,   358,   358,   360,   358,  -116,   183,  -116,   133,
     358,   187,   657,   263,   554,   359,    94,   359,   271,  -116,
    -116,   378,   263,   386,   278,   279,   359,   359,   361,   359,
     263,   280,   188,   360,   359,   360,   271,   193,   405,   300,
     301,   390,    84,    84,   360,   360,   302,   360,   362,   194,
      84,    84,   360,    84,   316,   337,   -75,   361,   -75,   361,
     282,    94,   421,   321,   322,   650,   409,  -111,   361,   361,
     323,   361,    33,  -112,   366,   307,   361,   362,   355,   362,
     196,   244,   245,   246,   247,   345,   379,   425,   362,   362,
     197,   362,   -82,   -82,    85,   317,   362,   -69,   198,   328,
     293,   471,   -82,   366,   -82,   366,   -72,   355,   -72,   355,
     -24,   -76,   453,   -76,   366,   366,   -71,   366,   355,   355,
     202,   355,   366,    85,   337,    85,   355,    84,   316,   203,
     370,   437,   410,   411,    85,    85,   -73,    85,   -73,   506,
     648,   -69,    85,   176,   292,  -116,  -116,   365,    84,   -77,
      84,   -77,   205,   438,   176,   439,   440,  -116,    84,    84,
      84,   507,   131,   508,   509,    84,   258,   167,   259,   260,
     -80,   253,    45,    46,    47,   176,   365,   528,   365,    48,
     647,   649,   -81,   -81,   375,   271,   -79,   365,   365,   -78,
     365,   176,   -81,   211,   -81,   365,   385,   293,   482,   529,
      56,   530,   531,   212,   387,   271,   548,   213,    61,   -75,
     -75,   308,     1,   396,   214,   559,   671,   217,   -74,   -75,
     -74,   -75,   215,   565,   216,     2,     3,     4,     5,   406,
     271,   225,   488,   226,   -82,   -82,   320,   321,   322,    47,
     227,   417,   293,   504,   323,   681,   -82,   683,   293,   526,
     422,   271,    -4,    -4,  -116,  -116,   689,   690,   324,   691,
     325,   326,   433,  -116,   693,   327,    -4,    -4,    -4,    -4,
     -72,   -72,   228,   328,   489,   229,    84,    84,  -115,  -107,
     -72,  -113,   -72,  -107,  -107,  -107,  -107,   231,   517,   233,
      84,  -107,   320,   321,   322,    47,   -81,   -81,   242,    86,
     323,  -122,   271,   271,   271,   271,   271,   337,   -81,  -123,
     -85,   -85,  -107,  -125,   324,  -124,   325,   326,   337,   371,
    -107,   327,   567,    86,   273,   372,    -7,    -7,    86,   328,
     518,    -6,    -6,   373,   316,   316,   316,   316,   316,   337,
      -7,    -7,    -7,    -7,   128,    -6,    -6,    -6,    -6,   -70,
     337,   337,   337,   337,   337,   337,  -105,  -116,   273,  -116,
    -105,  -105,  -105,  -105,   397,   -76,   -76,   398,  -105,   399,
     271,   400,  -116,  -116,  -116,   -76,   273,   -76,   401,   271,
     -85,   -85,    86,    86,   -13,   -13,   402,   271,   403,  -105,
      86,    86,   569,    86,   318,   339,   404,  -105,   -13,   -13,
     -13,   -13,   -70,   363,   672,   418,    -3,    -3,    -8,    20,
      21,   419,   -53,    -8,   562,   -53,   -53,   -53,   -53,   -53,
      -3,    -3,    -3,    -3,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   363,   128,   363,   199,   347,   200,   -53,   -53,
     -53,   -53,   420,   363,   363,   -53,   363,   -53,   -53,   -53,
     -53,   363,   435,   -53,   540,  -116,   -53,   436,   320,   321,
     322,    47,    -9,    -9,   339,   445,   323,    86,   318,   -85,
     -85,   -84,   -84,   391,   -73,   -73,    -9,    -9,    -9,    -9,
     324,   571,   325,   326,   -73,   459,   -73,   327,    86,   447,
      86,   -83,   -83,   391,   448,   328,   541,  -106,    86,    86,
      86,  -106,  -106,  -106,  -106,    86,   159,   -21,   -21,  -106,
     254,   255,   256,    47,   449,   160,   161,   450,   257,   -82,
     -82,   -21,   -21,   -21,   -21,   273,   -20,   -20,   -82,   456,
    -106,   382,   258,   460,   259,   260,   344,   566,  -106,   261,
     -20,   -20,   -20,   -20,   464,   273,   -50,   262,   393,   230,
     -50,   -50,   -50,   -50,   -85,   -85,   344,   568,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   577,    84,   316,   544,
     273,   472,   -50,   -50,   -50,   -50,   414,   -85,   -85,   -50,
     483,   -50,   -50,   -50,   -50,   344,   570,   -50,  -108,   579,
     -50,   273,  -108,  -108,  -108,  -108,    84,   430,    84,   497,
    -108,   121,   122,   123,   124,   125,   126,    84,    84,   505,
      84,   -87,   -87,   -87,   527,    84,    86,    86,   545,  -109,
     -87,  -108,   557,  -109,  -109,  -109,  -109,   546,   558,  -108,
      86,  -109,   254,   255,   256,    47,   344,   160,   161,    87,
     257,   564,   273,   273,   273,   273,   273,   339,   344,   576,
     -85,   -85,  -109,   293,   258,   573,   259,   260,   339,    87,
    -109,   261,   581,    87,   274,   199,   347,   572,    87,   262,
     -25,   -25,   344,   578,   318,   318,   318,   318,   318,   339,
     575,   -89,   344,   580,   -25,   -25,   -25,   -25,   275,    87,
     339,   339,   339,   339,   339,   339,   -85,   -85,   274,   344,
     582,   -89,   -89,   -89,   -89,   -89,   -89,   592,   583,   588,
     273,   -89,   -89,   -89,   -77,   -77,   274,   -85,   -85,   273,
     -89,   589,    87,    87,   -77,   603,   -77,   273,   612,   585,
      87,    87,   590,    87,   319,   340,   599,   -35,   600,   382,
     -35,   -35,   -35,   -35,   -35,   -85,   -85,   601,   393,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   587,   347,   -85,
     -85,   614,   -88,   -35,   -35,   -35,   -35,   344,   584,   275,
     -35,   594,   -35,   -35,   -35,   -35,   615,   414,   -35,   -74,
     -74,   -35,   -88,   -88,   -88,   -88,   -88,   -88,   643,   -74,
    -101,   -74,   -88,   -88,   -88,   344,   586,  -101,  -101,   616,
     430,   -88,   344,   593,   340,   -85,   -85,    87,   319,   617,
    -101,  -101,  -101,  -101,  -101,  -101,   619,   596,   620,   275,
    -101,  -101,  -101,   621,   131,   199,   347,   574,    87,  -101,
      87,   132,   -89,   -89,   -89,   -89,   -89,   -89,    87,    87,
      87,   623,   -89,   -89,   -89,    87,   -83,   -83,   412,   344,
     595,   -89,   344,   597,   -32,   -83,   -71,   -32,   -32,   -32,
     -32,   -32,   -85,   -85,   274,   274,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   598,   -75,   274,   -81,   -81,   -72,
     -32,   -32,   -32,   -32,   -76,   274,   -81,   -32,   -73,   -32,
     -32,   -32,   -32,  -116,   -77,   -32,   -75,   -75,   -32,   -74,
    -116,  -116,   -72,   -72,   -75,   -75,   -72,    86,   318,   319,
     274,   -72,   -76,  -116,  -116,  -116,  -116,  -116,  -116,   293,
     611,   319,   -73,  -116,  -116,  -116,   -77,  -116,   -85,   -85,
     340,   274,  -116,   -74,  -116,   636,    86,   673,    86,   105,
     638,   645,   340,   253,    45,    46,    47,    86,    86,   651,
      86,    48,   -85,   -85,   652,    86,    87,    87,   653,   -19,
     -19,   682,   -76,   -76,   640,    52,   654,    54,    55,   655,
      87,   -76,    56,   -19,   -19,   -19,   -19,   656,   106,    83,
      61,   680,   274,   274,   274,   274,   274,   340,   199,   347,
     591,   293,   618,   -85,   -85,   109,   -12,   -12,   340,   254,
     255,   256,    47,    83,   270,   642,   674,   257,    83,   675,
     -12,   -12,   -12,   -12,   319,   319,   319,   319,   319,   340,
     676,   258,   -87,   259,   260,   199,   347,   602,   261,   677,
     340,   340,   340,   340,   340,   340,   262,   686,   270,   -85,
     -85,   692,   121,   122,   123,   124,   125,   126,   -85,   -85,
     274,   659,   -87,   -87,   -87,    15,   270,   -85,   -85,   274,
     661,   -87,    83,    83,   549,   -85,   -85,   274,   644,   663,
      83,    83,   670,   172,   315,   336,   -29,   665,   687,   -29,
     -29,   -29,   -29,   -29,   -17,   -17,   344,   637,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -85,   -85,   -17,   -17,
     -17,   -17,   -29,   -29,   -29,   -29,   344,   639,   667,   -29,
     684,   -29,   -29,   -29,   -29,   344,   641,   -29,   685,  -110,
     -29,   -26,   -26,  -110,  -110,  -110,  -110,   -85,   -85,   -75,
     -75,  -110,   560,   -72,   -72,   -26,   -26,   -26,   -26,   669,
      82,   -75,   -76,   -76,   336,   -72,     0,    83,   315,   344,
     658,  -101,  -110,   561,   -76,   -73,   -73,     0,  -101,  -101,
    -110,   344,   660,     0,    82,   269,     0,   -73,    83,    82,
      83,  -101,  -101,  -101,  -101,  -101,  -101,     0,    83,    83,
      83,  -101,  -101,  -101,     0,    83,   -77,   -77,  -116,     0,
    -101,     0,   132,   344,   662,  -116,  -116,     0,   -77,   269,
     344,   664,   -74,   -74,     0,   270,   -73,   -73,  -116,  -116,
    -116,  -116,  -116,  -116,   -74,   -73,     0,   269,  -116,  -116,
    -116,   -77,   -77,    82,    82,   270,     0,  -116,     0,  -116,
     -77,    82,   171,   451,     0,   314,   335,   253,    45,    46,
      47,   344,   666,   -74,   -74,    48,     0,    87,   319,     0,
     270,   137,   -74,   344,   668,   254,   255,   256,    47,    52,
       0,    54,    55,   257,     0,     0,    56,     0,     0,     0,
       0,   270,   452,     0,    61,     0,    87,   258,    87,   259,
     260,     0,     0,     0,   261,     0,     0,    87,    87,     0,
      87,     0,   262,     0,     0,    87,    83,    83,     0,     0,
       0,     0,     0,     0,     0,   335,     0,     0,    82,   314,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   270,   270,   270,   270,   478,   336,     0,    82,
       0,    82,     0,     0,     0,     0,     0,   487,   336,    82,
      82,    82,     0,     0,     0,     0,    82,     0,     0,     0,
       0,     0,     0,     0,   315,   315,   315,   315,   516,   336,
       0,     0,     0,     0,     0,     0,   269,     0,     0,     0,
     336,   336,   336,   336,   539,   336,     0,   298,     0,     0,
       0,   299,   300,   301,    47,     0,   269,     0,     0,   302,
     270,     0,     0,     0,     0,     0,     0,     0,     0,   270,
       0,     0,     0,   303,     0,   304,   305,   270,     0,   -30,
     306,   269,   -30,   -30,   -30,   -30,   -30,     0,   307,     0,
       0,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,
       0,     0,   269,     0,     0,   -30,   -30,   -30,   -30,     0,
       0,     0,   -30,     0,   -30,   -30,   -30,   -30,     0,     0,
     -30,     0,     0,   -30,     0,     0,     0,    82,    82,     0,
       0,   218,     0,     0,     0,   320,   321,   322,    47,     0,
    -118,    82,     0,   323,  -118,  -118,  -118,  -118,     0,     0,
      81,     0,  -118,   269,   269,   269,   477,   324,   335,   325,
     326,     0,     0,     0,   327,     0,     0,   486,     0,   335,
       0,     0,   328,  -118,    81,   268,     0,     0,     0,    81,
       0,  -118,     0,     0,     0,   314,   314,   314,   515,     0,
     335,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   335,   335,   335,   538,     0,   335,     0,     0,   268,
       0,  -117,     0,     0,     0,  -117,  -117,  -117,  -117,     0,
       0,   269,     0,  -117,     0,     0,     0,   268,     0,     0,
     269,     0,     0,    81,    81,     0,     0,    80,   269,     0,
       0,   170,     0,   377,  -117,   313,   334,   254,   255,   256,
      47,     0,  -117,     0,     0,   257,     0,    83,   315,     0,
       0,    80,   267,     0,     0,     0,    80,     0,     0,   258,
       0,   259,   260,     0,     0,   389,   261,     0,     0,   254,
     255,   256,    47,     0,   262,     0,    83,   257,    83,     0,
       0,     0,     0,     0,     0,     0,   267,    83,    83,     0,
      83,   258,     0,   259,   260,    83,     0,     0,   261,     0,
       0,     0,     0,     0,   267,   334,   262,     0,    81,   313,
      80,   169,   443,     0,     0,     0,   277,   278,   279,    47,
       0,     0,   312,   333,   280,     0,     0,     0,     0,    81,
       0,    81,     0,     0,     0,     0,     0,     0,     0,    81,
      81,    81,     0,     0,   -31,   281,    81,   -31,   -31,   -31,
     -31,   -31,     0,   282,     0,     0,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,     0,     0,   268,     0,     0,     0,
     -31,   -31,   -31,   -31,     0,     0,     0,   -31,     0,   -31,
     -31,   -31,   -31,     0,     0,   -31,   268,     0,   -31,     0,
       0,     0,   333,     0,     0,    80,   312,     0,     0,  -120,
       0,     0,     0,     0,     0,     0,  -120,  -120,    82,   314,
       0,   268,     0,     0,     0,     0,    80,     0,    80,  -120,
    -120,  -120,  -120,  -120,  -120,     0,    80,    80,    80,  -120,
    -120,  -120,   268,    80,     0,     0,     0,    82,  -120,    82,
       0,     0,     0,     0,     0,     0,     0,     0,    82,    82,
       0,    82,    79,   267,     0,     0,    82,    81,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,   267,     0,     0,    79,   266,     0,     0,
       0,    79,     0,   268,   268,   476,     0,     0,   334,     0,
       0,     0,     0,     0,     0,     0,   485,   408,   267,   334,
       0,   254,   255,   256,    47,     0,     0,     0,     0,   257,
       0,   266,     0,     0,     0,   313,   313,   514,     0,   267,
     334,     0,     0,   258,     0,   259,   260,     0,     0,   266,
     261,   334,   334,   537,     0,   168,   334,     0,   262,     0,
       0,     0,     0,     0,    80,    80,     0,   311,   332,     0,
       0,   268,     0,     0,     0,     0,     0,     0,    80,     0,
     268,     0,     0,     0,     0,     0,     0,    78,   268,     0,
     267,   475,   424,     0,     0,   333,   254,   255,   256,    47,
       0,     0,   484,   547,   257,     0,   333,   254,   255,   256,
      47,    78,   265,     0,     0,   257,    78,     0,   258,     0,
     259,   260,   312,   513,     0,   261,     0,   333,     0,   258,
       0,   259,   260,   262,     0,     0,   261,   332,   333,   536,
      79,   311,     0,   333,   262,     0,   265,     0,   473,     0,
       0,     0,   254,   255,   256,    47,     0,     0,   267,     0,
     257,    79,     0,    79,   265,     0,     0,   267,     0,     0,
       0,    79,    79,    79,   258,   267,   259,   260,    79,     0,
     465,   261,   310,   331,   277,   278,   279,    47,     0,   262,
     264,     0,   280,     0,     0,   467,     0,     0,   266,   277,
     278,   279,    47,     0,   469,     0,     0,   280,   277,   278,
     279,    47,     0,   281,     0,     0,   280,     0,   266,     0,
       0,   282,     0,     0,   264,     0,     0,   143,   281,   149,
     151,     0,     0,     0,   473,     0,   282,   281,   254,   255,
     256,    47,   264,   266,     0,   282,   257,     0,     0,     0,
       0,     0,   331,     0,     0,    78,   310,     0,     0,     0,
     309,   330,     0,     0,   266,     0,     0,   261,    81,   313,
       0,     0,     0,     0,     0,   262,    78,     0,    78,     0,
       0,     0,   444,     0,     0,     0,    78,    78,    78,    79,
      79,     0,     0,    78,     0,     0,     0,    81,     0,    81,
       0,     0,     0,    79,     0,     0,     0,     0,    81,    81,
       0,    81,     0,   265,     0,   474,    81,     0,     0,     0,
     332,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     330,   332,   491,   265,   309,     0,   277,   278,   279,    47,
       0,     0,     0,     0,   280,     0,     0,   512,     0,     0,
       0,     0,   332,     0,     0,    80,   312,     0,   265,     0,
       0,     0,     0,   535,     0,   281,     0,     0,   332,     0,
       0,     0,     0,   282,     0,     0,     0,     0,     0,   265,
       0,     0,     0,   266,    80,     0,    80,     0,     0,     0,
       0,   264,   266,     0,     0,    80,    80,     0,    80,     0,
     266,     0,     0,    80,    78,    78,     0,     0,     0,     0,
       0,   264,     0,     0,     0,   493,     0,     0,    78,   277,
     278,   279,    47,     0,     0,   -34,     0,   280,   -34,   -34,
     -34,   -34,   -34,     0,     0,   331,   264,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,     0,   331,     0,   281,     0,
       0,   -34,   -34,   -34,   -34,     0,   282,   264,   -34,     0,
     -34,   -34,   -34,   -34,     0,     0,   -34,   331,     0,   -34,
     495,     0,     0,     0,   277,   278,   279,    47,     0,     0,
       0,   498,   280,   331,     0,   277,   278,   279,    47,     0,
       0,     0,     0,   280,     0,     0,     0,     0,   265,     0,
     466,   468,   470,   281,     0,     0,     0,   265,     0,     0,
       0,   282,     0,   330,   281,   265,     0,     0,     0,     0,
       0,     0,   282,     0,   330,     0,     0,   492,   494,   496,
     500,   499,   501,   503,   277,   278,   279,    47,     0,     0,
       0,     0,   280,     0,     0,   330,   502,   521,   523,   525,
     277,   278,   279,    47,     0,     0,     0,     0,   280,     0,
       0,   330,   298,   281,     0,     0,   299,   300,   301,    47,
       0,   282,     0,     0,   302,     0,   264,     0,     0,   281,
      79,   311,     0,     0,   520,   264,     0,   282,   277,   278,
     279,    47,     0,   264,   522,   306,   280,     0,   277,   278,
     279,    47,     0,   307,     0,     0,   280,     0,     0,    79,
       0,    79,     0,     0,     0,     0,     0,   281,     0,     0,
      79,    79,     0,    79,     0,   282,   -33,   281,    79,   -33,
     -33,   -33,   -33,   -33,     0,   282,     0,     0,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,     0,     0,     0,     0,
       0,     0,   -33,   -33,   -33,   -33,     0,     0,     0,   -33,
       0,   -33,   -33,   -33,   -33,     0,     0,   -33,     0,     0,
     -33,     0,    44,   606,   608,   610,   250,    45,    46,    47,
       0,     0,     0,     0,    48,   244,   245,   246,   247,    49,
      50,    51,     0,     0,     0,    78,   310,     0,    52,    53,
      54,    55,     0,     0,     0,    56,     0,    57,    58,    59,
      60,     0,     0,    61,     0,     0,    62,   625,   627,   629,
       0,     0,     0,     0,    78,     0,    78,     0,   631,   633,
     635,     0,     0,     0,     0,    78,    78,     0,    78,     0,
       0,     0,   -13,    78,     0,   -13,   -13,   -13,   -13,   -13,
       0,     0,     0,     0,   -13,   -13,   -13,   -13,   -13,   -13,
     -13,   -13,     0,     0,     0,     0,     0,     0,   -13,   -13,
     -13,   -13,     0,     0,   309,   -13,     0,   -13,   -13,   -13,
     -13,     0,     0,   -13,   -55,     0,   -13,   -55,   -55,   -55,
     -55,   -55,     0,     0,     0,     0,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,     0,     0,     0,     0,     0,     0,
     -55,   -55,   -55,   -55,     0,     0,     0,   -55,     0,   -55,
     -55,   -55,   -55,     0,     0,   -55,   -25,     0,   -55,   -25,
     -25,   -25,   -25,   -25,     0,     0,     0,     0,   -25,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,     0,     0,     0,     0,
       0,     0,   -25,   -25,   -25,   -25,     0,     0,     0,   -25,
       0,   -25,   -25,   -25,   -25,     0,     0,   -25,   -68,     0,
     -25,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,     0,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,
       0,     0,     0,     0,   -68,   -68,   -68,   -68,     0,     0,
       0,   -68,     0,   -68,   -68,   -68,   -68,     0,     0,   -68,
     -67,     0,   -68,   -67,   -67,   -67,   -67,   -67,     0,     0,
       0,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
       0,     0,     0,     0,     0,     0,   -67,   -67,   -67,   -67,
       0,     0,     0,   -67,     0,   -67,   -67,   -67,   -67,     0,
       0,   -67,   -36,     0,   -67,   -36,   -36,   -36,   -36,   -36,
       0,     0,     0,     0,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,     0,     0,     0,     0,     0,     0,   -36,   -36,
     -36,   -36,     0,     0,     0,   -36,     0,   -36,   -36,   -36,
     -36,     0,     0,   -36,   -63,     0,   -36,   -63,   -63,   -63,
     -63,   -63,     0,     0,     0,     0,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,     0,     0,     0,     0,     0,     0,
     -63,   -63,   -63,   -63,     0,     0,     0,   -63,     0,   -63,
     -63,   -63,   -63,     0,     0,   -63,   -57,     0,   -63,   -57,
     -57,   -57,   -57,   -57,     0,     0,     0,     0,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,     0,     0,     0,     0,
       0,     0,   -57,   -57,   -57,   -57,     0,     0,     0,   -57,
       0,   -57,   -57,   -57,   -57,     0,     0,   -57,   -58,     0,
     -57,   -58,   -58,   -58,   -58,   -58,     0,     0,     0,     0,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,     0,     0,
       0,     0,     0,     0,   -58,   -58,   -58,   -58,     0,     0,
       0,   -58,     0,   -58,   -58,   -58,   -58,     0,     0,   -58,
     -56,     0,   -58,   -56,   -56,   -56,   -56,   -56,     0,     0,
       0,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
       0,     0,     0,     0,     0,     0,   -56,   -56,   -56,   -56,
       0,     0,     0,   -56,     0,   -56,   -56,   -56,   -56,     0,
       0,   -56,   -26,     0,   -56,   -26,   -26,   -26,   -26,   -26,
       0,     0,     0,     0,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,     0,     0,     0,     0,     0,     0,   -26,   -26,
     -26,   -26,     0,     0,     0,   -26,     0,   -26,   -26,   -26,
     -26,     0,     0,   -26,    -9,     0,   -26,    -9,    -9,    -9,
      -9,    -9,     0,     0,     0,     0,    -9,    -9,    -9,    -9,
      -9,    -9,    -9,    -9,     0,     0,     0,     0,     0,     0,
      -9,    -9,    -9,    -9,     0,     0,     0,    -9,     0,    -9,
      -9,    -9,    -9,     0,     0,    -9,   -49,     0,    -9,   -49,
     -49,   -49,   -49,   -49,     0,     0,     0,     0,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,     0,     0,     0,     0,
       0,     0,   -49,   -49,   -49,   -49,     0,     0,     0,   -49,
       0,   -49,   -49,   -49,   -49,     0,     0,   -49,   -42,     0,
     -49,   -42,   -42,   -42,   -42,   -42,     0,     0,     0,     0,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,     0,
       0,     0,     0,     0,   -42,   -42,   -42,   -42,     0,     0,
       0,   -42,     0,   -42,   -42,   -42,   -42,     0,     0,   -42,
     -40,     0,   -42,   -40,   -40,   -40,   -40,   -40,     0,     0,
       0,     0,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
       0,     0,     0,     0,     0,     0,   -40,   -40,   -40,   -40,
       0,     0,     0,   -40,     0,   -40,   -40,   -40,   -40,     0,
       0,   -40,   -41,     0,   -40,   -41,   -41,   -41,   -41,   -41,
       0,     0,     0,     0,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,     0,     0,     0,     0,     0,     0,   -41,   -41,
     -41,   -41,     0,     0,     0,   -41,     0,   -41,   -41,   -41,
     -41,     0,     0,   -41,   -38,     0,   -41,   -38,   -38,   -38,
     -38,   -38,     0,     0,     0,     0,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,     0,     0,     0,     0,     0,     0,
     -38,   -38,   -38,   -38,     0,     0,     0,   -38,     0,   -38,
     -38,   -38,   -38,     0,     0,   -38,   -37,     0,   -38,   -37,
     -37,   -37,   -37,   -37,     0,     0,     0,     0,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,     0,     0,     0,     0,
       0,     0,   -37,   -37,   -37,   -37,     0,     0,     0,   -37,
       0,   -37,   -37,   -37,   -37,     0,     0,   -37,   -39,     0,
     -37,   -39,   -39,   -39,   -39,   -39,     0,     0,     0,     0,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,     0,     0,
       0,     0,     0,     0,   -39,   -39,   -39,   -39,     0,     0,
       0,   -39,     0,   -39,   -39,   -39,   -39,     0,     0,   -39,
     -48,     0,   -39,   -48,   -48,   -48,   -48,   -48,     0,     0,
       0,     0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
       0,     0,     0,     0,     0,     0,   -48,   -48,   -48,   -48,
       0,     0,     0,   -48,     0,   -48,   -48,   -48,   -48,     0,
       0,   -48,   -50,     0,   -48,   679,   -50,   -50,   -50,   -50,
       0,     0,     0,     0,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,     0,     0,     0,     0,     0,     0,   -50,   -50,
     -50,   -50,     0,     0,     0,   -50,     0,   -50,   -50,   -50,
     -50,     0,     0,   -50,   -64,     0,   -50,   -64,   -64,   -64,
     -64,   -64,     0,     0,     0,     0,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,     0,     0,     0,     0,     0,     0,
     -64,   -64,   -64,   -64,     0,     0,     0,   -64,     0,   -64,
     -64,   -64,   -64,     0,     0,   -64,   -65,     0,   -64,   -65,
     -65,   -65,   -65,   -65,     0,     0,     0,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,     0,
       0,     0,   -65,   -65,   -65,   -65,     0,     0,     0,   -65,
       0,   -65,   -65,   -65,   -65,     0,     0,   -65,   -66,     0,
     -65,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,     0,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,
       0,     0,     0,     0,   -66,   -66,   -66,   -66,     0,     0,
       0,   -66,     0,   -66,   -66,   -66,   -66,     0,     0,   -66,
     -12,     0,   -66,   -12,   -12,   -12,   -12,   -12,     0,     0,
       0,     0,   -12,   -12,   -12,   -12,   -12,   -12,   -12,   -12,
       0,     0,     0,     0,     0,     0,   -12,   -12,   -12,   -12,
       0,     0,     0,   -12,     0,   -12,   -12,   -12,   -12,     0,
       0,   -12,   -60,     0,   -12,   -60,   -60,   -60,   -60,   -60,
       0,     0,     0,     0,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,     0,     0,     0,     0,     0,     0,   -60,   -60,
     -60,   -60,     0,     0,     0,   -60,     0,   -60,   -60,   -60,
     -60,     0,     0,   -60,   -62,     0,   -60,   -62,   -62,   -62,
     -62,   -62,     0,     0,     0,     0,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,     0,     0,     0,     0,     0,     0,
     -62,   -62,   -62,   -62,     0,     0,     0,   -62,     0,   -62,
     -62,   -62,   -62,     0,     0,   -62,   -52,     0,   -62,   -52,
     -52,   -52,   -52,   -52,     0,     0,     0,     0,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,     0,     0,     0,     0,
       0,     0,   -52,   -52,   -52,   -52,     0,     0,     0,   -52,
       0,   -52,   -52,   -52,   -52,     0,     0,   -52,   -46,     0,
     -52,   -46,   -46,   -46,   -46,   -46,     0,     0,     0,     0,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,     0,
       0,     0,     0,     0,   -46,   -46,   -46,   -46,     0,     0,
       0,   -46,     0,   -46,   -46,   -46,   -46,     0,     0,   -46,
     -35,     0,   -46,     0,   -35,   -35,   -35,   -35,     0,     0,
       0,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
       0,     0,     0,     0,     0,     0,   -35,   -35,   -35,   -35,
       0,     0,     0,   -35,     0,   -35,   -35,   -35,   -35,     0,
       0,   -35,    44,     0,   -35,     0,   250,    45,    46,    47,
       0,     0,     0,     0,    48,   244,   245,   246,   247,    49,
      50,    51,     0,     0,     0,     0,     0,     0,    52,    53,
      54,    55,     0,     0,     0,    56,     0,    57,    58,    59,
      60,     0,     0,    61,   -32,     0,   -28,     0,   -32,   -32,
     -32,   -32,     0,     0,     0,     0,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,     0,     0,     0,     0,     0,     0,
     -32,   -32,   -32,   -32,     0,     0,     0,   -32,     0,   -32,
     -32,   -32,   -32,     0,     0,   -32,   -29,     0,   -32,     0,
     -29,   -29,   -29,   -29,     0,     0,     0,     0,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,     0,     0,     0,     0,
       0,     0,   -29,   -29,   -29,   -29,     0,     0,     0,   -29,
       0,   -29,   -29,   -29,   -29,     0,     0,   -29,   -30,     0,
     -29,     0,   -30,   -30,   -30,   -30,     0,     0,     0,     0,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,     0,
       0,     0,     0,     0,   -30,   -30,   -30,   -30,     0,     0,
       0,   -30,     0,   -30,   -30,   -30,   -30,     0,     0,   -30,
     -31,     0,   -30,     0,   -31,   -31,   -31,   -31,     0,     0,
       0,     0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
       0,     0,     0,     0,     0,     0,   -31,   -31,   -31,   -31,
       0,     0,     0,   -31,     0,   -31,   -31,   -31,   -31,     0,
       0,   -31,   -34,     0,   -31,     0,   -34,   -34,   -34,   -34,
       0,     0,     0,     0,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,     0,     0,     0,     0,     0,     0,   -34,   -34,
     -34,   -34,     0,     0,     0,   -34,     0,   -34,   -34,   -34,
     -34,     0,     0,   -34,   -33,     0,   -34,     0,   -33,   -33,
     -33,   -33,     0,     0,     0,     0,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,     0,     0,     0,     0,     0,     0,
     -33,   -33,   -33,   -33,     0,     0,     0,   -33,     0,   -33,
     -33,   -33,   -33,     0,     0,   -33,   -55,     0,   -33,     0,
     -55,   -55,   -55,   -55,     0,     0,     0,     0,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,     0,     0,     0,     0,
       0,     0,   -55,   -55,   -55,   -55,     0,     0,     0,   -55,
       0,   -55,   -55,   -55,   -55,     0,     0,   -55,   -68,     0,
     -55,     0,   -68,   -68,   -68,   -68,     0,     0,     0,     0,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,
       0,     0,     0,     0,   -68,   -68,   -68,   -68,     0,     0,
       0,   -68,     0,   -68,   -68,   -68,   -68,     0,     0,   -68,
     -67,     0,   -68,     0,   -67,   -67,   -67,   -67,     0,     0,
       0,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
       0,     0,     0,     0,     0,     0,   -67,   -67,   -67,   -67,
       0,     0,     0,   -67,     0,   -67,   -67,   -67,   -67,     0,
       0,   -67,   -36,     0,   -67,     0,   -36,   -36,   -36,   -36,
       0,     0,     0,     0,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,     0,     0,     0,     0,     0,     0,   -36,   -36,
     -36,   -36,     0,     0,     0,   -36,     0,   -36,   -36,   -36,
     -36,     0,     0,   -36,   -63,     0,   -36,     0,   -63,   -63,
     -63,   -63,     0,     0,     0,     0,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,     0,     0,     0,     0,     0,     0,
     -63,   -63,   -63,   -63,     0,     0,     0,   -63,     0,   -63,
     -63,   -63,   -63,     0,     0,   -63,   -57,     0,   -63,     0,
     -57,   -57,   -57,   -57,     0,     0,     0,     0,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,     0,     0,     0,     0,
       0,     0,   -57,   -57,   -57,   -57,     0,     0,     0,   -57,
       0,   -57,   -57,   -57,   -57,     0,     0,   -57,   -58,     0,
     -57,     0,   -58,   -58,   -58,   -58,     0,     0,     0,     0,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,     0,     0,
       0,     0,     0,     0,   -58,   -58,   -58,   -58,     0,     0,
       0,   -58,     0,   -58,   -58,   -58,   -58,     0,     0,   -58,
     -56,     0,   -58,     0,   -56,   -56,   -56,   -56,     0,     0,
       0,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
       0,     0,     0,     0,     0,     0,   -56,   -56,   -56,   -56,
       0,     0,     0,   -56,     0,   -56,   -56,   -56,   -56,     0,
       0,   -56,   -49,     0,   -56,     0,   -49,   -49,   -49,   -49,
       0,     0,     0,     0,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,     0,     0,     0,     0,     0,     0,   -49,   -49,
     -49,   -49,     0,     0,     0,   -49,     0,   -49,   -49,   -49,
     -49,     0,     0,   -49,   -42,     0,   -49,     0,   -42,   -42,
     -42,   -42,     0,     0,     0,     0,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,     0,     0,     0,     0,     0,     0,
     -42,   -42,   -42,   -42,     0,     0,     0,   -42,     0,   -42,
     -42,   -42,   -42,     0,     0,   -42,   -40,     0,   -42,     0,
     -40,   -40,   -40,   -40,     0,     0,     0,     0,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,     0,     0,     0,     0,
       0,     0,   -40,   -40,   -40,   -40,     0,     0,     0,   -40,
       0,   -40,   -40,   -40,   -40,     0,     0,   -40,   -41,     0,
     -40,     0,   -41,   -41,   -41,   -41,     0,     0,     0,     0,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,     0,     0,
       0,     0,     0,     0,   -41,   -41,   -41,   -41,     0,     0,
       0,   -41,     0,   -41,   -41,   -41,   -41,     0,     0,   -41,
     -38,     0,   -41,     0,   -38,   -38,   -38,   -38,     0,     0,
       0,     0,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
       0,     0,     0,     0,     0,     0,   -38,   -38,   -38,   -38,
       0,     0,     0,   -38,     0,   -38,   -38,   -38,   -38,     0,
       0,   -38,   -37,     0,   -38,     0,   -37,   -37,   -37,   -37,
       0,     0,     0,     0,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,     0,     0,     0,     0,     0,     0,   -37,   -37,
     -37,   -37,     0,     0,     0,   -37,     0,   -37,   -37,   -37,
     -37,     0,     0,   -37,   -39,     0,   -37,     0,   -39,   -39,
     -39,   -39,     0,     0,     0,     0,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,     0,     0,     0,     0,     0,     0,
     -39,   -39,   -39,   -39,     0,     0,     0,   -39,     0,   -39,
     -39,   -39,   -39,     0,     0,   -39,   -48,     0,   -39,     0,
     -48,   -48,   -48,   -48,     0,     0,     0,     0,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,     0,     0,     0,     0,
       0,     0,   -48,   -48,   -48,   -48,     0,     0,     0,   -48,
       0,   -48,   -48,   -48,   -48,     0,     0,   -48,   -64,     0,
     -48,     0,   -64,   -64,   -64,   -64,     0,     0,     0,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,
       0,     0,     0,     0,   -64,   -64,   -64,   -64,     0,     0,
       0,   -64,     0,   -64,   -64,   -64,   -64,     0,     0,   -64,
     -65,     0,   -64,     0,   -65,   -65,   -65,   -65,     0,     0,
       0,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
       0,     0,     0,     0,     0,     0,   -65,   -65,   -65,   -65,
       0,     0,     0,   -65,     0,   -65,   -65,   -65,   -65,     0,
       0,   -65,   -66,     0,   -65,     0,   -66,   -66,   -66,   -66,
       0,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,     0,     0,     0,     0,     0,     0,   -66,   -66,
     -66,   -66,     0,     0,     0,   -66,     0,   -66,   -66,   -66,
     -66,     0,     0,   -66,   -60,     0,   -66,     0,   -60,   -60,
     -60,   -60,     0,     0,     0,     0,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,     0,     0,     0,     0,     0,     0,
     -60,   -60,   -60,   -60,     0,     0,     0,   -60,     0,   -60,
     -60,   -60,   -60,     0,     0,   -60,   -62,     0,   -60,     0,
     -62,   -62,   -62,   -62,     0,     0,     0,     0,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,     0,     0,     0,     0,
       0,     0,   -62,   -62,   -62,   -62,     0,     0,     0,   -62,
       0,   -62,   -62,   -62,   -62,     0,     0,   -62,   -52,     0,
     -62,     0,   -52,   -52,   -52,   -52,     0,     0,     0,     0,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,     0,     0,
       0,     0,     0,     0,   -52,   -52,   -52,   -52,     0,     0,
       0,   -52,     0,   -52,   -52,   -52,   -52,     0,     0,   -52,
     -46,     0,   -52,     0,   -46,   -46,   -46,   -46,     0,     0,
       0,     0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
       0,     0,     0,     0,     0,     0,   -46,   -46,   -46,   -46,
       0,     0,     0,   -46,     0,   -46,   -46,   -46,   -46,     0,
       0,   -46,   -13,     0,   -46,     0,   -13,   -13,   -13,   -13,
       0,     0,     0,     0,   -13,   -13,   -13,   -13,   -13,   -13,
     -13,   -13,     0,     0,     0,     0,     0,     0,   -13,   -13,
     -13,   -13,     0,     0,     0,   -13,     0,   -13,   -13,   -13,
     -13,     0,     0,   -13,    44,     0,   -13,     0,   250,    45,
      46,    47,     0,     0,     0,     0,    48,   244,   245,   246,
     247,    49,    50,    51,     0,     0,     0,     0,     0,     0,
      52,    53,    54,    55,     0,     0,     0,    56,     0,    57,
      58,    59,    60,     0,     0,    61,    44,     0,   454,     0,
     250,    45,    46,    47,     0,     0,     0,     0,    48,   244,
     245,   246,   247,    49,    50,    51,     0,     0,     0,     0,
       0,     0,    52,    53,    54,    55,     0,     0,     0,    56,
       0,    57,    58,    59,    60,     0,     0,    61,   -54,     0,
     462,     0,   -54,   -54,   -54,   -54,     0,     0,     0,     0,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,     0,     0,
       0,     0,     0,     0,   -54,   -54,   -54,   -54,     0,     0,
       0,   -54,     0,   -54,   -54,   -54,   -54,     0,     0,   -54,
     -53,     0,   -54,     0,   -53,   -53,   -53,   -53,     0,     0,
       0,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
       0,     0,     0,     0,     0,     0,   -53,   -53,   -53,   -53,
       0,     0,     0,   -53,     0,   -53,   -53,   -53,   -53,     0,
       0,   -53,    -9,     0,   -53,     0,    -9,    -9,    -9,    -9,
       0,     0,     0,     0,    -9,    -9,    -9,    -9,    -9,    -9,
      -9,    -9,     0,     0,     0,     0,     0,     0,    -9,    -9,
      -9,    -9,     0,     0,     0,    -9,     0,    -9,    -9,    -9,
      -9,     0,     0,    -9,   -25,     0,    -9,     0,   -25,   -25,
     -25,   -25,     0,     0,     0,     0,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,   -25,     0,     0,     0,     0,     0,     0,
     -25,   -25,   -25,   -25,     0,     0,     0,   -25,     0,   -25,
     -25,   -25,   -25,     0,     0,   -25,   -26,     0,   -25,     0,
     -26,   -26,   -26,   -26,     0,     0,     0,     0,   -26,   -26,
     -26,   -26,   -26,   -26,   -26,   -26,     0,     0,     0,     0,
       0,     0,   -26,   -26,   -26,   -26,     0,     0,     0,   -26,
       0,   -26,   -26,   -26,   -26,     0,     0,   -26,   -12,     0,
     -26,     0,   -12,   -12,   -12,   -12,     0,     0,     0,     0,
     -12,   -12,   -12,   -12,   -12,   -12,   -12,   -12,     0,     0,
       0,     0,     0,     0,   -12,   -12,   -12,   -12,     0,     0,
       0,   -12,     0,   -12,   -12,   -12,   -12,     0,     0,   -12,
     -47,     0,   -12,     0,   -47,   -47,   -47,   -47,     0,     0,
       0,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
       0,     0,     0,     0,     0,     0,   -47,   -47,   -47,   -47,
       0,     0,     0,   -47,     0,   -47,   -47,   -47,   -47,     0,
     348,   -47,     0,   -47,   250,    45,    46,    47,     0,     0,
       0,     0,    48,   244,   245,   246,   247,   349,   350,   351,
       0,     0,     0,     0,     0,     0,    52,    53,    54,    55,
       0,     0,     0,    56,     0,    57,    58,   352,   353,     0,
      44,    61,     0,   354,   250,    45,    46,    47,     0,     0,
       0,     0,    48,   244,   245,   246,   247,    49,    50,    51,
       0,     0,     0,     0,     0,     0,    52,    53,    54,    55,
       0,     0,     0,    56,     0,    57,    58,    59,    60,     0,
     -59,    61,     0,   367,   -59,   -59,   -59,   -59,     0,     0,
       0,     0,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
       0,     0,     0,     0,     0,     0,   -59,   -59,   -59,   -59,
       0,     0,     0,   -59,     0,   -59,   -59,   -59,   -59,     0,
     -61,   -59,     0,   -59,   -61,   -61,   -61,   -61,     0,     0,
       0,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
       0,     0,     0,     0,     0,     0,   -61,   -61,   -61,   -61,
       0,     0,     0,   -61,     0,   -61,   -61,   -61,   -61,     0,
     -51,   -61,     0,   -61,   -51,   -51,   -51,   -51,     0,     0,
       0,     0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
       0,     0,     0,     0,     0,     0,   -51,   -51,   -51,   -51,
       0,     0,     0,   -51,     0,   -51,   -51,   -51,   -51,     0,
     524,   -51,     0,   -51,   277,   278,   279,    47,     0,   534,
       0,     0,   280,   320,   321,   322,    47,     0,   605,     0,
       0,   323,   277,   278,   279,    47,     0,     0,     0,     0,
     280,   607,     0,   281,     0,   277,   278,   279,    47,     0,
     609,   282,   327,   280,   277,   278,   279,    47,     0,   624,
     328,   281,   280,   277,   278,   279,    47,     0,     0,   282,
       0,   280,   626,     0,   281,     0,   277,   278,   279,    47,
       0,   628,   282,   281,   280,   277,   278,   279,    47,     0,
     630,   282,   281,   280,   277,   278,   279,    47,     0,     0,
     282,     0,   280,   632,     0,   281,     0,   277,   278,   279,
      47,     0,   634,   282,   281,   280,   277,   278,   279,    47,
       0,     0,   282,   281,   280,     0,  -119,     0,     0,     0,
       0,   282,     0,  -119,  -119,     0,   281,     0,     0,     0,
       0,     0,     0,     0,   282,   281,  -119,  -119,  -119,  -119,
    -119,  -119,  -121,   282,     0,     0,  -119,  -119,  -119,  -121,
    -121,     0,     0,     0,     0,  -119,     0,     0,     0,     0,
       0,     0,  -121,  -121,  -121,  -121,  -121,  -121,   -91,     0,
       0,     0,  -121,  -121,  -121,   -91,   129,     0,     0,     0,
       0,  -121,     0,     0,     0,     0,     0,     0,   -91,   -91,
     -91,   -91,   -91,   -91,   -93,     0,     0,     0,   -91,   -91,
     -91,   -93,   -93,     0,     0,     0,     0,   -91,     0,     0,
       0,     0,     0,     0,   -93,   -93,   -93,   -93,   -93,   -93,
     -94,     0,     0,     0,   -93,   -93,   -93,   -94,   -94,     0,
       0,     0,     0,   -93,     0,     0,     0,     0,     0,     0,
     -94,   -94,   -94,   -94,   -94,   -94,  -102,     0,     0,     0,
     -94,   -94,   -94,  -102,  -102,     0,     0,     0,     0,   -94,
       0,     0,     0,     0,     0,     0,  -102,  -102,  -102,  -102,
    -102,  -102,   -95,     0,     0,     0,  -102,  -102,  -102,   -95,
     -95,     0,     0,     0,     0,  -102,     0,     0,     0,     0,
       0,     0,   -95,   -95,   -95,   -95,   -95,   -95,  -101,     0,
       0,     0,   -95,   -95,   -95,  -101,  -101,     0,     0,     0,
       0,   -95,     0,     0,     0,     0,     0,     0,  -101,  -101,
    -101,  -101,  -101,  -101,   -96,     0,     0,     0,  -101,  -101,
    -101,   -96,   -96,     0,     0,     0,     0,  -101,     0,     0,
       0,     0,     0,     0,   -96,   -96,   -96,   -96,   -96,   -96,
    -100,     0,     0,     0,   -96,   -96,   -96,  -100,  -100,     0,
       0,     0,     0,   -96,     0,     0,     0,     0,     0,     0,
    -100,  -100,  -100,  -100,  -100,  -100,  -104,     0,     0,     0,
    -100,  -100,  -100,  -104,  -104,     0,     0,     0,     0,  -100,
       0,     0,     0,     0,     0,     0,  -104,  -104,  -104,  -104,
    -104,  -104,  -103,     0,     0,     0,  -104,  -104,  -104,  -103,
    -103,     0,     0,     0,     0,  -104,     0,     0,     0,     0,
       0,     0,  -103,  -103,  -103,  -103,  -103,  -103,   -90,     0,
       0,     0,  -103,  -103,  -103,   -90,   129,     0,     0,     0,
       0,  -103,     0,     0,     0,     0,     0,     0,   -90,   -90,
     -90,   -90,   -90,   -90,   -92,     0,     0,     0,   -90,   -90,
     -90,   -92,   -92,     0,     0,     0,     0,   -90,     0,     0,
       0,     0,     0,     0,   -92,   -92,   -92,   -92,   -92,   -92,
     -98,     0,     0,     0,   -92,   -92,   -92,   -98,   -98,     0,
       0,     0,     0,   -92,     0,     0,     0,     0,     0,     0,
     -98,   -98,   -98,   -98,   -98,   -98,   -99,     0,     0,     0,
     -98,   -98,   -98,   -99,   -99,     0,     0,     0,     0,   -98,
       0,     0,     0,     0,     0,     0,   -99,   -99,   -99,   -99,
     -99,   -99,   -97,     0,     0,     0,   -99,   -99,   -99,   -97,
     -97,     0,     0,     0,     0,   -99,     0,     0,     0,     0,
       0,     0,   -97,   -97,   -97,   -97,   -97,   -97,  -116,     0,
       0,     0,   -97,   -97,   -97,  -116,  -116,     0,     0,     0,
       0,   -97,     0,     0,     0,     0,     0,     0,  -116,  -116,
    -116,  -116,  -116,  -116,   -86,     0,     0,     0,  -116,  -116,
    -116,   121,   122,   123,   124,   125,   126,  -116,     0,     0,
       0,   -87,   -87,   -87,   121,   122,   123,   124,   125,   126,
       0,  -116,  -116,   -87,   -86,   -86,   -86,     0,     0,     0,
       0,     0,     0,   -86,  -116,  -116,  -116,  -116,  -116,  -116,
       0,     0,     0,     0,  -116,  -116,  -116,  -101,  -101,     0,
       0,     0,     0,     0,  -116,  -116,  -116,     0,     0,     0,
    -101,  -101,  -101,  -101,  -101,  -101,     0,     0,     0,     0,
    -101,  -101,  -101,  -116,  -116,     0,     0,     0,     0,     0,
    -101,   432,  -101,     0,     0,     0,  -116,  -116,  -116,  -116,
    -116,  -116,     0,     0,     0,     0,  -116,  -116,  -116,  -101,
    -101,     0,     0,     0,     0,     0,     0,  -116,  -116,     0,
       0,     0,  -101,  -101,  -101,  -101,  -101,  -101,     0,     0,
       0,     0,  -101,  -101,  -101,  -120,  -120,     0,     0,     0,
       0,     0,     0,   384,  -101,     0,     0,     0,  -120,  -120,
    -120,  -120,  -120,  -120,     0,     0,     0,     0,  -120,  -120,
    -120,  -119,  -119,     0,     0,     0,     0,     0,  -120,     0,
    -120,     0,     0,     0,  -119,  -119,  -119,  -119,  -119,  -119,
       0,     0,     0,     0,  -119,  -119,  -119,  -121,  -121,     0,
       0,     0,     0,     0,  -119,     0,  -119,     0,     0,     0,
    -121,  -121,  -121,  -121,  -121,  -121,     0,     0,     0,     0,
    -121,  -121,  -121,   -91,   129,     0,     0,     0,     0,     0,
    -121,     0,  -121,     0,     0,     0,   -91,   -91,   -91,   -91,
     -91,   -91,     0,     0,     0,     0,   -91,   -91,   -91,   -93,
     -93,     0,     0,     0,     0,     0,   -91,     0,   -91,     0,
       0,     0,   -93,   -93,   -93,   -93,   -93,   -93,     0,     0,
       0,     0,   -93,   -93,   -93,   -94,   -94,     0,     0,     0,
       0,     0,   -93,     0,   -93,     0,     0,     0,   -94,   -94,
     -94,   -94,   -94,   -94,     0,     0,     0,     0,   -94,   -94,
     -94,  -102,  -102,     0,     0,     0,     0,     0,   -94,     0,
     -94,     0,     0,     0,  -102,  -102,  -102,  -102,  -102,  -102,
       0,     0,     0,     0,  -102,  -102,  -102,  -116,  -116,     0,
       0,     0,     0,     0,  -102,     0,  -102,     0,     0,     0,
    -116,  -116,  -116,  -116,  -116,  -116,     0,     0,     0,     0,
    -116,  -116,  -116,   -95,   -95,     0,     0,     0,     0,     0,
    -116,     0,  -116,     0,     0,     0,   -95,   -95,   -95,   -95,
     -95,   -95,     0,     0,     0,     0,   -95,   -95,   -95,  -101,
    -101,     0,     0,     0,     0,     0,   -95,     0,   -95,     0,
       0,     0,  -101,  -101,  -101,  -101,  -101,  -101,     0,     0,
       0,     0,  -101,  -101,  -101,   -96,   -96,     0,     0,     0,
       0,     0,  -101,     0,  -101,     0,     0,     0,   -96,   -96,
     -96,   -96,   -96,   -96,     0,     0,     0,     0,   -96,   -96,
     -96,  -100,  -100,     0,     0,     0,     0,     0,   -96,     0,
     -96,     0,     0,     0,  -100,  -100,  -100,  -100,  -100,  -100,
       0,     0,     0,     0,  -100,  -100,  -100,  -104,  -104,     0,
       0,     0,     0,     0,  -100,     0,  -100,     0,     0,     0,
    -104,  -104,  -104,  -104,  -104,  -104,     0,     0,     0,     0,
    -104,  -104,  -104,  -103,  -103,     0,     0,     0,     0,     0,
    -104,     0,  -104,     0,     0,     0,  -103,  -103,  -103,  -103,
    -103,  -103,     0,     0,     0,     0,  -103,  -103,  -103,   -90,
     129,     0,     0,     0,     0,     0,  -103,     0,  -103,     0,
       0,     0,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,
       0,     0,   -90,   -90,   -90,   -92,   -92,     0,     0,     0,
       0,     0,   -90,     0,   -90,     0,     0,     0,   -92,   -92,
     -92,   -92,   -92,   -92,     0,     0,     0,     0,   -92,   -92,
     -92,   -98,   -98,     0,     0,     0,     0,     0,   -92,     0,
     -92,     0,     0,     0,   -98,   -98,   -98,   -98,   -98,   -98,
       0,     0,     0,     0,   -98,   -98,   -98,   -99,   -99,     0,
       0,     0,     0,     0,   -98,     0,   -98,     0,     0,     0,
     -99,   -99,   -99,   -99,   -99,   -99,     0,     0,     0,     0,
     -99,   -99,   -99,   -97,   -97,     0,     0,     0,     0,     0,
     -99,     0,   -99,     0,     0,     0,   -97,   -97,   -97,   -97,
     -97,   -97,     0,     0,     0,     0,   -97,   -97,   -97,  -120,
    -120,     0,     0,     0,     0,     0,   -97,     0,   -97,     0,
       0,     0,  -120,  -120,  -120,  -120,  -120,  -120,     0,     0,
       0,     0,  -120,  -120,  -120,  -119,  -119,     0,     0,     0,
       0,     0,     0,     0,  -120,     0,     0,     0,  -119,  -119,
    -119,  -119,  -119,  -119,     0,     0,     0,     0,  -119,  -119,
    -119,  -121,  -121,     0,     0,     0,     0,     0,     0,     0,
    -119,     0,     0,     0,  -121,  -121,  -121,  -121,  -121,  -121,
       0,     0,     0,     0,  -121,  -121,  -121,   -91,   129,     0,
       0,     0,     0,     0,     0,     0,  -121,     0,     0,     0,
     -91,   -91,   -91,   -91,   -91,   -91,     0,     0,     0,     0,
     -91,   -91,   -91,   -93,   -93,     0,     0,     0,     0,     0,
       0,     0,   -91,     0,     0,     0,   -93,   -93,   -93,   -93,
     -93,   -93,     0,     0,     0,     0,   -93,   -93,   -93,   -94,
     -94,     0,     0,     0,     0,     0,     0,     0,   -93,     0,
       0,     0,   -94,   -94,   -94,   -94,   -94,   -94,     0,     0,
       0,     0,   -94,   -94,   -94,  -102,  -102,     0,     0,     0,
       0,     0,     0,     0,   -94,     0,     0,     0,  -102,  -102,
    -102,  -102,  -102,  -102,     0,     0,     0,     0,  -102,  -102,
    -102,   275,     0,     0,     0,     0,     0,     0,     0,     0,
    -102,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,   -89,
       0,     0,     0,     0,   -89,   -89,   -89,  -116,  -116,     0,
       0,     0,     0,     0,   -89,     0,   -89,     0,     0,     0,
    -116,  -116,  -116,  -116,  -116,  -116,     0,     0,     0,     0,
    -116,  -116,  -116,   -95,   -95,     0,     0,     0,     0,     0,
       0,     0,  -116,     0,     0,     0,   -95,   -95,   -95,   -95,
     -95,   -95,     0,     0,     0,     0,   -95,   -95,   -95,  -101,
    -101,     0,     0,     0,     0,     0,     0,     0,   -95,     0,
       0,     0,  -101,  -101,  -101,  -101,  -101,  -101,     0,     0,
       0,     0,  -101,  -101,  -101,   -96,   -96,     0,     0,     0,
       0,     0,     0,     0,  -101,     0,     0,     0,   -96,   -96,
     -96,   -96,   -96,   -96,     0,     0,     0,     0,   -96,   -96,
     -96,  -100,  -100,     0,     0,     0,     0,     0,     0,     0,
     -96,     0,     0,     0,  -100,  -100,  -100,  -100,  -100,  -100,
       0,     0,     0,     0,  -100,  -100,  -100,  -104,  -104,     0,
       0,     0,     0,     0,     0,     0,  -100,     0,     0,     0,
    -104,  -104,  -104,  -104,  -104,  -104,     0,     0,     0,     0,
    -104,  -104,  -104,  -103,  -103,     0,     0,     0,     0,     0,
       0,     0,  -104,     0,     0,     0,  -103,  -103,  -103,  -103,
    -103,  -103,     0,     0,     0,     0,  -103,  -103,  -103,   -90,
     129,     0,     0,     0,     0,     0,     0,     0,  -103,     0,
       0,     0,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,
       0,     0,   -90,   -90,   -90,   -92,   -92,     0,     0,     0,
       0,     0,     0,     0,   -90,     0,     0,     0,   -92,   -92,
     -92,   -92,   -92,   -92,     0,     0,     0,     0,   -92,   -92,
     -92,   -98,   -98,     0,     0,     0,     0,     0,     0,     0,
     -92,     0,     0,     0,   -98,   -98,   -98,   -98,   -98,   -98,
       0,     0,     0,     0,   -98,   -98,   -98,   275,     0,     0,
       0,     0,     0,     0,     0,     0,   -98,     0,     0,     0,
     -88,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,     0,
     -88,   -88,   -88,   -99,   -99,     0,     0,     0,     0,     0,
     -88,     0,   -88,     0,     0,     0,   -99,   -99,   -99,   -99,
     -99,   -99,     0,     0,     0,     0,   -99,   -99,   -99,   -97,
     -97,     0,     0,     0,     0,     0,     0,     0,   -99,     0,
       0,     0,   -97,   -97,   -97,   -97,   -97,   -97,     0,     0,
       0,     0,   -97,   -97,   -97,   275,     0,     0,     0,     0,
       0,     0,     0,     0,   -97,     0,     0,     0,   -89,   -89,
     -89,   -89,   -89,   -89,     0,     0,     0,     0,   -89,   -89,
     -89,   275,     0,     0,     0,     0,     0,     0,     0,     0,
     -89,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,
       0,     0,     0,     0,   -88,   -88,   -88,  -116,  -116,     0,
       0,     0,     0,     0,     0,     0,   -88,     0,     0,     0,
    -116,  -116,  -116,  -116,  -116,  -116,     0,     0,     0,     0,
    -116,  -116,  -116,  -101,  -101,     0,     0,     0,     0,  -116,
       0,  -116,     0,     0,     0,     0,  -101,  -101,  -101,  -101,
    -101,  -101,     0,     0,     0,     0,  -101,  -101,  -101,  -116,
    -116,     0,     0,     0,     0,  -101,     0,   416,     0,     0,
       0,     0,  -116,  -116,  -116,  -116,  -116,  -116,     0,     0,
       0,     0,  -116,  -116,  -116,  -101,  -101,     0,     0,     0,
       0,     0,     0,  -116,     0,     0,     0,     0,  -101,  -101,
    -101,  -101,  -101,  -101,     0,     0,     0,     0,  -101,  -101,
    -101,  -120,  -120,     0,     0,     0,     0,     0,     0,   395,
       0,     0,     0,     0,  -120,  -120,  -120,  -120,  -120,  -120,
       0,  -119,  -119,     0,  -120,  -120,  -120,     0,     0,     0,
       0,     0,     0,  -120,  -119,  -119,  -119,  -119,  -119,  -119,
       0,  -121,  -121,     0,  -119,  -119,  -119,     0,     0,     0,
       0,     0,     0,  -119,  -121,  -121,  -121,  -121,  -121,  -121,
       0,   -91,   129,     0,  -121,  -121,  -121,     0,     0,     0,
       0,     0,     0,  -121,   -91,   -91,   -91,   -91,   -91,   -91,
       0,   -93,   -93,     0,   -91,   -91,   -91,     0,     0,     0,
       0,     0,     0,   -91,   -93,   -93,   -93,   -93,   -93,   -93,
       0,   -94,   -94,     0,   -93,   -93,   -93,     0,     0,     0,
       0,     0,     0,   -93,   -94,   -94,   -94,   -94,   -94,   -94,
       0,  -102,  -102,     0,   -94,   -94,   -94,     0,     0,     0,
       0,     0,     0,   -94,  -102,  -102,  -102,  -102,  -102,  -102,
       0,  -116,  -116,     0,  -102,  -102,  -102,     0,     0,     0,
       0,     0,     0,  -102,  -116,  -116,  -116,  -116,  -116,  -116,
       0,   -95,   -95,     0,  -116,  -116,  -116,     0,     0,     0,
       0,     0,     0,  -116,   -95,   -95,   -95,   -95,   -95,   -95,
       0,  -101,  -101,     0,   -95,   -95,   -95,     0,     0,     0,
       0,     0,     0,   -95,  -101,  -101,  -101,  -101,  -101,  -101,
       0,   -96,   -96,     0,  -101,  -101,  -101,     0,     0,     0,
       0,     0,     0,  -101,   -96,   -96,   -96,   -96,   -96,   -96,
       0,  -100,  -100,     0,   -96,   -96,   -96,     0,     0,     0,
       0,     0,     0,   -96,  -100,  -100,  -100,  -100,  -100,  -100,
       0,  -104,  -104,     0,  -100,  -100,  -100,     0,     0,     0,
       0,     0,     0,  -100,  -104,  -104,  -104,  -104,  -104,  -104,
       0,  -103,  -103,     0,  -104,  -104,  -104,     0,     0,     0,
       0,     0,     0,  -104,  -103,  -103,  -103,  -103,  -103,  -103,
       0,   -90,   129,     0,  -103,  -103,  -103,     0,     0,     0,
       0,     0,     0,  -103,   -90,   -90,   -90,   -90,   -90,   -90,
       0,   -92,   -92,     0,   -90,   -90,   -90,     0,     0,     0,
       0,     0,     0,   -90,   -92,   -92,   -92,   -92,   -92,   -92,
       0,   -98,   -98,     0,   -92,   -92,   -92,     0,     0,     0,
       0,     0,     0,   -92,   -98,   -98,   -98,   -98,   -98,   -98,
       0,   -99,   -99,     0,   -98,   -98,   -98,     0,     0,     0,
       0,     0,     0,   -98,   -99,   -99,   -99,   -99,   -99,   -99,
       0,   -97,   -97,     0,   -99,   -99,   -99,     0,     0,     0,
       0,     0,     0,   -99,   -97,   -97,   -97,   -97,   -97,   -97,
       0,   275,     0,     0,   -97,   -97,   -97,     0,     0,     0,
       0,     0,     0,   -97,   -88,   -88,   -88,   -88,   -88,   -88,
       0,  -120,  -120,     0,   -88,   -88,   -88,     0,     0,     0,
       0,     0,     0,   -88,  -120,  -120,  -120,  -120,  -120,  -120,
    -119,  -119,     0,     0,  -120,  -120,  -120,     0,     0,     0,
       0,     0,     0,  -119,  -119,  -119,  -119,  -119,  -119,  -121,
    -121,     0,     0,  -119,  -119,  -119,     0,     0,     0,     0,
       0,     0,  -121,  -121,  -121,  -121,  -121,  -121,   -91,   129,
       0,     0,  -121,  -121,  -121,     0,     0,     0,     0,     0,
       0,   -91,   -91,   -91,   -91,   -91,   -91,   -93,   -93,     0,
       0,   -91,   -91,   -91,     0,     0,     0,     0,     0,     0,
     -93,   -93,   -93,   -93,   -93,   -93,   -94,   -94,     0,     0,
     -93,   -93,   -93,     0,     0,     0,     0,     0,     0,   -94,
     -94,   -94,   -94,   -94,   -94,  -102,  -102,     0,     0,   -94,
     -94,   -94,     0,     0,     0,     0,     0,     0,  -102,  -102,
    -102,  -102,  -102,  -102,  -116,  -116,     0,     0,  -102,  -102,
    -102,     0,     0,     0,     0,     0,     0,  -116,  -116,  -116,
    -116,  -116,  -116,   -95,   -95,     0,     0,  -116,  -116,  -116,
       0,     0,     0,     0,     0,     0,   -95,   -95,   -95,   -95,
     -95,   -95,  -101,  -101,     0,     0,   -95,   -95,   -95,     0,
       0,     0,     0,     0,     0,  -101,  -101,  -101,  -101,  -101,
    -101,   -96,   -96,     0,     0,  -101,  -101,  -101,     0,     0,
       0,     0,     0,     0,   -96,   -96,   -96,   -96,   -96,   -96,
    -100,  -100,     0,     0,   -96,   -96,   -96,     0,     0,     0,
       0,     0,     0,  -100,  -100,  -100,  -100,  -100,  -100,  -104,
    -104,     0,     0,  -100,  -100,  -100,     0,     0,     0,     0,
       0,     0,  -104,  -104,  -104,  -104,  -104,  -104,  -103,  -103,
       0,     0,  -104,  -104,  -104,     0,     0,     0,     0,     0,
       0,  -103,  -103,  -103,  -103,  -103,  -103,   -90,   129,     0,
       0,  -103,  -103,  -103,     0,     0,     0,     0,     0,     0,
     -90,   -90,   -90,   -90,   -90,   -90,   -92,   -92,     0,     0,
     -90,   -90,   -90,     0,     0,     0,     0,     0,     0,   -92,
     -92,   -92,   -92,   -92,   -92,   -98,   -98,     0,     0,   -92,
     -92,   -92,     0,     0,     0,     0,     0,     0,   -98,   -98,
     -98,   -98,   -98,   -98,   -99,   -99,     0,     0,   -98,   -98,
     -98,     0,     0,     0,     0,     0,     0,   -99,   -99,   -99,
     -99,   -99,   -99,   -97,   -97,     0,     0,   -99,   -99,   -99,
       0,     0,     0,     0,     0,     0,   -97,   -97,   -97,   -97,
     -97,   -97,   275,     0,     0,     0,   -97,   -97,   -97,     0,
       0,     0,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,
     -89,   275,     0,     0,     0,   -89,   -89,   -89,     0,     0,
       0,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,
       0,     0,     0,     0,   -88,   -88,   -88,   121,   122,   123,
     124,   125,   126,     0,     0,     0,     0,   -87,   -87,   -87,
     121,   122,   123,   124,   125,   126,     0,   -87,     0,   -87,
     -86,   -86,   -86,   121,   122,   123,   124,   125,   126,     0,
     -86,     0,   -86,   -86,   -86,   -86,   121,   122,   123,   124,
     125,   126,     0,     0,     0,   -86,   -86,   -86,   -86,   121,
     122,   123,   124,   125,   126,   -86,     0,     0,     0,   -87,
     -87,   -87,   121,   122,   123,   124,   125,   126,     0,     0,
       0,     0,   -86,   -86,   -86
};

static const yytype_int16 yycheck[] =
{
       0,    41,   139,   134,     0,    65,   341,     7,   201,    29,
      27,     7,   543,     1,    34,     1,   204,     5,    38,     5,
      31,    32,   204,    43,    24,    31,    32,    27,    31,    32,
      33,    11,    43,     1,    40,     1,     0,    36,     1,     1,
      43,    42,     1,     1,     1,    25,     5,     6,     7,     8,
       1,    31,   267,    40,    13,    42,    36,    14,    15,    16,
      17,    41,   269,    31,    32,    33,    65,   204,    27,   284,
      29,    30,    40,    90,    40,    34,    56,    40,    40,   286,
      60,    61,    40,    42,    43,    65,    43,     1,     1,    40,
      90,     1,   204,     1,   231,     0,     1,   312,     1,    40,
      14,    15,    16,    17,     1,     5,    86,   314,    88,    14,
      15,    16,    17,     5,     1,    95,   204,    97,   333,    99,
      12,    31,    32,    33,   104,    40,   657,    40,   335,    43,
      40,    43,    40,   113,   204,    40,     5,    40,   118,   119,
     120,    43,     1,    40,    31,    32,     5,   127,   128,     1,
     130,   131,   132,    40,    31,    32,    33,     1,   204,   139,
       4,     5,     6,     7,     8,    44,    43,     1,    43,    13,
      14,    15,    16,    17,    18,    19,    20,     5,   204,    31,
      32,     1,     5,    27,    28,    29,    30,    40,    40,    12,
      34,   384,    36,    37,    38,    39,     1,    61,    42,    40,
       5,    45,   395,   183,   204,   225,    40,   227,   204,     1,
      43,    31,    32,    40,    41,   235,   236,   237,    31,    32,
      40,   201,   242,   416,   204,   205,   225,   562,   227,    45,
      43,    95,    31,    32,    33,    99,   235,   236,   237,   432,
      31,    32,    41,   242,    43,   225,     5,   227,    40,   113,
      41,   231,    43,    12,   118,   235,   236,   237,    42,     1,
     475,    42,   242,     5,     6,     7,     8,   131,   132,   484,
     477,    13,    42,     5,     1,    42,    41,   204,    43,   486,
      12,   261,   262,     1,     1,    31,    32,     5,     6,     7,
       8,    42,    34,   273,   354,    13,    40,    43,   513,     5,
      42,   281,   282,     1,    31,    32,    12,   367,   515,    27,
     290,    29,    30,    40,    31,    32,    34,    42,   182,   183,
      42,   536,     1,    40,    42,    43,   306,   307,    31,    32,
     461,   538,     1,    31,    32,    42,    43,   201,   318,     1,
      43,   205,    40,     5,     6,     7,     8,   327,   328,    40,
      41,    13,    31,    32,    42,   354,     5,     6,     7,   339,
      42,    40,    31,    32,    13,   345,     1,   225,   367,   227,
      42,    40,    34,   353,   354,    42,    43,   235,   236,   237,
      42,    42,    43,     1,   242,    42,   366,   367,    40,    60,
      61,     1,    40,    42,   434,     5,    31,    32,   262,   379,
     380,   381,   382,   383,   384,    40,    31,    32,     5,     6,
       7,     1,   549,    31,    32,   395,    13,    27,   282,    29,
      30,    40,    40,    42,    95,     5,    41,     1,    43,    43,
     410,   411,   412,   413,   414,   415,   416,    27,    43,    29,
      30,    45,   113,   307,    43,    42,   426,   427,   428,   429,
     430,   431,   432,    41,   434,    43,   644,    31,    32,    43,
     131,   132,   644,    41,   328,    43,    40,   447,     1,   449,
     450,    31,     5,     6,     7,     8,   456,    31,    32,    33,
      13,   345,    31,    32,   464,   673,    40,   675,    31,    32,
      33,   673,    41,   675,    43,     1,   684,   685,    41,   687,
      43,    34,   684,   685,   692,   687,    40,   644,    42,    42,
     692,     0,     1,     1,     5,     6,     7,     5,    42,    43,
     384,    27,    13,    29,    30,    14,    15,    16,    17,    36,
     201,   395,   644,   204,   205,     5,   673,     5,   675,    27,
      43,    29,    30,   680,    42,    43,   410,   684,   685,    56,
     687,    42,   416,    60,    61,   692,   644,    27,    65,    29,
      30,   673,   426,   675,    42,    43,    31,    32,   432,   549,
      41,    42,   684,   685,   644,   687,    41,    31,    43,    86,
     692,    43,   622,   447,    40,   673,    42,   675,    95,    40,
      41,   262,   456,     5,     6,     7,   684,   685,   644,   687,
     464,    13,    43,   673,   692,   675,   113,    43,     5,     6,
       7,   282,   119,   120,   684,   685,    13,   687,   644,    43,
     127,   128,   692,   130,   131,   132,    41,   673,    43,   675,
      42,    42,     5,     6,     7,   615,   307,    43,   684,   685,
      13,   687,   622,    43,   644,    42,   692,   673,   644,   675,
      43,    14,    15,    16,    17,    31,    32,   328,   684,   685,
      43,   687,    31,    32,   644,   645,   692,    43,    43,    42,
      42,    43,    41,   673,    43,   675,    41,   673,    43,   675,
      43,    41,   353,    43,   684,   685,    40,   687,   684,   685,
      43,   687,   692,   673,   201,   675,   692,   204,   205,     1,
     680,     5,    31,    32,   684,   685,    41,   687,    43,     5,
       1,    40,   692,   384,     5,    31,    32,   644,   225,    41,
     227,    43,    40,    27,   395,    29,    30,    43,   235,   236,
     237,    27,    35,    29,    30,   242,    27,     1,    29,    30,
      40,     5,     6,     7,     8,   416,   673,     5,   675,    13,
     614,   615,    31,    32,   261,   262,    40,   684,   685,    40,
     687,   432,    41,    40,    43,   692,   273,    42,    43,    27,
      34,    29,    30,    40,   281,   282,   447,    40,    42,    31,
      32,   645,     1,   290,    40,   456,   644,     1,    41,    41,
      43,    43,    40,   464,    40,    14,    15,    16,    17,   306,
     307,    43,     1,    43,    31,    32,     5,     6,     7,     8,
      43,   318,    42,    43,    13,   673,    43,   675,    42,    43,
     327,   328,     0,     1,    31,    32,   684,   685,    27,   687,
      29,    30,   339,    40,   692,    34,    14,    15,    16,    17,
      31,    32,    43,    42,    43,    43,   353,   354,    43,     1,
      41,    43,    43,     5,     6,     7,     8,    40,     1,     1,
     367,    13,     5,     6,     7,     8,    31,    32,    43,    36,
      13,     5,   379,   380,   381,   382,   383,   384,    43,     5,
      31,    32,    34,     5,    27,     5,    29,    30,   395,    42,
      42,    34,    43,    60,    61,    42,     0,     1,    65,    42,
      43,     0,     1,    42,   411,   412,   413,   414,   415,   416,
      14,    15,    16,    17,    81,    14,    15,    16,    17,    43,
     427,   428,   429,   430,   431,   432,     1,    43,    95,    31,
       5,     6,     7,     8,    43,    31,    32,    42,    13,    42,
     447,    42,    40,    41,    42,    41,   113,    43,    42,   456,
      31,    32,   119,   120,     0,     1,    42,   464,    42,    34,
     127,   128,    43,   130,   131,   132,    42,    42,    14,    15,
      16,    17,    40,   644,   645,    42,     0,     1,    40,    41,
      42,    42,     1,    40,    41,     4,     5,     6,     7,     8,
      14,    15,    16,    17,    13,    14,    15,    16,    17,    18,
      19,    20,   673,   170,   675,    41,    42,    43,    27,    28,
      29,    30,    42,   684,   685,    34,   687,    36,    37,    38,
      39,   692,    40,    42,     1,    35,    45,    43,     5,     6,
       7,     8,     0,     1,   201,    43,    13,   204,   205,    31,
      32,    31,    32,    33,    31,    32,    14,    15,    16,    17,
      27,    43,    29,    30,    41,    40,    43,    34,   225,    42,
     227,    31,    32,    33,    42,    42,    43,     1,   235,   236,
     237,     5,     6,     7,     8,   242,     1,     0,     1,    13,
       5,     6,     7,     8,    42,    10,    11,    42,    13,    31,
      32,    14,    15,    16,    17,   262,     0,     1,    40,    42,
      34,   268,    27,    40,    29,    30,    42,    43,    42,    34,
      14,    15,    16,    17,    35,   282,     1,    42,   285,     4,
       5,     6,     7,     8,    31,    32,    42,    43,    13,    14,
      15,    16,    17,    18,    19,    20,    43,   644,   645,    42,
     307,    43,    27,    28,    29,    30,   313,    31,    32,    34,
      43,    36,    37,    38,    39,    42,    43,    42,     1,    43,
      45,   328,     5,     6,     7,     8,   673,   334,   675,    43,
      13,    21,    22,    23,    24,    25,    26,   684,   685,    43,
     687,    31,    32,    33,    43,   692,   353,   354,    42,     1,
      40,    34,    45,     5,     6,     7,     8,    42,     1,    42,
     367,    13,     5,     6,     7,     8,    42,    10,    11,    36,
      13,    45,   379,   380,   381,   382,   383,   384,    42,    43,
      31,    32,    34,    42,    27,    43,    29,    30,   395,    56,
      42,    34,    43,    60,    61,    41,    42,    43,    65,    42,
       0,     1,    42,    43,   411,   412,   413,   414,   415,   416,
      43,     1,    42,    43,    14,    15,    16,    17,     8,    86,
     427,   428,   429,   430,   431,   432,    31,    32,    95,    42,
      43,    21,    22,    23,    24,    25,    26,    43,    43,    42,
     447,    31,    32,    33,    31,    32,   113,    31,    32,   456,
      40,    42,   119,   120,    41,    43,    43,   464,    43,    43,
     127,   128,    42,   130,   131,   132,    42,     1,    42,   476,
       4,     5,     6,     7,     8,    31,    32,    42,   485,    13,
      14,    15,    16,    17,    18,    19,    20,    43,    42,    31,
      32,    31,     1,    27,    28,    29,    30,    42,    43,     8,
      34,    43,    36,    37,    38,    39,    31,   514,    42,    31,
      32,    45,    21,    22,    23,    24,    25,    26,     1,    41,
       1,    43,    31,    32,    33,    42,    43,     8,     9,    43,
     537,    40,    42,    43,   201,    31,    32,   204,   205,    43,
      21,    22,    23,    24,    25,    26,    43,    43,    43,     8,
      31,    32,    33,    43,    35,    41,    42,    43,   225,    40,
     227,    42,    21,    22,    23,    24,    25,    26,   235,   236,
     237,    40,    31,    32,    33,   242,    31,    32,    33,    42,
      43,    40,    42,    43,     1,    40,    43,     4,     5,     6,
       7,     8,    31,    32,   261,   262,    13,    14,    15,    16,
      17,    18,    19,    20,    43,    43,   273,    31,    32,    43,
      27,    28,    29,    30,    43,   282,    40,    34,    43,    36,
      37,    38,    39,     1,    43,    42,    31,    32,    45,    43,
       8,     9,    31,    32,    40,    40,    40,   644,   645,   306,
     307,    40,    40,    21,    22,    23,    24,    25,    26,    42,
      43,   318,    40,    31,    32,    33,    40,    35,    31,    32,
     327,   328,    40,    40,    42,    40,   673,    43,   675,     1,
      43,    40,   339,     5,     6,     7,     8,   684,   685,    40,
     687,    13,    31,    32,    40,   692,   353,   354,    40,     0,
       1,     1,    31,    32,    43,    27,    40,    29,    30,    40,
     367,    40,    34,    14,    15,    16,    17,    40,    40,    36,
      42,    40,   379,   380,   381,   382,   383,   384,    41,    42,
      43,    42,    43,    31,    32,     1,     0,     1,   395,     5,
       6,     7,     8,    60,    61,    43,    43,    13,    65,    43,
      14,    15,    16,    17,   411,   412,   413,   414,   415,   416,
      43,    27,     1,    29,    30,    41,    42,    43,    34,    43,
     427,   428,   429,   430,   431,   432,    42,    40,    95,    31,
      32,    43,    21,    22,    23,    24,    25,    26,    31,    32,
     447,    43,    31,    32,    33,     7,   113,    31,    32,   456,
      43,    40,   119,   120,   448,    31,    32,   464,   612,    43,
     127,   128,   644,   130,   131,   132,     1,    43,   679,     4,
       5,     6,     7,     8,     0,     1,    42,    43,    13,    14,
      15,    16,    17,    18,    19,    20,    31,    32,    14,    15,
      16,    17,    27,    28,    29,    30,    42,    43,    43,    34,
     676,    36,    37,    38,    39,    42,    43,    42,   677,     1,
      45,     0,     1,     5,     6,     7,     8,    31,    32,    31,
      32,    13,   456,    31,    32,    14,    15,    16,    17,    43,
      36,    43,    31,    32,   201,    43,    -1,   204,   205,    42,
      43,     1,    34,   456,    43,    31,    32,    -1,     8,     9,
      42,    42,    43,    -1,    60,    61,    -1,    43,   225,    65,
     227,    21,    22,    23,    24,    25,    26,    -1,   235,   236,
     237,    31,    32,    33,    -1,   242,    31,    32,     1,    -1,
      40,    -1,    42,    42,    43,     8,     9,    -1,    43,    95,
      42,    43,    31,    32,    -1,   262,    31,    32,    21,    22,
      23,    24,    25,    26,    43,    40,    -1,   113,    31,    32,
      33,    31,    32,   119,   120,   282,    -1,    40,    -1,    42,
      40,   127,   128,     1,    -1,   131,   132,     5,     6,     7,
       8,    42,    43,    31,    32,    13,    -1,   644,   645,    -1,
     307,     1,    40,    42,    43,     5,     6,     7,     8,    27,
      -1,    29,    30,    13,    -1,    -1,    34,    -1,    -1,    -1,
      -1,   328,    40,    -1,    42,    -1,   673,    27,   675,    29,
      30,    -1,    -1,    -1,    34,    -1,    -1,   684,   685,    -1,
     687,    -1,    42,    -1,    -1,   692,   353,   354,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   201,    -1,    -1,   204,   205,
     367,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   379,   380,   381,   382,   383,   384,    -1,   225,
      -1,   227,    -1,    -1,    -1,    -1,    -1,   394,   395,   235,
     236,   237,    -1,    -1,    -1,    -1,   242,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   411,   412,   413,   414,   415,   416,
      -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,    -1,
     427,   428,   429,   430,   431,   432,    -1,     1,    -1,    -1,
      -1,     5,     6,     7,     8,    -1,   282,    -1,    -1,    13,
     447,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   456,
      -1,    -1,    -1,    27,    -1,    29,    30,   464,    -1,     1,
      34,   307,     4,     5,     6,     7,     8,    -1,    42,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,   328,    -1,    -1,    27,    28,    29,    30,    -1,
      -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,    -1,
      42,    -1,    -1,    45,    -1,    -1,    -1,   353,   354,    -1,
      -1,     1,    -1,    -1,    -1,     5,     6,     7,     8,    -1,
       1,   367,    -1,    13,     5,     6,     7,     8,    -1,    -1,
      36,    -1,    13,   379,   380,   381,   382,    27,   384,    29,
      30,    -1,    -1,    -1,    34,    -1,    -1,   393,    -1,   395,
      -1,    -1,    42,    34,    60,    61,    -1,    -1,    -1,    65,
      -1,    42,    -1,    -1,    -1,   411,   412,   413,   414,    -1,
     416,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   427,   428,   429,   430,    -1,   432,    -1,    -1,    95,
      -1,     1,    -1,    -1,    -1,     5,     6,     7,     8,    -1,
      -1,   447,    -1,    13,    -1,    -1,    -1,   113,    -1,    -1,
     456,    -1,    -1,   119,   120,    -1,    -1,    36,   464,    -1,
      -1,   127,    -1,     1,    34,   131,   132,     5,     6,     7,
       8,    -1,    42,    -1,    -1,    13,    -1,   644,   645,    -1,
      -1,    60,    61,    -1,    -1,    -1,    65,    -1,    -1,    27,
      -1,    29,    30,    -1,    -1,     1,    34,    -1,    -1,     5,
       6,     7,     8,    -1,    42,    -1,   673,    13,   675,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,   684,   685,    -1,
     687,    27,    -1,    29,    30,   692,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,   113,   201,    42,    -1,   204,   205,
     119,   120,     1,    -1,    -1,    -1,     5,     6,     7,     8,
      -1,    -1,   131,   132,    13,    -1,    -1,    -1,    -1,   225,
      -1,   227,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,
     236,   237,    -1,    -1,     1,    34,   242,     4,     5,     6,
       7,     8,    -1,    42,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,   262,    -1,    -1,    -1,
      27,    28,    29,    30,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    39,    -1,    -1,    42,   282,    -1,    45,    -1,
      -1,    -1,   201,    -1,    -1,   204,   205,    -1,    -1,     1,
      -1,    -1,    -1,    -1,    -1,    -1,     8,     9,   644,   645,
      -1,   307,    -1,    -1,    -1,    -1,   225,    -1,   227,    21,
      22,    23,    24,    25,    26,    -1,   235,   236,   237,    31,
      32,    33,   328,   242,    -1,    -1,    -1,   673,    40,   675,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   684,   685,
      -1,   687,    36,   262,    -1,    -1,   692,   353,   354,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   367,    -1,   282,    -1,    -1,    60,    61,    -1,    -1,
      -1,    65,    -1,   379,   380,   381,    -1,    -1,   384,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   392,     1,   307,   395,
      -1,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,
      -1,    95,    -1,    -1,    -1,   411,   412,   413,    -1,   328,
     416,    -1,    -1,    27,    -1,    29,    30,    -1,    -1,   113,
      34,   427,   428,   429,    -1,   119,   432,    -1,    42,    -1,
      -1,    -1,    -1,    -1,   353,   354,    -1,   131,   132,    -1,
      -1,   447,    -1,    -1,    -1,    -1,    -1,    -1,   367,    -1,
     456,    -1,    -1,    -1,    -1,    -1,    -1,    36,   464,    -1,
     379,   380,     1,    -1,    -1,   384,     5,     6,     7,     8,
      -1,    -1,   391,     1,    13,    -1,   395,     5,     6,     7,
       8,    60,    61,    -1,    -1,    13,    65,    -1,    27,    -1,
      29,    30,   411,   412,    -1,    34,    -1,   416,    -1,    27,
      -1,    29,    30,    42,    -1,    -1,    34,   201,   427,   428,
     204,   205,    -1,   432,    42,    -1,    95,    -1,     1,    -1,
      -1,    -1,     5,     6,     7,     8,    -1,    -1,   447,    -1,
      13,   225,    -1,   227,   113,    -1,    -1,   456,    -1,    -1,
      -1,   235,   236,   237,    27,   464,    29,    30,   242,    -1,
       1,    34,   131,   132,     5,     6,     7,     8,    -1,    42,
      61,    -1,    13,    -1,    -1,     1,    -1,    -1,   262,     5,
       6,     7,     8,    -1,     1,    -1,    -1,    13,     5,     6,
       7,     8,    -1,    34,    -1,    -1,    13,    -1,   282,    -1,
      -1,    42,    -1,    -1,    95,    -1,    -1,    98,    34,   100,
     101,    -1,    -1,    -1,     1,    -1,    42,    34,     5,     6,
       7,     8,   113,   307,    -1,    42,    13,    -1,    -1,    -1,
      -1,    -1,   201,    -1,    -1,   204,   205,    -1,    -1,    -1,
     131,   132,    -1,    -1,   328,    -1,    -1,    34,   644,   645,
      -1,    -1,    -1,    -1,    -1,    42,   225,    -1,   227,    -1,
      -1,    -1,   346,    -1,    -1,    -1,   235,   236,   237,   353,
     354,    -1,    -1,   242,    -1,    -1,    -1,   673,    -1,   675,
      -1,    -1,    -1,   367,    -1,    -1,    -1,    -1,   684,   685,
      -1,   687,    -1,   262,    -1,   379,   692,    -1,    -1,    -1,
     384,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     201,   395,     1,   282,   205,    -1,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    -1,    -1,   411,    -1,    -1,
      -1,    -1,   416,    -1,    -1,   644,   645,    -1,   307,    -1,
      -1,    -1,    -1,   427,    -1,    34,    -1,    -1,   432,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,   328,
      -1,    -1,    -1,   447,   673,    -1,   675,    -1,    -1,    -1,
      -1,   262,   456,    -1,    -1,   684,   685,    -1,   687,    -1,
     464,    -1,    -1,   692,   353,   354,    -1,    -1,    -1,    -1,
      -1,   282,    -1,    -1,    -1,     1,    -1,    -1,   367,     5,
       6,     7,     8,    -1,    -1,     1,    -1,    13,     4,     5,
       6,     7,     8,    -1,    -1,   384,   307,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,   395,    -1,    34,    -1,
      -1,    27,    28,    29,    30,    -1,    42,   328,    34,    -1,
      36,    37,    38,    39,    -1,    -1,    42,   416,    -1,    45,
       1,    -1,    -1,    -1,     5,     6,     7,     8,    -1,    -1,
      -1,     1,    13,   432,    -1,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,   447,    -1,
     371,   372,   373,    34,    -1,    -1,    -1,   456,    -1,    -1,
      -1,    42,    -1,   384,    34,   464,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,   395,    -1,    -1,   398,   399,   400,
       1,   402,   403,   404,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    -1,    -1,   416,     1,   418,   419,   420,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    -1,
      -1,   432,     1,    34,    -1,    -1,     5,     6,     7,     8,
      -1,    42,    -1,    -1,    13,    -1,   447,    -1,    -1,    34,
     644,   645,    -1,    -1,     1,   456,    -1,    42,     5,     6,
       7,     8,    -1,   464,     1,    34,    13,    -1,     5,     6,
       7,     8,    -1,    42,    -1,    -1,    13,    -1,    -1,   673,
      -1,   675,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,
     684,   685,    -1,   687,    -1,    42,     1,    34,   692,     4,
       5,     6,     7,     8,    -1,    42,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    -1,    -1,    -1,    34,
      -1,    36,    37,    38,    39,    -1,    -1,    42,    -1,    -1,
      45,    -1,     1,   544,   545,   546,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,   644,   645,    -1,    27,    28,
      29,    30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,   588,   589,   590,
      -1,    -1,    -1,    -1,   673,    -1,   675,    -1,   599,   600,
     601,    -1,    -1,    -1,    -1,   684,   685,    -1,   687,    -1,
      -1,    -1,     1,   692,    -1,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    -1,    -1,   645,    34,    -1,    36,    37,    38,
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
       1,    42,    -1,    44,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,
       1,    42,    -1,    44,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,
       1,    42,    -1,    44,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,
       1,    42,    -1,    44,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,
       1,    42,    -1,    44,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,    -1,
       1,    42,    -1,    44,     5,     6,     7,     8,    -1,     1,
      -1,    -1,    13,     5,     6,     7,     8,    -1,     1,    -1,
      -1,    13,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,     1,    -1,    34,    -1,     5,     6,     7,     8,    -1,
       1,    42,    34,    13,     5,     6,     7,     8,    -1,     1,
      42,    34,    13,     5,     6,     7,     8,    -1,    -1,    42,
      -1,    13,     1,    -1,    34,    -1,     5,     6,     7,     8,
      -1,     1,    42,    34,    13,     5,     6,     7,     8,    -1,
       1,    42,    34,    13,     5,     6,     7,     8,    -1,    -1,
      42,    -1,    13,     1,    -1,    34,    -1,     5,     6,     7,
       8,    -1,     1,    42,    34,    13,     5,     6,     7,     8,
      -1,    -1,    42,    34,    13,    -1,     1,    -1,    -1,    -1,
      -1,    42,    -1,     8,     9,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    34,    21,    22,    23,    24,
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
      33,    21,    22,    23,    24,    25,    26,    40,    -1,    -1,
      -1,    31,    32,    33,    21,    22,    23,    24,    25,    26,
      -1,     8,     9,    43,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,     8,     9,    -1,
      -1,    -1,    -1,    -1,    41,    42,    43,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,     8,     9,    -1,    -1,    -1,    -1,    -1,
      41,    42,    43,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    21,    22,
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
      -1,    -1,    -1,    -1,    41,    -1,    43,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,     8,     9,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    43,    -1,    -1,    -1,    21,    22,    23,    24,
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
      33,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,     8,     9,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    43,    -1,    -1,    -1,
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
      -1,    -1,    31,    32,    33,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,     8,     9,    -1,    -1,    -1,    -1,    40,
      -1,    42,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,     8,
       9,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    31,    32,    33,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,    26,
      -1,     8,     9,    -1,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    21,    22,    23,    24,    25,    26,
      -1,     8,     9,    -1,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    21,    22,    23,    24,    25,    26,
      -1,     8,     9,    -1,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    21,    22,    23,    24,    25,    26,
      -1,     8,     9,    -1,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    21,    22,    23,    24,    25,    26,
      -1,     8,     9,    -1,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    21,    22,    23,    24,    25,    26,
      -1,     8,     9,    -1,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    21,    22,    23,    24,    25,    26,
      -1,     8,     9,    -1,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    21,    22,    23,    24,    25,    26,
      -1,     8,     9,    -1,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    21,    22,    23,    24,    25,    26,
      -1,     8,     9,    -1,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    21,    22,    23,    24,    25,    26,
      -1,     8,     9,    -1,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    21,    22,    23,    24,    25,    26,
      -1,     8,     9,    -1,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    21,    22,    23,    24,    25,    26,
      -1,     8,     9,    -1,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    21,    22,    23,    24,    25,    26,
      -1,     8,     9,    -1,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    21,    22,    23,    24,    25,    26,
      -1,     8,     9,    -1,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    21,    22,    23,    24,    25,    26,
      -1,     8,     9,    -1,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    21,    22,    23,    24,    25,    26,
      -1,     8,     9,    -1,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    21,    22,    23,    24,    25,    26,
      -1,     8,     9,    -1,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    21,    22,    23,    24,    25,    26,
      -1,     8,     9,    -1,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    21,    22,    23,    24,    25,    26,
      -1,     8,    -1,    -1,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    21,    22,    23,    24,    25,    26,
      -1,     8,     9,    -1,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    21,    22,    23,    24,    25,    26,
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
      25,    26,     8,    -1,    -1,    -1,    31,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,     8,    -1,    -1,    -1,    31,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,
      21,    22,    23,    24,    25,    26,    -1,    41,    -1,    43,
      31,    32,    33,    21,    22,    23,    24,    25,    26,    -1,
      41,    -1,    43,    31,    32,    33,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    43,    31,    32,    33,    21,
      22,    23,    24,    25,    26,    40,    -1,    -1,    -1,    31,
      32,    33,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    31,    32,    33
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    14,    15,    16,    17,    47,    48,    49,    50,
      55,    96,    40,     0,     1,    49,     5,    12,    92,    42,
      41,    42,    51,     1,    57,    52,     1,    56,    40,    43,
      58,    96,    54,    92,    43,    58,    44,    59,    43,    92,
      53,    41,    59,    43,     1,     6,     7,     8,    13,    18,
      19,    20,    27,    28,    29,    30,    34,    36,    37,    38,
      39,    42,    45,    50,    60,    61,    62,    63,    64,    66,
      71,    72,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    92,    93,    95,    96,    59,
      41,    40,    54,    59,    42,    42,    42,    42,    42,    42,
      42,    42,    87,    92,    42,     1,    40,    76,    92,     1,
      76,    45,    60,    42,     1,    40,    40,    40,    31,    32,
      33,    21,    22,    23,    24,    25,    26,    88,    93,     9,
      94,    35,    42,    87,    92,    58,    43,     1,    76,    65,
       1,    92,     1,    80,    81,     1,    78,    92,     1,    80,
       1,    80,     1,    92,    40,     1,    40,    43,    43,     1,
      10,    11,    76,    89,    90,    78,    92,     1,    82,    83,
      84,    85,    86,    76,     1,    43,    76,    91,    43,    43,
      77,    92,    31,    31,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    41,
      43,    41,    43,     1,    67,    40,     1,    78,     1,    78,
      92,    40,    40,    40,    40,    40,    40,     1,     1,    91,
      59,    61,    68,    70,    76,    43,    43,    43,    43,    43,
       4,    40,    70,     1,    70,    73,    74,    69,    77,    70,
      70,    70,    43,    70,    14,    15,    16,    17,     5,     5,
       5,    40,     5,     5,     5,     6,     7,    13,    27,    29,
      30,    34,    42,    78,    80,    81,    82,    83,    84,    85,
      86,    87,    92,    93,    95,     8,     5,     5,     6,     7,
      13,    34,    42,    82,    83,    84,    85,    86,    87,    92,
      93,    95,     5,    42,     5,    27,    29,    30,     1,     5,
       6,     7,    13,    27,    29,    30,    34,    42,    78,    80,
      81,    82,    83,    84,    85,    86,    87,    92,    93,    95,
       5,     6,     7,    13,    27,    29,    30,    34,    42,    78,
      80,    81,    82,    83,    84,    85,    86,    87,    92,    93,
      95,    41,    51,     5,    42,    31,    32,    42,     1,    18,
      19,    20,    38,    39,    44,    50,    62,    63,    64,    66,
      71,    72,    75,    76,    77,    79,    96,    44,    59,    61,
      92,    42,    42,    42,     5,    87,    92,     1,    76,    32,
      33,    88,    93,    94,    42,    87,     5,    87,    92,     1,
      76,    33,    88,    93,    94,    42,    87,    43,    42,    42,
      42,    42,    42,    42,    42,     5,    87,    92,     1,    76,
      31,    32,    33,    88,    93,    94,    42,    87,    42,    42,
      42,     5,    87,    92,     1,    76,    31,    32,    33,    88,
      93,    94,    42,    87,    52,    40,    43,     5,    27,    29,
      30,    78,    92,     1,    82,    43,    40,    42,    42,    42,
      42,     1,    40,    76,    45,    60,    42,     1,    40,    40,
      40,    92,    45,    60,    35,     1,    80,     1,    80,     1,
      80,    43,    43,     1,    82,    83,    84,    85,    86,     1,
      43,    91,    43,    43,    83,    84,    85,    86,     1,    43,
      91,     1,    80,     1,    80,     1,    80,    43,     1,    80,
       1,    80,     1,    80,    43,    43,     5,    27,    29,    30,
      78,    92,    82,    83,    84,    85,    86,     1,    43,    91,
       1,    80,     1,    80,     1,    80,    43,    43,     5,    27,
      29,    30,    78,    92,     1,    82,    83,    84,    85,    86,
       1,    43,    91,    54,    42,    42,    42,     1,    76,    65,
       1,    92,     1,    92,    40,     1,    40,    45,     1,    76,
      89,    90,    41,    51,    45,    76,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    42,    42,
      42,    43,    43,    43,    43,    43,    43,    43,    43,    42,
      42,    42,    43,    43,    53,     1,    80,     1,    80,     1,
      80,    43,    43,    77,    31,    31,    43,    43,    43,    43,
      43,    43,    52,    40,     1,    80,     1,    80,     1,    80,
       1,    80,     1,    80,     1,    80,    40,    43,    43,    43,
      43,    43,    43,     1,    67,    40,     1,    78,     1,    78,
      92,    40,    40,    40,    40,    40,    40,    54,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      68,    70,    76,    43,    43,    43,    43,    43,    53,     4,
      40,    70,     1,    70,    73,    74,    40,    69,    77,    70,
      70,    70,    43,    70
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    48,    48,    48,    49,    49,    51,    50,
      52,    53,    50,    50,    54,    54,    56,    55,    57,    55,
      55,    55,    58,    58,    58,    59,    59,    60,    60,    61,
      61,    61,    61,    61,    61,    61,    61,    62,    62,    62,
      62,    62,    62,    63,    63,    65,    64,    67,    66,    66,
      68,    69,    68,    70,    70,    71,    71,    71,    71,    73,
      72,    74,    72,    72,    72,    72,    72,    75,    75,    76,
      76,    77,    78,    78,    78,    78,    78,    78,    79,    79,
      79,    80,    80,    81,    81,    81,    82,    82,    83,    83,
      84,    84,    85,    85,    86,    86,    86,    86,    86,    86,
      86,    87,    87,    87,    87,    88,    88,    88,    88,    88,
      88,    89,    90,    91,    91,    91,    92,    93,    94,    95,
      95,    95,    96,    96,    96,    96
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     0,     4,
       0,     0,     7,     2,     3,     1,     0,     7,     0,     7,
       6,     6,     4,     2,     0,     2,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     5,     5,     5,
       5,     5,     5,     1,     1,     0,    10,     0,     6,     5,
       1,     0,     4,     1,     1,     2,     3,     3,     3,     0,
       8,     0,     8,     2,     7,     7,     7,     2,     2,     1,
       1,     3,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     3,     3,     3,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     2,     2,     4,     3,     4,
       3,     1,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
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
#line 98 "sintatic/sintatic.y"
                         {
            (yyval.typeNode) = buildNode("program");
            (yyval.typeNode)->childNode = (yyvsp[0].typeNode);
            origin = (yyval.typeNode);
        }
#line 3525 "sintatic.tab.c"
    break;

  case 3: /* list_declaration: list_declaration main_declaration  */
#line 106 "sintatic/sintatic.y"
                                          {
            TreeNodes *aux = (yyvsp[-1].typeNode);
            while(aux->brotherNode != NULL) {
                aux = aux->brotherNode;
            }
            aux->brotherNode = (yyvsp[0].typeNode);
        }
#line 3537 "sintatic.tab.c"
    break;

  case 5: /* list_declaration: error  */
#line 114 "sintatic/sintatic.y"
                 { (yyval.typeNode) = buildNode("error program"); }
#line 3543 "sintatic.tab.c"
    break;

  case 8: /* $@1: %empty  */
#line 123 "sintatic/sintatic.y"
                  {
            verifyReDeclaration(activeScope, (yyvsp[0].typeNode)->value, line, column);
            Symbol *aux = createItem((yyvsp[-1].typeNode)->value, (yyvsp[0].typeNode)->value, line);
            insertItem(activeScope, aux);
        }
#line 3553 "sintatic.tab.c"
    break;

  case 9: /* var_declaration: tipos var $@1 SEMICOLON  */
#line 127 "sintatic/sintatic.y"
                    {
            (yyval.typeNode) = buildNode("var_declaration");
            (yyval.typeNode)->childNode = (yyvsp[-3].typeNode); 
            (yyvsp[-3].typeNode)->brotherNode = (yyvsp[-2].typeNode);  
        }
#line 3563 "sintatic.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 132 "sintatic/sintatic.y"
                          { typeManyDeclaration = (yyvsp[-2].typeNode)->value; }
#line 3569 "sintatic.tab.c"
    break;

  case 11: /* $@3: %empty  */
#line 132 "sintatic/sintatic.y"
                                                                                    {
            verifyReDeclaration(activeScope, (yyvsp[-3].typeNode)->value, line, column);    
            Symbol *aux = createItem((yyvsp[-4].typeNode)->value, (yyvsp[-3].typeNode)->value, line);
            insertItem(activeScope, aux);

        }
#line 3580 "sintatic.tab.c"
    break;

  case 12: /* var_declaration: tipos var COMMA $@2 many_declaration $@3 SEMICOLON  */
#line 137 "sintatic/sintatic.y"
                    {
            (yyval.typeNode) = buildNode("var_declaration");
            (yyval.typeNode)->childNode = (yyvsp[-6].typeNode); 
            (yyvsp[-6].typeNode)->brotherNode = (yyvsp[-5].typeNode);  
            (yyvsp[-5].typeNode)->brotherNode = (yyvsp[-2].typeNode); 
        }
#line 3591 "sintatic.tab.c"
    break;

  case 13: /* var_declaration: error SEMICOLON  */
#line 143 "sintatic/sintatic.y"
                          { (yyval.typeNode) = buildNode("SINTATIC ERR");}
#line 3597 "sintatic.tab.c"
    break;

  case 14: /* many_declaration: var COMMA many_declaration  */
#line 147 "sintatic/sintatic.y"
                                   {
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
                verifyReDeclaration(activeScope, (yyvsp[-2].typeNode)->value, line, column);
                Symbol *aux2 = createItem(typeManyDeclaration, (yyvsp[-2].typeNode)->value, line);
                insertItem(activeScope, aux2);
        }
#line 3608 "sintatic.tab.c"
    break;

  case 15: /* many_declaration: var  */
#line 153 "sintatic/sintatic.y"
              {
                verifyReDeclaration(activeScope, (yyvsp[0].typeNode)->value, line, column);
                Symbol *aux3 = createItem(typeManyDeclaration, (yyvsp[0].typeNode)->value, line);
                insertItem(activeScope, aux3);
        }
#line 3618 "sintatic.tab.c"
    break;

  case 16: /* $@4: %empty  */
#line 161 "sintatic/sintatic.y"
                             {
            // criar o simbolos no escopo atual
            funcAux = createItem("FUNCTION", (yyvsp[-1].typeNode)->value, line);
            
            // novo Scopo
            Scope *newScope = buildScope((yyvsp[-1].typeNode)->value);
            newScope->parentScope = activeScope; 
            activeScope = newScope;
            
        }
#line 3633 "sintatic.tab.c"
    break;

  case 17: /* func_declaration: tipos var OPEN_PAREN $@4 list_args CLS_PAREN blockStmt  */
#line 170 "sintatic/sintatic.y"
                                         {
            (yyval.typeNode) = buildNode("func_declaration");   
            (yyval.typeNode)->childNode = (yyvsp[-6].typeNode);
            (yyvsp[-6].typeNode)->brotherNode = (yyvsp[-5].typeNode);
            (yyvsp[-5].typeNode)->brotherNode = (yyvsp[-2].typeNode);
            (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
            
            funcAux->numArgs = numFuncArgs;
            insertItem(activeScope->parentScope, funcAux); 
            funcAux = NULL;
            numFuncArgs = 0;
            
        //     TreeNodes* aux = $1;
        //     while (aux->brotherNode != NULL) aux = aux->brotherNode;
        //     aux->brotherNode = $2;

        //     TreeNodes* aux2 = aux->brotherNode;
        //     while (aux2->brotherNode != NULL) aux = aux2->brotherNode;
        //     aux2->brotherNode = $5;

        //     TreeNodes* aux3 = aux2->brotherNode;
        //     while (aux3->brotherNode != NULL) aux = aux3->brotherNode;
        //     aux3->brotherNode = $7;

            // fecha o Scopo
            showScope(activeScope);
            Scope *auxScope = activeScope->parentScope;
            freeScope(activeScope);
            activeScope = auxScope;
        }
#line 3668 "sintatic.tab.c"
    break;

  case 18: /* $@5: %empty  */
#line 200 "sintatic/sintatic.y"
                                {
            // insere simbolos no escopo atual
            funcAux = createItem("FUNCTION", "main", line);
             
            // main 
            isMain = isMain + 1;
            // novo Scopo
            Scope *newScope = buildScope("main"); 
            newScope->parentScope = activeScope; 
            activeScope = newScope;

        }
#line 3685 "sintatic.tab.c"
    break;

  case 19: /* func_declaration: tipos MAIN OPEN_PAREN $@5 list_args CLS_PAREN blockStmt  */
#line 211 "sintatic/sintatic.y"
                                                     {
          
            funcAux->numArgs = numFuncArgs;
            insertItem(activeScope->parentScope, funcAux); 
            funcAux = NULL;
            numFuncArgs = 0;   
            (yyval.typeNode) = buildNode("func_declaration_main");   
            (yyval.typeNode)->childNode = (yyvsp[-6].typeNode);
            (yyvsp[-6].typeNode)->brotherNode = (yyvsp[-2].typeNode);
            (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);

        //     TreeNodes* aux = $1;
        //     while (aux->brotherNode != NULL) aux = aux->brotherNode;
        //     aux->brotherNode = $args;

        //     TreeNodes* aux2 = aux->brotherNode;
        //     while (aux2->brotherNode != NULL) aux = aux2->brotherNode;
        //     aux2->brotherNode = $block;
            // printf("Chegou scope: %s \n", activeScope->scopeName);
            showScope(activeScope);
            Scope *auxScope = activeScope->parentScope;
            freeScope(activeScope);
            activeScope = auxScope;
            
        }
#line 3715 "sintatic.tab.c"
    break;

  case 20: /* func_declaration: tipos var OPEN_PAREN error CLS_PAREN blockStmt  */
#line 236 "sintatic/sintatic.y"
                                                         {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3723 "sintatic.tab.c"
    break;

  case 21: /* func_declaration: tipos MAIN OPEN_PAREN error CLS_PAREN blockStmt  */
#line 239 "sintatic/sintatic.y"
                                                                 {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3731 "sintatic.tab.c"
    break;

  case 22: /* list_args: tipos var COMMA list_args  */
#line 246 "sintatic/sintatic.y"
                                  {
                (yyval.typeNode) = buildNode("list_args");  
                (yyval.typeNode)->childNode = (yyvsp[-3].typeNode);
                (yyvsp[-3].typeNode)->brotherNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
                
                numFuncArgs = numFuncArgs + 1;
                // cria simbolos no escopo atual
                verifyReDeclaration(activeScope, (yyvsp[-2].typeNode)->value, line, column);
                Symbol *aux = createItem((yyvsp[-3].typeNode)->value, (yyvsp[-2].typeNode)->value, line);
                insertItem(activeScope, aux); 
                
        }
#line 3749 "sintatic.tab.c"
    break;

  case 23: /* list_args: tipos var  */
#line 259 "sintatic/sintatic.y"
                    {

                numFuncArgs = numFuncArgs + 1;
                verifyReDeclaration(activeScope, (yyvsp[0].typeNode)->value, line, column);
                (yyval.typeNode) = buildNode("list_args"); 
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
                (yyvsp[-1].typeNode)->brotherNode = (yyvsp[0].typeNode);

                Symbol *aux = createItem((yyvsp[-1].typeNode)->value, (yyvsp[0].typeNode)->value, line);
                insertItem(activeScope, aux); 
        }
#line 3765 "sintatic.tab.c"
    break;

  case 24: /* list_args: %empty  */
#line 270 "sintatic/sintatic.y"
                 {
                (yyval.typeNode) = buildNode("no_args"); 
        }
#line 3773 "sintatic.tab.c"
    break;

  case 25: /* blockStmt: OP_CUR_BRACKET CLS_CUR_BRACKET  */
#line 276 "sintatic/sintatic.y"
                                        {
                (yyval.typeNode) = buildNode("empty block"); 
        }
#line 3781 "sintatic.tab.c"
    break;

  case 26: /* blockStmt: OP_CUR_BRACKET list_statements CLS_CUR_BRACKET  */
#line 279 "sintatic/sintatic.y"
                                                         {
                (yyval.typeNode) = (yyvsp[-1].typeNode);
        }
#line 3789 "sintatic.tab.c"
    break;

  case 27: /* list_statements: stmt list_statements  */
#line 285 "sintatic/sintatic.y"
                             {
               (yyval.typeNode) = (yyvsp[-1].typeNode);
               (yyvsp[-1].typeNode)->brotherNode = (yyvsp[0].typeNode); 
        }
#line 3798 "sintatic.tab.c"
    break;

  case 37: /* input_output_expr: write_commands OPEN_PAREN str_expr CLS_PAREN SEMICOLON  */
#line 304 "sintatic/sintatic.y"
                                                               {
                (yyvsp[-4].typeNode)->childNode = (yyvsp[-2].typeNode);
        }
#line 3806 "sintatic.tab.c"
    break;

  case 38: /* input_output_expr: write_commands OPEN_PAREN expr CLS_PAREN SEMICOLON  */
#line 307 "sintatic/sintatic.y"
                                                             {
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
        }
#line 3814 "sintatic.tab.c"
    break;

  case 39: /* input_output_expr: write_commands OPEN_PAREN char_expr CLS_PAREN SEMICOLON  */
#line 310 "sintatic/sintatic.y"
                                                                  {
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
        }
#line 3822 "sintatic.tab.c"
    break;

  case 40: /* input_output_expr: CMD_READ OPEN_PAREN var CLS_PAREN SEMICOLON  */
#line 313 "sintatic/sintatic.y"
                                                      {
                verifyUnDeclaration(activeScope, (yyvsp[-2].typeNode)->value, line, column);
                (yyval.typeNode) = buildNode("CMD_READ_VAR");
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
        }
#line 3832 "sintatic.tab.c"
    break;

  case 41: /* input_output_expr: write_commands OPEN_PAREN error CLS_PAREN SEMICOLON  */
#line 318 "sintatic/sintatic.y"
                                                              {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3840 "sintatic.tab.c"
    break;

  case 42: /* input_output_expr: CMD_READ OPEN_PAREN error CLS_PAREN SEMICOLON  */
#line 321 "sintatic/sintatic.y"
                                                        {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3848 "sintatic.tab.c"
    break;

  case 43: /* write_commands: CMD_WRITE  */
#line 327 "sintatic/sintatic.y"
                 {
              (yyval.typeNode) = buildNode("CMD_WRITE_STR");
      }
#line 3856 "sintatic.tab.c"
    break;

  case 44: /* write_commands: CMD_WRITELN  */
#line 330 "sintatic/sintatic.y"
                    {
              (yyval.typeNode) = buildNode("CMD_WRITELN_STR");
      }
#line 3864 "sintatic.tab.c"
    break;

  case 45: /* $@6: %empty  */
#line 336 "sintatic/sintatic.y"
                           {
            // novo Scopo    
            Scope *newScope = buildScope("Block FOR");
            newScope->parentScope = activeScope; 
            activeScope = newScope;
            
        }
#line 3876 "sintatic.tab.c"
    break;

  case 46: /* iteration_expr: CMD_FOR OPEN_PAREN $@6 assign SEMICOLON expr SEMICOLON assign CLS_PAREN simple_complex_block_stmt  */
#line 342 "sintatic/sintatic.y"
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
#line 3894 "sintatic.tab.c"
    break;

  case 47: /* $@7: %empty  */
#line 358 "sintatic/sintatic.y"
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
#line 3910 "sintatic.tab.c"
    break;

  case 48: /* condition_expr: CMD_IF OPEN_PAREN expr CLS_PAREN $@7 block_cond  */
#line 368 "sintatic/sintatic.y"
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
#line 3926 "sintatic.tab.c"
    break;

  case 49: /* condition_expr: CMD_IF OPEN_PAREN error CLS_PAREN error  */
#line 379 "sintatic/sintatic.y"
                                                  {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3934 "sintatic.tab.c"
    break;

  case 51: /* $@8: %empty  */
#line 386 "sintatic/sintatic.y"
                                             {
            // novo Scopo    
            Scope *newScope = buildScope("Block ELSE");
            newScope->parentScope = activeScope; 
            activeScope = newScope;

        }
#line 3946 "sintatic.tab.c"
    break;

  case 52: /* block_cond: simple_complex_block_stmt CMD_ELSE $@8 simple_complex_block_stmt  */
#line 392 "sintatic/sintatic.y"
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
#line 3964 "sintatic.tab.c"
    break;

  case 55: /* return_stmt: CMD_RETURN SEMICOLON  */
#line 413 "sintatic/sintatic.y"
                             {
              (yyval.typeNode) = buildNode("return");  
        }
#line 3972 "sintatic.tab.c"
    break;

  case 56: /* return_stmt: CMD_RETURN expr SEMICOLON  */
#line 416 "sintatic/sintatic.y"
                                     {
                (yyval.typeNode) = buildNode("return");  
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 3981 "sintatic.tab.c"
    break;

  case 57: /* return_stmt: CMD_RETURN error SEMICOLON  */
#line 420 "sintatic/sintatic.y"
                                     {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3989 "sintatic.tab.c"
    break;

  case 58: /* return_stmt: CMD_RETURN expr error  */
#line 423 "sintatic/sintatic.y"
                                {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 3997 "sintatic.tab.c"
    break;

  case 59: /* $@9: %empty  */
#line 429 "sintatic/sintatic.y"
                                                            {
                verifyUnDeclaration(activeScope, (yyvsp[-3].typeNode)->value, line, column);
                Scope *newScope = buildScope("Block FORALL ");
                newScope->parentScope = activeScope;
                activeScope = newScope; 
        }
#line 4008 "sintatic.tab.c"
    break;

  case 60: /* set_stmt: CMD_FORALL OPEN_PAREN var IN_OP func_expr CLS_PAREN $@9 simple_complex_block_stmt  */
#line 434 "sintatic/sintatic.y"
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
#line 4025 "sintatic.tab.c"
    break;

  case 61: /* $@10: %empty  */
#line 446 "sintatic/sintatic.y"
                                                        {
                verifyUnDeclaration(activeScope, (yyvsp[-3].typeNode)->value, line, column);
                verifyUnDeclaration(activeScope, (yyvsp[-1].typeNode)->value, line, column);
                Scope *newScope = buildScope("Block FORALL ");
                newScope->parentScope = activeScope;
                activeScope = newScope; 
        }
#line 4037 "sintatic.tab.c"
    break;

  case 62: /* set_stmt: CMD_FORALL OPEN_PAREN var IN_OP var CLS_PAREN $@10 simple_complex_block_stmt  */
#line 452 "sintatic/sintatic.y"
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
#line 4054 "sintatic.tab.c"
    break;

  case 64: /* set_stmt: CMD_FORALL OPEN_PAREN error IN_OP error CLS_PAREN simple_complex_block_stmt  */
#line 465 "sintatic/sintatic.y"
                                                                                      {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 4062 "sintatic.tab.c"
    break;

  case 65: /* set_stmt: CMD_FORALL OPEN_PAREN error IN_OP func_expr CLS_PAREN error  */
#line 468 "sintatic/sintatic.y"
                                                                      {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 4070 "sintatic.tab.c"
    break;

  case 66: /* set_stmt: CMD_FORALL OPEN_PAREN var IN_OP error CLS_PAREN simple_complex_block_stmt  */
#line 471 "sintatic/sintatic.y"
                                                                                    {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 4078 "sintatic.tab.c"
    break;

  case 68: /* expr_stmt: expr error  */
#line 477 "sintatic/sintatic.y"
                     {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 4086 "sintatic.tab.c"
    break;

  case 71: /* assign: var ATRIBUTION expr  */
#line 489 "sintatic/sintatic.y"
                            {
              verifyUnDeclaration(activeScope, (yyvsp[-2].typeNode)->value, line, column);
              (yyval.typeNode) = buildNode(" = ");
              (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
              //$$->childNode = buildNode(" intToFloat ");
              //$$->childNode->childNode = $1;  
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 4099 "sintatic.tab.c"
    break;

  case 72: /* func_expr: ADD_FUNC OPEN_PAREN func_in_expr CLS_PAREN  */
#line 500 "sintatic/sintatic.y"
                                                   {
                (yyval.typeNode) = buildNode(" add ");
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 4108 "sintatic.tab.c"
    break;

  case 73: /* func_expr: REMOVE_FUNC OPEN_PAREN func_in_expr CLS_PAREN  */
#line 504 "sintatic/sintatic.y"
                                                        {
                (yyval.typeNode) = buildNode(" remove ");
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 4117 "sintatic.tab.c"
    break;

  case 74: /* func_expr: EXIST_FUNC OPEN_PAREN func_in_expr CLS_PAREN  */
#line 508 "sintatic/sintatic.y"
                                                       {
                (yyval.typeNode) = buildNode(" exist ");
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 4126 "sintatic.tab.c"
    break;

  case 75: /* func_expr: ADD_FUNC OPEN_PAREN error CLS_PAREN  */
#line 512 "sintatic/sintatic.y"
                                              {
             (yyval.typeNode) = buildNode("SINTATIC ERR!");   
        }
#line 4134 "sintatic.tab.c"
    break;

  case 76: /* func_expr: REMOVE_FUNC OPEN_PAREN error CLS_PAREN  */
#line 515 "sintatic/sintatic.y"
                                                 {
             (yyval.typeNode) = buildNode("SINTATIC ERR!");   
        }
#line 4142 "sintatic.tab.c"
    break;

  case 77: /* func_expr: EXIST_FUNC OPEN_PAREN error CLS_PAREN  */
#line 518 "sintatic/sintatic.y"
                                                {
             (yyval.typeNode) = buildNode("SINTATIC ERR!");    
        }
#line 4150 "sintatic.tab.c"
    break;

  case 78: /* is_set_expr: IS_SET_FUNC OPEN_PAREN var CLS_PAREN  */
#line 524 "sintatic/sintatic.y"
                                             {
              verifyUnDeclaration(activeScope, (yyvsp[-1].typeNode)->value, line, column);
              (yyval.typeNode) = buildNode(" is_set ");
              (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 4160 "sintatic.tab.c"
    break;

  case 79: /* is_set_expr: IS_SET_FUNC OPEN_PAREN func_expr CLS_PAREN  */
#line 529 "sintatic/sintatic.y"
                                                     {
                (yyval.typeNode) = buildNode(" is_set ");
                (yyval.typeNode)->childNode = (yyvsp[-1].typeNode);
        }
#line 4169 "sintatic.tab.c"
    break;

  case 80: /* is_set_expr: IS_SET_FUNC OPEN_PAREN error CLS_PAREN  */
#line 533 "sintatic/sintatic.y"
                                                 {
             (yyval.typeNode) = buildNode("SINTATIC ERR!");    
        }
#line 4177 "sintatic.tab.c"
    break;

  case 81: /* func_in_expr: op_or_expr IN_OP var  */
#line 538 "sintatic/sintatic.y"
                             {
                verifyUnDeclaration(activeScope, (yyvsp[0].typeNode)->value, line, column);
                (yyval.typeNode) = buildNode(" IN ");
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 4188 "sintatic.tab.c"
    break;

  case 82: /* func_in_expr: op_or_expr IN_OP func_expr  */
#line 544 "sintatic/sintatic.y"
                                     {
                (yyval.typeNode) = buildNode(" IN ");
                (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
                (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 4198 "sintatic.tab.c"
    break;

  case 83: /* op_or_expr: op_or_expr OP_OR op_and_expr  */
#line 557 "sintatic/sintatic.y"
                                     {
              (yyval.typeNode) = buildNode("or");
              (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 4208 "sintatic.tab.c"
    break;

  case 86: /* op_and_expr: op_and_expr OP_AND logical_expr  */
#line 567 "sintatic/sintatic.y"
                                        {
              (yyval.typeNode) = buildNode("and");
              (yyval.typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);  
        }
#line 4218 "sintatic.tab.c"
    break;

  case 88: /* logical_expr: logical_expr logical_ops arithmetic_expr  */
#line 576 "sintatic/sintatic.y"
                                                {
             (yyval.typeNode) = (yyvsp[-1].typeNode);
             (yyvsp[-1].typeNode)->childNode = (yyvsp[-2].typeNode); 
             (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode); 
       }
#line 4228 "sintatic.tab.c"
    break;

  case 90: /* arithmetic_expr: arithmetic_expr adds_op mult_expr  */
#line 585 "sintatic/sintatic.y"
                                          {
              (yyval.typeNode) = (yyvsp[-1].typeNode);
              (yyvsp[-1].typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 4238 "sintatic.tab.c"
    break;

  case 92: /* mult_expr: mult_expr mult_ops first_term  */
#line 594 "sintatic/sintatic.y"
                                      {
              (yyval.typeNode) = (yyvsp[-1].typeNode);
              (yyvsp[-1].typeNode)->childNode = (yyvsp[-2].typeNode);
              (yyvsp[-2].typeNode)->brotherNode = (yyvsp[0].typeNode);
        }
#line 4248 "sintatic.tab.c"
    break;

  case 95: /* first_term: OP_NEG term  */
#line 604 "sintatic/sintatic.y"
                      {
              (yyval.typeNode) = buildNode(" ! ");
              (yyval.typeNode)->childNode = (yyvsp[0].typeNode);
        }
#line 4257 "sintatic.tab.c"
    break;

  case 96: /* first_term: adds_op term  */
#line 608 "sintatic/sintatic.y"
                       {
              (yyval.typeNode) = (yyvsp[-1].typeNode);
              (yyvsp[-1].typeNode)->childNode = (yyvsp[0].typeNode);
        }
#line 4266 "sintatic.tab.c"
    break;

  case 97: /* first_term: var OPEN_PAREN list_expr CLS_PAREN  */
#line 612 "sintatic/sintatic.y"
                                             {
                verifyFuncDeclaration(activeScope, (yyvsp[-3].typeNode)->value, line, column, numListArgs);
                (yyval.typeNode) = (yyvsp[-3].typeNode);
                (yyvsp[-3].typeNode)->brotherNode = (yyvsp[-1].typeNode);
        }
#line 4276 "sintatic.tab.c"
    break;

  case 98: /* first_term: var OPEN_PAREN CLS_PAREN  */
#line 617 "sintatic/sintatic.y"
                                   {
                verifyFuncDeclaration(activeScope, (yyvsp[-2].typeNode)->value, line, column, 0);
        }
#line 4284 "sintatic.tab.c"
    break;

  case 99: /* first_term: var OPEN_PAREN error CLS_PAREN  */
#line 620 "sintatic/sintatic.y"
                                         {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 4292 "sintatic.tab.c"
    break;

  case 100: /* first_term: error OPEN_PAREN CLS_PAREN  */
#line 623 "sintatic/sintatic.y"
                                      {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 4300 "sintatic.tab.c"
    break;

  case 101: /* term: var  */
#line 629 "sintatic/sintatic.y"
            {
                verifyUnDeclaration(activeScope, (yyvsp[0].typeNode)->value, line, column);
        }
#line 4308 "sintatic.tab.c"
    break;

  case 103: /* term: OPEN_PAREN expr CLS_PAREN  */
#line 633 "sintatic/sintatic.y"
                                    {
                (yyval.typeNode) = (yyvsp[-1].typeNode);
        }
#line 4316 "sintatic.tab.c"
    break;

  case 104: /* term: OPEN_PAREN error CLS_PAREN  */
#line 636 "sintatic/sintatic.y"
                                      {
                (yyval.typeNode) = buildNode("SINTATIC ERR!");
        }
#line 4324 "sintatic.tab.c"
    break;

  case 105: /* logical_ops: LT_OP  */
#line 642 "sintatic/sintatic.y"
              {
                (yyval.typeNode) = buildNode("LT_OP");
        }
#line 4332 "sintatic.tab.c"
    break;

  case 106: /* logical_ops: LTE_OP  */
#line 645 "sintatic/sintatic.y"
                  {
                (yyval.typeNode) = buildNode("LTE_OP");
        }
#line 4340 "sintatic.tab.c"
    break;

  case 107: /* logical_ops: GT_OP  */
#line 648 "sintatic/sintatic.y"
                 {
                (yyval.typeNode) = buildNode("GT_OP");
        }
#line 4348 "sintatic.tab.c"
    break;

  case 108: /* logical_ops: GTE_OP  */
#line 651 "sintatic/sintatic.y"
                  {
                (yyval.typeNode) = buildNode("GTE_OP");
        }
#line 4356 "sintatic.tab.c"
    break;

  case 109: /* logical_ops: NEQ_OP  */
#line 654 "sintatic/sintatic.y"
                  {
                (yyval.typeNode) = buildNode("NEQ_OP");
        }
#line 4364 "sintatic.tab.c"
    break;

  case 110: /* logical_ops: EQUAL_OP  */
#line 657 "sintatic/sintatic.y"
                    {
                (yyval.typeNode) = buildNode("EQUAL_OP");
        }
#line 4372 "sintatic.tab.c"
    break;

  case 111: /* str_expr: STRING  */
#line 663 "sintatic/sintatic.y"
               {
            (yyval.typeNode) = buildNode((yyvsp[0].sval));
            free((yyvsp[0].sval));
        }
#line 4381 "sintatic.tab.c"
    break;

  case 112: /* char_expr: CHARACTER  */
#line 670 "sintatic/sintatic.y"
                  {
            (yyval.typeNode) = buildNode((yyvsp[0].sval));
            free((yyvsp[0].sval));
        }
#line 4390 "sintatic.tab.c"
    break;

  case 113: /* list_expr: expr COMMA list_expr  */
#line 677 "sintatic/sintatic.y"
                             {
                numListArgs = numListArgs + 1;
        }
#line 4398 "sintatic.tab.c"
    break;

  case 114: /* list_expr: expr  */
#line 680 "sintatic/sintatic.y"
               {
                numListArgs = numListArgs + 1;
        }
#line 4406 "sintatic.tab.c"
    break;

  case 115: /* list_expr: error COMMA error  */
#line 683 "sintatic/sintatic.y"
                            {
             (yyval.typeNode) = buildNode("SINTATIC ERR!");   
        }
#line 4414 "sintatic.tab.c"
    break;

  case 116: /* var: ID  */
#line 689 "sintatic/sintatic.y"
         {
            (yyval.typeNode) = buildNode((yyvsp[0].sval));
            free((yyvsp[0].sval));
       }
#line 4423 "sintatic.tab.c"
    break;

  case 117: /* adds_op: ADD_OP  */
#line 696 "sintatic/sintatic.y"
             {
            (yyval.typeNode) = buildNode((yyvsp[0].sval)); 
            free((yyvsp[0].sval)); 
      }
#line 4432 "sintatic.tab.c"
    break;

  case 118: /* mult_ops: MULT_OP  */
#line 703 "sintatic/sintatic.y"
              {
              (yyval.typeNode) = buildNode((yyvsp[0].sval)); 
              free((yyvsp[0].sval));  
      }
#line 4441 "sintatic.tab.c"
    break;

  case 119: /* num_tipos: FLOAT  */
#line 710 "sintatic/sintatic.y"
              {
              (yyval.typeNode) = buildNode((yyvsp[0].sval));
              free((yyvsp[0].sval));
        }
#line 4450 "sintatic.tab.c"
    break;

  case 120: /* num_tipos: INT  */
#line 714 "sintatic/sintatic.y"
              {
              (yyval.typeNode) = buildNode((yyvsp[0].sval));
              free((yyvsp[0].sval));
        }
#line 4459 "sintatic.tab.c"
    break;

  case 121: /* num_tipos: EMPTY  */
#line 718 "sintatic/sintatic.y"
                {
              (yyval.typeNode) = buildNode("EMPTY");
        }
#line 4467 "sintatic.tab.c"
    break;

  case 122: /* tipos: TYPE_INT  */
#line 724 "sintatic/sintatic.y"
                 {
             (yyval.typeNode) = buildNode("TYPE_INT");
        }
#line 4475 "sintatic.tab.c"
    break;

  case 123: /* tipos: TYPE_FLOAT  */
#line 727 "sintatic/sintatic.y"
                     {
              (yyval.typeNode) = buildNode("TYPE_FLOAT");
        }
#line 4483 "sintatic.tab.c"
    break;

  case 124: /* tipos: TYPE_SET  */
#line 730 "sintatic/sintatic.y"
                    {
              (yyval.typeNode) = buildNode("TYPE_SET");
        }
#line 4491 "sintatic.tab.c"
    break;

  case 125: /* tipos: TYPE_ELEM  */
#line 733 "sintatic/sintatic.y"
                    {
             (yyval.typeNode) = buildNode("TYPE_ELEM");
        }
#line 4499 "sintatic.tab.c"
    break;


#line 4503 "sintatic.tab.c"

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

#line 737 "sintatic/sintatic.y"



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
     
     // erros
     errorMain(isMain);

     clearTree(origin);
    
     fclose(yyin);
     yylex_destroy();
     return 0;
}
