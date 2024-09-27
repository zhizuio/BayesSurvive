// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// func_MCMC_graph_cpp
Rcpp::List func_MCMC_graph_cpp(const Rcpp::List sobj, const Rcpp::List hyperpar, const Rcpp::List ini, const uint S, const std::string method, const bool MRF_2b);
RcppExport SEXP _BayesSurvive_func_MCMC_graph_cpp(SEXP sobjSEXP, SEXP hyperparSEXP, SEXP iniSEXP, SEXP SSEXP, SEXP methodSEXP, SEXP MRF_2bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List >::type sobj(sobjSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type hyperpar(hyperparSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type ini(iniSEXP);
    Rcpp::traits::input_parameter< const uint >::type S(SSEXP);
    Rcpp::traits::input_parameter< const std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< const bool >::type MRF_2b(MRF_2bSEXP);
    rcpp_result_gen = Rcpp::wrap(func_MCMC_graph_cpp(sobj, hyperpar, ini, S, method, MRF_2b));
    return rcpp_result_gen;
END_RCPP
}
// settingInterval_cpp
Rcpp::List settingInterval_cpp(const arma::vec y, const arma::vec delta_, const arma::vec s_, const unsigned int J_);
RcppExport SEXP _BayesSurvive_settingInterval_cpp(SEXP ySEXP, SEXP delta_SEXP, SEXP s_SEXP, SEXP J_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type delta_(delta_SEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type s_(s_SEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type J_(J_SEXP);
    rcpp_result_gen = Rcpp::wrap(settingInterval_cpp(y, delta_, s_, J_));
    return rcpp_result_gen;
END_RCPP
}
// updateBH_cpp
arma::vec updateBH_cpp(const arma::mat x_, const arma::vec beta_, const unsigned int J_, const arma::mat ind_r_d_, const arma::vec hPriorSh_, const arma::vec d_, const double c0_);
RcppExport SEXP _BayesSurvive_updateBH_cpp(SEXP x_SEXP, SEXP beta_SEXP, SEXP J_SEXP, SEXP ind_r_d_SEXP, SEXP hPriorSh_SEXP, SEXP d_SEXP, SEXP c0_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type x_(x_SEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type beta_(beta_SEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type J_(J_SEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type ind_r_d_(ind_r_d_SEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type hPriorSh_(hPriorSh_SEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type d_(d_SEXP);
    Rcpp::traits::input_parameter< const double >::type c0_(c0_SEXP);
    rcpp_result_gen = Rcpp::wrap(updateBH_cpp(x_, beta_, J_, ind_r_d_, hPriorSh_, d_, c0_));
    return rcpp_result_gen;
END_RCPP
}
// updateBH_list_cpp
Rcpp::List updateBH_list_cpp(const Rcpp::List x_, const Rcpp::List beta_, const Rcpp::List J_, const Rcpp::List ind_r_d_, const Rcpp::List hPriorSh_, const Rcpp::List d_, const double c0_);
RcppExport SEXP _BayesSurvive_updateBH_list_cpp(SEXP x_SEXP, SEXP beta_SEXP, SEXP J_SEXP, SEXP ind_r_d_SEXP, SEXP hPriorSh_SEXP, SEXP d_SEXP, SEXP c0_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List >::type x_(x_SEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type beta_(beta_SEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type J_(J_SEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type ind_r_d_(ind_r_d_SEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type hPriorSh_(hPriorSh_SEXP);
    Rcpp::traits::input_parameter< const Rcpp::List >::type d_(d_SEXP);
    Rcpp::traits::input_parameter< const double >::type c0_(c0_SEXP);
    rcpp_result_gen = Rcpp::wrap(updateBH_list_cpp(x_, beta_, J_, ind_r_d_, hPriorSh_, d_, c0_));
    return rcpp_result_gen;
END_RCPP
}
// calJpost_helper_cpp
Rcpp::List calJpost_helper_cpp(const arma::vec cbtau, const arma::mat x_, const arma::vec beta_, const arma::vec h_, const arma::vec hPriorSh_, const double c0_, const unsigned int J_, const arma::mat ind_r_d_, const arma::mat ind_d_);
RcppExport SEXP _BayesSurvive_calJpost_helper_cpp(SEXP cbtauSEXP, SEXP x_SEXP, SEXP beta_SEXP, SEXP h_SEXP, SEXP hPriorSh_SEXP, SEXP c0_SEXP, SEXP J_SEXP, SEXP ind_r_d_SEXP, SEXP ind_d_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type cbtau(cbtauSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type x_(x_SEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type beta_(beta_SEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type h_(h_SEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type hPriorSh_(hPriorSh_SEXP);
    Rcpp::traits::input_parameter< const double >::type c0_(c0_SEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type J_(J_SEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type ind_r_d_(ind_r_d_SEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type ind_d_(ind_d_SEXP);
    rcpp_result_gen = Rcpp::wrap(calJpost_helper_cpp(cbtau, x_, beta_, h_, hPriorSh_, c0_, J_, ind_r_d_, ind_d_));
    return rcpp_result_gen;
END_RCPP
}
// updateRP_genomic_cpp
Rcpp::List updateRP_genomic_cpp(const unsigned int p, const arma::mat x_, const unsigned int J_, arma::mat ind_r_, arma::mat ind_d_, arma::mat ind_r_d_, arma::vec be_, const double be_prop_sd_scale, arma::vec ga_, arma::vec h_, const double tau, const double cb);
RcppExport SEXP _BayesSurvive_updateRP_genomic_cpp(SEXP pSEXP, SEXP x_SEXP, SEXP J_SEXP, SEXP ind_r_SEXP, SEXP ind_d_SEXP, SEXP ind_r_d_SEXP, SEXP be_SEXP, SEXP be_prop_sd_scaleSEXP, SEXP ga_SEXP, SEXP h_SEXP, SEXP tauSEXP, SEXP cbSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const unsigned int >::type p(pSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type x_(x_SEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type J_(J_SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type ind_r_(ind_r_SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type ind_d_(ind_d_SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type ind_r_d_(ind_r_d_SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type be_(be_SEXP);
    Rcpp::traits::input_parameter< const double >::type be_prop_sd_scale(be_prop_sd_scaleSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type ga_(ga_SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type h_(h_SEXP);
    Rcpp::traits::input_parameter< const double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const double >::type cb(cbSEXP);
    rcpp_result_gen = Rcpp::wrap(updateRP_genomic_cpp(p, x_, J_, ind_r_, ind_d_, ind_r_d_, be_, be_prop_sd_scale, ga_, h_, tau, cb));
    return rcpp_result_gen;
END_RCPP
}
