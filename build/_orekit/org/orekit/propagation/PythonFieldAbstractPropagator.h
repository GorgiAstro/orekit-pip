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
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class PythonFieldAbstractPropagator : public ::org::orekit::propagation::FieldAbstractPropagator {
       public:
        enum {
          mid_init$_484998d88974267b,
          mid_addEventDetector_f929ebd2a84dbfe7,
          mid_clearEventsDetectors_0fa09c18fee449d5,
          mid_finalize_0fa09c18fee449d5,
          mid_getEphemerisGenerator_54ac43f1e933cf20,
          mid_getEventsDetectors_37528d110cff6b74,
          mid_propagate_fc770c29e3468de8,
          mid_pythonDecRef_0fa09c18fee449d5,
          mid_pythonExtension_492808a339bfa35f,
          mid_pythonExtension_3a8e7649f31fdb20,
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
