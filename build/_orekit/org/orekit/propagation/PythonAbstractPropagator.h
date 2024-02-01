#ifndef org_orekit_propagation_PythonAbstractPropagator_H
#define org_orekit_propagation_PythonAbstractPropagator_H

#include "org/orekit/propagation/AbstractPropagator.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class EphemerisGenerator;
      class SpacecraftState;
      namespace events {
        class EventDetector;
      }
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
          mid_init$_ff7cb6c242604316,
          mid_addEventDetector_d5d8be0538a03d97,
          mid_clearEventsDetectors_ff7cb6c242604316,
          mid_finalize_ff7cb6c242604316,
          mid_getEphemerisGenerator_9f3d902ece22e1af,
          mid_getEventsDetectors_3bfef5c77ceb081a,
          mid_propagate_aaae977c62060398,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
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
