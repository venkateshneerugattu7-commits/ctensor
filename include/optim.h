// optim.h
#ifndef OPTIM_H
#define OPTIM_H

// Declare optimizer interfaces for the ctorch framework

class Optimizer {
public:
    virtual void step() = 0; // Update parameters
    virtual void zero_grad() = 0; // Zero the gradients
};

class SGD : public Optimizer {
private:
    double learning_rate;
public:
    SGD(double lr) : learning_rate(lr) {}
    void step() override;
    void zero_grad() override;
};

class Adam : public Optimizer {
private:
    double learning_rate;
    double beta1;
    double beta2;
public:
    Adam(double lr, double b1, double b2) : learning_rate(lr), beta1(b1), beta2(b2) {}
    void step() override;
    void zero_grad() override;
};

#endif // OPTIM_H
