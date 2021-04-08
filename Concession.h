// Nisarg Upadhyaya
// 19CS30031

#ifndef _CONCESSION_H
#define _CONCESSION_H

class Concession{
    protected:
        Concession();
        ~Concession();
};

class GeneralConcession : public Concession{
    private:
        static const double sConcessionFactor;
};

class LadiesConcession : public Concession{
    private:
        static const double sConcessionFactor;
};

class SeniorCitizenConcession : public Concession{

};

class DivyaangConcession : public Concession{

};

#endif
