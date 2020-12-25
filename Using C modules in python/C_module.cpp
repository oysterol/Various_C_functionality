#include<string>
#include<boost/python.hpp>
#include <iostream>

using namespace std;



namespace cmodifiertest{

    double integration(double a, double b, int n){
        double sum=0,dx=(b-a)/n;
            for(int i=0; i<n; i++){
                sum+=sin(a+i)*dx;
            }
        return sum;
    };
    const std::string hello(const std::string name){
        return ("Hello "+ name +" dickbag!! :)");
    };

}

BOOST_PYTHON_MODULE(CTestMod){
    using namespace boost::python;
    using namespace cmodifiertest;
    def("hei", hello);
    def("integrate", integration);  
}
