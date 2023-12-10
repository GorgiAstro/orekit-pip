#ifndef org_hipparchus_linear_RealVector$Entry_H
#define org_hipparchus_linear_RealVector$Entry_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
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
    namespace linear {

      class RealVector$Entry : public ::java::lang::Object {
       public:
        enum {
          mid_init$_df4ee11a06094b55,
          mid_getIndex_f2f64475e4580546,
          mid_getValue_456d9a2f64d6b28d,
          mid_setIndex_0a2a1ac2721c0336,
          mid_setValue_77e0f9a1f260e2e5,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit RealVector$Entry(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        RealVector$Entry(const RealVector$Entry& obj) : ::java::lang::Object(obj) {}

        RealVector$Entry(const ::org::hipparchus::linear::RealVector &);

        jint getIndex() const;
        jdouble getValue() const;
        void setIndex(jint) const;
        void setValue(jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(RealVector$Entry);
      extern PyTypeObject *PY_TYPE(RealVector$Entry);

      class t_RealVector$Entry {
      public:
        PyObject_HEAD
        RealVector$Entry object;
        static PyObject *wrap_Object(const RealVector$Entry&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
