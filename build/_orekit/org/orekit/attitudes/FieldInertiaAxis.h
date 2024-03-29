#ifndef org_orekit_attitudes_FieldInertiaAxis_H
#define org_orekit_attitudes_FieldInertiaAxis_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
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
    class CalculusFieldElement;
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

      class FieldInertiaAxis : public ::java::lang::Object {
       public:
        enum {
          mid_init$_2ca3d0f9cc0458ff,
          mid_getA_d1b42a6748e907f9,
          mid_getI_08d37e3f77b7239d,
          mid_negate_7fbf812b0f49865b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldInertiaAxis(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldInertiaAxis(const FieldInertiaAxis& obj) : ::java::lang::Object(obj) {}

        FieldInertiaAxis(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &);

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getA() const;
        ::org::hipparchus::CalculusFieldElement getI() const;
        FieldInertiaAxis negate() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace attitudes {
      extern PyType_Def PY_TYPE_DEF(FieldInertiaAxis);
      extern PyTypeObject *PY_TYPE(FieldInertiaAxis);

      class t_FieldInertiaAxis {
      public:
        PyObject_HEAD
        FieldInertiaAxis object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldInertiaAxis *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldInertiaAxis&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldInertiaAxis&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
