#ifndef org_orekit_propagation_PythonAbstractPropagator_H
#define org_orekit_propagation_PythonAbstractPropagator_H

#include "org/orekit/propagation/AbstractPropagator.h"

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
  namespace orekit {
    namespace propagation {
      namespace events {
        class EventDetector;
      }
      class EphemerisGenerator;
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class PythonAbstractPropagator : public ::org::orekit::propagation::AbstractPropagator {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_addEventDetector_2e2dfaf38ed50d1d,
          mid_clearEventsDetectors_0640e6acf969ed28,
          mid_finalize_0640e6acf969ed28,
          mid_getEphemerisGenerator_6a3edfe13bcee780,
          mid_getEventsDetectors_12ee61573a18f417,
          mid_propagate_b96c0d97a162784d,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonAbstractPropagator(jobject obj) : ::org::orekit::propagation::AbstractPropagator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonAbstractPropagator(const PythonAbstractPropagator& obj) : ::org::orekit::propagation::AbstractPropagator(obj) {}

        PythonAbstractPropagator();

        void addEventDetector(const ::org::orekit::propagation::events::EventDetector &) const;
        void clearEventsDetectors() const;
        void finalize() const;
        ::org::orekit::propagation::EphemerisGenerator getEphemerisGenerator() const;
        ::java::util::Collection getEventsDetectors() const;
        ::org::orekit::propagation::SpacecraftState propagate(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &) const;
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
      extern PyType_Def PY_TYPE_DEF(PythonAbstractPropagator);
      extern PyTypeObject *PY_TYPE(PythonAbstractPropagator);

      class t_PythonAbstractPropagator {
      public:
        PyObject_HEAD
        PythonAbstractPropagator object;
        static PyObject *wrap_Object(const PythonAbstractPropagator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
