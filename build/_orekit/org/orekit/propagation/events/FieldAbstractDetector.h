#ifndef org_orekit_propagation_events_FieldAbstractDetector_H
#define org_orekit_propagation_events_FieldAbstractDetector_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class FieldAbstractDetector;
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

        class FieldAbstractDetector : public ::java::lang::Object {
         public:
          enum {
            mid_g_cc79c2733879de35,
            mid_getHandler_fa8b0a49dc8c921f,
            mid_getMaxCheckInterval_a33ee6d38a1d69f9,
            mid_getMaxIterationCount_f2f64475e4580546,
            mid_getThreshold_e6d4d3215c30992a,
            mid_init_acdd8180a5dc1a8d,
            mid_isForward_e470b6d9e0d979db,
            mid_withHandler_8b81204a9c6cddc3,
            mid_withMaxCheck_921e1a2e2c178162,
            mid_withMaxCheck_f911d43ae8e5d994,
            mid_withMaxIter_449918ff3039d002,
            mid_withThreshold_420337e6b660d34c,
            mid_create_a461cc495f0e8159,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldAbstractDetector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldAbstractDetector(const FieldAbstractDetector& obj) : ::java::lang::Object(obj) {}

          static jdouble DEFAULT_MAXCHECK;
          static jint DEFAULT_MAX_ITER;
          static jdouble DEFAULT_THRESHOLD;

          ::org::hipparchus::CalculusFieldElement g(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          ::org::orekit::propagation::events::handlers::FieldEventHandler getHandler() const;
          ::org::orekit::propagation::events::FieldAdaptableInterval getMaxCheckInterval() const;
          jint getMaxIterationCount() const;
          ::org::hipparchus::CalculusFieldElement getThreshold() const;
          void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &) const;
          jboolean isForward() const;
          FieldAbstractDetector withHandler(const ::org::orekit::propagation::events::handlers::FieldEventHandler &) const;
          FieldAbstractDetector withMaxCheck(jdouble) const;
          FieldAbstractDetector withMaxCheck(const ::org::orekit::propagation::events::FieldAdaptableInterval &) const;
          FieldAbstractDetector withMaxIter(jint) const;
          FieldAbstractDetector withThreshold(const ::org::hipparchus::CalculusFieldElement &) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldAbstractDetector);
        extern PyTypeObject *PY_TYPE(FieldAbstractDetector);

        class t_FieldAbstractDetector {
        public:
          PyObject_HEAD
          FieldAbstractDetector object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_FieldAbstractDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldAbstractDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldAbstractDetector&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
