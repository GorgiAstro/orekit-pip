#ifndef org_hipparchus_util_IterationListener_H
#define org_hipparchus_util_IterationListener_H

#include "java/util/EventListener.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace util {
      class IterationEvent;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class IterationListener : public ::java::util::EventListener {
       public:
        enum {
          mid_initializationPerformed_28fca0f2afbc79c2,
          mid_iterationPerformed_28fca0f2afbc79c2,
          mid_iterationStarted_28fca0f2afbc79c2,
          mid_terminationPerformed_28fca0f2afbc79c2,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit IterationListener(jobject obj) : ::java::util::EventListener(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        IterationListener(const IterationListener& obj) : ::java::util::EventListener(obj) {}

        void initializationPerformed(const ::org::hipparchus::util::IterationEvent &) const;
        void iterationPerformed(const ::org::hipparchus::util::IterationEvent &) const;
        void iterationStarted(const ::org::hipparchus::util::IterationEvent &) const;
        void terminationPerformed(const ::org::hipparchus::util::IterationEvent &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(IterationListener);
      extern PyTypeObject *PY_TYPE(IterationListener);

      class t_IterationListener {
      public:
        PyObject_HEAD
        IterationListener object;
        static PyObject *wrap_Object(const IterationListener&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
