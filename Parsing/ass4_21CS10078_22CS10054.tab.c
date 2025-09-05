/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     AUTO = 258,
     BREAK = 259,
     CASE = 260,
     CHAR = 261,
     CONST = 262,
     CONTINUE = 263,
     DEFAULT = 264,
     DO = 265,
     DOUBLE = 266,
     ELSE = 267,
     ENUM = 268,
     EXTERN = 269,
     FLOAT = 270,
     FOR = 271,
     GOTO = 272,
     IF = 273,
     INLINE = 274,
     INT = 275,
     LONG = 276,
     REGISTER = 277,
     RESTRICT = 278,
     RETURN = 279,
     SHORT = 280,
     SIGNED = 281,
     SIZEOF = 282,
     STATIC = 283,
     STRUCT = 284,
     SWITCH = 285,
     TYPEDEF = 286,
     UNION = 287,
     UNSIGNED = 288,
     VOID = 289,
     VOLATILE = 290,
     WHILE = 291,
     _BOOL = 292,
     _COMPLEX = 293,
     _IMAGINARY = 294,
     IDENTIFIER = 295,
     INTEGER_CONSTANT = 296,
     FLOATING_CONSTANT = 297,
     CHARACTER_CONSTANT = 298,
     STRING_LITERAL = 299,
     LEFT_SQUARE_BRACKET = 300,
     INCREMENT = 301,
     SLASH = 302,
     QUESTION_MARK = 303,
     ASSIGNMENT = 304,
     COMMA = 305,
     RIGHT_SQUARE_BRACKET = 306,
     LEFT_PARENTHESES = 307,
     LEFT_CURLY_BRACKET = 308,
     RIGHT_CURLY_BRACKET = 309,
     DOT = 310,
     ARROW = 311,
     ASTERISK = 312,
     PLUS = 313,
     MINUS = 314,
     TILDE = 315,
     EXCLAMATION = 316,
     MODULO = 317,
     LEFT_SHIFT = 318,
     RIGHT_SHIFT = 319,
     LESS_THAN = 320,
     GREATER_THAN = 321,
     LESS_EQUAL_THAN = 322,
     GREATER_EQUAL_THAN = 323,
     COLON = 324,
     SEMI_COLON = 325,
     ELLIPSIS = 326,
     ASTERISK_ASSIGNMENT = 327,
     SLASH_ASSIGNMENT = 328,
     MODULO_ASSIGNMENT = 329,
     PLUS_ASSIGNMENT = 330,
     MINUS_ASSIGNMENT = 331,
     LEFT_SHIFT_ASSIGNMENT = 332,
     HASH = 333,
     DECREMENT = 334,
     RIGHT_PARENTHESES = 335,
     BITWISE_AND = 336,
     EQUALS = 337,
     BITWISE_XOR = 338,
     BITWISE_OR = 339,
     LOGICAL_AND = 340,
     LOGICAL_OR = 341,
     RIGHT_SHIFT_ASSIGNMENT = 342,
     NOT_EQUALS = 343,
     BITWISE_AND_ASSIGNMENT = 344,
     BITWISE_OR_ASSIGNMENT = 345,
     BITWISE_XOR_ASSIGNMENT = 346,
     INVALID_TOKEN = 347
   };
#endif
/* Tokens.  */
#define AUTO 258
#define BREAK 259
#define CASE 260
#define CHAR 261
#define CONST 262
#define CONTINUE 263
#define DEFAULT 264
#define DO 265
#define DOUBLE 266
#define ELSE 267
#define ENUM 268
#define EXTERN 269
#define FLOAT 270
#define FOR 271
#define GOTO 272
#define IF 273
#define INLINE 274
#define INT 275
#define LONG 276
#define REGISTER 277
#define RESTRICT 278
#define RETURN 279
#define SHORT 280
#define SIGNED 281
#define SIZEOF 282
#define STATIC 283
#define STRUCT 284
#define SWITCH 285
#define TYPEDEF 286
#define UNION 287
#define UNSIGNED 288
#define VOID 289
#define VOLATILE 290
#define WHILE 291
#define _BOOL 292
#define _COMPLEX 293
#define _IMAGINARY 294
#define IDENTIFIER 295
#define INTEGER_CONSTANT 296
#define FLOATING_CONSTANT 297
#define CHARACTER_CONSTANT 298
#define STRING_LITERAL 299
#define LEFT_SQUARE_BRACKET 300
#define INCREMENT 301
#define SLASH 302
#define QUESTION_MARK 303
#define ASSIGNMENT 304
#define COMMA 305
#define RIGHT_SQUARE_BRACKET 306
#define LEFT_PARENTHESES 307
#define LEFT_CURLY_BRACKET 308
#define RIGHT_CURLY_BRACKET 309
#define DOT 310
#define ARROW 311
#define ASTERISK 312
#define PLUS 313
#define MINUS 314
#define TILDE 315
#define EXCLAMATION 316
#define MODULO 317
#define LEFT_SHIFT 318
#define RIGHT_SHIFT 319
#define LESS_THAN 320
#define GREATER_THAN 321
#define LESS_EQUAL_THAN 322
#define GREATER_EQUAL_THAN 323
#define COLON 324
#define SEMI_COLON 325
#define ELLIPSIS 326
#define ASTERISK_ASSIGNMENT 327
#define SLASH_ASSIGNMENT 328
#define MODULO_ASSIGNMENT 329
#define PLUS_ASSIGNMENT 330
#define MINUS_ASSIGNMENT 331
#define LEFT_SHIFT_ASSIGNMENT 332
#define HASH 333
#define DECREMENT 334
#define RIGHT_PARENTHESES 335
#define BITWISE_AND 336
#define EQUALS 337
#define BITWISE_XOR 338
#define BITWISE_OR 339
#define LOGICAL_AND 340
#define LOGICAL_OR 341
#define RIGHT_SHIFT_ASSIGNMENT 342
#define NOT_EQUALS 343
#define BITWISE_AND_ASSIGNMENT 344
#define BITWISE_OR_ASSIGNMENT 345
#define BITWISE_XOR_ASSIGNMENT 346
#define INVALID_TOKEN 347




