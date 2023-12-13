#ifndef org_orekit_propagation_events_FieldEventDetector_H
#define org_orekit_propagation_events_FieldEventDetector_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
    }
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

        class FieldEventDetector : public ::java::lang::Object {
         public:
          enum {
            mid_g_2203631097e94c79,
            mid_getHandler_3449c57ae1fbceff,
            mid_getMaxCheckInterval_d0b60c59a7966d59,
            mid_getMaxIterationCount_55546ef6a647f39b,
            mid_getThreshold_81520b552cb3fa26,
            mid_init_96d019f392abf918,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldEventDetector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldEventDetector(const FieldEventDetector& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::CalculusFieldElement g(const ::org::orekit::propagation::FieldSpacecraftState &) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldEventDetector);
        extern PyTypeObject *PY_TYPE(FieldEventDetector);

        class t_FieldEventDetector {
        public:
          PyObject_HEAD
          FieldEventDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldEventDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldEventDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldEventDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
