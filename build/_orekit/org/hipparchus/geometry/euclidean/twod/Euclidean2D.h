#ifndef org_hipparchus_geometry_euclidean_twod_Euclidean2D_H
#define org_hipparchus_geometry_euclidean_twod_Euclidean2D_H

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
      namespace euclidean {
        namespace twod {
          class Euclidean2D;
        }
        namespace oned {
          class Euclidean1D;
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
      namespace euclidean {
        namespace twod {

          class Euclidean2D : public ::java::lang::Object {
           public:
            enum {
              mid_getDimension_570ce0828f81a2c1,
              mid_getInstance_6c1c21e9986360d8,
              mid_getSubSpace_dc026f3a7e9402dd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Euclidean2D(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Euclidean2D(const Euclidean2D& obj) : ::java::lang::Object(obj) {}

            jint getDimension() const;
            static Euclidean2D getInstance();
            ::org::hipparchus::geometry::euclidean::oned::Euclidean1D getSubSpace() const;
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
        namespace twod {
          extern PyType_Def PY_TYPE_DEF(Euclidean2D);
          extern PyTypeObject *PY_TYPE(Euclidean2D);

          class t_Euclidean2D {
          public:
            PyObject_HEAD
            Euclidean2D object;
            static PyObject *wrap_Object(const Euclidean2D&);
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
