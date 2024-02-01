#ifndef org_hipparchus_stat_correlation_SpearmansCorrelation_H
#define org_hipparchus_stat_correlation_SpearmansCorrelation_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {
        class RankingAlgorithm;
      }
      namespace correlation {
        class PearsonsCorrelation;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace linear {
      class RealMatrix;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {

        class SpearmansCorrelation : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_init$_f5364c9a9d9cbd53,
            mid_init$_7c82bee8641041b5,
            mid_init$_fa062ba757b6dac9,
            mid_computeCorrelationMatrix_a50478fa84afaa43,
            mid_computeCorrelationMatrix_5a8a8185eb309db7,
            mid_correlation_b01af8a77d4df96f,
            mid_getCorrelationMatrix_b2eebabce70526d8,
            mid_getRankCorrelation_448a70db688c59e3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SpearmansCorrelation(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SpearmansCorrelation(const SpearmansCorrelation& obj) : ::java::lang::Object(obj) {}

          SpearmansCorrelation();
          SpearmansCorrelation(const ::org::hipparchus::linear::RealMatrix &);
          SpearmansCorrelation(const ::org::hipparchus::stat::ranking::RankingAlgorithm &);
          SpearmansCorrelation(const ::org::hipparchus::linear::RealMatrix &, const ::org::hipparchus::stat::ranking::RankingAlgorithm &);

          ::org::hipparchus::linear::RealMatrix computeCorrelationMatrix(const JArray< JArray< jdouble > > &) const;
          ::org::hipparchus::linear::RealMatrix computeCorrelationMatrix(const ::org::hipparchus::linear::RealMatrix &) const;
          jdouble correlation(const JArray< jdouble > &, const JArray< jdouble > &) const;
          ::org::hipparchus::linear::RealMatrix getCorrelationMatrix() const;
          ::org::hipparchus::stat::correlation::PearsonsCorrelation getRankCorrelation() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {
        extern PyType_Def PY_TYPE_DEF(SpearmansCorrelation);
        extern PyTypeObject *PY_TYPE(SpearmansCorrelation);

        class t_SpearmansCorrelation {
        public:
          PyObject_HEAD
          SpearmansCorrelation object;
          static PyObject *wrap_Object(const SpearmansCorrelation&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
