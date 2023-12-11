#ifndef org_hipparchus_util_IterationManager_H
#define org_hipparchus_util_IterationManager_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class Incrementor$MaxCountExceededCallback;
      class IterationEvent;
      class IterationListener;
    }
    namespace exception {
      class MathIllegalStateException;
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
  namespace hipparchus {
    namespace util {

      class IterationManager : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a3da1a935cb37f7b,
          mid_init$_6115a254f339da5a,
          mid_addIterationListener_cf70a3bbdf828b86,
          mid_fireInitializationEvent_68991010a72f5d93,
          mid_fireIterationPerformedEvent_68991010a72f5d93,
          mid_fireIterationStartedEvent_68991010a72f5d93,
          mid_fireTerminationEvent_68991010a72f5d93,
          mid_getIterations_412668abc8d889e9,
          mid_getMaxIterations_412668abc8d889e9,
          mid_incrementIterationCount_0640e6acf969ed28,
          mid_removeIterationListener_cf70a3bbdf828b86,
          mid_resetIterationCount_0640e6acf969ed28,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit IterationManager(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        IterationManager(const IterationManager& obj) : ::java::lang::Object(obj) {}

        IterationManager(jint);
        IterationManager(jint, const ::org::hipparchus::util::Incrementor$MaxCountExceededCallback &);

        void addIterationListener(const ::org::hipparchus::util::IterationListener &) const;
        void fireInitializationEvent(const ::org::hipparchus::util::IterationEvent &) const;
        void fireIterationPerformedEvent(const ::org::hipparchus::util::IterationEvent &) const;
        void fireIterationStartedEvent(const ::org::hipparchus::util::IterationEvent &) const;
        void fireTerminationEvent(const ::org::hipparchus::util::IterationEvent &) const;
        jint getIterations() const;
        jint getMaxIterations() const;
        void incrementIterationCount() const;
        void removeIterationListener(const ::org::hipparchus::util::IterationListener &) const;
        void resetIterationCount() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(IterationManager);
      extern PyTypeObject *PY_TYPE(IterationManager);

      class t_IterationManager {
      public:
        PyObject_HEAD
        IterationManager object;
        static PyObject *wrap_Object(const IterationManager&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
