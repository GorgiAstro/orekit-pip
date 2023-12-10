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
          mid_init$_7ae3461a92a43152,
          mid_addEventDetector_8ef30a2ad40caceb,
          mid_clearEventsDetectors_7ae3461a92a43152,
          mid_finalize_7ae3461a92a43152,
          mid_getEphemerisGenerator_dd0e78d2be8aaf34,
          mid_getEventsDetectors_cfcfd130f9013e3e,
          mid_propagate_afc18c81ed763a96,
          mid_pythonDecRef_7ae3461a92a43152,
          mid_pythonExtension_a27fc9afd27e559d,
          mid_pythonExtension_fefb08975c10f0a1,
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
