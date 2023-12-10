#ifndef org_hipparchus_util_IterationManager_H
#define org_hipparchus_util_IterationManager_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class Incrementor$MaxCountExceededCallback;
      class IterationListener;
      class IterationEvent;
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
          mid_init$_0a2a1ac2721c0336,
          mid_init$_929833d91a321b2f,
          mid_addIterationListener_fed7170d694f54c3,
          mid_fireInitializationEvent_71cb46270a31ceff,
          mid_fireIterationPerformedEvent_71cb46270a31ceff,
          mid_fireIterationStartedEvent_71cb46270a31ceff,
          mid_fireTerminationEvent_71cb46270a31ceff,
          mid_getIterations_f2f64475e4580546,
          mid_getMaxIterations_f2f64475e4580546,
          mid_incrementIterationCount_7ae3461a92a43152,
          mid_removeIterationListener_fed7170d694f54c3,
          mid_resetIterationCount_7ae3461a92a43152,
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
