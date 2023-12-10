#ifndef org_hipparchus_stat_correlation_SpearmansCorrelation_H
#define org_hipparchus_stat_correlation_SpearmansCorrelation_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace linear {
      class RealMatrix;
    }
    namespace stat {
      namespace ranking {
        class RankingAlgorithm;
      }
      namespace correlation {
        class PearsonsCorrelation;
      }
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
            mid_init$_7ae3461a92a43152,
            mid_init$_30aa151fd03f3096,
            mid_init$_11432da5a1f9916c,
            mid_init$_48a59056bb495241,
            mid_computeCorrelationMatrix_d983e368b64b23a3,
            mid_computeCorrelationMatrix_e00cd33aedcc5bd0,
            mid_correlation_1ce76fb6ff382da9,
            mid_getCorrelationMatrix_7116bbecdd8ceb21,
            mid_getRankCorrelation_21aaef08a739a2a4,
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
