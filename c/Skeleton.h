/* File generated by the BNF Converter (bnfc 2.9.4). */

#ifndef SKELETON_HEADER
#define SKELETON_HEADER
/* You might want to change the above name. */

#include "Absyn.h"


void visitEntry(Entry p);
void visitBlocoDefinicoes(BlocoDefinicoes p);
void visitBlocoFuncaoEProc(BlocoFuncaoEProc p);
void visitBlocoConstante(BlocoConstante p);
void visitRegraBlocoConstante(RegraBlocoConstante p);
void visitBlocoTipo(BlocoTipo p);
void visitRegraBlocoTipo(RegraBlocoTipo p);
void visitBlocoVar(BlocoVar p);
void visitRegraBlocoVar(RegraBlocoVar p);
void visitBlocoComando(BlocoComando p);
void visitRegraComando(RegraComando p);
void visitComando(Comando p);
void visitAtribuicao(Atribuicao p);
void visitSubEscrito(SubEscrito p);
void visitRegraTipo(RegraTipo p);
void visitTipoPrimitivo(TipoPrimitivo p);
void visitValor(Valor p);
void visitTipoDerivado(TipoDerivado p);
void visitPonteiro(Ponteiro p);
void visitVetor(Vetor p);
void visitIf(If p);
void visitWhile(While p);
void visitFor(For p);
void visitGoto(Goto p);
void visitRotulo(Rotulo p);
void visitStruct(Struct p);
void visitDefinicaoCampoStruct(DefinicaoCampoStruct p);
void visitAtribuicaoStruct(AtribuicaoStruct p);
void visitOperadorRelacional(OperadorRelacional p);
void visitOperadorLogico(OperadorLogico p);
void visitOperadorAritmetico(OperadorAritmetico p);
void visitCase(Case p);
void visitRegraSeletor(RegraSeletor p);
void visitSeletor(Seletor p);
void visitChamadaFuncaoEProc(ChamadaFuncaoEProc p);
void visitListaIdent(ListaIdent p);
void visitFuncao(Funcao p);
void visitProcedimento(Procedimento p);
void visitExpressaoAritmetica(ExpressaoAritmetica p);
void visitOperando(Operando p);
void visitRegraAritmetica(RegraAritmetica p);
void visitExpressaoRelacional(ExpressaoRelacional p);
void visitRegraRelacional(RegraRelacional p);
void visitExpressaoLogica(ExpressaoLogica p);
void visitRegraLogico(RegraLogico p);


void visitIdent(Ident i);
void visitInteger(Integer i);
void visitDouble(Double d);
void visitChar(Char c);
void visitString(String s);

#endif

