/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "22101783+22201782.y"


#include"symbol_info.h"

#define YYSTYPE symbol_info*

int yyparse(void);
int yylex(void);

extern FILE *yyin;


ofstream outlog;

int lines = 1;

// declare any other variables or functions needed here

void yyerror(char *s) {
    printf("%s\n", s);
}


#line 95 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IF = 258,                      /* IF  */
    ELSE = 259,                    /* ELSE  */
    FOR = 260,                     /* FOR  */
    WHILE = 261,                   /* WHILE  */
    DO = 262,                      /* DO  */
    BREAK = 263,                   /* BREAK  */
    CONTINUE = 264,                /* CONTINUE  */
    RETURN = 265,                  /* RETURN  */
    INT = 266,                     /* INT  */
    FLOAT = 267,                   /* FLOAT  */
    CHAR = 268,                    /* CHAR  */
    DOUBLE = 269,                  /* DOUBLE  */
    VOID = 270,                    /* VOID  */
    SWITCH = 271,                  /* SWITCH  */
    CASE = 272,                    /* CASE  */
    DEFAULT = 273,                 /* DEFAULT  */
    PRINTLN = 274,                 /* PRINTLN  */
    GOTO = 275,                    /* GOTO  */
    ADDOP = 276,                   /* ADDOP  */
    MULOP = 277,                   /* MULOP  */
    INCOP = 278,                   /* INCOP  */
    DECOP = 279,                   /* DECOP  */
    RELOP = 280,                   /* RELOP  */
    ASSIGNOP = 281,                /* ASSIGNOP  */
    LOGICOP = 282,                 /* LOGICOP  */
    NOT = 283,                     /* NOT  */
    LPAREN = 284,                  /* LPAREN  */
    RPAREN = 285,                  /* RPAREN  */
    LCURL = 286,                   /* LCURL  */
    RCURL = 287,                   /* RCURL  */
    LTHIRD = 288,                  /* LTHIRD  */
    RTHIRD = 289,                  /* RTHIRD  */
    COMMA = 290,                   /* COMMA  */
    COLON = 291,                   /* COLON  */
    SEMICOLON = 292,               /* SEMICOLON  */
    ID = 293,                      /* ID  */
    CONST_INT = 294,               /* CONST_INT  */
    CONST_FLOAT = 295              /* CONST_FLOAT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IF 258
#define ELSE 259
#define FOR 260
#define WHILE 261
#define DO 262
#define BREAK 263
#define CONTINUE 264
#define RETURN 265
#define INT 266
#define FLOAT 267
#define CHAR 268
#define DOUBLE 269
#define VOID 270
#define SWITCH 271
#define CASE 272
#define DEFAULT 273
#define PRINTLN 274
#define GOTO 275
#define ADDOP 276
#define MULOP 277
#define INCOP 278
#define DECOP 279
#define RELOP 280
#define ASSIGNOP 281
#define LOGICOP 282
#define NOT 283
#define LPAREN 284
#define RPAREN 285
#define LCURL 286
#define RCURL 287
#define LTHIRD 288
#define RTHIRD 289
#define COMMA 290
#define COLON 291
#define SEMICOLON 292
#define ID 293
#define CONST_INT 294
#define CONST_FLOAT 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IF = 3,                         /* IF  */
  YYSYMBOL_ELSE = 4,                       /* ELSE  */
  YYSYMBOL_FOR = 5,                        /* FOR  */
  YYSYMBOL_WHILE = 6,                      /* WHILE  */
  YYSYMBOL_DO = 7,                         /* DO  */
  YYSYMBOL_BREAK = 8,                      /* BREAK  */
  YYSYMBOL_CONTINUE = 9,                   /* CONTINUE  */
  YYSYMBOL_RETURN = 10,                    /* RETURN  */
  YYSYMBOL_INT = 11,                       /* INT  */
  YYSYMBOL_FLOAT = 12,                     /* FLOAT  */
  YYSYMBOL_CHAR = 13,                      /* CHAR  */
  YYSYMBOL_DOUBLE = 14,                    /* DOUBLE  */
  YYSYMBOL_VOID = 15,                      /* VOID  */
  YYSYMBOL_SWITCH = 16,                    /* SWITCH  */
  YYSYMBOL_CASE = 17,                      /* CASE  */
  YYSYMBOL_DEFAULT = 18,                   /* DEFAULT  */
  YYSYMBOL_PRINTLN = 19,                   /* PRINTLN  */
  YYSYMBOL_GOTO = 20,                      /* GOTO  */
  YYSYMBOL_ADDOP = 21,                     /* ADDOP  */
  YYSYMBOL_MULOP = 22,                     /* MULOP  */
  YYSYMBOL_INCOP = 23,                     /* INCOP  */
  YYSYMBOL_DECOP = 24,                     /* DECOP  */
  YYSYMBOL_RELOP = 25,                     /* RELOP  */
  YYSYMBOL_ASSIGNOP = 26,                  /* ASSIGNOP  */
  YYSYMBOL_LOGICOP = 27,                   /* LOGICOP  */
  YYSYMBOL_NOT = 28,                       /* NOT  */
  YYSYMBOL_LPAREN = 29,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 30,                    /* RPAREN  */
  YYSYMBOL_LCURL = 31,                     /* LCURL  */
  YYSYMBOL_RCURL = 32,                     /* RCURL  */
  YYSYMBOL_LTHIRD = 33,                    /* LTHIRD  */
  YYSYMBOL_RTHIRD = 34,                    /* RTHIRD  */
  YYSYMBOL_COMMA = 35,                     /* COMMA  */
  YYSYMBOL_COLON = 36,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 37,                 /* SEMICOLON  */
  YYSYMBOL_ID = 38,                        /* ID  */
  YYSYMBOL_CONST_INT = 39,                 /* CONST_INT  */
  YYSYMBOL_CONST_FLOAT = 40,               /* CONST_FLOAT  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_start = 42,                     /* start  */
  YYSYMBOL_program = 43,                   /* program  */
  YYSYMBOL_unit = 44,                      /* unit  */
  YYSYMBOL_func_definition = 45,           /* func_definition  */
  YYSYMBOL_parameter_list = 46,            /* parameter_list  */
  YYSYMBOL_compound_statement = 47,        /* compound_statement  */
  YYSYMBOL_var_declaration = 48,           /* var_declaration  */
  YYSYMBOL_type_specifier = 49,            /* type_specifier  */
  YYSYMBOL_declaration_list = 50,          /* declaration_list  */
  YYSYMBOL_statements = 51,                /* statements  */
  YYSYMBOL_statement = 52,                 /* statement  */
  YYSYMBOL_expression_statement = 53,      /* expression_statement  */
  YYSYMBOL_variable = 54,                  /* variable  */
  YYSYMBOL_expression = 55,                /* expression  */
  YYSYMBOL_logic_expression = 56,          /* logic_expression  */
  YYSYMBOL_rel_expression = 57,            /* rel_expression  */
  YYSYMBOL_simple_expression = 58,         /* simple_expression  */
  YYSYMBOL_term = 59,                      /* term  */
  YYSYMBOL_unary_expression = 60,          /* unary_expression  */
  YYSYMBOL_factor = 61,                    /* factor  */
  YYSYMBOL_argument_list = 62,             /* argument_list  */
  YYSYMBOL_arguments = 63                  /* arguments  */
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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_int8 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   184

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  115

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    30,    30,    36,    43,    52,    57,    64,    70,    80,
      85,    90,    95,   102,   107,   114,   121,   126,   131,   138,
     143,   148,   153,   160,   165,   172,   177,   182,   187,   192,
     197,   202,   207,   212,   219,   224,   231,   236,   243,   248,
     255,   260,   267,   272,   279,   284,   291,   296,   303,   308,
     313,   320,   325,   331,   336,   341,   346,   351,   358,   363,
     370,   375
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IF", "ELSE", "FOR",
  "WHILE", "DO", "BREAK", "CONTINUE", "RETURN", "INT", "FLOAT", "CHAR",
  "DOUBLE", "VOID", "SWITCH", "CASE", "DEFAULT", "PRINTLN", "GOTO",
  "ADDOP", "MULOP", "INCOP", "DECOP", "RELOP", "ASSIGNOP", "LOGICOP",
  "NOT", "LPAREN", "RPAREN", "LCURL", "RCURL", "LTHIRD", "RTHIRD", "COMMA",
  "COLON", "SEMICOLON", "ID", "CONST_INT", "CONST_FLOAT", "$accept",
  "start", "program", "unit", "func_definition", "parameter_list",
  "compound_statement", "var_declaration", "type_specifier",
  "declaration_list", "statements", "statement", "expression_statement",
  "variable", "expression", "logic_expression", "rel_expression",
  "simple_expression", "term", "unary_expression", "factor",
  "argument_list", "arguments", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-58)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      27,   -58,   -58,   -58,    10,    27,   -58,   -58,   -58,   -18,
     -58,   -58,    19,    47,     6,    -8,    13,   -58,    23,   -24,
      21,    29,    39,    68,   -58,    23,    27,   -58,   -58,    42,
      59,    61,    63,    37,    64,    37,    37,    37,   -58,   -58,
      20,   -58,   -58,   -58,   -58,    53,   106,   -58,   -58,    38,
      57,   -58,    71,    35,    73,   -58,   -58,   -58,    65,    67,
      37,   -13,    37,    76,    66,    62,   -58,   -58,    72,    37,
      37,    77,   -58,   -58,   -58,   -58,    37,   -58,    37,    37,
      37,    37,   -58,   -58,    84,   -13,    85,   -58,    89,   -58,
     -58,    90,    87,    92,   -58,   -58,    73,   102,   -58,   144,
      37,   144,    91,   -58,    37,   -58,   120,    99,   -58,   -58,
     -58,   144,   144,   -58,   -58
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    16,    17,    18,     0,     2,     4,     6,     5,     0,
       1,     3,    21,     0,     0,     0,     0,    15,     0,     0,
      12,     0,    19,     0,     8,     0,     0,    11,    22,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,    34,
      36,    54,    55,    27,    25,     0,     0,    23,    26,    51,
       0,    38,    40,    42,    44,    46,    50,     7,    10,     0,
       0,     0,     0,     0,     0,    51,    48,    49,     0,    59,
       0,    21,    13,    24,    56,    57,     0,    35,     0,     0,
       0,     0,     9,    20,     0,     0,     0,    33,     0,    53,
      61,     0,    58,     0,    39,    41,    45,    43,    47,     0,
       0,     0,     0,    52,     0,    37,    29,     0,    31,    32,
      60,     0,     0,    30,    28
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -58,   -58,   -58,   125,   -58,   -58,     4,    28,     9,   -58,
     -58,   -44,   -48,   -35,   -30,   -57,    54,    51,    60,   -31,
     -58,   -58,   -58
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     4,     5,     6,     7,    19,    43,    44,    45,    13,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    91,    92
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      65,    65,    73,    63,    66,    67,    25,    68,    35,     9,
      10,    26,    90,    85,     9,    36,    37,     1,     2,    94,
      12,     3,    24,    20,    39,    40,    41,    42,     8,    57,
      84,    21,    86,     8,    65,    58,    18,   100,     1,     2,
      93,    65,     3,    65,    65,    65,    65,   110,    14,    69,
      98,    22,    15,    70,    23,   106,    79,   108,    35,    27,
      80,    74,    75,    28,    76,    36,    37,   113,   114,    65,
     107,    30,    29,    31,    32,    40,    41,    42,    33,     1,
       2,    59,    16,     3,    17,    74,    75,    34,    60,    35,
      61,    71,    62,    64,    77,    81,    36,    37,    78,    23,
      38,    83,    89,    82,    88,    39,    40,    41,    42,    30,
      15,    31,    32,    87,    99,   101,    33,     1,     2,   102,
     103,     3,   104,    79,   111,    34,   105,    35,   109,   112,
      11,    97,    95,     0,    36,    37,     0,    23,    72,    96,
       0,     0,     0,    39,    40,    41,    42,    30,     0,    31,
      32,     0,     0,     0,    33,     1,     2,     0,     0,     3,
       0,     0,     0,    34,     0,    35,     0,     0,     0,     0,
       0,     0,    36,    37,     0,    23,     0,     0,     0,     0,
       0,    39,    40,    41,    42
};

