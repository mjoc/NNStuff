// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// dataclamp
LogicalVector dataclamp(SEXP input);
RcppExport SEXP antfarm_dataclamp(SEXP inputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type input(inputSEXP);
    rcpp_result_gen = Rcpp::wrap(dataclamp(input));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hello
List rcpp_hello(NumericVector a, NumericVector b);
RcppExport SEXP antfarm_rcpp_hello(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_hello(a, b));
    return rcpp_result_gen;
END_RCPP
}