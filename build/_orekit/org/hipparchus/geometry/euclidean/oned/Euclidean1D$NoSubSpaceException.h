#ifndef org_hipparchus_geometry_euclidean_oned_Euclidean1D$NoSubSpaceException_H
#define org_hipparchus_geometry_euclidean_oned_Euclidean1D$NoSubSpaceException_H

#include "org/hipparchus/exception/MathRuntimeException.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          class Euclidean1D$NoSubSpaceException : public ::org::hipparchus::exception::MathRuntimeException {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Euclidean1D$NoSubSpaceException(jobject obj) : ::org::hipparchus::exception::MathRuntimeException(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Euclidean1D$NoSubSpaceException(const Euclidean1D$NoSubSpaceException& obj) : ::org::hipparchus::exception::MathRuntimeException(obj) {}

            Euclidean1D$NoSubSpaceException();
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {
          extern PyType_Def PY_TYPE_DEF(Euclidean1D$NoSubSpaceException);
          extern PyTypeObject *PY_TYPE(Euclidean1D$NoSubSpaceException);

          class t_Euclidean1D$NoSubSpaceException {
          public:
            PyObject_HEAD
            Euclidean1D$NoSubSpaceException object;
            static PyObject *wrap_Object(const Euclidean1D$NoSubSpaceException&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
