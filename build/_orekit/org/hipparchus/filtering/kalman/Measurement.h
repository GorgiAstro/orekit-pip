#ifndef org_hipparchus_filtering_kalman_Measurement_H
#define org_hipparchus_filtering_kalman_Measurement_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
      class RealVector;
    }
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
            mid_getCovariance_b2eebabce70526d8,
            mid_getTime_9981f74b2d109da6,
            mid_getValue_92d7e8d8d3f1dfcf,
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
