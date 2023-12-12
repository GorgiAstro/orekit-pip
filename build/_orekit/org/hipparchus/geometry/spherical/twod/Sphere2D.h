#ifndef org_hipparchus_geometry_spherical_twod_Sphere2D_H
#define org_hipparchus_geometry_spherical_twod_Sphere2D_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace geometry {
      namespace spherical {
        namespace oned {
          class Sphere1D;
        }
        namespace twod {
          class Sphere2D;
        }
      }
      class Space;
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          class Sphere2D : public ::java::lang::Object {
           public:
            enum {
              mid_checkTolerance_10f281d777284cea,
              mid_getDimension_412668abc8d889e9,
              mid_getInstance_4455c3f474f340d7,
              mid_getSubSpace_1c4d3de89e8bc553,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Sphere2D(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Sphere2D(const Sphere2D& obj) : ::java::lang::Object(obj) {}

            static jdouble SMALLEST_TOLERANCE;

            static void checkTolerance(jdouble);
            jint getDimension() const;
            static Sphere2D getInstance();
            ::org::hipparchus::geometry::spherical::oned::Sphere1D getSubSpace() const;
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
        namespace twod {
          extern PyType_Def PY_TYPE_DEF(Sphere2D);
          extern PyTypeObject *PY_TYPE(Sphere2D);

          class t_Sphere2D {
          public:
            PyObject_HEAD
            Sphere2D object;
            static PyObject *wrap_Object(const Sphere2D&);
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
