/* File generated by the BNF Converter (bnfc 2.9.4). */

#ifndef ABSYN_HEADER
#define ABSYN_HEADER

/* strdup was not in the ISO C standard before 6/2019 (C2x), but in POSIX 1003.1.
 * See: https://en.cppreference.com/w/c/experimental/dynamic/strdup
 * Setting _POSIX_C_SOURCE to 200809L activates strdup in string.h.
 */
#define _POSIX_C_SOURCE 200809L

#include <stddef.h>  /* NULL */
#include <string.h>  /* strdup */

/* C++ Abstract Syntax Interface.*/

/********************   TypeDef Section    ********************/

typedef int Integer;
typedef char Char;
typedef double Double;
typedef char* String;
typedef char* Ident;

/********************   Forward Declarations    ***********************/
struct Entry_;
typedef struct Entry_ *Entry;

struct BlocoDefinicoes_;
typedef struct BlocoDefinicoes_ *BlocoDefinicoes;

struct BlocoFuncaoEProc_;
typedef struct BlocoFuncaoEProc_ *BlocoFuncaoEProc;

struct BlocoConstante_;
typedef struct BlocoConstante_ *BlocoConstante;

struct RegraBlocoConstante_;
typedef struct RegraBlocoConstante_ *RegraBlocoConstante;

struct BlocoTipo_;
typedef struct BlocoTipo_ *BlocoTipo;

struct RegraBlocoTipo_;
typedef struct RegraBlocoTipo_ *RegraBlocoTipo;

struct BlocoVar_;
typedef struct BlocoVar_ *BlocoVar;

struct RegraBlocoVar_;
typedef struct RegraBlocoVar_ *RegraBlocoVar;

struct BlocoComando_;
typedef struct BlocoComando_ *BlocoComando;

struct RegraComando_;
typedef struct RegraComando_ *RegraComando;

struct Comando_;
typedef struct Comando_ *Comando;

struct Atribuicao_;
typedef struct Atribuicao_ *Atribuicao;

struct SubEscrito_;
typedef struct SubEscrito_ *SubEscrito;

struct RegraTipo_;
typedef struct RegraTipo_ *RegraTipo;

struct TipoPrimitivo_;
typedef struct TipoPrimitivo_ *TipoPrimitivo;

struct Valor_;
typedef struct Valor_ *Valor;

struct TipoDerivado_;
typedef struct TipoDerivado_ *TipoDerivado;

struct Ponteiro_;
typedef struct Ponteiro_ *Ponteiro;

struct Vetor_;
typedef struct Vetor_ *Vetor;

struct If_;
typedef struct If_ *If;

struct While_;
typedef struct While_ *While;

struct For_;
typedef struct For_ *For;

struct Goto_;
typedef struct Goto_ *Goto;

struct Rotulo_;
typedef struct Rotulo_ *Rotulo;

struct Struct_;
typedef struct Struct_ *Struct;

struct DefinicaoCampoStruct_;
typedef struct DefinicaoCampoStruct_ *DefinicaoCampoStruct;

struct AtribuicaoStruct_;
typedef struct AtribuicaoStruct_ *AtribuicaoStruct;

struct OperadorRelacional_;
typedef struct OperadorRelacional_ *OperadorRelacional;

struct OperadorLogico_;
typedef struct OperadorLogico_ *OperadorLogico;

struct OperadorAritmetico_;
typedef struct OperadorAritmetico_ *OperadorAritmetico;

struct Case_;
typedef struct Case_ *Case;

struct RegraSeletor_;
typedef struct RegraSeletor_ *RegraSeletor;

struct Seletor_;
typedef struct Seletor_ *Seletor;

struct ChamadaFuncaoEProc_;
typedef struct ChamadaFuncaoEProc_ *ChamadaFuncaoEProc;

struct ListaIdent_;
typedef struct ListaIdent_ *ListaIdent;

struct Funcao_;
typedef struct Funcao_ *Funcao;

struct Procedimento_;
typedef struct Procedimento_ *Procedimento;

struct ExpressaoAritmetica_;
typedef struct ExpressaoAritmetica_ *ExpressaoAritmetica;

struct Operando_;
typedef struct Operando_ *Operando;

struct RegraAritmetica_;
typedef struct RegraAritmetica_ *RegraAritmetica;

struct ExpressaoRelacional_;
typedef struct ExpressaoRelacional_ *ExpressaoRelacional;

struct RegraRelacional_;
typedef struct RegraRelacional_ *RegraRelacional;

