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
            mid_init$_ff7cb6c242604316,
            mid_init$_11ecdbb5af7ed67d,
            mid_init$_4f6cba88847b2fef,
            mid_init$_f5364c9a9d9cbd53,
            mid_init$_56802cbfc5b9e059,
            mid_computeCorrelationMatrix_a50478fa84afaa43,
            mid_computeCorrelationMatrix_5a8a8185eb309db7,
            mid_correlation_b01af8a77d4df96f,
            mid_covarianceToCorrelation_5a8a8185eb309db7,
            mid_getCorrelationMatrix_b2eebabce70526d8,
            mid_getCorrelationPValues_b2eebabce70526d8,
            mid_getCorrelationStandardErrors_b2eebabce70526d8,
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
