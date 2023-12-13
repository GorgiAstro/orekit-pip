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
          mid_init$_a1fa5dae97ea5ed2,
          mid_init$_44ed599e93e8a30c,
          mid_init$_435c21a2398bab3e,
          mid_canIncrement_9ab94ac1dc23b105,
          mid_canIncrement_96f51a3f36d3a2a7,
          mid_getCount_55546ef6a647f39b,
          mid_getMaximalCount_55546ef6a647f39b,
          mid_increment_a1fa5dae97ea5ed2,
          mid_increment_44ed599e93e8a30c,
          mid_reset_a1fa5dae97ea5ed2,
          mid_withCallback_9888a6776bef88ed,
          mid_withCount_260714b254a0ceb0,
          mid_withMaximalCount_260714b254a0ceb0,
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