static const yytype_int8 yycheck[] =
{
      35,    36,    46,    33,    35,    36,    30,    37,    21,     0,
       0,    35,    69,    61,     5,    28,    29,    11,    12,    76,
      38,    15,    18,    14,    37,    38,    39,    40,     0,    25,
      60,    39,    62,     5,    69,    26,    30,    85,    11,    12,
      70,    76,    15,    78,    79,    80,    81,   104,    29,    29,
      81,    38,    33,    33,    31,    99,    21,   101,    21,    38,
      25,    23,    24,    34,    26,    28,    29,   111,   112,   104,
     100,     3,    33,     5,     6,    38,    39,    40,    10,    11,
      12,    39,    35,    15,    37,    23,    24,    19,    29,    21,
      29,    38,    29,    29,    37,    22,    28,    29,    27,    31,
      32,    34,    30,    38,    38,    37,    38,    39,    40,     3,
      33,     5,     6,    37,    30,    30,    10,    11,    12,    30,
      30,    15,    35,    21,     4,    19,    34,    21,    37,    30,
       5,    80,    78,    -1,    28,    29,    -1,    31,    32,    79,
      -1,    -1,    -1,    37,    38,    39,    40,     3,    -1,     5,
       6,    -1,    -1,    -1,    10,    11,    12,    -1,    -1,    15,
      -1,    -1,    -1,    19,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    37,    38,    39,    40
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    11,    12,    15,    42,    43,    44,    45,    48,    49,
       0,    44,    38,    50,    29,    33,    35,    37,    30,    46,
      49,    39,    38,    31,    47,    30,    35,    38,    34,    33,
       3,     5,     6,    10,    19,    21,    28,    29,    32,    37,
      38,    39,    40,    47,    48,    49,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    47,    49,    39,
      29,    29,    29,    55,    29,    54,    60,    60,    55,    29,
      33,    38,    32,    52,    23,    24,    26,    37,    27,    21,
      25,    22,    38,    34,    55,    53,    55,    37,    38,    30,
      56,    62,    63,    55,    56,    57,    59,    58,    60,    30,
      53,    30,    30,    30,    35,    34,    52,    55,    52,    37,
      56,     4,    30,    52,    52
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    43,    43,    44,    44,    45,    45,    46,
      46,    46,    46,    47,    47,    48,    49,    49,    49,    50,
      50,    50,    50,    51,    51,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    53,    53,    54,    54,    55,    55,
      56,    56,    57,    57,    58,    58,    59,    59,    60,    60,
      60,    61,    61,    61,    61,    61,    61,    61,    62,    62,
      63,    63
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     6,     5,     4,
       3,     2,     1,     3,     2,     3,     1,     1,     1,     3,
       6,     1,     4,     1,     2,     1,     1,     1,     7,     5,
       7,     5,     5,     3,     1,     2,     1,     4,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     2,     2,
       1,     1,     4,     3,     1,     1,     2,     2,     1,     0,
       3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
  case 2: /* start: program  */
#line 31 "22101783+22201782.y"
        {
		outlog<<"At line no: "<<lines<<" start : program "<<endl<<endl;
	}
#line 1358 "y.tab.c"
    break;

  case 3: /* program: program unit  */
#line 37 "22101783+22201782.y"
        {
		outlog<<"At line no: "<<lines<<" program : program unit "<<endl<<endl;
		outlog<<yyvsp[-1]->getname()+"\n"+yyvsp[0]->getname()<<endl<<endl;
		
		yyval = new symbol_info(yyvsp[-1]->getname()+"\n"+yyvsp[0]->getname(),"program");
	}
#line 1369 "y.tab.c"
    break;

  case 4: /* program: unit  */
#line 44 "22101783+22201782.y"
        {
		outlog<<"At line no: "<<lines<<" program : program unit "<<endl<<endl;
		outlog<<yyvsp[0]->getname()<<endl<<endl;
		
		yyval = new symbol_info(yyvsp[0]->getname(),"program");
	}
#line 1380 "y.tab.c"
    break;

  case 5: /* unit: var_declaration  */
#line 52 "22101783+22201782.y"
                      {
    outlog << "At line no: " << lines << " unit: var_declaration" << endl << endl;
    outlog << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info(yyvsp[0]->getname(), "unit");
}
#line 1390 "y.tab.c"
    break;

  case 6: /* unit: func_definition  */
#line 57 "22101783+22201782.y"
                  {
    outlog << "At line no: " << lines << " unit: func_definition" << endl << endl;
    outlog << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info(yyvsp[0]->getname(), "unit");
}
#line 1400 "y.tab.c"
    break;

  case 7: /* func_definition: type_specifier ID LPAREN parameter_list RPAREN compound_statement  */
#line 65 "22101783+22201782.y"
                {	
			outlog << "At line no: " << lines << " func_definition: type_specifier ID LPAREN parameter_list RPAREN compound_statement" << endl << endl;
    outlog << yyvsp[-5]->getname() << " " << yyvsp[-4]->getname() << "(" << yyvsp[-2]->getname() << ")\n" << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info(yyvsp[-5]->getname() + " " + yyvsp[-4]->getname() + "(" + yyvsp[-2]->getname() + ")\n" + yyvsp[0]->getname(), "func_def");
		}
#line 1410 "y.tab.c"
    break;

  case 8: /* func_definition: type_specifier ID LPAREN RPAREN compound_statement  */
#line 71 "22101783+22201782.y"
                {
			
			outlog<<"At line no: "<<lines<<" func_definition : type_specifier ID LPAREN RPAREN compound_statement "<<endl<<endl;
			outlog<<yyvsp[-4]->getname()<<" "<<yyvsp[-3]->getname()<<"()\n"<<yyvsp[0]->getname()<<endl<<endl;
			
			yyval = new symbol_info(yyvsp[-4]->getname()+" "+yyvsp[-3]->getname()+"()\n"+yyvsp[0]->getname(),"func_def");	
		}
#line 1422 "y.tab.c"
    break;

  case 9: /* parameter_list: parameter_list COMMA type_specifier ID  */
#line 80 "22101783+22201782.y"
                                                       {
    outlog << "At line no: " << lines << " parameter_list: parameter_list COMMA type_specifier ID" << endl << endl;
    outlog << yyvsp[-3]->getname() << "," << yyvsp[-1]->getname() << " " << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info(yyvsp[-3]->getname() + "," + yyvsp[-1]->getname() + " " + yyvsp[0]->getname(), "parameter_list");
}
#line 1432 "y.tab.c"
    break;

  case 10: /* parameter_list: parameter_list COMMA type_specifier  */
#line 85 "22101783+22201782.y"
                                      {
    outlog << "At line no: " << lines << " parameter_list: parameter_list COMMA type_specifier" << endl << endl;
    outlog << yyvsp[-2]->getname() << "," << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info(yyvsp[-2]->getname() + "," + yyvsp[0]->getname(), "parameter_list");
}
#line 1442 "y.tab.c"
    break;

  case 11: /* parameter_list: type_specifier ID  */
#line 90 "22101783+22201782.y"
                    {
    outlog << "At line no: " << lines << " parameter_list: type_specifier ID" << endl << endl;
    outlog << yyvsp[-1]->getname() << " " << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info(yyvsp[-1]->getname() + " " + yyvsp[0]->getname(), "parameter_list");
}
#line 1452 "y.tab.c"
    break;

  case 12: /* parameter_list: type_specifier  */
#line 95 "22101783+22201782.y"
                 {
    outlog << "At line no: " << lines << " parameter_list: type_specifier" << endl << endl;
    outlog << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info(yyvsp[0]->getname(), "parameter_list");
}
#line 1462 "y.tab.c"
    break;

  case 13: /* compound_statement: LCURL statements RCURL  */
#line 102 "22101783+22201782.y"
                                           {
    outlog << "At line no: " << lines << " compound_statement: LCURL statements RCURL" << endl << endl;
    outlog << "{\n" << yyvsp[-1]->getname() << "\n}" << endl << endl;
    yyval = new symbol_info("{\n" + yyvsp[-1]->getname() + "\n}", "compound_statement");
}
#line 1472 "y.tab.c"
    break;

  case 14: /* compound_statement: LCURL RCURL  */
#line 107 "22101783+22201782.y"
              {
    outlog << "At line no: " << lines << " compound_statement: LCURL RCURL" << endl << endl;
    outlog << "{}" << endl << endl;
    yyval = new symbol_info("{}", "compound_statement");
}
#line 1482 "y.tab.c"
    break;

  case 15: /* var_declaration: type_specifier declaration_list SEMICOLON  */
#line 114 "22101783+22201782.y"
                                                           {
    outlog << "At line no: " << lines << " var_declaration: type_specifier declaration_list SEMICOLON" << endl << endl;
    outlog << yyvsp[-2]->getname() << yyvsp[-1]->getname() << ";" << endl << endl;
    yyval = new symbol_info(yyvsp[-2]->getname() + yyvsp[-1]->getname() + ";", "var_declaration");
}
#line 1492 "y.tab.c"
    break;

  case 16: /* type_specifier: INT  */
#line 121 "22101783+22201782.y"
                    {
    outlog << "At line no: " << lines << " type_specifier: INT" << endl << endl;
    outlog << "int " << endl << endl;
    yyval = new symbol_info("int ", "type_specifier");
}
#line 1502 "y.tab.c"
    break;

  case 17: /* type_specifier: FLOAT  */
#line 126 "22101783+22201782.y"
        {
    outlog << "At line no: " << lines << " type_specifier: FLOAT" << endl << endl;
    outlog << "float " << endl << endl;
    yyval = new symbol_info("float ", "type_specifier");
}
#line 1512 "y.tab.c"
    break;

  case 18: /* type_specifier: VOID  */
#line 131 "22101783+22201782.y"
       {
    outlog << "At line no: " << lines << " type_specifier: VOID" << endl << endl;
    outlog << "void " << endl << endl;
    yyval = new symbol_info("void ", "type_specifier");
}
#line 1522 "y.tab.c"
    break;

  case 19: /* declaration_list: declaration_list COMMA ID  */
#line 138 "22101783+22201782.y"
                                            {
    outlog << "At line no: " << lines << " declaration_list: declaration_list COMMA ID" << endl << endl;
    outlog << yyvsp[-2]->getname() << "," << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info(yyvsp[-2]->getname() + "," + yyvsp[0]->getname(), "declaration_list");
}
#line 1532 "y.tab.c"
    break;

  case 20: /* declaration_list: declaration_list COMMA ID LTHIRD CONST_INT RTHIRD  */
#line 143 "22101783+22201782.y"
                                                    {
    outlog << "At line no: " << lines << " declaration_list: declaration_list COMMA ID LTHIRD CONST_INT RTHIRD" << endl << endl;
    outlog << yyvsp[-5]->getname() << "," << yyvsp[-3]->getname() << "[" << yyvsp[-1]->getname() << "]" << endl << endl;
    yyval = new symbol_info(yyvsp[-5]->getname() + "," + yyvsp[-3]->getname() + "[" + yyvsp[-1]->getname() + "]", "declaration_list");
}
#line 1542 "y.tab.c"
    break;

  case 21: /* declaration_list: ID  */
#line 148 "22101783+22201782.y"
     {
    outlog << "At line no: " << lines << " declaration_list: ID" << endl << endl;
    outlog << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info(yyvsp[0]->getname(), "declaration_list");
}
#line 1552 "y.tab.c"
    break;

  case 22: /* declaration_list: ID LTHIRD CONST_INT RTHIRD  */
#line 153 "22101783+22201782.y"
                             {
    outlog << "At line no: " << lines << " declaration_list: ID LTHIRD CONST_INT RTHIRD" << endl << endl;
    outlog << yyvsp[-3]->getname() << "[" << yyvsp[-1]->getname() << "]" << endl << endl;
    yyval = new symbol_info(yyvsp[-3]->getname() + "[" + yyvsp[-1]->getname() + "]", "declaration_list");
}
#line 1562 "y.tab.c"
    break;

  case 23: /* statements: statement  */
#line 160 "22101783+22201782.y"
                      {
    outlog << "At line no: " << lines << " statements: statement " << endl << endl;
    outlog << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info(yyvsp[0]->getname(), "statements");
}
#line 1572 "y.tab.c"
    break;

  case 24: /* statements: statements statement  */
#line 165 "22101783+22201782.y"
                       {
    outlog << "At line no: " << lines << " statements: statements statement " << endl << endl;
    outlog << yyvsp[-1]->getname() << "\n" << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info(yyvsp[-1]->getname() + "\n" + yyvsp[0]->getname(), "statements");
}
#line 1582 "y.tab.c"
    break;

  case 25: /* statement: var_declaration  */
#line 172 "22101783+22201782.y"
                           {
    outlog << "At line no: " << lines << " statement: var_declaration" << endl << endl;
    outlog << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info(yyvsp[0]->getname(), "statement");
}
#line 1592 "y.tab.c"
    break;

  case 26: /* statement: expression_statement  */
#line 177 "22101783+22201782.y"
                       {
    outlog << "At line no: " << lines << " statement: expression_statement" << endl << endl;
    outlog << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info(yyvsp[0]->getname(), "statement");
}
#line 1602 "y.tab.c"
    break;

  case 27: /* statement: compound_statement  */
#line 182 "22101783+22201782.y"
                     {
    outlog << "At line no: " << lines << " statement: compound_statement" << endl << endl;
    outlog << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info(yyvsp[0]->getname(), "statement");
}
#line 1612 "y.tab.c"
    break;

  case 28: /* statement: FOR LPAREN expression_statement expression_statement expression RPAREN statement  */
#line 187 "22101783+22201782.y"
                                                                                   {
    outlog << "At line no: " << lines << " statement: FOR LPAREN expression_statement expression_statement expression RPAREN statement " << endl << endl;
    outlog << "for(" << yyvsp[-4]->getname() << yyvsp[-3]->getname() << yyvsp[-2]->getname() << ")\n" << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info("for(" + yyvsp[-4]->getname() + yyvsp[-3]->getname() + yyvsp[-2]->getname() + ")\n" + yyvsp[0]->getname(), "statement");
}
#line 1622 "y.tab.c"
    break;

  case 29: /* statement: IF LPAREN expression RPAREN statement  */
#line 192 "22101783+22201782.y"
                                        {
    outlog << "At line no: " << lines << " statement: IF LPAREN expression RPAREN statement" << endl << endl;
    outlog << "if(" << yyvsp[-2]->getname() << ")\n" << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info("if(" + yyvsp[-2]->getname() + ")\n" + yyvsp[0]->getname(), "statement");
}
#line 1632 "y.tab.c"
    break;

  case 30: /* statement: IF LPAREN expression RPAREN statement ELSE statement  */
#line 197 "22101783+22201782.y"
                                                       {
    outlog << "At line no: " << lines << " statement: IF LPAREN expression RPAREN statement ELSE statement" << endl << endl;
    outlog << "if(" << yyvsp[-4]->getname() << ")\n" << yyvsp[-2]->getname() << "\nelse\n" << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info("if(" + yyvsp[-4]->getname() + ")\n" + yyvsp[-2]->getname() + "\nelse\n" + yyvsp[0]->getname(), "statement");
}
#line 1642 "y.tab.c"
    break;

  case 31: /* statement: WHILE LPAREN expression RPAREN statement  */
#line 202 "22101783+22201782.y"
                                           {
    outlog << "At line no: " << lines << " statement: WHILE LPAREN expression RPAREN statement" << endl << endl;
    outlog << "while(" << yyvsp[-2]->getname() << ")\n" << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info("while(" + yyvsp[-2]->getname() + ")\n" + yyvsp[0]->getname(), "statement");
}
#line 1652 "y.tab.c"
    break;

  case 32: /* statement: PRINTLN LPAREN ID RPAREN SEMICOLON  */
#line 207 "22101783+22201782.y"
                                     {
    outlog << "At line no: " << lines << " statement: PRINTLN LPAREN ID RPAREN SEMICOLON" << endl << endl;
    outlog << "printf(" << yyvsp[-2]->getname() << ");" << endl << endl;
    yyval = new symbol_info("printf(" + yyvsp[-2]->getname() + ");", "statement");
}
#line 1662 "y.tab.c"
    break;

  case 33: /* statement: RETURN expression SEMICOLON  */
#line 212 "22101783+22201782.y"
                              {
    outlog << "At line no: " << lines << " statement: RETURN expression SEMICOLON" << endl << endl;
    outlog << "return " << yyvsp[-1]->getname() << ";" << endl << endl;
    yyval = new symbol_info("return " + yyvsp[-1]->getname() + ";", "statement");
}
#line 1672 "y.tab.c"
    break;

  case 34: /* expression_statement: SEMICOLON  */
#line 219 "22101783+22201782.y"
                                {
    outlog << "At line no: " << lines << " expression_statement: SEMICOLON" << endl << endl;
    outlog << ";" << endl << endl;
    yyval = new symbol_info(";", "expression_statement");
}
#line 1682 "y.tab.c"
    break;

  case 35: /* expression_statement: expression SEMICOLON  */
#line 224 "22101783+22201782.y"
                       {
    outlog << "At line no: " << lines << " expression_statement: expression SEMICOLON" << endl << endl;
    outlog << yyvsp[-1]->getname() << ";" << endl << endl;
    yyval = new symbol_info(yyvsp[-1]->getname() + ";", "expression_statement");
}
#line 1692 "y.tab.c"
    break;

  case 36: /* variable: ID  */
#line 231 "22101783+22201782.y"
             {
    outlog << "At line no: " << lines << " variable: ID " << endl << endl;
    outlog << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info(yyvsp[0]->getname(), "variable");
}
#line 1702 "y.tab.c"
    break;

  case 37: /* variable: ID LTHIRD expression RTHIRD  */
#line 236 "22101783+22201782.y"
                              {
    outlog << "At line no: " << lines << " variable: ID LTHIRD expression RTHIRD " << endl << endl;
    outlog << yyvsp[-3]->getname() << "[" << yyvsp[-1]->getname() << "]" << endl << endl;
    yyval = new symbol_info(yyvsp[-3]->getname() + "[" + yyvsp[-1]->getname() + "]", "variable");
}
#line 1712 "y.tab.c"
    break;

  case 38: /* expression: logic_expression  */
#line 243 "22101783+22201782.y"
                             {
    outlog << "At line no: " << lines << " expression: logic_expression " << endl << endl;
    outlog << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info(yyvsp[0]->getname(), "expression");
}
#line 1722 "y.tab.c"
    break;

  case 39: /* expression: variable ASSIGNOP logic_expression  */
#line 248 "22101783+22201782.y"
                                     {
    outlog << "At line no: " << lines << " expression: variable ASSIGNOP logic_expression " << endl << endl;
    outlog << yyvsp[-2]->getname() << " = " << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info(yyvsp[-2]->getname() + " = " + yyvsp[0]->getname(), "expression");
}
#line 1732 "y.tab.c"
    break;

  case 40: /* logic_expression: rel_expression  */
#line 255 "22101783+22201782.y"
                                 {
    outlog << "At line no: " << lines << " logic_expression: rel_expression " << endl << endl;
    outlog << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info(yyvsp[0]->getname(), "logic_expression");
}
#line 1742 "y.tab.c"
    break;

  case 41: /* logic_expression: rel_expression LOGICOP rel_expression  */
#line 260 "22101783+22201782.y"
                                        {
    outlog << "At line no: " << lines << " logic_expression: rel_expression LOGICOP rel_expression " << endl << endl;
    outlog << yyvsp[-2]->getname() << yyvsp[-1]->getname() << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info(yyvsp[-2]->getname() + yyvsp[-1]->getname() + yyvsp[0]->getname(), "logic_expression");
}
#line 1752 "y.tab.c"
    break;

  case 42: /* rel_expression: simple_expression  */
#line 267 "22101783+22201782.y"
                                  {
    outlog << "At line no: " << lines << " rel_expression: simple_expression" << endl << endl;
    outlog << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info(yyvsp[0]->getname(), "rel_expression");
}
#line 1762 "y.tab.c"
    break;

  case 43: /* rel_expression: simple_expression RELOP simple_expression  */
#line 272 "22101783+22201782.y"
                                            {
    outlog << "At line no: " << lines << " rel_expression: simple_expression RELOP simple_expression" << endl << endl;
    outlog << yyvsp[-2]->getname() << yyvsp[-1]->getname() << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info(yyvsp[-2]->getname() + yyvsp[-1]->getname() + yyvsp[0]->getname(), "rel_expression");
}
#line 1772 "y.tab.c"
    break;

  case 44: /* simple_expression: term  */
#line 279 "22101783+22201782.y"
                        {
    outlog << "At line no: " << lines << " simple_expression: term" << endl << endl;
    outlog << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info(yyvsp[0]->getname(), "simple_expression");
}
#line 1782 "y.tab.c"
    break;

  case 45: /* simple_expression: simple_expression ADDOP term  */
#line 284 "22101783+22201782.y"
                               {
    outlog << "At line no: " << lines << " simple_expression: simple_expression ADDOP term " << endl << endl;
    outlog << yyvsp[-2]->getname() << yyvsp[-1]->getname() << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info(yyvsp[-2]->getname() + yyvsp[-1]->getname() + yyvsp[0]->getname(), "simple_expression");
}
#line 1792 "y.tab.c"
    break;

  case 46: /* term: unary_expression  */
#line 291 "22101783+22201782.y"
                       {
    outlog << "At line no: " << lines << " term: unary_expression " << endl << endl;
    outlog << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info(yyvsp[0]->getname(), "term");
}
#line 1802 "y.tab.c"
    break;

  case 47: /* term: term MULOP unary_expression  */
#line 296 "22101783+22201782.y"
                              {
    outlog << "At line no: " << lines << " term: term MULOP unary_expression " << endl << endl;
    outlog << yyvsp[-2]->getname() << yyvsp[-1]->getname() << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info(yyvsp[-2]->getname() + yyvsp[-1]->getname() + yyvsp[0]->getname(), "term");
}
#line 1812 "y.tab.c"
    break;

  case 48: /* unary_expression: ADDOP unary_expression  */
#line 303 "22101783+22201782.y"
                                         {
    outlog << "At line no: " << lines << " unary_expression: ADDOP unary_expression " << endl << endl;
    outlog << yyvsp[-1]->getname() << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info(yyvsp[-1]->getname() + yyvsp[0]->getname(), "unary_expression");
}
#line 1822 "y.tab.c"
    break;

  case 49: /* unary_expression: NOT unary_expression  */
#line 308 "22101783+22201782.y"
                       {
    outlog << "At line no: " << lines << " unary_expression: NOT unary_expression " << endl << endl;
    outlog << "!" << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info("!" + yyvsp[0]->getname(), "unary_expression");
}
#line 1832 "y.tab.c"
    break;

  case 50: /* unary_expression: factor  */
#line 313 "22101783+22201782.y"
         {
    outlog << "At line no: " << lines << " unary_expression: factor " << endl << endl;
    outlog << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info(yyvsp[0]->getname(), "unary_expression");
}
#line 1842 "y.tab.c"
    break;

  case 51: /* factor: variable  */
#line 320 "22101783+22201782.y"
                 {
    outlog << "At line no: " << lines << " factor: variable" << endl << endl;
    outlog << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info(yyvsp[0]->getname(), "factor");
}
#line 1852 "y.tab.c"
    break;

  case 52: /* factor: ID LPAREN argument_list RPAREN  */
#line 325 "22101783+22201782.y"
                                 {
    outlog << "At line no: " << lines << " factor: ID LPAREN argument_list RPAREN" << endl << endl;
    outlog << yyvsp[-3]->getname() << "(" << yyvsp[-1]->getname() << ")" << endl << endl;
    yyval = new symbol_info(yyvsp[-3]->getname() + "(" + yyvsp[-1]->getname() + ")", "factor");
}
#line 1862 "y.tab.c"
    break;

  case 53: /* factor: LPAREN expression RPAREN  */
#line 331 "22101783+22201782.y"
                           {
    outlog << "At line no: " << lines << " factor: LPAREN expression RPAREN" << endl << endl;
    outlog << "(" << yyvsp[-1]->getname() << ")" << endl << endl;
    yyval = new symbol_info("(" + yyvsp[-1]->getname() + ")", "factor");
}
#line 1872 "y.tab.c"
    break;

  case 54: /* factor: CONST_INT  */
#line 336 "22101783+22201782.y"
            {
    outlog << "At line no: " << lines << " factor: CONST_INT" << endl << endl;
    outlog << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info(yyvsp[0]->getname(), "factor");
}
#line 1882 "y.tab.c"
    break;

  case 55: /* factor: CONST_FLOAT  */
#line 341 "22101783+22201782.y"
              {
    outlog << "At line no: " << lines << " factor: CONST_FLOAT" << endl << endl;
    outlog << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info(yyvsp[0]->getname(), "factor");
}
#line 1892 "y.tab.c"
    break;

  case 56: /* factor: variable INCOP  */
#line 346 "22101783+22201782.y"
                 {
    outlog << "At line no: " << lines << " factor: variable INCOP" << endl << endl;
    outlog << yyvsp[-1]->getname() << "++" << endl << endl;
    yyval = new symbol_info(yyvsp[-1]->getname() + "++", "factor");
}
#line 1902 "y.tab.c"
    break;

  case 57: /* factor: variable DECOP  */
#line 351 "22101783+22201782.y"
                 {
    outlog << "At line no: " << lines << " factor: variable DECOP" << endl << endl;
    outlog << yyvsp[-1]->getname() << "--" << endl << endl;
    yyval = new symbol_info(yyvsp[-1]->getname() + "--", "factor");
}
#line 1912 "y.tab.c"
    break;

  case 58: /* argument_list: arguments  */
#line 358 "22101783+22201782.y"
                         {
    outlog << "At line no: " << lines << " argument_list: arguments" << endl << endl;
    outlog << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info(yyvsp[0]->getname(), "argument_list");
}
#line 1922 "y.tab.c"
    break;

  case 59: /* argument_list: %empty  */
#line 363 "22101783+22201782.y"
  {
    outlog << "At line no: " << lines << " argument_list: " << endl << endl;
    outlog << " " << endl << endl;
    yyval = new symbol_info(" ", "argument_list");
}
#line 1932 "y.tab.c"
    break;

  case 60: /* arguments: arguments COMMA logic_expression  */
#line 370 "22101783+22201782.y"
                                            {
    outlog << "At line no: " << lines << " arguments: arguments COMMA logic_expression" << endl << endl;
    outlog << yyvsp[-2]->getname() << "," << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info(yyvsp[-2]->getname() + "," + yyvsp[0]->getname(), "arguments");
}
#line 1942 "y.tab.c"
    break;

  case 61: /* arguments: logic_expression  */
#line 375 "22101783+22201782.y"
                   {
    outlog << "At line no: " << lines << " arguments: logic_expression" << endl << endl;
    outlog << yyvsp[0]->getname() << endl << endl;
    yyval = new symbol_info(yyvsp[0]->getname(), "arguments");
}
#line 1952 "y.tab.c"
    break;


#line 1956 "y.tab.c"

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
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

  return yyresult;
}

#line 384 "22101783+22201782.y"


int main(int argc, char *argv[])
{
	if(argc != 2) 
	{
        // check if filename given
		cout<<"Please input file name"<<endl;
		return 0;
    	}
	yyin = fopen(argv[1], "r");
	outlog.open("22101783+22201782.txt", ios::trunc);
	
	if(yyin == NULL)
	{
		cout<<"Couldn't open file"<<endl;
		return 0;
	}
    
	yyparse();
	
	//print number of lines
	outlog << "Total number of lines: " << lines << endl << endl;
	outlog.close();
	
	fclose(yyin);
	
	return 0;
}