struct ExpressaoLogica_;
typedef struct ExpressaoLogica_ *ExpressaoLogica;

struct RegraLogico_;
typedef struct RegraLogico_ *RegraLogico;

/********************   Abstract Syntax Classes    ********************/

struct Entry_
{
  enum { is_L1 } kind;
  union
  {
    struct { BlocoComando blococomando_; BlocoDefinicoes blocodefinicoes_; Ident ident_; } l1_;
  } u;
};

Entry make_L1(Ident p0, BlocoDefinicoes p1, BlocoComando p2);

struct BlocoDefinicoes_
{
  enum { is_BlocoDefinicoes1, is_BlocoDefinicoes2, is_BlocoDefinicoes3, is_BlocoDefinicoes4, is_BlocoDefinicoes_ } kind;
  union
  {
    struct { BlocoDefinicoes blocodefinicoes_; BlocoFuncaoEProc blocofuncaoeproc_; } blocodefinicoes1_;
    struct { BlocoConstante blococonstante_; BlocoDefinicoes blocodefinicoes_; } blocodefinicoes2_;
    struct { BlocoDefinicoes blocodefinicoes_; BlocoTipo blocotipo_; } blocodefinicoes3_;
    struct { BlocoDefinicoes blocodefinicoes_; BlocoVar blocovar_; } blocodefinicoes4_;
  } u;
};

BlocoDefinicoes make_BlocoDefinicoes1(BlocoFuncaoEProc p0, BlocoDefinicoes p1);
BlocoDefinicoes make_BlocoDefinicoes2(BlocoConstante p0, BlocoDefinicoes p1);
BlocoDefinicoes make_BlocoDefinicoes3(BlocoTipo p0, BlocoDefinicoes p1);
BlocoDefinicoes make_BlocoDefinicoes4(BlocoVar p0, BlocoDefinicoes p1);
BlocoDefinicoes make_BlocoDefinicoes_(void);

struct BlocoFuncaoEProc_
{
  enum { is_BlocoFuncaoEProcFuncao, is_BlocoFuncaoEProc1, is_BlocoFuncaoEProcProcedimento, is_BlocoFuncaoEProc2, is_BlocoFuncaoEProc_ } kind;
  union
  {
    struct { Funcao funcao_; } blocofuncaoeprocfuncao_;
    struct { BlocoFuncaoEProc blocofuncaoeproc_; Funcao funcao_; } blocofuncaoeproc1_;
    struct { Procedimento procedimento_; } blocofuncaoeprocprocedimento_;
    struct { BlocoFuncaoEProc blocofuncaoeproc_; Procedimento procedimento_; } blocofuncaoeproc2_;
  } u;
};

BlocoFuncaoEProc make_BlocoFuncaoEProcFuncao(Funcao p0);
BlocoFuncaoEProc make_BlocoFuncaoEProc1(Funcao p0, BlocoFuncaoEProc p1);
BlocoFuncaoEProc make_BlocoFuncaoEProcProcedimento(Procedimento p0);
BlocoFuncaoEProc make_BlocoFuncaoEProc2(Procedimento p0, BlocoFuncaoEProc p1);
BlocoFuncaoEProc make_BlocoFuncaoEProc_(void);

struct BlocoConstante_
{
  enum { is_BlocoConstante1, is_BlocoConstante_ } kind;
  union
  {
    struct { RegraBlocoConstante regrablococonstante_; } blococonstante1_;
  } u;
};

BlocoConstante make_BlocoConstante1(RegraBlocoConstante p0);
BlocoConstante make_BlocoConstante_(void);

struct RegraBlocoConstante_
{
  enum { is_RegraBlocoConstante1, is_RegraBlocoConstante2 } kind;
  union
  {
    struct { Ident ident_; Valor valor_; } regrablococonstante1_;
    struct { Ident ident_; RegraBlocoConstante regrablococonstante_; Valor valor_; } regrablococonstante2_;
  } u;
};

RegraBlocoConstante make_RegraBlocoConstante1(Ident p0, Valor p1);
RegraBlocoConstante make_RegraBlocoConstante2(Ident p0, Valor p1, RegraBlocoConstante p2);

struct BlocoTipo_
{
  enum { is_BlocoTipo1, is_BlocoTipo_ } kind;
  union
  {
    struct { RegraBlocoTipo regrablocotipo_; } blocotipo1_;
  } u;
};

BlocoTipo make_BlocoTipo1(RegraBlocoTipo p0);
BlocoTipo make_BlocoTipo_(void);

