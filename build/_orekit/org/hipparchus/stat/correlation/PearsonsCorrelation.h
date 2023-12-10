#ifndef org_hipparchus_stat_correlation_PearsonsCorrelation_H
#define org_hipparchus_stat_correlation_PearsonsCorrelation_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
    namespace stat {
      namespace correlation {
        class Covariance;
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

        class PearsonsCorrelation : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_init$_a0befc7f3dc19e41,
            mid_init$_6c5e3ad3650bb2d2,
            mid_init$_c67473bd6cfaa69b,
            mid_init$_108eaf33d77cb0c0,
            mid_computeCorrelationMatrix_62c0bfb50b5dacc0,
            mid_computeCorrelationMatrix_e9b72403ad502221,
            mid_correlation_b561c6892e9976f8,
            mid_covarianceToCorrelation_e9b72403ad502221,
            mid_getCorrelationMatrix_688b496048ff947b,
            mid_getCorrelationPValues_688b496048ff947b,
            mid_getCorrelationStandardErrors_688b496048ff947b,
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
