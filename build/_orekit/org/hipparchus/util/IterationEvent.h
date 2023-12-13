#ifndef org_hipparchus_util_IterationEvent_H
#define org_hipparchus_util_IterationEvent_H

#include "java/util/EventObject.h"

namespace java {
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class IterationEvent : public ::java::util::EventObject {
       public:
        enum {
          mid_init$_1b148ccb530f535f,
          mid_getIterations_55546ef6a647f39b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit IterationEvent(jobject obj) : ::java::util::EventObject(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        IterationEvent(const IterationEvent& obj) : ::java::util::EventObject(obj) {}

        IterationEvent(const ::java::lang::Object &, jint);

        jint getIterations() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(IterationEvent);
      extern PyTypeObject *PY_TYPE(IterationEvent);

      class t_IterationEvent {
      public:
        PyObject_HEAD
        IterationEvent object;
        static PyObject *wrap_Object(const IterationEvent&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
