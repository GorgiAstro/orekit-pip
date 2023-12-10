#ifndef org_hipparchus_special_BesselJ$BesselJResult_H
#define org_hipparchus_special_BesselJ$BesselJResult_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace special {

      class BesselJ$BesselJResult : public ::java::lang::Object {
       public:
        enum {
          mid_init$_338593130772139f,
          mid_getVals_60c7040667a7dc5c,
          mid_getnVals_570ce0828f81a2c1,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit BesselJ$BesselJResult(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        BesselJ$BesselJResult(const BesselJ$BesselJResult& obj) : ::java::lang::Object(obj) {}

        BesselJ$BesselJResult(const JArray< jdouble > &, jint);

        JArray< jdouble > getVals() const;
        jint getnVals() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace special {
      extern PyType_Def PY_TYPE_DEF(BesselJ$BesselJResult);
      extern PyTypeObject *PY_TYPE(BesselJ$BesselJResult);

      class t_BesselJ$BesselJResult {
      public:
        PyObject_HEAD
        BesselJ$BesselJResult object;
        static PyObject *wrap_Object(const BesselJ$BesselJResult&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
