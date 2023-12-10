#ifndef org_orekit_propagation_PythonAbstractPropagator_H
#define org_orekit_propagation_PythonAbstractPropagator_H

#include "org/orekit/propagation/AbstractPropagator.h"

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
          mid_init$_0fa09c18fee449d5,
          mid_addEventDetector_efb7003d866d4523,
          mid_clearEventsDetectors_0fa09c18fee449d5,
          mid_finalize_0fa09c18fee449d5,
          mid_getEphemerisGenerator_18d439b26e70ccd0,
          mid_getEventsDetectors_37528d110cff6b74,
          mid_propagate_a69ef29c3ea1e1fa,
          mid_pythonDecRef_0fa09c18fee449d5,
          mid_pythonExtension_492808a339bfa35f,
          mid_pythonExtension_3a8e7649f31fdb20,
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
