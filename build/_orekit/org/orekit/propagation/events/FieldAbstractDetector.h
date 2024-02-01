#ifndef org_orekit_propagation_events_FieldAbstractDetector_H
#define org_orekit_propagation_events_FieldAbstractDetector_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class FieldEventDetector;
        namespace handlers {
          class FieldEventHandler;
        }
        class FieldAbstractDetector;
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
            mid_g_ac6fccc69d1b2d9e,
            mid_getHandler_ae50020f8bfe1c59,
            mid_getMaxCheckInterval_0f2b5ee7b716ac92,
            mid_getMaxIterationCount_d6ab429752e7c267,
            mid_getThreshold_08d37e3f77b7239d,
            mid_init_357211ab77703f3f,
            mid_isForward_eee3de00fe971136,
            mid_withHandler_a6ca3a2735927243,
            mid_withMaxCheck_eaf7dcc877e1e0f1,
            mid_withMaxCheck_10514b3cc2b64aba,
            mid_withMaxIter_c24c4034477e75c9,
            mid_withThreshold_e517eb0f8982f10f,
            mid_create_6aaef69387f9170d,
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
