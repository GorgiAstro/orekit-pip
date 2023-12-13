#ifndef org_hipparchus_geometry_euclidean_threed_Euclidean3D_H
#define org_hipparchus_geometry_euclidean_threed_Euclidean3D_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      class Space;
      namespace euclidean {
        namespace threed {
          class Euclidean3D;
        }
        namespace twod {
          class Euclidean2D;
        }
      }
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
      namespace euclidean {
        namespace threed {

          class Euclidean3D : public ::java::lang::Object {
           public:
            enum {
              mid_getDimension_55546ef6a647f39b,
              mid_getInstance_88ee1c467f3fd489,
              mid_getSubSpace_378fd1928e817aa0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Euclidean3D(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Euclidean3D(const Euclidean3D& obj) : ::java::lang::Object(obj) {}

            jint getDimension() const;
            static Euclidean3D getInstance();
            ::org::hipparchus::geometry::euclidean::twod::Euclidean2D getSubSpace() const;
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
        namespace threed {
          extern PyType_Def PY_TYPE_DEF(Euclidean3D);
          extern PyTypeObject *PY_TYPE(Euclidean3D);

          class t_Euclidean3D {
          public:
            PyObject_HEAD
            Euclidean3D object;
            static PyObject *wrap_Object(const Euclidean3D&);
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
