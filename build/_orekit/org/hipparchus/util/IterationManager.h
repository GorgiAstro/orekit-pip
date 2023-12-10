#ifndef org_hipparchus_util_IterationManager_H
#define org_hipparchus_util_IterationManager_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalStateException;
    }
    namespace util {
      class IterationListener;
      class IterationEvent;
      class Incrementor$MaxCountExceededCallback;
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
          mid_init$_99803b0791f320ff,
          mid_init$_64a8f945b6007642,
          mid_addIterationListener_ec6f037c8dacda1d,
          mid_fireInitializationEvent_5d333913f82828b1,
          mid_fireIterationPerformedEvent_5d333913f82828b1,
          mid_fireIterationStartedEvent_5d333913f82828b1,
          mid_fireTerminationEvent_5d333913f82828b1,
          mid_getIterations_570ce0828f81a2c1,
          mid_getMaxIterations_570ce0828f81a2c1,
          mid_incrementIterationCount_0fa09c18fee449d5,
          mid_removeIterationListener_ec6f037c8dacda1d,
          mid_resetIterationCount_0fa09c18fee449d5,
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
