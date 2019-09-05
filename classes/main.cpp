#include <iostream>

using namespace std;

// class declaration
class Gaussian
{
	private:
		float mu, sigma2;

	public:
		
		// constructor functions
		Gaussian ();
		Gaussian (float, float);

		void setMu(float);
		void setSigma2(float);

		float getMu();
		float getSigma2();

		float evaluate (float);
		Gaussian mul (Gaussian);
		Gaussian add (Gaussian);
};

int main ()
{
    Gaussian gaussianone(40.0,225.0);

    cout << gaussianone.evaluate(10.5) << endl;
    cout << gaussianone.evaluate(55.4) << endl;
    cout << gaussiantwo.evaluate(35.6) << endl;
    cout << gaussiantwo.evaluate(29.4) << endl;

    gaussianone.setMu(45);
    gaussiantwo.setSigma2(15.4);
    cout << gaussianone.getMu() << endl;
    cout << gaussiantwo.getSigma2() << endl;

    Gaussian gaussianthree = gaussianone.mul(gaussiantwo);
    cout << gaussianthree.getMu() << endl;
    cout << gaussianthree.getSigma2() << endl;
    
    Gaussian gaussianfour = gaussianone.add(gaussiantwo);
    cout << gaussianfour.getMu() << endl;
    cout << gaussianfour.getSigma2() << endl;
}
