#ifndef org_orekit_propagation_PythonFieldAbstractPropagator_H
#define org_orekit_propagation_PythonFieldAbstractPropagator_H

#include "org/orekit/propagation/FieldAbstractPropagator.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      class FieldEphemerisGenerator;
      namespace events {
        class FieldEventDetector;
      }
    }
    namespace time {
      class FieldAbsoluteDate;
    }
  }
  namespace hipparchus {
    class Field;
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
  namespace util {
    class Collection;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class PythonFieldAbstractPropagator : public ::org::orekit::propagation::FieldAbstractPropagator {
       public:
        enum {
          mid_init$_979ae7f57a96b096,
          mid_addEventDetector_2ffeff0ffaf1deef,
          mid_clearEventsDetectors_0640e6acf969ed28,
          mid_finalize_0640e6acf969ed28,
          mid_getEphemerisGenerator_07866493eb3b3f17,
          mid_getEventsDetectors_12ee61573a18f417,
          mid_propagate_78f4b3ee8066e6b6,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
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
