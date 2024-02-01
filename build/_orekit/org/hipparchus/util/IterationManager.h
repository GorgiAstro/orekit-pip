#ifndef org_hipparchus_util_IterationManager_H
#define org_hipparchus_util_IterationManager_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class IterationEvent;
      class Incrementor$MaxCountExceededCallback;
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
          mid_init$_8fd427ab23829bf5,
          mid_init$_b104bfda2e8f97e8,
          mid_addIterationListener_37806003fdee99a3,
          mid_fireInitializationEvent_8c87cb407ca6cefb,
          mid_fireIterationPerformedEvent_8c87cb407ca6cefb,
          mid_fireIterationStartedEvent_8c87cb407ca6cefb,
          mid_fireTerminationEvent_8c87cb407ca6cefb,
          mid_getIterations_d6ab429752e7c267,
          mid_getMaxIterations_d6ab429752e7c267,
          mid_incrementIterationCount_ff7cb6c242604316,
          mid_removeIterationListener_37806003fdee99a3,
          mid_resetIterationCount_ff7cb6c242604316,
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
