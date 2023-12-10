#ifndef org_orekit_attitudes_Inertia_H
#define org_orekit_attitudes_Inertia_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class Inertia;
      class InertiaAxis;
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
          mid_getInertiaAxis1_88f98d66bcc1d5e4,
          mid_getInertiaAxis2_88f98d66bcc1d5e4,
          mid_getInertiaAxis3_88f98d66bcc1d5e4,
          mid_momentum_d0fe714ef34714f7,
          mid_swap12_abcaa399dcf67539,
          mid_swap13_abcaa399dcf67539,
          mid_swap23_abcaa399dcf67539,
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
