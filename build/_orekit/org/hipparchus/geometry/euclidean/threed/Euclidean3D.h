#ifndef org_hipparchus_geometry_euclidean_threed_Euclidean3D_H
#define org_hipparchus_geometry_euclidean_threed_Euclidean3D_H

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
        namespace threed {
          class Euclidean3D;
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
        namespace threed {

          class Euclidean3D : public ::java::lang::Object {
           public:
            enum {
              mid_getDimension_d6ab429752e7c267,
              mid_getInstance_25549d196321d5e7,
              mid_getSubSpace_86b463c8efc90624,
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
