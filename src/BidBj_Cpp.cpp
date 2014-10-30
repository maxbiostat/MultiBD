#include <Rcpp.h>
#include "bbd.h"
using namespace Rcpp;

// [[Rcpp::export]]
std::vector<std::complex<double>> BidBj_Cpp(const int B, const std::vector<double>& xvec, const std::vector<std::complex<double>>& yvec, const std::vector<std::complex<double>>& Bk1dBk) {
  
  std::vector<std::complex<double>> res((B+1)*(B+1)),ans(B+1);
  const std::complex<double> one(1.0,0.0), zero(0.0,0.0);
  
  for (int i=0; i<=B; i++) {
  	for (int j=i; j<=B; j++) {
			if (j==i) {
				ans[j] = one;	
			} else if (j==(i+1)) {
        std::complex<double> tmp = reciprocal(Bk1dBk[j-1]);
				ans[j] = reciprocal(Bk1dBk[j-1]);	
			}
				else ans[j] = yvec[j-1]*ans[j-1] + xvec[j-1]*ans[j-2];
			res[i*(B+1) + j] = reciprocal(ans[j]);
			if (res[i*(B+1) + j]==zero) break;
		}
	}
  return(res);
}