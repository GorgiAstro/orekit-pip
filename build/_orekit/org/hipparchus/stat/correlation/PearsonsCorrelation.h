#ifndef org_hipparchus_stat_correlation_PearsonsCorrelation_H
#define org_hipparchus_stat_correlation_PearsonsCorrelation_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {
        class Covariance;
      }
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

        class PearsonsCorrelation : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7ae3461a92a43152,
            mid_init$_d660c7a97bf55272,
            mid_init$_a947224c4f5ea4e8,
            mid_init$_30aa151fd03f3096,
            mid_init$_f0469298b36930cd,
            mid_computeCorrelationMatrix_d983e368b64b23a3,
            mid_computeCorrelationMatrix_e00cd33aedcc5bd0,
            mid_correlation_1ce76fb6ff382da9,
            mid_covarianceToCorrelation_e00cd33aedcc5bd0,
            mid_getCorrelationMatrix_7116bbecdd8ceb21,
            mid_getCorrelationPValues_7116bbecdd8ceb21,
            mid_getCorrelationStandardErrors_7116bbecdd8ceb21,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PearsonsCorrelation(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PearsonsCorrelation(const PearsonsCorrelation& obj) : ::java::lang::Object(obj) {}

          PearsonsCorrelation();
          PearsonsCorrelation(const JArray< JArray< jdouble > > &);
          PearsonsCorrelation(const ::org::hipparchus::stat::correlation::Covariance &);
          PearsonsCorrelation(const ::org::hipparchus::linear::RealMatrix &);
          PearsonsCorrelation(const ::org::hipparchus::linear::RealMatrix &, jint);

          ::org::hipparchus::linear::RealMatrix computeCorrelationMatrix(const JArray< JArray< jdouble > > &) const;
          ::org::hipparchus::linear::RealMatrix computeCorrelationMatrix(const ::org::hipparchus::linear::RealMatrix &) const;
          jdouble correlation(const JArray< jdouble > &, const JArray< jdouble > &) const;
          ::org::hipparchus::linear::RealMatrix covarianceToCorrelation(const ::org::hipparchus::linear::RealMatrix &) const;
          ::org::hipparchus::linear::RealMatrix getCorrelationMatrix() const;
          ::org::hipparchus::linear::RealMatrix getCorrelationPValues() const;
          ::org::hipparchus::linear::RealMatrix getCorrelationStandardErrors() const;
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
        extern PyType_Def PY_TYPE_DEF(PearsonsCorrelation);
        extern PyTypeObject *PY_TYPE(PearsonsCorrelation);

        class t_PearsonsCorrelation {
        public:
          PyObject_HEAD
          PearsonsCorrelation object;
          static PyObject *wrap_Object(const PearsonsCorrelation&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
