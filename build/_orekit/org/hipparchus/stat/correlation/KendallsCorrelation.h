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
            mid_init$_a1fa5dae97ea5ed2,
            mid_init$_07adb42ffaa97d31,
            mid_init$_84bd15e0995d0c79,
            mid_computeCorrelationMatrix_2d1b7d41dfd6b278,
            mid_computeCorrelationMatrix_be124f4006dc9f69,
            mid_correlation_3207f9c2ae7271d9,
            mid_getCorrelationMatrix_f77d745f2128c391,
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
