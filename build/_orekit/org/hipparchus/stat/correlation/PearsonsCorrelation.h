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
            mid_init$_0640e6acf969ed28,
            mid_init$_edb361bfdd1ad9ae,
            mid_init$_410ce4478f691fc6,
            mid_init$_f3731847577f13e6,
            mid_init$_dcaf51fffcbe4d9e,
            mid_computeCorrelationMatrix_05cc2960cde80114,
            mid_computeCorrelationMatrix_340b47d21842d02c,
            mid_correlation_628a76297e217f13,
            mid_covarianceToCorrelation_340b47d21842d02c,
            mid_getCorrelationMatrix_70a207fcbc031df2,
            mid_getCorrelationPValues_70a207fcbc031df2,
            mid_getCorrelationStandardErrors_70a207fcbc031df2,
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
