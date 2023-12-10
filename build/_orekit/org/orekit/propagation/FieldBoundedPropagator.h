#ifndef org_orekit_propagation_FieldBoundedPropagator_H
#define org_orekit_propagation_FieldBoundedPropagator_H

#include "org/orekit/propagation/FieldPropagator.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
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
    namespace propagation {

      class FieldBoundedPropagator : public ::org::orekit::propagation::FieldPropagator {
       public:
        enum {
          mid_getMaxDate_09b0a926600dfc14,
          mid_getMinDate_09b0a926600dfc14,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldBoundedPropagator(jobject obj) : ::org::orekit::propagation::FieldPropagator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldBoundedPropagator(const FieldBoundedPropagator& obj) : ::org::orekit::propagation::FieldPropagator(obj) {}

        ::org::orekit::time::FieldAbsoluteDate getMaxDate() const;
        ::org::orekit::time::FieldAbsoluteDate getMinDate() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      extern PyType_Def PY_TYPE_DEF(FieldBoundedPropagator);
      extern PyTypeObject *PY_TYPE(FieldBoundedPropagator);

      class t_FieldBoundedPropagator {
      public:
        PyObject_HEAD
        FieldBoundedPropagator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldBoundedPropagator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldBoundedPropagator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldBoundedPropagator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
