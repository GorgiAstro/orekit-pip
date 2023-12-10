#ifndef org_hipparchus_random_UnitSphereRandomVectorGenerator_H
#define org_hipparchus_random_UnitSphereRandomVectorGenerator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace random {
      class RandomGenerator;
      class RandomVectorGenerator;
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
    namespace random {

      class UnitSphereRandomVectorGenerator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0a2a1ac2721c0336,
          mid_init$_3838ea28c063a110,
          mid_nextVector_7cdc325af0834901,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit UnitSphereRandomVectorGenerator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        UnitSphereRandomVectorGenerator(const UnitSphereRandomVectorGenerator& obj) : ::java::lang::Object(obj) {}

        UnitSphereRandomVectorGenerator(jint);
        UnitSphereRandomVectorGenerator(jint, const ::org::hipparchus::random::RandomGenerator &);

        JArray< jdouble > nextVector() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace random {
      extern PyType_Def PY_TYPE_DEF(UnitSphereRandomVectorGenerator);
      extern PyTypeObject *PY_TYPE(UnitSphereRandomVectorGenerator);

      class t_UnitSphereRandomVectorGenerator {
      public:
        PyObject_HEAD
        UnitSphereRandomVectorGenerator object;
        static PyObject *wrap_Object(const UnitSphereRandomVectorGenerator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
