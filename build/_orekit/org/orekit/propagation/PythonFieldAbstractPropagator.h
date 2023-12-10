#ifndef org_orekit_propagation_PythonFieldAbstractPropagator_H
#define org_orekit_propagation_PythonFieldAbstractPropagator_H

#include "org/orekit/propagation/FieldAbstractPropagator.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
  namespace util {
    class Collection;
  }
}
namespace org {
  namespace hipparchus {
    class Field;
  }
  namespace orekit {
    namespace propagation {
      namespace events {
        class FieldEventDetector;
      }
      class FieldEphemerisGenerator;
      class FieldSpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class PythonFieldAbstractPropagator : public ::org::orekit::propagation::FieldAbstractPropagator {
       public:
        enum {
          mid_init$_205c34b8e33cf33f,
          mid_addEventDetector_1843b26af41f9c8e,
          mid_clearEventsDetectors_7ae3461a92a43152,
          mid_finalize_7ae3461a92a43152,
          mid_getEphemerisGenerator_a9ea70419e870eb4,
          mid_getEventsDetectors_cfcfd130f9013e3e,
          mid_propagate_195e701ebc75aca3,
          mid_pythonDecRef_7ae3461a92a43152,
          mid_pythonExtension_a27fc9afd27e559d,
          mid_pythonExtension_fefb08975c10f0a1,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonFieldAbstractPropagator(jobject obj) : ::org::orekit::propagation::FieldAbstractPropagator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonFieldAbstractPropagator(const PythonFieldAbstractPropagator& obj) : ::org::orekit::propagation::FieldAbstractPropagator(obj) {}

        PythonFieldAbstractPropagator(const ::org::hipparchus::Field &);

        void addEventDetector(const ::org::orekit::propagation::events::FieldEventDetector &) const;
        void clearEventsDetectors() const;
        void finalize() const;
        ::org::orekit::propagation::FieldEphemerisGenerator getEphemerisGenerator() const;
        ::java::util::Collection getEventsDetectors() const;
        ::org::orekit::propagation::FieldSpacecraftState propagate(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::time::FieldAbsoluteDate &) const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      extern PyType_Def PY_TYPE_DEF(PythonFieldAbstractPropagator);
      extern PyTypeObject *PY_TYPE(PythonFieldAbstractPropagator);

      class t_PythonFieldAbstractPropagator {
      public:
        PyObject_HEAD
        PythonFieldAbstractPropagator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_PythonFieldAbstractPropagator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const PythonFieldAbstractPropagator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const PythonFieldAbstractPropagator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
