#ifndef org_orekit_propagation_events_FieldAbstractDetector_H
#define org_orekit_propagation_events_FieldAbstractDetector_H

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
        class FieldAbstractDetector;
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

        class FieldAbstractDetector : public ::java::lang::Object {
         public:
          enum {
            mid_g_de1c2d709eb2829c,
            mid_getHandler_ae75cc14adc9e750,
            mid_getMaxCheckInterval_24041a63d01af092,
            mid_getMaxIterationCount_412668abc8d889e9,
            mid_getThreshold_613c8f46c659f636,
            mid_init_811e49dad2467b67,
            mid_isForward_89b302893bdbe1f1,
            mid_withHandler_35911919dc220bc4,
            mid_withMaxCheck_0a1f25400b8daf9b,
            mid_withMaxCheck_0d4709daf17db1df,
            mid_withMaxIter_e5b65867a369c327,
            mid_withThreshold_69b40d753e9def53,
            mid_create_ac1c597f89a746d9,
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
