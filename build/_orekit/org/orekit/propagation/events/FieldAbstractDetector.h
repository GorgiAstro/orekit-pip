#ifndef org_orekit_propagation_events_FieldAbstractDetector_H
#define org_orekit_propagation_events_FieldAbstractDetector_H

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
        class FieldAbstractDetector;
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

        class FieldAbstractDetector : public ::java::lang::Object {
         public:
          enum {
            mid_g_41a008afe53da855,
            mid_getHandler_48965f0f9fa2ddf9,
            mid_getMaxCheckInterval_69f9ee3154bea730,
            mid_getMaxIterationCount_570ce0828f81a2c1,
            mid_getThreshold_eba8e72a22c984ac,
            mid_init_8e8de2be1664674a,
            mid_isForward_b108b35ef48e27bd,
            mid_withHandler_588d9f7485c49043,
            mid_withMaxCheck_921acf6bac04b9dd,
            mid_withMaxCheck_aae90521b0d20054,
            mid_withMaxIter_a99decc01f775036,
            mid_withThreshold_2eeda93969d276ef,
            mid_create_933932f56453be16,
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
