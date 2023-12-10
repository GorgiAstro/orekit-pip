#ifndef org_hipparchus_geometry_spherical_oned_Sphere1D$NoSubSpaceException_H
#define org_hipparchus_geometry_spherical_oned_Sphere1D$NoSubSpaceException_H

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
      namespace spherical {
        namespace oned {

          class Sphere1D$NoSubSpaceException : public ::org::hipparchus::exception::MathRuntimeException {
           public:
            enum {
              mid_init$_0fa09c18fee449d5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Sphere1D$NoSubSpaceException(jobject obj) : ::org::hipparchus::exception::MathRuntimeException(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Sphere1D$NoSubSpaceException(const Sphere1D$NoSubSpaceException& obj) : ::org::hipparchus::exception::MathRuntimeException(obj) {}

            Sphere1D$NoSubSpaceException();
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
      namespace spherical {
        namespace oned {
          extern PyType_Def PY_TYPE_DEF(Sphere1D$NoSubSpaceException);
          extern PyTypeObject *PY_TYPE(Sphere1D$NoSubSpaceException);

          class t_Sphere1D$NoSubSpaceException {
          public:
            PyObject_HEAD
            Sphere1D$NoSubSpaceException object;
            static PyObject *wrap_Object(const Sphere1D$NoSubSpaceException&);
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
