#ifndef org_orekit_attitudes_Inertia_H
#define org_orekit_attitudes_Inertia_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class InertiaAxis;
      class Inertia;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
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

      class Inertia : public ::java::lang::Object {
       public:
        enum {
          mid_getInertiaAxis1_b822d9cbafca1aaf,
          mid_getInertiaAxis2_b822d9cbafca1aaf,
          mid_getInertiaAxis3_b822d9cbafca1aaf,
          mid_momentum_b48aa9aef740fa79,
          mid_swap12_0c35e3e78a73a076,
          mid_swap13_0c35e3e78a73a076,
          mid_swap23_0c35e3e78a73a076,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Inertia(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Inertia(const Inertia& obj) : ::java::lang::Object(obj) {}

        ::org::orekit::attitudes::InertiaAxis getInertiaAxis1() const;
        ::org::orekit::attitudes::InertiaAxis getInertiaAxis2() const;
        ::org::orekit::attitudes::InertiaAxis getInertiaAxis3() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D momentum(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
        Inertia swap12() const;
        Inertia swap13() const;
        Inertia swap23() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace attitudes {
      extern PyType_Def PY_TYPE_DEF(Inertia);
      extern PyTypeObject *PY_TYPE(Inertia);

      class t_Inertia {
      public:
        PyObject_HEAD
        Inertia object;
        static PyObject *wrap_Object(const Inertia&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
