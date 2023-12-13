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
            mid_init$_a1fa5dae97ea5ed2,
            mid_init$_84bd15e0995d0c79,
            mid_init$_189a9187f1b87acf,
            mid_init$_7d9c97be304480a2,
            mid_computeCorrelationMatrix_2d1b7d41dfd6b278,
            mid_computeCorrelationMatrix_be124f4006dc9f69,
            mid_correlation_3207f9c2ae7271d9,
            mid_getCorrelationMatrix_f77d745f2128c391,
            mid_getRankCorrelation_1a1aafc4780288e5,
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
