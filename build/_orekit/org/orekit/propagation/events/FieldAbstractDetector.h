#ifndef org_orekit_propagation_events_FieldAbstractDetector_H
#define org_orekit_propagation_events_FieldAbstractDetector_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace propagation {
      namespace events {
        class FieldAdaptableInterval;
        class FieldAbstractDetector;
        class FieldEventDetector;
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
            mid_g_2203631097e94c79,
            mid_getHandler_3449c57ae1fbceff,
            mid_getMaxCheckInterval_d0b60c59a7966d59,
            mid_getMaxIterationCount_55546ef6a647f39b,
            mid_getThreshold_81520b552cb3fa26,
            mid_init_96d019f392abf918,
            mid_isForward_9ab94ac1dc23b105,
            mid_withHandler_4e533893f8ea6535,
            mid_withMaxCheck_aa7da5fea1950df8,
            mid_withMaxCheck_72176bdcb26ede5b,
            mid_withMaxIter_62ae6d133f61525f,
            mid_withThreshold_cb84c1cb9922f458,
            mid_create_106f52de5ffac709,
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
