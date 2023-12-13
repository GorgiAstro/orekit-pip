#ifndef org_orekit_propagation_PythonAbstractPropagator_H
#define org_orekit_propagation_PythonAbstractPropagator_H

#include "org/orekit/propagation/AbstractPropagator.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class EphemerisGenerator;
      namespace events {
        class EventDetector;
      }
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
    }
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

      class PythonAbstractPropagator : public ::org::orekit::propagation::AbstractPropagator {
       public:
        enum {
          mid_init$_a1fa5dae97ea5ed2,
          mid_addEventDetector_e13564f833403504,
          mid_clearEventsDetectors_a1fa5dae97ea5ed2,
          mid_finalize_a1fa5dae97ea5ed2,
          mid_getEphemerisGenerator_5df44e253e7e7782,
          mid_getEventsDetectors_cb666ea1a15f5210,
          mid_propagate_6845ec704c846b03,
          mid_pythonDecRef_a1fa5dae97ea5ed2,
          mid_pythonExtension_6c0ce7e438e5ded4,
          mid_pythonExtension_3d7dd2314a0dd456,
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
