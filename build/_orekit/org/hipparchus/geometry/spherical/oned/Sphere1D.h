#ifndef org_hipparchus_geometry_spherical_oned_Sphere1D_H
#define org_hipparchus_geometry_spherical_oned_Sphere1D_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace geometry {
      namespace spherical {
        namespace oned {
          class Sphere1D$NoSubSpaceException;
          class Sphere1D;
        }
      }
      class Space;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          class Sphere1D : public ::java::lang::Object {
           public:
            enum {
              mid_checkTolerance_77e0f9a1f260e2e5,
              mid_getDimension_f2f64475e4580546,
              mid_getInstance_5912521fb294e3a6,
              mid_getSubSpace_0438ef5f9a5edb53,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Sphere1D(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Sphere1D(const Sphere1D& obj) : ::java::lang::Object(obj) {}

            static jdouble SMALLEST_TOLERANCE;

            static void checkTolerance(jdouble);
            jint getDimension() const;
            static Sphere1D getInstance();
            ::org::hipparchus::geometry::Space getSubSpace() const;
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
          extern PyType_Def PY_TYPE_DEF(Sphere1D);
          extern PyTypeObject *PY_TYPE(Sphere1D);

          class t_Sphere1D {
          public:
            PyObject_HEAD
            Sphere1D object;
            static PyObject *wrap_Object(const Sphere1D&);
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