struct RegraBlocoTipo_
{
  enum { is_RegraBlocoTipo1, is_RegraBlocoTipo2 } kind;
  union
  {
    struct { Ident ident_; RegraTipo regratipo_; } regrablocotipo1_;
    struct { Ident ident_; RegraBlocoTipo regrablocotipo_; RegraTipo regratipo_; } regrablocotipo2_;
  } u;
};

RegraBlocoTipo make_RegraBlocoTipo1(Ident p0, RegraTipo p1);
RegraBlocoTipo make_RegraBlocoTipo2(Ident p0, RegraTipo p1, RegraBlocoTipo p2);

struct BlocoVar_
{
  enum { is_BlocoVar1, is_BlocoVar_ } kind;
  union
  {
    struct { RegraBlocoVar regrablocovar_; } blocovar1_;
  } u;
};

BlocoVar make_BlocoVar1(RegraBlocoVar p0);
BlocoVar make_BlocoVar_(void);

struct RegraBlocoVar_
{
  enum { is_RegraBlocoVar1, is_RegraBlocoVar2, is_RegraBlocoVar3, is_RegraBlocoVar4 } kind;
  union
  {
    struct { Ident ident_; RegraTipo regratipo_; } regrablocovar1_;
    struct { Ident ident_; RegraBlocoVar regrablocovar_; RegraTipo regratipo_; } regrablocovar2_;
    struct { ListaIdent listaident_; RegraTipo regratipo_; } regrablocovar3_;
    struct { ListaIdent listaident_; RegraBlocoVar regrablocovar_; RegraTipo regratipo_; } regrablocovar4_;
  } u;
};

RegraBlocoVar make_RegraBlocoVar1(Ident p0, RegraTipo p1);
RegraBlocoVar make_RegraBlocoVar2(Ident p0, RegraTipo p1, RegraBlocoVar p2);
RegraBlocoVar make_RegraBlocoVar3(ListaIdent p0, RegraTipo p1);
RegraBlocoVar make_RegraBlocoVar4(ListaIdent p0, RegraTipo p1, RegraBlocoVar p2);

struct BlocoComando_
{
  enum { is_BlocoComando1, is_BlocoComando_ } kind;
  union
  {
    struct { RegraComando regracomando_; } blococomando1_;
  } u;
};

BlocoComando make_BlocoComando1(RegraComando p0);
BlocoComando make_BlocoComando_(void);

struct RegraComando_
{
  enum { is_RegraComando1, is_RegraComando2 } kind;
  union
  {
    struct { Comando comando_; } regracomando1_;
    struct { Comando comando_; RegraComando regracomando_; } regracomando2_;
  } u;
};

RegraComando make_RegraComando1(Comando p0);
RegraComando make_RegraComando2(Comando p0, RegraComando p1);

struct Comando_
{
  enum { is_ComandoAtribuicao, is_ComandoIf, is_ComandoWhile, is_ComandoFor, is_ComandoGoto, is_ComandoCase, is_ComandoChamadaFuncaoEProc } kind;
  union
  {
    struct { Atribuicao atribuicao_; } comandoatribuicao_;
    struct { If if_; } comandoif_;
    struct { While while_; } comandowhile_;
    struct { For for_; } comandofor_;
    struct { Goto goto_; } comandogoto_;
    struct { Case case_; } comandocase_;
    struct { ChamadaFuncaoEProc chamadafuncaoeproc_; } comandochamadafuncaoeproc_;
  } u;
};

Comando make_ComandoAtribuicao(Atribuicao p0);
Comando make_ComandoIf(If p0);
Comando make_ComandoWhile(While p0);
Comando make_ComandoFor(For p0);
Comando make_ComandoGoto(Goto p0);
Comando make_ComandoCase(Case p0);
Comando make_ComandoChamadaFuncaoEProc(ChamadaFuncaoEProc p0);

struct Atribuicao_
{
  enum { is_Atribuicao1, is_Atribuicao2, is_Atribuicao3, is_Atribuicao4, is_AtribuicaoAtribuicaoStruct, is_Atribuicao5 } kind;
  union
  {
    struct { Ident ident_; Valor valor_; } atribuicao1_;
    struct { Ident ident_1, ident_2; } atribuicao2_;
    struct { Ident ident_; SubEscrito subescrito_; Valor valor_; } atribuicao3_;
    struct { Ident ident_; Valor valor_; } atribuicao4_;
    struct { AtribuicaoStruct atribuicaostruct_; } atribuicaoatribuicaostruct_;
    struct { ChamadaFuncaoEProc chamadafuncaoeproc_; Ident ident_; } atribuicao5_;
  } u;
};

