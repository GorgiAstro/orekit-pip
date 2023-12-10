#ifndef org_orekit_propagation_events_FieldAdapterDetector_H
#define org_orekit_propagation_events_FieldAdapterDetector_H

#include "java/lang/Object.h"

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
        class FieldEventDetector;
      }
      class FieldSpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
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
            mid_init$_f929ebd2a84dbfe7,
            mid_g_41a008afe53da855,
            mid_getDetector_4fe06ecc019ea51d,
            mid_getHandler_48965f0f9fa2ddf9,
            mid_getMaxCheckInterval_69f9ee3154bea730,
            mid_getMaxIterationCount_570ce0828f81a2c1,
            mid_getThreshold_eba8e72a22c984ac,
            mid_init_8e8de2be1664674a,
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
