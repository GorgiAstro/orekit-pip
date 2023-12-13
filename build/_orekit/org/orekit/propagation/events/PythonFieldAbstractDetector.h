#ifndef org_orekit_propagation_events_PythonFieldAbstractDetector_H
#define org_orekit_propagation_events_PythonFieldAbstractDetector_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class FieldAdaptableInterval;
        namespace handlers {
          class FieldEventHandler;
        }
      }
      class FieldSpacecraftState;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
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
            mid_init$_f96af71e81af8c64,
            mid_create_106f52de5ffac709,
            mid_finalize_a1fa5dae97ea5ed2,
            mid_g_2203631097e94c79,
            mid_pythonDecRef_a1fa5dae97ea5ed2,
            mid_pythonExtension_6c0ce7e438e5ded4,
            mid_pythonExtension_3d7dd2314a0dd456,
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