Atribuicao make_Atribuicao1(Ident p0, Valor p1);
Atribuicao make_Atribuicao2(Ident p0, Ident p1);
Atribuicao make_Atribuicao3(Ident p0, SubEscrito p1, Valor p2);
Atribuicao make_Atribuicao4(Ident p0, Valor p1);
Atribuicao make_AtribuicaoAtribuicaoStruct(AtribuicaoStruct p0);
Atribuicao make_Atribuicao5(Ident p0, ChamadaFuncaoEProc p1);

struct SubEscrito_
{
  enum { is_SubEscritoIdent, is_SubEscritoInteger } kind;
  union
  {
    struct { Ident ident_; } subescritoident_;
    struct { Integer integer_; } subescritointeger_;
  } u;
};

SubEscrito make_SubEscritoIdent(Ident p0);
SubEscrito make_SubEscritoInteger(Integer p0);

struct RegraTipo_
{
  enum { is_RegraTipoTipoPrimitivo, is_RegraTipoTipoDerivado, is_RegraTipoIdent } kind;
  union
  {
    struct { TipoPrimitivo tipoprimitivo_; } regratipotipoprimitivo_;
    struct { TipoDerivado tipoderivado_; } regratipotipoderivado_;
    struct { Ident ident_; } regratipoident_;
  } u;
};

RegraTipo make_RegraTipoTipoPrimitivo(TipoPrimitivo p0);
RegraTipo make_RegraTipoTipoDerivado(TipoDerivado p0);
RegraTipo make_RegraTipoIdent(Ident p0);

struct TipoPrimitivo_
{
  enum { is_TipoPrimitivo_int, is_TipoPrimitivo_real, is_TipoPrimitivo_char } kind;
  union
  {
  } u;
};

TipoPrimitivo make_TipoPrimitivo_int(void);
TipoPrimitivo make_TipoPrimitivo_real(void);
TipoPrimitivo make_TipoPrimitivo_char(void);

struct Valor_
{
  enum { is_ValorInteger, is_ValorDouble, is_ValorChar, is_ValorString, is_ValorExpressaoAritmetica } kind;
  union
  {
    struct { Integer integer_; } valorinteger_;
    struct { Double double_; } valordouble_;
    struct { Char char_; } valorchar_;
    struct { String string_; } valorstring_;
    struct { ExpressaoAritmetica expressaoaritmetica_; } valorexpressaoaritmetica_;
  } u;
};

Valor make_ValorInteger(Integer p0);
Valor make_ValorDouble(Double p0);
Valor make_ValorChar(Char p0);
Valor make_ValorString(String p0);
Valor make_ValorExpressaoAritmetica(ExpressaoAritmetica p0);

struct TipoDerivado_
{
  enum { is_TipoDerivadoPonteiro, is_TipoDerivadoVetor, is_TipoDerivadoStruct } kind;
  union
  {
    struct { Ponteiro ponteiro_; } tipoderivadoponteiro_;
    struct { Vetor vetor_; } tipoderivadovetor_;
    struct { Struct struct_; } tipoderivadostruct_;
  } u;
};

TipoDerivado make_TipoDerivadoPonteiro(Ponteiro p0);
TipoDerivado make_TipoDerivadoVetor(Vetor p0);
TipoDerivado make_TipoDerivadoStruct(Struct p0);

struct Ponteiro_
{
  enum { is_Ponteiro1, is_Ponteiro2 } kind;
  union
  {
    struct { TipoPrimitivo tipoprimitivo_; } ponteiro1_;
    struct { TipoDerivado tipoderivado_; } ponteiro2_;
  } u;
};

Ponteiro make_Ponteiro1(TipoPrimitivo p0);
Ponteiro make_Ponteiro2(TipoDerivado p0);

struct Vetor_
{
  enum { is_L7 } kind;
  union
  {
    struct { Integer integer_1, integer_2; TipoPrimitivo tipoprimitivo_; } l7_;
  } u;
};

Vetor make_L7(Integer p0, Integer p1, TipoPrimitivo p2);

struct If_
{
  enum { is_If1, is_If2 } kind;
  union
  {
    struct { BlocoComando blococomando_; ExpressaoLogica expressaologica_; } if1_;
    struct { BlocoComando blococomando_1, blococomando_2; ExpressaoLogica expressaologica_; } if2_;
  } u;
};

If make_If1(ExpressaoLogica p0, BlocoComando p1);
If make_If2(ExpressaoLogica p0, BlocoComando p1, BlocoComando p2);

