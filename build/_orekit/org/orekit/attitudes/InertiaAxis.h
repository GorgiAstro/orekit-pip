#ifndef org_orekit_attitudes_InertiaAxis_H
#define org_orekit_attitudes_InertiaAxis_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace attitudes {
      class InertiaAxis;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace attitudes {

      class InertiaAxis : public ::java::lang::Object {
       public:
        enum {
          mid_getA_032312bdeb3f2f93,
          mid_getI_9981f74b2d109da6,
          mid_negate_451b696bc5d42d4b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit InertiaAxis(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        InertiaAxis(const InertiaAxis& obj) : ::java::lang::Object(obj) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D getA() const;
        jdouble getI() const;
        InertiaAxis negate() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace attitudes {
      extern PyType_Def PY_TYPE_DEF(InertiaAxis);
      extern PyTypeObject *PY_TYPE(InertiaAxis);

      class t_InertiaAxis {
      public:
        PyObject_HEAD
        InertiaAxis object;
        static PyObject *wrap_Object(const InertiaAxis&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
