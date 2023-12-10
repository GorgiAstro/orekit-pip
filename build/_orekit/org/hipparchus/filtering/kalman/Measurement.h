#ifndef org_hipparchus_filtering_kalman_Measurement_H
#define org_hipparchus_filtering_kalman_Measurement_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
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
    namespace filtering {
      namespace kalman {

        class Measurement : public ::java::lang::Object {
         public:
          enum {
            mid_getCovariance_7116bbecdd8ceb21,
            mid_getTime_456d9a2f64d6b28d,
            mid_getValue_6d9adf1d5b463928,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Measurement(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Measurement(const Measurement& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::linear::RealMatrix getCovariance() const;
          jdouble getTime() const;
          ::org::hipparchus::linear::RealVector getValue() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        extern PyType_Def PY_TYPE_DEF(Measurement);
        extern PyTypeObject *PY_TYPE(Measurement);

        class t_Measurement {
        public:
          PyObject_HEAD
          Measurement object;
          static PyObject *wrap_Object(const Measurement&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