/* Copy the first part of user declarations.  */
#line 1 "ass4_21CS10078_22CS10054.y"

    #include <stdio.h>
    extern int yylex();
    extern int lineCount;
    void yyerror(char *);
    void yyinfo(char *);


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 9 "ass4_21CS10078_22CS10054.y"
{
    int intVal;
    float floatVal;
    char *charVal;
    char *stringVal;
    char *identifierVal;
}
/* Line 193 of yacc.c.  */
#line 296 "ass4_21CS10078_22CS10054.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 309 "ass4_21CS10078_22CS10054.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   887

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  208
/* YYNRULES -- Number of states.  */
#define YYNSTATES  338

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   347

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    17,    19,
      24,    29,    33,    37,    40,    43,    50,    58,    60,    61,
      63,    67,    69,    72,    75,    78,    81,    86,    88,    90,
      92,    94,    96,    98,   100,   105,   107,   111,   115,   119,
     121,   125,   129,   131,   135,   139,   141,   145,   149,   153,
     157,   159,   163,   167,   169,   173,   175,   179,   181,   185,
     187,   191,   193,   197,   199,   205,   207,   211,   213,   215,
     217,   219,   221,   223,   225,   227,   229,   231,   233,   235,
     239,   241,   245,   247,   248,   251,   254,   257,   260,   262,
     263,   265,   269,   271,   275,   277,   279,   281,   283,   285,
     287,   289,   291,   293,   295,   297,   299,   301,   303,   305,
     307,   309,   312,   315,   317,   318,   324,   331,   334,   336,
     337,   339,   343,   345,   349,   351,   353,   355,   357,   360,
     362,   363,   365,   369,   375,   382,   389,   395,   400,   405,
     407,   408,   410,   411,   413,   414,   417,   421,   423,   426,
     428,   432,   434,   438,   441,   443,   445,   449,   451,   453,
     457,   462,   465,   470,   472,   473,   476,   478,   481,   485,
     488,   490,   492,   494,   496,   498,   500,   504,   509,   513,
     517,   519,   520,   522,   525,   527,   529,   532,   534,   535,
     541,   549,   555,   561,   569,   579,   588,   592,   595,   598,
     602,   604,   607,   609,   611,   616,   618,   619,   621
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     162,     0,    -1,    40,    -1,    41,    -1,    42,    -1,    43,
      -1,    44,    -1,    52,   114,    80,    -1,    94,    -1,    95,
      45,   114,    51,    -1,    95,    52,    96,    80,    -1,    95,
      55,    40,    -1,    95,    56,    40,    -1,    95,    46,    -1,
      95,    79,    -1,    52,   144,    80,    53,   146,    54,    -1,
      52,   144,    80,    53,   146,    50,    54,    -1,    97,    -1,
      -1,   112,    -1,    97,    50,   112,    -1,    95,    -1,    46,
      98,    -1,    79,    98,    -1,    99,   100,    -1,    27,    98,
      -1,    27,    52,   144,    80,    -1,    81,    -1,    57,    -1,
      58,    -1,    59,    -1,    60,    -1,    61,    -1,    98,    -1,
      52,   144,    80,   100,    -1,   100,    -1,   101,    57,   100,
      -1,   101,    47,   100,    -1,   101,    62,   100,    -1,   101,
      -1,   102,    58,   101,    -1,   102,    59,   101,    -1,   102,
      -1,   103,    63,   102,    -1,   103,    64,   102,    -1,   103,
      -1,   104,    65,   103,    -1,   104,    66,   103,    -1,   104,
      67,   103,    -1,   104,    68,   103,    -1,   104,    -1,   105,
      82,   104,    -1,   105,    88,   104,    -1,   105,    -1,   106,
      81,   105,    -1,   106,    -1,   107,    83,   106,    -1,   107,
      -1,   108,    84,   107,    -1,   108,    -1,   109,    85,   108,
      -1,   109,    -1,   110,    86,   109,    -1,   110,    -1,   110,
      48,   114,    69,   111,    -1,   111,    -1,    98,   113,   112,
      -1,    49,    -1,    72,    -1,    73,    -1,    74,    -1,    75,
      -1,    76,    -1,    77,    -1,    87,    -1,    89,    -1,    91,
      -1,    90,    -1,   112,    -1,   114,    50,   112,    -1,   111,
      -1,   118,   117,    70,    -1,   120,    -1,    -1,   122,   119,
      -1,   123,   119,    -1,   130,   119,    -1,   131,   119,    -1,
     118,    -1,    -1,   121,    -1,   120,    50,   121,    -1,   132,
      -1,   132,    49,   145,    -1,    14,    -1,    28,    -1,     3,
      -1,    22,    -1,    34,    -1,     6,    -1,    25,    -1,    20,
      -1,    21,    -1,    15,    -1,    11,    -1,    26,    -1,    33,
      -1,    37,    -1,    38,    -1,    39,    -1,   126,    -1,   123,
     125,    -1,   130,   125,    -1,   124,    -1,    -1,    13,   127,
      53,   128,    54,    -1,    13,   127,    53,   128,    50,    54,
      -1,    13,    40,    -1,    40,    -1,    -1,   129,    -1,   128,
      50,   129,    -1,    40,    -1,    40,    49,   115,    -1,     7,
      -1,    23,    -1,    35,    -1,    19,    -1,   133,   134,    -1,
     138,    -1,    -1,    40,    -1,    52,   132,    80,    -1,   134,
      45,   135,   136,    51,    -1,   134,    45,    28,   135,   112,
      51,    -1,   134,    45,   139,    28,   112,    51,    -1,   134,
      45,   135,    57,    51,    -1,   134,    52,   140,    80,    -1,
     134,    52,   137,    80,    -1,   139,    -1,    -1,   112,    -1,
      -1,   143,    -1,    -1,    57,   135,    -1,    57,   135,   138,
      -1,   130,    -1,   139,   130,    -1,   141,    -1,   141,    50,
      71,    -1,   142,    -1,   141,    50,   142,    -1,   118,   132,
      -1,   118,    -1,    40,    -1,   143,    50,    40,    -1,   124,
      -1,   112,    -1,    53,   146,    54,    -1,    53,   146,    50,
      54,    -1,   147,   145,    -1,   146,    50,   147,   145,    -1,
     148,    -1,    -1,   149,    49,    -1,   150,    -1,   149,   150,
      -1,    45,   115,    51,    -1,    55,    40,    -1,   152,    -1,
     153,    -1,   157,    -1,   159,    -1,   160,    -1,   161,    -1,
      40,    69,   151,    -1,     5,   115,    69,   151,    -1,     9,
      69,   151,    -1,    53,   154,    54,    -1,   155,    -1,    -1,
     156,    -1,   155,   156,    -1,   116,    -1,   151,    -1,   158,
      70,    -1,   114,    -1,    -1,    18,    52,   114,    80,   151,
      -1,    18,    52,   114,    80,   151,    12,   151,    -1,    30,
      52,   114,    80,   151,    -1,    36,    52,   114,    80,   151,
      -1,    10,   151,    36,    52,   114,    80,    70,    -1,    16,
      52,   158,    70,   158,    70,   158,    80,   151,    -1,    16,
      52,   116,   158,    70,   158,    80,   151,    -1,    17,    40,
      70,    -1,     8,    70,    -1,     4,    70,    -1,    24,   158,
      70,    -1,   163,    -1,   162,   163,    -1,   164,    -1,   116,
      -1,   118,   132,   165,   153,    -1,   166,    -1,    -1,   116,
      -1,   166,   116,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   121,   121,   123,   125,   127,   129,   131,   136,   138,
     140,   142,   144,   146,   148,   150,   152,   157,   160,   164,
     166,   171,   173,   175,   177,   179,   181,   186,   188,   190,
     192,   194,   196,   201,   203,   208,   210,   212,   214,   219,
     221,   223,   228,   230,   232,   237,   239,   241,   243,   245,
     250,   252,   254,   259,   261,   266,   268,   273,   275,   280,
     282,   287,   289,   294,   296,   301,   303,   308,   310,   312,
     314,   316,   318,   320,   322,   324,   326,   328,   333,   335,
     340,   347,   352,   355,   359,   361,   363,   365,   370,   373,
     377,   379,   384,   386,   391,   393,   395,   397,   402,   404,
     406,   408,   410,   412,   414,   416,   418,   420,   422,   424,
     426,   431,   433,   438,   441,   445,   447,   449,   454,   457,
     461,   463,   468,   470,   475,   477,   479,   484,   489,   494,
     497,   501,   503,   505,   507,   509,   511,   513,   515,   520,
     523,   527,   530,   534,   537,   541,   543,   548,   550,   555,
     557,   562,   564,   569,   571,   576,   578,   583,   588,   590,
     592,   597,   599,   604,   607,   611,   616,   618,   623,   625,
     632,   634,   636,   638,   640,   642,   647,   649,   651,   656,
     661,   664,   668,   670,   675,   677,   682,   687,   690,   694,
     696,   698,   703,   705,   707,   709,   714,   716,   718,   720,
     727,   729,   734,   736,   741,   746,   749,   753,   755
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO", "BREAK", "CASE", "CHAR", "CONST",
  "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN", "FLOAT",
  "FOR", "GOTO", "IF", "INLINE", "INT", "LONG", "REGISTER", "RESTRICT",
  "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH",
  "TYPEDEF", "UNION", "UNSIGNED", "VOID", "VOLATILE", "WHILE", "_BOOL",
  "_COMPLEX", "_IMAGINARY", "IDENTIFIER", "INTEGER_CONSTANT",
  "FLOATING_CONSTANT", "CHARACTER_CONSTANT", "STRING_LITERAL",
  "LEFT_SQUARE_BRACKET", "INCREMENT", "SLASH", "QUESTION_MARK",
  "ASSIGNMENT", "COMMA", "RIGHT_SQUARE_BRACKET", "LEFT_PARENTHESES",
  "LEFT_CURLY_BRACKET", "RIGHT_CURLY_BRACKET", "DOT", "ARROW", "ASTERISK",
  "PLUS", "MINUS", "TILDE", "EXCLAMATION", "MODULO", "LEFT_SHIFT",
  "RIGHT_SHIFT", "LESS_THAN", "GREATER_THAN", "LESS_EQUAL_THAN",
  "GREATER_EQUAL_THAN", "COLON", "SEMI_COLON", "ELLIPSIS",
  "ASTERISK_ASSIGNMENT", "SLASH_ASSIGNMENT", "MODULO_ASSIGNMENT",
  "PLUS_ASSIGNMENT", "MINUS_ASSIGNMENT", "LEFT_SHIFT_ASSIGNMENT", "HASH",
  "DECREMENT", "RIGHT_PARENTHESES", "BITWISE_AND", "EQUALS", "BITWISE_XOR",
  "BITWISE_OR", "LOGICAL_AND", "LOGICAL_OR", "RIGHT_SHIFT_ASSIGNMENT",
  "NOT_EQUALS", "BITWISE_AND_ASSIGNMENT", "BITWISE_OR_ASSIGNMENT",
  "BITWISE_XOR_ASSIGNMENT", "INVALID_TOKEN", "$accept",
  "primary_expression", "postfix_expression",
  "argument_expression_list_opt", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "AND_expression",
  "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "init_declarator_list_opt", "declaration_specifiers",
  "declaration_specifiers_opt", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "enum_specifier", "identifier_opt",
  "enumerator_list", "enumerator", "type_qualifier", "function_specifier",
  "declarator", "pointer_opt", "direct_declarator",
  "type_qualifier_list_opt", "assignment_expression_opt",
  "identifier_list_opt", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initialiser", "initialiser_list",
  "designation_opt", "designation", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list_opt", "block_item_list", "block_item",
  "expression_statement", "expression_opt", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list_opt",
  "declaration_list", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    94,    94,    94,    94,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    96,    96,    97,
      97,    98,    98,    98,    98,    98,    98,    99,    99,    99,
      99,    99,    99,   100,   100,   101,   101,   101,   101,   102,
     102,   102,   103,   103,   103,   104,   104,   104,   104,   104,
     105,   105,   105,   106,   106,   107,   107,   108,   108,   109,
     109,   110,   110,   111,   111,   112,   112,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   114,   114,
     115,   116,   117,   117,   118,   118,   118,   118,   119,   119,
     120,   120,   121,   121,   122,   122,   122,   122,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   124,   124,   125,   125,   126,   126,   126,   127,   127,
     128,   128,   129,   129,   130,   130,   130,   131,   132,   133,
     133,   134,   134,   134,   134,   134,   134,   134,   134,   135,
     135,   136,   136,   137,   137,   138,   138,   139,   139,   140,
     140,   141,   141,   142,   142,   143,   143,   144,   145,   145,
     145,   146,   146,   147,   147,   148,   149,   149,   150,   150,
     151,   151,   151,   151,   151,   151,   152,   152,   152,   153,
     154,   154,   155,   155,   156,   156,   157,   158,   158,   159,
     159,   159,   160,   160,   160,   160,   161,   161,   161,   161,
     162,   162,   163,   163,   164,   165,   165,   166,   166
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     4,
       4,     3,     3,     2,     2,     6,     7,     1,     0,     1,
       3,     1,     2,     2,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     3,     1,     0,     2,     2,     2,     2,     1,     0,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     0,     5,     6,     2,     1,     0,
       1,     3,     1,     3,     1,     1,     1,     1,     2,     1,
       0,     1,     3,     5,     6,     6,     5,     4,     4,     1,
       0,     1,     0,     1,     0,     2,     3,     1,     2,     1,
       3,     1,     3,     2,     1,     1,     3,     1,     1,     3,
       4,     2,     4,     1,     0,     2,     1,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     3,
       1,     0,     1,     2,     1,     1,     2,     1,     0,     5,
       7,     5,     5,     7,     9,     8,     3,     2,     2,     3,
       1,     2,     1,     1,     4,     1,     0,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    96,    99,   124,   104,   119,    94,   103,   127,   101,
     102,    97,   125,   100,   105,    95,   106,    98,   126,   107,
     108,   109,   203,   130,    89,    89,   110,    89,    89,     0,
     200,   202,   117,     0,   140,     0,    82,    90,    92,     0,
     129,    88,    84,    85,    86,    87,     1,   201,     0,   147,
     145,   139,    81,   130,     0,   207,   130,     0,   205,   131,
     130,   128,   122,     0,   120,   146,   148,    91,    92,     0,
       2,     3,     4,     5,     6,     0,     0,   164,    28,    29,
      30,    31,    32,     0,    27,     8,    21,    33,     0,    35,
      39,    42,    45,    50,    53,    55,    57,    59,    61,    63,
      65,   158,    93,   181,   204,   208,     0,   140,   144,     0,
       0,   115,     0,    25,     0,    22,    78,     0,   114,   157,
     114,     0,     0,     0,     0,     0,   163,     0,   166,    23,
       0,    13,    18,     0,     0,    14,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    77,    76,     0,    33,    24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   188,     0,     0,     0,   188,     0,     0,
       2,   187,   184,   185,   170,   171,     0,   180,   182,   172,
       0,   173,   174,   175,   132,   140,   142,   139,   155,   130,
       0,     0,   149,   151,   143,    80,   123,   116,   121,     0,
       0,     0,     7,   113,   111,   112,     0,     0,   169,   164,
     159,   161,   165,   167,     0,     0,    17,    19,    11,    12,
      66,    37,    36,    38,    40,    41,    43,    44,    46,    47,
      48,    49,    51,    52,    54,    56,    58,    60,     0,    62,
     198,     0,   197,   188,     0,   188,     0,     0,     0,     0,
       0,   188,   179,   183,   186,     0,    28,   141,     0,     0,
     153,   138,   137,     0,     0,    26,     0,    79,   164,    34,
     168,   160,     0,     9,    10,     0,     0,   188,   178,     0,
     188,     0,   196,     0,   199,     0,     0,   176,     0,   136,
     133,     0,   150,   152,   156,     0,   162,    20,    64,   177,
       0,     0,   188,   188,   188,   188,   134,   135,   164,    15,
       0,   188,     0,   189,   191,   192,    16,     0,     0,   188,
     188,   193,   188,     0,   190,   195,   188,   194
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    85,    86,   225,   226,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   116,
     147,   181,   206,    22,    35,    56,    42,    36,    37,    24,
      25,   119,   214,    26,    33,    63,    64,    27,    28,    68,
      39,    61,    50,   268,   200,    40,    51,   201,   202,   203,
     204,   121,   102,   124,   125,   126,   127,   128,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,    29,
      30,    31,    57,    58
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -214
static const yytype_int16 yypact[] =
{
     814,  -214,  -214,  -214,  -214,   -31,  -214,  -214,  -214,  -214,
    -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,
    -214,  -214,  -214,     1,   814,   814,  -214,   814,   814,   739,
    -214,  -214,    14,    24,    19,   -56,    48,  -214,   698,    -2,
    -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,    46,  -214,
      44,    19,  -214,    44,   147,  -214,     1,    82,   814,  -214,
      44,    57,    58,    35,  -214,  -214,  -214,  -214,   121,   541,
    -214,  -214,  -214,  -214,  -214,   567,   433,    88,  -214,  -214,
    -214,  -214,  -214,   567,  -214,  -214,   283,   165,   609,  -214,
      22,   102,   105,    99,    54,    67,    89,    92,    93,   -41,
    -214,  -214,  -214,   261,  -214,  -214,   100,    59,   776,   609,
       6,  -214,   433,  -214,   433,  -214,  -214,   -32,   848,  -214,
     848,   103,   609,   152,    56,   147,  -214,   -14,  -214,  -214,
     609,  -214,   609,   158,   163,  -214,  -214,  -214,  -214,  -214,
    -214,  -214,  -214,  -214,  -214,  -214,  -214,   609,  -214,  -214,
     609,   609,   609,   609,   609,   609,   609,   609,   609,   609,
     609,   609,   609,   609,   609,   609,   609,   609,   609,   140,
     609,   153,   156,   376,   169,   187,   177,   609,   182,   191,
     167,   194,  -214,  -214,  -214,  -214,   192,   261,  -214,  -214,
     175,  -214,  -214,  -214,  -214,    19,   635,    65,  -214,   -37,
     168,   170,   199,  -214,   201,  -214,  -214,  -214,  -214,   173,
     178,   609,  -214,  -214,  -214,  -214,   498,   206,  -214,    36,
    -214,  -214,  -214,  -214,   151,   179,   210,  -214,  -214,  -214,
    -214,  -214,  -214,  -214,    22,    22,   102,   102,   105,   105,
     105,   105,    99,    99,    54,    67,    89,    92,   -29,    93,
    -214,   193,  -214,   376,   225,   330,   220,   609,   222,   609,
     609,   376,  -214,  -214,  -214,   609,   212,  -214,   242,   609,
    -214,  -214,  -214,   496,   266,   255,   255,  -214,    88,  -214,
    -214,  -214,   147,  -214,  -214,   609,   609,   376,  -214,   257,
     609,   240,  -214,   -28,  -214,   -18,   -17,  -214,   260,  -214,
    -214,   264,  -214,  -214,  -214,    96,  -214,  -214,  -214,  -214,
     609,   246,   609,   376,   376,   376,  -214,  -214,    83,  -214,
     -16,   609,   247,   300,  -214,  -214,  -214,   253,   244,   609,
     376,  -214,   376,   245,  -214,  -214,   376,  -214
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -214,  -214,  -214,  -214,  -214,   -39,  -214,   -76,    62,    63,
      37,    70,   164,   162,   181,   166,   180,  -214,  -105,   -52,
    -214,   -75,  -114,   -35,  -214,     0,   184,  -214,   277,  -214,
     -61,    31,   214,  -214,  -214,  -214,   237,    27,  -214,   -13,
    -214,  -214,   -96,  -214,  -214,   304,   252,  -214,  -214,    87,
    -214,    41,  -120,    97,  -213,  -214,  -214,   234,  -157,  -214,
     309,  -214,  -214,   190,  -214,  -158,  -214,  -214,  -214,  -214,
     349,  -214,  -214,  -214
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -207
static const yytype_int16 yytable[] =
{
      23,   117,   101,    55,   205,   221,   282,   167,   217,    32,
      38,   196,   149,  -154,    52,   118,   254,   205,   211,   258,
      34,   211,   211,   105,    41,    41,     3,    41,    41,    23,
     113,   122,   211,   211,   211,   222,   115,   117,    59,   117,
     286,   123,    12,  -154,   129,   168,    62,   106,   212,   148,
      60,   118,   313,   118,    18,   224,   251,   118,    34,   118,
     207,    49,   314,   315,   327,   205,     3,  -118,   182,   150,
     148,   -83,     3,   101,   231,   232,   233,    48,    66,   151,
     227,   122,    12,   148,   152,   110,    62,   195,    12,   111,
     281,   123,   248,   269,    18,   230,   288,   291,    53,   265,
      18,    34,   107,   120,   297,   282,   219,   109,   199,   108,
     220,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   122,   148,
     309,   148,   311,   122,    49,   103,   161,   326,   123,   120,
     279,   120,   162,   123,   267,   120,   318,   120,   163,   213,
     319,   213,   182,   209,   322,   210,   323,   324,   325,   277,
     153,   154,   306,   328,   157,   158,   159,   160,   155,   156,
      54,   333,   164,   334,    69,   335,   165,   148,   166,   337,
     194,   308,   293,   216,   295,   296,   270,    70,    71,    72,
      73,    74,   218,    75,   238,   239,   240,   241,   228,    76,
      77,   211,   283,   229,    78,    79,    80,    81,    82,    43,
     250,    44,    45,   298,   136,   234,   235,   301,   236,   237,
     290,   255,    49,   252,    66,   253,    83,   256,    84,   257,
     101,   242,   243,   307,   259,   320,   261,   137,   138,   139,
     140,   141,   142,   260,   211,   264,   262,   148,   271,   273,
     272,   274,   143,   275,   144,   145,   146,   280,   276,   284,
     285,   289,   287,   299,     1,   169,   170,     2,     3,   171,
     172,   173,     4,   199,     5,     6,     7,   174,   175,   176,
       8,     9,    10,    11,    12,   177,    13,    14,    69,    15,
     292,   178,   294,   300,    16,    17,    18,   179,    19,    20,
      21,   180,    71,    72,    73,    74,   304,    75,   278,   310,
     312,   316,   330,    76,   103,   317,   321,   329,    78,    79,
      80,    81,    82,   331,   332,   336,   245,   244,   130,   131,
      67,  -188,   247,     1,   215,   132,     2,     3,   133,   134,
      83,     4,    84,     5,     6,     7,   246,   208,   249,     8,
       9,    10,    11,    12,    65,    13,    14,    69,    15,   197,
     303,   223,   135,    16,    17,    18,   104,    19,    20,    21,
      70,    71,    72,    73,    74,   305,    75,   263,    47,     0,
     169,   170,    76,     0,   171,   172,   173,    78,    79,    80,
      81,    82,   174,   175,   176,     0,     0,     0,     0,     0,
     177,     0,     0,    69,     0,     0,   178,     0,     0,    83,
       0,    84,   179,     0,     0,     0,   180,    71,    72,    73,
      74,     0,    75,     0,     0,     0,     0,     0,    76,   103,
       0,     0,     0,    78,    79,    80,    81,    82,     0,     2,
       3,     0,     0,     0,     4,     0,     5,     0,     7,     0,
       0,     0,     0,     9,    10,    83,    12,    84,    13,    14,
      69,     0,     0,     0,     0,     0,    16,    17,    18,     0,
      19,    20,    21,    70,    71,    72,    73,    74,     0,    75,
       0,     0,     0,     0,     0,    76,     0,     0,     0,     0,
      78,    79,    80,    81,    82,     0,     0,     0,     0,     1,
       0,     0,     2,     3,     0,     0,     0,     4,     0,     5,
       6,     7,    83,     0,    84,     8,     9,    10,    11,    12,
       0,    13,    14,     0,    15,    69,     0,     0,     0,    16,
      17,    18,     0,    19,    20,    21,     0,     0,    70,    71,
      72,    73,    74,     0,    75,     0,     0,     0,     0,     0,
      76,   278,     0,     0,     0,    78,    79,    80,    81,    82,
       0,     0,     0,     0,     0,     0,     0,   302,    69,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,    84,
       0,    70,    71,    72,    73,    74,     0,    75,     0,     0,
       0,     0,     0,   112,    69,     0,     0,     0,    78,    79,
      80,    81,    82,     0,     0,     0,     0,    70,    71,    72,
      73,    74,     0,    75,     0,     0,     0,     0,     0,   114,
      83,     0,    84,     0,    78,    79,    80,    81,    82,     0,
       0,     0,     0,     0,     0,     0,    69,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,     0,    84,    70,
      71,    72,    73,    74,     0,    75,     0,     0,     0,     0,
       0,    76,    69,     0,     0,     0,    78,    79,    80,    81,
      82,     0,     0,     0,     0,    70,    71,    72,    73,    74,
       0,    75,     0,     0,     0,     0,     0,    76,    83,     0,
      84,     0,   266,    79,    80,    81,    82,     0,     0,     0,
       0,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,    83,     0,    84,     8,     9,    10,
      11,    12,     0,    13,    14,     0,    15,     0,     0,     0,
       0,    16,    17,    18,     0,    19,    20,    21,     0,    46,
       0,     0,     1,     0,     0,     2,     3,    54,     0,     0,
       4,  -206,     5,     6,     7,     0,     0,     0,     8,     9,
      10,    11,    12,     0,    13,    14,     0,    15,     0,     0,
       0,     0,    16,    17,    18,     0,    19,    20,    21,     1,
       0,     0,     2,     3,     0,     0,     0,     4,     0,     5,
       6,     7,     0,     0,     0,     8,     9,    10,    11,    12,
       0,    13,    14,     0,    15,     0,     0,     0,     0,    16,
      17,    18,     0,    19,    20,    21,   198,     1,     0,     0,
       2,     3,     0,     0,     0,     4,     0,     5,     6,     7,
       0,     0,     0,     8,     9,    10,    11,    12,     0,    13,
      14,     0,    15,     0,     0,     0,     0,    16,    17,    18,
       0,    19,    20,    21,     2,     3,     0,     0,     0,     4,
       0,     5,     0,     7,     0,     0,     0,     0,     9,    10,
       0,    12,     0,    13,    14,     0,     0,     0,     0,     0,
       0,    16,    17,    18,     0,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    76,    54,    38,   109,   125,   219,    48,   122,    40,
      23,   107,    88,    50,    70,    76,   173,   122,    50,   177,
      57,    50,    50,    58,    24,    25,     7,    27,    28,    29,
      69,    45,    50,    50,    50,    49,    75,   112,    40,   114,
      69,    55,    23,    80,    83,    86,    40,    60,    80,    88,
      52,   112,    80,   114,    35,   130,   170,   118,    57,   120,
      54,    34,    80,    80,    80,   170,     7,    53,   103,    47,
     109,    70,     7,   125,   150,   151,   152,    53,    51,    57,
     132,    45,    23,   122,    62,    50,    40,    28,    23,    54,
      54,    55,   167,    28,    35,   147,   253,   255,    50,   195,
      35,    57,    45,    76,   261,   318,    50,    49,   108,    52,
      54,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,    45,   168,
     287,   170,   290,    45,   107,    53,    82,    54,    55,   112,
     216,   114,    88,    55,   196,   118,    50,   120,    81,   118,
      54,   120,   187,   112,   312,   114,   313,   314,   315,   211,
      58,    59,   282,   321,    65,    66,    67,    68,    63,    64,
      49,   329,    83,   330,    27,   332,    84,   216,    85,   336,
      80,   286,   257,    80,   259,   260,   199,    40,    41,    42,
      43,    44,    40,    46,   157,   158,   159,   160,    40,    52,
      53,    50,    51,    40,    57,    58,    59,    60,    61,    25,
      70,    27,    28,   265,    49,   153,   154,   269,   155,   156,
     255,    52,   195,    70,   197,    69,    79,    40,    81,    52,
     282,   161,   162,   285,    52,   310,    69,    72,    73,    74,
      75,    76,    77,    52,    50,    70,    54,   286,    80,    50,
      80,    50,    87,    80,    89,    90,    91,    51,    80,    80,
      50,    36,    69,    51,     3,     4,     5,     6,     7,     8,
       9,    10,    11,   273,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      70,    30,    70,    51,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    40,    46,    53,    52,
      70,    51,    12,    52,    53,    51,    70,    70,    57,    58,
      59,    60,    61,    70,    80,    80,   164,   163,    45,    46,
      53,    70,   166,     3,   120,    52,     6,     7,    55,    56,
      79,    11,    81,    13,    14,    15,   165,   110,   168,    19,
      20,    21,    22,    23,    50,    25,    26,    27,    28,   107,
     273,   127,    79,    33,    34,    35,    57,    37,    38,    39,
      40,    41,    42,    43,    44,   278,    46,   187,    29,    -1,
       4,     5,    52,    -1,     8,     9,    10,    57,    58,    59,
      60,    61,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    27,    -1,    -1,    30,    -1,    -1,    79,
      -1,    81,    36,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    52,    53,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    -1,     6,
       7,    -1,    -1,    -1,    11,    -1,    13,    -1,    15,    -1,
      -1,    -1,    -1,    20,    21,    79,    23,    81,    25,    26,
      27,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    61,    -1,    -1,    -1,    -1,     3,
      -1,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,
      14,    15,    79,    -1,    81,    19,    20,    21,    22,    23,
      -1,    25,    26,    -1,    28,    27,    -1,    -1,    -1,    33,
      34,    35,    -1,    37,    38,    39,    -1,    -1,    40,    41,
      42,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,    -1,    -1,    57,    58,    59,    60,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,
      -1,    40,    41,    42,    43,    44,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    52,    27,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    52,
      79,    -1,    81,    -1,    57,    58,    59,    60,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,    40,
      41,    42,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    52,    27,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    52,    79,    -1,
      81,    -1,    57,    58,    59,    60,    61,    -1,    -1,    -1,
      -1,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    14,    15,    79,    -1,    81,    19,    20,    21,
      22,    23,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,
      -1,    33,    34,    35,    -1,    37,    38,    39,    -1,     0,
      -1,    -1,     3,    -1,    -1,     6,     7,    49,    -1,    -1,
      11,    53,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    -1,    25,    26,    -1,    28,    -1,    -1,
      -1,    -1,    33,    34,    35,    -1,    37,    38,    39,     3,
      -1,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,
      14,    15,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      -1,    25,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,
      34,    35,    -1,    37,    38,    39,    40,     3,    -1,    -1,
       6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,    25,
      26,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,
      -1,    37,    38,    39,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    -1,    15,    -1,    -1,    -1,    -1,    20,    21,
      -1,    23,    -1,    25,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    -1,    37,    38,    39
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    22,    23,    25,    26,    28,    33,    34,    35,    37,
      38,    39,   116,   118,   122,   123,   126,   130,   131,   162,
     163,   164,    40,   127,    57,   117,   120,   121,   132,   133,
     138,   118,   119,   119,   119,   119,     0,   163,    53,   130,
     135,   139,    70,    50,    49,   116,   118,   165,   166,    40,
      52,   134,    40,   128,   129,   138,   130,   121,   132,    27,
      40,    41,    42,    43,    44,    46,    52,    53,    57,    58,
      59,    60,    61,    79,    81,    94,    95,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   145,    53,   153,   116,   132,    45,    52,    49,
      50,    54,    52,    98,    52,    98,   112,   114,   123,   124,
     130,   144,    45,    55,   146,   147,   148,   149,   150,    98,
      45,    46,    52,    55,    56,    79,    49,    72,    73,    74,
      75,    76,    77,    87,    89,    90,    91,   113,    98,   100,
      47,    57,    62,    58,    59,    63,    64,    65,    66,    67,
      68,    82,    88,    81,    83,    84,    85,    48,    86,     4,
       5,     8,     9,    10,    16,    17,    18,    24,    30,    36,
      40,   114,   116,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,    80,    28,   135,   139,    40,   118,
     137,   140,   141,   142,   143,   111,   115,    54,   129,   144,
     144,    50,    80,   124,   125,   125,    80,   115,    40,    50,
      54,   145,    49,   150,   114,    96,    97,   112,    40,    40,
     112,   100,   100,   100,   101,   101,   102,   102,   103,   103,
     103,   103,   104,   104,   105,   106,   107,   108,   114,   109,
      70,   115,    70,    69,   151,    52,    40,    52,   158,    52,
      52,    69,    54,   156,    70,   135,    57,   112,   136,    28,
     132,    80,    80,    50,    50,    80,    80,   112,    53,   100,
      51,    54,   147,    51,    80,    50,    69,    69,   151,    36,
     116,   158,    70,   114,    70,   114,   114,   151,   112,    51,
      51,   112,    71,   142,    40,   146,   145,   112,   111,   151,
      52,   158,    70,    80,    80,    80,    51,    51,    50,    54,
     114,    70,   158,   151,   151,   151,    54,    80,   158,    70,
      12,    70,    80,   158,   151,   151,    80,   151
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 122 "ass4_21CS10078_22CS10054.y"
    { yyinfo("primary_expression => IDENTIFIER"); printf("\t\t\t\tIDENTIFIER = %s\n", (yyvsp[(1) - (1)].stringVal)); ;}
    break;

  case 3:
#line 124 "ass4_21CS10078_22CS10054.y"
    { yyinfo("primary_expression => INTEGER_CONSTANT"); printf("\t\t\t\tINTEGER_CONSTANT = %d\n", (yyvsp[(1) - (1)].intVal)); ;}
    break;

  case 4:
#line 126 "ass4_21CS10078_22CS10054.y"
    { yyinfo("primary_expression => FLOATING_CONSTANT"); printf("\t\t\t\tFLOATING_CONSTANT = %f\n", (yyvsp[(1) - (1)].floatVal)); ;}
    break;

  case 5:
#line 128 "ass4_21CS10078_22CS10054.y"
    { yyinfo("primary_expression => CHARACTER_CONSTANT"); printf("\t\t\t\tCHARACTER_CONSTANT = %s\n", (yyvsp[(1) - (1)].charVal)); ;}
    break;

  case 6:
#line 130 "ass4_21CS10078_22CS10054.y"
    { yyinfo("primary_expression => STRING_LITERAL"); printf("\t\t\t\tSTRING_LITERAL = %s\n", (yyvsp[(1) - (1)].stringVal)); ;}
    break;

  case 7:
#line 132 "ass4_21CS10078_22CS10054.y"
    { yyinfo("primary_expression => ( expression )"); ;}
    break;

  case 8:
#line 137 "ass4_21CS10078_22CS10054.y"
    { yyinfo("postfix_expression => primary_expression"); ;}
    break;

  case 9:
#line 139 "ass4_21CS10078_22CS10054.y"
    { yyinfo("postfix_expression => postfix_expression [ expression ]"); ;}
    break;

  case 10:
#line 141 "ass4_21CS10078_22CS10054.y"
    { yyinfo("postfix_expression => postfix_expression ( argument_expression_list_opt )"); ;}
    break;

  case 11:
#line 143 "ass4_21CS10078_22CS10054.y"
    { yyinfo("postfix_expression => postfix_expression . IDENTIFIER"); printf("\t\t\t\tIDENTIFIER = %s\n", (yyvsp[(3) - (3)].stringVal)); ;}
    break;

  case 12:
#line 145 "ass4_21CS10078_22CS10054.y"
    { yyinfo("postfix_expression => postfix_expression -> IDENTIFIER"); printf("\t\t\t\tIDENTIFIER = %s\n", (yyvsp[(3) - (3)].stringVal)); ;}
    break;

  case 13:
#line 147 "ass4_21CS10078_22CS10054.y"
    { yyinfo("postfix_expression => postfix_expression ++"); ;}
    break;

  case 14:
#line 149 "ass4_21CS10078_22CS10054.y"
    { yyinfo("postfix_expression => postfix_expression --"); ;}
    break;

  case 15:
#line 151 "ass4_21CS10078_22CS10054.y"
    { yyinfo("postfix_expression => ( type_name ) { initialiser_list }"); ;}
    break;

  case 16:
#line 153 "ass4_21CS10078_22CS10054.y"
    { yyinfo("postfix_expression => ( type_name ) { initialiser_list , }"); ;}
    break;

  case 17:
#line 158 "ass4_21CS10078_22CS10054.y"
    { yyinfo("argument_expression_list_opt => argument_expression_list"); ;}
    break;

  case 18:
#line 160 "ass4_21CS10078_22CS10054.y"
    { yyinfo("argument_expression_list_opt => epsilon"); ;}
    break;

  case 19:
#line 165 "ass4_21CS10078_22CS10054.y"
    { yyinfo("argument_expression_list => assignment_expression"); ;}
    break;

  case 20:
#line 167 "ass4_21CS10078_22CS10054.y"
    { yyinfo("argument_expression_list => argument_expression_list , assignment_expression"); ;}
    break;

  case 21:
#line 172 "ass4_21CS10078_22CS10054.y"
    { yyinfo("unary_expression => postfix_expression"); ;}
    break;

  case 22:
#line 174 "ass4_21CS10078_22CS10054.y"
    { yyinfo("unary_expression => ++ unary_expression"); ;}
    break;

  case 23:
#line 176 "ass4_21CS10078_22CS10054.y"
    { yyinfo("unary_expression => -- unary_expression"); ;}
    break;

  case 24:
#line 178 "ass4_21CS10078_22CS10054.y"
    { yyinfo("unary_expression => unary_operator cast_expression"); ;}
    break;

  case 25:
#line 180 "ass4_21CS10078_22CS10054.y"
    { yyinfo("unary_expression => sizeof unary_expression"); ;}
    break;

  case 26:
#line 182 "ass4_21CS10078_22CS10054.y"
    { yyinfo("unary_expression => sizeof ( type_name )"); ;}
    break;

  case 27:
#line 187 "ass4_21CS10078_22CS10054.y"
    { yyinfo("unary_operator => &"); ;}
    break;

  case 28:
#line 189 "ass4_21CS10078_22CS10054.y"
    { yyinfo("unary_operator => *"); ;}
    break;

  case 29:
#line 191 "ass4_21CS10078_22CS10054.y"
    { yyinfo("unary_operator => +"); ;}
    break;

  case 30:
#line 193 "ass4_21CS10078_22CS10054.y"
    { yyinfo("unary_operator => -"); ;}
    break;

  case 31:
#line 195 "ass4_21CS10078_22CS10054.y"
    { yyinfo("unary_operator => ~"); ;}
    break;

  case 32:
#line 197 "ass4_21CS10078_22CS10054.y"
    { yyinfo("unary_operator => !"); ;}
    break;

  case 33:
#line 202 "ass4_21CS10078_22CS10054.y"
    { yyinfo("cast_expression => unary_expression"); ;}
    break;

  case 34:
#line 204 "ass4_21CS10078_22CS10054.y"
    { yyinfo("cast_expression => ( type_name ) cast_expression"); ;}
    break;

  case 35:
#line 209 "ass4_21CS10078_22CS10054.y"
    { yyinfo("multiplicative_expression => cast_expression"); ;}
    break;

  case 36:
#line 211 "ass4_21CS10078_22CS10054.y"
    { yyinfo("multiplicative_expression => multiplicative_expression * cast_expression"); ;}
    break;

  case 37:
#line 213 "ass4_21CS10078_22CS10054.y"
    { yyinfo("multiplicative_expression => multiplicative_expression / cast_expression"); ;}
    break;

  case 38:
#line 215 "ass4_21CS10078_22CS10054.y"
    { yyinfo("multiplicative_expression => multiplicative_expression % cast_expression"); ;}
    break;

  case 39:
#line 220 "ass4_21CS10078_22CS10054.y"
    { yyinfo("additive_expression => multiplicative_expression"); ;}
    break;

  case 40:
#line 222 "ass4_21CS10078_22CS10054.y"
    { yyinfo("additive_expression => additive_expression + multiplicative_expression"); ;}
    break;

  case 41:
#line 224 "ass4_21CS10078_22CS10054.y"
    { yyinfo("additive_expression => additive_expression - multiplicative_expression"); ;}
    break;

  case 42:
#line 229 "ass4_21CS10078_22CS10054.y"
    { yyinfo("shift_expression => additive_expression"); ;}
    break;

  case 43:
#line 231 "ass4_21CS10078_22CS10054.y"
    { yyinfo("shift_expression => shift_expression << additive_expression"); ;}
    break;

  case 44:
#line 233 "ass4_21CS10078_22CS10054.y"
    { yyinfo("shift_expression => shift_expression >> additive_expression"); ;}
    break;

  case 45:
#line 238 "ass4_21CS10078_22CS10054.y"
    { yyinfo("relational_expression => shift_expression"); ;}
    break;

  case 46:
#line 240 "ass4_21CS10078_22CS10054.y"
    { yyinfo("relational_expression => relational_expression < shift_expression"); ;}
    break;

  case 47:
#line 242 "ass4_21CS10078_22CS10054.y"
    { yyinfo("relational_expression => relational_expression > shift_expression"); ;}
    break;

  case 48:
#line 244 "ass4_21CS10078_22CS10054.y"
    { yyinfo("relational_expression => relational_expression <= shift_expression"); ;}
    break;

  case 49:
#line 246 "ass4_21CS10078_22CS10054.y"
    { yyinfo("relational_expression => relational_expression >= shift_expression"); ;}
    break;

  case 50:
#line 251 "ass4_21CS10078_22CS10054.y"
    { yyinfo("equality_expression => relational_expression"); ;}
    break;

  case 51:
#line 253 "ass4_21CS10078_22CS10054.y"
    { yyinfo("equality_expression => equality_expression == relational_expression"); ;}
    break;

  case 52:
#line 255 "ass4_21CS10078_22CS10054.y"
    { yyinfo("equality_expression => equality_expression != relational_expression"); ;}
    break;

  case 53:
#line 260 "ass4_21CS10078_22CS10054.y"
    { yyinfo("AND_expression => equality_expression"); ;}
    break;

  case 54:
#line 262 "ass4_21CS10078_22CS10054.y"
    { yyinfo("AND_expression => AND_expression & equality_expression"); ;}
    break;

  case 55:
#line 267 "ass4_21CS10078_22CS10054.y"
    { yyinfo("exclusive_OR_expression => AND_expression"); ;}
    break;

  case 56:
#line 269 "ass4_21CS10078_22CS10054.y"
    { yyinfo("exclusive_OR_expression => exclusive_OR_expression ^ AND_expression"); ;}
    break;

  case 57:
#line 274 "ass4_21CS10078_22CS10054.y"
    { yyinfo("inclusive_OR_expression => exclusive_OR_expression"); ;}
    break;

  case 58:
#line 276 "ass4_21CS10078_22CS10054.y"
    { yyinfo("inclusive_OR_expression => inclusive_OR_expression | exclusive_OR_expression"); ;}
    break;

  case 59:
#line 281 "ass4_21CS10078_22CS10054.y"
    { yyinfo("logical_AND_expression => inclusive_OR_expression"); ;}
    break;

  case 60:
#line 283 "ass4_21CS10078_22CS10054.y"
    { yyinfo("logical_AND_expression => logical_AND_expression && inclusive_OR_expression"); ;}
    break;

  case 61:
#line 288 "ass4_21CS10078_22CS10054.y"
    { yyinfo("logical_OR_expression => logical_AND_expression"); ;}
    break;

  case 62:
#line 290 "ass4_21CS10078_22CS10054.y"
    { yyinfo("logical_OR_expression => logical_OR_expression || logical_AND_expression"); ;}
    break;

  case 63:
#line 295 "ass4_21CS10078_22CS10054.y"
    { yyinfo("conditional_expression => logical_OR_expression"); ;}
    break;

  case 64:
#line 297 "ass4_21CS10078_22CS10054.y"
    { yyinfo("conditional_expression => logical_OR_expression ? expression : conditional_expression"); ;}
    break;

  case 65:
#line 302 "ass4_21CS10078_22CS10054.y"
    { yyinfo("assignment_expression => conditional_expression"); ;}
    break;

  case 66:
#line 304 "ass4_21CS10078_22CS10054.y"
    { yyinfo("assignment_expression => unary_expression assignment_operator assignment_expression"); ;}
    break;

  case 67:
#line 309 "ass4_21CS10078_22CS10054.y"
    { yyinfo("assignment_operator => ="); ;}
    break;

  case 68:
#line 311 "ass4_21CS10078_22CS10054.y"
    { yyinfo("assignment_operator => *="); ;}
    break;

  case 69:
#line 313 "ass4_21CS10078_22CS10054.y"
    { yyinfo("assignment_operator => /="); ;}
    break;

  case 70:
#line 315 "ass4_21CS10078_22CS10054.y"
    { yyinfo("assignment_operator => %="); ;}
    break;

  case 71:
#line 317 "ass4_21CS10078_22CS10054.y"
    { yyinfo("assignment_operator => += "); ;}
    break;

  case 72:
#line 319 "ass4_21CS10078_22CS10054.y"
    { yyinfo("assignment_operator => -= "); ;}
    break;

  case 73:
#line 321 "ass4_21CS10078_22CS10054.y"
    { yyinfo("assignment_operator => <<="); ;}
    break;

  case 74:
#line 323 "ass4_21CS10078_22CS10054.y"
    { yyinfo("assignment_operator => >>="); ;}
    break;

  case 75:
#line 325 "ass4_21CS10078_22CS10054.y"
    { yyinfo("assignment_operator => &="); ;}
    break;

  case 76:
#line 327 "ass4_21CS10078_22CS10054.y"
    { yyinfo("assignment_operator => ^="); ;}
    break;

  case 77:
#line 329 "ass4_21CS10078_22CS10054.y"
    { yyinfo("assignment_operator => |="); ;}
    break;

  case 78:
#line 334 "ass4_21CS10078_22CS10054.y"
    { yyinfo("expression => assignment_expression"); ;}
    break;

  case 79:
#line 336 "ass4_21CS10078_22CS10054.y"
    { yyinfo("expression => expression , assignment_expression"); ;}
    break;

  case 80:
#line 341 "ass4_21CS10078_22CS10054.y"
    { yyinfo("constant_expression => conditional_expression"); ;}
    break;

  case 81:
#line 348 "ass4_21CS10078_22CS10054.y"
    { yyinfo("declaration => declaration_specifiers init_declarator_list_opt ;"); ;}
    break;

  case 82:
#line 353 "ass4_21CS10078_22CS10054.y"
    { yyinfo("init_declarator_list_opt => init_declarator_list"); ;}
    break;

  case 83:
#line 355 "ass4_21CS10078_22CS10054.y"
    { yyinfo("init_declarator_list_opt => epsilon"); ;}
    break;

  case 84:
#line 360 "ass4_21CS10078_22CS10054.y"
    { yyinfo("declaration_specifiers => storage_class_specifier declaration_specifiers_opt"); ;}
    break;

  case 85:
#line 362 "ass4_21CS10078_22CS10054.y"
    { yyinfo("declaration_specifiers => type_specifier declaration_specifiers_opt"); ;}
    break;

  case 86:
#line 364 "ass4_21CS10078_22CS10054.y"
    { yyinfo("declaration_specifiers => type_qualifier declaration_specifiers_opt"); ;}
    break;

  case 87:
#line 366 "ass4_21CS10078_22CS10054.y"
    { yyinfo("declaration_specifiers => function_specifier declaration_specifiers_opt"); ;}
    break;

  case 88:
#line 371 "ass4_21CS10078_22CS10054.y"
    { yyinfo("declaration_specifiers_opt => declaration_specifiers"); ;}
    break;

  case 89:
#line 373 "ass4_21CS10078_22CS10054.y"
    { yyinfo("declaration_specifiers_opt => epsilon "); ;}
    break;

  case 90:
#line 378 "ass4_21CS10078_22CS10054.y"
    { yyinfo("init_declarator_list => init_declarator"); ;}
    break;

  case 91:
#line 380 "ass4_21CS10078_22CS10054.y"
    { yyinfo("init_declarator_list => init_declarator_list , init_declarator"); ;}
    break;

  case 92:
#line 385 "ass4_21CS10078_22CS10054.y"
    { yyinfo("init_declarator => declarator"); ;}
    break;

  case 93:
#line 387 "ass4_21CS10078_22CS10054.y"
    { yyinfo("init_declarator => declarator = initialiser"); ;}
    break;

  case 94:
#line 392 "ass4_21CS10078_22CS10054.y"
    { yyinfo("storage_class_specifier => extern"); ;}
    break;

  case 95:
#line 394 "ass4_21CS10078_22CS10054.y"
    { yyinfo("storage_class_specifier => static"); ;}
    break;

  case 96:
#line 396 "ass4_21CS10078_22CS10054.y"
    { yyinfo("storage_class_specifier => auto"); ;}
    break;

  case 97:
#line 398 "ass4_21CS10078_22CS10054.y"
    { yyinfo("storage_class_specifier => register"); ;}
    break;

  case 98:
#line 403 "ass4_21CS10078_22CS10054.y"
    { yyinfo("type_specifier => void"); ;}
    break;

  case 99:
#line 405 "ass4_21CS10078_22CS10054.y"
    { yyinfo("type_specifier => char"); ;}
    break;

  case 100:
#line 407 "ass4_21CS10078_22CS10054.y"
    { yyinfo("type_specifier => short"); ;}
    break;

  case 101:
#line 409 "ass4_21CS10078_22CS10054.y"
    { yyinfo("type_specifier => int"); ;}
    break;

  case 102:
#line 411 "ass4_21CS10078_22CS10054.y"
    { yyinfo("type_specifier => long"); ;}
    break;

  case 103:
#line 413 "ass4_21CS10078_22CS10054.y"
    { yyinfo("type_specifier => float"); ;}
    break;

  case 104:
#line 415 "ass4_21CS10078_22CS10054.y"
    { yyinfo("type_specifier => double"); ;}
    break;

  case 105:
#line 417 "ass4_21CS10078_22CS10054.y"
    { yyinfo("type_specifier => signed"); ;}
    break;

  case 106:
#line 419 "ass4_21CS10078_22CS10054.y"
    { yyinfo("type_specifier => unsigned"); ;}
    break;

  case 107:
#line 421 "ass4_21CS10078_22CS10054.y"
    { yyinfo("type_specifier => _Bool"); ;}
    break;

  case 108:
#line 423 "ass4_21CS10078_22CS10054.y"
    { yyinfo("type_specifier => _Complex"); ;}
    break;

  case 109:
#line 425 "ass4_21CS10078_22CS10054.y"
    { yyinfo("type_specifier => _Imaginary"); ;}
    break;

  case 110:
#line 427 "ass4_21CS10078_22CS10054.y"
    { yyinfo("type_specifier => enum_specifier"); ;}
    break;

  case 111:
#line 432 "ass4_21CS10078_22CS10054.y"
    { yyinfo("specifier_qualifier_list => type_specifier specifier_qualifier_list_opt"); ;}
    break;

  case 112:
#line 434 "ass4_21CS10078_22CS10054.y"
    { yyinfo("specifier_qualifier_list => type_qualifier specifier_qualifier_list_opt"); ;}
    break;

  case 113:
#line 439 "ass4_21CS10078_22CS10054.y"
    { yyinfo("specifier_qualifier_list_opt => specifier_qualifier_list"); ;}
    break;

  case 114:
#line 441 "ass4_21CS10078_22CS10054.y"
    { yyinfo("specifier_qualifier_list_opt => epsilon"); ;}
    break;

  case 115:
#line 446 "ass4_21CS10078_22CS10054.y"
    { yyinfo("enum_specifier => enum identifier_opt { enumerator_list }"); ;}
    break;

  case 116:
#line 448 "ass4_21CS10078_22CS10054.y"
    { yyinfo("enum_specifier => enum identifier_opt { enumerator_list , }"); ;}
    break;

  case 117:
#line 450 "ass4_21CS10078_22CS10054.y"
    { yyinfo("enum_specifier => enum IDENTIFIER"); printf("\t\t\t\tIDENTIFIER = %s\n", (yyvsp[(2) - (2)].stringVal)); ;}
    break;

  case 118:
#line 455 "ass4_21CS10078_22CS10054.y"
    { yyinfo("identifier_opt => IDENTIFIER"); printf("\t\t\t\tIDENTIFIER = %s\n", (yyvsp[(1) - (1)].stringVal)); ;}
    break;

  case 119:
#line 457 "ass4_21CS10078_22CS10054.y"
    { yyinfo("identifier_opt => epsilon"); ;}
    break;

  case 120:
#line 462 "ass4_21CS10078_22CS10054.y"
    { yyinfo("enumerator_list => enumerator"); ;}
    break;

  case 121:
#line 464 "ass4_21CS10078_22CS10054.y"
    { yyinfo("enumerator_list => enumerator_list , enumerator"); ;}
    break;

  case 122:
#line 469 "ass4_21CS10078_22CS10054.y"
    { yyinfo("enumerator => ENUMERATION_CONSTANT"); printf("\t\t\t\tENUMERATION_CONSTANT = %s\n", (yyvsp[(1) - (1)].stringVal)); ;}
    break;

  case 123:
#line 471 "ass4_21CS10078_22CS10054.y"
    { yyinfo("enumerator => ENUMERATION_CONSTANT = constant_expression"); printf("\t\t\t\tENUMERATION_CONSTANT = %s\n", (yyvsp[(1) - (3)].stringVal)); ;}
    break;

  case 124:
#line 476 "ass4_21CS10078_22CS10054.y"
    { yyinfo("type_qualifier => const"); ;}
    break;

  case 125:
#line 478 "ass4_21CS10078_22CS10054.y"
    { yyinfo("type_qualifier => restrict"); ;}
    break;

  case 126:
#line 480 "ass4_21CS10078_22CS10054.y"
    { yyinfo("type_qualifier => volatile"); ;}
    break;

  case 127:
#line 485 "ass4_21CS10078_22CS10054.y"
    { yyinfo("function_specifier => inline"); ;}
    break;

  case 128:
#line 490 "ass4_21CS10078_22CS10054.y"
    { yyinfo("declarator => pointer_opt direct_declarator"); ;}
    break;

  case 129:
#line 495 "ass4_21CS10078_22CS10054.y"
    { yyinfo("pointer_opt => pointer"); ;}
    break;

  case 130:
#line 497 "ass4_21CS10078_22CS10054.y"
    { yyinfo("pointer_opt => epsilon"); ;}
    break;

  case 131:
#line 502 "ass4_21CS10078_22CS10054.y"
    { yyinfo("direct_declarator => IDENTIFIER"); printf("\t\t\t\tIDENTIFIER = %s\n", (yyvsp[(1) - (1)].stringVal)); ;}
    break;

  case 132:
#line 504 "ass4_21CS10078_22CS10054.y"
    { yyinfo("direct_declarator => ( declarator )"); ;}
    break;

  case 133:
#line 506 "ass4_21CS10078_22CS10054.y"
    { yyinfo("direct_declarator => direct_declarator [ type_qualifier_list_opt assignment_expression_opt ]"); ;}
    break;

  case 134:
#line 508 "ass4_21CS10078_22CS10054.y"
    { yyinfo("direct_declarator => direct_declarator [ static type_qualifier_list_opt assignment_expression ]"); ;}
    break;

  case 135:
#line 510 "ass4_21CS10078_22CS10054.y"
    { yyinfo("direct_declarator => direct_declarator [ type_qualifier_list static assignment_expression ]"); ;}
    break;

  case 136:
#line 512 "ass4_21CS10078_22CS10054.y"
    { yyinfo("direct_declarator => direct_declarator [ type_qualifier_list_opt * ]"); ;}
    break;

  case 137:
#line 514 "ass4_21CS10078_22CS10054.y"
    { yyinfo("direct_declarator => direct_declarator ( parameter_type_list )"); ;}
    break;

  case 138:
#line 516 "ass4_21CS10078_22CS10054.y"
    { yyinfo("direct_declarator => direct_declarator ( identifier_list_opt )"); ;}
    break;

  case 139:
#line 521 "ass4_21CS10078_22CS10054.y"
    { yyinfo("type_qualifier_list_opt => type_qualifier_list"); ;}
    break;

  case 140:
#line 523 "ass4_21CS10078_22CS10054.y"
    { yyinfo("type_qualifier_list_opt => epsilon"); ;}
    break;

  case 141:
#line 528 "ass4_21CS10078_22CS10054.y"
    { yyinfo("assignment_expression_opt => assignment_expression"); ;}
    break;

  case 142:
#line 530 "ass4_21CS10078_22CS10054.y"
    { yyinfo("assignment_expression_opt => epsilon"); ;}
    break;

  case 143:
#line 535 "ass4_21CS10078_22CS10054.y"
    { yyinfo("identifier_list_opt => identifier_list"); ;}
    break;

  case 144:
#line 537 "ass4_21CS10078_22CS10054.y"
    { yyinfo("identifier_list_opt => epsilon"); ;}
    break;

  case 145:
#line 542 "ass4_21CS10078_22CS10054.y"
    { yyinfo("pointer => * type_qualifier_list_opt"); ;}
    break;

  case 146:
#line 544 "ass4_21CS10078_22CS10054.y"
    { yyinfo("pointer => * type_qualifier_list_opt pointer"); ;}
    break;

  case 147:
#line 549 "ass4_21CS10078_22CS10054.y"
    { yyinfo("type_qualifier_list => type_qualifier"); ;}
    break;

  case 148:
#line 551 "ass4_21CS10078_22CS10054.y"
    { yyinfo("type_qualifier_list => type_qualifier_list type_qualifier"); ;}
    break;

  case 149:
#line 556 "ass4_21CS10078_22CS10054.y"
    { yyinfo("parameter_type_list => parameter_list"); ;}
    break;

  case 150:
#line 558 "ass4_21CS10078_22CS10054.y"
    { yyinfo("parameter_type_list => parameter_list , ..."); ;}
    break;

  case 151:
#line 563 "ass4_21CS10078_22CS10054.y"
    { yyinfo("parameter_list => parameter_declaration"); ;}
    break;

  case 152:
#line 565 "ass4_21CS10078_22CS10054.y"
    { yyinfo("parameter_list => parameter_list , parameter_declaration"); ;}
    break;

  case 153:
#line 570 "ass4_21CS10078_22CS10054.y"
    { yyinfo("parameter_declaration => declaration_specifiers declarator"); ;}
    break;

  case 154:
#line 572 "ass4_21CS10078_22CS10054.y"
    { yyinfo("parameter_declaration => declaration_specifiers"); ;}
    break;

  case 155:
#line 577 "ass4_21CS10078_22CS10054.y"
    { yyinfo("identifier_list => IDENTIFIER"); printf("\t\t\t\tIDENTIFIER = %s\n", (yyvsp[(1) - (1)].stringVal)); ;}
    break;

  case 156:
#line 579 "ass4_21CS10078_22CS10054.y"
    { yyinfo("identifier_list => identifier_list , IDENTIFIER"); printf("\t\t\t\tIDENTIFIER = %s\n", (yyvsp[(3) - (3)].stringVal)); ;}
    break;

  case 157:
#line 584 "ass4_21CS10078_22CS10054.y"
    { yyinfo("type_name => specifier_qualifier_list"); ;}
    break;

  case 158:
#line 589 "ass4_21CS10078_22CS10054.y"
    { yyinfo("initialiser => assignment_expression"); ;}
    break;

  case 159:
#line 591 "ass4_21CS10078_22CS10054.y"
    { yyinfo("initialiser => { initialiser_list }"); ;}
    break;

  case 160:
#line 593 "ass4_21CS10078_22CS10054.y"
    { yyinfo("initialiser => { initialiser_list , }"); ;}
    break;

  case 161:
#line 598 "ass4_21CS10078_22CS10054.y"
    { yyinfo("initialiser_list => designation_opt initialiser"); ;}
    break;

  case 162:
#line 600 "ass4_21CS10078_22CS10054.y"
    { yyinfo("initialiser_list => initialiser_list , designation_opt initialiser"); ;}
    break;

  case 163:
#line 605 "ass4_21CS10078_22CS10054.y"
    { yyinfo("designation_opt => designation"); ;}
    break;

  case 164:
#line 607 "ass4_21CS10078_22CS10054.y"
    { yyinfo("designation_opt => epsilon"); ;}
    break;

  case 165:
#line 612 "ass4_21CS10078_22CS10054.y"
    { yyinfo("designation => designator_list ="); ;}
    break;

  case 166:
#line 617 "ass4_21CS10078_22CS10054.y"
    { yyinfo("designator_list => designator"); ;}
    break;

  case 167:
#line 619 "ass4_21CS10078_22CS10054.y"
    { yyinfo("designator_list => designator_list designator"); ;}
    break;

  case 168:
#line 624 "ass4_21CS10078_22CS10054.y"
    { yyinfo("designator => [ constant_expression ]"); ;}
    break;

  case 169:
#line 626 "ass4_21CS10078_22CS10054.y"
    { yyinfo("designator => . IDENTIFIER"); printf("\t\t\t\tIDENTIFIER = %s\n", (yyvsp[(2) - (2)].stringVal)); ;}
    break;

  case 170:
#line 633 "ass4_21CS10078_22CS10054.y"
    { yyinfo("statement => labeled_statement"); ;}
    break;

  case 171:
#line 635 "ass4_21CS10078_22CS10054.y"
    { yyinfo("statement => compound_statement"); ;}
    break;

  case 172:
#line 637 "ass4_21CS10078_22CS10054.y"
    { yyinfo("statement => expression_statement"); ;}
    break;

  case 173:
#line 639 "ass4_21CS10078_22CS10054.y"
    { yyinfo("statement => selection_statement"); ;}
    break;

  case 174:
#line 641 "ass4_21CS10078_22CS10054.y"
    { yyinfo("statement => iteration_statement"); ;}
    break;

  case 175:
#line 643 "ass4_21CS10078_22CS10054.y"
    { yyinfo("statement => jump_statement"); ;}
    break;

  case 176:
#line 648 "ass4_21CS10078_22CS10054.y"
    { yyinfo("labeled_statement => IDENTIFIER : statement"); printf("\t\t\t\tIDENTIFIER = %s\n", (yyvsp[(1) - (3)].stringVal)); ;}
    break;

  case 177:
#line 650 "ass4_21CS10078_22CS10054.y"
    { yyinfo("labeled_statement => case constant_expression : statement"); ;}
    break;

  case 178:
#line 652 "ass4_21CS10078_22CS10054.y"
    { yyinfo("labeled_statement => default : statement"); ;}
    break;

  case 179:
#line 657 "ass4_21CS10078_22CS10054.y"
    { yyinfo("compound_statement => { block_item_list_opt }"); ;}
    break;

  case 180:
#line 662 "ass4_21CS10078_22CS10054.y"
    { yyinfo("block_item_list_opt => block_item_list"); ;}
    break;

  case 181:
#line 664 "ass4_21CS10078_22CS10054.y"
    { yyinfo("block_item_list_opt => epsilon"); ;}
    break;

  case 182:
#line 669 "ass4_21CS10078_22CS10054.y"
    { yyinfo("block_item_list => block_item"); ;}
    break;

  case 183:
#line 671 "ass4_21CS10078_22CS10054.y"
    { yyinfo("block_item_list => block_item_list block_item"); ;}
    break;

  case 184:
#line 676 "ass4_21CS10078_22CS10054.y"
    { yyinfo("block_item => declaration"); ;}
    break;

  case 185:
#line 678 "ass4_21CS10078_22CS10054.y"
    { yyinfo("block_item => statement"); ;}
    break;

  case 186:
#line 683 "ass4_21CS10078_22CS10054.y"
    { yyinfo("expression_statement => expression_opt ;"); ;}
    break;

  case 187:
#line 688 "ass4_21CS10078_22CS10054.y"
    { yyinfo("expression_opt => expression"); ;}
    break;

  case 188:
#line 690 "ass4_21CS10078_22CS10054.y"
    { yyinfo("expression_opt => epsilon"); ;}
    break;

  case 189:
#line 695 "ass4_21CS10078_22CS10054.y"
    { yyinfo("selection_statement => if ( expression ) statement"); ;}
    break;

  case 190:
#line 697 "ass4_21CS10078_22CS10054.y"
    { yyinfo("selection_statement => if ( expression ) statement else statement"); ;}
    break;

  case 191:
#line 699 "ass4_21CS10078_22CS10054.y"
    { yyinfo("selection_statement => switch ( expression ) statement"); ;}
    break;

  case 192:
#line 704 "ass4_21CS10078_22CS10054.y"
    { yyinfo("iteration_statement => while ( expression ) statement"); ;}
    break;

  case 193:
#line 706 "ass4_21CS10078_22CS10054.y"
    { yyinfo("iteration_statement => do statement while ( expression ) ;"); ;}
    break;

  case 194:
#line 708 "ass4_21CS10078_22CS10054.y"
    { yyinfo("iteration_statement => for ( expression_opt ; expression_opt ; expression_opt ) statement"); ;}
    break;

  case 195:
#line 710 "ass4_21CS10078_22CS10054.y"
    { yyinfo("iteration_statement => for ( declaration expression_opt ; expression_opt ) statement"); ;}
    break;

  case 196:
#line 715 "ass4_21CS10078_22CS10054.y"
    { yyinfo("jump_statement => goto IDENTIFIER ;"); printf("\t\t\t\tIDENTIFIER = %s\n", (yyvsp[(2) - (3)].stringVal)); ;}
    break;

  case 197:
#line 717 "ass4_21CS10078_22CS10054.y"
    { yyinfo("jump_statement => continue ;"); ;}
    break;

  case 198:
#line 719 "ass4_21CS10078_22CS10054.y"
    { yyinfo("jump_statement => break ;"); ;}
    break;

  case 199:
#line 721 "ass4_21CS10078_22CS10054.y"
    { yyinfo("jump_statement => return expression_opt ;"); ;}
    break;

  case 200:
#line 728 "ass4_21CS10078_22CS10054.y"
    { yyinfo("translation_unit => external_declaration"); ;}
    break;

  case 201:
#line 730 "ass4_21CS10078_22CS10054.y"
    { yyinfo("translation_unit => translation_unit external_declaration"); ;}
    break;

  case 202:
#line 735 "ass4_21CS10078_22CS10054.y"
    { yyinfo("external_declaration => function_definition"); ;}
    break;

  case 203:
#line 737 "ass4_21CS10078_22CS10054.y"
    { yyinfo("external_declaration => declaration"); ;}
    break;

  case 204:
#line 742 "ass4_21CS10078_22CS10054.y"
    { yyinfo("function_definition => declaration_specifiers declarator declaration_list_opt compound_statement"); ;}
    break;

  case 205:
#line 747 "ass4_21CS10078_22CS10054.y"
    { yyinfo("declaration_list_opt => declaration_list"); ;}
    break;

  case 206:
#line 749 "ass4_21CS10078_22CS10054.y"
    { yyinfo("declaration_list_opt => epsilon"); ;}
    break;

  case 207:
#line 754 "ass4_21CS10078_22CS10054.y"
    { yyinfo("declaration_list => declaration"); ;}
    break;

  case 208:
#line 756 "ass4_21CS10078_22CS10054.y"
    { yyinfo("declaration_list => declaration_list declaration"); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3015 "ass4_21CS10078_22CS10054.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 759 "ass4_21CS10078_22CS10054.y"


void yyerror(char* s) {
    printf("ERROR [Line %d] : %s\n", lineCount, s);
}

void yyinfo(char* s) {
    printf("INFO [Line %d] : %s\n", lineCount, s);
}