struct While_
{
  enum { is_L8 } kind;
  union
  {
    struct { BlocoComando blococomando_; ExpressaoLogica expressaologica_; } l8_;
  } u;
};

While make_L8(ExpressaoLogica p0, BlocoComando p1);

struct For_
{
  enum { is_For1, is_For2 } kind;
  union
  {
    struct { Atribuicao atribuicao_; BlocoComando blococomando_; Integer integer_; } for1_;
    struct { Atribuicao atribuicao_; BlocoComando blococomando_; Ident ident_; } for2_;
  } u;
};

For make_For1(Atribuicao p0, Integer p1, BlocoComando p2);
For make_For2(Atribuicao p0, Ident p1, BlocoComando p2);

struct Goto_
{
  enum { is_L9 } kind;
  union
  {
    struct { Ident ident_; } l9_;
  } u;
};

Goto make_L9(Ident p0);

struct Rotulo_
{
  enum { is_L10 } kind;
  union
  {
    struct { Ident ident_; RegraComando regracomando_; } l10_;
  } u;
};

Rotulo make_L10(Ident p0, RegraComando p1);

struct Struct_
{
  enum { is_L11 } kind;
  union
  {
    struct { DefinicaoCampoStruct definicaocampostruct_; } l11_;
  } u;
};

Struct make_L11(DefinicaoCampoStruct p0);

struct DefinicaoCampoStruct_
{
  enum { is_DefinicaoCampoStruct1, is_DefinicaoCampoStruct2 } kind;
  union
  {
    struct { Ident ident_; RegraTipo regratipo_; } definicaocampostruct1_;
    struct { DefinicaoCampoStruct definicaocampostruct_; Ident ident_; RegraTipo regratipo_; } definicaocampostruct2_;
  } u;
};

DefinicaoCampoStruct make_DefinicaoCampoStruct1(Ident p0, RegraTipo p1);
DefinicaoCampoStruct make_DefinicaoCampoStruct2(Ident p0, RegraTipo p1, DefinicaoCampoStruct p2);

struct AtribuicaoStruct_
{
  enum { is_AtribuicaoStruct1, is_AtribuicaoStruct2 } kind;
  union
  {
    struct { Ident ident_1, ident_2; Valor valor_; } atribuicaostruct1_;
    struct { AtribuicaoStruct atribuicaostruct_; Ident ident_1, ident_2; Valor valor_; } atribuicaostruct2_;
  } u;
};

AtribuicaoStruct make_AtribuicaoStruct1(Ident p0, Ident p1, Valor p2);
AtribuicaoStruct make_AtribuicaoStruct2(Ident p0, Ident p1, Valor p2, AtribuicaoStruct p3);

struct OperadorRelacional_
{
  enum { is_OperadorRelacional1, is_OperadorRelacional2, is_OperadorRelacional3, is_OperadorRelacional4, is_OperadorRelacional5, is_OperadorRelacional6 } kind;
  union
  {
  } u;
};

OperadorRelacional make_OperadorRelacional1(void);
OperadorRelacional make_OperadorRelacional2(void);
OperadorRelacional make_OperadorRelacional3(void);
OperadorRelacional make_OperadorRelacional4(void);
OperadorRelacional make_OperadorRelacional5(void);
OperadorRelacional make_OperadorRelacional6(void);

struct OperadorLogico_
{
  enum { is_OperadorLogico1, is_OperadorLogico2, is_OperadorLogico3, is_OperadorLogico4 } kind;
  union
  {
  } u;
};

OperadorLogico make_OperadorLogico1(void);
OperadorLogico make_OperadorLogico2(void);
OperadorLogico make_OperadorLogico3(void);
OperadorLogico make_OperadorLogico4(void);

struct OperadorAritmetico_
{
  enum { is_OperadorAritmetico1, is_OperadorAritmetico2, is_OperadorAritmetico3, is_OperadorAritmetico4 } kind;
  union
  {
  } u;
};

OperadorAritmetico make_OperadorAritmetico1(void);
OperadorAritmetico make_OperadorAritmetico2(void);
OperadorAritmetico make_OperadorAritmetico3(void);
OperadorAritmetico make_OperadorAritmetico4(void);

struct Case_
{
  enum { is_L12 } kind;
  union
  {
    struct { RegraSeletor regraseletor_; Seletor seletor_; } l12_;
  } u;
};

Case make_L12(Seletor p0, RegraSeletor p1);

