#ifndef org_hipparchus_util_Incrementor_H
#define org_hipparchus_util_Incrementor_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class Incrementor;
      class Incrementor$MaxCountExceededCallback;
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
          mid_init$_0640e6acf969ed28,
          mid_init$_a3da1a935cb37f7b,
          mid_init$_6115a254f339da5a,
          mid_canIncrement_89b302893bdbe1f1,
          mid_canIncrement_e034cac2b514bb09,
          mid_getCount_412668abc8d889e9,
          mid_getMaximalCount_412668abc8d889e9,
          mid_increment_0640e6acf969ed28,
          mid_increment_a3da1a935cb37f7b,
          mid_reset_0640e6acf969ed28,
          mid_withCallback_7d206f2689e80805,
          mid_withCount_332fb07b2e329de7,
          mid_withMaximalCount_332fb07b2e329de7,
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
