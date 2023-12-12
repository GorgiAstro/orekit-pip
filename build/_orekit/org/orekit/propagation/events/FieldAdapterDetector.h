#ifndef org_orekit_propagation_events_FieldAdapterDetector_H
#define org_orekit_propagation_events_FieldAdapterDetector_H

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
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        class FieldAdapterDetector : public ::java::lang::Object {
         public:
          enum {
            mid_init$_2ffeff0ffaf1deef,
            mid_g_de1c2d709eb2829c,
            mid_getDetector_07d9256595c42b86,
            mid_getHandler_ae75cc14adc9e750,
            mid_getMaxCheckInterval_24041a63d01af092,
            mid_getMaxIterationCount_412668abc8d889e9,
            mid_getThreshold_613c8f46c659f636,
            mid_init_811e49dad2467b67,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldAdapterDetector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldAdapterDetector(const FieldAdapterDetector& obj) : ::java::lang::Object(obj) {}

          FieldAdapterDetector(const ::org::orekit::propagation::events::FieldEventDetector &);

          ::org::hipparchus::CalculusFieldElement g(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          ::org::orekit::propagation::events::FieldEventDetector getDetector() const;
          ::org::orekit::propagation::events::handlers::FieldEventHandler getHandler() const;
          ::org::orekit::propagation::events::FieldAdaptableInterval getMaxCheckInterval() const;
          jint getMaxIterationCount() const;
          ::org::hipparchus::CalculusFieldElement getThreshold() const;
          void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldAdapterDetector);
        extern PyTypeObject *PY_TYPE(FieldAdapterDetector);

        class t_FieldAdapterDetector {
        public:
          PyObject_HEAD
          FieldAdapterDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldAdapterDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldAdapterDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldAdapterDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
