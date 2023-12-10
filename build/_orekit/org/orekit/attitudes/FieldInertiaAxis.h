#ifndef org_orekit_attitudes_FieldInertiaAxis_H
#define org_orekit_attitudes_FieldInertiaAxis_H

#include "java/lang/Object.h"

namespace org {
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
  namespace orekit {
    namespace attitudes {
      class FieldInertiaAxis;
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

      class FieldInertiaAxis : public ::java::lang::Object {
       public:
        enum {
          mid_init$_28d2e63284f478a9,
          mid_getA_5791f80683b5227e,
          mid_getI_e6d4d3215c30992a,
          mid_negate_ae6ac15c00e0e7cc,
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
