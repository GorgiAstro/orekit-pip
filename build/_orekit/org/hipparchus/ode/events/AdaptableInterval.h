#ifndef org_hipparchus_ode_events_AdaptableInterval_H
#define org_hipparchus_ode_events_AdaptableInterval_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace ode {
      class ODEStateAndDerivative;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        class AdaptableInterval : public ::java::lang::Object {
         public:
          enum {
            mid_currentInterval_3b8f73a4d2dddc4a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AdaptableInterval(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AdaptableInterval(const AdaptableInterval& obj) : ::java::lang::Object(obj) {}

          jdouble currentInterval(const ::org::hipparchus::ode::ODEStateAndDerivative &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        extern PyType_Def PY_TYPE_DEF(AdaptableInterval);
        extern PyTypeObject *PY_TYPE(AdaptableInterval);

        class t_AdaptableInterval {
        public:
          PyObject_HEAD
          AdaptableInterval object;
          static PyObject *wrap_Object(const AdaptableInterval&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
