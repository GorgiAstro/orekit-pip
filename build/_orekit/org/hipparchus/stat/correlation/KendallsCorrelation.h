#ifndef org_hipparchus_stat_correlation_KendallsCorrelation_H
#define org_hipparchus_stat_correlation_KendallsCorrelation_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
    namespace exception {
      class MathIllegalArgumentException;
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
            mid_init$_0fa09c18fee449d5,
            mid_init$_a0befc7f3dc19e41,
            mid_init$_c67473bd6cfaa69b,
            mid_computeCorrelationMatrix_62c0bfb50b5dacc0,
            mid_computeCorrelationMatrix_e9b72403ad502221,
            mid_correlation_b561c6892e9976f8,
            mid_getCorrelationMatrix_688b496048ff947b,
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
