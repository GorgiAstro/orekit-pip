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
            mid_init$_0640e6acf969ed28,
            mid_init$_edb361bfdd1ad9ae,
            mid_init$_f3731847577f13e6,
            mid_computeCorrelationMatrix_05cc2960cde80114,
            mid_computeCorrelationMatrix_340b47d21842d02c,
            mid_correlation_628a76297e217f13,
            mid_getCorrelationMatrix_70a207fcbc031df2,
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
