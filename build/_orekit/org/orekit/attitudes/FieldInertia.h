#ifndef org_orekit_attitudes_FieldInertia_H
#define org_orekit_attitudes_FieldInertia_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class FieldInertia;
      class FieldInertiaAxis;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
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

      class FieldInertia : public ::java::lang::Object {
       public:
        enum {
          mid_getInertiaAxis1_ac55a8ab71ff75ce,
          mid_getInertiaAxis2_ac55a8ab71ff75ce,
          mid_getInertiaAxis3_ac55a8ab71ff75ce,
          mid_momentum_a173408e2b1f78b2,
          mid_swap12_6b150d4002e93e81,
          mid_swap13_6b150d4002e93e81,
          mid_swap23_6b150d4002e93e81,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldInertia(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldInertia(const FieldInertia& obj) : ::java::lang::Object(obj) {}

        ::org::orekit::attitudes::FieldInertiaAxis getInertiaAxis1() const;
        ::org::orekit::attitudes::FieldInertiaAxis getInertiaAxis2() const;
        ::org::orekit::attitudes::FieldInertiaAxis getInertiaAxis3() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D momentum(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &) const;
        FieldInertia swap12() const;
        FieldInertia swap13() const;
        FieldInertia swap23() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace attitudes {
      extern PyType_Def PY_TYPE_DEF(FieldInertia);
      extern PyTypeObject *PY_TYPE(FieldInertia);

      class t_FieldInertia {
      public:
        PyObject_HEAD
        FieldInertia object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldInertia *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldInertia&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldInertia&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
