#ifndef org_hipparchus_stat_correlation_SpearmansCorrelation_H
#define org_hipparchus_stat_correlation_SpearmansCorrelation_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {
        class PearsonsCorrelation;
      }
      namespace ranking {
        class RankingAlgorithm;
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
            mid_init$_0640e6acf969ed28,
            mid_init$_f3731847577f13e6,
            mid_init$_0fe311cb60090149,
            mid_init$_e1d0e44c82eb93d9,
            mid_computeCorrelationMatrix_05cc2960cde80114,
            mid_computeCorrelationMatrix_340b47d21842d02c,
            mid_correlation_628a76297e217f13,
            mid_getCorrelationMatrix_70a207fcbc031df2,
            mid_getRankCorrelation_2954887f1895106d,
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