struct RegraSeletor_
{
  enum { is_RegraSeletor1, is_RegraSeletor2 } kind;
  union
  {
    struct { Comando comando_; Seletor seletor_; } regraseletor1_;
    struct { Comando comando_; RegraSeletor regraseletor_; Seletor seletor_; } regraseletor2_;
  } u;
};

RegraSeletor make_RegraSeletor1(Seletor p0, Comando p1);
RegraSeletor make_RegraSeletor2(Seletor p0, Comando p1, RegraSeletor p2);

struct Seletor_
{
  enum { is_SeletorInteger, is_SeletorChar, is_SeletorIdent } kind;
  union
  {
    struct { Integer integer_; } seletorinteger_;
    struct { Char char_; } seletorchar_;
    struct { Ident ident_; } seletorident_;
  } u;
};

Seletor make_SeletorInteger(Integer p0);
Seletor make_SeletorChar(Char p0);
Seletor make_SeletorIdent(Ident p0);

struct ChamadaFuncaoEProc_
{
  enum { is_L33 } kind;
  union
  {
    struct { Ident ident_; ListaIdent listaident_; } l33_;
  } u;
};

ChamadaFuncaoEProc make_L33(Ident p0, ListaIdent p1);

struct ListaIdent_
{
  enum { is_ListaIdentIdent, is_ListaIdent1 } kind;
  union
  {
    struct { Ident ident_; } listaidentident_;
    struct { Ident ident_; ListaIdent listaident_; } listaident1_;
  } u;
};

ListaIdent make_ListaIdentIdent(Ident p0);
ListaIdent make_ListaIdent1(Ident p0, ListaIdent p1);

struct Funcao_
{
  enum { is_L13 } kind;
  union
  {
    struct { BlocoComando blococomando_; BlocoVar blocovar_; Ident ident_; RegraBlocoVar regrablocovar_; RegraTipo regratipo_; } l13_;
  } u;
};

Funcao make_L13(Ident p0, RegraBlocoVar p1, RegraTipo p2, BlocoVar p3, BlocoComando p4);

struct Procedimento_
{
  enum { is_Procedimento1, is_Procedimento2 } kind;
  union
  {
    struct { BlocoComando blococomando_; BlocoVar blocovar_; Ident ident_; RegraBlocoVar regrablocovar_; } procedimento1_;
    struct { BlocoComando blococomando_; BlocoVar blocovar_; Ident ident_; } procedimento2_;
  } u;
};

Procedimento make_Procedimento1(Ident p0, RegraBlocoVar p1, BlocoVar p2, BlocoComando p3);
Procedimento make_Procedimento2(Ident p0, BlocoVar p1, BlocoComando p2);

struct ExpressaoAritmetica_
{
  enum { is_L14 } kind;
  union
  {
    struct { Operando operando_; RegraAritmetica regraaritmetica_; } l14_;
  } u;
};

ExpressaoAritmetica make_L14(Operando p0, RegraAritmetica p1);

struct Operando_
{
  enum { is_OperandoInteger, is_OperandoDouble, is_OperandoIdent } kind;
  union
  {
    struct { Integer integer_; } operandointeger_;
    struct { Double double_; } operandodouble_;
    struct { Ident ident_; } operandoident_;
  } u;
};

Operando make_OperandoInteger(Integer p0);
Operando make_OperandoDouble(Double p0);
Operando make_OperandoIdent(Ident p0);

struct RegraAritmetica_
{
  enum { is_RegraAritmetica1, is_RegraAritmetica2 } kind;
  union
  {
    struct { OperadorAritmetico operadoraritmetico_; Operando operando_; } regraaritmetica1_;
    struct { OperadorAritmetico operadoraritmetico_; Operando operando_; RegraAritmetica regraaritmetica_; } regraaritmetica2_;
  } u;
};

RegraAritmetica make_RegraAritmetica1(OperadorAritmetico p0, Operando p1);
RegraAritmetica make_RegraAritmetica2(OperadorAritmetico p0, Operando p1, RegraAritmetica p2);

struct ExpressaoRelacional_
{
  enum { is_ExpressaoRelacional1, is_ExpressaoRelacional2 } kind;
  union
  {
    struct { Operando operando_; RegraRelacional regrarelacional_; } expressaorelacional1_;
    struct { ExpressaoAritmetica expressaoaritmetica_; RegraRelacional regrarelacional_; } expressaorelacional2_;
  } u;
};

ExpressaoRelacional make_ExpressaoRelacional1(Operando p0, RegraRelacional p1);
ExpressaoRelacional make_ExpressaoRelacional2(ExpressaoAritmetica p0, RegraRelacional p1);

