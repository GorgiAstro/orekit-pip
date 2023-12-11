#ifndef org_orekit_propagation_events_PythonFieldEventDetector_H
#define org_orekit_propagation_events_PythonFieldEventDetector_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      namespace events {
        namespace handlers {
          class FieldEventHandler;
        }
        class FieldAdaptableInterval;
        class FieldEventDetector;
      }
    }
    namespace time {
      class FieldAbsoluteDate;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
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

        class PythonFieldEventDetector : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_finalize_0640e6acf969ed28,
            mid_g_de1c2d709eb2829c,
            mid_getHandler_ae75cc14adc9e750,
            mid_getMaxCheckInterval_24041a63d01af092,
            mid_getMaxIterationCount_412668abc8d889e9,
            mid_getThreshold_613c8f46c659f636,
            mid_init_811e49dad2467b67,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonFieldEventDetector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonFieldEventDetector(const PythonFieldEventDetector& obj) : ::java::lang::Object(obj) {}

          PythonFieldEventDetector();

          void finalize() const;
          ::org::hipparchus::CalculusFieldElement g(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          ::org::orekit::propagation::events::handlers::FieldEventHandler getHandler() const;
          ::org::orekit::propagation::events::FieldAdaptableInterval getMaxCheckInterval() const;
          jint getMaxIterationCount() const;
          ::org::hipparchus::CalculusFieldElement getThreshold() const;
          void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonFieldEventDetector);
        extern PyTypeObject *PY_TYPE(PythonFieldEventDetector);

        class t_PythonFieldEventDetector {
        public:
          PyObject_HEAD
          PythonFieldEventDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PythonFieldEventDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PythonFieldEventDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PythonFieldEventDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
