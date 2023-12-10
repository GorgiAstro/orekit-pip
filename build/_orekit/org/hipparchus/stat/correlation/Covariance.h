#ifndef org_hipparchus_stat_correlation_Covariance_H
#define org_hipparchus_stat_correlation_Covariance_H

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

        class Covariance : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7ae3461a92a43152,
            mid_init$_d660c7a97bf55272,
            mid_init$_30aa151fd03f3096,
            mid_init$_7911f39d20980098,
            mid_init$_ac2ccfc5e69fe598,
            mid_covariance_1ce76fb6ff382da9,
            mid_covariance_6379f5334de861c2,
            mid_getCovarianceMatrix_7116bbecdd8ceb21,
            mid_getN_f2f64475e4580546,
            mid_computeCovarianceMatrix_e00cd33aedcc5bd0,
            mid_computeCovarianceMatrix_12b5b63b950f79d6,
            mid_computeCovarianceMatrix_d983e368b64b23a3,
            mid_computeCovarianceMatrix_c3d4a5038e1551c4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Covariance(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Covariance(const Covariance& obj) : ::java::lang::Object(obj) {}

          Covariance();
          Covariance(const JArray< JArray< jdouble > > &);
          Covariance(const ::org::hipparchus::linear::RealMatrix &);
          Covariance(const JArray< JArray< jdouble > > &, jboolean);
          Covariance(const ::org::hipparchus::linear::RealMatrix &, jboolean);

          jdouble covariance(const JArray< jdouble > &, const JArray< jdouble > &) const;
          jdouble covariance(const JArray< jdouble > &, const JArray< jdouble > &, jboolean) const;
          ::org::hipparchus::linear::RealMatrix getCovarianceMatrix() const;
          jint getN() const;
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
        extern PyType_Def PY_TYPE_DEF(Covariance);
        extern PyTypeObject *PY_TYPE(Covariance);

        class t_Covariance {
        public:
          PyObject_HEAD
          Covariance object;
          static PyObject *wrap_Object(const Covariance&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