struct RegraRelacional_
{
  enum { is_RegraRelacional1, is_RegraRelacional2 } kind;
  union
  {
    struct { OperadorRelacional operadorrelacional_; Operando operando_; } regrarelacional1_;
    struct { ExpressaoAritmetica expressaoaritmetica_; OperadorRelacional operadorrelacional_; } regrarelacional2_;
  } u;
};

RegraRelacional make_RegraRelacional1(OperadorRelacional p0, Operando p1);
RegraRelacional make_RegraRelacional2(OperadorRelacional p0, ExpressaoAritmetica p1);

struct ExpressaoLogica_
{
  enum { is_ExpressaoLogica_falso, is_ExpressaoLogica1, is_ExpressaoLogica_verdadeiro, is_ExpressaoLogica2, is_ExpressaoLogicaExpressaoRelacional, is_ExpressaoLogica3, is_ExpressaoLogica4, is_ExpressaoLogica5, is_ExpressaoLogica6, is_ExpressaoLogica7 } kind;
  union
  {
    struct { RegraLogico regralogico_; } expressaologica1_;
    struct { RegraLogico regralogico_; } expressaologica2_;
    struct { ExpressaoRelacional expressaorelacional_; } expressaologicaexpressaorelacional_;
    struct { ExpressaoRelacional expressaorelacional_; RegraLogico regralogico_; } expressaologica3_;
    struct { ExpressaoLogica expressaologica_; OperadorLogico operadorlogico_; } expressaologica4_;
    struct { ExpressaoLogica expressaologica_; OperadorLogico operadorlogico_; RegraLogico regralogico_; } expressaologica5_;
    struct { Ident ident_; OperadorLogico operadorlogico_; } expressaologica6_;
    struct { Ident ident_; OperadorLogico operadorlogico_; RegraLogico regralogico_; } expressaologica7_;
  } u;
};

ExpressaoLogica make_ExpressaoLogica_falso(void);
ExpressaoLogica make_ExpressaoLogica1(RegraLogico p0);
ExpressaoLogica make_ExpressaoLogica_verdadeiro(void);
ExpressaoLogica make_ExpressaoLogica2(RegraLogico p0);
ExpressaoLogica make_ExpressaoLogicaExpressaoRelacional(ExpressaoRelacional p0);
ExpressaoLogica make_ExpressaoLogica3(ExpressaoRelacional p0, RegraLogico p1);
ExpressaoLogica make_ExpressaoLogica4(OperadorLogico p0, ExpressaoLogica p1);
ExpressaoLogica make_ExpressaoLogica5(OperadorLogico p0, ExpressaoLogica p1, RegraLogico p2);
ExpressaoLogica make_ExpressaoLogica6(OperadorLogico p0, Ident p1);
ExpressaoLogica make_ExpressaoLogica7(OperadorLogico p0, Ident p1, RegraLogico p2);

struct RegraLogico_
{
  enum { is_RegraLogico1, is_RegraLogico2 } kind;
  union
  {
    struct { ExpressaoLogica expressaologica_; OperadorLogico operadorlogico_; } regralogico1_;
    struct { ExpressaoLogica expressaologica_; OperadorLogico operadorlogico_; RegraLogico regralogico_; } regralogico2_;
  } u;
};

RegraLogico make_RegraLogico1(OperadorLogico p0, ExpressaoLogica p1);
RegraLogico make_RegraLogico2(OperadorLogico p0, ExpressaoLogica p1, RegraLogico p2);

/***************************   Cloning   ******************************/

