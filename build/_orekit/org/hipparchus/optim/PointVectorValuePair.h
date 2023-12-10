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
          mid_init$_e1f4b15468f5564a,
          mid_init$_d7aa1cbd3c7df90a,
          mid_getPoint_60c7040667a7dc5c,
          mid_getPointRef_60c7040667a7dc5c,
          mid_getValue_60c7040667a7dc5c,
          mid_getValueRef_60c7040667a7dc5c,
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
