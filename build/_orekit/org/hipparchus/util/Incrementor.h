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
          mid_init$_ff7cb6c242604316,
          mid_init$_8fd427ab23829bf5,
          mid_init$_b104bfda2e8f97e8,
          mid_canIncrement_eee3de00fe971136,
          mid_canIncrement_e24caac814db1df5,
          mid_getCount_d6ab429752e7c267,
          mid_getMaximalCount_d6ab429752e7c267,
          mid_increment_ff7cb6c242604316,
          mid_increment_8fd427ab23829bf5,
          mid_reset_ff7cb6c242604316,
          mid_withCallback_b05b4a14f5dc90d6,
          mid_withCount_113e89b12b8bfc74,
          mid_withMaximalCount_113e89b12b8bfc74,
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
