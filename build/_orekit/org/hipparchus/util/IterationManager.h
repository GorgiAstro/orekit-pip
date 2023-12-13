#ifndef org_hipparchus_util_IterationManager_H
#define org_hipparchus_util_IterationManager_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class IterationListener;
      class IterationEvent;
      class Incrementor$MaxCountExceededCallback;
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
          mid_init$_44ed599e93e8a30c,
          mid_init$_435c21a2398bab3e,
          mid_addIterationListener_5d4437a88351831e,
          mid_fireInitializationEvent_28fca0f2afbc79c2,
          mid_fireIterationPerformedEvent_28fca0f2afbc79c2,
          mid_fireIterationStartedEvent_28fca0f2afbc79c2,
          mid_fireTerminationEvent_28fca0f2afbc79c2,
          mid_getIterations_55546ef6a647f39b,
          mid_getMaxIterations_55546ef6a647f39b,
          mid_incrementIterationCount_a1fa5dae97ea5ed2,
          mid_removeIterationListener_5d4437a88351831e,
          mid_resetIterationCount_a1fa5dae97ea5ed2,
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
