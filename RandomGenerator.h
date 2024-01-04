#ifndef mdsim_RandomGenerator_h
#define mdsim_RandomGenerator_h

class RandomGenerator {

public:
    RandomGenerator();

    // Returns a pseudorandom, uniformly distributed double value between 0.0 and 1.0 from this random number
    // generator's sequence.
    double randomDouble();

    // Returns a pseudorandom, Gaussian ("normally") distributed double value with mean 0.0 and standard deviation 1.0
    // from this random number generator's sequence.
    double boxMullerGaussian();
};

#endif