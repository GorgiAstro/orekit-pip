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
          mid_init$_bdf205176b90cff1,
          mid_getIndex_570ce0828f81a2c1,
          mid_getValue_dff5885c2c873297,
          mid_setIndex_99803b0791f320ff,
          mid_setValue_17db3a65980d3441,
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
