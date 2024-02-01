#ifndef org_orekit_propagation_PythonFieldAbstractPropagator_H
#define org_orekit_propagation_PythonFieldAbstractPropagator_H

#include "org/orekit/propagation/FieldAbstractPropagator.h"

namespace org {
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
          mid_init$_a44abdd035f01345,
          mid_addEventDetector_bb8991c4a46cf56d,
          mid_clearEventsDetectors_ff7cb6c242604316,
          mid_finalize_ff7cb6c242604316,
          mid_getEphemerisGenerator_96c2c30a0b0ad9e4,
          mid_getEventsDetectors_3bfef5c77ceb081a,
          mid_propagate_bcf793a6168805e3,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
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
