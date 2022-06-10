/* File generated by the BNF Converter (bnfc 2.9.4). */

#ifndef PARSER_HEADER_FILE
#define PARSER_HEADER_FILE

#include <stdio.h>
#include "Absyn.h"

Entry  pEntry(FILE *inp);
Entry psEntry(const char *str);
BlocoFuncao  pBlocoFuncao(FILE *inp);
BlocoFuncao psBlocoFuncao(const char *str);
BlocoConstante  pBlocoConstante(FILE *inp);
BlocoConstante psBlocoConstante(const char *str);
RegraBlocoConstante  pRegraBlocoConstante(FILE *inp);
RegraBlocoConstante psRegraBlocoConstante(const char *str);
BlocoTipo  pBlocoTipo(FILE *inp);
BlocoTipo psBlocoTipo(const char *str);
RegraBlocoTipo  pRegraBlocoTipo(FILE *inp);
RegraBlocoTipo psRegraBlocoTipo(const char *str);
BlocoVar  pBlocoVar(FILE *inp);
BlocoVar psBlocoVar(const char *str);
RegraBlocoVar  pRegraBlocoVar(FILE *inp);
RegraBlocoVar psRegraBlocoVar(const char *str);
BlocoComando  pBlocoComando(FILE *inp);
BlocoComando psBlocoComando(const char *str);
RegraComando  pRegraComando(FILE *inp);
RegraComando psRegraComando(const char *str);
Comando  pComando(FILE *inp);
Comando psComando(const char *str);
Atribuicao  pAtribuicao(FILE *inp);
Atribuicao psAtribuicao(const char *str);
SubEscrito  pSubEscrito(FILE *inp);
SubEscrito psSubEscrito(const char *str);
RegraTipo  pRegraTipo(FILE *inp);
RegraTipo psRegraTipo(const char *str);
TipoPrimitivo  pTipoPrimitivo(FILE *inp);
TipoPrimitivo psTipoPrimitivo(const char *str);
Valor  pValor(FILE *inp);
Valor psValor(const char *str);
TipoDerivado  pTipoDerivado(FILE *inp);
TipoDerivado psTipoDerivado(const char *str);
Ponteiro  pPonteiro(FILE *inp);
Ponteiro psPonteiro(const char *str);
Vetor  pVetor(FILE *inp);
Vetor psVetor(const char *str);
If  pIf(FILE *inp);
If psIf(const char *str);
While  pWhile(FILE *inp);
While psWhile(const char *str);
For  pFor(FILE *inp);
For psFor(const char *str);
Goto  pGoto(FILE *inp);
Goto psGoto(const char *str);
Rotulo  pRotulo(FILE *inp);
Rotulo psRotulo(const char *str);
Struct  pStruct(FILE *inp);
Struct psStruct(const char *str);
DefinicaoCampoStruct  pDefinicaoCampoStruct(FILE *inp);
DefinicaoCampoStruct psDefinicaoCampoStruct(const char *str);
AtribuicaoStruct  pAtribuicaoStruct(FILE *inp);
AtribuicaoStruct psAtribuicaoStruct(const char *str);
OperadorRelacional  pOperadorRelacional(FILE *inp);
OperadorRelacional psOperadorRelacional(const char *str);
OperadorLogico  pOperadorLogico(FILE *inp);
OperadorLogico psOperadorLogico(const char *str);
OperadorAritmetico  pOperadorAritmetico(FILE *inp);
OperadorAritmetico psOperadorAritmetico(const char *str);
Case  pCase(FILE *inp);
Case psCase(const char *str);
RegraSeletor  pRegraSeletor(FILE *inp);
RegraSeletor psRegraSeletor(const char *str);
Seletor  pSeletor(FILE *inp);
Seletor psSeletor(const char *str);
ChamadaFuncao  pChamadaFuncao(FILE *inp);
ChamadaFuncao psChamadaFuncao(const char *str);
ListaIdent  pListaIdent(FILE *inp);
ListaIdent psListaIdent(const char *str);
Funcao  pFuncao(FILE *inp);
Funcao psFuncao(const char *str);
Procedimento  pProcedimento(FILE *inp);
Procedimento psProcedimento(const char *str);
ExpressaoAritmetica  pExpressaoAritmetica(FILE *inp);
ExpressaoAritmetica psExpressaoAritmetica(const char *str);
Operando  pOperando(FILE *inp);
Operando psOperando(const char *str);
RegraAritmetica  pRegraAritmetica(FILE *inp);
RegraAritmetica psRegraAritmetica(const char *str);
ExpressaoRelacional  pExpressaoRelacional(FILE *inp);
ExpressaoRelacional psExpressaoRelacional(const char *str);
RegraRelacional  pRegraRelacional(FILE *inp);
RegraRelacional psRegraRelacional(const char *str);
ExpressaoLogica  pExpressaoLogica(FILE *inp);
ExpressaoLogica psExpressaoLogica(const char *str);
RegraLogico  pRegraLogico(FILE *inp);
RegraLogico psRegraLogico(const char *str);

#endif
