#ifndef org_hipparchus_stat_correlation_KendallsCorrelation_H
#define org_hipparchus_stat_correlation_KendallsCorrelation_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
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

        class KendallsCorrelation : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7ae3461a92a43152,
            mid_init$_d660c7a97bf55272,
            mid_init$_30aa151fd03f3096,
            mid_computeCorrelationMatrix_d983e368b64b23a3,
            mid_computeCorrelationMatrix_e00cd33aedcc5bd0,
            mid_correlation_1ce76fb6ff382da9,
            mid_getCorrelationMatrix_7116bbecdd8ceb21,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KendallsCorrelation(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KendallsCorrelation(const KendallsCorrelation& obj) : ::java::lang::Object(obj) {}

          KendallsCorrelation();
          KendallsCorrelation(const JArray< JArray< jdouble > > &);
          KendallsCorrelation(const ::org::hipparchus::linear::RealMatrix &);

          ::org::hipparchus::linear::RealMatrix computeCorrelationMatrix(const JArray< JArray< jdouble > > &) const;
          ::org::hipparchus::linear::RealMatrix computeCorrelationMatrix(const ::org::hipparchus::linear::RealMatrix &) const;
          jdouble correlation(const JArray< jdouble > &, const JArray< jdouble > &) const;
          ::org::hipparchus::linear::RealMatrix getCorrelationMatrix() const;
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
        extern PyType_Def PY_TYPE_DEF(KendallsCorrelation);
        extern PyTypeObject *PY_TYPE(KendallsCorrelation);

        class t_KendallsCorrelation {
        public:
          PyObject_HEAD
          KendallsCorrelation object;
          static PyObject *wrap_Object(const KendallsCorrelation&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
