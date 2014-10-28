// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// bbd_lt_Cpp
std::vector< std::complex<double> > bbd_lt_Cpp(const std::complex<double>& s, const int& a0, const int& b0, const std::vector<double>& lambda1, const std::vector<double>& lambda2, const std::vector<double>& mu2, const std::vector<double>& gamma, const std::vector<double>& x, const std::vector<double>& y, const int& A, const int& B);
RcppExport SEXP BirthDeathBirth_bbd_lt_Cpp(SEXP sSEXP, SEXP a0SEXP, SEXP b0SEXP, SEXP lambda1SEXP, SEXP lambda2SEXP, SEXP mu2SEXP, SEXP gammaSEXP, SEXP xSEXP, SEXP ySEXP, SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const std::complex<double>& >::type s(sSEXP );
        Rcpp::traits::input_parameter< const int& >::type a0(a0SEXP );
        Rcpp::traits::input_parameter< const int& >::type b0(b0SEXP );
        Rcpp::traits::input_parameter< const std::vector<double>& >::type lambda1(lambda1SEXP );
        Rcpp::traits::input_parameter< const std::vector<double>& >::type lambda2(lambda2SEXP );
        Rcpp::traits::input_parameter< const std::vector<double>& >::type mu2(mu2SEXP );
        Rcpp::traits::input_parameter< const std::vector<double>& >::type gamma(gammaSEXP );
        Rcpp::traits::input_parameter< const std::vector<double>& >::type x(xSEXP );
        Rcpp::traits::input_parameter< const std::vector<double>& >::type y(ySEXP );
        Rcpp::traits::input_parameter< const int& >::type A(ASEXP );
        Rcpp::traits::input_parameter< const int& >::type B(BSEXP );
        std::vector< std::complex<double> > __result = bbd_lt_Cpp(s, a0, b0, lambda1, lambda2, mu2, gamma, x, y, A, B);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// BidBj_Cpp
std::vector< std::complex<double> > BidBj_Cpp(const int& B, const std::vector<double>& xvec, const std::vector< std::complex<double> >& yvec, const std::vector< std::complex<double> >& Bk1dBk);
RcppExport SEXP BirthDeathBirth_BidBj_Cpp(SEXP BSEXP, SEXP xvecSEXP, SEXP yvecSEXP, SEXP Bk1dBkSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const int& >::type B(BSEXP );
        Rcpp::traits::input_parameter< const std::vector<double>& >::type xvec(xvecSEXP );
        Rcpp::traits::input_parameter< const std::vector< std::complex<double> >& >::type yvec(yvecSEXP );
        Rcpp::traits::input_parameter< const std::vector< std::complex<double> >& >::type Bk1dBk(Bk1dBkSEXP );
        std::vector< std::complex<double> > __result = BidBj_Cpp(B, xvec, yvec, Bk1dBk);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// Bk1dBk_Cpp
std::vector< std::complex<double> > Bk1dBk_Cpp(const int& B, const std::vector<double>& xvec, const std::vector< std::complex<double> >& yvec);
RcppExport SEXP BirthDeathBirth_Bk1dBk_Cpp(SEXP BSEXP, SEXP xvecSEXP, SEXP yvecSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const int& >::type B(BSEXP );
        Rcpp::traits::input_parameter< const std::vector<double>& >::type xvec(xvecSEXP );
        Rcpp::traits::input_parameter< const std::vector< std::complex<double> >& >::type yvec(yvecSEXP );
        std::vector< std::complex<double> > __result = Bk1dBk_Cpp(B, xvec, yvec);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// lentz_Cpp
std::vector< std::complex<double> > lentz_Cpp(const int& B, const std::vector<double>& xvec, const std::vector< std::complex<double> >& yvec);
RcppExport SEXP BirthDeathBirth_lentz_Cpp(SEXP BSEXP, SEXP xvecSEXP, SEXP yvecSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const int& >::type B(BSEXP );
        Rcpp::traits::input_parameter< const std::vector<double>& >::type xvec(xvecSEXP );
        Rcpp::traits::input_parameter< const std::vector< std::complex<double> >& >::type yvec(yvecSEXP );
        std::vector< std::complex<double> > __result = lentz_Cpp(B, xvec, yvec);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// phi_Cpp
std::vector< std::complex<double> > phi_Cpp(const std::complex<double>& s, const int& a0, const int& b0, const std::vector<double>& lambda2, const std::vector<double>& mu2, const std::vector<double>& x, const std::vector<double>& y, const int& A, const int& B);
RcppExport SEXP BirthDeathBirth_phi_Cpp(SEXP sSEXP, SEXP a0SEXP, SEXP b0SEXP, SEXP lambda2SEXP, SEXP mu2SEXP, SEXP xSEXP, SEXP ySEXP, SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const std::complex<double>& >::type s(sSEXP );
        Rcpp::traits::input_parameter< const int& >::type a0(a0SEXP );
        Rcpp::traits::input_parameter< const int& >::type b0(b0SEXP );
        Rcpp::traits::input_parameter< const std::vector<double>& >::type lambda2(lambda2SEXP );
        Rcpp::traits::input_parameter< const std::vector<double>& >::type mu2(mu2SEXP );
        Rcpp::traits::input_parameter< const std::vector<double>& >::type x(xSEXP );
        Rcpp::traits::input_parameter< const std::vector<double>& >::type y(ySEXP );
        Rcpp::traits::input_parameter< const int& >::type A(ASEXP );
        Rcpp::traits::input_parameter< const int& >::type B(BSEXP );
        std::vector< std::complex<double> > __result = phi_Cpp(s, a0, b0, lambda2, mu2, x, y, A, B);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// phi_routine_Cpp
std::vector< std::complex<double> > phi_routine_Cpp(int B, std::vector<double> prod_mu2, std::vector<double> prod_lambda2, std::vector< std::complex<double> > Bk1dBk, std::vector< std::complex<double> > BidBj, std::vector< std::complex<double> > lentz);
RcppExport SEXP BirthDeathBirth_phi_routine_Cpp(SEXP BSEXP, SEXP prod_mu2SEXP, SEXP prod_lambda2SEXP, SEXP Bk1dBkSEXP, SEXP BidBjSEXP, SEXP lentzSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< int >::type B(BSEXP );
        Rcpp::traits::input_parameter< std::vector<double> >::type prod_mu2(prod_mu2SEXP );
        Rcpp::traits::input_parameter< std::vector<double> >::type prod_lambda2(prod_lambda2SEXP );
        Rcpp::traits::input_parameter< std::vector< std::complex<double> > >::type Bk1dBk(Bk1dBkSEXP );
        Rcpp::traits::input_parameter< std::vector< std::complex<double> > >::type BidBj(BidBjSEXP );
        Rcpp::traits::input_parameter< std::vector< std::complex<double> > >::type lentz(lentzSEXP );
        std::vector< std::complex<double> > __result = phi_routine_Cpp(B, prod_mu2, prod_lambda2, Bk1dBk, BidBj, lentz);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// prod_vec_Cpp
std::vector<double> prod_vec_Cpp(const int& a, const int& B, const std::vector<double>& mat);
RcppExport SEXP BirthDeathBirth_prod_vec_Cpp(SEXP aSEXP, SEXP BSEXP, SEXP matSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const int& >::type a(aSEXP );
        Rcpp::traits::input_parameter< const int& >::type B(BSEXP );
        Rcpp::traits::input_parameter< const std::vector<double>& >::type mat(matSEXP );
        std::vector<double> __result = prod_vec_Cpp(a, B, mat);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP BirthDeathBirth_rcpp_hello_world() {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        List __result = rcpp_hello_world();
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
