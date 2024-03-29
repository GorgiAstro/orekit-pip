#ifndef org_hipparchus_optim_PointValuePair_H
#define org_hipparchus_optim_PointValuePair_H

#include "org/hipparchus/util/Pair.h"

namespace java {
  namespace lang {
    class Class;
    class Double;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace optim {

      class PointValuePair : public ::org::hipparchus::util::Pair {
       public:
        enum {
          mid_init$_19a01fdb4baa56b0,
          mid_init$_e3635e93e84c57e0,
          mid_getPoint_be783177b060994b,
          mid_getPointRef_be783177b060994b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PointValuePair(jobject obj) : ::org::hipparchus::util::Pair(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PointValuePair(const PointValuePair& obj) : ::org::hipparchus::util::Pair(obj) {}

        PointValuePair(const JArray< jdouble > &, jdouble);
        PointValuePair(const JArray< jdouble > &, jdouble, jboolean);

        JArray< jdouble > getPoint() const;
        JArray< jdouble > getPointRef() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      extern PyType_Def PY_TYPE_DEF(PointValuePair);
      extern PyTypeObject *PY_TYPE(PointValuePair);

      class t_PointValuePair {
      public:
        PyObject_HEAD
        PointValuePair object;
        PyTypeObject *parameters[2];
        static PyTypeObject **parameters_(t_PointValuePair *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const PointValuePair&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const PointValuePair&, PyTypeObject *, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
