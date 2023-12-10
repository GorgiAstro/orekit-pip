#ifndef org_hipparchus_geometry_euclidean_oned_Euclidean1D_H
#define org_hipparchus_geometry_euclidean_oned_Euclidean1D_H

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
        namespace oned {
          class Euclidean1D$NoSubSpaceException;
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
        namespace oned {

          class Euclidean1D : public ::java::lang::Object {
           public:
            enum {
              mid_getDimension_570ce0828f81a2c1,
              mid_getInstance_dc026f3a7e9402dd,
              mid_getSubSpace_ebbd6b2d39ab0e4f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Euclidean1D(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Euclidean1D(const Euclidean1D& obj) : ::java::lang::Object(obj) {}

            jint getDimension() const;
            static Euclidean1D getInstance();
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
      namespace euclidean {
        namespace oned {
          extern PyType_Def PY_TYPE_DEF(Euclidean1D);
          extern PyTypeObject *PY_TYPE(Euclidean1D);

          class t_Euclidean1D {
          public:
            PyObject_HEAD
            Euclidean1D object;
            static PyObject *wrap_Object(const Euclidean1D&);
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