Entry clone_Entry(Entry p);
BlocoDefinicoes clone_BlocoDefinicoes(BlocoDefinicoes p);
BlocoFuncaoEProc clone_BlocoFuncaoEProc(BlocoFuncaoEProc p);
BlocoConstante clone_BlocoConstante(BlocoConstante p);
RegraBlocoConstante clone_RegraBlocoConstante(RegraBlocoConstante p);
BlocoTipo clone_BlocoTipo(BlocoTipo p);
RegraBlocoTipo clone_RegraBlocoTipo(RegraBlocoTipo p);
BlocoVar clone_BlocoVar(BlocoVar p);
RegraBlocoVar clone_RegraBlocoVar(RegraBlocoVar p);
BlocoComando clone_BlocoComando(BlocoComando p);
RegraComando clone_RegraComando(RegraComando p);
Comando clone_Comando(Comando p);
Atribuicao clone_Atribuicao(Atribuicao p);
SubEscrito clone_SubEscrito(SubEscrito p);
RegraTipo clone_RegraTipo(RegraTipo p);
TipoPrimitivo clone_TipoPrimitivo(TipoPrimitivo p);
Valor clone_Valor(Valor p);
TipoDerivado clone_TipoDerivado(TipoDerivado p);
Ponteiro clone_Ponteiro(Ponteiro p);
Vetor clone_Vetor(Vetor p);
If clone_If(If p);
While clone_While(While p);
For clone_For(For p);
Goto clone_Goto(Goto p);
Rotulo clone_Rotulo(Rotulo p);
Struct clone_Struct(Struct p);
DefinicaoCampoStruct clone_DefinicaoCampoStruct(DefinicaoCampoStruct p);
AtribuicaoStruct clone_AtribuicaoStruct(AtribuicaoStruct p);
OperadorRelacional clone_OperadorRelacional(OperadorRelacional p);
OperadorLogico clone_OperadorLogico(OperadorLogico p);
OperadorAritmetico clone_OperadorAritmetico(OperadorAritmetico p);
Case clone_Case(Case p);
RegraSeletor clone_RegraSeletor(RegraSeletor p);
Seletor clone_Seletor(Seletor p);
ChamadaFuncaoEProc clone_ChamadaFuncaoEProc(ChamadaFuncaoEProc p);
ListaIdent clone_ListaIdent(ListaIdent p);
Funcao clone_Funcao(Funcao p);
Procedimento clone_Procedimento(Procedimento p);
ExpressaoAritmetica clone_ExpressaoAritmetica(ExpressaoAritmetica p);
Operando clone_Operando(Operando p);
RegraAritmetica clone_RegraAritmetica(RegraAritmetica p);
ExpressaoRelacional clone_ExpressaoRelacional(ExpressaoRelacional p);
RegraRelacional clone_RegraRelacional(RegraRelacional p);
ExpressaoLogica clone_ExpressaoLogica(ExpressaoLogica p);
RegraLogico clone_RegraLogico(RegraLogico p);

/********************   Recursive Destructors    **********************/

/* These free an entire abstract syntax tree
 * including all subtrees and strings.
 *
 * Will not work properly if there is sharing in the tree,
 * i.e., when some pointers are aliased.  In this case
 * it will attempt to free the same memory twice.
 */

void free_Entry(Entry p);
void free_BlocoDefinicoes(BlocoDefinicoes p);
void free_BlocoFuncaoEProc(BlocoFuncaoEProc p);
void free_BlocoConstante(BlocoConstante p);
void free_RegraBlocoConstante(RegraBlocoConstante p);
void free_BlocoTipo(BlocoTipo p);
void free_RegraBlocoTipo(RegraBlocoTipo p);
void free_BlocoVar(BlocoVar p);
void free_RegraBlocoVar(RegraBlocoVar p);
void free_BlocoComando(BlocoComando p);
void free_RegraComando(RegraComando p);
void free_Comando(Comando p);
void free_Atribuicao(Atribuicao p);
void free_SubEscrito(SubEscrito p);
void free_RegraTipo(RegraTipo p);
void free_TipoPrimitivo(TipoPrimitivo p);
void free_Valor(Valor p);
void free_TipoDerivado(TipoDerivado p);
void free_Ponteiro(Ponteiro p);
void free_Vetor(Vetor p);
void free_If(If p);
void free_While(While p);
void free_For(For p);
void free_Goto(Goto p);
void free_Rotulo(Rotulo p);
void free_Struct(Struct p);
void free_DefinicaoCampoStruct(DefinicaoCampoStruct p);
void free_AtribuicaoStruct(AtribuicaoStruct p);
void free_OperadorRelacional(OperadorRelacional p);
void free_OperadorLogico(OperadorLogico p);
void free_OperadorAritmetico(OperadorAritmetico p);
void free_Case(Case p);
void free_RegraSeletor(RegraSeletor p);
void free_Seletor(Seletor p);
void free_ChamadaFuncaoEProc(ChamadaFuncaoEProc p);
void free_ListaIdent(ListaIdent p);
void free_Funcao(Funcao p);
void free_Procedimento(Procedimento p);
void free_ExpressaoAritmetica(ExpressaoAritmetica p);
void free_Operando(Operando p);
void free_RegraAritmetica(RegraAritmetica p);
void free_ExpressaoRelacional(ExpressaoRelacional p);
void free_RegraRelacional(RegraRelacional p);
void free_ExpressaoLogica(ExpressaoLogica p);
void free_RegraLogico(RegraLogico p);


#endif
