#ifndef org_hipparchus_util_Incrementor_H
#define org_hipparchus_util_Incrementor_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class Incrementor$MaxCountExceededCallback;
      class Incrementor;
    }
    namespace exception {
      class NullArgumentException;
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

      class Incrementor : public ::java::lang::Object {
       public:
        enum {
          mid_init$_7ae3461a92a43152,
          mid_init$_0a2a1ac2721c0336,
          mid_init$_929833d91a321b2f,
          mid_canIncrement_e470b6d9e0d979db,
          mid_canIncrement_e95e4c7cd3dd17ff,
          mid_getCount_f2f64475e4580546,
          mid_getMaximalCount_f2f64475e4580546,
          mid_increment_7ae3461a92a43152,
          mid_increment_0a2a1ac2721c0336,
          mid_reset_7ae3461a92a43152,
          mid_withCallback_d6623a2186de5203,
          mid_withCount_1db12502a7c68c36,
          mid_withMaximalCount_1db12502a7c68c36,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Incrementor(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Incrementor(const Incrementor& obj) : ::java::lang::Object(obj) {}

        Incrementor();
        Incrementor(jint);
        Incrementor(jint, const ::org::hipparchus::util::Incrementor$MaxCountExceededCallback &);

        jboolean canIncrement() const;
        jboolean canIncrement(jint) const;
        jint getCount() const;
        jint getMaximalCount() const;
        void increment() const;
        void increment(jint) const;
        void reset() const;
        Incrementor withCallback(const ::org::hipparchus::util::Incrementor$MaxCountExceededCallback &) const;
        Incrementor withCount(jint) const;
        Incrementor withMaximalCount(jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(Incrementor);
      extern PyTypeObject *PY_TYPE(Incrementor);

      class t_Incrementor {
      public:
        PyObject_HEAD
        Incrementor object;
        static PyObject *wrap_Object(const Incrementor&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
