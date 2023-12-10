#ifndef org_hipparchus_util_Incrementor_H
#define org_hipparchus_util_Incrementor_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
    }
    namespace util {
      class Incrementor$MaxCountExceededCallback;
      class Incrementor;
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
          mid_init$_0fa09c18fee449d5,
          mid_init$_99803b0791f320ff,
          mid_init$_64a8f945b6007642,
          mid_canIncrement_b108b35ef48e27bd,
          mid_canIncrement_b6e9be1df30aebaf,
          mid_getCount_570ce0828f81a2c1,
          mid_getMaximalCount_570ce0828f81a2c1,
          mid_increment_0fa09c18fee449d5,
          mid_increment_99803b0791f320ff,
          mid_reset_0fa09c18fee449d5,
          mid_withCallback_5e17552b7df732f4,
          mid_withCount_bbd7a2dca0197fe7,
          mid_withMaximalCount_bbd7a2dca0197fe7,
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
