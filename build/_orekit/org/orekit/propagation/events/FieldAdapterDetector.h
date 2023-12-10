#ifndef org_orekit_propagation_events_FieldAdapterDetector_H
#define org_orekit_propagation_events_FieldAdapterDetector_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class FieldEventDetector;
        namespace handlers {
          class FieldEventHandler;
        }
        class FieldAdaptableInterval;
      }
      class FieldSpacecraftState;
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
            mid_init$_1843b26af41f9c8e,
            mid_g_cc79c2733879de35,
            mid_getDetector_9afb3f6694da2222,
            mid_getHandler_fa8b0a49dc8c921f,
            mid_getMaxCheckInterval_a33ee6d38a1d69f9,
            mid_getMaxIterationCount_f2f64475e4580546,
            mid_getThreshold_e6d4d3215c30992a,
            mid_init_acdd8180a5dc1a8d,
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
