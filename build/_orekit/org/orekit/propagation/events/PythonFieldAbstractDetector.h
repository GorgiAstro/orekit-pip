#ifndef org_orekit_propagation_events_PythonFieldAbstractDetector_H
#define org_orekit_propagation_events_PythonFieldAbstractDetector_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {
          class FieldEventHandler;
        }
        class FieldAdaptableInterval;
      }
      class FieldSpacecraftState;
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        class PythonFieldAbstractDetector : public ::org::orekit::propagation::events::FieldAbstractDetector {
         public:
          enum {
            mid_init$_9e1919c3f6e6cac4,
            mid_create_933932f56453be16,
            mid_finalize_0fa09c18fee449d5,
            mid_g_41a008afe53da855,
            mid_pythonDecRef_0fa09c18fee449d5,
            mid_pythonExtension_492808a339bfa35f,
            mid_pythonExtension_3a8e7649f31fdb20,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonFieldAbstractDetector(jobject obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonFieldAbstractDetector(const PythonFieldAbstractDetector& obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {}

          PythonFieldAbstractDetector(const ::org::orekit::propagation::events::FieldAdaptableInterval &, const ::org::hipparchus::CalculusFieldElement &, jint, const ::org::orekit::propagation::events::handlers::FieldEventHandler &);

          ::org::orekit::propagation::events::FieldAbstractDetector create(const ::org::orekit::propagation::events::FieldAdaptableInterval &, const ::org::hipparchus::CalculusFieldElement &, jint, const ::org::orekit::propagation::events::handlers::FieldEventHandler &) const;
          void finalize() const;
          ::org::hipparchus::CalculusFieldElement g(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        extern PyType_Def PY_TYPE_DEF(PythonFieldAbstractDetector);
        extern PyTypeObject *PY_TYPE(PythonFieldAbstractDetector);

        class t_PythonFieldAbstractDetector {
        public:
          PyObject_HEAD
          PythonFieldAbstractDetector object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_PythonFieldAbstractDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PythonFieldAbstractDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PythonFieldAbstractDetector&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
