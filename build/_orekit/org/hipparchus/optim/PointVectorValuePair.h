#ifndef org_hipparchus_optim_PointVectorValuePair_H
#define org_hipparchus_optim_PointVectorValuePair_H

#include "org/hipparchus/util/Pair.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace optim {

      class PointVectorValuePair : public ::org::hipparchus::util::Pair {
       public:
        enum {
          mid_init$_0d03c8a1d7f56f02,
          mid_init$_85d26ec3c1274525,
          mid_getPoint_7cdc325af0834901,
          mid_getPointRef_7cdc325af0834901,
          mid_getValue_7cdc325af0834901,
          mid_getValueRef_7cdc325af0834901,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PointVectorValuePair(jobject obj) : ::org::hipparchus::util::Pair(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PointVectorValuePair(const PointVectorValuePair& obj) : ::org::hipparchus::util::Pair(obj) {}

        PointVectorValuePair(const JArray< jdouble > &, const JArray< jdouble > &);
        PointVectorValuePair(const JArray< jdouble > &, const JArray< jdouble > &, jboolean);

        JArray< jdouble > getPoint() const;
        JArray< jdouble > getPointRef() const;
        JArray< jdouble > getValue() const;
        JArray< jdouble > getValueRef() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      extern PyType_Def PY_TYPE_DEF(PointVectorValuePair);
      extern PyTypeObject *PY_TYPE(PointVectorValuePair);

      class t_PointVectorValuePair {
      public:
        PyObject_HEAD
        PointVectorValuePair object;
        PyTypeObject *parameters[2];
        static PyTypeObject **parameters_(t_PointVectorValuePair *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const PointVectorValuePair&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const PointVectorValuePair&, PyTypeObject *, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
