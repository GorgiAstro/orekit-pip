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
    namespace geometry {
      namespace spherical {
        namespace oned {
          class Sphere1D$NoSubSpaceException;
          class Sphere1D;
        }
      }
      class Space;
    }
    namespace exception {
      class MathIllegalArgumentException;
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
              mid_checkTolerance_1ad26e8c8c0cd65b,
              mid_getDimension_d6ab429752e7c267,
              mid_getInstance_19e97269a1512723,
              mid_getSubSpace_a30bf0b437744017,
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
